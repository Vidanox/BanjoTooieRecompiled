#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80800E60_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800E64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800E68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800E6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800E70: jal         0x8009E6EC
    // 0x80800E74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800E74: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800E78: addiu       $t6, $v0, -0x1F
    ctx->r14 = ADD32(ctx->r2, -0X1F);
    // 0x80800E7C: sltiu       $at, $t6, 0x34
    ctx->r1 = ctx->r14 < 0X34 ? 1 : 0;
    // 0x80800E80: beq         $at, $zero, L_80800EE4
    if (ctx->r1 == 0) {
        // 0x80800E84: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80800EE4;
    }
    // 0x80800E84: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800E88: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(163, 0X1A84) << 16);
    // 0x80800E8C: addu        $at, $at, $t6
    gpr jr_addend_80800E94 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800E90: lw          $t6, 0x1A84($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(163, 0X1A84));
    // 0x80800E94: jr          $t6
    // 0x80800E98: nop

    switch (jr_addend_80800E94 >> 2) {
        case 0: goto L_80800EF4; break;
        case 1: goto L_80800EF4; break;
        case 2: goto L_80800EF4; break;
        case 3: goto L_80800EE4; break;
        case 4: goto L_80800EE4; break;
        case 5: goto L_80800EE4; break;
        case 6: goto L_80800EE4; break;
        case 7: goto L_80800EE4; break;
        case 8: goto L_80800EE4; break;
        case 9: goto L_80800EE4; break;
        case 10: goto L_80800EE4; break;
        case 11: goto L_80800EE4; break;
        case 12: goto L_80800EE4; break;
        case 13: goto L_80800EE4; break;
        case 14: goto L_80800EE4; break;
        case 15: goto L_80800EF4; break;
        case 16: goto L_80800EE4; break;
        case 17: goto L_80800EE4; break;
        case 18: goto L_80800EE4; break;
        case 19: goto L_80800EE4; break;
        case 20: goto L_80800EE4; break;
        case 21: goto L_80800EE4; break;
        case 22: goto L_80800EE4; break;
        case 23: goto L_80800EE4; break;
        case 24: goto L_80800EE4; break;
        case 25: goto L_80800EE4; break;
        case 26: goto L_80800EE4; break;
        case 27: goto L_80800EE4; break;
        case 28: goto L_80800EE4; break;
        case 29: goto L_80800EE4; break;
        case 30: goto L_80800EE4; break;
        case 31: goto L_80800EE4; break;
        case 32: goto L_80800EE4; break;
        case 33: goto L_80800EE4; break;
        case 34: goto L_80800EE4; break;
        case 35: goto L_80800EE4; break;
        case 36: goto L_80800EE4; break;
        case 37: goto L_80800EE4; break;
        case 38: goto L_80800EE4; break;
        case 39: goto L_80800E9C; break;
        case 40: goto L_80800EE4; break;
        case 41: goto L_80800EE4; break;
        case 42: goto L_80800EE4; break;
        case 43: goto L_80800EE4; break;
        case 44: goto L_80800EE4; break;
        case 45: goto L_80800EE4; break;
        case 46: goto L_80800EE4; break;
        case 47: goto L_80800EF4; break;
        case 48: goto L_80800EE4; break;
        case 49: goto L_80800EE4; break;
        case 50: goto L_80800EF4; break;
        case 51: goto L_80800EF4; break;
        default: switch_error(__func__, 0x80800E94, 0x80801A84);
    }
    // 0x80800E98: nop

L_80800E9C:
    // 0x80800E9C: jal         0x80099A4C
    // 0x80800EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A4C(rdram, ctx);
        goto after_1;
    // 0x80800EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800EA4: lw          $t7, 0x188($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X188);
    // 0x80800EA8: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x80800EAC: lw          $v1, 0x188($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X188);
    // 0x80800EB0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80800EB4: jal         0x80087270
    // 0x80800EB8: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    _chfaircoinbox_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x80800EB8: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    after_2:
    // 0x80800EBC: lw          $t8, 0x188($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X188);
    // 0x80800EC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EC4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800EC8: jal         0x8009E830
    // 0x80800ECC: sw          $v0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r2;
    func_8009E830(rdram, ctx);
        goto after_3;
    // 0x80800ECC: sw          $v0, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->r2;
    after_3:
    // 0x80800ED0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ED4: jal         0x8009E5C8
    // 0x80800ED8: addiu       $a1, $zero, 0x121
    ctx->r5 = ADD32(0, 0X121);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80800ED8: addiu       $a1, $zero, 0x121
    ctx->r5 = ADD32(0, 0X121);
    after_4:
    // 0x80800EDC: b           L_80800EF8
    // 0x80800EE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800EF8;
    // 0x80800EE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800EE4:
    // 0x80800EE4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80800EE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EEC: jalr        $t9
    // 0x80800EF0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x80800EF0: nop

    after_5:
L_80800EF4:
    // 0x80800EF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800EF8:
    // 0x80800EF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800EFC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800F00: jr          $ra
    // 0x80800F04: nop

    return;
    // 0x80800F04: nop

;}
RECOMP_FUNC void bsvan_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F08: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F0C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F10: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80800F14: jal         0x80000E60
    // 0x80800F18: addiu       $a1, $a1, -0x646C
    ctx->r5 = ADD32(ctx->r5, -0X646C);
    func_80800E60_bsvan(rdram, ctx);
        goto after_0;
    // 0x80800F18: addiu       $a1, $a1, -0x646C
    ctx->r5 = ADD32(ctx->r5, -0X646C);
    after_0:
    // 0x80800F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F24: jr          $ra
    // 0x80800F28: nop

    return;
    // 0x80800F28: nop

;}
RECOMP_FUNC void bsvan_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F2C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F30: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F34: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80800F38: jal         0x80000E60
    // 0x80800F3C: addiu       $a1, $a1, 0x2FF8
    ctx->r5 = ADD32(ctx->r5, 0X2FF8);
    func_80800E60_bsvan(rdram, ctx);
        goto after_0;
    // 0x80800F3C: addiu       $a1, $a1, 0x2FF8
    ctx->r5 = ADD32(ctx->r5, 0X2FF8);
    after_0:
    // 0x80800F40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F48: jr          $ra
    // 0x80800F4C: nop

    return;
    // 0x80800F4C: nop

;}
RECOMP_FUNC void func_80800F50_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F58: jal         0x800000F0
    // 0x80800F5C: nop

    bsvan_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800F5C: nop

    after_0:
    // 0x80800F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F68: jr          $ra
    // 0x80800F6C: nop

    return;
    // 0x80800F6C: nop

;}
RECOMP_FUNC void func_80800F70_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F70: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800F74: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800F78: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800F7C: jal         0x800001A8
    // 0x80800F80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bsvan_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800F80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800F84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F88: addiu       $a1, $zero, 0xEC
    ctx->r5 = ADD32(0, 0XEC);
    // 0x80800F8C: jal         0x8008CB3C
    // 0x80800F90: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800F90: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x80800F94: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80800F98: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800FA4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800FA8: jal         0x8009FFD8
    // 0x80800FAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800FAC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800FB0: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800FB4: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FBC: jal         0x8008C9BC
    // 0x80800FC0: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_3;
    // 0x80800FC0: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_3:
    // 0x80800FC4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(163, 0X1B54) << 16);
    // 0x80800FC8: lwc1        $f4, 0x1B54($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(163, 0X1B54));
    // 0x80800FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FD0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80800FD4: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    // 0x80800FD8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80800FDC: jal         0x8008C9F0
    // 0x80800FE0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_4;
    // 0x80800FE0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x80800FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FE8: jal         0x8008CA30
    // 0x80800FEC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_5;
    // 0x80800FEC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_5:
    // 0x80800FF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FF4: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80800FF8: jal         0x8009C99C
    // 0x80800FFC: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_6;
    // 0x80800FFC: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_6:
    // 0x80801000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801004: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80801008: jal         0x8009BFE4
    // 0x8080100C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_7;
    // 0x8080100C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_7:
    // 0x80801010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801014: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80801018: jal         0x8009C554
    // 0x8080101C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_8;
    // 0x8080101C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_8:
    // 0x80801020: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801024: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801028: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080102C: jr          $ra
    // 0x80801030: nop

    return;
    // 0x80801030: nop

;}
RECOMP_FUNC void func_80801034_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801034: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801038: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080103C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80801040: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80801044: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801048: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8080104C: jal         0x8009D3A8
    // 0x80801050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x80801050: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80801054: jal         0x80000000
    // 0x80801058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsvan(rdram, ctx);
        goto after_1;
    // 0x80801058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080105C: jal         0x8000032C
    // 0x80801060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080032C_bsvan(rdram, ctx);
        goto after_2;
    // 0x80801060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801064: jal         0x8009EF10
    // 0x80801068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_3;
    // 0x80801068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080106C: bne         $v0, $zero, L_80801078
    if (ctx->r2 != 0) {
        // 0x80801070: nop
    
            goto L_80801078;
    }
    // 0x80801070: nop

    // 0x80801074: addiu       $s1, $zero, 0x11A
    ctx->r17 = ADD32(0, 0X11A);
L_80801078:
    // 0x80801078: jal         0x8008E148
    // 0x8080107C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_4;
    // 0x8080107C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801080: beq         $v0, $zero, L_80801094
    if (ctx->r2 == 0) {
        // 0x80801084: nop
    
            goto L_80801094;
    }
    // 0x80801084: nop

    // 0x80801088: jal         0x800848B0
    // 0x8080108C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_5;
    // 0x8080108C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801090: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80801094:
    // 0x80801094: jal         0x8008DD04
    // 0x80801098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_6;
    // 0x80801098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080109C: beq         $v0, $zero, L_808010A8
    if (ctx->r2 == 0) {
        // 0x808010A0: nop
    
            goto L_808010A8;
    }
    // 0x808010A0: nop

    // 0x808010A4: addiu       $s1, $zero, 0x114
    ctx->r17 = ADD32(0, 0X114);
L_808010A8:
    // 0x808010A8: jal         0x800000BC
    // 0x808010AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000BC_bsvan(rdram, ctx);
        goto after_7;
    // 0x808010AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808010B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010B4: jal         0x80091A58
    // 0x808010B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_8;
    // 0x808010B8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_8:
    // 0x808010BC: beq         $v0, $zero, L_808010C8
    if (ctx->r2 == 0) {
        // 0x808010C0: nop
    
            goto L_808010C8;
    }
    // 0x808010C0: nop

    // 0x808010C4: addiu       $s1, $zero, 0x115
    ctx->r17 = ADD32(0, 0X115);
L_808010C8:
    // 0x808010C8: jal         0x8008E35C
    // 0x808010CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_9;
    // 0x808010CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808010D0: beq         $v0, $zero, L_808010DC
    if (ctx->r2 == 0) {
        // 0x808010D4: nop
    
            goto L_808010DC;
    }
    // 0x808010D4: nop

    // 0x808010D8: addiu       $s1, $zero, 0x11B
    ctx->r17 = ADD32(0, 0X11B);
L_808010DC:
    // 0x808010DC: jal         0x800003BC
    // 0x808010E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsvan_entrypoint_3(rdram, ctx);
        goto after_10;
    // 0x808010E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808010E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010E8: jal         0x8009E5C8
    // 0x808010EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_11;
    // 0x808010EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_11:
    // 0x808010F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808010F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808010F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808010FC: jr          $ra
    // 0x80801100: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80801100: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsvan_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801104: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801108: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(163, 0X1CCC) << 16);
    // 0x8080110C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801110: jr          $ra
    // 0x80801114: lw          $v0, 0x1CCC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CCC));
    return;
    // 0x80801114: lw          $v0, 0x1CCC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CCC));
;}
RECOMP_FUNC void func_80801118_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080111C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801120: jal         0x800845D0
    // 0x80801124: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801124: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801128: jal         0x800000F0
    // 0x8080112C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsvan_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x8080112C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801138: jr          $ra
    // 0x8080113C: nop

    return;
    // 0x8080113C: nop

;}
RECOMP_FUNC void func_80801140_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801140: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801148: jal         0x800001A8
    // 0x8080114C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsvan_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080114C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801150: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801154: jal         0x800845D8
    // 0x80801158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80801158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x8080115C: lui         $a2, 0x3F03
    ctx->r6 = S32(0X3F03 << 16);
    // 0x80801160: ori         $a2, $a2, 0x46DC
    ctx->r6 = ctx->r6 | 0X46DC;
    // 0x80801164: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801168: jal         0x800845E0
    // 0x8080116C: addiu       $a1, $zero, 0xEF
    ctx->r5 = ADD32(0, 0XEF);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x8080116C: addiu       $a1, $zero, 0xEF
    ctx->r5 = ADD32(0, 0XEF);
    after_2:
    // 0x80801170: jal         0x8008CABC
    // 0x80801174: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008CABC(rdram, ctx);
        goto after_3;
    // 0x80801174: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80801178: lui         $a1, 0x3DD2
    ctx->r5 = S32(0X3DD2 << 16);
    // 0x8080117C: ori         $a1, $a1, 0x1FF3
    ctx->r5 = ctx->r5 | 0X1FF3;
    // 0x80801180: jal         0x8008B10C
    // 0x80801184: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B10C(rdram, ctx);
        goto after_4;
    // 0x80801184: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80801188: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080118C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801190: jr          $ra
    // 0x80801194: nop

    return;
    // 0x80801194: nop

;}
RECOMP_FUNC void func_80801198_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801198: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080119C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808011A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808011A4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808011A8: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x808011AC: jal         0x8008CB10
    // 0x808011B0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x808011B0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_0:
    // 0x808011B4: beq         $v0, $zero, L_808011C4
    if (ctx->r2 == 0) {
        // 0x808011B8: nop
    
            goto L_808011C4;
    }
    // 0x808011B8: nop

    // 0x808011BC: jal         0x800951B4
    // 0x808011C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_1;
    // 0x808011C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
L_808011C4:
    // 0x808011C4: jal         0x800845C8
    // 0x808011C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x808011C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808011CC: beq         $v0, $zero, L_808011DC
    if (ctx->r2 == 0) {
        // 0x808011D0: nop
    
            goto L_808011DC;
    }
    // 0x808011D0: nop

    // 0x808011D4: jal         0x80000000
    // 0x808011D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsvan(rdram, ctx);
        goto after_3;
    // 0x808011D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_808011DC:
    // 0x808011DC: jal         0x80084600
    // 0x808011E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _babounce_entrypoint_9(rdram, ctx);
        goto after_4;
    // 0x808011E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808011E4: beq         $v0, $zero, L_808011F4
    if (ctx->r2 == 0) {
        // 0x808011E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808011F4;
    }
    // 0x808011E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011EC: addiu       $t6, $zero, 0x11A
    ctx->r14 = ADD32(0, 0X11A);
    // 0x808011F0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808011F4:
    // 0x808011F4: jal         0x8009E5C8
    // 0x808011F8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_5;
    // 0x808011F8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x808011FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801200: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801204: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801208: jr          $ra
    // 0x8080120C: nop

    return;
    // 0x8080120C: nop

;}
RECOMP_FUNC void bsvan_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801210: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801214: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(163, 0X1CDC) << 16);
    // 0x80801218: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080121C: jr          $ra
    // 0x80801220: lw          $v0, 0x1CDC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CDC));
    return;
    // 0x80801220: lw          $v0, 0x1CDC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CDC));
;}
RECOMP_FUNC void func_80801224_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801224: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080122C: jal         0x800845D0
    // 0x80801230: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801230: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801234: jal         0x800000F0
    // 0x80801238: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsvan_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80801238: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080123C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801240: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801244: jr          $ra
    // 0x80801248: nop

    return;
    // 0x80801248: nop

;}
RECOMP_FUNC void func_8080124C_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080124C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801254: jal         0x800001A8
    // 0x80801258: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsvan_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80801258: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080125C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801260: jal         0x800845D8
    // 0x80801264: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80801264: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80801268: lui         $a2, 0x3F03
    ctx->r6 = S32(0X3F03 << 16);
    // 0x8080126C: ori         $a2, $a2, 0x46DC
    ctx->r6 = ctx->r6 | 0X46DC;
    // 0x80801270: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801274: jal         0x800845E0
    // 0x80801278: addiu       $a1, $zero, 0xEF
    ctx->r5 = ADD32(0, 0XEF);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80801278: addiu       $a1, $zero, 0xEF
    ctx->r5 = ADD32(0, 0XEF);
    after_2:
    // 0x8080127C: jal         0x8008CABC
    // 0x80801280: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008CABC(rdram, ctx);
        goto after_3;
    // 0x80801280: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80801284: lui         $a1, 0x3DD2
    ctx->r5 = S32(0X3DD2 << 16);
    // 0x80801288: ori         $a1, $a1, 0x1FF3
    ctx->r5 = ctx->r5 | 0X1FF3;
    // 0x8080128C: jal         0x8008B10C
    // 0x80801290: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B10C(rdram, ctx);
        goto after_4;
    // 0x80801290: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80801294: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801298: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080129C: jr          $ra
    // 0x808012A0: nop

    return;
    // 0x808012A0: nop

;}
RECOMP_FUNC void func_808012A4_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808012A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808012AC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808012B0: jal         0x800845C8
    // 0x808012B4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _babounce_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808012B4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808012B8: beq         $v0, $zero, L_808012C8
    if (ctx->r2 == 0) {
        // 0x808012BC: nop
    
            goto L_808012C8;
    }
    // 0x808012BC: nop

    // 0x808012C0: jal         0x80000000
    // 0x808012C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800000_bsvan(rdram, ctx);
        goto after_1;
    // 0x808012C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
L_808012C8:
    // 0x808012C8: jal         0x80084600
    // 0x808012CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _babounce_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x808012CC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808012D0: beq         $v0, $zero, L_808012DC
    if (ctx->r2 == 0) {
        // 0x808012D4: addiu       $t6, $zero, 0x11A
        ctx->r14 = ADD32(0, 0X11A);
            goto L_808012DC;
    }
    // 0x808012D4: addiu       $t6, $zero, 0x11A
    ctx->r14 = ADD32(0, 0X11A);
    // 0x808012D8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_808012DC:
    // 0x808012DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808012E0: jal         0x8009E5C8
    // 0x808012E4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x808012E4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x808012E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808012EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808012F0: jr          $ra
    // 0x808012F4: nop

    return;
    // 0x808012F4: nop

;}
RECOMP_FUNC void bsvan_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012F8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808012FC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(163, 0X1CEC) << 16);
    // 0x80801300: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801304: jr          $ra
    // 0x80801308: lw          $v0, 0x1CEC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CEC));
    return;
    // 0x80801308: lw          $v0, 0x1CEC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CEC));
;}
RECOMP_FUNC void func_8080130C_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080130C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801310: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801314: jal         0x800839B8
    // 0x80801318: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80801318: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080131C: jal         0x800000F0
    // 0x80801320: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsvan_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80801320: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801328: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080132C: jr          $ra
    // 0x80801330: nop

    return;
    // 0x80801330: nop

;}
RECOMP_FUNC void func_80801334_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801334: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801338: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080133C: jal         0x800001A8
    // 0x80801340: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsvan_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80801340: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801344: jal         0x800839C8
    // 0x80801348: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80801348: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080134C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801350: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801354: jr          $ra
    // 0x80801358: nop

    return;
    // 0x80801358: nop

;}
RECOMP_FUNC void func_8080135C_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080135C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801360: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801364: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801368: jal         0x800839E8
    // 0x8080136C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x8080136C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80801370: beq         $v0, $zero, L_80801384
    if (ctx->r2 == 0) {
        // 0x80801374: nop
    
            goto L_80801384;
    }
    // 0x80801374: nop

    // 0x80801378: jal         0x800839B0
    // 0x8080137C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x8080137C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80801380: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_80801384:
    // 0x80801384: jal         0x800003BC
    // 0x80801388: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    bsvan_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80801388: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8080138C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801390: jal         0x8009E5C8
    // 0x80801394: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80801394: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80801398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080139C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808013A0: jr          $ra
    // 0x808013A4: nop

    return;
    // 0x808013A4: nop

;}
RECOMP_FUNC void bsvan_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013A8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808013AC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(163, 0X1CFC) << 16);
    // 0x808013B0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808013B4: jr          $ra
    // 0x808013B8: lw          $v0, 0x1CFC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CFC));
    return;
    // 0x808013B8: lw          $v0, 0x1CFC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1CFC));
;}
RECOMP_FUNC void func_808013BC_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808013C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808013C4: jal         0x800000F0
    // 0x808013C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    bsvan_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x808013C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808013CC: jal         0x80090A2C
    // 0x808013D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80090A2C(rdram, ctx);
        goto after_1;
    // 0x808013D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808013D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808013D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808013DC: jr          $ra
    // 0x808013E0: nop

    return;
    // 0x808013E0: nop

;}
RECOMP_FUNC void func_808013E4_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808013E8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808013EC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808013F0: jal         0x800001A8
    // 0x808013F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bsvan_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808013F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808013F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013FC: addiu       $a1, $zero, 0xEE
    ctx->r5 = ADD32(0, 0XEE);
    // 0x80801400: jal         0x8008CB3C
    // 0x80801404: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80801404: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x80801408: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8080140C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801414: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801418: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8080141C: jal         0x8009FFD8
    // 0x80801420: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801420: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80801424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801428: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x8080142C: jal         0x8009C99C
    // 0x80801430: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80801430: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_3:
    // 0x80801434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801438: jal         0x8009B9B0
    // 0x8080143C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x8080143C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80801440: jal         0x800909CC
    // 0x80801444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_5;
    // 0x80801444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801448: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080144C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801450: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801454: jr          $ra
    // 0x80801458: nop

    return;
    // 0x80801458: nop

;}
RECOMP_FUNC void func_8080145C_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080145C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80801460: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80801464: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80801468: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080146C: sw          $zero, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = 0;
    // 0x80801470: jal         0x8009D3A8
    // 0x80801474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x80801474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80801478: lui         $a1, 0x3C47
    ctx->r5 = S32(0X3C47 << 16);
    // 0x8080147C: ori         $a1, $a1, 0xE282
    ctx->r5 = ctx->r5 | 0XE282;
    // 0x80801480: jal         0x8008CB10
    // 0x80801484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_1;
    // 0x80801484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801488: bne         $v0, $zero, L_808014A4
    if (ctx->r2 != 0) {
        // 0x8080148C: lui         $a1, 0x3F03
        ctx->r5 = S32(0X3F03 << 16);
            goto L_808014A4;
    }
    // 0x8080148C: lui         $a1, 0x3F03
    ctx->r5 = S32(0X3F03 << 16);
    // 0x80801490: ori         $a1, $a1, 0x1F8A
    ctx->r5 = ctx->r5 | 0X1F8A;
    // 0x80801494: jal         0x8008CB10
    // 0x80801498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80801498: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080149C: beq         $v0, $zero, L_808015A8
    if (ctx->r2 == 0) {
        // 0x808014A0: nop
    
            goto L_808015A8;
    }
    // 0x808014A0: nop

L_808014A4:
    // 0x808014A4: jal         0x800B5BE4
    // 0x808014A8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800B5BE4(rdram, ctx);
        goto after_3;
    // 0x808014A8: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_3:
    // 0x808014AC: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x808014B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014B4: jal         0x8009C128
    // 0x808014B8: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    func_8009C128(rdram, ctx);
        goto after_4;
    // 0x808014B8: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_4:
    // 0x808014BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014C0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x808014C4: jal         0x80092C90
    // 0x808014C8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_80092C90(rdram, ctx);
        goto after_5;
    // 0x808014C8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_5:
    // 0x808014CC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x808014D0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x808014D4: jal         0x800EFB24
    // 0x808014D8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_800EFB24(rdram, ctx);
        goto after_6;
    // 0x808014D8: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_6:
    // 0x808014DC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x808014E0: jal         0x800F1A88
    // 0x808014E4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_800F1A88(rdram, ctx);
        goto after_7;
    // 0x808014E4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_7:
    // 0x808014E8: lwc1        $f0, 0x64($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X64);
    // 0x808014EC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x808014F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808014F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808014F8: lwc1        $f2, 0x68($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X68);
    // 0x808014FC: neg.s       $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = -ctx->f0.fl;
    // 0x80801500: addiu       $t4, $zero, 0xC8
    ctx->r12 = ADD32(0, 0XC8);
    // 0x80801504: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80801508: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8080150C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80801510: sub.s       $f10, $f2, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = ctx->f2.fl - ctx->f12.fl;
    // 0x80801514: swc1        $f0, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f0.u32l;
    // 0x80801518: addiu       $a3, $zero, 0x96
    ctx->r7 = ADD32(0, 0X96);
    // 0x8080151C: add.s       $f18, $f2, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = ctx->f2.fl + ctx->f12.fl;
    // 0x80801520: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80801524: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80801528: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x8080152C: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80801530: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80801534: sll         $t7, $a1, 16
    ctx->r15 = S32(ctx->r5 << 16);
    // 0x80801538: sra         $a1, $t7, 16
    ctx->r5 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8080153C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80801540: sll         $t0, $a2, 16
    ctx->r8 = S32(ctx->r6 << 16);
    // 0x80801544: sra         $a2, $t0, 16
    ctx->r6 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80801548: sw          $a1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r5;
    // 0x8080154C: jal         0x800BA994
    // 0x80801550: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    func_800BA994(rdram, ctx);
        goto after_8;
    // 0x80801550: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_8:
    // 0x80801554: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80801558: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(163, 0X1B58) << 16);
    // 0x8080155C: jal         0x800DC178
    // 0x80801560: lwc1        $f14, 0x1B58($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(163, 0X1B58));
    func_800DC178(rdram, ctx);
        goto after_9;
    // 0x80801560: lwc1        $f14, 0x1B58($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(163, 0X1B58));
    after_9:
    // 0x80801564: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80801568: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8080156C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80801570: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80801574: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80801578: nop

    // 0x8080157C: sll         $t6, $a3, 16
    ctx->r14 = S32(ctx->r7 << 16);
    // 0x80801580: jal         0x800BA77C
    // 0x80801584: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    func_800BA77C(rdram, ctx);
        goto after_10;
    // 0x80801584: sra         $a3, $t6, 16
    ctx->r7 = S32(SIGNED(ctx->r14) >> 16);
    after_10:
    // 0x80801588: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(163, 0X1D0C) << 16);
    // 0x8080158C: addiu       $t8, $t8, 0x1D0C
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(163, 0X1D0C));
    // 0x80801590: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80801594: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80801598: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x8080159C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808015A0: jal         0x800BABB8
    // 0x808015A4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_11;
    // 0x808015A4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_11:
L_808015A8:
    // 0x808015A8: jal         0x800000BC
    // 0x808015AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000BC_bsvan(rdram, ctx);
        goto after_12;
    // 0x808015AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808015B0: jal         0x8009EF10
    // 0x808015B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_13;
    // 0x808015B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808015B8: blez        $v0, L_808015C4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x808015BC: addiu       $t9, $zero, 0x116
        ctx->r25 = ADD32(0, 0X116);
            goto L_808015C4;
    }
    // 0x808015BC: addiu       $t9, $zero, 0x116
    ctx->r25 = ADD32(0, 0X116);
    // 0x808015C0: sw          $t9, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r25;
L_808015C4:
    // 0x808015C4: jal         0x8008E148
    // 0x808015C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_14;
    // 0x808015C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808015CC: beq         $v0, $zero, L_808015E0
    if (ctx->r2 == 0) {
        // 0x808015D0: nop
    
            goto L_808015E0;
    }
    // 0x808015D0: nop

    // 0x808015D4: jal         0x800848B0
    // 0x808015D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_15;
    // 0x808015D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808015DC: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
L_808015E0:
    // 0x808015E0: jal         0x8008E35C
    // 0x808015E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_16;
    // 0x808015E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808015E8: beq         $v0, $zero, L_808015F8
    if (ctx->r2 == 0) {
        // 0x808015EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808015F8;
    }
    // 0x808015EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015F0: addiu       $t0, $zero, 0x11D
    ctx->r8 = ADD32(0, 0X11D);
    // 0x808015F4: sw          $t0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r8;
L_808015F8:
    // 0x808015F8: jal         0x80000064
    // 0x808015FC: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    func_80800064_bsvan(rdram, ctx);
        goto after_17;
    // 0x808015FC: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    after_17:
    // 0x80801600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801604: jal         0x800A02DC
    // 0x80801608: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800A02DC(rdram, ctx);
        goto after_18;
    // 0x80801608: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_18:
    // 0x8080160C: sw          $v0, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r2;
    // 0x80801610: jal         0x800003BC
    // 0x80801614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsvan_entrypoint_3(rdram, ctx);
        goto after_19;
    // 0x80801614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80801618: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080161C: jal         0x8009E5C8
    // 0x80801620: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    func_8009E5C8(rdram, ctx);
        goto after_20;
    // 0x80801620: lw          $a1, 0x6C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X6C);
    after_20:
    // 0x80801624: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80801628: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8080162C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80801630: jr          $ra
    // 0x80801634: nop

    return;
    // 0x80801634: nop

;}
RECOMP_FUNC void bsvan_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801638: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080163C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(163, 0X1D70) << 16);
    // 0x80801640: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801644: jr          $ra
    // 0x80801648: lw          $v0, 0x1D70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1D70));
    return;
    // 0x80801648: lw          $v0, 0x1D70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1D70));
;}
RECOMP_FUNC void func_8080164C_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080164C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80801650: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801654: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801658: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8080165C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801660: jal         0x8009C128
    // 0x80801664: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80801664: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80801668: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8080166C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80801670: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80801674: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x80801678: beq         $at, $zero, L_80801754
    if (ctx->r1 == 0) {
        // 0x8080167C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80801754;
    }
    // 0x8080167C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80801680: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(163, 0X1B5C) << 16);
    // 0x80801684: addu        $at, $at, $t7
    gpr jr_addend_8080168C = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80801688: lw          $t7, 0x1B5C($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(163, 0X1B5C));
    // 0x8080168C: jr          $t7
    // 0x80801690: nop

    switch (jr_addend_8080168C >> 2) {
        case 0: goto L_80801694; break;
        case 1: goto L_808016C4; break;
        case 2: goto L_808016E0; break;
        case 3: goto L_80801720; break;
        case 4: goto L_8080173C; break;
        default: switch_error(__func__, 0x8080168C, 0x80801B5C);
    }
    // 0x80801690: nop

L_80801694:
    // 0x80801694: lw          $a1, 0x188($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X188);
    // 0x80801698: jal         0x800F1DF4
    // 0x8080169C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_800F1DF4(rdram, ctx);
        goto after_1;
    // 0x8080169C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_1:
    // 0x808016A0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808016A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808016A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016AC: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x808016B0: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x808016B4: jal         0x8009C914
    // 0x808016B8: nop

    func_8009C914(rdram, ctx);
        goto after_2;
    // 0x808016B8: nop

    after_2:
    // 0x808016BC: b           L_80801758
    // 0x808016C0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
        goto L_80801758;
    // 0x808016C0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
L_808016C4:
    // 0x808016C4: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x808016C8: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808016CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016D0: jal         0x8008CCBC
    // 0x808016D4: addiu       $a1, $zero, 0xF1
    ctx->r5 = ADD32(0, 0XF1);
    func_8008CCBC(rdram, ctx);
        goto after_3;
    // 0x808016D4: addiu       $a1, $zero, 0xF1
    ctx->r5 = ADD32(0, 0XF1);
    after_3:
    // 0x808016D8: b           L_80801758
    // 0x808016DC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
        goto L_80801758;
    // 0x808016DC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
L_808016E0:
    // 0x808016E0: lw          $t8, 0x15C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X15C);
    // 0x808016E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808016E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016EC: bne         $t8, $at, L_80801710
    if (ctx->r24 != ctx->r1) {
        // 0x808016F0: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_80801710;
    }
    // 0x808016F0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x808016F4: lui         $a2, 0x3A83
    ctx->r6 = S32(0X3A83 << 16);
    // 0x808016F8: ori         $a2, $a2, 0x126F
    ctx->r6 = ctx->r6 | 0X126F;
    // 0x808016FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801700: jal         0x80085338
    // 0x80801704: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _batimer_set(rdram, ctx);
        goto after_4;
    // 0x80801704: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80801708: b           L_80801758
    // 0x8080170C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
        goto L_80801758;
    // 0x8080170C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
L_80801710:
    // 0x80801710: jal         0x80085338
    // 0x80801714: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    _batimer_set(rdram, ctx);
        goto after_5;
    // 0x80801714: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_5:
    // 0x80801718: b           L_80801758
    // 0x8080171C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
        goto L_80801758;
    // 0x8080171C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
L_80801720:
    // 0x80801720: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80801724: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080172C: jal         0x8008CCBC
    // 0x80801730: addiu       $a1, $zero, 0xF2
    ctx->r5 = ADD32(0, 0XF2);
    func_8008CCBC(rdram, ctx);
        goto after_6;
    // 0x80801730: addiu       $a1, $zero, 0xF2
    ctx->r5 = ADD32(0, 0XF2);
    after_6:
    // 0x80801734: b           L_80801758
    // 0x80801738: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
        goto L_80801758;
    // 0x80801738: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
L_8080173C:
    // 0x8080173C: lw          $a1, 0x188($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X188);
    // 0x80801740: jal         0x800F1DF4
    // 0x80801744: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_800F1DF4(rdram, ctx);
        goto after_7;
    // 0x80801744: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_7:
    // 0x80801748: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080174C: jal         0x8009C914
    // 0x80801750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_8;
    // 0x80801750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_80801754:
    // 0x80801754: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
L_80801758:
    // 0x80801758: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
    // 0x8080175C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801760: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801764: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80801768: jr          $ra
    // 0x8080176C: nop

    return;
    // 0x8080176C: nop

;}
RECOMP_FUNC void func_80801770_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801778: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080177C: lw          $t7, 0x188($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X188);
    // 0x80801780: jal         0x80087278
    // 0x80801784: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    _chfaircoinbox_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80801784: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    after_0:
    // 0x80801788: jal         0x800000F0
    // 0x8080178C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bsvan_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x8080178C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801798: jr          $ra
    // 0x8080179C: nop

    return;
    // 0x8080179C: nop

;}
RECOMP_FUNC void func_808017A0_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808017A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808017A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808017A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808017AC: jal         0x800001A8
    // 0x808017B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bsvan_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808017B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808017B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017B8: addiu       $a1, $zero, 0xEE
    ctx->r5 = ADD32(0, 0XEE);
    // 0x808017BC: jal         0x8008CB3C
    // 0x808017C0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808017C0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x808017C4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808017C8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808017CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808017D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808017D8: jal         0x8009FFD8
    // 0x808017DC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808017DC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x808017E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017E4: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x808017E8: jal         0x8009C99C
    // 0x808017EC: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x808017EC: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_3:
    // 0x808017F0: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x808017F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017F8: jal         0x8000164C
    // 0x808017FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8080164C_bsvan(rdram, ctx);
        goto after_4;
    // 0x808017FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80801800: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801804: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801808: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080180C: jr          $ra
    // 0x80801810: nop

    return;
    // 0x80801810: nop

;}
RECOMP_FUNC void bsvan_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801814: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80801818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080181C: jal         0x800F53D0
    // 0x80801820: nop

    func_800F53D0(rdram, ctx);
        goto after_0;
    // 0x80801820: nop

    after_0:
    // 0x80801824: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80801828: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080182C: jal         0x8009C128
    // 0x80801830: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x80801830: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80801834: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80801838: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x8080183C: lw          $a1, 0x188($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X188);
    // 0x80801840: jal         0x800EE7F8
    // 0x80801844: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x80801844: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_2:
    // 0x80801848: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8080184C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80801850: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80801854: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80801858: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8080185C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80801860: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80801864: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80801868: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x8080186C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80801870: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x80801874: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x80801878: jal         0x80087260
    // 0x8080187C: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    _chfaircoin_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x8080187C: swc1        $f18, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x80801880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801884: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80801888: jr          $ra
    // 0x8080188C: nop

    return;
    // 0x8080188C: nop

;}
RECOMP_FUNC void func_80801890_bsvan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801890: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801894: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801898: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080189C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808018A0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x808018A4: jal         0x8009D3A8
    // 0x808018A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x808018A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808018AC: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    // 0x808018B0: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x808018B4: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x808018B8: beq         $at, $zero, L_80801A30
    if (ctx->r1 == 0) {
        // 0x808018BC: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80801A30;
    }
    // 0x808018BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808018C0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(163, 0X1B70) << 16);
    // 0x808018C4: addu        $at, $at, $t7
    gpr jr_addend_808018CC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x808018C8: lw          $t7, 0x1B70($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(163, 0X1B70));
    // 0x808018CC: jr          $t7
    // 0x808018D0: nop

    switch (jr_addend_808018CC >> 2) {
        case 0: goto L_808018D4; break;
        case 1: goto L_80801910; break;
        case 2: goto L_80801960; break;
        case 3: goto L_808019C8; break;
        case 4: goto L_808019E8; break;
        default: switch_error(__func__, 0x808018CC, 0x80801B70);
    }
    // 0x808018D0: nop

L_808018D4:
    // 0x808018D4: jal         0x8009C984
    // 0x808018D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x808018D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808018DC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x808018E0: jal         0x8009C990
    // 0x808018E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_2;
    // 0x808018E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808018E8: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x808018EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018F0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808018F4: nop

    // 0x808018F8: bc1f        L_80801A30
    if (!c1cs) {
        // 0x808018FC: nop
    
            goto L_80801A30;
    }
    // 0x808018FC: nop

    // 0x80801900: jal         0x8000164C
    // 0x80801904: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8080164C_bsvan(rdram, ctx);
        goto after_3;
    // 0x80801904: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80801908: b           L_80801A30
    // 0x8080190C: nop

        goto L_80801A30;
    // 0x8080190C: nop

L_80801910:
    // 0x80801910: lui         $a1, 0x3DA3
    ctx->r5 = S32(0X3DA3 << 16);
    // 0x80801914: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x80801918: jal         0x8008CB10
    // 0x8080191C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x8080191C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801920: beq         $v0, $zero, L_80801938
    if (ctx->r2 == 0) {
        // 0x80801924: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801938;
    }
    // 0x80801924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801928: addiu       $a1, $zero, 0x56D
    ctx->r5 = ADD32(0, 0X56D);
    // 0x8080192C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801930: jal         0x8009DF18
    // 0x80801934: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF18(rdram, ctx);
        goto after_5;
    // 0x80801934: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_5:
L_80801938:
    // 0x80801938: lui         $a1, 0x3F01
    ctx->r5 = S32(0X3F01 << 16);
    // 0x8080193C: ori         $a1, $a1, 0x4120
    ctx->r5 = ctx->r5 | 0X4120;
    // 0x80801940: jal         0x8008CB10
    // 0x80801944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_6;
    // 0x80801944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801948: beq         $v0, $zero, L_80801A30
    if (ctx->r2 == 0) {
        // 0x8080194C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801A30;
    }
    // 0x8080194C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801950: jal         0x8000164C
    // 0x80801954: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8080164C_bsvan(rdram, ctx);
        goto after_7;
    // 0x80801954: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x80801958: b           L_80801A30
    // 0x8080195C: nop

        goto L_80801A30;
    // 0x8080195C: nop

L_80801960:
    // 0x80801960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801964: jal         0x800852F0
    // 0x80801968: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _batimer_decrement(rdram, ctx);
        goto after_8;
    // 0x80801968: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x8080196C: beq         $v0, $zero, L_80801A30
    if (ctx->r2 == 0) {
        // 0x80801970: lui         $a0, 0x8008
        ctx->r4 = S32(0X8008 << 16);
            goto L_80801A30;
    }
    // 0x80801970: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80801974: addiu       $a0, $a0, 0x4198
    ctx->r4 = ADD32(ctx->r4, 0X4198);
    // 0x80801978: jal         0x80086D30
    // 0x8080197C: lw          $a1, 0x184($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X184);
    _chbaddiesetup_entrypoint_1(rdram, ctx);
        goto after_9;
    // 0x8080197C: lw          $a1, 0x184($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X184);
    after_9:
    // 0x80801980: lw          $v0, 0x188($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X188);
    // 0x80801984: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80801988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080198C: lw          $t8, 0x10($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X10);
    // 0x80801990: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80801994: sw          $t9, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r25;
    // 0x80801998: lw          $t0, 0x188($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X188);
    // 0x8080199C: lw          $t1, 0x10($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X10);
    // 0x808019A0: beq         $t1, $zero, L_808019B8
    if (ctx->r9 == 0) {
        // 0x808019A4: nop
    
            goto L_808019B8;
    }
    // 0x808019A4: nop

    // 0x808019A8: jal         0x8000164C
    // 0x808019AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080164C_bsvan(rdram, ctx);
        goto after_10;
    // 0x808019AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808019B0: b           L_80801A30
    // 0x808019B4: nop

        goto L_80801A30;
    // 0x808019B4: nop

L_808019B8:
    // 0x808019B8: jal         0x8000164C
    // 0x808019BC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8080164C_bsvan(rdram, ctx);
        goto after_11;
    // 0x808019BC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_11:
    // 0x808019C0: b           L_80801A30
    // 0x808019C4: nop

        goto L_80801A30;
    // 0x808019C4: nop

L_808019C8:
    // 0x808019C8: jal         0x8008CAEC
    // 0x808019CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_12;
    // 0x808019CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808019D0: beq         $v0, $zero, L_80801A30
    if (ctx->r2 == 0) {
        // 0x808019D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801A30;
    }
    // 0x808019D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019D8: jal         0x8000164C
    // 0x808019DC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8080164C_bsvan(rdram, ctx);
        goto after_13;
    // 0x808019DC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_13:
    // 0x808019E0: b           L_80801A30
    // 0x808019E4: nop

        goto L_80801A30;
    // 0x808019E4: nop

L_808019E8:
    // 0x808019E8: jal         0x8009C984
    // 0x808019EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_14;
    // 0x808019EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808019F0: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x808019F4: jal         0x8009C990
    // 0x808019F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_15;
    // 0x808019F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808019FC: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80801A00: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80801A04: nop

    // 0x80801A08: bc1f        L_80801A30
    if (!c1cs) {
        // 0x80801A0C: nop
    
            goto L_80801A30;
    }
    // 0x80801A0C: nop

    // 0x80801A10: jal         0x8008E124
    // 0x80801A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E124(rdram, ctx);
        goto after_16;
    // 0x80801A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80801A18: beq         $v0, $zero, L_80801A2C
    if (ctx->r2 == 0) {
        // 0x80801A1C: addiu       $t3, $zero, 0x11A
        ctx->r11 = ADD32(0, 0X11A);
            goto L_80801A2C;
    }
    // 0x80801A1C: addiu       $t3, $zero, 0x11A
    ctx->r11 = ADD32(0, 0X11A);
    // 0x80801A20: addiu       $t2, $zero, 0x119
    ctx->r10 = ADD32(0, 0X119);
    // 0x80801A24: b           L_80801A30
    // 0x80801A28: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
        goto L_80801A30;
    // 0x80801A28: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_80801A2C:
    // 0x80801A2C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_80801A30:
    // 0x80801A30: jal         0x800003BC
    // 0x80801A34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    bsvan_entrypoint_3(rdram, ctx);
        goto after_17;
    // 0x80801A34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80801A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A3C: jal         0x8009E5C8
    // 0x80801A40: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_18;
    // 0x80801A40: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_18:
    // 0x80801A44: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801A48: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801A4C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801A50: jr          $ra
    // 0x80801A54: nop

    return;
    // 0x80801A54: nop

;}
RECOMP_FUNC void bsvan_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801A58: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801A5C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(163, 0X1D80) << 16);
    // 0x80801A60: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801A64: jr          $ra
    // 0x80801A68: lw          $v0, 0x1D80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1D80));
    return;
    // 0x80801A68: lw          $v0, 0x1D80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(163, 0X1D80));
    // 0x80801A6C: nop

;}
RECOMP_FUNC void func_80800000_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x80096544
    // 0x8080000C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80096544(rdram, ctx);
        goto after_0;
    // 0x8080000C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800010: beql        $v0, $zero, L_808000A4
    if (ctx->r2 == 0) {
        // 0x80800014: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_808000A4;
    }
    goto skip_0;
    // 0x80800014: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800018: jal         0x800DC0C0
    // 0x8080001C: nop

    func_800DC0C0(rdram, ctx);
        goto after_1;
    // 0x8080001C: nop

    after_1:
    // 0x80800020: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800024: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800028: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8080002C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800030: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800034: nop

    // 0x80800038: bc1f        L_80800050
    if (!c1cs) {
        // 0x8080003C: nop
    
            goto L_80800050;
    }
    // 0x8080003C: nop

    // 0x80800040: jal         0x80092C00
    // 0x80800044: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_80092C00(rdram, ctx);
        goto after_2;
    // 0x80800044: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x80800048: b           L_8080005C
    // 0x8080004C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
        goto L_8080005C;
    // 0x8080004C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_80800050:
    // 0x80800050: jal         0x80092C24
    // 0x80800054: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80092C24(rdram, ctx);
        goto after_3;
    // 0x80800054: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x80800058: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_8080005C:
    // 0x8080005C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80800060: jal         0x8009FBB0
    // 0x80800064: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009FBB0(rdram, ctx);
        goto after_4;
    // 0x80800064: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_4:
    // 0x80800068: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x8080006C: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x80800070: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80800074: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80800078: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080007C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800080: addiu       $a1, $zero, -0x3C
    ctx->r5 = ADD32(0, -0X3C);
    // 0x80800084: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x80800088: addiu       $a3, $zero, -0x3C
    ctx->r7 = ADD32(0, -0X3C);
    // 0x8080008C: jal         0x800BA930
    // 0x80800090: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_800BA930(rdram, ctx);
        goto after_5;
    // 0x80800090: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x80800094: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800098: jal         0x800BA22C
    // 0x8080009C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_6;
    // 0x8080009C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808000A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808000A4:
    // 0x808000A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808000A8: jr          $ra
    // 0x808000AC: nop

    return;
    // 0x808000AC: nop

;}
RECOMP_FUNC void func_808000B0_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000B8: jal         0x8009EF1C
    // 0x808000BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x808000BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000C0: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x808000C4: jal         0x8009EF10
    // 0x808000C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x808000C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808000CC: bne         $v0, $zero, L_808000E8
    if (ctx->r2 != 0) {
        // 0x808000D0: lwc1        $f12, 0x1C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_808000E8;
    }
    // 0x808000D0: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x808000D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808000D8: jal         0x8009B9B0
    // 0x808000DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x808000DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x808000E0: b           L_80800108
    // 0x808000E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800108;
    // 0x808000E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000E8:
    // 0x808000E8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x808000EC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808000F0: jal         0x800F1214
    // 0x808000F4: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x808000F4: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    after_3:
    // 0x808000F8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000FC: jal         0x8009B9B0
    // 0x80800100: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800100: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800108:
    // 0x80800108: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080010C: jr          $ra
    // 0x80800110: nop

    return;
    // 0x80800110: nop

;}
RECOMP_FUNC void func_80800114_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800114: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800118: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080011C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800120: jal         0x80084128
    // 0x80800124: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsvan_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800124: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080012C: jal         0x8009E6C4
    // 0x80800130: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E6C4(rdram, ctx);
        goto after_1;
    // 0x80800130: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800134: bne         $v0, $zero, L_80800160
    if (ctx->r2 != 0) {
        // 0x80800138: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800160;
    }
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080013C: jal         0x8009BCB4
    // 0x80800140: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_2;
    // 0x80800140: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_2:
    // 0x80800144: lui         $a1, 0x4305
    ctx->r5 = S32(0X4305 << 16);
    // 0x80800148: ori         $a1, $a1, 0x547B
    ctx->r5 = ctx->r5 | 0X547B;
    // 0x8080014C: jal         0x8009BCC4
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_3;
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800158: jal         0x800961AC
    // 0x8080015C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800961AC(rdram, ctx);
        goto after_4;
    // 0x8080015C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
L_80800160:
    // 0x80800160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800164: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080016C: jr          $ra
    // 0x80800170: nop

    return;
    // 0x80800170: nop

;}
RECOMP_FUNC void func_80800174_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800174: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800178: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080017C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800180: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800184: jal         0x8009E69C
    // 0x80800188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E69C(rdram, ctx);
        goto after_0;
    // 0x80800188: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8080018C: bne         $v0, $zero, L_808001B0
    if (ctx->r2 != 0) {
        // 0x80800190: nop
    
            goto L_808001B0;
    }
    // 0x80800190: nop

    // 0x80800194: jal         0x8009BC90
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_1;
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080019C: jal         0x8009BC6C
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_2;
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A8: jal         0x800961AC
    // 0x808001AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_3;
    // 0x808001AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_808001B0:
    // 0x808001B0: jal         0x80084120
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsvan_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808001B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001C4: jr          $ra
    // 0x808001C8: nop

    return;
    // 0x808001C8: nop

;}
RECOMP_FUNC void func_808001CC_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001D4: jal         0x8009BC34
    // 0x808001D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC34(rdram, ctx);
        goto after_0;
    // 0x808001D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001E0: jal         0x800961AC
    // 0x808001E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_1;
    // 0x808001E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808001E8: jal         0x80084120
    // 0x808001EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsvan_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x808001EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808001F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001F8: jr          $ra
    // 0x808001FC: nop

    return;
    // 0x808001FC: nop

;}
RECOMP_FUNC void func_80800200_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800200: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800204: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800208: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080020C: jal         0x80084128
    // 0x80800210: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsvan_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800210: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800218: jal         0x8009BCB4
    // 0x8080021C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_1;
    // 0x8080021C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800220: lui         $a1, 0xC3C7
    ctx->r5 = S32(0XC3C7 << 16);
    // 0x80800224: ori         $a1, $a1, 0xFEB8
    ctx->r5 = ctx->r5 | 0XFEB8;
    // 0x80800228: jal         0x8009BCC4
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_2;
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800234: jal         0x800961AC
    // 0x80800238: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800961AC(rdram, ctx);
        goto after_3;
    // 0x80800238: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800240: jal         0x8009BC5C
    // 0x80800244: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8009BC5C(rdram, ctx);
        goto after_4;
    // 0x80800244: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_4:
    // 0x80800248: jal         0x800A046C
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A046C(rdram, ctx);
        goto after_5;
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800250: jal         0x800A3298
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3298(rdram, ctx);
        goto after_6;
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800258: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800260: addiu       $a1, $zero, 0xE7
    ctx->r5 = ADD32(0, 0XE7);
    // 0x80800264: jal         0x8008CB3C
    // 0x80800268: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_7;
    // 0x80800268: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_7:
    // 0x8080026C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800270: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800274: lui         $at, 0xC496
    ctx->r1 = S32(0XC496 << 16);
    // 0x80800278: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080027C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800280: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x80800284: lui         $a3, 0xC396
    ctx->r7 = S32(0XC396 << 16);
    // 0x80800288: jal         0x800F10B4
    // 0x8080028C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x8080028C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_8:
    // 0x80800290: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800294: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x80800298: jal         0x8009BA58
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_9;
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808002A0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x808002A4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808002B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x808002B4: jal         0x8009FFD8
    // 0x808002B8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x808002B8: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_10:
    // 0x808002BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808002C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808002C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808002C8: jr          $ra
    // 0x808002CC: nop

    return;
    // 0x808002CC: nop

;}
RECOMP_FUNC void func_808002D0_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808002D4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x808002D8: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x808002DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002E0: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x808002E4: jal         0x8009C128
    // 0x808002E8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x808002E8: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_0:
    // 0x808002EC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x808002F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808002F4: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x808002F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002FC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80800300: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80800304: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    // 0x80800308: jal         0x8009FBB0
    // 0x8080030C: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    func_8009FBB0(rdram, ctx);
        goto after_1;
    // 0x8080030C: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80800310: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x80800314: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x80800318: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x8080031C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80800320: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80800324: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80800328: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080032C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800330: addiu       $a1, $zero, -0x1E
    ctx->r5 = ADD32(0, -0X1E);
    // 0x80800334: addiu       $a2, $zero, -0x1E
    ctx->r6 = ADD32(0, -0X1E);
    // 0x80800338: jal         0x800BA930
    // 0x8080033C: addiu       $a3, $zero, -0x1E
    ctx->r7 = ADD32(0, -0X1E);
    func_800BA930(rdram, ctx);
        goto after_2;
    // 0x8080033C: addiu       $a3, $zero, -0x1E
    ctx->r7 = ADD32(0, -0X1E);
    after_2:
    // 0x80800340: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80800344: jal         0x800BA22C
    // 0x80800348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_3;
    // 0x80800348: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8080034C: lwc1        $f12, 0x16C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800350: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800354: nop

    // 0x80800358: c.lt.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl < ctx->f10.fl;
    // 0x8080035C: nop

    // 0x80800360: bc1f        L_808003A4
    if (!c1cs) {
        // 0x80800364: nop
    
            goto L_808003A4;
    }
    // 0x80800364: nop

    // 0x80800368: jal         0x800F2100
    // 0x8080036C: nop

    func_800F2100(rdram, ctx);
        goto after_4;
    // 0x8080036C: nop

    after_4:
    // 0x80800370: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(164, 0X970) << 16);
    // 0x80800374: lwc1        $f16, 0x970($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(164, 0X970));
    // 0x80800378: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8080037C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800380: mul.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80800384: jal         0x800F0E00
    // 0x80800388: nop

    func_800F0E00(rdram, ctx);
        goto after_5;
    // 0x80800388: nop

    after_5:
    // 0x8080038C: lwc1        $f18, 0x16C($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800394: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x80800398: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    // 0x8080039C: jal         0x8009BA58
    // 0x808003A0: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009BA58(rdram, ctx);
        goto after_6;
    // 0x808003A0: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_6:
L_808003A4:
    // 0x808003A4: jal         0x8008E078
    // 0x808003A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_7;
    // 0x808003A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808003AC: beq         $v0, $zero, L_808003B8
    if (ctx->r2 == 0) {
        // 0x808003B0: addiu       $t9, $zero, 0x11B
        ctx->r25 = ADD32(0, 0X11B);
            goto L_808003B8;
    }
    // 0x808003B0: addiu       $t9, $zero, 0x11B
    ctx->r25 = ADD32(0, 0X11B);
    // 0x808003B4: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
L_808003B8:
    // 0x808003B8: jal         0x8008E35C
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_8;
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808003C0: bne         $v0, $zero, L_808003CC
    if (ctx->r2 != 0) {
        // 0x808003C4: addiu       $t0, $zero, 0x11A
        ctx->r8 = ADD32(0, 0X11A);
            goto L_808003CC;
    }
    // 0x808003C4: addiu       $t0, $zero, 0x11A
    ctx->r8 = ADD32(0, 0X11A);
    // 0x808003C8: sw          $t0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r8;
L_808003CC:
    // 0x808003CC: jal         0x8009BB50
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_9;
    // 0x808003D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808003D4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808003D8: addiu       $t1, $zero, 0x11B
    ctx->r9 = ADD32(0, 0X11B);
    // 0x808003DC: c.le.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl <= ctx->f0.fl;
    // 0x808003E0: nop

    // 0x808003E4: bc1f        L_808003F0
    if (!c1cs) {
        // 0x808003E8: nop
    
            goto L_808003F0;
    }
    // 0x808003E8: nop

    // 0x808003EC: sw          $t1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r9;
L_808003F0:
    // 0x808003F0: jal         0x80084138
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsvan_entrypoint_3(rdram, ctx);
        goto after_10;
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003FC: jal         0x8009E5C8
    // 0x80800400: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009E5C8(rdram, ctx);
        goto after_11;
    // 0x80800400: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_11:
    // 0x80800404: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800408: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8080040C: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80800410: jr          $ra
    // 0x80800414: nop

    return;
    // 0x80800414: nop

;}
RECOMP_FUNC void bsvanswim_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800418: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080041C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(164, 0X980) << 16);
    // 0x80800420: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800424: jr          $ra
    // 0x80800428: lw          $v0, 0x980($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(164, 0X980));
    return;
    // 0x80800428: lw          $v0, 0x980($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(164, 0X980));
;}
RECOMP_FUNC void func_8080042C_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080042C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800430: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800434: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800438: jal         0x80000114
    // 0x8080043C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800114_bsvanswim(rdram, ctx);
        goto after_0;
    // 0x8080043C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800444: addiu       $a1, $zero, 0xE7
    ctx->r5 = ADD32(0, 0XE7);
    // 0x80800448: jal         0x8008CB3C
    // 0x8080044C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x8080044C: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_1:
    // 0x80800450: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800454: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080045C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800460: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800464: jal         0x8009FFD8
    // 0x80800468: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800468: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800470: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x80800474: jal         0x8009C99C
    // 0x80800478: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80800478: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_3:
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800480: jal         0x8009B9B0
    // 0x80800484: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800484: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800488: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080048C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800490: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800494: jr          $ra
    // 0x80800498: nop

    return;
    // 0x80800498: nop

;}
RECOMP_FUNC void func_8080049C_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080049C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808004A0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808004A4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808004A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808004AC: jal         0x8008CABC
    // 0x808004B0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808004B0: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x808004B4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x808004B8: jal         0x8001210C
    // 0x808004BC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001210C(rdram, ctx);
        goto after_1;
    // 0x808004BC: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x808004C0: bne         $v0, $zero, L_808004F4
    if (ctx->r2 != 0) {
        // 0x808004C4: nop
    
            goto L_808004F4;
    }
    // 0x808004C4: nop

    // 0x808004C8: jal         0x800DC0C0
    // 0x808004CC: nop

    func_800DC0C0(rdram, ctx);
        goto after_2;
    // 0x808004CC: nop

    after_2:
    // 0x808004D0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808004D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808004D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004DC: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x808004E0: nop

    // 0x808004E4: bc1f        L_808004F4
    if (!c1cs) {
        // 0x808004E8: nop
    
            goto L_808004F4;
    }
    // 0x808004E8: nop

    // 0x808004EC: jal         0x8009FC34
    // 0x808004F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009FC34(rdram, ctx);
        goto after_3;
    // 0x808004F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_808004F4:
    // 0x808004F4: jal         0x8001210C
    // 0x808004F8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001210C(rdram, ctx);
        goto after_4;
    // 0x808004F8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_4:
    // 0x808004FC: bnel        $v0, $zero, L_80800534
    if (ctx->r2 != 0) {
        // 0x80800500: lui         $a1, 0x3C23
        ctx->r5 = S32(0X3C23 << 16);
            goto L_80800534;
    }
    goto skip_0;
    // 0x80800500: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
    skip_0:
    // 0x80800504: jal         0x800DC0C0
    // 0x80800508: nop

    func_800DC0C0(rdram, ctx);
        goto after_5;
    // 0x80800508: nop

    after_5:
    // 0x8080050C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800510: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800514: nop

    // 0x80800518: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x8080051C: nop

    // 0x80800520: bc1fl       L_80800534
    if (!c1cs) {
        // 0x80800524: lui         $a1, 0x3C23
        ctx->r5 = S32(0X3C23 << 16);
            goto L_80800534;
    }
    goto skip_1;
    // 0x80800524: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
    skip_1:
    // 0x80800528: jal         0x80000000
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsvanswim(rdram, ctx);
        goto after_6;
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800530: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
L_80800534:
    // 0x80800534: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x80800538: jal         0x8008B348
    // 0x8080053C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x8080053C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x80800540: beq         $v0, $zero, L_80800570
    if (ctx->r2 == 0) {
        // 0x80800544: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800570;
    }
    // 0x80800544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800548: lui         $a2, 0x3F59
    ctx->r6 = S32(0X3F59 << 16);
    // 0x8080054C: lui         $a3, 0x3F93
    ctx->r7 = S32(0X3F93 << 16);
    // 0x80800550: addiu       $t6, $zero, 0x3E80
    ctx->r14 = ADD32(0, 0X3E80);
    // 0x80800554: addiu       $t7, $zero, 0x3E80
    ctx->r15 = ADD32(0, 0X3E80);
    // 0x80800558: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8080055C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800560: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80800564: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800568: jal         0x8009DEC0
    // 0x8080056C: addiu       $a1, $zero, 0x46F
    ctx->r5 = ADD32(0, 0X46F);
    func_8009DEC0(rdram, ctx);
        goto after_8;
    // 0x8080056C: addiu       $a1, $zero, 0x46F
    ctx->r5 = ADD32(0, 0X46F);
    after_8:
L_80800570:
    // 0x80800570: jal         0x8009EF10
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_9;
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800578: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080057C: bne         $v0, $at, L_80800588
    if (ctx->r2 != ctx->r1) {
        // 0x80800580: addiu       $t8, $zero, 0x11C
        ctx->r24 = ADD32(0, 0X11C);
            goto L_80800588;
    }
    // 0x80800580: addiu       $t8, $zero, 0x11C
    ctx->r24 = ADD32(0, 0X11C);
    // 0x80800584: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_80800588:
    // 0x80800588: jal         0x8008E35C
    // 0x8080058C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_10;
    // 0x8080058C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800590: bne         $v0, $zero, L_8080059C
    if (ctx->r2 != 0) {
        // 0x80800594: addiu       $t9, $zero, 0x11A
        ctx->r25 = ADD32(0, 0X11A);
            goto L_8080059C;
    }
    // 0x80800594: addiu       $t9, $zero, 0x11A
    ctx->r25 = ADD32(0, 0X11A);
    // 0x80800598: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_8080059C:
    // 0x8080059C: jal         0x80096500
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096500(rdram, ctx);
        goto after_11;
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808005A4: beq         $v0, $zero, L_808005C0
    if (ctx->r2 == 0) {
        // 0x808005A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005C0;
    }
    // 0x808005A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005AC: jal         0x80091A58
    // 0x808005B0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_12;
    // 0x808005B0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_12:
    // 0x808005B4: beq         $v0, $zero, L_808005C0
    if (ctx->r2 == 0) {
        // 0x808005B8: addiu       $t0, $zero, 0x115
        ctx->r8 = ADD32(0, 0X115);
            goto L_808005C0;
    }
    // 0x808005B8: addiu       $t0, $zero, 0x115
    ctx->r8 = ADD32(0, 0X115);
    // 0x808005BC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_808005C0:
    // 0x808005C0: jal         0x80084138
    // 0x808005C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsvan_entrypoint_3(rdram, ctx);
        goto after_13;
    // 0x808005C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808005C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005CC: jal         0x8009E5C8
    // 0x808005D0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_14;
    // 0x808005D0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_14:
    // 0x808005D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808005D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808005DC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808005E0: jr          $ra
    // 0x808005E4: nop

    return;
    // 0x808005E4: nop

;}
RECOMP_FUNC void func_808005E8_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005F0: jal         0x80000174
    // 0x808005F4: nop

    func_80800174_bsvanswim(rdram, ctx);
        goto after_0;
    // 0x808005F4: nop

    after_0:
    // 0x808005F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800600: jr          $ra
    // 0x80800604: nop

    return;
    // 0x80800604: nop

;}
RECOMP_FUNC void bsvanswim_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800608: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080060C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(164, 0X990) << 16);
    // 0x80800610: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800614: jr          $ra
    // 0x80800618: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(164, 0X990));
    return;
    // 0x80800618: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(164, 0X990));
;}
RECOMP_FUNC void func_8080061C_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080061C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800620: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800624: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800628: jal         0x80000114
    // 0x8080062C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800114_bsvanswim(rdram, ctx);
        goto after_0;
    // 0x8080062C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800630: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800634: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080063C: jal         0x8008CB3C
    // 0x80800640: addiu       $a1, $zero, 0xE8
    ctx->r5 = ADD32(0, 0XE8);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800640: addiu       $a1, $zero, 0xE8
    ctx->r5 = ADD32(0, 0XE8);
    after_1:
    // 0x80800644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800648: jal         0x8008CA4C
    // 0x8080064C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008CA4C(rdram, ctx);
        goto after_2;
    // 0x8080064C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80800650: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800654: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080065C: jal         0x8008C9BC
    // 0x80800660: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_3;
    // 0x80800660: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_3:
    // 0x80800664: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(164, 0X974) << 16);
    // 0x80800668: lwc1        $f4, 0x974($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(164, 0X974));
    // 0x8080066C: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x80800670: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800678: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x8080067C: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x80800680: jal         0x8008C9F0
    // 0x80800684: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_4;
    // 0x80800684: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080068C: jal         0x8009C908
    // 0x80800690: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009C908(rdram, ctx);
        goto after_5;
    // 0x80800690: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80800694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800698: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x8080069C: jal         0x8009C99C
    // 0x808006A0: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_6;
    // 0x808006A0: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_6:
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006A8: jal         0x8009D2D8
    // 0x808006AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D2D8(rdram, ctx);
        goto after_7;
    // 0x808006AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x808006B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006B4: jal         0x8009B800
    // 0x808006B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009B800(rdram, ctx);
        goto after_8;
    // 0x808006B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x808006BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808006C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808006C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808006C8: jr          $ra
    // 0x808006CC: nop

    return;
    // 0x808006CC: nop

;}
RECOMP_FUNC void func_808006D0_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808006D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808006D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808006DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808006E0: jal         0x8008CABC
    // 0x808006E4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808006E4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808006E8: lui         $a1, 0x3EC2
    ctx->r5 = S32(0X3EC2 << 16);
    // 0x808006EC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808006F0: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x808006F4: jal         0x8008B348
    // 0x808006F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x808006F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808006FC: beq         $v0, $zero, L_8080070C
    if (ctx->r2 == 0) {
        // 0x80800700: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080070C;
    }
    // 0x80800700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800704: jal         0x8009FD24
    // 0x80800708: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009FD24(rdram, ctx);
        goto after_2;
    // 0x80800708: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_8080070C:
    // 0x8080070C: lui         $a1, 0x3F61
    ctx->r5 = S32(0X3F61 << 16);
    // 0x80800710: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    // 0x80800714: jal         0x8008B348
    // 0x80800718: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x80800718: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x8080071C: beq         $v0, $zero, L_8080072C
    if (ctx->r2 == 0) {
        // 0x80800720: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080072C;
    }
    // 0x80800720: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800724: jal         0x8009FD24
    // 0x80800728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009FD24(rdram, ctx);
        goto after_4;
    // 0x80800728: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_8080072C:
    // 0x8080072C: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800730: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800734: jal         0x8008B348
    // 0x80800738: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x80800738: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x8080073C: beq         $v0, $zero, L_8080075C
    if (ctx->r2 == 0) {
        // 0x80800740: lui         $a2, 0x3F66
        ctx->r6 = S32(0X3F66 << 16);
            goto L_8080075C;
    }
    // 0x80800740: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80800744: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x80800748: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8080074C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800754: jal         0x8009DE74
    // 0x80800758: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    func_8009DE74(rdram, ctx);
        goto after_6;
    // 0x80800758: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    after_6:
L_8080075C:
    // 0x8080075C: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80800760: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800764: jal         0x8008B348
    // 0x80800768: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x80800768: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_7:
    // 0x8080076C: beq         $v0, $zero, L_8080078C
    if (ctx->r2 == 0) {
        // 0x80800770: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080078C;
    }
    // 0x80800770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800774: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80800778: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x8080077C: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800780: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800784: jal         0x8009DE74
    // 0x80800788: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    func_8009DE74(rdram, ctx);
        goto after_8;
    // 0x80800788: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    after_8:
L_8080078C:
    // 0x8080078C: jal         0x800000B0
    // 0x80800790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000B0_bsvanswim(rdram, ctx);
        goto after_9;
    // 0x80800790: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800794: jal         0x8009EF10
    // 0x80800798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_10;
    // 0x80800798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080079C: bne         $v0, $zero, L_808007A8
    if (ctx->r2 != 0) {
        // 0x808007A0: addiu       $t6, $zero, 0x11B
        ctx->r14 = ADD32(0, 0X11B);
            goto L_808007A8;
    }
    // 0x808007A0: addiu       $t6, $zero, 0x11B
    ctx->r14 = ADD32(0, 0X11B);
    // 0x808007A4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808007A8:
    // 0x808007A8: jal         0x8008E35C
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_11;
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808007B0: bne         $v0, $zero, L_808007BC
    if (ctx->r2 != 0) {
        // 0x808007B4: addiu       $t7, $zero, 0x11A
        ctx->r15 = ADD32(0, 0X11A);
            goto L_808007BC;
    }
    // 0x808007B4: addiu       $t7, $zero, 0x11A
    ctx->r15 = ADD32(0, 0X11A);
    // 0x808007B8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_808007BC:
    // 0x808007BC: jal         0x80096500
    // 0x808007C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096500(rdram, ctx);
        goto after_12;
    // 0x808007C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808007C4: beq         $v0, $zero, L_808007E0
    if (ctx->r2 == 0) {
        // 0x808007C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007E0;
    }
    // 0x808007C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007CC: jal         0x80091A58
    // 0x808007D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_13;
    // 0x808007D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_13:
    // 0x808007D4: beq         $v0, $zero, L_808007E0
    if (ctx->r2 == 0) {
        // 0x808007D8: addiu       $t8, $zero, 0x115
        ctx->r24 = ADD32(0, 0X115);
            goto L_808007E0;
    }
    // 0x808007D8: addiu       $t8, $zero, 0x115
    ctx->r24 = ADD32(0, 0X115);
    // 0x808007DC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808007E0:
    // 0x808007E0: jal         0x80084138
    // 0x808007E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsvan_entrypoint_3(rdram, ctx);
        goto after_14;
    // 0x808007E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007EC: jal         0x8009E5C8
    // 0x808007F0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_15;
    // 0x808007F0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x808007F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808007F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808007FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800800: jr          $ra
    // 0x80800804: nop

    return;
    // 0x80800804: nop

;}
RECOMP_FUNC void func_80800808_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800808: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080080C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800810: jal         0x80000174
    // 0x80800814: nop

    func_80800174_bsvanswim(rdram, ctx);
        goto after_0;
    // 0x80800814: nop

    after_0:
    // 0x80800818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080081C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800820: jr          $ra
    // 0x80800824: nop

    return;
    // 0x80800824: nop

;}
RECOMP_FUNC void bsvanswim_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800828: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080082C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(164, 0X9A0) << 16);
    // 0x80800830: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800834: jr          $ra
    // 0x80800838: lw          $v0, 0x9A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(164, 0X9A0));
    return;
    // 0x80800838: lw          $v0, 0x9A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(164, 0X9A0));
;}
RECOMP_FUNC void func_8080083C_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080083C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800840: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800844: jal         0x800839B8
    // 0x80800848: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800848: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080084C: jal         0x80000174
    // 0x80800850: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800174_bsvanswim(rdram, ctx);
        goto after_1;
    // 0x80800850: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800858: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080085C: jr          $ra
    // 0x80800860: nop

    return;
    // 0x80800860: nop

;}
RECOMP_FUNC void func_80800864_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800864: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800868: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080086C: jal         0x80000114
    // 0x80800870: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800114_bsvanswim(rdram, ctx);
        goto after_0;
    // 0x80800870: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800874: jal         0x800839C8
    // 0x80800878: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80800878: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080087C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800884: jr          $ra
    // 0x80800888: nop

    return;
    // 0x80800888: nop

;}
RECOMP_FUNC void func_8080088C_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080088C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800894: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800898: jal         0x800839E8
    // 0x8080089C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x8080089C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808008A0: beq         $v0, $zero, L_808008AC
    if (ctx->r2 == 0) {
        // 0x808008A4: addiu       $t6, $zero, 0x11B
        ctx->r14 = ADD32(0, 0X11B);
            goto L_808008AC;
    }
    // 0x808008A4: addiu       $t6, $zero, 0x11B
    ctx->r14 = ADD32(0, 0X11B);
    // 0x808008A8: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_808008AC:
    // 0x808008AC: jal         0x80084138
    // 0x808008B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsvan_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x808008B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808008B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808008B8: jal         0x8009E5C8
    // 0x808008BC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x808008BC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x808008C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808008C8: jr          $ra
    // 0x808008CC: nop

    return;
    // 0x808008CC: nop

;}
RECOMP_FUNC void bsvanswim_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008D0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808008D4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(164, 0X9B0) << 16);
    // 0x808008D8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808008DC: jr          $ra
    // 0x808008E0: lw          $v0, 0x9B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(164, 0X9B0));
    return;
    // 0x808008E0: lw          $v0, 0x9B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(164, 0X9B0));
;}
RECOMP_FUNC void func_808008E4_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008EC: jal         0x80000114
    // 0x808008F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800114_bsvanswim(rdram, ctx);
        goto after_0;
    // 0x808008F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808008F4: jal         0x80082FE0
    // 0x808008F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x808008F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808008FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800900: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800904: jr          $ra
    // 0x80800908: nop

    return;
    // 0x80800908: nop

;}
RECOMP_FUNC void func_8080090C_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080090C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800910: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800914: jal         0x80082FE8
    // 0x80800918: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800918: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080091C: jal         0x80084138
    // 0x80800920: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsvan_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80800920: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800924: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800928: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080092C: jr          $ra
    // 0x80800930: nop

    return;
    // 0x80800930: nop

;}
RECOMP_FUNC void func_80800934_bsvanswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080093C: jal         0x80082FF0
    // 0x80800940: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800940: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800944: jal         0x80000174
    // 0x80800948: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800174_bsvanswim(rdram, ctx);
        goto after_1;
    // 0x80800948: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080094C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800954: jr          $ra
    // 0x80800958: nop

    return;
    // 0x80800958: nop

;}
RECOMP_FUNC void bsvanswim_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080095C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800960: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(164, 0X9C0) << 16);
    // 0x80800964: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800968: jr          $ra
    // 0x8080096C: lw          $v0, 0x9C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(164, 0X9C0));
    return;
    // 0x8080096C: lw          $v0, 0x9C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(164, 0X9C0));
;}
RECOMP_FUNC void func_80800000_bswalk(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: jal         0x8009EF1C
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800014: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800018: jal         0x8009EF10
    // 0x8080001C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x8080001C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80800020: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800024: jal         0x8008DE24
    // 0x80800028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DE24(rdram, ctx);
        goto after_2;
    // 0x80800028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080002C: beq         $v0, $zero, L_80800098
    if (ctx->r2 == 0) {
        // 0x80800030: lwc1        $f12, 0x24($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
            goto L_80800098;
    }
    // 0x80800030: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800038: jal         0x8008E078
    // 0x8080003C: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    func_8008E078(rdram, ctx);
        goto after_3;
    // 0x8080003C: swc1        $f12, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f12.u32l;
    after_3:
    // 0x80800040: beq         $v0, $zero, L_80800098
    if (ctx->r2 == 0) {
        // 0x80800044: lwc1        $f12, 0x24($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
            goto L_80800098;
    }
    // 0x80800044: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800048: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8080004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800050: bne         $t6, $zero, L_80800068
    if (ctx->r14 != 0) {
        // 0x80800054: nop
    
            goto L_80800068;
    }
    // 0x80800054: nop

    // 0x80800058: jal         0x8009B9B0
    // 0x8080005C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x8080005C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800060: b           L_8080015C
    // 0x80800064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080015C;
    // 0x80800064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800068:
    // 0x80800068: jal         0x8009EF04
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_5;
    // 0x8080006C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800070: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800074: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800078: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8080007C: jal         0x800F1214
    // 0x80800080: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    func_800F1214(rdram, ctx);
        goto after_6;
    // 0x80800080: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    after_6:
    // 0x80800084: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800088: jal         0x8009B9B0
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_7;
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800090: b           L_8080015C
    // 0x80800094: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080015C;
    // 0x80800094: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800098:
    // 0x80800098: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8080009C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x808000A0: beq         $at, $zero, L_80800158
    if (ctx->r1 == 0) {
        // 0x808000A4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80800158;
    }
    // 0x808000A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808000A8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(165, 0X14E0) << 16);
    // 0x808000AC: addu        $at, $at, $t7
    gpr jr_addend_808000B4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x808000B0: lw          $t7, 0x14E0($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(165, 0X14E0));
    // 0x808000B4: jr          $t7
    // 0x808000B8: nop

    switch (jr_addend_808000B4 >> 2) {
        case 0: goto L_808000BC; break;
        case 1: goto L_808000D0; break;
        case 2: goto L_808000F4; break;
        case 3: goto L_80800118; break;
        case 4: goto L_8080013C; break;
        default: switch_error(__func__, 0x808000B4, 0x808014E0);
    }
    // 0x808000B8: nop

L_808000BC:
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C0: jal         0x8009B9B0
    // 0x808000C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_8;
    // 0x808000C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x808000C8: b           L_8080015C
    // 0x808000CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080015C;
    // 0x808000CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000D0:
    // 0x808000D0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x808000D4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808000D8: jal         0x800F1214
    // 0x808000DC: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    func_800F1214(rdram, ctx);
        goto after_9;
    // 0x808000DC: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_9:
    // 0x808000E0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000E4: jal         0x8009B9B0
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_10;
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808000EC: b           L_8080015C
    // 0x808000F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080015C;
    // 0x808000F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000F4:
    // 0x808000F4: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x808000F8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808000FC: jal         0x800F1214
    // 0x80800100: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    func_800F1214(rdram, ctx);
        goto after_11;
    // 0x80800100: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    after_11:
    // 0x80800104: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800108: jal         0x8009B9B0
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_12;
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800110: b           L_8080015C
    // 0x80800114: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080015C;
    // 0x80800114: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800118:
    // 0x80800118: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x8080011C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800120: jal         0x800F1214
    // 0x80800124: lui         $a2, 0x4361
    ctx->r6 = S32(0X4361 << 16);
    func_800F1214(rdram, ctx);
        goto after_13;
    // 0x80800124: lui         $a2, 0x4361
    ctx->r6 = S32(0X4361 << 16);
    after_13:
    // 0x80800128: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080012C: jal         0x8009B9B0
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_14;
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800134: b           L_8080015C
    // 0x80800138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080015C;
    // 0x80800138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080013C:
    // 0x8080013C: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x80800140: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800144: jal         0x800F1214
    // 0x80800148: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    func_800F1214(rdram, ctx);
        goto after_15;
    // 0x80800148: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    after_15:
    // 0x8080014C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800150: jal         0x8009B9B0
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_16;
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
L_80800158:
    // 0x80800158: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080015C:
    // 0x8080015C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800160: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800164: jr          $ra
    // 0x80800168: nop

    return;
    // 0x80800168: nop

;}
RECOMP_FUNC void func_8080016C_bswalk(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080016C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800170: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800174: jal         0x8008E1A0
    // 0x80800178: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008E1A0(rdram, ctx);
        goto after_0;
    // 0x80800178: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080017C: beq         $v0, $zero, L_808001C0
    if (ctx->r2 == 0) {
        // 0x80800180: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808001C0;
    }
    // 0x80800180: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800184: jal         0x8009BBB8
    // 0x80800188: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009BBB8(rdram, ctx);
        goto after_1;
    // 0x80800188: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8080018C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(165, 0X14F4) << 16);
    // 0x80800190: lwc1        $f4, 0x14F4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(165, 0X14F4));
    // 0x80800194: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800198: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8080019C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808001A0: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x808001A4: jal         0x800F10B4
    // 0x808001A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x808001A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x808001AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001B0: jal         0x8008CA30
    // 0x808001B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008CA30(rdram, ctx);
        goto after_3;
    // 0x808001B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x808001B8: b           L_808001CC
    // 0x808001BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808001CC;
    // 0x808001BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001C0:
    // 0x808001C0: jal         0x8008CA30
    // 0x808001C4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_4;
    // 0x808001C4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x808001C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001CC:
    // 0x808001CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001D0: jr          $ra
    // 0x808001D4: nop

    return;
    // 0x808001D4: nop

;}
RECOMP_FUNC void func_808001D8_bswalk(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D8: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808001DC: jr          $ra
    // 0x808001E0: swc1        $f12, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x808001E0: swc1        $f12, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_808001E4_bswalk(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001EC: jal         0x800D8FF8
    // 0x808001F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x808001F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001F4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x808001F8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x808001FC: lwc1        $f4, 0x16C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X16C);
    // 0x80800200: jal         0x800F0E00
    // 0x80800204: sub.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f0.fl;
    func_800F0E00(rdram, ctx);
        goto after_1;
    // 0x80800204: sub.s       $f14, $f4, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f0.fl;
    after_1:
    // 0x80800208: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8080020C: swc1        $f0, 0x16C($t7)
    MEM_W(0X16C, ctx->r15) = ctx->f0.u32l;
    // 0x80800210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800218: jr          $ra
    // 0x8080021C: nop

    return;
    // 0x8080021C: nop

;}
RECOMP_FUNC void func_80800220_bswalk(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800220: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800224: lwc1        $f6, 0x16C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X16C);
    // 0x80800228: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8080022C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80800230: nop

    // 0x80800234: bc1f        L_80800240
    if (!c1cs) {
        // 0x80800238: nop
    
            goto L_80800240;
    }
    // 0x80800238: nop

    // 0x8080023C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800240:
    // 0x80800240: jr          $ra
    // 0x80800244: nop

    return;
    // 0x80800244: nop

;}
RECOMP_FUNC void func_80800248_bswalk(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800248: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080024C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800250: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80800254: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800258: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080025C: jal         0x80091A58
    // 0x80800260: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80800260: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80800264: beql        $v0, $zero, L_808002B4
    if (ctx->r2 == 0) {
        // 0x80800268: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808002B4;
    }
    goto skip_0;
    // 0x80800268: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080026C: jal         0x8009BB00
    // 0x80800270: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009BB00(rdram, ctx);
        goto after_1;
    // 0x80800270: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800274: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x80800278: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080027C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800280: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800284: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800288: nop

    // 0x8080028C: bc1f        L_808002A4
    if (!c1cs) {
        // 0x80800290: nop
    
            goto L_808002A4;
    }
    // 0x80800290: nop

    // 0x80800294: jal         0x800A04F4
    // 0x80800298: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800A04F4(rdram, ctx);
        goto after_2;
    // 0x80800298: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8080029C: b           L_808002B0
    // 0x808002A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_808002B0;
    // 0x808002A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_808002A4:
    // 0x808002A4: jal         0x800A055C
    // 0x808002A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800A055C(rdram, ctx);
        goto after_3;
    // 0x808002A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x808002AC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_808002B0:
    // 0x808002B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002B4:
    // 0x808002B4: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x808002B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002BC: jr          $ra
    // 0x808002C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808002C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bswalk_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002C4: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x808002C8: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808002CC: jr          $ra
    // 0x808002D0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x808002D0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bswalk_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002DC: jal         0x80000000
    // 0x808002E0: nop

    func_80800000_bswalk(rdram, ctx);
        goto after_0;
    // 0x808002E0: nop

    after_0:
    // 0x808002E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002EC: jr          $ra
    // 0x808002F0: nop

    return;
    // 0x808002F0: nop

;}
RECOMP_FUNC void bswalk_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800300: jal         0x800A2EDC
    // 0x80800304: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_800A2EDC(rdram, ctx);
        goto after_0;
    // 0x80800304: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_0:
    // 0x80800308: jal         0x8008E0E8
    // 0x8080030C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E0E8(rdram, ctx);
        goto after_1;
    // 0x8080030C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800310: beq         $v0, $zero, L_80800320
    if (ctx->r2 == 0) {
        // 0x80800314: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800320;
    }
    // 0x80800314: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800318: jal         0x80084788
    // 0x8080031C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x8080031C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
L_80800320:
    // 0x80800320: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800324: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800328: jr          $ra
    // 0x8080032C: nop

    return;
    // 0x8080032C: nop

;}
RECOMP_FUNC void bswalk_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800330: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800334: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800338: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x8080033C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800340: jal         0x8008CABC
    // 0x80800344: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800344: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800348: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8080034C: jal         0x8009E710
    // 0x80800350: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009E710(rdram, ctx);
        goto after_1;
    // 0x80800350: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800354: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800358: bnel        $v0, $at, L_8080037C
    if (ctx->r2 != ctx->r1) {
        // 0x8080035C: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_8080037C;
    }
    goto skip_0;
    // 0x8080035C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_0:
    // 0x80800360: jal         0x8008AEDC
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AEDC(rdram, ctx);
        goto after_2;
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800368: jal         0x8008C0C8
    // 0x8080036C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008C0C8(rdram, ctx);
        goto after_3;
    // 0x8080036C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x80800370: b           L_80800384
    // 0x80800374: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
        goto L_80800384;
    // 0x80800374: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800378: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_8080037C:
    // 0x8080037C: nop

    // 0x80800380: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
L_80800384:
    // 0x80800384: jal         0x8008AF24
    // 0x80800388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_4;
    // 0x80800388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800390: jal         0x8008AED4
    // 0x80800394: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x80800394: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80800398: lui         $a1, 0x3EDC
    ctx->r5 = S32(0X3EDC << 16);
    // 0x8080039C: ori         $a1, $a1, 0x28F6
    ctx->r5 = ctx->r5 | 0X28F6;
    // 0x808003A0: jal         0x8008B1BC
    // 0x808003A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x808003A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808003A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003AC: jal         0x8008B24C
    // 0x808003B0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8008B24C(rdram, ctx);
        goto after_7;
    // 0x808003B0: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x808003B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B8: jal         0x8008B134
    // 0x808003BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x808003BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x808003C0: jal         0x8008B064
    // 0x808003C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x808003C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808003C8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808003CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808003D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808003D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808003D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808003DC: jal         0x8009FFD8
    // 0x808003E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x808003E0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x808003E4: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x808003E8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808003EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808003F0: jal         0x8008C9BC
    // 0x808003F4: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_11;
    // 0x808003F4: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_11:
    // 0x808003F8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(165, 0X14F8) << 16);
    // 0x808003FC: lwc1        $f6, 0x14F8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(165, 0X14F8));
    // 0x80800400: lui         $a3, 0x3FE6
    ctx->r7 = S32(0X3FE6 << 16);
    // 0x80800404: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800408: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080040C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80800410: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x80800414: jal         0x8008C9F0
    // 0x80800418: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_12;
    // 0x80800418: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x8080041C: jal         0x8009F1E0
    // 0x80800420: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009F1E0(rdram, ctx);
        goto after_13;
    // 0x80800420: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x80800424: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800428: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8080042C: jal         0x800A2EDC
    // 0x80800430: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A2EDC(rdram, ctx);
        goto after_14;
    // 0x80800430: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x80800434: jal         0x8008E0E8
    // 0x80800438: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E0E8(rdram, ctx);
        goto after_15;
    // 0x80800438: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x8080043C: beq         $v0, $zero, L_8080044C
    if (ctx->r2 == 0) {
        // 0x80800440: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8080044C;
    }
    // 0x80800440: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800444: jal         0x80084788
    // 0x80800448: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_16;
    // 0x80800448: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_16:
L_8080044C:
    // 0x8080044C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800450: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800454: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800458: jr          $ra
    // 0x8080045C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8080045C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void bswalk_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800460: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800464: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800468: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080046C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800470: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800474: jal         0x8000016C
    // 0x80800478: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_8080016C_bswalk(rdram, ctx);
        goto after_0;
    // 0x80800478: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x8080047C: jal         0x8009EF04
    // 0x80800480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_1;
    // 0x80800480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800484: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800488: nop

    // 0x8080048C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800490: nop

    // 0x80800494: bc1fl       L_808004B4
    if (!c1cs) {
        // 0x80800498: lui         $a1, 0x3EF0
        ctx->r5 = S32(0X3EF0 << 16);
            goto L_808004B4;
    }
    goto skip_0;
    // 0x80800498: lui         $a1, 0x3EF0
    ctx->r5 = S32(0X3EF0 << 16);
    skip_0:
    // 0x8080049C: jal         0x8009C984
    // 0x808004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_2;
    // 0x808004A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808004A4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808004A8: jal         0x8009C914
    // 0x808004AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_3;
    // 0x808004AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808004B0: lui         $a1, 0x3EF0
    ctx->r5 = S32(0X3EF0 << 16);
L_808004B4:
    // 0x808004B4: ori         $a1, $a1, 0xA3D7
    ctx->r5 = ctx->r5 | 0XA3D7;
    // 0x808004B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004BC: jal         0x800A2CE8
    // 0x808004C0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_4;
    // 0x808004C0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x808004C4: lui         $a1, 0x3F78
    ctx->r5 = S32(0X3F78 << 16);
    // 0x808004C8: ori         $a1, $a1, 0x51EC
    ctx->r5 = ctx->r5 | 0X51EC;
    // 0x808004CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004D0: jal         0x800A2CE8
    // 0x808004D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_5;
    // 0x808004D4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x808004D8: jal         0x80000000
    // 0x808004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bswalk(rdram, ctx);
        goto after_6;
    // 0x808004DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808004E0: jal         0x8009EF10
    // 0x808004E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_7;
    // 0x808004E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808004E8: beq         $v0, $zero, L_80800510
    if (ctx->r2 == 0) {
        // 0x808004EC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800510;
    }
    // 0x808004EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808004F0: beq         $v0, $at, L_8080052C
    if (ctx->r2 == ctx->r1) {
        // 0x808004F4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8080052C;
    }
    // 0x808004F4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808004F8: beq         $v0, $at, L_80800534
    if (ctx->r2 == ctx->r1) {
        // 0x808004FC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800534;
    }
    // 0x808004FC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800500: beql        $v0, $at, L_80800540
    if (ctx->r2 == ctx->r1) {
        // 0x80800504: addiu       $s1, $zero, 0x4
        ctx->r17 = ADD32(0, 0X4);
            goto L_80800540;
    }
    goto skip_1;
    // 0x80800504: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    skip_1:
    // 0x80800508: b           L_80800540
    // 0x8080050C: nop

        goto L_80800540;
    // 0x8080050C: nop

L_80800510:
    // 0x80800510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800514: jal         0x8009BCD4
    // 0x80800518: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_8;
    // 0x80800518: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_8:
    // 0x8080051C: beq         $v0, $zero, L_80800540
    if (ctx->r2 == 0) {
        // 0x80800520: nop
    
            goto L_80800540;
    }
    // 0x80800520: nop

    // 0x80800524: b           L_80800540
    // 0x80800528: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_80800540;
    // 0x80800528: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8080052C:
    // 0x8080052C: b           L_80800540
    // 0x80800530: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
        goto L_80800540;
    // 0x80800530: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80800534:
    // 0x80800534: b           L_80800540
    // 0x80800538: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
        goto L_80800540;
    // 0x80800538: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x8080053C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_80800540:
    // 0x80800540: jal         0x8008DE24
    // 0x80800544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DE24(rdram, ctx);
        goto after_9;
    // 0x80800544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800548: beq         $v0, $zero, L_80800554
    if (ctx->r2 == 0) {
        // 0x8080054C: nop
    
            goto L_80800554;
    }
    // 0x8080054C: nop

    // 0x80800550: addiu       $s1, $zero, 0x7A
    ctx->r17 = ADD32(0, 0X7A);
L_80800554:
    // 0x80800554: jal         0x80097AD0
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_10;
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080055C: beq         $v0, $zero, L_80800570
    if (ctx->r2 == 0) {
        // 0x80800560: nop
    
            goto L_80800570;
    }
    // 0x80800560: nop

    // 0x80800564: jal         0x800848A8
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_11;
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080056C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80800570:
    // 0x80800570: jal         0x8008DD04
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_12;
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800578: beq         $v0, $zero, L_80800584
    if (ctx->r2 == 0) {
        // 0x8080057C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800584;
    }
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800580: addiu       $s1, $zero, 0x2F
    ctx->r17 = ADD32(0, 0X2F);
L_80800584:
    // 0x80800584: jal         0x800919F4
    // 0x80800588: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_13;
    // 0x80800588: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x8080058C: beq         $v0, $zero, L_80800598
    if (ctx->r2 == 0) {
        // 0x80800590: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800598;
    }
    // 0x80800590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800594: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
L_80800598:
    // 0x80800598: jal         0x80000248
    // 0x8080059C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80800248_bswalk(rdram, ctx);
        goto after_14;
    // 0x8080059C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_14:
    // 0x808005A0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808005A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A8: jal         0x80091A58
    // 0x808005AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_15;
    // 0x808005AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_15:
    // 0x808005B0: beq         $v0, $zero, L_8080061C
    if (ctx->r2 == 0) {
        // 0x808005B4: nop
    
            goto L_8080061C;
    }
    // 0x808005B4: nop

    // 0x808005B8: jal         0x8009FE84
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE84(rdram, ctx);
        goto after_16;
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808005C0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808005C4: jal         0x8009BB00
    // 0x808005C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_17;
    // 0x808005C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x808005CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808005D0: nop

    // 0x808005D4: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x808005D8: nop

    // 0x808005DC: bc1f        L_8080061C
    if (!c1cs) {
        // 0x808005E0: nop
    
            goto L_8080061C;
    }
    // 0x808005E0: nop

    // 0x808005E4: jal         0x8008D714
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D714(rdram, ctx);
        goto after_18;
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x808005EC: beq         $v0, $zero, L_808005FC
    if (ctx->r2 == 0) {
        // 0x808005F0: nop
    
            goto L_808005FC;
    }
    // 0x808005F0: nop

    // 0x808005F4: b           L_8080061C
    // 0x808005F8: addiu       $s1, $zero, 0xB8
    ctx->r17 = ADD32(0, 0XB8);
        goto L_8080061C;
    // 0x808005F8: addiu       $s1, $zero, 0xB8
    ctx->r17 = ADD32(0, 0XB8);
L_808005FC:
    // 0x808005FC: jal         0x8008D790
    // 0x80800600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D790(rdram, ctx);
        goto after_19;
    // 0x80800600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800604: beq         $v0, $zero, L_8080061C
    if (ctx->r2 == 0) {
        // 0x80800608: nop
    
            goto L_8080061C;
    }
    // 0x80800608: nop

    // 0x8080060C: jal         0x80084978
    // 0x80800610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_12(rdram, ctx);
        goto after_20;
    // 0x80800610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80800614: b           L_80800664
    // 0x80800618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800664;
    // 0x80800618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080061C:
    // 0x8080061C: jal         0x8008E148
    // 0x80800620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_21;
    // 0x80800620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800624: beq         $v0, $zero, L_80800638
    if (ctx->r2 == 0) {
        // 0x80800628: nop
    
            goto L_80800638;
    }
    // 0x80800628: nop

    // 0x8080062C: jal         0x800848B0
    // 0x80800630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_22;
    // 0x80800630: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800634: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80800638:
    // 0x80800638: jal         0x8008E35C
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_23;
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800640: beq         $v0, $zero, L_8080064C
    if (ctx->r2 == 0) {
        // 0x80800644: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080064C;
    }
    // 0x80800644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800648: addiu       $s1, $zero, 0x2D
    ctx->r17 = ADD32(0, 0X2D);
L_8080064C:
    // 0x8080064C: jal         0x800A02DC
    // 0x80800650: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800A02DC(rdram, ctx);
        goto after_24;
    // 0x80800650: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_24:
    // 0x80800654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800658: jal         0x8009E5C8
    // 0x8080065C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_25;
    // 0x8080065C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_25:
    // 0x80800660: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800664:
    // 0x80800664: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800668: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8080066C: jr          $ra
    // 0x80800670: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800670: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bswalk_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800674: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800678: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(165, 0X1520) << 16);
    // 0x8080067C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800680: jr          $ra
    // 0x80800684: lw          $v0, 0x1520($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(165, 0X1520));
    return;
    // 0x80800684: lw          $v0, 0x1520($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(165, 0X1520));
;}
RECOMP_FUNC void bswalk_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800688: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080068C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800690: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800694: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800698: jal         0x8008CABC
    // 0x8080069C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080069C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x808006A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808006A4: jal         0x8009E710
    // 0x808006A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009E710(rdram, ctx);
        goto after_1;
    // 0x808006A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x808006AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808006B0: bnel        $v0, $at, L_808006D4
    if (ctx->r2 != ctx->r1) {
        // 0x808006B4: mtc1        $zero, $f4
        ctx->f4.u32l = 0;
            goto L_808006D4;
    }
    goto skip_0;
    // 0x808006B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    skip_0:
    // 0x808006B8: jal         0x8008AEDC
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AEDC(rdram, ctx);
        goto after_2;
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808006C0: jal         0x8008C0C8
    // 0x808006C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008C0C8(rdram, ctx);
        goto after_3;
    // 0x808006C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x808006C8: b           L_808006DC
    // 0x808006CC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
        goto L_808006DC;
    // 0x808006CC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x808006D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
L_808006D4:
    // 0x808006D4: nop

    // 0x808006D8: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
L_808006DC:
    // 0x808006DC: jal         0x8008AF24
    // 0x808006E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_4;
    // 0x808006E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808006E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006E8: jal         0x8008AED4
    // 0x808006EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x808006EC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x808006F0: lui         $a1, 0x3EDC
    ctx->r5 = S32(0X3EDC << 16);
    // 0x808006F4: ori         $a1, $a1, 0x28F6
    ctx->r5 = ctx->r5 | 0X28F6;
    // 0x808006F8: jal         0x8008B1BC
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x808006FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800704: jal         0x8008B24C
    // 0x80800708: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8008B24C(rdram, ctx);
        goto after_7;
    // 0x80800708: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x8080070C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800710: jal         0x8008B134
    // 0x80800714: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x80800714: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x80800718: jal         0x8008B064
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800720: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800724: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800728: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080072C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800730: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800734: jal         0x8009FFD8
    // 0x80800738: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x80800738: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x8080073C: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800740: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800744: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800748: jal         0x8008C9BC
    // 0x8080074C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_11;
    // 0x8080074C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_11:
    // 0x80800750: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(165, 0X14FC) << 16);
    // 0x80800754: lwc1        $f6, 0x14FC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(165, 0X14FC));
    // 0x80800758: lui         $a3, 0x3FA6
    ctx->r7 = S32(0X3FA6 << 16);
    // 0x8080075C: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800760: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800764: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80800768: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x8080076C: jal         0x8008C9F0
    // 0x80800770: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_12;
    // 0x80800770: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x80800774: jal         0x8009F1E0
    // 0x80800778: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009F1E0(rdram, ctx);
        goto after_13;
    // 0x80800778: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x8080077C: jal         0x8008E0E8
    // 0x80800780: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E0E8(rdram, ctx);
        goto after_14;
    // 0x80800780: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x80800784: beq         $v0, $zero, L_80800794
    if (ctx->r2 == 0) {
        // 0x80800788: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800794;
    }
    // 0x80800788: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080078C: jal         0x80084788
    // 0x80800790: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_15;
    // 0x80800790: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_15:
L_80800794:
    // 0x80800794: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800798: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8080079C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808007A0: jr          $ra
    // 0x808007A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x808007A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void bswalk_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808007AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808007B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808007B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808007B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808007BC: jal         0x8000016C
    // 0x808007C0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_8080016C_bswalk(rdram, ctx);
        goto after_0;
    // 0x808007C0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x808007C4: jal         0x8009EF04
    // 0x808007C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_1;
    // 0x808007C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808007CC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808007D0: nop

    // 0x808007D4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808007D8: nop

    // 0x808007DC: bc1fl       L_808007FC
    if (!c1cs) {
        // 0x808007E0: lui         $a1, 0x3ECC
        ctx->r5 = S32(0X3ECC << 16);
            goto L_808007FC;
    }
    goto skip_0;
    // 0x808007E0: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    skip_0:
    // 0x808007E4: jal         0x8009C984
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_2;
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808007EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808007F0: jal         0x8009C914
    // 0x808007F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_3;
    // 0x808007F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808007F8: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
L_808007FC:
    // 0x808007FC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800804: jal         0x800A2CE8
    // 0x80800808: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_4;
    // 0x80800808: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x8080080C: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80800810: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800818: jal         0x800A2CE8
    // 0x8080081C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_5;
    // 0x8080081C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_5:
    // 0x80800820: jal         0x80000000
    // 0x80800824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bswalk(rdram, ctx);
        goto after_6;
    // 0x80800824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800828: jal         0x8009EF10
    // 0x8080082C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_7;
    // 0x8080082C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800830: beq         $v0, $zero, L_80800858
    if (ctx->r2 == 0) {
        // 0x80800834: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80800858;
    }
    // 0x80800834: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800838: beq         $v0, $at, L_80800874
    if (ctx->r2 == ctx->r1) {
        // 0x8080083C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800874;
    }
    // 0x8080083C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800840: beq         $v0, $at, L_8080087C
    if (ctx->r2 == ctx->r1) {
        // 0x80800844: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_8080087C;
    }
    // 0x80800844: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800848: beql        $v0, $at, L_80800888
    if (ctx->r2 == ctx->r1) {
        // 0x8080084C: addiu       $s1, $zero, 0x4
        ctx->r17 = ADD32(0, 0X4);
            goto L_80800888;
    }
    goto skip_1;
    // 0x8080084C: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
    skip_1:
    // 0x80800850: b           L_80800888
    // 0x80800854: nop

        goto L_80800888;
    // 0x80800854: nop

L_80800858:
    // 0x80800858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080085C: jal         0x8009BCD4
    // 0x80800860: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_8;
    // 0x80800860: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_8:
    // 0x80800864: beq         $v0, $zero, L_80800888
    if (ctx->r2 == 0) {
        // 0x80800868: nop
    
            goto L_80800888;
    }
    // 0x80800868: nop

    // 0x8080086C: b           L_80800888
    // 0x80800870: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_80800888;
    // 0x80800870: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80800874:
    // 0x80800874: b           L_80800888
    // 0x80800878: addiu       $s1, $zero, 0x1F
    ctx->r17 = ADD32(0, 0X1F);
        goto L_80800888;
    // 0x80800878: addiu       $s1, $zero, 0x1F
    ctx->r17 = ADD32(0, 0X1F);
L_8080087C:
    // 0x8080087C: b           L_80800888
    // 0x80800880: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
        goto L_80800888;
    // 0x80800880: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
    // 0x80800884: addiu       $s1, $zero, 0x4
    ctx->r17 = ADD32(0, 0X4);
L_80800888:
    // 0x80800888: jal         0x8008DE24
    // 0x8080088C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DE24(rdram, ctx);
        goto after_9;
    // 0x8080088C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800890: beq         $v0, $zero, L_8080089C
    if (ctx->r2 == 0) {
        // 0x80800894: nop
    
            goto L_8080089C;
    }
    // 0x80800894: nop

    // 0x80800898: addiu       $s1, $zero, 0x7A
    ctx->r17 = ADD32(0, 0X7A);
L_8080089C:
    // 0x8080089C: jal         0x80097AD0
    // 0x808008A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_10;
    // 0x808008A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808008A4: beq         $v0, $zero, L_808008B8
    if (ctx->r2 == 0) {
        // 0x808008A8: nop
    
            goto L_808008B8;
    }
    // 0x808008A8: nop

    // 0x808008AC: jal         0x800848A8
    // 0x808008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_11;
    // 0x808008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808008B4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_808008B8:
    // 0x808008B8: jal         0x8008DD04
    // 0x808008BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_12;
    // 0x808008BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808008C0: beq         $v0, $zero, L_808008CC
    if (ctx->r2 == 0) {
        // 0x808008C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008CC;
    }
    // 0x808008C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008C8: addiu       $s1, $zero, 0x2F
    ctx->r17 = ADD32(0, 0X2F);
L_808008CC:
    // 0x808008CC: jal         0x800919F4
    // 0x808008D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_13;
    // 0x808008D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x808008D4: beq         $v0, $zero, L_808008E0
    if (ctx->r2 == 0) {
        // 0x808008D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008E0;
    }
    // 0x808008D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008DC: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
L_808008E0:
    // 0x808008E0: jal         0x80000248
    // 0x808008E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80800248_bswalk(rdram, ctx);
        goto after_14;
    // 0x808008E4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_14:
    // 0x808008E8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808008EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008F0: jal         0x80091A58
    // 0x808008F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_15;
    // 0x808008F4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_15:
    // 0x808008F8: beq         $v0, $zero, L_80800964
    if (ctx->r2 == 0) {
        // 0x808008FC: nop
    
            goto L_80800964;
    }
    // 0x808008FC: nop

    // 0x80800900: jal         0x8009FE84
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE84(rdram, ctx);
        goto after_16;
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800908: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8080090C: jal         0x8009BB00
    // 0x80800910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_17;
    // 0x80800910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800914: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800918: nop

    // 0x8080091C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80800920: nop

    // 0x80800924: bc1f        L_80800964
    if (!c1cs) {
        // 0x80800928: nop
    
            goto L_80800964;
    }
    // 0x80800928: nop

    // 0x8080092C: jal         0x8008D714
    // 0x80800930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D714(rdram, ctx);
        goto after_18;
    // 0x80800930: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800934: beq         $v0, $zero, L_80800944
    if (ctx->r2 == 0) {
        // 0x80800938: nop
    
            goto L_80800944;
    }
    // 0x80800938: nop

    // 0x8080093C: b           L_80800964
    // 0x80800940: addiu       $s1, $zero, 0xB8
    ctx->r17 = ADD32(0, 0XB8);
        goto L_80800964;
    // 0x80800940: addiu       $s1, $zero, 0xB8
    ctx->r17 = ADD32(0, 0XB8);
L_80800944:
    // 0x80800944: jal         0x8008D790
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D790(rdram, ctx);
        goto after_19;
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8080094C: beq         $v0, $zero, L_80800964
    if (ctx->r2 == 0) {
        // 0x80800950: nop
    
            goto L_80800964;
    }
    // 0x80800950: nop

    // 0x80800954: jal         0x80084978
    // 0x80800958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_12(rdram, ctx);
        goto after_20;
    // 0x80800958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8080095C: b           L_808009AC
    // 0x80800960: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808009AC;
    // 0x80800960: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800964:
    // 0x80800964: jal         0x8008E148
    // 0x80800968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_21;
    // 0x80800968: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x8080096C: beq         $v0, $zero, L_80800980
    if (ctx->r2 == 0) {
        // 0x80800970: nop
    
            goto L_80800980;
    }
    // 0x80800970: nop

    // 0x80800974: jal         0x800848B0
    // 0x80800978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_22;
    // 0x80800978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x8080097C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80800980:
    // 0x80800980: jal         0x8008E35C
    // 0x80800984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_23;
    // 0x80800984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800988: beq         $v0, $zero, L_80800994
    if (ctx->r2 == 0) {
        // 0x8080098C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800994;
    }
    // 0x8080098C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800990: addiu       $s1, $zero, 0x2D
    ctx->r17 = ADD32(0, 0X2D);
L_80800994:
    // 0x80800994: jal         0x800A02DC
    // 0x80800998: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800A02DC(rdram, ctx);
        goto after_24;
    // 0x80800998: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_24:
    // 0x8080099C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009A0: jal         0x8009E5C8
    // 0x808009A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_25;
    // 0x808009A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_25:
    // 0x808009A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808009AC:
    // 0x808009AC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808009B0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808009B4: jr          $ra
    // 0x808009B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808009B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bswalk_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009C4: jal         0x8008E0E8
    // 0x808009C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E0E8(rdram, ctx);
        goto after_0;
    // 0x808009C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808009CC: beq         $v0, $zero, L_808009DC
    if (ctx->r2 == 0) {
        // 0x808009D0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808009DC;
    }
    // 0x808009D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808009D4: jal         0x80084788
    // 0x808009D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x808009D8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_808009DC:
    // 0x808009DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808009E4: jr          $ra
    // 0x808009E8: nop

    return;
    // 0x808009E8: nop

;}
RECOMP_FUNC void bswalk_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009EC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808009F0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(165, 0X1530) << 16);
    // 0x808009F4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808009F8: jr          $ra
    // 0x808009FC: lw          $v0, 0x1530($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(165, 0X1530));
    return;
    // 0x808009FC: lw          $v0, 0x1530($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(165, 0X1530));
;}
RECOMP_FUNC void bswalk_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A00: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800A04: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800A08: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800A0C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800A10: jal         0x8008CABC
    // 0x80800A14: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800A14: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800A18: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800A1C: jal         0x8009E710
    // 0x80800A20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009E710(rdram, ctx);
        goto after_1;
    // 0x80800A20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800A24: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800A28: beq         $v0, $at, L_80800A44
    if (ctx->r2 == ctx->r1) {
        // 0x80800A2C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800A44;
    }
    // 0x80800A2C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800A30: beq         $v0, $at, L_80800A44
    if (ctx->r2 == ctx->r1) {
        // 0x80800A34: nop
    
            goto L_80800A44;
    }
    // 0x80800A34: nop

    // 0x80800A38: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800A3C: b           L_80800A58
    // 0x80800A40: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
        goto L_80800A58;
    // 0x80800A40: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
L_80800A44:
    // 0x80800A44: jal         0x8008AEDC
    // 0x80800A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AEDC(rdram, ctx);
        goto after_2;
    // 0x80800A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800A4C: jal         0x8008C0C8
    // 0x80800A50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008C0C8(rdram, ctx);
        goto after_3;
    // 0x80800A50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x80800A54: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
L_80800A58:
    // 0x80800A58: jal         0x8008AF24
    // 0x80800A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_4;
    // 0x80800A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A64: jal         0x8008AED4
    // 0x80800A68: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x80800A68: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_5:
    // 0x80800A6C: lui         $a1, 0x3F28
    ctx->r5 = S32(0X3F28 << 16);
    // 0x80800A70: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    // 0x80800A74: jal         0x8008B1BC
    // 0x80800A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x80800A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800A7C: lui         $a1, 0x3E0F
    ctx->r5 = S32(0X3E0F << 16);
    // 0x80800A80: ori         $a1, $a1, 0x5C29
    ctx->r5 = ctx->r5 | 0X5C29;
    // 0x80800A84: jal         0x8008B1C8
    // 0x80800A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_7;
    // 0x80800A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A90: jal         0x8008B24C
    // 0x80800A94: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8008B24C(rdram, ctx);
        goto after_8;
    // 0x80800A94: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_8:
    // 0x80800A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A9C: jal         0x8008B134
    // 0x80800AA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_9;
    // 0x80800AA0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x80800AA4: jal         0x8008B064
    // 0x80800AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_10;
    // 0x80800AA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800AAC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800AB0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800AB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800AB8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800ABC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800AC0: jal         0x8009FFD8
    // 0x80800AC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_11;
    // 0x80800AC4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_11:
    // 0x80800AC8: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800ACC: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800AD0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800AD4: jal         0x8008C9BC
    // 0x80800AD8: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_12;
    // 0x80800AD8: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_12:
    // 0x80800ADC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(165, 0X1500) << 16);
    // 0x80800AE0: lwc1        $f6, 0x1500($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(165, 0X1500));
    // 0x80800AE4: lui         $a3, 0x3F6B
    ctx->r7 = S32(0X3F6B << 16);
    // 0x80800AE8: ori         $a3, $a3, 0x851F
    ctx->r7 = ctx->r7 | 0X851F;
    // 0x80800AEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800AF0: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    // 0x80800AF4: lui         $a2, 0x4361
    ctx->r6 = S32(0X4361 << 16);
    // 0x80800AF8: jal         0x8008C9F0
    // 0x80800AFC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_13;
    // 0x80800AFC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_13:
    // 0x80800B00: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800B04: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800B08: jal         0x800001D8
    // 0x80800B0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_808001D8_bswalk(rdram, ctx);
        goto after_14;
    // 0x80800B0C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x80800B10: jal         0x8009F1E0
    // 0x80800B14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009F1E0(rdram, ctx);
        goto after_15;
    // 0x80800B14: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x80800B18: jal         0x8008E0E8
    // 0x80800B1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E0E8(rdram, ctx);
        goto after_16;
    // 0x80800B1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x80800B20: beq         $v0, $zero, L_80800B30
    if (ctx->r2 == 0) {
        // 0x80800B24: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800B30;
    }
    // 0x80800B24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800B28: jal         0x80084788
    // 0x80800B2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_17;
    // 0x80800B2C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_17:
L_80800B30:
    // 0x80800B30: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800B34: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B38: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800B3C: jr          $ra
    // 0x80800B40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80800B40: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void bswalk_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800B48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800B50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B54: jal         0x8000016C
    // 0x80800B58: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8080016C_bswalk(rdram, ctx);
        goto after_0;
    // 0x80800B58: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800B5C: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x80800B60: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B68: jal         0x800A2CE8
    // 0x80800B6C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_1;
    // 0x80800B6C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80800B70: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80800B74: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B7C: jal         0x800A2CE8
    // 0x80800B80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_2;
    // 0x80800B80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x80800B84: jal         0x800001E4
    // 0x80800B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001E4_bswalk(rdram, ctx);
        goto after_3;
    // 0x80800B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800B8C: jal         0x80000000
    // 0x80800B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bswalk(rdram, ctx);
        goto after_4;
    // 0x80800B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800B94: jal         0x8009EF10
    // 0x80800B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_5;
    // 0x80800B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800B9C: beq         $v0, $zero, L_80800BC4
    if (ctx->r2 == 0) {
        // 0x80800BA0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80800BC4;
    }
    // 0x80800BA0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800BA4: beq         $v0, $at, L_80800BC4
    if (ctx->r2 == ctx->r1) {
        // 0x80800BA8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800BC4;
    }
    // 0x80800BA8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800BAC: beq         $v0, $at, L_80800BC4
    if (ctx->r2 == ctx->r1) {
        // 0x80800BB0: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800BC4;
    }
    // 0x80800BB0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800BB4: beq         $v0, $at, L_80800BF0
    if (ctx->r2 == ctx->r1) {
        // 0x80800BB8: addiu       $t7, $zero, 0x4
        ctx->r15 = ADD32(0, 0X4);
            goto L_80800BF0;
    }
    // 0x80800BB8: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80800BBC: b           L_80800BF4
    // 0x80800BC0: nop

        goto L_80800BF4;
    // 0x80800BC0: nop

L_80800BC4:
    // 0x80800BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BC8: jal         0x8009BCD4
    // 0x80800BCC: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_6;
    // 0x80800BCC: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    after_6:
    // 0x80800BD0: beq         $v0, $zero, L_80800BF4
    if (ctx->r2 == 0) {
        // 0x80800BD4: nop
    
            goto L_80800BF4;
    }
    // 0x80800BD4: nop

    // 0x80800BD8: jal         0x80000220
    // 0x80800BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800220_bswalk(rdram, ctx);
        goto after_7;
    // 0x80800BDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800BE0: beq         $v0, $zero, L_80800BF4
    if (ctx->r2 == 0) {
        // 0x80800BE4: addiu       $t6, $zero, 0x2
        ctx->r14 = ADD32(0, 0X2);
            goto L_80800BF4;
    }
    // 0x80800BE4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800BE8: b           L_80800BF4
    // 0x80800BEC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_80800BF4;
    // 0x80800BEC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800BF0:
    // 0x80800BF0: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800BF4:
    // 0x80800BF4: jal         0x8008DE24
    // 0x80800BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DE24(rdram, ctx);
        goto after_8;
    // 0x80800BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800BFC: beq         $v0, $zero, L_80800C08
    if (ctx->r2 == 0) {
        // 0x80800C00: addiu       $t8, $zero, 0x7A
        ctx->r24 = ADD32(0, 0X7A);
            goto L_80800C08;
    }
    // 0x80800C00: addiu       $t8, $zero, 0x7A
    ctx->r24 = ADD32(0, 0X7A);
    // 0x80800C04: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800C08:
    // 0x80800C08: jal         0x8008E300
    // 0x80800C0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E300(rdram, ctx);
        goto after_9;
    // 0x80800C0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800C10: beq         $v0, $zero, L_80800C40
    if (ctx->r2 == 0) {
        // 0x80800C14: nop
    
            goto L_80800C40;
    }
    // 0x80800C14: nop

    // 0x80800C18: jal         0x8009BB5C
    // 0x80800C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_10;
    // 0x80800C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800C20: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x80800C24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800C28: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x80800C2C: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800C30: nop

    // 0x80800C34: bc1f        L_80800C40
    if (!c1cs) {
        // 0x80800C38: nop
    
            goto L_80800C40;
    }
    // 0x80800C38: nop

    // 0x80800C3C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80800C40:
    // 0x80800C40: jal         0x80097AD0
    // 0x80800C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_11;
    // 0x80800C44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800C48: beq         $v0, $zero, L_80800C5C
    if (ctx->r2 == 0) {
        // 0x80800C4C: nop
    
            goto L_80800C5C;
    }
    // 0x80800C4C: nop

    // 0x80800C50: jal         0x800848A8
    // 0x80800C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_12;
    // 0x80800C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800C58: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80800C5C:
    // 0x80800C5C: jal         0x8008DD04
    // 0x80800C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_13;
    // 0x80800C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800C64: beq         $v0, $zero, L_80800C74
    if (ctx->r2 == 0) {
        // 0x80800C68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C74;
    }
    // 0x80800C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C6C: addiu       $t0, $zero, 0x2F
    ctx->r8 = ADD32(0, 0X2F);
    // 0x80800C70: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_80800C74:
    // 0x80800C74: jal         0x800919F4
    // 0x80800C78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_14;
    // 0x80800C78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x80800C7C: beq         $v0, $zero, L_80800C8C
    if (ctx->r2 == 0) {
        // 0x80800C80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C8C;
    }
    // 0x80800C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C84: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x80800C88: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80800C8C:
    // 0x80800C8C: jal         0x80000248
    // 0x80800C90: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80800248_bswalk(rdram, ctx);
        goto after_15;
    // 0x80800C90: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x80800C94: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C9C: jal         0x80091A58
    // 0x80800CA0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_16;
    // 0x80800CA0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_16:
    // 0x80800CA4: beq         $v0, $zero, L_80800D10
    if (ctx->r2 == 0) {
        // 0x80800CA8: nop
    
            goto L_80800D10;
    }
    // 0x80800CA8: nop

    // 0x80800CAC: jal         0x8009FE84
    // 0x80800CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE84(rdram, ctx);
        goto after_17;
    // 0x80800CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800CB4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800CB8: jal         0x8009BB00
    // 0x80800CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_18;
    // 0x80800CBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800CC0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800CC4: nop

    // 0x80800CC8: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80800CCC: nop

    // 0x80800CD0: bc1f        L_80800D10
    if (!c1cs) {
        // 0x80800CD4: nop
    
            goto L_80800D10;
    }
    // 0x80800CD4: nop

    // 0x80800CD8: jal         0x8008D714
    // 0x80800CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D714(rdram, ctx);
        goto after_19;
    // 0x80800CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800CE0: beq         $v0, $zero, L_80800CF0
    if (ctx->r2 == 0) {
        // 0x80800CE4: addiu       $t2, $zero, 0xB8
        ctx->r10 = ADD32(0, 0XB8);
            goto L_80800CF0;
    }
    // 0x80800CE4: addiu       $t2, $zero, 0xB8
    ctx->r10 = ADD32(0, 0XB8);
    // 0x80800CE8: b           L_80800D10
    // 0x80800CEC: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
        goto L_80800D10;
    // 0x80800CEC: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_80800CF0:
    // 0x80800CF0: jal         0x8008D790
    // 0x80800CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D790(rdram, ctx);
        goto after_20;
    // 0x80800CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80800CF8: beq         $v0, $zero, L_80800D10
    if (ctx->r2 == 0) {
        // 0x80800CFC: nop
    
            goto L_80800D10;
    }
    // 0x80800CFC: nop

    // 0x80800D00: jal         0x80084978
    // 0x80800D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_12(rdram, ctx);
        goto after_21;
    // 0x80800D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800D08: b           L_80800D5C
    // 0x80800D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800D5C;
    // 0x80800D0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800D10:
    // 0x80800D10: jal         0x8008E148
    // 0x80800D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_22;
    // 0x80800D14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800D18: beq         $v0, $zero, L_80800D2C
    if (ctx->r2 == 0) {
        // 0x80800D1C: nop
    
            goto L_80800D2C;
    }
    // 0x80800D1C: nop

    // 0x80800D20: jal         0x800848B0
    // 0x80800D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_23;
    // 0x80800D24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800D28: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80800D2C:
    // 0x80800D2C: jal         0x8008E35C
    // 0x80800D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_24;
    // 0x80800D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80800D34: beq         $v0, $zero, L_80800D44
    if (ctx->r2 == 0) {
        // 0x80800D38: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D44;
    }
    // 0x80800D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D3C: addiu       $t3, $zero, 0x2D
    ctx->r11 = ADD32(0, 0X2D);
    // 0x80800D40: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_80800D44:
    // 0x80800D44: jal         0x800A02DC
    // 0x80800D48: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800A02DC(rdram, ctx);
        goto after_25;
    // 0x80800D48: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_25:
    // 0x80800D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D50: jal         0x8009E5C8
    // 0x80800D54: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_26;
    // 0x80800D54: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_26:
    // 0x80800D58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800D5C:
    // 0x80800D5C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800D60: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800D64: jr          $ra
    // 0x80800D68: nop

    return;
    // 0x80800D68: nop

;}
RECOMP_FUNC void bswalk_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D6C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D70: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D74: jal         0x8008E0E8
    // 0x80800D78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E0E8(rdram, ctx);
        goto after_0;
    // 0x80800D78: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D7C: beq         $v0, $zero, L_80800D8C
    if (ctx->r2 == 0) {
        // 0x80800D80: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800D8C;
    }
    // 0x80800D80: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800D84: jal         0x80084788
    // 0x80800D88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800D88: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
L_80800D8C:
    // 0x80800D8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D94: jr          $ra
    // 0x80800D98: nop

    return;
    // 0x80800D98: nop

;}
RECOMP_FUNC void bswalk_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D9C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800DA0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(165, 0X1540) << 16);
    // 0x80800DA4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800DA8: jr          $ra
    // 0x80800DAC: lw          $v0, 0x1540($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(165, 0X1540));
    return;
    // 0x80800DAC: lw          $v0, 0x1540($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(165, 0X1540));
;}
RECOMP_FUNC void bswalk_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DB0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800DB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800DB8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800DBC: jal         0x8008CABC
    // 0x80800DC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800DC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800DC4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800DC8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800DCC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80800DD0: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80800DD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DD8: jal         0x8009E710
    // 0x80800DDC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    func_8009E710(rdram, ctx);
        goto after_1;
    // 0x80800DDC: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x80800DE0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800DE4: beq         $v0, $at, L_80800E0C
    if (ctx->r2 == ctx->r1) {
        // 0x80800DE8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800E0C;
    }
    // 0x80800DE8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800DEC: beq         $v0, $at, L_80800E0C
    if (ctx->r2 == ctx->r1) {
        // 0x80800DF0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800E0C;
    }
    // 0x80800DF0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800DF4: beq         $v0, $at, L_80800E58
    if (ctx->r2 == ctx->r1) {
        // 0x80800DF8: addiu       $at, $zero, 0xC
        ctx->r1 = ADD32(0, 0XC);
            goto L_80800E58;
    }
    // 0x80800DF8: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80800DFC: beq         $v0, $at, L_80800E50
    if (ctx->r2 == ctx->r1) {
        // 0x80800E00: nop
    
            goto L_80800E50;
    }
    // 0x80800E00: nop

    // 0x80800E04: b           L_80800E6C
    // 0x80800E08: nop

        goto L_80800E6C;
    // 0x80800E08: nop

L_80800E0C:
    // 0x80800E0C: jal         0x8009BB5C
    // 0x80800E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_2;
    // 0x80800E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800E14: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80800E18: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800E1C: nop

    // 0x80800E20: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80800E24: nop

    // 0x80800E28: bc1f        L_80800E6C
    if (!c1cs) {
        // 0x80800E2C: nop
    
            goto L_80800E6C;
    }
    // 0x80800E2C: nop

    // 0x80800E30: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E38: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800E3C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800E40: jal         0x800849E0
    // 0x80800E44: nop

    _badust_entrypoint_3(rdram, ctx);
        goto after_3;
    // 0x80800E44: nop

    after_3:
    // 0x80800E48: b           L_80800E6C
    // 0x80800E4C: nop

        goto L_80800E6C;
    // 0x80800E4C: nop

L_80800E50:
    // 0x80800E50: b           L_80800E6C
    // 0x80800E54: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
        goto L_80800E6C;
    // 0x80800E54: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_80800E58:
    // 0x80800E58: jal         0x8008AEDC
    // 0x80800E5C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008AEDC(rdram, ctx);
        goto after_4;
    // 0x80800E5C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_4:
    // 0x80800E60: jal         0x8008C0C8
    // 0x80800E64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008C0C8(rdram, ctx);
        goto after_5;
    // 0x80800E64: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x80800E68: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
L_80800E6C:
    // 0x80800E6C: jal         0x8008AF24
    // 0x80800E70: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008AF24(rdram, ctx);
        goto after_6;
    // 0x80800E70: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x80800E74: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800E78: jal         0x8008B1A0
    // 0x80800E7C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8008B1A0(rdram, ctx);
        goto after_7;
    // 0x80800E7C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x80800E80: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800E84: jal         0x8008AED4
    // 0x80800E88: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_8008AED4(rdram, ctx);
        goto after_8;
    // 0x80800E88: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_8:
    // 0x80800E8C: lui         $a1, 0x3F28
    ctx->r5 = S32(0X3F28 << 16);
    // 0x80800E90: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    // 0x80800E94: jal         0x8008B1BC
    // 0x80800E98: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B1BC(rdram, ctx);
        goto after_9;
    // 0x80800E98: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_9:
    // 0x80800E9C: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80800EA0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800EA4: jal         0x8008B1C8
    // 0x80800EA8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B1C8(rdram, ctx);
        goto after_10;
    // 0x80800EA8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_10:
    // 0x80800EAC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800EB0: jal         0x8008B24C
    // 0x80800EB4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_8008B24C(rdram, ctx);
        goto after_11;
    // 0x80800EB4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_11:
    // 0x80800EB8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800EBC: jal         0x8008B134
    // 0x80800EC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_12;
    // 0x80800EC0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x80800EC4: jal         0x8008B064
    // 0x80800EC8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_13;
    // 0x80800EC8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_13:
    // 0x80800ECC: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800ED0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800ED4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ED8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800EDC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800EE0: jal         0x8009FFD8
    // 0x80800EE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_14;
    // 0x80800EE4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_14:
    // 0x80800EE8: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800EEC: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800EF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EF4: jal         0x8008C9BC
    // 0x80800EF8: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_15;
    // 0x80800EF8: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_15:
    // 0x80800EFC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(165, 0X1504) << 16);
    // 0x80800F00: lwc1        $f8, 0x1504($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(165, 0X1504));
    // 0x80800F04: lui         $a3, 0x3F0A
    ctx->r7 = S32(0X3F0A << 16);
    // 0x80800F08: ori         $a3, $a3, 0x3D71
    ctx->r7 = ctx->r7 | 0X3D71;
    // 0x80800F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F10: lui         $a1, 0x4361
    ctx->r5 = S32(0X4361 << 16);
    // 0x80800F14: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    // 0x80800F18: jal         0x8008C9F0
    // 0x80800F1C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_16;
    // 0x80800F1C: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_16:
    // 0x80800F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F24: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800F28: jal         0x8009BFE4
    // 0x80800F2C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_17;
    // 0x80800F2C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_17:
    // 0x80800F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F34: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800F38: jal         0x8009C554
    // 0x80800F3C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_18;
    // 0x80800F3C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_18:
    // 0x80800F40: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800F44: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800F48: jal         0x800001D8
    // 0x80800F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001D8_bswalk(rdram, ctx);
        goto after_19;
    // 0x80800F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800F50: jal         0x8009F1E0
    // 0x80800F54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F1E0(rdram, ctx);
        goto after_20;
    // 0x80800F54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80800F58: jal         0x8008E0E8
    // 0x80800F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E0E8(rdram, ctx);
        goto after_21;
    // 0x80800F5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800F60: beq         $v0, $zero, L_80800F70
    if (ctx->r2 == 0) {
        // 0x80800F64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800F70;
    }
    // 0x80800F64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F68: jal         0x80084788
    // 0x80800F6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_22;
    // 0x80800F6C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_22:
L_80800F70:
    // 0x80800F70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800F74: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800F78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800F7C: jr          $ra
    // 0x80800F80: nop

    return;
    // 0x80800F80: nop

;}
RECOMP_FUNC void bswalk_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800F88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800F8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800F90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800F94: jal         0x8000016C
    // 0x80800F98: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8080016C_bswalk(rdram, ctx);
        goto after_0;
    // 0x80800F98: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800FA4: jal         0x8009D2F0
    // 0x80800FA8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8009D2F0(rdram, ctx);
        goto after_1;
    // 0x80800FA8: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_1:
    // 0x80800FAC: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x80800FB0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FB8: jal         0x800A2CE8
    // 0x80800FBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_2;
    // 0x80800FBC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80800FC0: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80800FC4: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800FC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FCC: jal         0x800A2CE8
    // 0x80800FD0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_3;
    // 0x80800FD0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x80800FD4: jal         0x800001E4
    // 0x80800FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001E4_bswalk(rdram, ctx);
        goto after_4;
    // 0x80800FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800FDC: jal         0x80000000
    // 0x80800FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bswalk(rdram, ctx);
        goto after_5;
    // 0x80800FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800FE4: jal         0x8009EF10
    // 0x80800FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_6;
    // 0x80800FE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800FEC: beq         $v0, $zero, L_80801018
    if (ctx->r2 == 0) {
        // 0x80800FF0: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80801018;
    }
    // 0x80800FF0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800FF4: beq         $v0, $at, L_80801050
    if (ctx->r2 == ctx->r1) {
        // 0x80800FF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801050;
    }
    // 0x80800FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FFC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801000: beq         $v0, $at, L_80801050
    if (ctx->r2 == ctx->r1) {
        // 0x80801004: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80801050;
    }
    // 0x80801004: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80801008: beq         $v0, $at, L_80801084
    if (ctx->r2 == ctx->r1) {
        // 0x8080100C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801084;
    }
    // 0x8080100C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801010: b           L_808010C4
    // 0x80801014: nop

        goto L_808010C4;
    // 0x80801014: nop

L_80801018:
    // 0x80801018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080101C: jal         0x8009BCD4
    // 0x80801020: lui         $a1, 0x4190
    ctx->r5 = S32(0X4190 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_7;
    // 0x80801020: lui         $a1, 0x4190
    ctx->r5 = S32(0X4190 << 16);
    after_7:
    // 0x80801024: beq         $v0, $zero, L_80801030
    if (ctx->r2 == 0) {
        // 0x80801028: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80801030;
    }
    // 0x80801028: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080102C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80801030:
    // 0x80801030: jal         0x80097AD0
    // 0x80801034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_8;
    // 0x80801034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80801038: beq         $v0, $zero, L_808010C4
    if (ctx->r2 == 0) {
        // 0x8080103C: nop
    
            goto L_808010C4;
    }
    // 0x8080103C: nop

    // 0x80801040: jal         0x800848A8
    // 0x80801044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_9;
    // 0x80801044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80801048: b           L_808010C4
    // 0x8080104C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
        goto L_808010C4;
    // 0x8080104C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80801050:
    // 0x80801050: jal         0x8009BCD4
    // 0x80801054: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_10;
    // 0x80801054: lui         $a1, 0x4316
    ctx->r5 = S32(0X4316 << 16);
    after_10:
    // 0x80801058: beq         $v0, $zero, L_80801064
    if (ctx->r2 == 0) {
        // 0x8080105C: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_80801064;
    }
    // 0x8080105C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80801060: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80801064:
    // 0x80801064: jal         0x80097AD0
    // 0x80801068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_11;
    // 0x80801068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080106C: beq         $v0, $zero, L_808010C4
    if (ctx->r2 == 0) {
        // 0x80801070: nop
    
            goto L_808010C4;
    }
    // 0x80801070: nop

    // 0x80801074: jal         0x800848A8
    // 0x80801078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_12;
    // 0x80801078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x8080107C: b           L_808010C4
    // 0x80801080: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
        goto L_808010C4;
    // 0x80801080: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80801084:
    // 0x80801084: jal         0x8009BCD4
    // 0x80801088: lui         $a1, 0x4361
    ctx->r5 = S32(0X4361 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_13;
    // 0x80801088: lui         $a1, 0x4361
    ctx->r5 = S32(0X4361 << 16);
    after_13:
    // 0x8080108C: beq         $v0, $zero, L_808010A8
    if (ctx->r2 == 0) {
        // 0x80801090: nop
    
            goto L_808010A8;
    }
    // 0x80801090: nop

    // 0x80801094: jal         0x80000220
    // 0x80801098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800220_bswalk(rdram, ctx);
        goto after_14;
    // 0x80801098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8080109C: beq         $v0, $zero, L_808010A8
    if (ctx->r2 == 0) {
        // 0x808010A0: addiu       $t8, $zero, 0x3
        ctx->r24 = ADD32(0, 0X3);
            goto L_808010A8;
    }
    // 0x808010A0: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x808010A4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808010A8:
    // 0x808010A8: jal         0x80097AD0
    // 0x808010AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_15;
    // 0x808010AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808010B0: beq         $v0, $zero, L_808010C4
    if (ctx->r2 == 0) {
        // 0x808010B4: nop
    
            goto L_808010C4;
    }
    // 0x808010B4: nop

    // 0x808010B8: jal         0x800848A8
    // 0x808010BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_16;
    // 0x808010BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808010C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_808010C4:
    // 0x808010C4: jal         0x8008DE24
    // 0x808010C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DE24(rdram, ctx);
        goto after_17;
    // 0x808010C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x808010CC: beq         $v0, $zero, L_808010D8
    if (ctx->r2 == 0) {
        // 0x808010D0: addiu       $t9, $zero, 0x7A
        ctx->r25 = ADD32(0, 0X7A);
            goto L_808010D8;
    }
    // 0x808010D0: addiu       $t9, $zero, 0x7A
    ctx->r25 = ADD32(0, 0X7A);
    // 0x808010D4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_808010D8:
    // 0x808010D8: jal         0x8008E300
    // 0x808010DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E300(rdram, ctx);
        goto after_18;
    // 0x808010DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x808010E0: beq         $v0, $zero, L_80801110
    if (ctx->r2 == 0) {
        // 0x808010E4: nop
    
            goto L_80801110;
    }
    // 0x808010E4: nop

    // 0x808010E8: jal         0x8009BB5C
    // 0x808010EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_19;
    // 0x808010EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x808010F0: lui         $at, 0x42FA
    ctx->r1 = S32(0X42FA << 16);
    // 0x808010F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808010F8: addiu       $t0, $zero, 0xC
    ctx->r8 = ADD32(0, 0XC);
    // 0x808010FC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80801100: nop

    // 0x80801104: bc1f        L_80801110
    if (!c1cs) {
        // 0x80801108: nop
    
            goto L_80801110;
    }
    // 0x80801108: nop

    // 0x8080110C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_80801110:
    // 0x80801110: jal         0x8008DD04
    // 0x80801114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_20;
    // 0x80801114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80801118: beq         $v0, $zero, L_80801128
    if (ctx->r2 == 0) {
        // 0x8080111C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801128;
    }
    // 0x8080111C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801120: addiu       $t1, $zero, 0x2F
    ctx->r9 = ADD32(0, 0X2F);
    // 0x80801124: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80801128:
    // 0x80801128: jal         0x800919F4
    // 0x8080112C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_21;
    // 0x8080112C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x80801130: beq         $v0, $zero, L_80801140
    if (ctx->r2 == 0) {
        // 0x80801134: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801140;
    }
    // 0x80801134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801138: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x8080113C: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_80801140:
    // 0x80801140: jal         0x80000248
    // 0x80801144: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80800248_bswalk(rdram, ctx);
        goto after_22;
    // 0x80801144: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_22:
    // 0x80801148: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8080114C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801150: jal         0x80091A58
    // 0x80801154: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_23;
    // 0x80801154: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_23:
    // 0x80801158: beq         $v0, $zero, L_808011C4
    if (ctx->r2 == 0) {
        // 0x8080115C: nop
    
            goto L_808011C4;
    }
    // 0x8080115C: nop

    // 0x80801160: jal         0x8009FE84
    // 0x80801164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE84(rdram, ctx);
        goto after_24;
    // 0x80801164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80801168: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8080116C: jal         0x8009BB00
    // 0x80801170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_25;
    // 0x80801170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80801174: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80801178: nop

    // 0x8080117C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80801180: nop

    // 0x80801184: bc1f        L_808011C4
    if (!c1cs) {
        // 0x80801188: nop
    
            goto L_808011C4;
    }
    // 0x80801188: nop

    // 0x8080118C: jal         0x8008D714
    // 0x80801190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D714(rdram, ctx);
        goto after_26;
    // 0x80801190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80801194: beq         $v0, $zero, L_808011A4
    if (ctx->r2 == 0) {
        // 0x80801198: addiu       $t3, $zero, 0xB8
        ctx->r11 = ADD32(0, 0XB8);
            goto L_808011A4;
    }
    // 0x80801198: addiu       $t3, $zero, 0xB8
    ctx->r11 = ADD32(0, 0XB8);
    // 0x8080119C: b           L_808011C4
    // 0x808011A0: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
        goto L_808011C4;
    // 0x808011A0: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_808011A4:
    // 0x808011A4: jal         0x8008D790
    // 0x808011A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D790(rdram, ctx);
        goto after_27;
    // 0x808011A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x808011AC: beq         $v0, $zero, L_808011C4
    if (ctx->r2 == 0) {
        // 0x808011B0: nop
    
            goto L_808011C4;
    }
    // 0x808011B0: nop

    // 0x808011B4: jal         0x80084978
    // 0x808011B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_12(rdram, ctx);
        goto after_28;
    // 0x808011B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x808011BC: b           L_80801210
    // 0x808011C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80801210;
    // 0x808011C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808011C4:
    // 0x808011C4: jal         0x8008E148
    // 0x808011C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_29;
    // 0x808011C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x808011CC: beq         $v0, $zero, L_808011E0
    if (ctx->r2 == 0) {
        // 0x808011D0: nop
    
            goto L_808011E0;
    }
    // 0x808011D0: nop

    // 0x808011D4: jal         0x800848B0
    // 0x808011D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_30;
    // 0x808011D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x808011DC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_808011E0:
    // 0x808011E0: jal         0x8008E35C
    // 0x808011E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_31;
    // 0x808011E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x808011E8: beq         $v0, $zero, L_808011F8
    if (ctx->r2 == 0) {
        // 0x808011EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808011F8;
    }
    // 0x808011EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011F0: addiu       $t4, $zero, 0x2D
    ctx->r12 = ADD32(0, 0X2D);
    // 0x808011F4: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
L_808011F8:
    // 0x808011F8: jal         0x800A02DC
    // 0x808011FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800A02DC(rdram, ctx);
        goto after_32;
    // 0x808011FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_32:
    // 0x80801200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801204: jal         0x8009E5C8
    // 0x80801208: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_33;
    // 0x80801208: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_33:
    // 0x8080120C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80801210:
    // 0x80801210: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801214: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801218: jr          $ra
    // 0x8080121C: nop

    return;
    // 0x8080121C: nop

;}
RECOMP_FUNC void bswalk_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801220: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801228: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080122C: jal         0x8009BF5C
    // 0x80801230: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_0;
    // 0x80801230: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x80801234: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801238: jal         0x8009C4CC
    // 0x8080123C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_1;
    // 0x8080123C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80801240: jal         0x8008E0E8
    // 0x80801244: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E0E8(rdram, ctx);
        goto after_2;
    // 0x80801244: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80801248: beq         $v0, $zero, L_80801258
    if (ctx->r2 == 0) {
        // 0x8080124C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80801258;
    }
    // 0x8080124C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801250: jal         0x80084788
    // 0x80801254: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_3;
    // 0x80801254: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
L_80801258:
    // 0x80801258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080125C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801260: jr          $ra
    // 0x80801264: nop

    return;
    // 0x80801264: nop

;}
RECOMP_FUNC void bswalk_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801268: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080126C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(165, 0X1550) << 16);
    // 0x80801270: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801274: jr          $ra
    // 0x80801278: lw          $v0, 0x1550($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(165, 0X1550));
    return;
    // 0x80801278: lw          $v0, 0x1550($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(165, 0X1550));
;}
RECOMP_FUNC void bswalk_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080127C: jr          $ra
    // 0x80801280: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80801280: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bswalk_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801284: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801288: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080128C: lui         $a2, 0x3EDC
    ctx->r6 = S32(0X3EDC << 16);
    // 0x80801290: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801294: ori         $a2, $a2, 0x28F6
    ctx->r6 = ctx->r6 | 0X28F6;
    // 0x80801298: jal         0x8008CB3C
    // 0x8080129C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x8080129C: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_0:
    // 0x808012A0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808012A4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808012A8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808012AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808012B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808012B4: jal         0x8009FFD8
    // 0x808012B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x808012B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x808012BC: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x808012C0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808012C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808012C8: jal         0x8008C9BC
    // 0x808012CC: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_2;
    // 0x808012CC: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_2:
    // 0x808012D0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(165, 0X1508) << 16);
    // 0x808012D4: lwc1        $f4, 0x1508($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(165, 0X1508));
    // 0x808012D8: lui         $a3, 0x3F99
    ctx->r7 = S32(0X3F99 << 16);
    // 0x808012DC: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x808012E0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808012E4: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x808012E8: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    // 0x808012EC: jal         0x8008C9F0
    // 0x808012F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_3;
    // 0x808012F0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x808012F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808012F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808012FC: jr          $ra
    // 0x80801300: nop

    return;
    // 0x80801300: nop

;}
RECOMP_FUNC void bswalk_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801304: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801308: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080130C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80801310: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80801314: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801318: jal         0x8000016C
    // 0x8080131C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_8080016C_bswalk(rdram, ctx);
        goto after_0;
    // 0x8080131C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x80801320: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x80801324: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80801328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080132C: jal         0x800A2CE8
    // 0x80801330: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_1;
    // 0x80801330: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x80801334: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80801338: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x8080133C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801340: jal         0x800A2CE8
    // 0x80801344: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_2;
    // 0x80801344: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x80801348: jal         0x80000000
    // 0x8080134C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bswalk(rdram, ctx);
        goto after_3;
    // 0x8080134C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801350: jal         0x8008DE24
    // 0x80801354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DE24(rdram, ctx);
        goto after_4;
    // 0x80801354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801358: bne         $v0, $zero, L_80801364
    if (ctx->r2 != 0) {
        // 0x8080135C: nop
    
            goto L_80801364;
    }
    // 0x8080135C: nop

    // 0x80801360: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80801364:
    // 0x80801364: jal         0x8009EF10
    // 0x80801368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_5;
    // 0x80801368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080136C: bne         $v0, $zero, L_80801378
    if (ctx->r2 != 0) {
        // 0x80801370: nop
    
            goto L_80801378;
    }
    // 0x80801370: nop

    // 0x80801374: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80801378:
    // 0x80801378: jal         0x80097AD0
    // 0x8080137C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_6;
    // 0x8080137C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801380: beq         $v0, $zero, L_80801394
    if (ctx->r2 == 0) {
        // 0x80801384: nop
    
            goto L_80801394;
    }
    // 0x80801384: nop

    // 0x80801388: jal         0x800848A8
    // 0x8080138C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_7;
    // 0x8080138C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80801390: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80801394:
    // 0x80801394: jal         0x8008DD04
    // 0x80801398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_8;
    // 0x80801398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080139C: beq         $v0, $zero, L_808013A8
    if (ctx->r2 == 0) {
        // 0x808013A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808013A8;
    }
    // 0x808013A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013A4: addiu       $s1, $zero, 0x2F
    ctx->r17 = ADD32(0, 0X2F);
L_808013A8:
    // 0x808013A8: jal         0x800919F4
    // 0x808013AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800919F4(rdram, ctx);
        goto after_9;
    // 0x808013AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x808013B0: beq         $v0, $zero, L_808013BC
    if (ctx->r2 == 0) {
        // 0x808013B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808013BC;
    }
    // 0x808013B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013B8: addiu       $s1, $zero, 0x7
    ctx->r17 = ADD32(0, 0X7);
L_808013BC:
    // 0x808013BC: jal         0x80000248
    // 0x808013C0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80800248_bswalk(rdram, ctx);
        goto after_10;
    // 0x808013C0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
    // 0x808013C4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808013C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013CC: jal         0x80091A58
    // 0x808013D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_11;
    // 0x808013D0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_11:
    // 0x808013D4: beq         $v0, $zero, L_808013E8
    if (ctx->r2 == 0) {
        // 0x808013D8: nop
    
            goto L_808013E8;
    }
    // 0x808013D8: nop

    // 0x808013DC: jal         0x8009FE84
    // 0x808013E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE84(rdram, ctx);
        goto after_12;
    // 0x808013E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808013E4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_808013E8:
    // 0x808013E8: jal         0x8008E148
    // 0x808013EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_13;
    // 0x808013EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808013F0: beq         $v0, $zero, L_80801404
    if (ctx->r2 == 0) {
        // 0x808013F4: nop
    
            goto L_80801404;
    }
    // 0x808013F4: nop

    // 0x808013F8: jal         0x800848B0
    // 0x808013FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_14;
    // 0x808013FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80801400: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80801404:
    // 0x80801404: jal         0x8008E35C
    // 0x80801408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_15;
    // 0x80801408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x8080140C: beq         $v0, $zero, L_80801418
    if (ctx->r2 == 0) {
        // 0x80801410: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801418;
    }
    // 0x80801410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801414: addiu       $s1, $zero, 0x2D
    ctx->r17 = ADD32(0, 0X2D);
L_80801418:
    // 0x80801418: jal         0x800A02DC
    // 0x8080141C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800A02DC(rdram, ctx);
        goto after_16;
    // 0x8080141C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_16:
    // 0x80801420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801424: jal         0x8009E5C8
    // 0x80801428: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_17;
    // 0x80801428: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_17:
    // 0x8080142C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801430: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80801434: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80801438: jr          $ra
    // 0x8080143C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8080143C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bswalk_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801440: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801444: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(165, 0X1560) << 16);
    // 0x80801448: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080144C: jr          $ra
    // 0x80801450: lw          $v0, 0x1560($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(165, 0X1560));
    return;
    // 0x80801450: lw          $v0, 0x1560($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(165, 0X1560));
;}
RECOMP_FUNC void bswalk_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801454: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80801458: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080145C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80801460: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801464: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801468: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x8080146C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80801470: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(165, 0X1514) << 16);
    // 0x80801474: lui         $a2, 0x4361
    ctx->r6 = S32(0X4361 << 16);
    // 0x80801478: bc1f        L_808014B0
    if (!c1cs) {
        // 0x8080147C: lui         $a3, 0x43FA
        ctx->r7 = S32(0X43FA << 16);
            goto L_808014B0;
    }
    // 0x8080147C: lui         $a3, 0x43FA
    ctx->r7 = S32(0X43FA << 16);
    // 0x80801480: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(165, 0X150C) << 16);
    // 0x80801484: lwc1        $f4, 0x150C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(165, 0X150C));
    // 0x80801488: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(165, 0X1510) << 16);
    // 0x8080148C: lwc1        $f6, 0x1510($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(165, 0X1510));
    // 0x80801490: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80801494: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80801498: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x8080149C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x808014A0: jal         0x8009FF44
    // 0x808014A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_8009FF44(rdram, ctx);
        goto after_0;
    // 0x808014A4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x808014A8: b           L_808014CC
    // 0x808014AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808014CC;
    // 0x808014AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808014B0:
    // 0x808014B0: lwc1        $f8, 0x1514($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(165, 0X1514));
    // 0x808014B4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(165, 0X1518) << 16);
    // 0x808014B8: lwc1        $f10, 0x1518($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(165, 0X1518));
    // 0x808014BC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x808014C0: jal         0x8009FF44
    // 0x808014C4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_8009FF44(rdram, ctx);
        goto after_1;
    // 0x808014C4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_1:
    // 0x808014C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808014CC:
    // 0x808014CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808014D0: jr          $ra
    // 0x808014D4: nop

    return;
    // 0x808014D4: nop

    // 0x808014D8: nop

    // 0x808014DC: nop

;}
RECOMP_FUNC void func_80800000_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x8009EF1C
    // 0x8080000C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x8080000C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800010: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80800014: jal         0x8009EF10
    // 0x80800018: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x80800018: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x8080001C: bne         $v0, $zero, L_80800038
    if (ctx->r2 != 0) {
        // 0x80800020: lwc1        $f12, 0x1C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_80800038;
    }
    // 0x80800020: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800024: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800028: jal         0x8009B9B0
    // 0x8080002C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x8080002C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800030: b           L_80800058
    // 0x80800034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800058;
    // 0x80800034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800038:
    // 0x80800038: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8080003C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800040: jal         0x800F1214
    // 0x80800044: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x80800044: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    after_3:
    // 0x80800048: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080004C: jal         0x8009B9B0
    // 0x80800050: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800050: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800058:
    // 0x80800058: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080005C: jr          $ra
    // 0x80800060: nop

    return;
    // 0x80800060: nop

;}
RECOMP_FUNC void func_80800064_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080006C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800070: jal         0x80097AD0
    // 0x80800074: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80097AD0(rdram, ctx);
        goto after_0;
    // 0x80800074: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800078: beq         $v0, $zero, L_8080008C
    if (ctx->r2 == 0) {
        // 0x8080007C: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_8080008C;
    }
    // 0x8080007C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800080: jal         0x800848A8
    // 0x80800084: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _badrone_entrypoint_24(rdram, ctx);
        goto after_1;
    // 0x80800084: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800088: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8080008C:
    // 0x8080008C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800090: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80800094: jal         0x80091A58
    // 0x80800098: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80091A58(rdram, ctx);
        goto after_2;
    // 0x80800098: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x8080009C: beq         $v0, $zero, L_808000A8
    if (ctx->r2 == 0) {
        // 0x808000A0: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_808000A8;
    }
    // 0x808000A0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808000A4: addiu       $v1, $zero, 0x35
    ctx->r3 = ADD32(0, 0X35);
L_808000A8:
    // 0x808000A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x808000B4: jr          $ra
    // 0x808000B8: nop

    return;
    // 0x808000B8: nop

;}
RECOMP_FUNC void func_808000BC_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000C8: jal         0x8009C908
    // 0x808000CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009C908(rdram, ctx);
        goto after_0;
    // 0x808000CC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x808000D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000D4: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x808000D8: jal         0x8009C99C
    // 0x808000DC: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_1;
    // 0x808000DC: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    after_1:
    // 0x808000E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000E8: jr          $ra
    // 0x808000EC: nop

    return;
    // 0x808000EC: nop

;}
RECOMP_FUNC void func_808000F0_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800100: jal         0x8009E74C
    // 0x80800104: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x80800104: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
    // 0x80800108: bne         $v0, $zero, L_80800194
    if (ctx->r2 != 0) {
        // 0x8080010C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800194;
    }
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800110: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800114: jal         0x800947EC
    // 0x80800118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_1;
    // 0x80800118: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800120: jal         0x8009BF5C
    // 0x80800124: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_2;
    // 0x80800124: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080012C: jal         0x8009C4CC
    // 0x80800130: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_3;
    // 0x80800130: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800134: jal         0x8009C000
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C000(rdram, ctx);
        goto after_4;
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080013C: jal         0x8009C570
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C570(rdram, ctx);
        goto after_5;
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800144: jal         0x8009EF60
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_6;
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080014C: jal         0x80095A40
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_7;
    // 0x80800150: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800158: jal         0x80095964
    // 0x8080015C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80095964(rdram, ctx);
        goto after_8;
    // 0x8080015C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80800160: jal         0x8009E474
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_9;
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080016C: jal         0x80095774
    // 0x80800170: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80095774(rdram, ctx);
        goto after_10;
    // 0x80800170: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800178: jal         0x80095774
    // 0x8080017C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80095774(rdram, ctx);
        goto after_11;
    // 0x8080017C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_11:
    // 0x80800180: jal         0x800853F8
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawasher_entrypoint_1(rdram, ctx);
        goto after_12;
    // 0x80800184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080018C: jal         0x80092864
    // 0x80800190: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80092864(rdram, ctx);
        goto after_13;
    // 0x80800190: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_13:
L_80800194:
    // 0x80800194: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800198: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080019C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001A0: jr          $ra
    // 0x808001A4: nop

    return;
    // 0x808001A4: nop

;}
RECOMP_FUNC void func_808001A8_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001B4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001B8: jal         0x8009E77C
    // 0x808001BC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x808001BC: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
    // 0x808001C0: bnel        $v0, $zero, L_8080029C
    if (ctx->r2 != 0) {
        // 0x808001C4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080029C;
    }
    goto skip_0;
    // 0x808001C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808001C8: jal         0x80085400
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawasher_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D4: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808001D8: jal         0x8009BFE4
    // 0x808001DC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_2;
    // 0x808001DC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_2:
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E4: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808001E8: jal         0x8009C554
    // 0x808001EC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_3;
    // 0x808001EC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_3:
    // 0x808001F0: jal         0x8009EFA8
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_4;
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808001F8: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x808001FC: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800204: jal         0x8009F1C8
    // 0x80800208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_5;
    // 0x80800208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800214: jal         0x8009F1C8
    // 0x80800218: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_6;
    // 0x80800218: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_6:
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800220: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80800224: jal         0x800959C8
    // 0x80800228: lui         $a2, 0x4250
    ctx->r6 = S32(0X4250 << 16);
    func_800959C8(rdram, ctx);
        goto after_7;
    // 0x80800228: lui         $a2, 0x4250
    ctx->r6 = S32(0X4250 << 16);
    after_7:
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800230: jal         0x80095964
    // 0x80800234: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80095964(rdram, ctx);
        goto after_8;
    // 0x80800234: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800238: jal         0x8009E4AC
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_9;
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800244: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800248: jal         0x8009E55C
    // 0x8080024C: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    func_8009E55C(rdram, ctx);
        goto after_10;
    // 0x8080024C: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    after_10:
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800254: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800258: jal         0x8009E55C
    // 0x8080025C: lui         $a2, 0x429C
    ctx->r6 = S32(0X429C << 16);
    func_8009E55C(rdram, ctx);
        goto after_11;
    // 0x8080025C: lui         $a2, 0x429C
    ctx->r6 = S32(0X429C << 16);
    after_11:
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800264: jal         0x80095760
    // 0x80800268: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80095760(rdram, ctx);
        goto after_12;
    // 0x80800268: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800270: jal         0x80095760
    // 0x80800274: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80095760(rdram, ctx);
        goto after_13;
    // 0x80800274: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_13:
    // 0x80800278: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080027C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800280: jal         0x800947EC
    // 0x80800284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_14;
    // 0x80800284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_14:
    // 0x80800288: lui         $a1, 0x3FE6
    ctx->r5 = S32(0X3FE6 << 16);
    // 0x8080028C: ori         $a1, $a1, 0x6600
    ctx->r5 = ctx->r5 | 0X6600;
    // 0x80800290: jal         0x80092864
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092864(rdram, ctx);
        goto after_15;
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080029C:
    // 0x8080029C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002A4: jr          $ra
    // 0x808002A8: nop

    return;
    // 0x808002A8: nop

;}
RECOMP_FUNC void bswasher_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808002B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002B4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x808002B8: jal         0x800B5BE4
    // 0x808002BC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800B5BE4(rdram, ctx);
        goto after_0;
    // 0x808002BC: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x808002C0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808002C4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808002C8: jal         0x8009C128
    // 0x808002CC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x808002CC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x808002D0: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(166, 0X1D60) << 16);
    // 0x808002D4: addiu       $t6, $t6, 0x1D60
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(166, 0X1D60));
    // 0x808002D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808002DC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808002E0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x808002E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808002E8: jal         0x800BABB8
    // 0x808002EC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_2;
    // 0x808002EC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_2:
    // 0x808002F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808002F8: jr          $ra
    // 0x808002FC: nop

    return;
    // 0x808002FC: nop

;}
RECOMP_FUNC void func_80800300_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800300: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800304: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800308: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080030C: jal         0x8009C990
    // 0x80800310: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009C990(rdram, ctx);
        goto after_0;
    // 0x80800310: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800314: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800318: jal         0x8009C984
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800320: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800324: jal         0x800F1DCC
    // 0x80800328: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_2;
    // 0x80800328: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_2:
    // 0x8080032C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800330: jal         0x80085410
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawasher_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800338: jal         0x8009BB5C
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_4;
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800340: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800344: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800348: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8080034C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800350: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800354: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    // 0x80800358: bc1fl       L_80800384
    if (!c1cs) {
        // 0x8080035C: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_80800384;
    }
    goto skip_0;
    // 0x8080035C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_0:
    // 0x80800360: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800364: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1CF0) << 16);
    // 0x80800368: lwc1        $f6, 0x1CF0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1CF0));
    // 0x8080036C: lui         $a3, 0x4234
    ctx->r7 = S32(0X4234 << 16);
    // 0x80800370: jal         0x800F10B4
    // 0x80800374: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_5;
    // 0x80800374: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x80800378: b           L_80800388
    // 0x8080037C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_80800388;
    // 0x8080037C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800380: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_80800384:
    // 0x80800384: nop

L_80800388:
    // 0x80800388: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8080038C: jal         0x80085418
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawasher_entrypoint_5(rdram, ctx);
        goto after_6;
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800394: jal         0x8009BB5C
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_7;
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080039C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x808003A0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808003A4: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    // 0x808003A8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x808003AC: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x808003B0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1CF4) << 16);
    // 0x808003B4: bc1f        L_808003E0
    if (!c1cs) {
        // 0x808003B8: nop
    
            goto L_808003E0;
    }
    // 0x808003B8: nop

    // 0x808003BC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x808003C0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808003C4: lui         $at, 0x3FA0
    ctx->r1 = S32(0X3FA0 << 16);
    // 0x808003C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808003CC: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808003D0: jal         0x800F10B4
    // 0x808003D4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x808003D4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_8:
    // 0x808003D8: b           L_808003E4
    // 0x808003DC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_808003E4;
    // 0x808003DC: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_808003E0:
    // 0x808003E0: lwc1        $f2, 0x1CF4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1CF4));
L_808003E4:
    // 0x808003E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003E8: jal         0x8008E078
    // 0x808003EC: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    func_8008E078(rdram, ctx);
        goto after_9;
    // 0x808003EC: swc1        $f2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f2.u32l;
    after_9:
    // 0x808003F0: bne         $v0, $zero, L_80800410
    if (ctx->r2 != 0) {
        // 0x808003F4: lwc1        $f2, 0x3C($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
            goto L_80800410;
    }
    // 0x808003F4: lwc1        $f2, 0x3C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808003F8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1CF8) << 16);
    // 0x808003FC: lwc1        $f12, 0x1CF8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1CF8));
    // 0x80800400: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1CFC) << 16);
    // 0x80800404: lwc1        $f16, 0x1CFC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1CFC));
    // 0x80800408: jal         0x800F13F0
    // 0x8080040C: add.s       $f14, $f2, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f16.fl;
    func_800F13F0(rdram, ctx);
        goto after_10;
    // 0x8080040C: add.s       $f14, $f2, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f2.fl + ctx->f16.fl;
    after_10:
L_80800410:
    // 0x80800410: jal         0x80085438
    // 0x80800414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawasher_entrypoint_9(rdram, ctx);
        goto after_11;
    // 0x80800414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800418: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080041C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800420: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800424: jr          $ra
    // 0x80800428: nop

    return;
    // 0x80800428: nop

;}
RECOMP_FUNC void func_8080042C_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080042C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800430: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800434: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800438: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080043C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800440: beq         $a1, $at, L_80800474
    if (ctx->r5 == ctx->r1) {
        // 0x80800444: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_80800474;
    }
    // 0x80800444: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800448: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080044C: beq         $a1, $at, L_808004EC
    if (ctx->r5 == ctx->r1) {
        // 0x80800450: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004EC;
    }
    // 0x80800450: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800454: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800458: beq         $a1, $at, L_8080053C
    if (ctx->r5 == ctx->r1) {
        // 0x8080045C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080053C;
    }
    // 0x8080045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800460: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800464: beql        $a1, $at, L_80800578
    if (ctx->r5 == ctx->r1) {
        // 0x80800468: lw          $t7, 0x2C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X2C);
            goto L_80800578;
    }
    goto skip_0;
    // 0x80800468: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x8080046C: b           L_80800578
    // 0x80800470: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_80800578;
    // 0x80800470: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_80800474:
    // 0x80800474: jal         0x8008CABC
    // 0x80800478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800478: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8080047C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800480: jal         0x8008AF24
    // 0x80800484: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800484: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800488: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8080048C: jal         0x8008B1A0
    // 0x80800490: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x80800490: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800494: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800498: jal         0x8008AED4
    // 0x8080049C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x8080049C: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_3:
    // 0x808004A0: lui         $a2, 0x3E82
    ctx->r6 = S32(0X3E82 << 16);
    // 0x808004A4: ori         $a2, $a2, 0x1965
    ctx->r6 = ctx->r6 | 0X1965;
    // 0x808004A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x808004AC: jal         0x8008B1D4
    // 0x808004B0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_4;
    // 0x808004B0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x808004B4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x808004B8: jal         0x8008B1BC
    // 0x808004BC: lui         $a1, 0x4020
    ctx->r5 = S32(0X4020 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x808004BC: lui         $a1, 0x4020
    ctx->r5 = S32(0X4020 << 16);
    after_5:
    // 0x808004C0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x808004C4: jal         0x8008B134
    // 0x808004C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x808004C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808004CC: jal         0x8008B064
    // 0x808004D0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x808004D0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x808004D4: lui         $a1, 0x3FE6
    ctx->r5 = S32(0X3FE6 << 16);
    // 0x808004D8: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x808004DC: jal         0x8009D820
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D820(rdram, ctx);
        goto after_8;
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808004E4: b           L_80800578
    // 0x808004E8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_80800578;
    // 0x808004E8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_808004EC:
    // 0x808004EC: lui         $a1, 0x3F12
    ctx->r5 = S32(0X3F12 << 16);
    // 0x808004F0: jal         0x8008CED4
    // 0x808004F4: ori         $a1, $a1, 0xF838
    ctx->r5 = ctx->r5 | 0XF838;
    func_8008CED4(rdram, ctx);
        goto after_9;
    // 0x808004F4: ori         $a1, $a1, 0xF838
    ctx->r5 = ctx->r5 | 0XF838;
    after_9:
    // 0x808004F8: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808004FC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800504: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x80800508: jal         0x8009DF94
    // 0x8080050C: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF94(rdram, ctx);
        goto after_10;
    // 0x8080050C: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_10:
    // 0x80800510: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800514: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080051C: addiu       $a1, $zero, 0x428
    ctx->r5 = ADD32(0, 0X428);
    // 0x80800520: jal         0x8009DF18
    // 0x80800524: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_11;
    // 0x80800524: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_11:
    // 0x80800528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080052C: jal         0x8009BA58
    // 0x80800530: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    func_8009BA58(rdram, ctx);
        goto after_12;
    // 0x80800530: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    after_12:
    // 0x80800534: b           L_80800578
    // 0x80800538: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_80800578;
    // 0x80800538: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_8080053C:
    // 0x8080053C: jal         0x8008CED4
    // 0x80800540: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CED4(rdram, ctx);
        goto after_13;
    // 0x80800540: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_13:
    // 0x80800544: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800548: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800550: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x80800554: jal         0x8009DF94
    // 0x80800558: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF94(rdram, ctx);
        goto after_14;
    // 0x80800558: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_14:
    // 0x8080055C: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800560: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800568: addiu       $a1, $zero, 0x428
    ctx->r5 = ADD32(0, 0X428);
    // 0x8080056C: jal         0x8009DF18
    // 0x80800570: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_15;
    // 0x80800570: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_15:
    // 0x80800574: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_80800578:
    // 0x80800578: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
    // 0x8080057C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800580: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800584: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800588: jr          $ra
    // 0x8080058C: nop

    return;
    // 0x8080058C: nop

;}
RECOMP_FUNC void func_80800590_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800598: jal         0x80085230
    // 0x8080059C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _basudie_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x8080059C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808005A0: jal         0x800000F0
    // 0x808005A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000F0_bswasher(rdram, ctx);
        goto after_1;
    // 0x808005A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808005A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005B0: jr          $ra
    // 0x808005B4: nop

    return;
    // 0x808005B4: nop

;}
RECOMP_FUNC void func_808005B8_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005C0: jal         0x800001A8
    // 0x808005C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808001A8_bswasher(rdram, ctx);
        goto after_0;
    // 0x808005C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808005C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808005CC: lui         $a2, 0x43D2
    ctx->r6 = S32(0X43D2 << 16);
    // 0x808005D0: lui         $a3, 0xC496
    ctx->r7 = S32(0XC496 << 16);
    // 0x808005D4: jal         0x80085210
    // 0x808005D8: lw          $a1, 0x16C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X16C);
    _basudie_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x808005D8: lw          $a1, 0x16C($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X16C);
    after_1:
    // 0x808005DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808005E0: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x808005E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808005E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808005EC: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    // 0x808005F0: jal         0x8000042C
    // 0x808005F4: swc1        $f4, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f4.u32l;
    func_8080042C_bswasher(rdram, ctx);
        goto after_2;
    // 0x808005F4: swc1        $f4, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f4.u32l;
    after_2:
    // 0x808005F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800600: jr          $ra
    // 0x80800604: nop

    return;
    // 0x80800604: nop

;}
RECOMP_FUNC void func_80800608_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800608: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080060C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800610: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800614: jal         0x80085228
    // 0x80800618: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _basudie_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x80800618: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800620: jal         0x8009B9B0
    // 0x80800624: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_1;
    // 0x80800624: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_1:
    // 0x80800628: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x8080062C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800630: beq         $v0, $at, L_8080065C
    if (ctx->r2 == ctx->r1) {
        // 0x80800634: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8080065C;
    }
    // 0x80800634: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800638: beq         $v0, $at, L_8080067C
    if (ctx->r2 == ctx->r1) {
        // 0x8080063C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8080067C;
    }
    // 0x8080063C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800640: beq         $v0, $at, L_8080069C
    if (ctx->r2 == ctx->r1) {
        // 0x80800644: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080069C;
    }
    // 0x80800644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800648: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8080064C: beql        $v0, $at, L_808006B0
    if (ctx->r2 == ctx->r1) {
        // 0x80800650: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_808006B0;
    }
    goto skip_0;
    // 0x80800650: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_0:
    // 0x80800654: b           L_808006D8
    // 0x80800658: nop

        goto L_808006D8;
    // 0x80800658: nop

L_8080065C:
    // 0x8080065C: jal         0x8008E078
    // 0x80800660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_2;
    // 0x80800660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800664: beq         $v0, $zero, L_808006D8
    if (ctx->r2 == 0) {
        // 0x80800668: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006D8;
    }
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080066C: jal         0x8000042C
    // 0x80800670: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8080042C_bswasher(rdram, ctx);
        goto after_3;
    // 0x80800670: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800674: b           L_808006D8
    // 0x80800678: nop

        goto L_808006D8;
    // 0x80800678: nop

L_8080067C:
    // 0x8080067C: jal         0x8008E078
    // 0x80800680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_4;
    // 0x80800680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800684: beq         $v0, $zero, L_808006D8
    if (ctx->r2 == 0) {
        // 0x80800688: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006D8;
    }
    // 0x80800688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080068C: jal         0x8000042C
    // 0x80800690: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8080042C_bswasher(rdram, ctx);
        goto after_5;
    // 0x80800690: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80800694: b           L_808006D8
    // 0x80800698: nop

        goto L_808006D8;
    // 0x80800698: nop

L_8080069C:
    // 0x8080069C: jal         0x8000042C
    // 0x808006A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8080042C_bswasher(rdram, ctx);
        goto after_6;
    // 0x808006A0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_6:
    // 0x808006A4: b           L_808006D8
    // 0x808006A8: nop

        goto L_808006D8;
    // 0x808006A8: nop

    // 0x808006AC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_808006B0:
    // 0x808006B0: lwc1        $f0, 0x16C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808006B4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x808006B8: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x808006BC: nop

    // 0x808006C0: bc1f        L_808006D8
    if (!c1cs) {
        // 0x808006C4: nop
    
            goto L_808006D8;
    }
    // 0x808006C4: nop

    // 0x808006C8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808006CC: jal         0x800F0E00
    // 0x808006D0: sub.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f4.fl;
    func_800F0E00(rdram, ctx);
        goto after_7;
    // 0x808006D0: sub.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f4.fl;
    after_7:
    // 0x808006D4: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
L_808006D8:
    // 0x808006D8: jal         0x80000300
    // 0x808006DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800300_bswasher(rdram, ctx);
        goto after_8;
    // 0x808006DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808006E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006E4: jal         0x8009E5C8
    // 0x808006E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_9;
    // 0x808006E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x808006EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808006F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808006F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808006F8: jr          $ra
    // 0x808006FC: nop

    return;
    // 0x808006FC: nop

;}
RECOMP_FUNC void bswasher_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800700: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800704: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(166, 0X1E10) << 16);
    // 0x80800708: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080070C: jr          $ra
    // 0x80800710: lw          $v0, 0x1E10($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E10));
    return;
    // 0x80800710: lw          $v0, 0x1E10($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E10));
;}
RECOMP_FUNC void func_80800714_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800714: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800718: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080071C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800720: jal         0x80084800
    // 0x80800724: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _badrone_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800724: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800728: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080072C: bne         $v0, $at, L_8080074C
    if (ctx->r2 != ctx->r1) {
        // 0x80800730: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080074C;
    }
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800734: jal         0x80084CC8
    // 0x80800738: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bafpctrl_entrypoint_10(rdram, ctx);
        goto after_1;
    // 0x80800738: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8080073C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800740: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800744: jal         0x800947EC
    // 0x80800748: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_2;
    // 0x80800748: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_8080074C:
    // 0x8080074C: jal         0x800000F0
    // 0x80800750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000F0_bswasher(rdram, ctx);
        goto after_3;
    // 0x80800750: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800754: jal         0x80082FF0
    // 0x80800758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x80800758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080075C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800760: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800764: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800768: jr          $ra
    // 0x8080076C: nop

    return;
    // 0x8080076C: nop

;}
RECOMP_FUNC void func_80800770_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800770: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800774: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800778: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080077C: jal         0x800001A8
    // 0x80800780: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808001A8_bswasher(rdram, ctx);
        goto after_0;
    // 0x80800780: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800784: jal         0x80082FE0
    // 0x80800788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080078C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800790: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800794: jal         0x80085338
    // 0x80800798: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    _batimer_set(rdram, ctx);
        goto after_2;
    // 0x80800798: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x8080079C: jal         0x80084800
    // 0x808007A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_3(rdram, ctx);
        goto after_3;
    // 0x808007A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808007A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808007A8: bne         $v0, $at, L_808007C8
    if (ctx->r2 != ctx->r1) {
        // 0x808007AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007C8;
    }
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808007B4: jal         0x800947EC
    // 0x808007B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_4;
    // 0x808007B8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x808007BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007C0: jal         0x80084CC8
    // 0x808007C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_10(rdram, ctx);
        goto after_5;
    // 0x808007C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_808007C8:
    // 0x808007C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808007CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808007D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808007D4: jr          $ra
    // 0x808007D8: nop

    return;
    // 0x808007D8: nop

;}
RECOMP_FUNC void func_808007DC_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808007E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808007E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808007E8: jal         0x80082FE8
    // 0x808007EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808007EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808007F0: jal         0x80000300
    // 0x808007F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800300_bswasher(rdram, ctx);
        goto after_1;
    // 0x808007F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808007F8: jal         0x80084800
    // 0x808007FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x808007FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800800: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800804: bne         $v0, $at, L_80800894
    if (ctx->r2 != ctx->r1) {
        // 0x80800808: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800894;
    }
    // 0x80800808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080080C: jal         0x800852F0
    // 0x80800810: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _batimer_decrement(rdram, ctx);
        goto after_3;
    // 0x80800810: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800818: jal         0x80091A58
    // 0x8080081C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_4;
    // 0x8080081C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800820: beq         $v0, $zero, L_80800894
    if (ctx->r2 == 0) {
        // 0x80800824: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800894;
    }
    // 0x80800824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800828: jal         0x80085330
    // 0x8080082C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _batimer_isZero(rdram, ctx);
        goto after_5;
    // 0x8080082C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80800830: beq         $v0, $zero, L_80800894
    if (ctx->r2 == 0) {
        // 0x80800834: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800894;
    }
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800838: lui         $a2, 0x3F86
    ctx->r6 = S32(0X3F86 << 16);
    // 0x8080083C: lui         $a3, 0x3F93
    ctx->r7 = S32(0X3F93 << 16);
    // 0x80800840: addiu       $t6, $zero, 0x4E20
    ctx->r14 = ADD32(0, 0X4E20);
    // 0x80800844: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800848: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x8080084C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800850: jal         0x8009DBB0
    // 0x80800854: addiu       $a1, $zero, 0x573
    ctx->r5 = ADD32(0, 0X573);
    func_8009DBB0(rdram, ctx);
        goto after_6;
    // 0x80800854: addiu       $a1, $zero, 0x573
    ctx->r5 = ADD32(0, 0X573);
    after_6:
    // 0x80800858: lui         $a2, 0x3F59
    ctx->r6 = S32(0X3F59 << 16);
    // 0x8080085C: lui         $a3, 0x3F73
    ctx->r7 = S32(0X3F73 << 16);
    // 0x80800860: addiu       $t7, $zero, 0x4E20
    ctx->r15 = ADD32(0, 0X4E20);
    // 0x80800864: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800868: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x8080086C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800874: jal         0x8009DBB0
    // 0x80800878: addiu       $a1, $zero, 0x406
    ctx->r5 = ADD32(0, 0X406);
    func_8009DBB0(rdram, ctx);
        goto after_7;
    // 0x80800878: addiu       $a1, $zero, 0x406
    ctx->r5 = ADD32(0, 0X406);
    after_7:
    // 0x8080087C: jal         0x80085428
    // 0x80800880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawasher_entrypoint_7(rdram, ctx);
        goto after_8;
    // 0x80800880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800888: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8080088C: jal         0x80085338
    // 0x80800890: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    _batimer_set(rdram, ctx);
        goto after_9;
    // 0x80800890: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_9:
L_80800894:
    // 0x80800894: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800898: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080089C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808008A0: jr          $ra
    // 0x808008A4: nop

    return;
    // 0x808008A4: nop

;}
RECOMP_FUNC void bswasher_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008A8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808008AC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(166, 0X1E20) << 16);
    // 0x808008B0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808008B4: jr          $ra
    // 0x808008B8: lw          $v0, 0x1E20($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E20));
    return;
    // 0x808008B8: lw          $v0, 0x1E20($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E20));
;}
RECOMP_FUNC void func_808008BC_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808008C8: jal         0x8009BF5C
    // 0x808008CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_0;
    // 0x808008CC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x808008D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808008D4: jal         0x8009C4CC
    // 0x808008D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_1;
    // 0x808008D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x808008DC: jal         0x800000F0
    // 0x808008E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000F0_bswasher(rdram, ctx);
        goto after_2;
    // 0x808008E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808008E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008EC: jr          $ra
    // 0x808008F0: nop

    return;
    // 0x808008F0: nop

;}
RECOMP_FUNC void func_808008F4_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808008F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808008FC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800900: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800904: jal         0x800001A8
    // 0x80800908: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_808001A8_bswasher(rdram, ctx);
        goto after_0;
    // 0x80800908: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x8080090C: jal         0x8008CABC
    // 0x80800910: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008CABC(rdram, ctx);
        goto after_1;
    // 0x80800910: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800914: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800918: jal         0x8008AF24
    // 0x8080091C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x8080091C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80800920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800924: jal         0x8008AED4
    // 0x80800928: addiu       $a1, $zero, 0x355
    ctx->r5 = ADD32(0, 0X355);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x80800928: addiu       $a1, $zero, 0x355
    ctx->r5 = ADD32(0, 0X355);
    after_3:
    // 0x8080092C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    // 0x80800930: ori         $a1, $a1, 0xEBEE
    ctx->r5 = ctx->r5 | 0XEBEE;
    // 0x80800934: jal         0x8008B24C
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_4;
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080093C: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80800940: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800944: jal         0x8008B1BC
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080094C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800950: jal         0x8008B134
    // 0x80800954: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x80800954: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
    // 0x80800958: jal         0x8008B064
    // 0x8080095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x8080095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800960: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800964: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800968: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080096C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800970: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800974: jal         0x8009FFD8
    // 0x80800978: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_8;
    // 0x80800978: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_8:
    // 0x8080097C: jal         0x800000BC
    // 0x80800980: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_808000BC_bswasher(rdram, ctx);
        goto after_9;
    // 0x80800980: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x80800984: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x80800988: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080098C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800990: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800994: jr          $ra
    // 0x80800998: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800998: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8080099C_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080099C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808009A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808009A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808009A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808009AC: jal         0x8008CABC
    // 0x808009B0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808009B0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x808009B4: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x808009B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009BC: jal         0x8009D3A8
    // 0x808009C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x808009C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808009C4: jal         0x80000000
    // 0x808009C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bswasher(rdram, ctx);
        goto after_2;
    // 0x808009C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808009CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009D0: jal         0x8009BB24
    // 0x808009D4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_3;
    // 0x808009D4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x808009D8: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x808009DC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808009E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009E4: beq         $v0, $zero, L_80800A04
    if (ctx->r2 == 0) {
        // 0x808009E8: nop
    
            goto L_80800A04;
    }
    // 0x808009E8: nop

    // 0x808009EC: beq         $v0, $at, L_80800A2C
    if (ctx->r2 == ctx->r1) {
        // 0x808009F0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800A2C;
    }
    // 0x808009F0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808009F4: beq         $v0, $at, L_80800A68
    if (ctx->r2 == ctx->r1) {
        // 0x808009F8: nop
    
            goto L_80800A68;
    }
    // 0x808009F8: nop

    // 0x808009FC: b           L_80800A68
    // 0x80800A00: nop

        goto L_80800A68;
    // 0x80800A00: nop

L_80800A04:
    // 0x80800A04: jal         0x8008DF8C
    // 0x80800A08: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_4;
    // 0x80800A08: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_4:
    // 0x80800A0C: beq         $v0, $zero, L_80800A68
    if (ctx->r2 == 0) {
        // 0x80800A10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800A68;
    }
    // 0x80800A10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A14: lui         $a1, 0x3F34
    ctx->r5 = S32(0X3F34 << 16);
    // 0x80800A18: jal         0x8008CED4
    // 0x80800A1C: ori         $a1, $a1, 0xBC6A
    ctx->r5 = ctx->r5 | 0XBC6A;
    func_8008CED4(rdram, ctx);
        goto after_5;
    // 0x80800A1C: ori         $a1, $a1, 0xBC6A
    ctx->r5 = ctx->r5 | 0XBC6A;
    after_5:
    // 0x80800A20: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800A24: b           L_80800A68
    // 0x80800A28: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_80800A68;
    // 0x80800A28: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800A2C:
    // 0x80800A2C: jal         0x8008E078
    // 0x80800A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_6;
    // 0x80800A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800A34: beq         $v0, $zero, L_80800A68
    if (ctx->r2 == 0) {
        // 0x80800A38: nop
    
            goto L_80800A68;
    }
    // 0x80800A38: nop

    // 0x80800A3C: jal         0x800A2EAC
    // 0x80800A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2EAC(rdram, ctx);
        goto after_7;
    // 0x80800A40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A48: jal         0x8009B9B0
    // 0x80800A4C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_8;
    // 0x80800A4C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x80800A50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A54: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80800A58: jal         0x8008CF1C
    // 0x80800A5C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_9;
    // 0x80800A5C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_9:
    // 0x80800A60: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800A64: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800A68:
    // 0x80800A68: jal         0x8008E078
    // 0x80800A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_10;
    // 0x80800A6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800A70: beq         $v0, $zero, L_80800ACC
    if (ctx->r2 == 0) {
        // 0x80800A74: nop
    
            goto L_80800ACC;
    }
    // 0x80800A74: nop

    // 0x80800A78: jal         0x8009EF10
    // 0x80800A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_11;
    // 0x80800A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800A80: bgtzl       $v0, L_80800AA8
    if (SIGNED(ctx->r2) > 0) {
        // 0x80800A84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800AA8;
    }
    goto skip_0;
    // 0x80800A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800A88: lw          $t8, 0x15C($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X15C);
    // 0x80800A8C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800A90: bne         $t8, $at, L_80800ACC
    if (ctx->r24 != ctx->r1) {
        // 0x80800A94: nop
    
            goto L_80800ACC;
    }
    // 0x80800A94: nop

    // 0x80800A98: jal         0x8008B324
    // 0x80800A9C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_12;
    // 0x80800A9C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_12:
    // 0x80800AA0: beq         $v0, $zero, L_80800ACC
    if (ctx->r2 == 0) {
        // 0x80800AA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800ACC;
    }
    // 0x80800AA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800AA8:
    // 0x80800AA8: jal         0x80095738
    // 0x80800AAC: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_80095738(rdram, ctx);
        goto after_13;
    // 0x80800AAC: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_13:
    // 0x80800AB0: beq         $v0, $zero, L_80800AC8
    if (ctx->r2 == 0) {
        // 0x80800AB4: addiu       $t9, $zero, 0x32
        ctx->r25 = ADD32(0, 0X32);
            goto L_80800AC8;
    }
    // 0x80800AB4: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x80800AB8: jal         0x800848C8
    // 0x80800ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_28(rdram, ctx);
        goto after_14;
    // 0x80800ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800AC0: b           L_80800ACC
    // 0x80800AC4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
        goto L_80800ACC;
    // 0x80800AC4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_80800AC8:
    // 0x80800AC8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_80800ACC:
    // 0x80800ACC: jal         0x80000300
    // 0x80800AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800300_bswasher(rdram, ctx);
        goto after_15;
    // 0x80800AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AD8: jal         0x8009E5C8
    // 0x80800ADC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_16;
    // 0x80800ADC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_16:
    // 0x80800AE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800AE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800AE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800AEC: jr          $ra
    // 0x80800AF0: nop

    return;
    // 0x80800AF0: nop

;}
RECOMP_FUNC void bswasher_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AF4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800AF8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(166, 0X1E30) << 16);
    // 0x80800AFC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800B00: jr          $ra
    // 0x80800B04: lw          $v0, 0x1E30($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E30));
    return;
    // 0x80800B04: lw          $v0, 0x1E30($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E30));
;}
RECOMP_FUNC void func_80800B08_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B08: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800B0C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800B10: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800B14: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800B18: jal         0x800001A8
    // 0x80800B1C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_808001A8_bswasher(rdram, ctx);
        goto after_0;
    // 0x80800B1C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800B20: jal         0x8008CABC
    // 0x80800B24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008CABC(rdram, ctx);
        goto after_1;
    // 0x80800B24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800B28: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800B2C: jal         0x8008AF24
    // 0x80800B30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x80800B30: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80800B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B38: jal         0x8008B1A0
    // 0x80800B3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_3;
    // 0x80800B3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800B40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B44: jal         0x8008AED4
    // 0x80800B48: addiu       $a1, $zero, 0x355
    ctx->r5 = ADD32(0, 0X355);
    func_8008AED4(rdram, ctx);
        goto after_4;
    // 0x80800B48: addiu       $a1, $zero, 0x355
    ctx->r5 = ADD32(0, 0X355);
    after_4:
    // 0x80800B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B50: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80800B54: jal         0x8008B1D4
    // 0x80800B58: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_5;
    // 0x80800B58: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_5:
    // 0x80800B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B60: jal         0x8008B1BC
    // 0x80800B64: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x80800B64: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x80800B68: lui         $a1, 0x3E19
    ctx->r5 = S32(0X3E19 << 16);
    // 0x80800B6C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800B70: jal         0x8008B24C
    // 0x80800B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_7;
    // 0x80800B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B7C: jal         0x8008B134
    // 0x80800B80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x80800B80: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800B84: jal         0x8008B064
    // 0x80800B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x80800B88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800B8C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800B90: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800B94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800B98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800B9C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800BA0: jal         0x8009FFD8
    // 0x80800BA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x80800BA4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_10:
    // 0x80800BA8: jal         0x800000BC
    // 0x80800BAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_808000BC_bswasher(rdram, ctx);
        goto after_11;
    // 0x80800BAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80800BB0: jal         0x8009EF04
    // 0x80800BB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF04(rdram, ctx);
        goto after_12;
    // 0x80800BB4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x80800BB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800BBC: nop

    // 0x80800BC0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800BC4: nop

    // 0x80800BC8: bc1t        L_80800BE4
    if (c1cs) {
        // 0x80800BCC: nop
    
            goto L_80800BE4;
    }
    // 0x80800BCC: nop

    // 0x80800BD0: jal         0x8009EEB8
    // 0x80800BD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_13;
    // 0x80800BD4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x80800BD8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800BDC: jal         0x8009C914
    // 0x80800BE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_14;
    // 0x80800BE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
L_80800BE4:
    // 0x80800BE4: jal         0x8009C990
    // 0x80800BE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_15;
    // 0x80800BE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x80800BEC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800BF0: jal         0x8009B9C0
    // 0x80800BF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_16;
    // 0x80800BF4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x80800BF8: jal         0x80000000
    // 0x80800BFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800000_bswasher(rdram, ctx);
        goto after_17;
    // 0x80800BFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x80800C00: jal         0x8009C990
    // 0x80800C04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_18;
    // 0x80800C04: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x80800C08: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800C0C: jal         0x8009BB00
    // 0x80800C10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB00(rdram, ctx);
        goto after_19;
    // 0x80800C10: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_19:
    // 0x80800C14: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800C18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800C1C: jal         0x8009BA68
    // 0x80800C20: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_20;
    // 0x80800C20: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_20:
    // 0x80800C24: lui         $a1, 0x442D
    ctx->r5 = S32(0X442D << 16);
    // 0x80800C28: ori         $a1, $a1, 0x6000
    ctx->r5 = ctx->r5 | 0X6000;
    // 0x80800C2C: jal         0x8009BA58
    // 0x80800C30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BA58(rdram, ctx);
        goto after_21;
    // 0x80800C30: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_21:
    // 0x80800C34: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800C38: jal         0x8009BCB4
    // 0x80800C3C: lui         $a1, 0xC516
    ctx->r5 = S32(0XC516 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_22;
    // 0x80800C3C: lui         $a1, 0xC516
    ctx->r5 = S32(0XC516 << 16);
    after_22:
    // 0x80800C40: lui         $a1, 0x3FAC
    ctx->r5 = S32(0X3FAC << 16);
    // 0x80800C44: lui         $a2, 0x3FB9
    ctx->r6 = S32(0X3FB9 << 16);
    // 0x80800C48: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800C4C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800C50: jal         0x8009D7A4
    // 0x80800C54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009D7A4(rdram, ctx);
        goto after_23;
    // 0x80800C54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_23:
    // 0x80800C58: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x80800C5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800C60: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800C64: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800C68: jr          $ra
    // 0x80800C6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80800C6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80800C70_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C70: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800C74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800C78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800C7C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800C80: jal         0x8008CABC
    // 0x80800C84: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800C84: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80800C88: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800C8C: jal         0x80000000
    // 0x80800C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bswasher(rdram, ctx);
        goto after_1;
    // 0x80800C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C98: jal         0x8009BB24
    // 0x80800C9C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_2;
    // 0x80800C9C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x80800CA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CA4: jal         0x80091A30
    // 0x80800CA8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_3;
    // 0x80800CA8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x80800CAC: beq         $v0, $zero, L_80800CD4
    if (ctx->r2 == 0) {
        // 0x80800CB0: lwc1        $f6, 0x28($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80800CD4;
    }
    // 0x80800CB0: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800CB4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800CB8: nop

    // 0x80800CBC: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800CC0: nop

    // 0x80800CC4: bc1fl       L_80800CD8
    if (!c1cs) {
        // 0x80800CC8: lw          $v0, 0x15C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X15C);
            goto L_80800CD8;
    }
    goto skip_0;
    // 0x80800CC8: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    skip_0:
    // 0x80800CCC: jal         0x8009BC6C
    // 0x80800CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_4;
    // 0x80800CD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_80800CD4:
    // 0x80800CD4: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
L_80800CD8:
    // 0x80800CD8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CE0: beq         $v0, $zero, L_80800D10
    if (ctx->r2 == 0) {
        // 0x80800CE4: nop
    
            goto L_80800D10;
    }
    // 0x80800CE4: nop

    // 0x80800CE8: beq         $v0, $at, L_80800D68
    if (ctx->r2 == ctx->r1) {
        // 0x80800CEC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D68;
    }
    // 0x80800CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800CF4: beq         $v0, $at, L_80800D90
    if (ctx->r2 == ctx->r1) {
        // 0x80800CF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D90;
    }
    // 0x80800CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CFC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800D00: beq         $v0, $at, L_80800DCC
    if (ctx->r2 == ctx->r1) {
        // 0x80800D04: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800DCC;
    }
    // 0x80800D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D08: b           L_80800E38
    // 0x80800D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800E38;
    // 0x80800D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800D10:
    // 0x80800D10: jal         0x8008DF8C
    // 0x80800D14: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_5;
    // 0x80800D14: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_5:
    // 0x80800D18: beq         $v0, $zero, L_80800D3C
    if (ctx->r2 == 0) {
        // 0x80800D1C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D3C;
    }
    // 0x80800D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D20: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800D24: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800D28: jal         0x8008CF1C
    // 0x80800D2C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_6;
    // 0x80800D2C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x80800D30: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800D34: b           L_80800E34
    // 0x80800D38: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_80800E34;
    // 0x80800D38: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800D3C:
    // 0x80800D3C: jal         0x8008B324
    // 0x80800D40: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_7;
    // 0x80800D40: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x80800D44: beq         $v0, $zero, L_80800E34
    if (ctx->r2 == 0) {
        // 0x80800D48: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E34;
    }
    // 0x80800D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D4C: lui         $a1, 0x3F34
    ctx->r5 = S32(0X3F34 << 16);
    // 0x80800D50: ori         $a1, $a1, 0xBC6A
    ctx->r5 = ctx->r5 | 0XBC6A;
    // 0x80800D54: jal         0x8008CF1C
    // 0x80800D58: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_8;
    // 0x80800D58: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_8:
    // 0x80800D5C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800D60: b           L_80800E34
    // 0x80800D64: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_80800E34;
    // 0x80800D64: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800D68:
    // 0x80800D68: jal         0x8008DF8C
    // 0x80800D6C: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_9;
    // 0x80800D6C: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_9:
    // 0x80800D70: beq         $v0, $zero, L_80800E34
    if (ctx->r2 == 0) {
        // 0x80800D74: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E34;
    }
    // 0x80800D74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D78: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80800D7C: jal         0x8008CF1C
    // 0x80800D80: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_10;
    // 0x80800D80: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_10:
    // 0x80800D84: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80800D88: b           L_80800E34
    // 0x80800D8C: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
        goto L_80800E34;
    // 0x80800D8C: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
L_80800D90:
    // 0x80800D90: jal         0x8009D3A8
    // 0x80800D94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_11;
    // 0x80800D94: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80800D98: jal         0x8008E078
    // 0x80800D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_12;
    // 0x80800D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800DA0: beql        $v0, $zero, L_80800E38
    if (ctx->r2 == 0) {
        // 0x80800DA4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E38;
    }
    goto skip_1;
    // 0x80800DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800DA8: jal         0x800A2EAC
    // 0x80800DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2EAC(rdram, ctx);
        goto after_13;
    // 0x80800DAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DB4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80800DB8: jal         0x8008CF1C
    // 0x80800DBC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_14;
    // 0x80800DBC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_14:
    // 0x80800DC0: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80800DC4: b           L_80800E34
    // 0x80800DC8: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
        goto L_80800E34;
    // 0x80800DC8: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
L_80800DCC:
    // 0x80800DCC: jal         0x8009D2D8
    // 0x80800DD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009D2D8(rdram, ctx);
        goto after_15;
    // 0x80800DD0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_15:
    // 0x80800DD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DD8: jal         0x8009D3A8
    // 0x80800DDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_16;
    // 0x80800DDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_16:
    // 0x80800DE0: jal         0x8009BB5C
    // 0x80800DE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_17;
    // 0x80800DE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800DE8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80800DEC: addiu       $t0, $zero, 0x33
    ctx->r8 = ADD32(0, 0X33);
    // 0x80800DF0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80800DF4: nop

    // 0x80800DF8: bc1f        L_80800E08
    if (!c1cs) {
        // 0x80800DFC: nop
    
            goto L_80800E08;
    }
    // 0x80800DFC: nop

    // 0x80800E00: b           L_80800E1C
    // 0x80800E04: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
        goto L_80800E1C;
    // 0x80800E04: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_80800E08:
    // 0x80800E08: jal         0x8008B324
    // 0x80800E0C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_18;
    // 0x80800E0C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_18:
    // 0x80800E10: beq         $v0, $zero, L_80800E1C
    if (ctx->r2 == 0) {
        // 0x80800E14: addiu       $t1, $zero, 0x32
        ctx->r9 = ADD32(0, 0X32);
            goto L_80800E1C;
    }
    // 0x80800E14: addiu       $t1, $zero, 0x32
    ctx->r9 = ADD32(0, 0X32);
    // 0x80800E18: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_80800E1C:
    // 0x80800E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E20: jal         0x80091A58
    // 0x80800E24: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_19;
    // 0x80800E24: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_19:
    // 0x80800E28: beq         $v0, $zero, L_80800E34
    if (ctx->r2 == 0) {
        // 0x80800E2C: addiu       $t2, $zero, 0x35
        ctx->r10 = ADD32(0, 0X35);
            goto L_80800E34;
    }
    // 0x80800E2C: addiu       $t2, $zero, 0x35
    ctx->r10 = ADD32(0, 0X35);
    // 0x80800E30: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_80800E34:
    // 0x80800E34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800E38:
    // 0x80800E38: jal         0x80091A58
    // 0x80800E3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_20;
    // 0x80800E3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
    // 0x80800E40: beq         $v0, $zero, L_80800E4C
    if (ctx->r2 == 0) {
        // 0x80800E44: addiu       $t3, $zero, 0x38
        ctx->r11 = ADD32(0, 0X38);
            goto L_80800E4C;
    }
    // 0x80800E44: addiu       $t3, $zero, 0x38
    ctx->r11 = ADD32(0, 0X38);
    // 0x80800E48: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_80800E4C:
    // 0x80800E4C: jal         0x80000300
    // 0x80800E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800300_bswasher(rdram, ctx);
        goto after_21;
    // 0x80800E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E58: jal         0x8009E5C8
    // 0x80800E5C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_22;
    // 0x80800E5C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_22:
    // 0x80800E60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800E64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800E68: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800E6C: jr          $ra
    // 0x80800E70: nop

    return;
    // 0x80800E70: nop

;}
RECOMP_FUNC void func_80800E74_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E7C: jal         0x8009BC6C
    // 0x80800E80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x80800E80: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800E84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800E88: jal         0x8009BF5C
    // 0x80800E8C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x80800E8C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800E90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800E94: jal         0x8009C4CC
    // 0x80800E98: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x80800E98: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800E9C: jal         0x800000F0
    // 0x80800EA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000F0_bswasher(rdram, ctx);
        goto after_3;
    // 0x80800EA0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800EA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800EA8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800EAC: jr          $ra
    // 0x80800EB0: nop

    return;
    // 0x80800EB0: nop

;}
RECOMP_FUNC void bswasher_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EB4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800EB8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(166, 0X1E40) << 16);
    // 0x80800EBC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800EC0: jr          $ra
    // 0x80800EC4: lw          $v0, 0x1E40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E40));
    return;
    // 0x80800EC4: lw          $v0, 0x1E40($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E40));
;}
RECOMP_FUNC void func_80800EC8_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EC8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800ECC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800ED0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800ED4: jal         0x8009E6EC
    // 0x80800ED8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800ED8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800EDC: addiu       $at, $zero, 0x65
    ctx->r1 = ADD32(0, 0X65);
    // 0x80800EE0: bne         $v0, $at, L_80800F00
    if (ctx->r2 != ctx->r1) {
        // 0x80800EE4: nop
    
            goto L_80800F00;
    }
    // 0x80800EE4: nop

    // 0x80800EE8: jal         0x80099A4C
    // 0x80800EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A4C(rdram, ctx);
        goto after_1;
    // 0x80800EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800EF0: sw          $v0, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r2;
    // 0x80800EF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EF8: jal         0x8009E5C8
    // 0x80800EFC: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800EFC: addiu       $a1, $zero, 0x37
    ctx->r5 = ADD32(0, 0X37);
    after_2:
L_80800F00:
    // 0x80800F00: jal         0x80099B94
    // 0x80800F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B94(rdram, ctx);
        goto after_3;
    // 0x80800F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800F08: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800F0C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800F10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800F14: jr          $ra
    // 0x80800F18: nop

    return;
    // 0x80800F18: nop

;}
RECOMP_FUNC void func_80800F1C_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F24: lbu         $a1, 0x165($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X165);
    // 0x80800F28: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80800F2C: beq         $a1, $zero, L_80800F44
    if (ctx->r5 == 0) {
        // 0x80800F30: andi        $a0, $a1, 0xFF
        ctx->r4 = ctx->r5 & 0XFF;
            goto L_80800F44;
    }
    // 0x80800F30: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    // 0x80800F34: jal         0x800C2FDC
    // 0x80800F38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x80800F38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800F3C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80800F40: sb          $zero, 0x165($a2)
    MEM_B(0X165, ctx->r6) = 0;
L_80800F44:
    // 0x80800F44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F4C: jr          $ra
    // 0x80800F50: nop

    return;
    // 0x80800F50: nop

;}
RECOMP_FUNC void func_80800F54_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F5C: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(166, 0X1E50) << 16);
    // 0x80800F60: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800F64: addiu       $a2, $a2, 0x1E50
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(166, 0X1E50));
    // 0x80800F68: jal         0x8009D454
    // 0x80800F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D454(rdram, ctx);
        goto after_0;
    // 0x80800F6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800F70: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800F74: sb          $v0, 0x165($t6)
    MEM_B(0X165, ctx->r14) = ctx->r2;
    // 0x80800F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F80: jr          $ra
    // 0x80800F84: nop

    return;
    // 0x80800F84: nop

;}
RECOMP_FUNC void func_80800F88_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F88: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800F8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800F90: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800F94: lbu         $t6, 0x165($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X165);
    // 0x80800F98: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800F9C: beql        $t6, $zero, L_80800FFC
    if (ctx->r14 == 0) {
        // 0x80800FA0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800FFC;
    }
    goto skip_0;
    // 0x80800FA0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800FA4: jal         0x8009BB5C
    // 0x80800FA8: nop

    func_8009BB5C(rdram, ctx);
        goto after_0;
    // 0x80800FA8: nop

    after_0:
    // 0x80800FAC: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80800FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FB4: jal         0x8009C128
    // 0x80800FB8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x80800FB8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x80800FBC: lbu         $a0, 0x165($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X165);
    // 0x80800FC0: jal         0x800C35E8
    // 0x80800FC4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800C35E8(rdram, ctx);
        goto after_2;
    // 0x80800FC4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x80800FC8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1D00) << 16);
    // 0x80800FCC: lwc1        $f4, 0x1D00($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1D00));
    // 0x80800FD0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800FD4: lui         $a3, 0x3F66
    ctx->r7 = S32(0X3F66 << 16);
    // 0x80800FD8: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800FDC: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800FE0: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    // 0x80800FE4: jal         0x800F10B4
    // 0x80800FE8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_3;
    // 0x80800FE8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80800FEC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800FF0: jal         0x800C31DC
    // 0x80800FF4: lbu         $a0, 0x165($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X165);
    func_800C31DC(rdram, ctx);
        goto after_4;
    // 0x80800FF4: lbu         $a0, 0x165($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X165);
    after_4:
    // 0x80800FF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800FFC:
    // 0x80800FFC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801000: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80801004: jr          $ra
    // 0x80801008: nop

    return;
    // 0x80801008: nop

;}
RECOMP_FUNC void func_8080100C_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080100C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801014: jal         0x80000F1C
    // 0x80801018: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800F1C_bswasher(rdram, ctx);
        goto after_0;
    // 0x80801018: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080101C: jal         0x800000F0
    // 0x80801020: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000F0_bswasher(rdram, ctx);
        goto after_1;
    // 0x80801020: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080102C: jr          $ra
    // 0x80801030: nop

    return;
    // 0x80801030: nop

;}
RECOMP_FUNC void func_80801034_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801034: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801038: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080103C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801040: jal         0x800001A8
    // 0x80801044: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808001A8_bswasher(rdram, ctx);
        goto after_0;
    // 0x80801044: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080104C: addiu       $a1, $zero, 0x359
    ctx->r5 = ADD32(0, 0X359);
    // 0x80801050: jal         0x8008CB3C
    // 0x80801054: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80801054: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x80801058: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x8080105C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801064: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80801068: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8080106C: jal         0x8009FFD8
    // 0x80801070: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801070: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80801074: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80801078: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8080107C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801080: jal         0x8008C9BC
    // 0x80801084: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_3;
    // 0x80801084: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_3:
    // 0x80801088: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1D04) << 16);
    // 0x8080108C: lwc1        $f4, 0x1D04($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1D04));
    // 0x80801090: lui         $a3, 0x3F33
    ctx->r7 = S32(0X3F33 << 16);
    // 0x80801094: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80801098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080109C: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x808010A0: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    // 0x808010A4: jal         0x8008C9F0
    // 0x808010A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_4;
    // 0x808010A8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x808010AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010B0: jal         0x8008CA30
    // 0x808010B4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_5;
    // 0x808010B4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_5:
    // 0x808010B8: jal         0x800000BC
    // 0x808010BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000BC_bswasher(rdram, ctx);
        goto after_6;
    // 0x808010BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808010C0: jal         0x80000F54
    // 0x808010C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800F54_bswasher(rdram, ctx);
        goto after_7;
    // 0x808010C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808010C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808010CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808010D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808010D4: jr          $ra
    // 0x808010D8: nop

    return;
    // 0x808010D8: nop

;}
RECOMP_FUNC void func_808010DC_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808010E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808010E4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808010E8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808010EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808010F0: jal         0x80000F88
    // 0x808010F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_80800F88_bswasher(rdram, ctx);
        goto after_0;
    // 0x808010F4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x808010F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010FC: jal         0x8009D3A8
    // 0x80801100: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x80801100: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80801104: jal         0x80000000
    // 0x80801108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bswasher(rdram, ctx);
        goto after_2;
    // 0x80801108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080110C: jal         0x8009EF10
    // 0x80801110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_3;
    // 0x80801110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801114: bne         $v0, $zero, L_80801120
    if (ctx->r2 != 0) {
        // 0x80801118: nop
    
            goto L_80801120;
    }
    // 0x80801118: nop

    // 0x8080111C: addiu       $s1, $zero, 0x32
    ctx->r17 = ADD32(0, 0X32);
L_80801120:
    // 0x80801120: jal         0x8008DD04
    // 0x80801124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_4;
    // 0x80801124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801128: beq         $v0, $zero, L_80801134
    if (ctx->r2 == 0) {
        // 0x8080112C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801134;
    }
    // 0x8080112C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801130: addiu       $s1, $zero, 0x36
    ctx->r17 = ADD32(0, 0X36);
L_80801134:
    // 0x80801134: jal         0x80091A58
    // 0x80801138: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_5;
    // 0x80801138: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x8080113C: beq         $v0, $zero, L_80801148
    if (ctx->r2 == 0) {
        // 0x80801140: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801148;
    }
    // 0x80801140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801144: addiu       $s1, $zero, 0x35
    ctx->r17 = ADD32(0, 0X35);
L_80801148:
    // 0x80801148: jal         0x80091A58
    // 0x8080114C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_6;
    // 0x8080114C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80801150: beq         $v0, $zero, L_8080115C
    if (ctx->r2 == 0) {
        // 0x80801154: nop
    
            goto L_8080115C;
    }
    // 0x80801154: nop

    // 0x80801158: addiu       $s1, $zero, 0x38
    ctx->r17 = ADD32(0, 0X38);
L_8080115C:
    // 0x8080115C: jal         0x8008E148
    // 0x80801160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_7;
    // 0x80801160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80801164: beq         $v0, $zero, L_80801178
    if (ctx->r2 == 0) {
        // 0x80801168: nop
    
            goto L_80801178;
    }
    // 0x80801168: nop

    // 0x8080116C: jal         0x800848B0
    // 0x80801170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_8;
    // 0x80801170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80801174: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80801178:
    // 0x80801178: jal         0x80000300
    // 0x8080117C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800300_bswasher(rdram, ctx);
        goto after_9;
    // 0x8080117C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80801180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801184: jal         0x8009E5C8
    // 0x80801188: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x80801188: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
    // 0x8080118C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801190: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80801194: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80801198: jr          $ra
    // 0x8080119C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8080119C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bswasher_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808011A4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(166, 0X1E60) << 16);
    // 0x808011A8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808011AC: jr          $ra
    // 0x808011B0: lw          $v0, 0x1E60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E60));
    return;
    // 0x808011B0: lw          $v0, 0x1E60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E60));
;}
RECOMP_FUNC void func_808011B4_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808011B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808011BC: jal         0x80085148
    // 0x808011C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _baspin_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808011C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808011C4: jal         0x800000F0
    // 0x808011C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000F0_bswasher(rdram, ctx);
        goto after_1;
    // 0x808011C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808011CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808011D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808011D4: jr          $ra
    // 0x808011D8: nop

    return;
    // 0x808011D8: nop

;}
RECOMP_FUNC void func_808011DC_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808011E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808011E4: jal         0x800001A8
    // 0x808011E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_808001A8_bswasher(rdram, ctx);
        goto after_0;
    // 0x808011E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808011EC: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x808011F0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808011F4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808011F8: addiu       $a1, $zero, 0x358
    ctx->r5 = ADD32(0, 0X358);
    // 0x808011FC: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80801200: jal         0x80085150
    // 0x80801204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    _baspin_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80801204: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80801208: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080120C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801210: jr          $ra
    // 0x80801214: nop

    return;
    // 0x80801214: nop

;}
RECOMP_FUNC void func_80801218_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801218: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080121C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801220: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801224: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801228: jal         0x80000300
    // 0x8080122C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_80800300_bswasher(rdram, ctx);
        goto after_0;
    // 0x8080122C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80801230: jal         0x8009640C
    // 0x80801234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009640C(rdram, ctx);
        goto after_1;
    // 0x80801234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801238: beq         $v0, $zero, L_80801248
    if (ctx->r2 == 0) {
        // 0x8080123C: nop
    
            goto L_80801248;
    }
    // 0x8080123C: nop

    // 0x80801240: jal         0x800A2EAC
    // 0x80801244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2EAC(rdram, ctx);
        goto after_2;
    // 0x80801244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_80801248:
    // 0x80801248: jal         0x80085158
    // 0x8080124C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baspin_entrypoint_3(rdram, ctx);
        goto after_3;
    // 0x8080124C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801250: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801254: bne         $v0, $at, L_80801264
    if (ctx->r2 != ctx->r1) {
        // 0x80801258: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801264;
    }
    // 0x80801258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080125C: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x80801260: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80801264:
    // 0x80801264: jal         0x8009E5C8
    // 0x80801268: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80801268: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x8080126C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801270: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801274: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801278: jr          $ra
    // 0x8080127C: nop

    return;
    // 0x8080127C: nop

;}
RECOMP_FUNC void bswasher_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801280: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801284: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(166, 0X1E70) << 16);
    // 0x80801288: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080128C: jr          $ra
    // 0x80801290: lw          $v0, 0x1E70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E70));
    return;
    // 0x80801290: lw          $v0, 0x1E70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E70));
;}
RECOMP_FUNC void func_80801294_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080129C: jal         0x800845D0
    // 0x808012A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808012A0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808012A4: jal         0x800000F0
    // 0x808012A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000F0_bswasher(rdram, ctx);
        goto after_1;
    // 0x808012A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808012AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808012B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808012B4: jr          $ra
    // 0x808012B8: nop

    return;
    // 0x808012B8: nop

;}
RECOMP_FUNC void func_808012BC_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808012C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808012C4: jal         0x800001A8
    // 0x808012C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808001A8_bswasher(rdram, ctx);
        goto after_0;
    // 0x808012C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808012CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808012D0: jal         0x800845D8
    // 0x808012D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x808012D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x808012D8: lui         $a2, 0x3F03
    ctx->r6 = S32(0X3F03 << 16);
    // 0x808012DC: ori         $a2, $a2, 0x46DC
    ctx->r6 = ctx->r6 | 0X46DC;
    // 0x808012E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808012E4: jal         0x800845E0
    // 0x808012E8: addiu       $a1, $zero, 0x358
    ctx->r5 = ADD32(0, 0X358);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x808012E8: addiu       $a1, $zero, 0x358
    ctx->r5 = ADD32(0, 0X358);
    after_2:
    // 0x808012EC: jal         0x8008CABC
    // 0x808012F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008CABC(rdram, ctx);
        goto after_3;
    // 0x808012F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808012F4: lui         $a1, 0x3DD2
    ctx->r5 = S32(0X3DD2 << 16);
    // 0x808012F8: ori         $a1, $a1, 0x1FF3
    ctx->r5 = ctx->r5 | 0X1FF3;
    // 0x808012FC: jal         0x8008B10C
    // 0x80801300: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B10C(rdram, ctx);
        goto after_4;
    // 0x80801300: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_4:
    // 0x80801304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080130C: jr          $ra
    // 0x80801310: nop

    return;
    // 0x80801310: nop

;}
RECOMP_FUNC void func_80801314_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801314: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080131C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801320: jal         0x800845C8
    // 0x80801324: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _babounce_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80801324: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80801328: beq         $v0, $zero, L_80801338
    if (ctx->r2 == 0) {
        // 0x8080132C: nop
    
            goto L_80801338;
    }
    // 0x8080132C: nop

    // 0x80801330: jal         0x80000000
    // 0x80801334: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800000_bswasher(rdram, ctx);
        goto after_1;
    // 0x80801334: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
L_80801338:
    // 0x80801338: jal         0x80084600
    // 0x8080133C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _babounce_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x8080133C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80801340: beq         $v0, $zero, L_8080134C
    if (ctx->r2 == 0) {
        // 0x80801344: addiu       $t6, $zero, 0x32
        ctx->r14 = ADD32(0, 0X32);
            goto L_8080134C;
    }
    // 0x80801344: addiu       $t6, $zero, 0x32
    ctx->r14 = ADD32(0, 0X32);
    // 0x80801348: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8080134C:
    // 0x8080134C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801350: jal         0x8009E5C8
    // 0x80801354: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80801354: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80801358: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080135C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801360: jr          $ra
    // 0x80801364: nop

    return;
    // 0x80801364: nop

;}
RECOMP_FUNC void bswasher_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801368: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080136C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(166, 0X1E80) << 16);
    // 0x80801370: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801374: jr          $ra
    // 0x80801378: lw          $v0, 0x1E80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E80));
    return;
    // 0x80801378: lw          $v0, 0x1E80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E80));
;}
RECOMP_FUNC void func_8080137C_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080137C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801380: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801384: jal         0x800839B8
    // 0x80801388: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80801388: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080138C: jal         0x800000F0
    // 0x80801390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000F0_bswasher(rdram, ctx);
        goto after_1;
    // 0x80801390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080139C: jr          $ra
    // 0x808013A0: nop

    return;
    // 0x808013A0: nop

;}
RECOMP_FUNC void func_808013A4_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808013A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808013AC: jal         0x800001A8
    // 0x808013B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808001A8_bswasher(rdram, ctx);
        goto after_0;
    // 0x808013B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808013B4: jal         0x800839C8
    // 0x808013B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x808013B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808013BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808013C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808013C4: jr          $ra
    // 0x808013C8: nop

    return;
    // 0x808013C8: nop

;}
RECOMP_FUNC void func_808013CC_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808013D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808013D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808013D8: jal         0x800839E8
    // 0x808013DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x808013DC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808013E0: beq         $v0, $zero, L_808013F4
    if (ctx->r2 == 0) {
        // 0x808013E4: nop
    
            goto L_808013F4;
    }
    // 0x808013E4: nop

    // 0x808013E8: jal         0x800839B0
    // 0x808013EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x808013EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808013F0: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
L_808013F4:
    // 0x808013F4: jal         0x80000300
    // 0x808013F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800300_bswasher(rdram, ctx);
        goto after_2;
    // 0x808013F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808013FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801400: jal         0x8009E5C8
    // 0x80801404: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80801404: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80801408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080140C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801410: jr          $ra
    // 0x80801414: nop

    return;
    // 0x80801414: nop

;}
RECOMP_FUNC void bswasher_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801418: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080141C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(166, 0X1E90) << 16);
    // 0x80801420: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801424: jr          $ra
    // 0x80801428: lw          $v0, 0x1E90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E90));
    return;
    // 0x80801428: lw          $v0, 0x1E90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1E90));
;}
RECOMP_FUNC void func_8080142C_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080142C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801430: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801434: jal         0x800000F0
    // 0x80801438: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808000F0_bswasher(rdram, ctx);
        goto after_0;
    // 0x80801438: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080143C: jal         0x80090A2C
    // 0x80801440: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80090A2C(rdram, ctx);
        goto after_1;
    // 0x80801440: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801448: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080144C: jr          $ra
    // 0x80801450: nop

    return;
    // 0x80801450: nop

;}
RECOMP_FUNC void func_80801454_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801454: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801458: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080145C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801460: jal         0x800001A8
    // 0x80801464: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808001A8_bswasher(rdram, ctx);
        goto after_0;
    // 0x80801464: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801468: lui         $a2, 0x4079
    ctx->r6 = S32(0X4079 << 16);
    // 0x8080146C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801470: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801474: jal         0x8008CB3C
    // 0x80801478: addiu       $a1, $zero, 0x356
    ctx->r5 = ADD32(0, 0X356);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80801478: addiu       $a1, $zero, 0x356
    ctx->r5 = ADD32(0, 0X356);
    after_1:
    // 0x8080147C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80801480: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801484: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801488: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080148C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80801490: jal         0x8009FFD8
    // 0x80801494: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801494: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80801498: jal         0x800000BC
    // 0x8080149C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000BC_bswasher(rdram, ctx);
        goto after_3;
    // 0x8080149C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808014A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014A4: jal         0x8009B9B0
    // 0x808014A8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x808014A8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x808014AC: jal         0x800909CC
    // 0x808014B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_5;
    // 0x808014B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808014B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808014B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808014BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808014C0: jr          $ra
    // 0x808014C4: nop

    return;
    // 0x808014C4: nop

;}
RECOMP_FUNC void func_808014C8_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808014CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808014D0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808014D4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x808014D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808014DC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x808014E0: jal         0x8009D3A8
    // 0x808014E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x808014E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808014E8: lui         $a1, 0x3E18
    ctx->r5 = S32(0X3E18 << 16);
    // 0x808014EC: ori         $a1, $a1, 0x44D0
    ctx->r5 = ctx->r5 | 0X44D0;
    // 0x808014F0: jal         0x8008CB10
    // 0x808014F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_1;
    // 0x808014F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808014F8: bne         $v0, $zero, L_80801510
    if (ctx->r2 != 0) {
        // 0x808014FC: lui         $a1, 0x3E8C
        ctx->r5 = S32(0X3E8C << 16);
            goto L_80801510;
    }
    // 0x808014FC: lui         $a1, 0x3E8C
    ctx->r5 = S32(0X3E8C << 16);
    // 0x80801500: ori         $a1, $a1, 0x2268
    ctx->r5 = ctx->r5 | 0X2268;
    // 0x80801504: jal         0x8008CB10
    // 0x80801508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80801508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080150C: beq         $v0, $zero, L_8080153C
    if (ctx->r2 == 0) {
        // 0x80801510: lui         $a2, 0x3F66
        ctx->r6 = S32(0X3F66 << 16);
            goto L_8080153C;
    }
L_80801510:
    // 0x80801510: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80801514: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x80801518: addiu       $t6, $zero, 0xBB8
    ctx->r14 = ADD32(0, 0XBB8);
    // 0x8080151C: addiu       $t7, $zero, 0xFA0
    ctx->r15 = ADD32(0, 0XFA0);
    // 0x80801520: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80801524: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801528: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8080152C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801530: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801534: jal         0x8009DEC0
    // 0x80801538: addiu       $a1, $zero, 0x4A1
    ctx->r5 = ADD32(0, 0X4A1);
    func_8009DEC0(rdram, ctx);
        goto after_3;
    // 0x80801538: addiu       $a1, $zero, 0x4A1
    ctx->r5 = ADD32(0, 0X4A1);
    after_3:
L_8080153C:
    // 0x8080153C: jal         0x8008E148
    // 0x80801540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_4;
    // 0x80801540: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801544: beq         $v0, $zero, L_80801558
    if (ctx->r2 == 0) {
        // 0x80801548: nop
    
            goto L_80801558;
    }
    // 0x80801548: nop

    // 0x8080154C: jal         0x800848B0
    // 0x80801550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_5;
    // 0x80801550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801554: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80801558:
    // 0x80801558: jal         0x8008DD04
    // 0x8080155C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_6;
    // 0x8080155C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801560: beq         $v0, $zero, L_8080156C
    if (ctx->r2 == 0) {
        // 0x80801564: nop
    
            goto L_8080156C;
    }
    // 0x80801564: nop

    // 0x80801568: addiu       $s1, $zero, 0x36
    ctx->r17 = ADD32(0, 0X36);
L_8080156C:
    // 0x8080156C: jal         0x8009EF10
    // 0x80801570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_7;
    // 0x80801570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80801574: beq         $v0, $zero, L_80801580
    if (ctx->r2 == 0) {
        // 0x80801578: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801580;
    }
    // 0x80801578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080157C: addiu       $s1, $zero, 0x33
    ctx->r17 = ADD32(0, 0X33);
L_80801580:
    // 0x80801580: jal         0x80000064
    // 0x80801584: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80800064_bswasher(rdram, ctx);
        goto after_8;
    // 0x80801584: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x80801588: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080158C: jal         0x800A02DC
    // 0x80801590: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800A02DC(rdram, ctx);
        goto after_9;
    // 0x80801590: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_9:
    // 0x80801594: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80801598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080159C: jal         0x80091A58
    // 0x808015A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_10;
    // 0x808015A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x808015A4: beq         $v0, $zero, L_808015B0
    if (ctx->r2 == 0) {
        // 0x808015A8: nop
    
            goto L_808015B0;
    }
    // 0x808015A8: nop

    // 0x808015AC: addiu       $s1, $zero, 0x38
    ctx->r17 = ADD32(0, 0X38);
L_808015B0:
    // 0x808015B0: jal         0x80000300
    // 0x808015B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800300_bswasher(rdram, ctx);
        goto after_11;
    // 0x808015B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808015B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015BC: jal         0x8009E5C8
    // 0x808015C0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_12;
    // 0x808015C0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_12:
    // 0x808015C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808015C8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808015CC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808015D0: jr          $ra
    // 0x808015D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808015D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void bswasher_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808015DC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(166, 0X1EA0) << 16);
    // 0x808015E0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808015E4: jr          $ra
    // 0x808015E8: lw          $v0, 0x1EA0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1EA0));
    return;
    // 0x808015E8: lw          $v0, 0x1EA0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1EA0));
;}
RECOMP_FUNC void func_808015EC_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808015F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808015F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808015F8: lw          $t6, 0x15C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X15C);
    // 0x808015FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80801600: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801604: bnel        $t6, $at, L_8080162C
    if (ctx->r14 != ctx->r1) {
        // 0x80801608: sltiu       $at, $a1, 0x6
        ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
            goto L_8080162C;
    }
    goto skip_0;
    // 0x80801608: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
    skip_0:
    // 0x8080160C: lbu         $a0, 0x164($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X164);
    // 0x80801610: beql        $a0, $zero, L_8080162C
    if (ctx->r4 == 0) {
        // 0x80801614: sltiu       $at, $a1, 0x6
        ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
            goto L_8080162C;
    }
    goto skip_1;
    // 0x80801614: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
    skip_1:
    // 0x80801618: jal         0x800C2FDC
    // 0x8080161C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x8080161C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80801620: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80801624: sb          $zero, 0x164($s0)
    MEM_B(0X164, ctx->r16) = 0;
    // 0x80801628: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
L_8080162C:
    // 0x8080162C: beq         $at, $zero, L_80801730
    if (ctx->r1 == 0) {
        // 0x80801630: sw          $a1, 0x15C($s0)
        MEM_W(0X15C, ctx->r16) = ctx->r5;
            goto L_80801730;
    }
    // 0x80801630: sw          $a1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r5;
    // 0x80801634: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80801638: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1D08) << 16);
    // 0x8080163C: addu        $at, $at, $t7
    gpr jr_addend_80801644 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80801640: lw          $t7, 0x1D08($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(166, 0X1D08));
    // 0x80801644: jr          $t7
    // 0x80801648: nop

    switch (jr_addend_80801644 >> 2) {
        case 0: goto L_80801730; break;
        case 1: goto L_8080164C; break;
        case 2: goto L_808016A0; break;
        case 3: goto L_808016B4; break;
        case 4: goto L_808016C8; break;
        case 5: goto L_80801724; break;
        default: switch_error(__func__, 0x80801644, 0x80801D08);
    }
    // 0x80801648: nop

L_8080164C:
    // 0x8080164C: lui         $a2, 0x40D6
    ctx->r6 = S32(0X40D6 << 16);
    // 0x80801650: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801658: jal         0x8008CCBC
    // 0x8080165C: addiu       $a1, $zero, 0x354
    ctx->r5 = ADD32(0, 0X354);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x8080165C: addiu       $a1, $zero, 0x354
    ctx->r5 = ADD32(0, 0X354);
    after_1:
    // 0x80801660: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80801664: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80801668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080166C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801670: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80801674: jal         0x8009FFD8
    // 0x80801678: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801678: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x8080167C: jal         0x800000BC
    // 0x80801680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000BC_bswasher(rdram, ctx);
        goto after_3;
    // 0x80801680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801684: jal         0x8009C984
    // 0x80801688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_4;
    // 0x80801688: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080168C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801690: jal         0x8009C914
    // 0x80801694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_5;
    // 0x80801694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801698: b           L_80801730
    // 0x8080169C: sb          $zero, 0x164($s0)
    MEM_B(0X164, ctx->r16) = 0;
        goto L_80801730;
    // 0x8080169C: sb          $zero, 0x164($s0)
    MEM_B(0X164, ctx->r16) = 0;
L_808016A0:
    // 0x808016A0: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    // 0x808016A4: jal         0x80087318
    // 0x808016A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _chfactoryworkerdirty_entrypoint_1(rdram, ctx);
        goto after_6;
    // 0x808016A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808016AC: b           L_80801734
    // 0x808016B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80801734;
    // 0x808016B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808016B4:
    // 0x808016B4: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    // 0x808016B8: jal         0x80087318
    // 0x808016BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _chfactoryworkerdirty_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x808016BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x808016C0: b           L_80801734
    // 0x808016C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80801734;
    // 0x808016C4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808016C8:
    // 0x808016C8: lui         $a2, 0x3F86
    ctx->r6 = S32(0X3F86 << 16);
    // 0x808016CC: lui         $a3, 0x3F93
    ctx->r7 = S32(0X3F93 << 16);
    // 0x808016D0: addiu       $t9, $zero, 0x4E20
    ctx->r25 = ADD32(0, 0X4E20);
    // 0x808016D4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x808016D8: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x808016DC: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808016E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016E4: jal         0x8009DBB0
    // 0x808016E8: addiu       $a1, $zero, 0x573
    ctx->r5 = ADD32(0, 0X573);
    func_8009DBB0(rdram, ctx);
        goto after_8;
    // 0x808016E8: addiu       $a1, $zero, 0x573
    ctx->r5 = ADD32(0, 0X573);
    after_8:
    // 0x808016EC: lui         $a2, 0x3F59
    ctx->r6 = S32(0X3F59 << 16);
    // 0x808016F0: lui         $a3, 0x3F73
    ctx->r7 = S32(0X3F73 << 16);
    // 0x808016F4: addiu       $t0, $zero, 0x4E20
    ctx->r8 = ADD32(0, 0X4E20);
    // 0x808016F8: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x808016FC: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80801700: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801708: jal         0x8009DBB0
    // 0x8080170C: addiu       $a1, $zero, 0x406
    ctx->r5 = ADD32(0, 0X406);
    func_8009DBB0(rdram, ctx);
        goto after_9;
    // 0x8080170C: addiu       $a1, $zero, 0x406
    ctx->r5 = ADD32(0, 0X406);
    after_9:
    // 0x80801710: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    // 0x80801714: jal         0x80087318
    // 0x80801718: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _chfactoryworkerdirty_entrypoint_1(rdram, ctx);
        goto after_10;
    // 0x80801718: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_10:
    // 0x8080171C: b           L_80801734
    // 0x80801720: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80801734;
    // 0x80801720: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80801724:
    // 0x80801724: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    // 0x80801728: jal         0x80087318
    // 0x8080172C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    _chfactoryworkerdirty_entrypoint_1(rdram, ctx);
        goto after_11;
    // 0x8080172C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_11:
L_80801730:
    // 0x80801730: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80801734:
    // 0x80801734: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801738: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080173C: jr          $ra
    // 0x80801740: nop

    return;
    // 0x80801740: nop

;}
RECOMP_FUNC void func_80801744_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801744: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080174C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80801750: jal         0x800015EC
    // 0x80801754: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808015EC_bswasher(rdram, ctx);
        goto after_0;
    // 0x80801754: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80801758: jal         0x800000F0
    // 0x8080175C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000F0_bswasher(rdram, ctx);
        goto after_1;
    // 0x8080175C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801760: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801764: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801768: jr          $ra
    // 0x8080176C: nop

    return;
    // 0x8080176C: nop

;}
RECOMP_FUNC void func_80801770_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801770: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801774: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801778: jal         0x800001A8
    // 0x8080177C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808001A8_bswasher(rdram, ctx);
        goto after_0;
    // 0x8080177C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801780: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801784: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801788: jal         0x800015EC
    // 0x8080178C: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_808015EC_bswasher(rdram, ctx);
        goto after_1;
    // 0x8080178C: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    after_1:
    // 0x80801790: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801794: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801798: jr          $ra
    // 0x8080179C: nop

    return;
    // 0x8080179C: nop

;}
RECOMP_FUNC void func_808017A0_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808017A0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808017A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808017A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808017AC: lui         $a1, 0x38D1
    ctx->r5 = S32(0X38D1 << 16);
    // 0x808017B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808017B4: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x808017B8: jal         0x8008CB10
    // 0x808017BC: ori         $a1, $a1, 0xB717
    ctx->r5 = ctx->r5 | 0XB717;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x808017BC: ori         $a1, $a1, 0xB717
    ctx->r5 = ctx->r5 | 0XB717;
    after_0:
    // 0x808017C0: beq         $v0, $zero, L_808017DC
    if (ctx->r2 == 0) {
        // 0x808017C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808017DC;
    }
    // 0x808017C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017C8: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x808017CC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808017D0: addiu       $a1, $zero, 0x5E7
    ctx->r5 = ADD32(0, 0X5E7);
    // 0x808017D4: jal         0x8009DB04
    // 0x808017D8: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    func_8009DB04(rdram, ctx);
        goto after_1;
    // 0x808017D8: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    after_1:
L_808017DC:
    // 0x808017DC: lui         $a1, 0x3DD7
    ctx->r5 = S32(0X3DD7 << 16);
    // 0x808017E0: ori         $a1, $a1, 0x7319
    ctx->r5 = ctx->r5 | 0X7319;
    // 0x808017E4: jal         0x8008CB10
    // 0x808017E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x808017E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808017EC: beq         $v0, $zero, L_80801808
    if (ctx->r2 == 0) {
        // 0x808017F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801808;
    }
    // 0x808017F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017F4: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x808017F8: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808017FC: addiu       $a1, $zero, 0x519
    ctx->r5 = ADD32(0, 0X519);
    // 0x80801800: jal         0x8009DB04
    // 0x80801804: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    func_8009DB04(rdram, ctx);
        goto after_3;
    // 0x80801804: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    after_3:
L_80801808:
    // 0x80801808: lui         $a1, 0x3E8C
    ctx->r5 = S32(0X3E8C << 16);
    // 0x8080180C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80801810: jal         0x8008CB10
    // 0x80801814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x80801814: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801818: beq         $v0, $zero, L_80801834
    if (ctx->r2 == 0) {
        // 0x8080181C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801834;
    }
    // 0x8080181C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801820: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80801824: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801828: addiu       $a1, $zero, 0x5E7
    ctx->r5 = ADD32(0, 0X5E7);
    // 0x8080182C: jal         0x8009DB04
    // 0x80801830: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    func_8009DB04(rdram, ctx);
        goto after_5;
    // 0x80801830: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    after_5:
L_80801834:
    // 0x80801834: lui         $a1, 0x3F5B
    ctx->r5 = S32(0X3F5B << 16);
    // 0x80801838: ori         $a1, $a1, 0x7176
    ctx->r5 = ctx->r5 | 0X7176;
    // 0x8080183C: jal         0x8008CB10
    // 0x80801840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_6;
    // 0x80801840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801844: beq         $v0, $zero, L_80801860
    if (ctx->r2 == 0) {
        // 0x80801848: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801860;
    }
    // 0x80801848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080184C: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x80801850: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80801854: addiu       $a1, $zero, 0x5E7
    ctx->r5 = ADD32(0, 0X5E7);
    // 0x80801858: jal         0x8009DB04
    // 0x8080185C: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    func_8009DB04(rdram, ctx);
        goto after_7;
    // 0x8080185C: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    after_7:
L_80801860:
    // 0x80801860: lui         $a1, 0x3F6E
    ctx->r5 = S32(0X3F6E << 16);
    // 0x80801864: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    // 0x80801868: jal         0x8008CB10
    // 0x8080186C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_8;
    // 0x8080186C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80801870: beq         $v0, $zero, L_8080188C
    if (ctx->r2 == 0) {
        // 0x80801874: addiu       $a1, $zero, 0x5E7
        ctx->r5 = ADD32(0, 0X5E7);
            goto L_8080188C;
    }
    // 0x80801874: addiu       $a1, $zero, 0x5E7
    ctx->r5 = ADD32(0, 0X5E7);
    // 0x80801878: lui         $a2, 0x3F59
    ctx->r6 = S32(0X3F59 << 16);
    // 0x8080187C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801884: jal         0x8009DB04
    // 0x80801888: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    func_8009DB04(rdram, ctx);
        goto after_9;
    // 0x80801888: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    after_9:
L_8080188C:
    // 0x8080188C: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    // 0x80801890: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80801894: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x80801898: beq         $at, $zero, L_80801ADC
    if (ctx->r1 == 0) {
        // 0x8080189C: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80801ADC;
    }
    // 0x8080189C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808018A0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1D20) << 16);
    // 0x808018A4: addu        $at, $at, $t7
    gpr jr_addend_808018AC = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x808018A8: lw          $t7, 0x1D20($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(166, 0X1D20));
    // 0x808018AC: jr          $t7
    // 0x808018B0: nop

    switch (jr_addend_808018AC >> 2) {
        case 0: goto L_808018B4; break;
        case 1: goto L_808018DC; break;
        case 2: goto L_80801950; break;
        case 3: goto L_80801A58; break;
        case 4: goto L_80801AC8; break;
        default: switch_error(__func__, 0x808018AC, 0x80801D20);
    }
    // 0x808018B0: nop

L_808018B4:
    // 0x808018B4: lui         $a1, 0x3D8F
    ctx->r5 = S32(0X3D8F << 16);
    // 0x808018B8: ori         $a1, $a1, 0x5C29
    ctx->r5 = ctx->r5 | 0X5C29;
    // 0x808018BC: jal         0x8008CB10
    // 0x808018C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_10;
    // 0x808018C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808018C4: beq         $v0, $zero, L_80801ADC
    if (ctx->r2 == 0) {
        // 0x808018C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801ADC;
    }
    // 0x808018C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018CC: jal         0x800015EC
    // 0x808018D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808015EC_bswasher(rdram, ctx);
        goto after_11;
    // 0x808018D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x808018D4: b           L_80801AE0
    // 0x808018D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801AE0;
    // 0x808018D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808018DC:
    // 0x808018DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018E0: jal         0x80085408
    // 0x808018E4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    _bawasher_entrypoint_3(rdram, ctx);
        goto after_12;
    // 0x808018E4: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_12:
    // 0x808018E8: jal         0x8008CAC8
    // 0x808018EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_13;
    // 0x808018EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808018F0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1D34) << 16);
    // 0x808018F4: lwc1        $f14, 0x1D34($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1D34));
    // 0x808018F8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808018FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80801900: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x80801904: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80801908: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8080190C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80801910: jal         0x800F10B4
    // 0x80801914: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_14;
    // 0x80801914: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x80801918: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080191C: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    // 0x80801920: jal         0x80087320
    // 0x80801924: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    _chfactoryworkerdirty_entrypoint_2(rdram, ctx);
        goto after_15;
    // 0x80801924: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_15:
    // 0x80801928: lui         $a1, 0x3DF5
    ctx->r5 = S32(0X3DF5 << 16);
    // 0x8080192C: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    // 0x80801930: jal         0x8008CB10
    // 0x80801934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_16;
    // 0x80801934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80801938: beq         $v0, $zero, L_80801ADC
    if (ctx->r2 == 0) {
        // 0x8080193C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801ADC;
    }
    // 0x8080193C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801940: jal         0x800015EC
    // 0x80801944: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808015EC_bswasher(rdram, ctx);
        goto after_17;
    // 0x80801944: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_17:
    // 0x80801948: b           L_80801AE0
    // 0x8080194C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801AE0;
    // 0x8080194C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801950:
    // 0x80801950: lui         $a1, 0x3E96
    ctx->r5 = S32(0X3E96 << 16);
    // 0x80801954: ori         $a1, $a1, 0xFD22
    ctx->r5 = ctx->r5 | 0XFD22;
    // 0x80801958: jal         0x8008CB10
    // 0x8080195C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_18;
    // 0x8080195C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80801960: beq         $v0, $zero, L_8080197C
    if (ctx->r2 == 0) {
        // 0x80801964: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080197C;
    }
    // 0x80801964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801968: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(166, 0X1EB0) << 16);
    // 0x8080196C: addiu       $a2, $a2, 0x1EB0
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(166, 0X1EB0));
    // 0x80801970: jal         0x8009D454
    // 0x80801974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D454(rdram, ctx);
        goto after_19;
    // 0x80801974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x80801978: sb          $v0, 0x164($s0)
    MEM_B(0X164, ctx->r16) = ctx->r2;
L_8080197C:
    // 0x8080197C: jal         0x8008CAC8
    // 0x80801980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_20;
    // 0x80801980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80801984: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1D38) << 16);
    // 0x80801988: lwc1        $f2, 0x1D38($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1D38));
    // 0x8080198C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80801990: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1D40) << 16);
    // 0x80801994: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80801998: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8080199C: bc1f        L_808019CC
    if (!c1cs) {
        // 0x808019A0: nop
    
            goto L_808019CC;
    }
    // 0x808019A0: nop

    // 0x808019A4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1D3C) << 16);
    // 0x808019A8: lwc1        $f14, 0x1D3C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1D3C));
    // 0x808019AC: lui         $at, 0x44AF
    ctx->r1 = S32(0X44AF << 16);
    // 0x808019B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808019B4: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x808019B8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x808019BC: jal         0x800F10B4
    // 0x808019C0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_21;
    // 0x808019C0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_21:
    // 0x808019C4: b           L_808019E8
    // 0x808019C8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
        goto L_808019E8;
    // 0x808019C8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_808019CC:
    // 0x808019CC: lwc1        $f14, 0x1D40($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1D40));
    // 0x808019D0: lui         $at, 0x44AF
    ctx->r1 = S32(0X44AF << 16);
    // 0x808019D4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808019D8: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x808019DC: jal         0x800F10B4
    // 0x808019E0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_22;
    // 0x808019E0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_22:
    // 0x808019E4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_808019E8:
    // 0x808019E8: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    // 0x808019EC: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x808019F0: jal         0x80087328
    // 0x808019F4: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    _chfactoryworkerdirty_entrypoint_3(rdram, ctx);
        goto after_23;
    // 0x808019F4: swc1        $f12, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f12.u32l;
    after_23:
    // 0x808019F8: lbu         $t8, 0x164($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X164);
    // 0x808019FC: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80801A00: lui         $a2, 0x4448
    ctx->r6 = S32(0X4448 << 16);
    // 0x80801A04: beq         $t8, $zero, L_80801A30
    if (ctx->r24 == 0) {
        // 0x80801A08: lui         $a3, 0x3F4C
        ctx->r7 = S32(0X3F4C << 16);
            goto L_80801A30;
    }
    // 0x80801A08: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x80801A0C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1D44) << 16);
    // 0x80801A10: lwc1        $f10, 0x1D44($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1D44));
    // 0x80801A14: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80801A18: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80801A1C: jal         0x800F10B4
    // 0x80801A20: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_24;
    // 0x80801A20: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_24:
    // 0x80801A24: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801A28: jal         0x800C31DC
    // 0x80801A2C: lbu         $a0, 0x164($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X164);
    func_800C31DC(rdram, ctx);
        goto after_25;
    // 0x80801A2C: lbu         $a0, 0x164($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X164);
    after_25:
L_80801A30:
    // 0x80801A30: lui         $a1, 0x3F63
    ctx->r5 = S32(0X3F63 << 16);
    // 0x80801A34: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x80801A38: jal         0x8008CB10
    // 0x80801A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_26;
    // 0x80801A3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80801A40: beq         $v0, $zero, L_80801ADC
    if (ctx->r2 == 0) {
        // 0x80801A44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801ADC;
    }
    // 0x80801A44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A48: jal         0x800015EC
    // 0x80801A4C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_808015EC_bswasher(rdram, ctx);
        goto after_27;
    // 0x80801A4C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_27:
    // 0x80801A50: b           L_80801AE0
    // 0x80801A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801AE0;
    // 0x80801A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801A58:
    // 0x80801A58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A5C: jal         0x80085408
    // 0x80801A60: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    _bawasher_entrypoint_3(rdram, ctx);
        goto after_28;
    // 0x80801A60: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_28:
    // 0x80801A64: jal         0x8008CAC8
    // 0x80801A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_29;
    // 0x80801A68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80801A6C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80801A70: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1D48) << 16);
    // 0x80801A74: lui         $a2, 0x3F70
    ctx->r6 = S32(0X3F70 << 16);
    // 0x80801A78: ori         $a2, $a2, 0xA3D7
    ctx->r6 = ctx->r6 | 0XA3D7;
    // 0x80801A7C: lwc1        $f14, 0x1D48($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1D48));
    // 0x80801A80: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80801A84: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80801A88: jal         0x800F10B4
    // 0x80801A8C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800F10B4(rdram, ctx);
        goto after_30;
    // 0x80801A8C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_30:
    // 0x80801A90: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80801A94: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    // 0x80801A98: jal         0x80087320
    // 0x80801A9C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    _chfactoryworkerdirty_entrypoint_2(rdram, ctx);
        goto after_31;
    // 0x80801A9C: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_31:
    // 0x80801AA0: lui         $a1, 0x3F70
    ctx->r5 = S32(0X3F70 << 16);
    // 0x80801AA4: ori         $a1, $a1, 0xA3D7
    ctx->r5 = ctx->r5 | 0XA3D7;
    // 0x80801AA8: jal         0x8008CB10
    // 0x80801AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_32;
    // 0x80801AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80801AB0: beq         $v0, $zero, L_80801ADC
    if (ctx->r2 == 0) {
        // 0x80801AB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801ADC;
    }
    // 0x80801AB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801AB8: jal         0x800015EC
    // 0x80801ABC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_808015EC_bswasher(rdram, ctx);
        goto after_33;
    // 0x80801ABC: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_33:
    // 0x80801AC0: b           L_80801AE0
    // 0x80801AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801AE0;
    // 0x80801AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801AC8:
    // 0x80801AC8: jal         0x8008CAEC
    // 0x80801ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_34;
    // 0x80801ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x80801AD0: beq         $v0, $zero, L_80801ADC
    if (ctx->r2 == 0) {
        // 0x80801AD4: addiu       $t9, $zero, 0x32
        ctx->r25 = ADD32(0, 0X32);
            goto L_80801ADC;
    }
    // 0x80801AD4: addiu       $t9, $zero, 0x32
    ctx->r25 = ADD32(0, 0X32);
    // 0x80801AD8: sw          $t9, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r25;
L_80801ADC:
    // 0x80801ADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801AE0:
    // 0x80801AE0: jal         0x8009E5C8
    // 0x80801AE4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009E5C8(rdram, ctx);
        goto after_35;
    // 0x80801AE4: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_35:
    // 0x80801AE8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801AEC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801AF0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80801AF4: jr          $ra
    // 0x80801AF8: nop

    return;
    // 0x80801AF8: nop

;}
RECOMP_FUNC void bswasher_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801AFC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801B00: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(166, 0X1EC4) << 16);
    // 0x80801B04: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801B08: jr          $ra
    // 0x80801B0C: lw          $v0, 0x1EC4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1EC4));
    return;
    // 0x80801B0C: lw          $v0, 0x1EC4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1EC4));
;}
RECOMP_FUNC void func_80801B10_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801B10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801B14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801B18: jal         0x800000F0
    // 0x80801B1C: nop

    func_808000F0_bswasher(rdram, ctx);
        goto after_0;
    // 0x80801B1C: nop

    after_0:
    // 0x80801B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801B24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801B28: jr          $ra
    // 0x80801B2C: nop

    return;
    // 0x80801B2C: nop

;}
RECOMP_FUNC void func_80801B30_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801B30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801B34: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801B38: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801B3C: jal         0x800001A8
    // 0x80801B40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808001A8_bswasher(rdram, ctx);
        goto after_0;
    // 0x80801B40: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801B44: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80801B48: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80801B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B50: jal         0x8008CCBC
    // 0x80801B54: addiu       $a1, $zero, 0x357
    ctx->r5 = ADD32(0, 0X357);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x80801B54: addiu       $a1, $zero, 0x357
    ctx->r5 = ADD32(0, 0X357);
    after_1:
    // 0x80801B58: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80801B5C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801B68: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80801B6C: jal         0x8009FFD8
    // 0x80801B70: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801B70: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x80801B74: jal         0x800000BC
    // 0x80801B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000BC_bswasher(rdram, ctx);
        goto after_3;
    // 0x80801B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801B7C: jal         0x8009C984
    // 0x80801B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_4;
    // 0x80801B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801B84: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801B88: jal         0x8009C914
    // 0x80801B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_5;
    // 0x80801B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801B90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801B94: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801B98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801B9C: jr          $ra
    // 0x80801BA0: nop

    return;
    // 0x80801BA0: nop

;}
RECOMP_FUNC void func_80801BA4_bswasher(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801BA4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80801BA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801BAC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801BB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801BB4: jal         0x8009BB00
    // 0x80801BB8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8009BB00(rdram, ctx);
        goto after_0;
    // 0x80801BB8: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80801BBC: jal         0x800D8FF8
    // 0x80801BC0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x80801BC0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80801BC4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1D4C) << 16);
    // 0x80801BC8: lwc1        $f4, 0x1D4C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1D4C));
    // 0x80801BCC: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80801BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BD4: div.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80801BD8: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80801BDC: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80801BE0: jal         0x8009B9B0
    // 0x80801BE4: nop

    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80801BE4: nop

    after_2:
    // 0x80801BE8: lui         $a1, 0x3E06
    ctx->r5 = S32(0X3E06 << 16);
    // 0x80801BEC: ori         $a1, $a1, 0xAA6
    ctx->r5 = ctx->r5 | 0XAA6;
    // 0x80801BF0: jal         0x8008CB10
    // 0x80801BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_3;
    // 0x80801BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801BF8: beq         $v0, $zero, L_80801C58
    if (ctx->r2 == 0) {
        // 0x80801BFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801C58;
    }
    // 0x80801BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C00: lui         $a2, 0x3F86
    ctx->r6 = S32(0X3F86 << 16);
    // 0x80801C04: lui         $a3, 0x3F93
    ctx->r7 = S32(0X3F93 << 16);
    // 0x80801C08: addiu       $t6, $zero, 0x4E20
    ctx->r14 = ADD32(0, 0X4E20);
    // 0x80801C0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801C10: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80801C14: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801C18: jal         0x8009DBB0
    // 0x80801C1C: addiu       $a1, $zero, 0x573
    ctx->r5 = ADD32(0, 0X573);
    func_8009DBB0(rdram, ctx);
        goto after_4;
    // 0x80801C1C: addiu       $a1, $zero, 0x573
    ctx->r5 = ADD32(0, 0X573);
    after_4:
    // 0x80801C20: lui         $a2, 0x3F59
    ctx->r6 = S32(0X3F59 << 16);
    // 0x80801C24: lui         $a3, 0x3F73
    ctx->r7 = S32(0X3F73 << 16);
    // 0x80801C28: addiu       $t7, $zero, 0x4E20
    ctx->r15 = ADD32(0, 0X4E20);
    // 0x80801C2C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80801C30: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80801C34: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C3C: jal         0x8009DBB0
    // 0x80801C40: addiu       $a1, $zero, 0x406
    ctx->r5 = ADD32(0, 0X406);
    func_8009DBB0(rdram, ctx);
        goto after_5;
    // 0x80801C40: addiu       $a1, $zero, 0x406
    ctx->r5 = ADD32(0, 0X406);
    after_5:
    // 0x80801C44: jal         0x80085428
    // 0x80801C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bawasher_entrypoint_7(rdram, ctx);
        goto after_6;
    // 0x80801C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801C4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C50: jal         0x8009D2D8
    // 0x80801C54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D2D8(rdram, ctx);
        goto after_7;
    // 0x80801C54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_80801C58:
    // 0x80801C58: jal         0x8008CAEC
    // 0x80801C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_8;
    // 0x80801C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80801C60: beq         $v0, $zero, L_80801C6C
    if (ctx->r2 == 0) {
        // 0x80801C64: addiu       $t8, $zero, 0x32
        ctx->r24 = ADD32(0, 0X32);
            goto L_80801C6C;
    }
    // 0x80801C64: addiu       $t8, $zero, 0x32
    ctx->r24 = ADD32(0, 0X32);
    // 0x80801C68: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_80801C6C:
    // 0x80801C6C: jal         0x8008CAC8
    // 0x80801C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_9;
    // 0x80801C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80801C74: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(166, 0X1D50) << 16);
    // 0x80801C78: lwc1        $f16, 0x1D50($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(166, 0X1D50));
    // 0x80801C7C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80801C80: nop

    // 0x80801C84: bc1fl       L_80801CBC
    if (!c1cs) {
        // 0x80801C88: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801CBC;
    }
    goto skip_0;
    // 0x80801C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80801C8C: jal         0x8009EF10
    // 0x80801C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_10;
    // 0x80801C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80801C94: beq         $v0, $zero, L_80801CA4
    if (ctx->r2 == 0) {
        // 0x80801C98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801CA4;
    }
    // 0x80801C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C9C: addiu       $t9, $zero, 0x33
    ctx->r25 = ADD32(0, 0X33);
    // 0x80801CA0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_80801CA4:
    // 0x80801CA4: jal         0x80091A58
    // 0x80801CA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_11;
    // 0x80801CA8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80801CAC: beq         $v0, $zero, L_80801CB8
    if (ctx->r2 == 0) {
        // 0x80801CB0: addiu       $t0, $zero, 0x38
        ctx->r8 = ADD32(0, 0X38);
            goto L_80801CB8;
    }
    // 0x80801CB0: addiu       $t0, $zero, 0x38
    ctx->r8 = ADD32(0, 0X38);
    // 0x80801CB4: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_80801CB8:
    // 0x80801CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801CBC:
    // 0x80801CBC: jal         0x8009E5C8
    // 0x80801CC0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_12;
    // 0x80801CC0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_12:
    // 0x80801CC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801CC8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801CCC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80801CD0: jr          $ra
    // 0x80801CD4: nop

    return;
    // 0x80801CD4: nop

;}
RECOMP_FUNC void bswasher_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801CD8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801CDC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(166, 0X1ED4) << 16);
    // 0x80801CE0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801CE4: jr          $ra
    // 0x80801CE8: lw          $v0, 0x1ED4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1ED4));
    return;
    // 0x80801CE8: lw          $v0, 0x1ED4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(166, 0X1ED4));
    // 0x80801CEC: nop

;}
RECOMP_FUNC void func_80800000_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x800A587C
    // 0x8080000C: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x8080000C: nop

    after_0:
    // 0x80800010: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80800014: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x80800018: beq         $at, $zero, L_80800094
    if (ctx->r1 == 0) {
        // 0x8080001C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80800094;
    }
    // 0x8080001C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800020: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(167, 0X1000) << 16);
    // 0x80800024: addu        $at, $at, $t6
    gpr jr_addend_8080002C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800028: lw          $t6, 0x1000($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(167, 0X1000));
    // 0x8080002C: jr          $t6
    // 0x80800030: nop

    switch (jr_addend_8080002C >> 2) {
        case 0: goto L_80800044; break;
        case 1: goto L_80800054; break;
        case 2: goto L_80800034; break;
        case 3: goto L_80800094; break;
        case 4: goto L_80800064; break;
        case 5: goto L_80800074; break;
        case 6: goto L_80800094; break;
        case 7: goto L_80800084; break;
        default: switch_error(__func__, 0x8080002C, 0x80801000);
    }
    // 0x80800030: nop

L_80800034:
    // 0x80800034: jal         0x800A586C
    // 0x80800038: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x80800038: nop

    after_1:
    // 0x8080003C: b           L_8080009C
    // 0x80800040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080009C;
    // 0x80800040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800044:
    // 0x80800044: jal         0x800A586C
    // 0x80800048: nop

    func_800A586C(rdram, ctx);
        goto after_2;
    // 0x80800048: nop

    after_2:
    // 0x8080004C: b           L_8080009C
    // 0x80800050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080009C;
    // 0x80800050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800054:
    // 0x80800054: jal         0x800A586C
    // 0x80800058: nop

    func_800A586C(rdram, ctx);
        goto after_3;
    // 0x80800058: nop

    after_3:
    // 0x8080005C: b           L_8080009C
    // 0x80800060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080009C;
    // 0x80800060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800064:
    // 0x80800064: jal         0x800A586C
    // 0x80800068: nop

    func_800A586C(rdram, ctx);
        goto after_4;
    // 0x80800068: nop

    after_4:
    // 0x8080006C: b           L_8080009C
    // 0x80800070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080009C;
    // 0x80800070: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800074:
    // 0x80800074: jal         0x800A586C
    // 0x80800078: nop

    func_800A586C(rdram, ctx);
        goto after_5;
    // 0x80800078: nop

    after_5:
    // 0x8080007C: b           L_8080009C
    // 0x80800080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080009C;
    // 0x80800080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800084:
    // 0x80800084: jal         0x800A586C
    // 0x80800088: nop

    func_800A586C(rdram, ctx);
        goto after_6;
    // 0x80800088: nop

    after_6:
    // 0x8080008C: b           L_8080009C
    // 0x80800090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080009C;
    // 0x80800090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800094:
    // 0x80800094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080009C:
    // 0x8080009C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000A0: jr          $ra
    // 0x808000A4: nop

    return;
    // 0x808000A4: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000B0: jal         0x80000000
    // 0x808000B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800000_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x808000B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000B8: bne         $v0, $zero, L_808000C8
    if (ctx->r2 != 0) {
        // 0x808000BC: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_808000C8;
    }
    // 0x808000BC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808000C0: b           L_808000D4
    // 0x808000C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808000D4;
    // 0x808000C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808000C8:
    // 0x808000C8: jal         0x800EE7F8
    // 0x808000CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x808000CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808000D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808000D4:
    // 0x808000D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000DC: jr          $ra
    // 0x808000E0: nop

    return;
    // 0x808000E0: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000EC: jal         0x80000000
    // 0x808000F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800000_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x808000F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000F4: bne         $v0, $zero, L_80800104
    if (ctx->r2 != 0) {
        // 0x808000F8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800104;
    }
    // 0x808000F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808000FC: b           L_80800110
    // 0x80800100: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800110;
    // 0x80800100: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800104:
    // 0x80800104: jal         0x800EE7F8
    // 0x80800108: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80800108: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080010C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800110:
    // 0x80800110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800118: jr          $ra
    // 0x8080011C: nop

    return;
    // 0x8080011C: nop

;}
RECOMP_FUNC void func_80800120_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800128: jal         0x800A587C
    // 0x8080012C: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x8080012C: nop

    after_0:
    // 0x80800130: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800134: beq         $v0, $at, L_8080015C
    if (ctx->r2 == ctx->r1) {
        // 0x80800138: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_8080015C;
    }
    // 0x80800138: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8080013C: beq         $v0, $at, L_8080016C
    if (ctx->r2 == ctx->r1) {
        // 0x80800140: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8080016C;
    }
    // 0x80800140: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80800144: beq         $v0, $at, L_8080017C
    if (ctx->r2 == ctx->r1) {
        // 0x80800148: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8080017C;
    }
    // 0x80800148: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8080014C: beq         $v0, $at, L_8080018C
    if (ctx->r2 == ctx->r1) {
        // 0x80800150: nop
    
            goto L_8080018C;
    }
    // 0x80800150: nop

    // 0x80800154: b           L_8080019C
    // 0x80800158: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080019C;
    // 0x80800158: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080015C:
    // 0x8080015C: jal         0x800A586C
    // 0x80800160: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x80800160: nop

    after_1:
    // 0x80800164: b           L_8080019C
    // 0x80800168: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
        goto L_8080019C;
    // 0x80800168: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
L_8080016C:
    // 0x8080016C: jal         0x800A586C
    // 0x80800170: nop

    func_800A586C(rdram, ctx);
        goto after_2;
    // 0x80800170: nop

    after_2:
    // 0x80800174: b           L_8080019C
    // 0x80800178: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
        goto L_8080019C;
    // 0x80800178: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
L_8080017C:
    // 0x8080017C: jal         0x800A586C
    // 0x80800180: nop

    func_800A586C(rdram, ctx);
        goto after_3;
    // 0x80800180: nop

    after_3:
    // 0x80800184: b           L_8080019C
    // 0x80800188: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
        goto L_8080019C;
    // 0x80800188: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
L_8080018C:
    // 0x8080018C: jal         0x800A586C
    // 0x80800190: nop

    func_800A586C(rdram, ctx);
        goto after_4;
    // 0x80800190: nop

    after_4:
    // 0x80800194: b           L_8080019C
    // 0x80800198: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
        goto L_8080019C;
    // 0x80800198: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
L_8080019C:
    // 0x8080019C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001A4: jr          $ra
    // 0x808001A8: nop

    return;
    // 0x808001A8: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001B4: jal         0x80000120
    // 0x808001B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800120_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x808001B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001BC: bne         $v0, $zero, L_808001CC
    if (ctx->r2 != 0) {
        // 0x808001C0: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_808001CC;
    }
    // 0x808001C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808001C4: b           L_808001D8
    // 0x808001C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808001D8;
    // 0x808001C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808001CC:
    // 0x808001CC: jal         0x800EE7F8
    // 0x808001D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x808001D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808001D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808001D8:
    // 0x808001D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001E0: jr          $ra
    // 0x808001E4: nop

    return;
    // 0x808001E4: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001F0: jal         0x80000120
    // 0x808001F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800120_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x808001F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001F8: bne         $v0, $zero, L_80800208
    if (ctx->r2 != 0) {
        // 0x808001FC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800208;
    }
    // 0x808001FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800200: b           L_80800214
    // 0x80800204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800214;
    // 0x80800204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800208:
    // 0x80800208: jal         0x800EE7F8
    // 0x8080020C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x8080020C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800210: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800214:
    // 0x80800214: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800218: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080021C: jr          $ra
    // 0x80800220: nop

    return;
    // 0x80800220: nop

;}
RECOMP_FUNC void func_80800224_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800224: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800228: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080022C: jal         0x800A587C
    // 0x80800230: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x80800230: nop

    after_0:
    // 0x80800234: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800238: beq         $v0, $at, L_80800250
    if (ctx->r2 == ctx->r1) {
        // 0x8080023C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800250;
    }
    // 0x8080023C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800240: beq         $v0, $at, L_80800260
    if (ctx->r2 == ctx->r1) {
        // 0x80800244: nop
    
            goto L_80800260;
    }
    // 0x80800244: nop

    // 0x80800248: b           L_80800270
    // 0x8080024C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800270;
    // 0x8080024C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800250:
    // 0x80800250: jal         0x800A586C
    // 0x80800254: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x80800254: nop

    after_1:
    // 0x80800258: b           L_80800270
    // 0x8080025C: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
        goto L_80800270;
    // 0x8080025C: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
L_80800260:
    // 0x80800260: jal         0x800A586C
    // 0x80800264: nop

    func_800A586C(rdram, ctx);
        goto after_2;
    // 0x80800264: nop

    after_2:
    // 0x80800268: b           L_80800270
    // 0x8080026C: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
        goto L_80800270;
    // 0x8080026C: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
L_80800270:
    // 0x80800270: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800274: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800278: jr          $ra
    // 0x8080027C: nop

    return;
    // 0x8080027C: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800280: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800284: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800288: jal         0x80000224
    // 0x8080028C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800224_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x8080028C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800290: bne         $v0, $zero, L_808002A0
    if (ctx->r2 != 0) {
        // 0x80800294: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_808002A0;
    }
    // 0x80800294: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800298: b           L_808002AC
    // 0x8080029C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808002AC;
    // 0x8080029C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808002A0:
    // 0x808002A0: jal         0x800EE7F8
    // 0x808002A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x808002A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808002A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808002AC:
    // 0x808002AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002B4: jr          $ra
    // 0x808002B8: nop

    return;
    // 0x808002B8: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002C4: jal         0x80000224
    // 0x808002C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800224_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x808002C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808002CC: bne         $v0, $zero, L_808002DC
    if (ctx->r2 != 0) {
        // 0x808002D0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_808002DC;
    }
    // 0x808002D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808002D4: b           L_808002E8
    // 0x808002D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808002E8;
    // 0x808002D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808002DC:
    // 0x808002DC: jal         0x800EE7F8
    // 0x808002E0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x808002E0: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808002E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808002E8:
    // 0x808002E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002F0: jr          $ra
    // 0x808002F4: nop

    return;
    // 0x808002F4: nop

;}
RECOMP_FUNC void func_808002F8_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800300: jal         0x800A587C
    // 0x80800304: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x80800304: nop

    after_0:
    // 0x80800308: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080030C: beq         $v0, $at, L_80800324
    if (ctx->r2 == ctx->r1) {
        // 0x80800310: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800324;
    }
    // 0x80800310: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800314: beq         $v0, $at, L_80800334
    if (ctx->r2 == ctx->r1) {
        // 0x80800318: nop
    
            goto L_80800334;
    }
    // 0x80800318: nop

    // 0x8080031C: b           L_80800344
    // 0x80800320: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800344;
    // 0x80800320: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800324:
    // 0x80800324: jal         0x800A586C
    // 0x80800328: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x80800328: nop

    after_1:
    // 0x8080032C: b           L_80800344
    // 0x80800330: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
        goto L_80800344;
    // 0x80800330: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
L_80800334:
    // 0x80800334: jal         0x800A586C
    // 0x80800338: nop

    func_800A586C(rdram, ctx);
        goto after_2;
    // 0x80800338: nop

    after_2:
    // 0x8080033C: b           L_80800344
    // 0x80800340: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
        goto L_80800344;
    // 0x80800340: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
L_80800344:
    // 0x80800344: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800348: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080034C: jr          $ra
    // 0x80800350: nop

    return;
    // 0x80800350: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800354: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080035C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800360: jal         0x800002F8
    // 0x80800364: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_808002F8_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800364: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800368: bne         $v0, $zero, L_80800378
    if (ctx->r2 != 0) {
        // 0x8080036C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800378;
    }
    // 0x8080036C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800370: b           L_80800394
    // 0x80800374: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800394;
    // 0x80800374: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800378:
    // 0x80800378: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x8080037C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800380: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800384: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x80800388: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8080038C: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80800390: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
L_80800394:
    // 0x80800394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800398: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080039C: jr          $ra
    // 0x808003A0: nop

    return;
    // 0x808003A0: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003AC: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x808003B0: jal         0x800002F8
    // 0x808003B4: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    func_808002F8_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x808003B4: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x808003B8: bne         $v0, $zero, L_808003C8
    if (ctx->r2 != 0) {
        // 0x808003BC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_808003C8;
    }
    // 0x808003BC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x808003C0: b           L_808003DC
    // 0x808003C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808003DC;
    // 0x808003C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808003C8:
    // 0x808003C8: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x808003CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808003D0: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x808003D4: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x808003D8: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
L_808003DC:
    // 0x808003DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003E4: jr          $ra
    // 0x808003E8: nop

    return;
    // 0x808003E8: nop

;}
RECOMP_FUNC void func_808003EC_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003F4: jal         0x800A587C
    // 0x808003F8: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x808003F8: nop

    after_0:
    // 0x808003FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800400: beq         $v0, $at, L_80800418
    if (ctx->r2 == ctx->r1) {
        // 0x80800404: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800418;
    }
    // 0x80800404: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800408: beq         $v0, $at, L_80800428
    if (ctx->r2 == ctx->r1) {
        // 0x8080040C: nop
    
            goto L_80800428;
    }
    // 0x8080040C: nop

    // 0x80800410: b           L_80800438
    // 0x80800414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800438;
    // 0x80800414: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800418:
    // 0x80800418: jal         0x800A586C
    // 0x8080041C: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x8080041C: nop

    after_1:
    // 0x80800420: b           L_80800438
    // 0x80800424: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
        goto L_80800438;
    // 0x80800424: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
L_80800428:
    // 0x80800428: jal         0x800A586C
    // 0x8080042C: nop

    func_800A586C(rdram, ctx);
        goto after_2;
    // 0x8080042C: nop

    after_2:
    // 0x80800430: b           L_80800438
    // 0x80800434: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
        goto L_80800438;
    // 0x80800434: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
L_80800438:
    // 0x80800438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080043C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800440: jr          $ra
    // 0x80800444: nop

    return;
    // 0x80800444: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800448: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080044C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800450: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800454: jal         0x800003EC
    // 0x80800458: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_808003EC_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800458: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8080045C: bne         $v0, $zero, L_8080046C
    if (ctx->r2 != 0) {
        // 0x80800460: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8080046C;
    }
    // 0x80800460: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800464: b           L_80800488
    // 0x80800468: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800488;
    // 0x80800468: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080046C:
    // 0x8080046C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80800470: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800474: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800478: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    // 0x8080047C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80800480: lwc1        $f6, 0x4($v1)
    ctx->f6.u32l = MEM_W(ctx->r3, 0X4);
    // 0x80800484: swc1        $f6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f6.u32l;
L_80800488:
    // 0x80800488: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080048C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800490: jr          $ra
    // 0x80800494: nop

    return;
    // 0x80800494: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800498: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080049C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004A0: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    // 0x808004A4: jal         0x800003EC
    // 0x808004A8: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    func_808003EC_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x808004A8: swc1        $f14, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f14.u32l;
    after_0:
    // 0x808004AC: bne         $v0, $zero, L_808004BC
    if (ctx->r2 != 0) {
        // 0x808004B0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_808004BC;
    }
    // 0x808004B0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x808004B4: b           L_808004D0
    // 0x808004B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808004D0;
    // 0x808004B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808004BC:
    // 0x808004BC: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x808004C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808004C4: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
    // 0x808004C8: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x808004CC: swc1        $f6, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->f6.u32l;
L_808004D0:
    // 0x808004D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004D8: jr          $ra
    // 0x808004DC: nop

    return;
    // 0x808004DC: nop

;}
RECOMP_FUNC void func_808004E0_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004E8: jal         0x800A587C
    // 0x808004EC: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x808004EC: nop

    after_0:
    // 0x808004F0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x808004F4: beq         $v0, $at, L_8080050C
    if (ctx->r2 == ctx->r1) {
        // 0x808004F8: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_8080050C;
    }
    // 0x808004F8: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x808004FC: beq         $v0, $at, L_8080051C
    if (ctx->r2 == ctx->r1) {
        // 0x80800500: nop
    
            goto L_8080051C;
    }
    // 0x80800500: nop

    // 0x80800504: b           L_8080052C
    // 0x80800508: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080052C;
    // 0x80800508: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080050C:
    // 0x8080050C: jal         0x800A586C
    // 0x80800510: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x80800510: nop

    after_1:
    // 0x80800514: b           L_8080052C
    // 0x80800518: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
        goto L_8080052C;
    // 0x80800518: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
L_8080051C:
    // 0x8080051C: jal         0x800A586C
    // 0x80800520: nop

    func_800A586C(rdram, ctx);
        goto after_2;
    // 0x80800520: nop

    after_2:
    // 0x80800524: b           L_8080052C
    // 0x80800528: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
        goto L_8080052C;
    // 0x80800528: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
L_8080052C:
    // 0x8080052C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800530: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800534: jr          $ra
    // 0x80800538: nop

    return;
    // 0x80800538: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080053C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800540: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800544: jal         0x800004E0
    // 0x80800548: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808004E0_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800548: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080054C: bne         $v0, $zero, L_8080055C
    if (ctx->r2 != 0) {
        // 0x80800550: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8080055C;
    }
    // 0x80800550: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800554: b           L_8080056C
    // 0x80800558: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080056C;
    // 0x80800558: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080055C:
    // 0x8080055C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80800560: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800564: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800568: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_8080056C:
    // 0x8080056C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800570: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800574: jr          $ra
    // 0x80800578: nop

    return;
    // 0x80800578: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080057C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800584: jal         0x800004E0
    // 0x80800588: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_808004E0_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800588: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8080058C: bne         $v0, $zero, L_8080059C
    if (ctx->r2 != 0) {
        // 0x80800590: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8080059C;
    }
    // 0x80800590: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800594: b           L_808005A8
    // 0x80800598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808005A8;
    // 0x80800598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080059C:
    // 0x8080059C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x808005A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808005A4: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
L_808005A8:
    // 0x808005A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005B0: jr          $ra
    // 0x808005B4: nop

    return;
    // 0x808005B4: nop

;}
RECOMP_FUNC void func_808005B8_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005C0: jal         0x800A587C
    // 0x808005C4: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x808005C4: nop

    after_0:
    // 0x808005C8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x808005CC: beq         $v0, $at, L_808005EC
    if (ctx->r2 == ctx->r1) {
        // 0x808005D0: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_808005EC;
    }
    // 0x808005D0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x808005D4: beq         $v0, $at, L_808005FC
    if (ctx->r2 == ctx->r1) {
        // 0x808005D8: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_808005FC;
    }
    // 0x808005D8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x808005DC: beq         $v0, $at, L_8080060C
    if (ctx->r2 == ctx->r1) {
        // 0x808005E0: nop
    
            goto L_8080060C;
    }
    // 0x808005E0: nop

    // 0x808005E4: b           L_8080061C
    // 0x808005E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080061C;
    // 0x808005E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808005EC:
    // 0x808005EC: jal         0x800A586C
    // 0x808005F0: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x808005F0: nop

    after_1:
    // 0x808005F4: b           L_8080061C
    // 0x808005F8: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
        goto L_8080061C;
    // 0x808005F8: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
L_808005FC:
    // 0x808005FC: jal         0x800A586C
    // 0x80800600: nop

    func_800A586C(rdram, ctx);
        goto after_2;
    // 0x80800600: nop

    after_2:
    // 0x80800604: b           L_8080061C
    // 0x80800608: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
        goto L_8080061C;
    // 0x80800608: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_8080060C:
    // 0x8080060C: jal         0x800A586C
    // 0x80800610: nop

    func_800A586C(rdram, ctx);
        goto after_3;
    // 0x80800610: nop

    after_3:
    // 0x80800614: b           L_8080061C
    // 0x80800618: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
        goto L_8080061C;
    // 0x80800618: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
L_8080061C:
    // 0x8080061C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800620: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800624: jr          $ra
    // 0x80800628: nop

    return;
    // 0x80800628: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080062C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800634: jal         0x800005B8
    // 0x80800638: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808005B8_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800638: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080063C: bne         $v0, $zero, L_8080064C
    if (ctx->r2 != 0) {
        // 0x80800640: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8080064C;
    }
    // 0x80800640: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800644: b           L_8080065C
    // 0x80800648: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080065C;
    // 0x80800648: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080064C:
    // 0x8080064C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80800650: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800654: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800658: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_8080065C:
    // 0x8080065C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800660: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800664: jr          $ra
    // 0x80800668: nop

    return;
    // 0x80800668: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080066C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800670: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800674: jal         0x800005B8
    // 0x80800678: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_808005B8_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800678: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8080067C: bne         $v0, $zero, L_8080068C
    if (ctx->r2 != 0) {
        // 0x80800680: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8080068C;
    }
    // 0x80800680: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800684: b           L_80800698
    // 0x80800688: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800698;
    // 0x80800688: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080068C:
    // 0x8080068C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80800690: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800694: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
L_80800698:
    // 0x80800698: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080069C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006A0: jr          $ra
    // 0x808006A4: nop

    return;
    // 0x808006A4: nop

;}
RECOMP_FUNC void func_808006A8_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808006AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006B0: jal         0x800A587C
    // 0x808006B4: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x808006B4: nop

    after_0:
    // 0x808006B8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x808006BC: beq         $v0, $at, L_808006DC
    if (ctx->r2 == ctx->r1) {
        // 0x808006C0: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_808006DC;
    }
    // 0x808006C0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x808006C4: beq         $v0, $at, L_808006EC
    if (ctx->r2 == ctx->r1) {
        // 0x808006C8: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_808006EC;
    }
    // 0x808006C8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x808006CC: beq         $v0, $at, L_808006FC
    if (ctx->r2 == ctx->r1) {
        // 0x808006D0: nop
    
            goto L_808006FC;
    }
    // 0x808006D0: nop

    // 0x808006D4: b           L_8080070C
    // 0x808006D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080070C;
    // 0x808006D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808006DC:
    // 0x808006DC: jal         0x800A586C
    // 0x808006E0: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x808006E0: nop

    after_1:
    // 0x808006E4: b           L_8080070C
    // 0x808006E8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
        goto L_8080070C;
    // 0x808006E8: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_808006EC:
    // 0x808006EC: jal         0x800A586C
    // 0x808006F0: nop

    func_800A586C(rdram, ctx);
        goto after_2;
    // 0x808006F0: nop

    after_2:
    // 0x808006F4: b           L_8080070C
    // 0x808006F8: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
        goto L_8080070C;
    // 0x808006F8: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
L_808006FC:
    // 0x808006FC: jal         0x800A586C
    // 0x80800700: nop

    func_800A586C(rdram, ctx);
        goto after_3;
    // 0x80800700: nop

    after_3:
    // 0x80800704: b           L_8080070C
    // 0x80800708: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
        goto L_8080070C;
    // 0x80800708: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
L_8080070C:
    // 0x8080070C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800710: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800714: jr          $ra
    // 0x80800718: nop

    return;
    // 0x80800718: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080071C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800724: jal         0x800006A8
    // 0x80800728: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808006A8_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800728: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080072C: bne         $v0, $zero, L_8080073C
    if (ctx->r2 != 0) {
        // 0x80800730: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8080073C;
    }
    // 0x80800730: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800734: b           L_8080074C
    // 0x80800738: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080074C;
    // 0x80800738: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080073C:
    // 0x8080073C: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80800740: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800744: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800748: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_8080074C:
    // 0x8080074C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800750: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800754: jr          $ra
    // 0x80800758: nop

    return;
    // 0x80800758: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080075C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800764: jal         0x800006A8
    // 0x80800768: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_808006A8_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800768: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8080076C: bne         $v0, $zero, L_8080077C
    if (ctx->r2 != 0) {
        // 0x80800770: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8080077C;
    }
    // 0x80800770: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800774: b           L_80800788
    // 0x80800778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800788;
    // 0x80800778: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080077C:
    // 0x8080077C: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80800780: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800784: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
L_80800788:
    // 0x80800788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080078C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800790: jr          $ra
    // 0x80800794: nop

    return;
    // 0x80800794: nop

;}
RECOMP_FUNC void func_80800798_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800798: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080079C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007A0: jal         0x800A587C
    // 0x808007A4: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x808007A4: nop

    after_0:
    // 0x808007A8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x808007AC: beq         $v0, $at, L_808007CC
    if (ctx->r2 == ctx->r1) {
        // 0x808007B0: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_808007CC;
    }
    // 0x808007B0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x808007B4: beq         $v0, $at, L_808007DC
    if (ctx->r2 == ctx->r1) {
        // 0x808007B8: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_808007DC;
    }
    // 0x808007B8: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x808007BC: beq         $v0, $at, L_808007EC
    if (ctx->r2 == ctx->r1) {
        // 0x808007C0: nop
    
            goto L_808007EC;
    }
    // 0x808007C0: nop

    // 0x808007C4: b           L_808007FC
    // 0x808007C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808007FC;
    // 0x808007C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808007CC:
    // 0x808007CC: jal         0x800A586C
    // 0x808007D0: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x808007D0: nop

    after_1:
    // 0x808007D4: b           L_808007FC
    // 0x808007D8: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
        goto L_808007FC;
    // 0x808007D8: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
L_808007DC:
    // 0x808007DC: jal         0x800A586C
    // 0x808007E0: nop

    func_800A586C(rdram, ctx);
        goto after_2;
    // 0x808007E0: nop

    after_2:
    // 0x808007E4: b           L_808007FC
    // 0x808007E8: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
        goto L_808007FC;
    // 0x808007E8: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
L_808007EC:
    // 0x808007EC: jal         0x800A586C
    // 0x808007F0: nop

    func_800A586C(rdram, ctx);
        goto after_3;
    // 0x808007F0: nop

    after_3:
    // 0x808007F4: b           L_808007FC
    // 0x808007F8: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
        goto L_808007FC;
    // 0x808007F8: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
L_808007FC:
    // 0x808007FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800800: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800804: jr          $ra
    // 0x80800808: nop

    return;
    // 0x80800808: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080080C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800814: jal         0x80000798
    // 0x80800818: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800798_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800818: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080081C: bne         $v0, $zero, L_8080082C
    if (ctx->r2 != 0) {
        // 0x80800820: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8080082C;
    }
    // 0x80800820: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800824: b           L_8080083C
    // 0x80800828: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080083C;
    // 0x80800828: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080082C:
    // 0x8080082C: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x80800830: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800834: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800838: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
L_8080083C:
    // 0x8080083C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800844: jr          $ra
    // 0x80800848: nop

    return;
    // 0x80800848: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080084C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800850: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800854: jal         0x80000798
    // 0x80800858: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800798_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800858: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080085C: bne         $v0, $zero, L_8080086C
    if (ctx->r2 != 0) {
        // 0x80800860: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8080086C;
    }
    // 0x80800860: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800864: b           L_80800878
    // 0x80800868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800878;
    // 0x80800868: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080086C:
    // 0x8080086C: lh          $t6, 0x1A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X1A);
    // 0x80800870: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800874: sh          $t6, 0x0($v1)
    MEM_H(0X0, ctx->r3) = ctx->r14;
L_80800878:
    // 0x80800878: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080087C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800880: jr          $ra
    // 0x80800884: nop

    return;
    // 0x80800884: nop

;}
RECOMP_FUNC void func_80800888_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800888: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080088C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800890: jal         0x800A587C
    // 0x80800894: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x80800894: nop

    after_0:
    // 0x80800898: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8080089C: beq         $v0, $at, L_808008B4
    if (ctx->r2 == ctx->r1) {
        // 0x808008A0: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_808008B4;
    }
    // 0x808008A0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x808008A4: beq         $v0, $at, L_808008C4
    if (ctx->r2 == ctx->r1) {
        // 0x808008A8: nop
    
            goto L_808008C4;
    }
    // 0x808008A8: nop

    // 0x808008AC: b           L_808008D4
    // 0x808008B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808008D4;
    // 0x808008B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808008B4:
    // 0x808008B4: jal         0x800A586C
    // 0x808008B8: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x808008B8: nop

    after_1:
    // 0x808008BC: b           L_808008D4
    // 0x808008C0: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
        goto L_808008D4;
    // 0x808008C0: addiu       $v0, $v0, 0x1C
    ctx->r2 = ADD32(ctx->r2, 0X1C);
L_808008C4:
    // 0x808008C4: jal         0x800A586C
    // 0x808008C8: nop

    func_800A586C(rdram, ctx);
        goto after_2;
    // 0x808008C8: nop

    after_2:
    // 0x808008CC: b           L_808008D4
    // 0x808008D0: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
        goto L_808008D4;
    // 0x808008D0: addiu       $v0, $v0, 0x18
    ctx->r2 = ADD32(ctx->r2, 0X18);
L_808008D4:
    // 0x808008D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008DC: jr          $ra
    // 0x808008E0: nop

    return;
    // 0x808008E0: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008EC: jal         0x80000888
    // 0x808008F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800888_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x808008F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808008F4: bne         $v0, $zero, L_80800904
    if (ctx->r2 != 0) {
        // 0x808008F8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800904;
    }
    // 0x808008F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x808008FC: b           L_80800914
    // 0x80800900: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800914;
    // 0x80800900: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800904:
    // 0x80800904: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80800908: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8080090C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800910: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_80800914:
    // 0x80800914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080091C: jr          $ra
    // 0x80800920: nop

    return;
    // 0x80800920: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080092C: jal         0x80000888
    // 0x80800930: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_80800888_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800930: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80800934: bne         $v0, $zero, L_80800944
    if (ctx->r2 != 0) {
        // 0x80800938: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800944;
    }
    // 0x80800938: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8080093C: b           L_80800950
    // 0x80800940: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800950;
    // 0x80800940: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800944:
    // 0x80800944: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80800948: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8080094C: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
L_80800950:
    // 0x80800950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800954: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800958: jr          $ra
    // 0x8080095C: nop

    return;
    // 0x8080095C: nop

;}
RECOMP_FUNC void func_80800960_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800960: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800964: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800968: jal         0x800A587C
    // 0x8080096C: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x8080096C: nop

    after_0:
    // 0x80800970: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800974: bnel        $v0, $at, L_80800990
    if (ctx->r2 != ctx->r1) {
        // 0x80800978: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80800990;
    }
    goto skip_0;
    // 0x80800978: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8080097C: jal         0x800A586C
    // 0x80800980: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x80800980: nop

    after_1:
    // 0x80800984: b           L_80800990
    // 0x80800988: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
        goto L_80800990;
    // 0x80800988: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x8080098C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800990:
    // 0x80800990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800994: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800998: jr          $ra
    // 0x8080099C: nop

    return;
    // 0x8080099C: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009A8: jal         0x80000960
    // 0x808009AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800960_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x808009AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808009B0: bne         $v0, $zero, L_808009C0
    if (ctx->r2 != 0) {
        // 0x808009B4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_808009C0;
    }
    // 0x808009B4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x808009B8: b           L_808009D0
    // 0x808009BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808009D0;
    // 0x808009BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808009C0:
    // 0x808009C0: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x808009C4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x808009C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808009CC: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_808009D0:
    // 0x808009D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808009D8: jr          $ra
    // 0x808009DC: nop

    return;
    // 0x808009DC: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009E8: jal         0x80000960
    // 0x808009EC: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_80800960_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x808009EC: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x808009F0: bne         $v0, $zero, L_80800A00
    if (ctx->r2 != 0) {
        // 0x808009F4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800A00;
    }
    // 0x808009F4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x808009F8: b           L_80800A0C
    // 0x808009FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800A0C;
    // 0x808009FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800A00:
    // 0x80800A00: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80800A04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800A08: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
L_80800A0C:
    // 0x80800A0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A14: jr          $ra
    // 0x80800A18: nop

    return;
    // 0x80800A18: nop

;}
RECOMP_FUNC void func_80800A1C_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A24: jal         0x800A587C
    // 0x80800A28: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x80800A28: nop

    after_0:
    // 0x80800A2C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800A30: bnel        $v0, $at, L_80800A4C
    if (ctx->r2 != ctx->r1) {
        // 0x80800A34: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80800A4C;
    }
    goto skip_0;
    // 0x80800A34: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80800A38: jal         0x800A586C
    // 0x80800A3C: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x80800A3C: nop

    after_1:
    // 0x80800A40: b           L_80800A50
    // 0x80800A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800A50;
    // 0x80800A44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800A4C:
    // 0x80800A4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800A50:
    // 0x80800A50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A54: jr          $ra
    // 0x80800A58: nop

    return;
    // 0x80800A58: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A64: jal         0x80000A1C
    // 0x80800A68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800A1C_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800A68: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A6C: bne         $v0, $zero, L_80800A7C
    if (ctx->r2 != 0) {
        // 0x80800A70: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800A7C;
    }
    // 0x80800A70: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800A74: b           L_80800A8C
    // 0x80800A78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800A8C;
    // 0x80800A78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800A7C:
    // 0x80800A7C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80800A80: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800A84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800A88: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_80800A8C:
    // 0x80800A8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A94: jr          $ra
    // 0x80800A98: nop

    return;
    // 0x80800A98: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800AA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AA4: jal         0x80000A1C
    // 0x80800AA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800A1C_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800AA8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800AAC: bne         $v0, $zero, L_80800ABC
    if (ctx->r2 != 0) {
        // 0x80800AB0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800ABC;
    }
    // 0x80800AB0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800AB4: b           L_80800AC8
    // 0x80800AB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800AC8;
    // 0x80800AB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800ABC:
    // 0x80800ABC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800AC0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800AC4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_80800AC8:
    // 0x80800AC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800ACC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800AD0: jr          $ra
    // 0x80800AD4: nop

    return;
    // 0x80800AD4: nop

;}
RECOMP_FUNC void func_80800AD8_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800ADC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AE0: jal         0x800A587C
    // 0x80800AE4: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x80800AE4: nop

    after_0:
    // 0x80800AE8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800AEC: beq         $v0, $at, L_80800B14
    if (ctx->r2 == ctx->r1) {
        // 0x80800AF0: addiu       $at, $zero, 0x6
        ctx->r1 = ADD32(0, 0X6);
            goto L_80800B14;
    }
    // 0x80800AF0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80800AF4: beq         $v0, $at, L_80800B24
    if (ctx->r2 == ctx->r1) {
        // 0x80800AF8: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_80800B24;
    }
    // 0x80800AF8: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80800AFC: beq         $v0, $at, L_80800B34
    if (ctx->r2 == ctx->r1) {
        // 0x80800B00: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80800B34;
    }
    // 0x80800B00: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80800B04: beq         $v0, $at, L_80800B44
    if (ctx->r2 == ctx->r1) {
        // 0x80800B08: nop
    
            goto L_80800B44;
    }
    // 0x80800B08: nop

    // 0x80800B0C: b           L_80800B54
    // 0x80800B10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800B54;
    // 0x80800B10: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800B14:
    // 0x80800B14: jal         0x800A586C
    // 0x80800B18: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x80800B18: nop

    after_1:
    // 0x80800B1C: b           L_80800B54
    // 0x80800B20: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
        goto L_80800B54;
    // 0x80800B20: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_80800B24:
    // 0x80800B24: jal         0x800A586C
    // 0x80800B28: nop

    func_800A586C(rdram, ctx);
        goto after_2;
    // 0x80800B28: nop

    after_2:
    // 0x80800B2C: b           L_80800B54
    // 0x80800B30: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
        goto L_80800B54;
    // 0x80800B30: addiu       $v0, $v0, 0x2C
    ctx->r2 = ADD32(ctx->r2, 0X2C);
L_80800B34:
    // 0x80800B34: jal         0x800A586C
    // 0x80800B38: nop

    func_800A586C(rdram, ctx);
        goto after_3;
    // 0x80800B38: nop

    after_3:
    // 0x80800B3C: b           L_80800B58
    // 0x80800B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800B58;
    // 0x80800B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800B44:
    // 0x80800B44: jal         0x800A586C
    // 0x80800B48: nop

    func_800A586C(rdram, ctx);
        goto after_4;
    // 0x80800B48: nop

    after_4:
    // 0x80800B4C: b           L_80800B54
    // 0x80800B50: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
        goto L_80800B54;
    // 0x80800B50: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
L_80800B54:
    // 0x80800B54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800B58:
    // 0x80800B58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B5C: jr          $ra
    // 0x80800B60: nop

    return;
    // 0x80800B60: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B6C: jal         0x80000AD8
    // 0x80800B70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800AD8_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800B70: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800B74: bne         $v0, $zero, L_80800B84
    if (ctx->r2 != 0) {
        // 0x80800B78: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800B84;
    }
    // 0x80800B78: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800B7C: b           L_80800B94
    // 0x80800B80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800B94;
    // 0x80800B80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800B84:
    // 0x80800B84: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80800B88: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800B8C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800B90: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_80800B94:
    // 0x80800B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B9C: jr          $ra
    // 0x80800BA0: nop

    return;
    // 0x80800BA0: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BAC: jal         0x80000AD8
    // 0x80800BB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800AD8_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800BB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800BB4: bne         $v0, $zero, L_80800BC4
    if (ctx->r2 != 0) {
        // 0x80800BB8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800BC4;
    }
    // 0x80800BB8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800BBC: b           L_80800BD0
    // 0x80800BC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800BD0;
    // 0x80800BC0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800BC4:
    // 0x80800BC4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800BC8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800BCC: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_80800BD0:
    // 0x80800BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800BD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800BD8: jr          $ra
    // 0x80800BDC: nop

    return;
    // 0x80800BDC: nop

;}
RECOMP_FUNC void func_80800BE0_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BE8: jal         0x800A587C
    // 0x80800BEC: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x80800BEC: nop

    after_0:
    // 0x80800BF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800BF4: bnel        $v0, $at, L_80800C10
    if (ctx->r2 != ctx->r1) {
        // 0x80800BF8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80800C10;
    }
    goto skip_0;
    // 0x80800BF8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80800BFC: jal         0x800A586C
    // 0x80800C00: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x80800C00: nop

    after_1:
    // 0x80800C04: b           L_80800C10
    // 0x80800C08: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
        goto L_80800C10;
    // 0x80800C08: addiu       $v0, $v0, 0xC
    ctx->r2 = ADD32(ctx->r2, 0XC);
    // 0x80800C0C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800C10:
    // 0x80800C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C18: jr          $ra
    // 0x80800C1C: nop

    return;
    // 0x80800C1C: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C28: jal         0x80000BE0
    // 0x80800C2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800BE0_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800C2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800C30: bne         $v0, $zero, L_80800C40
    if (ctx->r2 != 0) {
        // 0x80800C34: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800C40;
    }
    // 0x80800C34: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800C38: b           L_80800C50
    // 0x80800C3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800C50;
    // 0x80800C3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800C40:
    // 0x80800C40: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80800C44: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800C48: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800C4C: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_80800C50:
    // 0x80800C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C58: jr          $ra
    // 0x80800C5C: nop

    return;
    // 0x80800C5C: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C68: jal         0x80000BE0
    // 0x80800C6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800BE0_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800C6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800C70: bne         $v0, $zero, L_80800C80
    if (ctx->r2 != 0) {
        // 0x80800C74: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800C80;
    }
    // 0x80800C74: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800C78: b           L_80800C8C
    // 0x80800C7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800C8C;
    // 0x80800C7C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800C80:
    // 0x80800C80: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800C84: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800C88: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_80800C8C:
    // 0x80800C8C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C90: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C94: jr          $ra
    // 0x80800C98: nop

    return;
    // 0x80800C98: nop

;}
RECOMP_FUNC void func_80800C9C_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800CA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CA4: jal         0x800A587C
    // 0x80800CA8: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x80800CA8: nop

    after_0:
    // 0x80800CAC: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80800CB0: sltiu       $at, $t6, 0x8
    ctx->r1 = ctx->r14 < 0X8 ? 1 : 0;
    // 0x80800CB4: beq         $at, $zero, L_80800D30
    if (ctx->r1 == 0) {
        // 0x80800CB8: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80800D30;
    }
    // 0x80800CB8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800CBC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(167, 0X1020) << 16);
    // 0x80800CC0: addu        $at, $at, $t6
    gpr jr_addend_80800CC8 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800CC4: lw          $t6, 0x1020($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(167, 0X1020));
    // 0x80800CC8: jr          $t6
    // 0x80800CCC: nop

    switch (jr_addend_80800CC8 >> 2) {
        case 0: goto L_80800CF0; break;
        case 1: goto L_80800D30; break;
        case 2: goto L_80800CE0; break;
        case 3: goto L_80800CD0; break;
        case 4: goto L_80800D00; break;
        case 5: goto L_80800D10; break;
        case 6: goto L_80800D30; break;
        case 7: goto L_80800D20; break;
        default: switch_error(__func__, 0x80800CC8, 0x80801020);
    }
    // 0x80800CCC: nop

L_80800CD0:
    // 0x80800CD0: jal         0x800A586C
    // 0x80800CD4: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x80800CD4: nop

    after_1:
    // 0x80800CD8: b           L_80800D34
    // 0x80800CDC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
        goto L_80800D34;
    // 0x80800CDC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_80800CE0:
    // 0x80800CE0: jal         0x800A586C
    // 0x80800CE4: nop

    func_800A586C(rdram, ctx);
        goto after_2;
    // 0x80800CE4: nop

    after_2:
    // 0x80800CE8: b           L_80800D34
    // 0x80800CEC: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
        goto L_80800D34;
    // 0x80800CEC: addiu       $v0, $v0, 0x30
    ctx->r2 = ADD32(ctx->r2, 0X30);
L_80800CF0:
    // 0x80800CF0: jal         0x800A586C
    // 0x80800CF4: nop

    func_800A586C(rdram, ctx);
        goto after_3;
    // 0x80800CF4: nop

    after_3:
    // 0x80800CF8: b           L_80800D34
    // 0x80800CFC: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
        goto L_80800D34;
    // 0x80800CFC: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
L_80800D00:
    // 0x80800D00: jal         0x800A586C
    // 0x80800D04: nop

    func_800A586C(rdram, ctx);
        goto after_4;
    // 0x80800D04: nop

    after_4:
    // 0x80800D08: b           L_80800D34
    // 0x80800D0C: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
        goto L_80800D34;
    // 0x80800D0C: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
L_80800D10:
    // 0x80800D10: jal         0x800A586C
    // 0x80800D14: nop

    func_800A586C(rdram, ctx);
        goto after_5;
    // 0x80800D14: nop

    after_5:
    // 0x80800D18: b           L_80800D34
    // 0x80800D1C: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
        goto L_80800D34;
    // 0x80800D1C: addiu       $v0, $v0, 0x28
    ctx->r2 = ADD32(ctx->r2, 0X28);
L_80800D20:
    // 0x80800D20: jal         0x800A586C
    // 0x80800D24: nop

    func_800A586C(rdram, ctx);
        goto after_6;
    // 0x80800D24: nop

    after_6:
    // 0x80800D28: b           L_80800D34
    // 0x80800D2C: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
        goto L_80800D34;
    // 0x80800D2C: addiu       $v0, $v0, 0x24
    ctx->r2 = ADD32(ctx->r2, 0X24);
L_80800D30:
    // 0x80800D30: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800D34:
    // 0x80800D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D3C: jr          $ra
    // 0x80800D40: nop

    return;
    // 0x80800D40: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D4C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800D50: jal         0x80000C9C
    // 0x80800D54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800C9C_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800D54: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800D58: bne         $v0, $zero, L_80800D68
    if (ctx->r2 != 0) {
        // 0x80800D5C: lw          $v1, 0x18($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X18);
            goto L_80800D68;
    }
    // 0x80800D5C: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x80800D60: b           L_80800D98
    // 0x80800D64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800D98;
    // 0x80800D64: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800D68:
    // 0x80800D68: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80800D6C: beql        $t6, $zero, L_80800D88
    if (ctx->r14 == 0) {
        // 0x80800D70: lw          $t9, 0x0($v0)
        ctx->r25 = MEM_W(ctx->r2, 0X0);
            goto L_80800D88;
    }
    goto skip_0;
    // 0x80800D70: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    skip_0:
    // 0x80800D74: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x80800D78: or          $t8, $t7, $v1
    ctx->r24 = ctx->r15 | ctx->r3;
    // 0x80800D7C: b           L_80800D94
    // 0x80800D80: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
        goto L_80800D94;
    // 0x80800D80: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x80800D84: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
L_80800D88:
    // 0x80800D88: nor         $t0, $v1, $zero
    ctx->r8 = ~(ctx->r3 | 0);
    // 0x80800D8C: and         $t1, $t9, $t0
    ctx->r9 = ctx->r25 & ctx->r8;
    // 0x80800D90: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
L_80800D94:
    // 0x80800D94: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800D98:
    // 0x80800D98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800DA0: jr          $ra
    // 0x80800DA4: nop

    return;
    // 0x80800DA4: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800DAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800DB4: jal         0x80000C9C
    // 0x80800DB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800C9C_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800DB8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800DBC: bne         $v0, $zero, L_80800DCC
    if (ctx->r2 != 0) {
        // 0x80800DC0: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800DCC;
    }
    // 0x80800DC0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800DC4: b           L_80800DF4
    // 0x80800DC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800DF4;
    // 0x80800DC8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800DCC:
    // 0x80800DCC: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80800DD0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800DD4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80800DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800DDC: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x80800DE0: beql        $t8, $zero, L_80800DF4
    if (ctx->r24 == 0) {
        // 0x80800DE4: sw          $zero, 0x0($v1)
        MEM_W(0X0, ctx->r3) = 0;
            goto L_80800DF4;
    }
    goto skip_0;
    // 0x80800DE4: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
    skip_0:
    // 0x80800DE8: b           L_80800DF4
    // 0x80800DEC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
        goto L_80800DF4;
    // 0x80800DEC: sw          $t9, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r25;
    // 0x80800DF0: sw          $zero, 0x0($v1)
    MEM_W(0X0, ctx->r3) = 0;
L_80800DF4:
    // 0x80800DF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800DFC: jr          $ra
    // 0x80800E00: nop

    return;
    // 0x80800E00: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E0C: jal         0x80000C9C
    // 0x80800E10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800C9C_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800E10: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800E14: bne         $v0, $zero, L_80800E24
    if (ctx->r2 != 0) {
        // 0x80800E18: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800E24;
    }
    // 0x80800E18: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800E1C: b           L_80800E34
    // 0x80800E20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800E34;
    // 0x80800E20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800E24:
    // 0x80800E24: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80800E28: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800E2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800E30: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_80800E34:
    // 0x80800E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E3C: jr          $ra
    // 0x80800E40: nop

    return;
    // 0x80800E40: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E4C: jal         0x80000C9C
    // 0x80800E50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800C9C_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800E50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800E54: bne         $v0, $zero, L_80800E64
    if (ctx->r2 != 0) {
        // 0x80800E58: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800E64;
    }
    // 0x80800E58: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800E5C: b           L_80800E70
    // 0x80800E60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800E70;
    // 0x80800E60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800E64:
    // 0x80800E64: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800E68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800E6C: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_80800E70:
    // 0x80800E70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E74: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E78: jr          $ra
    // 0x80800E7C: nop

    return;
    // 0x80800E7C: nop

;}
RECOMP_FUNC void func_80800E80_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E88: jal         0x800A587C
    // 0x80800E8C: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x80800E8C: nop

    after_0:
    // 0x80800E90: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800E94: bnel        $v0, $at, L_80800EB0
    if (ctx->r2 != ctx->r1) {
        // 0x80800E98: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80800EB0;
    }
    goto skip_0;
    // 0x80800E98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80800E9C: jal         0x800A586C
    // 0x80800EA0: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x80800EA0: nop

    after_1:
    // 0x80800EA4: b           L_80800EB0
    // 0x80800EA8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
        goto L_80800EB0;
    // 0x80800EA8: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x80800EAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800EB0:
    // 0x80800EB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800EB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800EB8: jr          $ra
    // 0x80800EBC: nop

    return;
    // 0x80800EBC: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800EC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800EC8: jal         0x80000E80
    // 0x80800ECC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800E80_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800ECC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800ED0: bne         $v0, $zero, L_80800EE0
    if (ctx->r2 != 0) {
        // 0x80800ED4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800EE0;
    }
    // 0x80800ED4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800ED8: b           L_80800EF0
    // 0x80800EDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800EF0;
    // 0x80800EDC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800EE0:
    // 0x80800EE0: lwc1        $f4, 0x0($v1)
    ctx->f4.u32l = MEM_W(ctx->r3, 0X0);
    // 0x80800EE4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800EE8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800EEC: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
L_80800EF0:
    // 0x80800EF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800EF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800EF8: jr          $ra
    // 0x80800EFC: nop

    return;
    // 0x80800EFC: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F08: jal         0x80000E80
    // 0x80800F0C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_80800E80_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800F0C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80800F10: bne         $v0, $zero, L_80800F20
    if (ctx->r2 != 0) {
        // 0x80800F14: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800F20;
    }
    // 0x80800F14: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800F18: b           L_80800F2C
    // 0x80800F1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800F2C;
    // 0x80800F1C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800F20:
    // 0x80800F20: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80800F24: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800F28: swc1        $f4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f4.u32l;
L_80800F2C:
    // 0x80800F2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F34: jr          $ra
    // 0x80800F38: nop

    return;
    // 0x80800F38: nop

;}
RECOMP_FUNC void func_80800F3C_cadbfunc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F44: jal         0x800A587C
    // 0x80800F48: nop

    func_800A587C(rdram, ctx);
        goto after_0;
    // 0x80800F48: nop

    after_0:
    // 0x80800F4C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800F50: bnel        $v0, $at, L_80800F6C
    if (ctx->r2 != ctx->r1) {
        // 0x80800F54: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80800F6C;
    }
    goto skip_0;
    // 0x80800F54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80800F58: jal         0x800A586C
    // 0x80800F5C: nop

    func_800A586C(rdram, ctx);
        goto after_1;
    // 0x80800F5C: nop

    after_1:
    // 0x80800F60: b           L_80800F6C
    // 0x80800F64: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
        goto L_80800F6C;
    // 0x80800F64: addiu       $v0, $v0, 0x14
    ctx->r2 = ADD32(ctx->r2, 0X14);
    // 0x80800F68: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800F6C:
    // 0x80800F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F74: jr          $ra
    // 0x80800F78: nop

    return;
    // 0x80800F78: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F84: jal         0x80000F3C
    // 0x80800F88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800F3C_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800F88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800F8C: bne         $v0, $zero, L_80800F9C
    if (ctx->r2 != 0) {
        // 0x80800F90: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800F9C;
    }
    // 0x80800F90: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800F94: b           L_80800FAC
    // 0x80800F98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800FAC;
    // 0x80800F98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800F9C:
    // 0x80800F9C: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80800FA0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800FA4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800FA8: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
L_80800FAC:
    // 0x80800FAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800FB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800FB4: jr          $ra
    // 0x80800FB8: nop

    return;
    // 0x80800FB8: nop

;}
RECOMP_FUNC void cadbfunc_entrypoint_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800FC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800FC4: jal         0x80000F3C
    // 0x80800FC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800F3C_cadbfunc(rdram, ctx);
        goto after_0;
    // 0x80800FC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800FCC: bne         $v0, $zero, L_80800FDC
    if (ctx->r2 != 0) {
        // 0x80800FD0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800FDC;
    }
    // 0x80800FD0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800FD4: b           L_80800FE8
    // 0x80800FD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800FE8;
    // 0x80800FD8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800FDC:
    // 0x80800FDC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800FE0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800FE4: sw          $t6, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r14;
L_80800FE8:
    // 0x80800FE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800FEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800FF0: jr          $ra
    // 0x80800FF4: nop

    return;
    // 0x80800FF4: nop

    // 0x80800FF8: nop

    // 0x80800FFC: nop

;}
RECOMP_FUNC void func_80800000_cadbio(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8080000C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800010: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80800014: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80800018: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080001C: jal         0x800825C8
    // 0x80800020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _gsmaker_entrypoint_16(rdram, ctx);
        goto after_0;
    // 0x80800020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800024: bne         $v0, $zero, L_80800390
    if (ctx->r2 != 0) {
        // 0x80800028: addiu       $s3, $sp, 0x30
        ctx->r19 = ADD32(ctx->r29, 0X30);
            goto L_80800390;
    }
    // 0x80800028: addiu       $s3, $sp, 0x30
    ctx->r19 = ADD32(ctx->r29, 0X30);
    // 0x8080002C: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
    // 0x80800030: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
    // 0x80800034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800038:
    // 0x80800038: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080003C: jal         0x800825F0
    // 0x80800040: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    _gsmaker_entrypoint_21(rdram, ctx);
        goto after_1;
    // 0x80800040: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x80800044: bne         $v0, $zero, L_8080037C
    if (ctx->r2 != 0) {
        // 0x80800048: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080037C;
    }
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080004C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800050: jal         0x800825F0
    // 0x80800054: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    _gsmaker_entrypoint_21(rdram, ctx);
        goto after_2;
    // 0x80800054: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x80800058: beq         $v0, $zero, L_80800074
    if (ctx->r2 == 0) {
        // 0x8080005C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800074;
    }
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800060: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800064: jal         0x800A58A8
    // 0x80800068: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800A58A8(rdram, ctx);
        goto after_3;
    // 0x80800068: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x8080006C: b           L_80800380
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x80800070: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800074:
    // 0x80800074: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800078: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8080007C: jal         0x800825E8
    // 0x80800080: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    _gsmaker_entrypoint_20(rdram, ctx);
        goto after_4;
    // 0x80800080: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_4:
    // 0x80800084: beq         $v0, $zero, L_808000A4
    if (ctx->r2 == 0) {
        // 0x80800088: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000A4;
    }
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080008C: jal         0x80085588
    // 0x80800090: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _cadbfunc_entrypoint_1(rdram, ctx);
        goto after_5;
    // 0x80800090: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80800094: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x80800098: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_0;
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080009C: b           L_80800380
    // 0x808000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x808000A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808000A4:
    // 0x808000A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x808000A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x808000AC: jal         0x800825E8
    // 0x808000B0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    _gsmaker_entrypoint_20(rdram, ctx);
        goto after_6;
    // 0x808000B0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_6:
    // 0x808000B4: beq         $v0, $zero, L_808000D4
    if (ctx->r2 == 0) {
        // 0x808000B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000D4;
    }
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000BC: jal         0x80085598
    // 0x808000C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _cadbfunc_entrypoint_3(rdram, ctx);
        goto after_7;
    // 0x808000C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x808000C4: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x808000C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_1;
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808000CC: b           L_80800380
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808000D4:
    // 0x808000D4: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x808000D8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x808000DC: jal         0x800825E8
    // 0x808000E0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    _gsmaker_entrypoint_20(rdram, ctx);
        goto after_8;
    // 0x808000E0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_8:
    // 0x808000E4: beq         $v0, $zero, L_80800104
    if (ctx->r2 == 0) {
        // 0x808000E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800104;
    }
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000EC: jal         0x800855A8
    // 0x808000F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _cadbfunc_entrypoint_5(rdram, ctx);
        goto after_9;
    // 0x808000F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x808000F4: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x808000F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_2;
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808000FC: b           L_80800380
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800104:
    // 0x80800104: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80800108: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x8080010C: jal         0x800825E8
    // 0x80800110: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    _gsmaker_entrypoint_20(rdram, ctx);
        goto after_10;
    // 0x80800110: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_10:
    // 0x80800114: beq         $v0, $zero, L_80800138
    if (ctx->r2 == 0) {
        // 0x80800118: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800138;
    }
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080011C: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800120: jal         0x800855B8
    // 0x80800124: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    _cadbfunc_entrypoint_7(rdram, ctx);
        goto after_11;
    // 0x80800124: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    after_11:
    // 0x80800128: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x8080012C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_3;
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80800130: b           L_80800380
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800138:
    // 0x80800138: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x8080013C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80800140: jal         0x800825E8
    // 0x80800144: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    _gsmaker_entrypoint_20(rdram, ctx);
        goto after_12;
    // 0x80800144: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_12:
    // 0x80800148: beq         $v0, $zero, L_8080016C
    if (ctx->r2 == 0) {
        // 0x8080014C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080016C;
    }
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800150: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800154: jal         0x800855C8
    // 0x80800158: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    _cadbfunc_entrypoint_9(rdram, ctx);
        goto after_13;
    // 0x80800158: lwc1        $f14, 0x40($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X40);
    after_13:
    // 0x8080015C: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x80800160: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_4;
    // 0x80800160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x80800164: b           L_80800380
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080016C:
    // 0x8080016C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80800170: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80800174: jal         0x800825E8
    // 0x80800178: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    _gsmaker_entrypoint_20(rdram, ctx);
        goto after_14;
    // 0x80800178: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_14:
    // 0x8080017C: beq         $v0, $zero, L_8080019C
    if (ctx->r2 == 0) {
        // 0x80800180: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080019C;
    }
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800184: jal         0x800855D8
    // 0x80800188: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    _cadbfunc_entrypoint_11(rdram, ctx);
        goto after_15;
    // 0x80800188: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    after_15:
    // 0x8080018C: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x80800190: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_5;
    // 0x80800190: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_5:
    // 0x80800194: b           L_80800380
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080019C:
    // 0x8080019C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x808001A0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x808001A4: jal         0x800825E8
    // 0x808001A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    _gsmaker_entrypoint_20(rdram, ctx);
        goto after_16;
    // 0x808001A8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_16:
    // 0x808001AC: beq         $v0, $zero, L_808001CC
    if (ctx->r2 == 0) {
        // 0x808001B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001CC;
    }
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B4: jal         0x800855E8
    // 0x808001B8: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    _cadbfunc_entrypoint_13(rdram, ctx);
        goto after_17;
    // 0x808001B8: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    after_17:
    // 0x808001BC: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x808001C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_6;
    // 0x808001C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_6:
    // 0x808001C4: b           L_80800380
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001CC:
    // 0x808001CC: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    // 0x808001D0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x808001D4: jal         0x800825E8
    // 0x808001D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    _gsmaker_entrypoint_20(rdram, ctx);
        goto after_18;
    // 0x808001D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_18:
    // 0x808001DC: beq         $v0, $zero, L_808001FC
    if (ctx->r2 == 0) {
        // 0x808001E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001FC;
    }
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E4: jal         0x800855F8
    // 0x808001E8: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    _cadbfunc_entrypoint_15(rdram, ctx);
        goto after_19;
    // 0x808001E8: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    after_19:
    // 0x808001EC: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x808001F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_7;
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_7:
    // 0x808001F4: b           L_80800380
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001FC:
    // 0x808001FC: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    // 0x80800200: jal         0x80082608
    // 0x80800204: addiu       $a2, $sp, 0x36
    ctx->r6 = ADD32(ctx->r29, 0X36);
    _gsmaker_entrypoint_24(rdram, ctx);
        goto after_20;
    // 0x80800204: addiu       $a2, $sp, 0x36
    ctx->r6 = ADD32(ctx->r29, 0X36);
    after_20:
    // 0x80800208: beq         $v0, $zero, L_80800228
    if (ctx->r2 == 0) {
        // 0x8080020C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800228;
    }
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800210: jal         0x80085608
    // 0x80800214: lh          $a0, 0x36($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X36);
    _cadbfunc_entrypoint_17(rdram, ctx);
        goto after_21;
    // 0x80800214: lh          $a0, 0x36($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X36);
    after_21:
    // 0x80800218: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x8080021C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_8;
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_8:
    // 0x80800220: b           L_80800380
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x80800224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800228:
    // 0x80800228: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    // 0x8080022C: jal         0x800825E0
    // 0x80800230: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    _gsmaker_entrypoint_19(rdram, ctx);
        goto after_22;
    // 0x80800230: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_22:
    // 0x80800234: beq         $v0, $zero, L_80800254
    if (ctx->r2 == 0) {
        // 0x80800238: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800254;
    }
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: jal         0x80085618
    // 0x80800240: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    _cadbfunc_entrypoint_19(rdram, ctx);
        goto after_23;
    // 0x80800240: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    after_23:
    // 0x80800244: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x80800248: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_9;
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_9:
    // 0x8080024C: b           L_80800380
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800254:
    // 0x80800254: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    // 0x80800258: jal         0x800825E0
    // 0x8080025C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    _gsmaker_entrypoint_19(rdram, ctx);
        goto after_24;
    // 0x8080025C: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_24:
    // 0x80800260: beq         $v0, $zero, L_80800280
    if (ctx->r2 == 0) {
        // 0x80800264: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800280;
    }
    // 0x80800264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800268: jal         0x80085628
    // 0x8080026C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    _cadbfunc_entrypoint_21(rdram, ctx);
        goto after_25;
    // 0x8080026C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    after_25:
    // 0x80800270: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x80800274: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_10;
    // 0x80800274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_10:
    // 0x80800278: b           L_80800380
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800280:
    // 0x80800280: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    // 0x80800284: jal         0x800825F0
    // 0x80800288: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    _gsmaker_entrypoint_21(rdram, ctx);
        goto after_26;
    // 0x80800288: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_26:
    // 0x8080028C: beq         $v0, $zero, L_808002AC
    if (ctx->r2 == 0) {
        // 0x80800290: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002AC;
    }
    // 0x80800290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800294: jal         0x80085678
    // 0x80800298: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    _cadbfunc_entrypoint_31(rdram, ctx);
        goto after_27;
    // 0x80800298: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_27:
    // 0x8080029C: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x808002A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_11;
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_11:
    // 0x808002A4: b           L_80800380
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808002AC:
    // 0x808002AC: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x808002B0: jal         0x800825F0
    // 0x808002B4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    _gsmaker_entrypoint_21(rdram, ctx);
        goto after_28;
    // 0x808002B4: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_28:
    // 0x808002B8: beq         $v0, $zero, L_808002D8
    if (ctx->r2 == 0) {
        // 0x808002BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002D8;
    }
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C0: jal         0x80085638
    // 0x808002C4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    _cadbfunc_entrypoint_23(rdram, ctx);
        goto after_29;
    // 0x808002C4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_29:
    // 0x808002C8: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x808002CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_12;
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_12:
    // 0x808002D0: b           L_80800380
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808002D8:
    // 0x808002D8: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    // 0x808002DC: jal         0x800825F0
    // 0x808002E0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    _gsmaker_entrypoint_21(rdram, ctx);
        goto after_30;
    // 0x808002E0: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_30:
    // 0x808002E4: beq         $v0, $zero, L_80800304
    if (ctx->r2 == 0) {
        // 0x808002E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800304;
    }
    // 0x808002E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002EC: jal         0x80085648
    // 0x808002F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    _cadbfunc_entrypoint_25(rdram, ctx);
        goto after_31;
    // 0x808002F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_31:
    // 0x808002F4: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x808002F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_13;
    // 0x808002F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_13:
    // 0x808002FC: b           L_80800380
    // 0x80800300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x80800300: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800304:
    // 0x80800304: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    // 0x80800308: jal         0x800825F0
    // 0x8080030C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    _gsmaker_entrypoint_21(rdram, ctx);
        goto after_32;
    // 0x8080030C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_32:
    // 0x80800310: beq         $v0, $zero, L_80800330
    if (ctx->r2 == 0) {
        // 0x80800314: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800330;
    }
    // 0x80800314: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800318: jal         0x80085658
    // 0x8080031C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    _cadbfunc_entrypoint_27(rdram, ctx);
        goto after_33;
    // 0x8080031C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_33:
    // 0x80800320: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x80800324: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_14;
    // 0x80800324: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_14:
    // 0x80800328: b           L_80800380
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800330:
    // 0x80800330: addiu       $a1, $zero, 0x12
    ctx->r5 = ADD32(0, 0X12);
    // 0x80800334: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80800338: jal         0x800825E8
    // 0x8080033C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    _gsmaker_entrypoint_20(rdram, ctx);
        goto after_34;
    // 0x8080033C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_34:
    // 0x80800340: beq         $v0, $zero, L_80800360
    if (ctx->r2 == 0) {
        // 0x80800344: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800360;
    }
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800348: jal         0x80085688
    // 0x8080034C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    _cadbfunc_entrypoint_33(rdram, ctx);
        goto after_35;
    // 0x8080034C: lwc1        $f12, 0x38($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X38);
    after_35:
    // 0x80800350: bnel        $v0, $zero, L_80800380
    if (ctx->r2 != 0) {
        // 0x80800354: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_15;
    // 0x80800354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_15:
    // 0x80800358: b           L_80800380
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800380;
    // 0x8080035C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800360:
    // 0x80800360: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    // 0x80800364: jal         0x800825F0
    // 0x80800368: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    _gsmaker_entrypoint_21(rdram, ctx);
        goto after_36;
    // 0x80800368: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_36:
    // 0x8080036C: beql        $v0, $zero, L_80800380
    if (ctx->r2 == 0) {
        // 0x80800370: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800380;
    }
    goto skip_16;
    // 0x80800370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_16:
    // 0x80800374: jal         0x80085698
    // 0x80800378: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    _cadbfunc_entrypoint_35(rdram, ctx);
        goto after_37;
    // 0x80800378: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_37:
L_8080037C:
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800380:
    // 0x80800380: jal         0x800825C8
    // 0x80800384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _gsmaker_entrypoint_16(rdram, ctx);
        goto after_38;
    // 0x80800384: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_38:
    // 0x80800388: beql        $v0, $zero, L_80800038
    if (ctx->r2 == 0) {
        // 0x8080038C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800038;
    }
    goto skip_17;
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_17:
L_80800390:
    // 0x80800390: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800394: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800398: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8080039C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x808003A0: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x808003A4: jr          $ra
    // 0x808003A8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x808003A8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void cadbio_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808003B8: jal         0x800A5630
    // 0x808003BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800A5630(rdram, ctx);
        goto after_0;
    // 0x808003BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808003C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003C4: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    // 0x808003C8: jal         0x800825F0
    // 0x808003CC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    _gsmaker_entrypoint_21(rdram, ctx);
        goto after_1;
    // 0x808003CC: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x808003D0: bne         $v0, $zero, L_808003DC
    if (ctx->r2 != 0) {
        // 0x808003D4: addiu       $t6, $zero, 0x7D
        ctx->r14 = ADD32(0, 0X7D);
            goto L_808003DC;
    }
    // 0x808003D4: addiu       $t6, $zero, 0x7D
    ctx->r14 = ADD32(0, 0X7D);
    // 0x808003D8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808003DC:
    // 0x808003DC: jal         0x800A5608
    // 0x808003E0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800A5608(rdram, ctx);
        goto after_2;
    // 0x808003E0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x808003E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003E8: jal         0x800825C8
    // 0x808003EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _gsmaker_entrypoint_16(rdram, ctx);
        goto after_3;
    // 0x808003EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x808003F0: bnel        $v0, $zero, L_80800418
    if (ctx->r2 != 0) {
        // 0x808003F4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800418;
    }
    goto skip_0;
    // 0x808003F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
L_808003F8:
    // 0x808003F8: jal         0x80000000
    // 0x808003FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_cadbio(rdram, ctx);
        goto after_4;
    // 0x808003FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800404: jal         0x800825C8
    // 0x80800408: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _gsmaker_entrypoint_16(rdram, ctx);
        goto after_5;
    // 0x80800408: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8080040C: beq         $v0, $zero, L_808003F8
    if (ctx->r2 == 0) {
        // 0x80800410: nop
    
            goto L_808003F8;
    }
    // 0x80800410: nop

    // 0x80800414: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800418:
    // 0x80800418: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080041C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800420: jr          $ra
    // 0x80800424: nop

    return;
    // 0x80800424: nop

    // 0x80800428: nop

    // 0x8080042C: nop

;}
RECOMP_FUNC void cadbmgrDll_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8080000C: sll         $t6, $a1, 1
    ctx->r14 = S32(ctx->r5 << 1);
    // 0x80800010: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800014: addiu       $a0, $t6, 0x40
    ctx->r4 = ADD32(ctx->r14, 0X40);
    // 0x80800018: jal         0x8001ACCC
    // 0x8080001C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x8080001C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800020: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80800024: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80800028: addiu       $v1, $zero, 0x4
    ctx->r3 = ADD32(0, 0X4);
    // 0x8080002C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80800030: addiu       $v0, $zero, 0x24
    ctx->r2 = ADD32(0, 0X24);
L_80800034:
    // 0x80800034: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x80800038: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x8080003C: sh          $zero, 0x1E($t8)
    MEM_H(0X1E, ctx->r24) = 0;
    // 0x80800040: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80800044: addu        $t0, $t9, $v1
    ctx->r8 = ADD32(ctx->r25, ctx->r3);
    // 0x80800048: sw          $zero, -0x4($t0)
    MEM_W(-0X4, ctx->r8) = 0;
    // 0x8080004C: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x80800050: addu        $t2, $t1, $a0
    ctx->r10 = ADD32(ctx->r9, ctx->r4);
    // 0x80800054: sh          $zero, 0x20($t2)
    MEM_H(0X20, ctx->r10) = 0;
    // 0x80800058: lw          $t3, 0x0($a2)
    ctx->r11 = MEM_W(ctx->r6, 0X0);
    // 0x8080005C: addu        $t4, $t3, $v1
    ctx->r12 = ADD32(ctx->r11, ctx->r3);
    // 0x80800060: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    // 0x80800064: lw          $t5, 0x0($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X0);
    // 0x80800068: addu        $t6, $t5, $a0
    ctx->r14 = ADD32(ctx->r13, ctx->r4);
    // 0x8080006C: sh          $zero, 0x22($t6)
    MEM_H(0X22, ctx->r14) = 0;
    // 0x80800070: lw          $t7, 0x0($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X0);
    // 0x80800074: addu        $t8, $t7, $v1
    ctx->r24 = ADD32(ctx->r15, ctx->r3);
    // 0x80800078: sw          $zero, 0x4($t8)
    MEM_W(0X4, ctx->r24) = 0;
    // 0x8080007C: lw          $t9, 0x0($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X0);
    // 0x80800080: addu        $t0, $t9, $a0
    ctx->r8 = ADD32(ctx->r25, ctx->r4);
    // 0x80800084: sh          $zero, 0x24($t0)
    MEM_H(0X24, ctx->r8) = 0;
    // 0x80800088: lw          $t1, 0x0($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X0);
    // 0x8080008C: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x80800090: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x80800094: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80800098: bne         $v1, $v0, L_80800034
    if (ctx->r3 != ctx->r2) {
        // 0x8080009C: sw          $zero, 0x8($t2)
        MEM_W(0X8, ctx->r10) = 0;
            goto L_80800034;
    }
    // 0x8080009C: sw          $zero, 0x8($t2)
    MEM_W(0X8, ctx->r10) = 0;
    // 0x808000A0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x808000A4: lw          $t4, 0x0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X0);
    // 0x808000A8: jal         0x800A56A4
    // 0x808000AC: sw          $t3, 0x38($t4)
    MEM_W(0X38, ctx->r12) = ctx->r11;
    func_800A56A4(rdram, ctx);
        goto after_1;
    // 0x808000AC: sw          $t3, 0x38($t4)
    MEM_W(0X38, ctx->r12) = ctx->r11;
    after_1:
    // 0x808000B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000B8: jr          $ra
    // 0x808000BC: nop

    return;
    // 0x808000BC: nop

;}
RECOMP_FUNC void cadbmgrDll_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C8: jal         0x800A56A4
    // 0x808000CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A56A4(rdram, ctx);
        goto after_0;
    // 0x808000CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000D0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x808000D4: jal         0x8001B084
    // 0x808000D8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_8001B084(rdram, ctx);
        goto after_1;
    // 0x808000D8: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_1:
    // 0x808000DC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x808000E0: sw          $zero, 0x0($t7)
    MEM_W(0X0, ctx->r15) = 0;
    // 0x808000E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000EC: jr          $ra
    // 0x808000F0: nop

    return;
    // 0x808000F0: nop

;}
RECOMP_FUNC void func_808000F4_cadbmgrDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808000F8: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(169, 0X630) << 16);
    // 0x808000FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800100: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80800104: addiu       $t7, $t7, 0x630
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(169, 0X630));
    // 0x80800108: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8080010C: addiu       $t6, $sp, 0x24
    ctx->r14 = ADD32(ctx->r29, 0X24);
    // 0x80800110: lw          $t0, 0x4($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X4);
    // 0x80800114: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x80800118: lw          $at, 0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X8);
    // 0x8080011C: sw          $t0, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r8;
    // 0x80800120: sw          $at, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r1;
    // 0x80800124: jal         0x800A5854
    // 0x80800128: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800A5854(rdram, ctx);
        goto after_0;
    // 0x80800128: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_0:
    // 0x8080012C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800130: jal         0x800A5800
    // 0x80800134: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_800A5800(rdram, ctx);
        goto after_1;
    // 0x80800134: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x80800138: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x8080013C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800140: beq         $v1, $at, L_80800160
    if (ctx->r3 == ctx->r1) {
        // 0x80800144: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800160;
    }
    // 0x80800144: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800148: beq         $v1, $at, L_80800160
    if (ctx->r3 == ctx->r1) {
        // 0x8080014C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800160;
    }
    // 0x8080014C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800150: beq         $v1, $at, L_80800160
    if (ctx->r3 == ctx->r1) {
        // 0x80800154: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80800160;
    }
    // 0x80800154: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80800158: bne         $v1, $at, L_80800188
    if (ctx->r3 != ctx->r1) {
        // 0x8080015C: nop
    
            goto L_80800188;
    }
    // 0x8080015C: nop

L_80800160:
    // 0x80800160: jal         0x800E3980
    // 0x80800164: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_800E3980(rdram, ctx);
        goto after_2;
    // 0x80800164: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x80800168: jal         0x80085588
    // 0x8080016C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    _cadbfunc_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x8080016C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x80800170: jal         0x800E3A58
    // 0x80800174: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    func_800E3A58(rdram, ctx);
        goto after_4;
    // 0x80800174: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x80800178: jal         0x80085598
    // 0x8080017C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    _cadbfunc_entrypoint_3(rdram, ctx);
        goto after_5;
    // 0x8080017C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_5:
    // 0x80800180: b           L_80800198
    // 0x80800184: nop

        goto L_80800198;
    // 0x80800184: nop

L_80800188:
    // 0x80800188: jal         0x80085588
    // 0x8080018C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    _cadbfunc_entrypoint_1(rdram, ctx);
        goto after_6;
    // 0x8080018C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x80800190: jal         0x80085598
    // 0x80800194: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    _cadbfunc_entrypoint_3(rdram, ctx);
        goto after_7;
    // 0x80800194: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_7:
L_80800198:
    // 0x80800198: jal         0x800855A8
    // 0x8080019C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    _cadbfunc_entrypoint_5(rdram, ctx);
        goto after_8;
    // 0x8080019C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    after_8:
    // 0x808001A0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x808001A4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808001A8: lui         $at, 0x4070
    ctx->r1 = S32(0X4070 << 16);
    // 0x808001AC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808001B0: jal         0x800855B8
    // 0x808001B4: nop

    _cadbfunc_entrypoint_7(rdram, ctx);
        goto after_9;
    // 0x808001B4: nop

    after_9:
    // 0x808001B8: lui         $at, 0x4030
    ctx->r1 = S32(0X4030 << 16);
    // 0x808001BC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808001C0: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x808001C4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808001C8: jal         0x800855C8
    // 0x808001CC: nop

    _cadbfunc_entrypoint_9(rdram, ctx);
        goto after_10;
    // 0x808001CC: nop

    after_10:
    // 0x808001D0: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x808001D4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808001D8: jal         0x800855D8
    // 0x808001DC: nop

    _cadbfunc_entrypoint_11(rdram, ctx);
        goto after_11;
    // 0x808001DC: nop

    after_11:
    // 0x808001E0: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x808001E4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808001E8: jal         0x800855E8
    // 0x808001EC: nop

    _cadbfunc_entrypoint_13(rdram, ctx);
        goto after_12;
    // 0x808001EC: nop

    after_12:
    // 0x808001F0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808001F4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808001F8: jal         0x800855F8
    // 0x808001FC: nop

    _cadbfunc_entrypoint_15(rdram, ctx);
        goto after_13;
    // 0x808001FC: nop

    after_13:
    // 0x80800200: jal         0x80085608
    // 0x80800204: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    _cadbfunc_entrypoint_17(rdram, ctx);
        goto after_14;
    // 0x80800204: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    after_14:
    // 0x80800208: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8080020C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80800210: jal         0x80085618
    // 0x80800214: nop

    _cadbfunc_entrypoint_19(rdram, ctx);
        goto after_15;
    // 0x80800214: nop

    after_15:
    // 0x80800218: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8080021C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80800220: jal         0x80085628
    // 0x80800224: nop

    _cadbfunc_entrypoint_21(rdram, ctx);
        goto after_16;
    // 0x80800224: nop

    after_16:
    // 0x80800228: jal         0x80085648
    // 0x8080022C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    _cadbfunc_entrypoint_25(rdram, ctx);
        goto after_17;
    // 0x8080022C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_17:
    // 0x80800230: jal         0x80085658
    // 0x80800234: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    _cadbfunc_entrypoint_27(rdram, ctx);
        goto after_18;
    // 0x80800234: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_18:
    // 0x80800238: jal         0x80085638
    // 0x8080023C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    _cadbfunc_entrypoint_23(rdram, ctx);
        goto after_19;
    // 0x8080023C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_19:
    // 0x80800240: jal         0x80085678
    // 0x80800244: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    _cadbfunc_entrypoint_31(rdram, ctx);
        goto after_20;
    // 0x80800244: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x80800248: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8080024C: jal         0x80085688
    // 0x80800250: nop

    _cadbfunc_entrypoint_33(rdram, ctx);
        goto after_21;
    // 0x80800250: nop

    after_21:
    // 0x80800254: jal         0x80085698
    // 0x80800258: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    _cadbfunc_entrypoint_35(rdram, ctx);
        goto after_22;
    // 0x80800258: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_22:
    // 0x8080025C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80800260: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800264: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80800268: beq         $v1, $at, L_808002A0
    if (ctx->r3 == ctx->r1) {
        // 0x8080026C: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_808002A0;
    }
    // 0x8080026C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800270: beq         $v1, $at, L_80800288
    if (ctx->r3 == ctx->r1) {
        // 0x80800274: addiu       $at, $zero, 0x7
        ctx->r1 = ADD32(0, 0X7);
            goto L_80800288;
    }
    // 0x80800274: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80800278: beq         $v1, $at, L_808002B0
    if (ctx->r3 == ctx->r1) {
        // 0x8080027C: nop
    
            goto L_808002B0;
    }
    // 0x8080027C: nop

    // 0x80800280: b           L_808002BC
    // 0x80800284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808002BC;
    // 0x80800284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800288:
    // 0x80800288: jal         0x80085658
    // 0x8080028C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    _cadbfunc_entrypoint_27(rdram, ctx);
        goto after_23;
    // 0x8080028C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_23:
    // 0x80800290: jal         0x80085638
    // 0x80800294: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    _cadbfunc_entrypoint_23(rdram, ctx);
        goto after_24;
    // 0x80800294: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_24:
    // 0x80800298: b           L_808002BC
    // 0x8080029C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808002BC;
    // 0x8080029C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808002A0:
    // 0x808002A0: jal         0x80085660
    // 0x808002A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _cadbfunc_entrypoint_28(rdram, ctx);
        goto after_25;
    // 0x808002A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_25:
    // 0x808002A8: b           L_808002BC
    // 0x808002AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808002BC;
    // 0x808002AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808002B0:
    // 0x808002B0: jal         0x80085648
    // 0x808002B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    _cadbfunc_entrypoint_25(rdram, ctx);
        goto after_26;
    // 0x808002B4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_26:
    // 0x808002B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808002BC:
    // 0x808002BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808002C0: jr          $ra
    // 0x808002C4: nop

    return;
    // 0x808002C4: nop

;}
RECOMP_FUNC void cadbmgrDll_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002C8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808002CC: sll         $t6, $a2, 1
    ctx->r14 = S32(ctx->r6 << 1);
    // 0x808002D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002D8: addu        $t0, $a0, $t6
    ctx->r8 = ADD32(ctx->r4, ctx->r14);
    // 0x808002DC: lbu         $t7, 0x3C($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X3C);
    // 0x808002E0: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x808002E4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x808002E8: beq         $t7, $zero, L_808002F8
    if (ctx->r15 == 0) {
        // 0x808002EC: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_808002F8;
    }
    // 0x808002EC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x808002F0: b           L_808003C4
    // 0x808002F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808003C4;
    // 0x808002F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808002F8:
    // 0x808002F8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x808002FC: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80800300: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x80800304: jal         0x800004C4
    // 0x80800308: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    func_808004C4_cadbmgrDll(rdram, ctx);
        goto after_0;
    // 0x80800308: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    after_0:
    // 0x8080030C: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80800310: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80800314: or          $t1, $v0, $zero
    ctx->r9 = ctx->r2 | 0;
    // 0x80800318: lw          $a2, 0x38($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X38);
    // 0x8080031C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800320: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x80800324: blez        $a2, L_80800360
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80800328: or          $v1, $a3, $zero
        ctx->r3 = ctx->r7 | 0;
            goto L_80800360;
    }
    // 0x80800328: or          $v1, $a3, $zero
    ctx->r3 = ctx->r7 | 0;
L_8080032C:
    // 0x8080032C: lbu         $t8, 0x3C($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0X3C);
    // 0x80800330: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80800334: bnel        $s0, $t8, L_80800358
    if (ctx->r16 != ctx->r24) {
        // 0x80800338: slt         $at, $a1, $a2
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
            goto L_80800358;
    }
    goto skip_0;
    // 0x80800338: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
    skip_0:
    // 0x8080033C: lbu         $a0, 0x3D($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X3D);
    // 0x80800340: slt         $at, $a0, $v0
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80800344: bne         $at, $zero, L_80800354
    if (ctx->r1 != 0) {
        // 0x80800348: addiu       $t9, $a0, 0x1
        ctx->r25 = ADD32(ctx->r4, 0X1);
            goto L_80800354;
    }
    // 0x80800348: addiu       $t9, $a0, 0x1
    ctx->r25 = ADD32(ctx->r4, 0X1);
    // 0x8080034C: sb          $t9, 0x3D($v1)
    MEM_B(0X3D, ctx->r3) = ctx->r25;
    // 0x80800350: lw          $a2, 0x38($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X38);
L_80800354:
    // 0x80800354: slt         $at, $a1, $a2
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r6) ? 1 : 0;
L_80800358:
    // 0x80800358: bne         $at, $zero, L_8080032C
    if (ctx->r1 != 0) {
        // 0x8080035C: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_8080032C;
    }
    // 0x8080035C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
L_80800360:
    // 0x80800360: sb          $s0, 0x3C($t0)
    MEM_B(0X3C, ctx->r8) = ctx->r16;
    // 0x80800364: sb          $t1, 0x3D($t0)
    MEM_B(0X3D, ctx->r8) = ctx->r9;
    // 0x80800368: addu        $v1, $a3, $t2
    ctx->r3 = ADD32(ctx->r7, ctx->r10);
    // 0x8080036C: lw          $a2, -0x4($v1)
    ctx->r6 = MEM_W(ctx->r3, -0X4);
    // 0x80800370: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80800374: sw          $a3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r7;
    // 0x80800378: sw          $v1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r3;
    // 0x8080037C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80800380: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800384: jal         0x800003D8
    // 0x80800388: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    func_808003D8_cadbmgrDll(rdram, ctx);
        goto after_1;
    // 0x80800388: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    after_1:
    // 0x8080038C: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80800390: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80800394: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    // 0x80800398: lw          $t3, -0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, -0X4);
    // 0x8080039C: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x808003A0: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x808003A4: slt         $at, $a2, $t4
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x808003A8: beq         $at, $zero, L_808003B8
    if (ctx->r1 == 0) {
        // 0x808003AC: nop
    
            goto L_808003B8;
    }
    // 0x808003AC: nop

    // 0x808003B0: jal         0x80000528
    // 0x808003B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80800528_cadbmgrDll(rdram, ctx);
        goto after_2;
    // 0x808003B4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
L_808003B8:
    // 0x808003B8: jal         0x800000F4
    // 0x808003BC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_808000F4_cadbmgrDll(rdram, ctx);
        goto after_3;
    // 0x808003BC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_3:
    // 0x808003C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808003C4:
    // 0x808003C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003CC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808003D0: jr          $ra
    // 0x808003D4: nop

    return;
    // 0x808003D4: nop

;}
RECOMP_FUNC void func_808003D8_cadbmgrDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808003DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x808003E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808003E4: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x808003E8: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808003EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808003F0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x808003F4: beq         $a2, $zero, L_80800464
    if (ctx->r6 == 0) {
        // 0x808003F8: sw          $a2, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r6;
            goto L_80800464;
    }
    // 0x808003F8: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x808003FC: sll         $t7, $a1, 2
    ctx->r15 = S32(ctx->r5 << 2);
    // 0x80800400: addu        $s2, $a0, $t7
    ctx->r18 = ADD32(ctx->r4, ctx->r15);
    // 0x80800404: lw          $t8, -0x4($s2)
    ctx->r24 = MEM_W(ctx->r18, -0X4);
    // 0x80800408: beq         $t8, $zero, L_80800440
    if (ctx->r24 == 0) {
        // 0x8080040C: nop
    
            goto L_80800440;
    }
    // 0x8080040C: nop

    // 0x80800410: jal         0x800A57EC
    // 0x80800414: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800A57EC(rdram, ctx);
        goto after_0;
    // 0x80800414: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80800418: lw          $t1, 0x40($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X40);
    // 0x8080041C: sll         $t9, $s0, 1
    ctx->r25 = S32(ctx->r16 << 1);
    // 0x80800420: addu        $t0, $s1, $t9
    ctx->r8 = ADD32(ctx->r17, ctx->r25);
    // 0x80800424: multu       $v0, $t1
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r9)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800428: lh          $a0, 0x1E($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X1E);
    // 0x8080042C: mflo        $a1
    ctx->r5 = lo;
    // 0x80800430: jal         0x8001B710
    // 0x80800434: nop

    func_8001B710(rdram, ctx);
        goto after_1;
    // 0x80800434: nop

    after_1:
    // 0x80800438: b           L_80800498
    // 0x8080043C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
        goto L_80800498;
    // 0x8080043C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
L_80800440:
    // 0x80800440: jal         0x800A57EC
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A57EC(rdram, ctx);
        goto after_2;
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800448: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8080044C: jal         0x8001B668
    // 0x80800450: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8001B668(rdram, ctx);
        goto after_3;
    // 0x80800450: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x80800454: sll         $t2, $s0, 1
    ctx->r10 = S32(ctx->r16 << 1);
    // 0x80800458: addu        $t3, $s1, $t2
    ctx->r11 = ADD32(ctx->r17, ctx->r10);
    // 0x8080045C: b           L_80800494
    // 0x80800460: sh          $v0, 0x1E($t3)
    MEM_H(0X1E, ctx->r11) = ctx->r2;
        goto L_80800494;
    // 0x80800460: sh          $v0, 0x1E($t3)
    MEM_H(0X1E, ctx->r11) = ctx->r2;
L_80800464:
    // 0x80800464: sll         $t4, $s0, 2
    ctx->r12 = S32(ctx->r16 << 2);
    // 0x80800468: addu        $s2, $s1, $t4
    ctx->r18 = ADD32(ctx->r17, ctx->r12);
    // 0x8080046C: lw          $t5, -0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, -0X4);
    // 0x80800470: sll         $t6, $s0, 1
    ctx->r14 = S32(ctx->r16 << 1);
    // 0x80800474: addu        $v0, $s1, $t6
    ctx->r2 = ADD32(ctx->r17, ctx->r14);
    // 0x80800478: beql        $t5, $zero, L_80800498
    if (ctx->r13 == 0) {
        // 0x8080047C: lw          $t7, 0x40($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X40);
            goto L_80800498;
    }
    goto skip_0;
    // 0x8080047C: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    skip_0:
    // 0x80800480: lh          $a0, 0x1E($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X1E);
    // 0x80800484: jal         0x8001B754
    // 0x80800488: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    func_8001B754(rdram, ctx);
        goto after_4;
    // 0x80800488: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    after_4:
    // 0x8080048C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80800490: sh          $zero, 0x1E($v0)
    MEM_H(0X1E, ctx->r2) = 0;
L_80800494:
    // 0x80800494: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
L_80800498:
    // 0x80800498: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x8080049C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808004A0: sw          $t7, -0x4($s2)
    MEM_W(-0X4, ctx->r18) = ctx->r15;
    // 0x808004A4: sw          $t8, 0x30($s1)
    MEM_W(0X30, ctx->r17) = ctx->r24;
    // 0x808004A8: sw          $zero, 0x34($s1)
    MEM_W(0X34, ctx->r17) = 0;
    // 0x808004AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808004B0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x808004B4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x808004B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808004BC: jr          $ra
    // 0x808004C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x808004C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_808004C4_cadbmgrDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004C4: lw          $v0, 0x38($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X38);
    // 0x808004C8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x808004CC: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x808004D0: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x808004D4: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x808004D8: bltz        $v0, L_80800520
    if (SIGNED(ctx->r2) < 0) {
        // 0x808004DC: lw          $v1, -0x4($t7)
        ctx->r3 = MEM_W(ctx->r15, -0X4);
            goto L_80800520;
    }
    // 0x808004DC: lw          $v1, -0x4($t7)
    ctx->r3 = MEM_W(ctx->r15, -0X4);
    // 0x808004E0: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x808004E4: addu        $a2, $a0, $t8
    ctx->r6 = ADD32(ctx->r4, ctx->r24);
L_808004E8:
    // 0x808004E8: lbu         $t9, 0x3C($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X3C);
    // 0x808004EC: slt         $at, $a3, $v0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x808004F0: bnel        $a1, $t9, L_80800518
    if (ctx->r5 != ctx->r25) {
        // 0x808004F4: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80800518;
    }
    goto skip_0;
    // 0x808004F4: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_0:
    // 0x808004F8: beql        $at, $zero, L_80800518
    if (ctx->r1 == 0) {
        // 0x808004FC: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80800518;
    }
    goto skip_1;
    // 0x808004FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_1:
    // 0x80800500: lbu         $a0, 0x3D($a2)
    ctx->r4 = MEM_BU(ctx->r6, 0X3D);
    // 0x80800504: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80800508: bnel        $at, $zero, L_80800518
    if (ctx->r1 != 0) {
        // 0x8080050C: addiu       $v0, $v0, -0x1
        ctx->r2 = ADD32(ctx->r2, -0X1);
            goto L_80800518;
    }
    goto skip_2;
    // 0x8080050C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    skip_2:
    // 0x80800510: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80800514: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80800518:
    // 0x80800518: bgez        $v0, L_808004E8
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8080051C: addiu       $a2, $a2, -0x2
        ctx->r6 = ADD32(ctx->r6, -0X2);
            goto L_808004E8;
    }
    // 0x8080051C: addiu       $a2, $a2, -0x2
    ctx->r6 = ADD32(ctx->r6, -0X2);
L_80800520:
    // 0x80800520: jr          $ra
    // 0x80800524: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80800524: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80800528_cadbmgrDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800528: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080052C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80800530: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800534: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80800538: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8080053C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80800540: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80800544: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800548: addu        $t7, $a0, $t6
    ctx->r15 = ADD32(ctx->r4, ctx->r14);
    // 0x8080054C: lw          $s0, -0x4($t7)
    ctx->r16 = MEM_W(ctx->r15, -0X4);
    // 0x80800550: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80800554: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x80800558: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x8080055C: slt         $at, $a2, $s0
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r16) ? 1 : 0;
    // 0x80800560: beq         $at, $zero, L_8080058C
    if (ctx->r1 == 0) {
        // 0x80800564: or          $s4, $a2, $zero
        ctx->r20 = ctx->r6 | 0;
            goto L_8080058C;
    }
    // 0x80800564: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
L_80800568:
    // 0x80800568: addiu       $s1, $s0, -0x1
    ctx->r17 = ADD32(ctx->r16, -0X1);
    // 0x8080056C: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80800570: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800574: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80800578: jal         0x800005AC
    // 0x8080057C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    func_808005AC_cadbmgrDll(rdram, ctx);
        goto after_0;
    // 0x8080057C: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_0:
    // 0x80800580: slt         $at, $s4, $s1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80800584: bne         $at, $zero, L_80800568
    if (ctx->r1 != 0) {
        // 0x80800588: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_80800568;
    }
    // 0x80800588: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8080058C:
    // 0x8080058C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800590: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800594: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800598: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8080059C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x808005A0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x808005A4: jr          $ra
    // 0x808005A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x808005A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_808005AC_cadbmgrDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005AC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808005B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005B4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808005B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x808005BC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x808005C0: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x808005C4: jal         0x800A57EC
    // 0x808005C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800A57EC(rdram, ctx);
        goto after_0;
    // 0x808005C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x808005CC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x808005D0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x808005D4: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x808005D8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x808005DC: lh          $a0, 0x1E($t9)
    ctx->r4 = MEM_H(ctx->r25, 0X1E);
    // 0x808005E0: jal         0x8001B798
    // 0x808005E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_8001B798(rdram, ctx);
        goto after_1;
    // 0x808005E4: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x808005E8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x808005EC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x808005F0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x808005F4: multu       $t0, $a2
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808005F8: mflo        $t1
    ctx->r9 = lo;
    // 0x808005FC: addu        $a0, $v0, $t1
    ctx->r4 = ADD32(ctx->r2, ctx->r9);
    // 0x80800600: nop

    // 0x80800604: multu       $t2, $a2
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r6)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800608: mflo        $t3
    ctx->r11 = lo;
    // 0x8080060C: addu        $a1, $v0, $t3
    ctx->r5 = ADD32(ctx->r2, ctx->r11);
    // 0x80800610: jal         0x8001BBA0
    // 0x80800614: nop

    rare_memcpy(rdram, ctx);
        goto after_2;
    // 0x80800614: nop

    after_2:
    // 0x80800618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080061C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800620: jr          $ra
    // 0x80800624: nop

    return;
    // 0x80800624: nop

    // 0x80800628: nop

    // 0x8080062C: nop

;}
RECOMP_FUNC void capod_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8080000C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800010: jal         0x8008FFE8
    // 0x80800014: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800018: jal         0x80110024
    // 0x8080001C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110024(rdram, ctx);
        goto after_1;
    // 0x8080001C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800020: beql        $v0, $zero, L_80800058
    if (ctx->r2 == 0) {
        // 0x80800024: addiu       $v0, $zero, -0x1
        ctx->r2 = ADD32(0, -0X1);
            goto L_80800058;
    }
    goto skip_0;
    // 0x80800024: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    skip_0:
    // 0x80800028: jal         0x8008FFE8
    // 0x8080002C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_8008FFE8(rdram, ctx);
        goto after_2;
    // 0x8080002C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x80800030: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80800034: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800038: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080003C: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80800040: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80800044: jal         0x800894F0
    // 0x80800048: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    _ncpod_entrypoint_6(rdram, ctx);
        goto after_3;
    // 0x80800048: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_3:
    // 0x8080004C: b           L_8080005C
    // 0x80800050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080005C;
    // 0x80800050: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800054: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80800058:
    // 0x80800058: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080005C:
    // 0x8080005C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800060: jr          $ra
    // 0x80800064: nop

    return;
    // 0x80800064: nop

;}
RECOMP_FUNC void capod_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080006C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800070: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800074: jal         0x8008FFE8
    // 0x80800078: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x80800078: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8080007C: jal         0x80110024
    // 0x80800080: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110024(rdram, ctx);
        goto after_1;
    // 0x80800080: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800084: beq         $v0, $zero, L_80800098
    if (ctx->r2 == 0) {
        // 0x80800088: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800098;
    }
    // 0x80800088: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080008C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80800090: jal         0x80089500
    // 0x80800094: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    _ncpod_entrypoint_8(rdram, ctx);
        goto after_2;
    // 0x80800094: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_2:
L_80800098:
    // 0x80800098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080009C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000A0: jr          $ra
    // 0x808000A4: nop

    return;
    // 0x808000A4: nop

;}
RECOMP_FUNC void capod_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000B4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808000B8: jal         0x8008FFE8
    // 0x808000BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x808000BC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x808000C0: beq         $v0, $zero, L_808000E0
    if (ctx->r2 == 0) {
        // 0x808000C4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_808000E0;
    }
    // 0x808000C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808000C8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x808000CC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x808000D0: jal         0x80089540
    // 0x808000D4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    _ncpod_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x808000D4: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808000D8: b           L_808000E8
    // 0x808000DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808000E8;
    // 0x808000DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000E0:
    // 0x808000E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808000E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808000E8:
    // 0x808000E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000EC: jr          $ra
    // 0x808000F0: nop

    return;
    // 0x808000F0: nop

;}
RECOMP_FUNC void capod_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000FC: jal         0x8008FFE8
    // 0x80800100: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x80800100: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800104: beq         $v0, $zero, L_8080011C
    if (ctx->r2 == 0) {
        // 0x80800108: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8080011C;
    }
    // 0x80800108: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080010C: jal         0x80089548
    // 0x80800110: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _ncpod_entrypoint_17(rdram, ctx);
        goto after_1;
    // 0x80800110: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800114: b           L_80800124
    // 0x80800118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800124;
    // 0x80800118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080011C:
    // 0x8080011C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800124:
    // 0x80800124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800128: jr          $ra
    // 0x8080012C: nop

    return;
    // 0x8080012C: nop

;}
RECOMP_FUNC void capod_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800130: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800138: jal         0x8008FFE8
    // 0x8080013C: nop

    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x8080013C: nop

    after_0:
    // 0x80800140: beq         $v0, $zero, L_80800158
    if (ctx->r2 == 0) {
        // 0x80800144: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800158;
    }
    // 0x80800144: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800148: jal         0x80089550
    // 0x8080014C: nop

    _ncpod_entrypoint_18(rdram, ctx);
        goto after_1;
    // 0x8080014C: nop

    after_1:
    // 0x80800150: b           L_80800160
    // 0x80800154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800160;
    // 0x80800154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800158:
    // 0x80800158: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x8080015C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800160:
    // 0x80800160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800164: jr          $ra
    // 0x80800168: nop

    return;
    // 0x80800168: nop

;}
RECOMP_FUNC void capod_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080016C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800170: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800174: jal         0x8008FFE8
    // 0x80800178: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x80800178: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080017C: jal         0x80110024
    // 0x80800180: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110024(rdram, ctx);
        goto after_1;
    // 0x80800180: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800184: beq         $v0, $zero, L_80800194
    if (ctx->r2 == 0) {
        // 0x80800188: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800194;
    }
    // 0x80800188: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080018C: jal         0x80089558
    // 0x80800190: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _ncpod_entrypoint_19(rdram, ctx);
        goto after_2;
    // 0x80800190: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_2:
L_80800194:
    // 0x80800194: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800198: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080019C: jr          $ra
    // 0x808001A0: nop

    return;
    // 0x808001A0: nop

;}
RECOMP_FUNC void capod_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808001B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808001B4: jal         0x8008FFE8
    // 0x808001B8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x808001B8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x808001BC: beq         $v0, $zero, L_808001DC
    if (ctx->r2 == 0) {
        // 0x808001C0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_808001DC;
    }
    // 0x808001C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808001C4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x808001C8: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x808001CC: jal         0x80089560
    // 0x808001D0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    _ncpod_entrypoint_20(rdram, ctx);
        goto after_1;
    // 0x808001D0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808001D4: b           L_808001E4
    // 0x808001D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808001E4;
    // 0x808001D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001DC:
    // 0x808001DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808001E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001E4:
    // 0x808001E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001E8: jr          $ra
    // 0x808001EC: nop

    return;
    // 0x808001EC: nop

;}
RECOMP_FUNC void capod_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808001FC: jal         0x8008FFE8
    // 0x80800200: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x80800200: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800204: beq         $v0, $zero, L_80800218
    if (ctx->r2 == 0) {
        // 0x80800208: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800218;
    }
    // 0x80800208: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080020C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80800210: jal         0x80089568
    // 0x80800214: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    _ncpod_entrypoint_21(rdram, ctx);
        goto after_1;
    // 0x80800214: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_80800218:
    // 0x80800218: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080021C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800220: jr          $ra
    // 0x80800224: nop

    return;
    // 0x80800224: nop

;}
RECOMP_FUNC void capod_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800228: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080022C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800230: jal         0x8008FFE8
    // 0x80800234: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x80800234: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800238: jal         0x80110024
    // 0x8080023C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110024(rdram, ctx);
        goto after_1;
    // 0x8080023C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800240: beq         $v0, $zero, L_80800250
    if (ctx->r2 == 0) {
        // 0x80800244: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800250;
    }
    // 0x80800244: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800248: jal         0x80089520
    // 0x8080024C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _ncpod_entrypoint_12(rdram, ctx);
        goto after_2;
    // 0x8080024C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_2:
L_80800250:
    // 0x80800250: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800254: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800258: jr          $ra
    // 0x8080025C: nop

    return;
    // 0x8080025C: nop

;}
RECOMP_FUNC void capod_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800268: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080026C: jal         0x8008FFE8
    // 0x80800270: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x80800270: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800274: jal         0x80110024
    // 0x80800278: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110024(rdram, ctx);
        goto after_1;
    // 0x80800278: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080027C: beq         $v0, $zero, L_80800290
    if (ctx->r2 == 0) {
        // 0x80800280: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800290;
    }
    // 0x80800280: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800284: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80800288: jal         0x80089570
    // 0x8080028C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    _ncpod_entrypoint_22(rdram, ctx);
        goto after_2;
    // 0x8080028C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_2:
L_80800290:
    // 0x80800290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800294: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800298: jr          $ra
    // 0x8080029C: nop

    return;
    // 0x8080029C: nop

;}
RECOMP_FUNC void capod_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002A8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808002AC: jal         0x8008FFE8
    // 0x808002B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x808002B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808002B4: jal         0x80110024
    // 0x808002B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110024(rdram, ctx);
        goto after_1;
    // 0x808002B8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808002BC: beq         $v0, $zero, L_808002D0
    if (ctx->r2 == 0) {
        // 0x808002C0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_808002D0;
    }
    // 0x808002C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808002C4: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x808002C8: jal         0x80089578
    // 0x808002CC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    _ncpod_entrypoint_23(rdram, ctx);
        goto after_2;
    // 0x808002CC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_2:
L_808002D0:
    // 0x808002D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002D8: jr          $ra
    // 0x808002DC: nop

    return;
    // 0x808002DC: nop

;}
RECOMP_FUNC void capod_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808002EC: jal         0x8008FFE8
    // 0x808002F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x808002F0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808002F4: jal         0x80110024
    // 0x808002F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110024(rdram, ctx);
        goto after_1;
    // 0x808002F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808002FC: beq         $v0, $zero, L_80800310
    if (ctx->r2 == 0) {
        // 0x80800300: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800310;
    }
    // 0x80800300: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800304: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80800308: jal         0x80089580
    // 0x8080030C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    _ncpod_entrypoint_24(rdram, ctx);
        goto after_2;
    // 0x8080030C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_2:
L_80800310:
    // 0x80800310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800318: jr          $ra
    // 0x8080031C: nop

    return;
    // 0x8080031C: nop

;}
RECOMP_FUNC void capod_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800320: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800324: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800328: jal         0x8008FFE8
    // 0x8080032C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x8080032C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800330: jal         0x80110024
    // 0x80800334: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80110024(rdram, ctx);
        goto after_1;
    // 0x80800334: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800338: beq         $v0, $zero, L_80800348
    if (ctx->r2 == 0) {
        // 0x8080033C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800348;
    }
    // 0x8080033C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800340: jal         0x80089588
    // 0x80800344: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _ncpod_entrypoint_25(rdram, ctx);
        goto after_2;
    // 0x80800344: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_2:
L_80800348:
    // 0x80800348: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080034C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800350: jr          $ra
    // 0x80800354: nop

    return;
    // 0x80800354: nop

;}
RECOMP_FUNC void capod_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800358: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080035C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800360: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800364: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800368: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8080036C: jal         0x8008FFE8
    // 0x80800370: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x80800370: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800374: beq         $v0, $zero, L_808003A4
    if (ctx->r2 == 0) {
        // 0x80800378: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_808003A4;
    }
    // 0x80800378: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080037C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80800380: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80800384: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80800388: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x8080038C: jal         0x80089590
    // 0x80800390: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    _ncpod_entrypoint_26(rdram, ctx);
        goto after_1;
    // 0x80800390: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x80800394: beql        $v0, $zero, L_808003A8
    if (ctx->r2 == 0) {
        // 0x80800398: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808003A8;
    }
    goto skip_0;
    // 0x80800398: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x8080039C: b           L_808003A8
    // 0x808003A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808003A8;
    // 0x808003A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808003A4:
    // 0x808003A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808003A8:
    // 0x808003A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808003B0: jr          $ra
    // 0x808003B4: nop

    return;
    // 0x808003B4: nop

;}
RECOMP_FUNC void capod_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003C0: jal         0x8008FFE8
    // 0x808003C4: nop

    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x808003C4: nop

    after_0:
    // 0x808003C8: beq         $v0, $zero, L_808003E0
    if (ctx->r2 == 0) {
        // 0x808003CC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_808003E0;
    }
    // 0x808003CC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808003D0: jal         0x80089598
    // 0x808003D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _ncpod_entrypoint_27(rdram, ctx);
        goto after_1;
    // 0x808003D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808003D8: b           L_808003E8
    // 0x808003DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808003E8;
    // 0x808003DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808003E0:
    // 0x808003E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808003E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808003E8:
    // 0x808003E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003EC: jr          $ra
    // 0x808003F0: nop

    return;
    // 0x808003F0: nop

;}
RECOMP_FUNC void capod_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003FC: jal         0x8008FFE8
    // 0x80800400: nop

    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x80800400: nop

    after_0:
    // 0x80800404: beq         $v0, $zero, L_8080041C
    if (ctx->r2 == 0) {
        // 0x80800408: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8080041C;
    }
    // 0x80800408: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080040C: jal         0x80089598
    // 0x80800410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _ncpod_entrypoint_27(rdram, ctx);
        goto after_1;
    // 0x80800410: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800414: b           L_80800424
    // 0x80800418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800424;
    // 0x80800418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080041C:
    // 0x8080041C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800424:
    // 0x80800424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800428: jr          $ra
    // 0x8080042C: nop

    return;
    // 0x8080042C: nop

;}
RECOMP_FUNC void capod_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800438: jal         0x8008FFE8
    // 0x8080043C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x8080043C: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x80800440: beq         $v0, $zero, L_80800458
    if (ctx->r2 == 0) {
        // 0x80800444: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800458;
    }
    // 0x80800444: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800448: jal         0x800895A0
    // 0x8080044C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _ncpod_entrypoint_28(rdram, ctx);
        goto after_1;
    // 0x8080044C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800450: b           L_80800460
    // 0x80800454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800460;
    // 0x80800454: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800458:
    // 0x80800458: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8080045C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800460:
    // 0x80800460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800464: jr          $ra
    // 0x80800468: nop

    return;
    // 0x80800468: nop

;}
RECOMP_FUNC void capod_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080046C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800474: jal         0x8008FFE8
    // 0x80800478: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x80800478: swc1        $f12, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x8080047C: beq         $v0, $zero, L_80800494
    if (ctx->r2 == 0) {
        // 0x80800480: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800494;
    }
    // 0x80800480: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800484: jal         0x800895A8
    // 0x80800488: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _ncpod_entrypoint_29(rdram, ctx);
        goto after_1;
    // 0x80800488: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080048C: b           L_8080049C
    // 0x80800490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080049C;
    // 0x80800490: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800494:
    // 0x80800494: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080049C:
    // 0x8080049C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004A0: jr          $ra
    // 0x808004A4: nop

    return;
    // 0x808004A4: nop

;}
RECOMP_FUNC void capod_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004B0: jal         0x8008FFE8
    // 0x808004B4: nop

    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x808004B4: nop

    after_0:
    // 0x808004B8: beq         $v0, $zero, L_808004D0
    if (ctx->r2 == 0) {
        // 0x808004BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_808004D0;
    }
    // 0x808004BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808004C0: jal         0x800895B0
    // 0x808004C4: nop

    _ncpod_entrypoint_30(rdram, ctx);
        goto after_1;
    // 0x808004C4: nop

    after_1:
    // 0x808004C8: b           L_808004DC
    // 0x808004CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808004DC;
    // 0x808004CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808004D0:
    // 0x808004D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808004D4: nop

    // 0x808004D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808004DC:
    // 0x808004DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004E0: jr          $ra
    // 0x808004E4: nop

    return;
    // 0x808004E4: nop

;}
RECOMP_FUNC void capod_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004F0: jal         0x8008FFE8
    // 0x808004F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x808004F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808004F8: beq         $v0, $zero, L_80800508
    if (ctx->r2 == 0) {
        // 0x808004FC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800508;
    }
    // 0x808004FC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800500: jal         0x800895B8
    // 0x80800504: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    _ncpod_entrypoint_31(rdram, ctx);
        goto after_1;
    // 0x80800504: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_1:
L_80800508:
    // 0x80800508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080050C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800510: jr          $ra
    // 0x80800514: nop

    return;
    // 0x80800514: nop

;}
RECOMP_FUNC void capod_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800518: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080051C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800520: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800524: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800528: jal         0x8008FFE8
    // 0x8080052C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x8080052C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800530: beq         $v0, $zero, L_80800550
    if (ctx->r2 == 0) {
        // 0x80800534: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800550;
    }
    // 0x80800534: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800538: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8080053C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80800540: jal         0x800895C0
    // 0x80800544: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    _ncpod_entrypoint_32(rdram, ctx);
        goto after_1;
    // 0x80800544: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800548: b           L_80800558
    // 0x8080054C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800558;
    // 0x8080054C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800550:
    // 0x80800550: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800558:
    // 0x80800558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080055C: jr          $ra
    // 0x80800560: nop

    return;
    // 0x80800560: nop

;}
RECOMP_FUNC void capod_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800564: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800568: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080056C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800570: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800574: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800578: jal         0x8008FFE8
    // 0x8080057C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x8080057C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800580: beq         $v0, $zero, L_808005B0
    if (ctx->r2 == 0) {
        // 0x80800584: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_808005B0;
    }
    // 0x80800584: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800588: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8080058C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80800590: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80800594: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    // 0x80800598: jal         0x800895C8
    // 0x8080059C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    _ncpod_entrypoint_33(rdram, ctx);
        goto after_1;
    // 0x8080059C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_1:
    // 0x808005A0: beql        $v0, $zero, L_808005B4
    if (ctx->r2 == 0) {
        // 0x808005A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808005B4;
    }
    goto skip_0;
    // 0x808005A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x808005A8: b           L_808005B4
    // 0x808005AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808005B4;
    // 0x808005AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808005B0:
    // 0x808005B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808005B4:
    // 0x808005B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808005B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808005BC: jr          $ra
    // 0x808005C0: nop

    return;
    // 0x808005C0: nop

;}
RECOMP_FUNC void capod_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005CC: jal         0x8008FFE8
    // 0x808005D0: nop

    func_8008FFE8(rdram, ctx);
        goto after_0;
    // 0x808005D0: nop

    after_0:
    // 0x808005D4: beq         $v0, $zero, L_808005EC
    if (ctx->r2 == 0) {
        // 0x808005D8: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_808005EC;
    }
    // 0x808005D8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808005DC: jal         0x80089598
    // 0x808005E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _ncpod_entrypoint_27(rdram, ctx);
        goto after_1;
    // 0x808005E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808005E4: b           L_808005F4
    // 0x808005E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808005F4;
    // 0x808005E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808005EC:
    // 0x808005EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808005F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808005F4:
    // 0x808005F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005F8: jr          $ra
    // 0x808005FC: nop

    return;
    // 0x808005FC: nop

;}
RECOMP_FUNC void ch1pfreeze_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(171, 0X420) << 16);
    // 0x80800004: jr          $ra
    // 0x80800008: addiu       $v0, $v0, 0x420
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(171, 0X420));
    return;
    // 0x80800008: addiu       $v0, $v0, 0x420
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(171, 0X420));
;}
RECOMP_FUNC void func_8080000C_ch1pfreeze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080000C: jr          $ra
    // 0x80800010: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800010: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80800014_ch1pfreeze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800014: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800018: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080001C: lhu         $t6, 0x72($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X72);
    // 0x80800020: srl         $t7, $t6, 10
    ctx->r15 = S32(U32(ctx->r14) >> 10);
    // 0x80800024: slti        $at, $t7, 0x4
    ctx->r1 = SIGNED(ctx->r15) < 0X4 ? 1 : 0;
    // 0x80800028: beql        $at, $zero, L_80800048
    if (ctx->r1 == 0) {
        // 0x8080002C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800048;
    }
    goto skip_0;
    // 0x8080002C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800030: jal         0x80100094
    // 0x80800034: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80100094(rdram, ctx);
        goto after_0;
    // 0x80800034: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800038: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8080003C: jal         0x800F7B9C
    // 0x80800040: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_800F7B9C(rdram, ctx);
        goto after_1;
    // 0x80800040: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_1:
    // 0x80800044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800048:
    // 0x80800048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080004C: jr          $ra
    // 0x80800050: nop

    return;
    // 0x80800050: nop

;}
RECOMP_FUNC void func_80800054_ch1pfreeze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800054: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800058: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080005C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800060: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800064: jal         0x80100094
    // 0x80800068: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80100094(rdram, ctx);
        goto after_0;
    // 0x80800068: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8080006C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80800070: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800074: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800078: lhu         $v1, 0x72($t6)
    ctx->r3 = MEM_HU(ctx->r14, 0X72);
    // 0x8080007C: srl         $t7, $v1, 10
    ctx->r15 = S32(U32(ctx->r3) >> 10);
    // 0x80800080: beq         $t7, $at, L_80800098
    if (ctx->r15 == ctx->r1) {
        // 0x80800084: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800098;
    }
    // 0x80800084: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800088: beq         $t7, $at, L_808000DC
    if (ctx->r15 == ctx->r1) {
        // 0x8080008C: nop
    
            goto L_808000DC;
    }
    // 0x8080008C: nop

    // 0x80800090: b           L_8080011C
    // 0x80800094: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
        goto L_8080011C;
    // 0x80800094: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_80800098:
    // 0x80800098: jal         0x800D8FF8
    // 0x8080009C: nop

    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x8080009C: nop

    after_1:
    // 0x808000A0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000A4: jal         0x800F1574
    // 0x808000A8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_800F1574(rdram, ctx);
        goto after_2;
    // 0x808000A8: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_2:
    // 0x808000AC: beq         $v0, $zero, L_808000BC
    if (ctx->r2 == 0) {
        // 0x808000B0: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_808000BC;
    }
    // 0x808000B0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808000B4: jal         0x800002D0
    // 0x808000B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808002D0_ch1pfreeze(rdram, ctx);
        goto after_3;
    // 0x808000B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
L_808000BC:
    // 0x808000BC: lwc1        $f4, 0x14($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X14);
    // 0x808000C0: lwc1        $f6, 0x18($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X18);
    // 0x808000C4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808000C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808000CC: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x808000D0: sub.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f8.fl;
    // 0x808000D4: b           L_80800118
    // 0x808000D8: swc1        $f16, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f16.u32l;
        goto L_80800118;
    // 0x808000D8: swc1        $f16, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f16.u32l;
L_808000DC:
    // 0x808000DC: jal         0x800D8FF8
    // 0x808000E0: nop

    func_800D8FF8(rdram, ctx);
        goto after_4;
    // 0x808000E0: nop

    after_4:
    // 0x808000E4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000E8: jal         0x800F1574
    // 0x808000EC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    func_800F1574(rdram, ctx);
        goto after_5;
    // 0x808000EC: addiu       $a0, $s0, 0x14
    ctx->r4 = ADD32(ctx->r16, 0X14);
    after_5:
    // 0x808000F0: beql        $v0, $zero, L_8080010C
    if (ctx->r2 == 0) {
        // 0x808000F4: lwc1        $f18, 0x14($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
            goto L_8080010C;
    }
    goto skip_0;
    // 0x808000F4: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
    skip_0:
    // 0x808000F8: jal         0x800FFAB0
    // 0x808000FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800FFAB0(rdram, ctx);
        goto after_6;
    // 0x808000FC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_6:
    // 0x80800100: b           L_8080013C
    // 0x80800104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_8080013C;
    // 0x80800104: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800108: lwc1        $f18, 0x14($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X14);
L_8080010C:
    // 0x8080010C: lwc1        $f4, 0x18($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X18);
    // 0x80800110: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80800114: swc1        $f6, 0x1C($s0)
    MEM_W(0X1C, ctx->r16) = ctx->f6.u32l;
L_80800118:
    // 0x80800118: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
L_8080011C:
    // 0x8080011C: lwc1        $f12, 0x1C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X1C);
    // 0x80800120: jal         0x800F1214
    // 0x80800124: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    func_800F1214(rdram, ctx);
        goto after_7;
    // 0x80800124: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    after_7:
    // 0x80800128: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x8080012C: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x80800130: nop

    // 0x80800134: sw          $t9, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->r25;
    // 0x80800138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080013C:
    // 0x8080013C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800140: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800144: jr          $ra
    // 0x80800148: nop

    return;
    // 0x80800148: nop

;}
RECOMP_FUNC void func_8080014C_ch1pfreeze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080014C: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80800150: sw          $s6, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r22;
    // 0x80800154: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x80800158: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8080015C: sw          $s1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r17;
    // 0x80800160: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800164: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x80800168: sw          $s4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r20;
    // 0x8080016C: sw          $s3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r19;
    // 0x80800170: sw          $s2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r18;
    // 0x80800174: sw          $s0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r16;
    // 0x80800178: sdc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X38, ctx->r29);
    // 0x8080017C: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x80800180: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80800184: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80800188: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8080018C: jal         0x80100094
    // 0x80800190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80100094(rdram, ctx);
        goto after_0;
    // 0x80800190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800194: jal         0x800A89F8
    // 0x80800198: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    func_800A89F8(rdram, ctx);
        goto after_1;
    // 0x80800198: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_1:
    // 0x8080019C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808001A0: jal         0x800F5ECC
    // 0x808001A4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_800F5ECC(rdram, ctx);
        goto after_2;
    // 0x808001A4: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_2:
    // 0x808001A8: beq         $v0, $s0, L_8080024C
    if (ctx->r2 == ctx->r16) {
        // 0x808001AC: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_8080024C;
    }
    // 0x808001AC: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x808001B0: lhu         $t6, 0x72($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X72);
    // 0x808001B4: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x808001B8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808001BC: srl         $t7, $t6, 10
    ctx->r15 = S32(U32(ctx->r14) >> 10);
    // 0x808001C0: beq         $t7, $at, L_80800258
    if (ctx->r15 == ctx->r1) {
        // 0x808001C4: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80800258;
    }
    // 0x808001C4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x808001C8: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x808001CC: mtc1        $at, $f28
    ctx->f28.u32l = ctx->r1;
    // 0x808001D0: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x808001D4: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x808001D8: lui         $at, 0x4296
    ctx->r1 = S32(0X4296 << 16);
    // 0x808001DC: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x808001E0: mtc1        $zero, $f22
    ctx->f22.u32l = 0;
    // 0x808001E4: addiu       $s3, $s1, 0x4
    ctx->r19 = ADD32(ctx->r17, 0X4);
    // 0x808001E8: addiu       $s5, $zero, 0x3
    ctx->r21 = ADD32(0, 0X3);
    // 0x808001EC: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x808001F0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_808001F4:
    // 0x808001F4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x808001F8: jal         0x800F5794
    // 0x808001FC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800F5794(rdram, ctx);
        goto after_3;
    // 0x808001FC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_3:
    // 0x80800200: beq         $s0, $s4, L_80800214
    if (ctx->r16 == ctx->r20) {
        // 0x80800204: mov.s       $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
            goto L_80800214;
    }
    // 0x80800204: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80800208: swc1        $f22, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f22.u32l;
    // 0x8080020C: b           L_8080021C
    // 0x80800210: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
        goto L_8080021C;
    // 0x80800210: add.s       $f20, $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f0.fl;
L_80800214:
    // 0x80800214: mul.s       $f2, $f20, $f26
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f2.fl = MUL_S(ctx->f20.fl, ctx->f26.fl);
    // 0x80800218: swc1        $f28, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f28.u32l;
L_8080021C:
    // 0x8080021C: div.s       $f6, $f2, $f24
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 24);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f24.fl); 
    ctx->f6.fl = DIV_S(ctx->f2.fl, ctx->f24.fl);
    // 0x80800220: lwc1        $f4, 0x1C($s2)
    ctx->f4.u32l = MEM_W(ctx->r18, 0X1C);
    // 0x80800224: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800228: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x8080022C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80800230: jal         0x80101870
    // 0x80800234: swc1        $f8, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f8.u32l;
    func_80101870(rdram, ctx);
        goto after_4;
    // 0x80800234: swc1        $f8, 0x38($s1)
    MEM_W(0X38, ctx->r17) = ctx->f8.u32l;
    after_4:
    // 0x80800238: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8080023C: bnel        $s0, $s5, L_808001F4
    if (ctx->r16 != ctx->r21) {
        // 0x80800240: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_808001F4;
    }
    goto skip_0;
    // 0x80800240: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_0:
    // 0x80800244: b           L_8080025C
    // 0x80800248: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
        goto L_8080025C;
    // 0x80800248: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_8080024C:
    // 0x8080024C: lw          $a1, 0x10($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X10);
    // 0x80800250: jal         0x800B99CC
    // 0x80800254: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    func_800B99CC(rdram, ctx);
        goto after_5;
    // 0x80800254: addiu       $a2, $s2, 0x4
    ctx->r6 = ADD32(ctx->r18, 0X4);
    after_5:
L_80800258:
    // 0x80800258: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
L_8080025C:
    // 0x8080025C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80800260: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80800264: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x80800268: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x8080026C: ldc1        $f28, 0x38($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X38);
    // 0x80800270: lw          $s0, 0x40($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X40);
    // 0x80800274: lw          $s1, 0x44($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X44);
    // 0x80800278: lw          $s2, 0x48($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X48);
    // 0x8080027C: lw          $s3, 0x4C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X4C);
    // 0x80800280: lw          $s4, 0x50($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X50);
    // 0x80800284: lw          $s5, 0x54($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X54);
    // 0x80800288: lw          $s6, 0x58($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X58);
    // 0x8080028C: jr          $ra
    // 0x80800290: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80800290: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80800294_ch1pfreeze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800298: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8080029C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002A0: bne         $a1, $at, L_808002B8
    if (ctx->r5 != ctx->r1) {
        // 0x808002A4: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_808002B8;
    }
    // 0x808002A4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x808002A8: jal         0x800002D0
    // 0x808002AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_808002D0_ch1pfreeze(rdram, ctx);
        goto after_0;
    // 0x808002AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_0:
    // 0x808002B0: b           L_808002C0
    // 0x808002B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808002C0;
    // 0x808002B4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808002B8:
    // 0x808002B8: b           L_808002C0
    // 0x808002BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808002C0;
    // 0x808002BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808002C0:
    // 0x808002C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002C8: jr          $ra
    // 0x808002CC: nop

    return;
    // 0x808002CC: nop

;}
RECOMP_FUNC void func_808002D0_ch1pfreeze(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808002D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002DC: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x808002E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002E4: jal         0x80100094
    // 0x808002E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80100094(rdram, ctx);
        goto after_0;
    // 0x808002E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808002EC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x808002F0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x808002F4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808002F8: beq         $t6, $at, L_80800320
    if (ctx->r14 == ctx->r1) {
        // 0x808002FC: addiu       $a0, $v1, 0x4
        ctx->r4 = ADD32(ctx->r3, 0X4);
            goto L_80800320;
    }
    // 0x808002FC: addiu       $a0, $v1, 0x4
    ctx->r4 = ADD32(ctx->r3, 0X4);
    // 0x80800300: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800304: beq         $t6, $at, L_80800358
    if (ctx->r14 == ctx->r1) {
        // 0x80800308: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800358;
    }
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080030C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800310: beq         $t6, $at, L_80800368
    if (ctx->r14 == ctx->r1) {
        // 0x80800314: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_80800368;
    }
    // 0x80800314: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80800318: b           L_80800398
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800398;
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800320:
    // 0x80800320: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    // 0x80800324: addiu       $a2, $zero, 0xC0
    ctx->r6 = ADD32(0, 0XC0);
    // 0x80800328: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    // 0x8080032C: jal         0x800EFA88
    // 0x80800330: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    func_800EFA88(rdram, ctx);
        goto after_1;
    // 0x80800330: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_1:
    // 0x80800334: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80800338: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x8080033C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800340: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800344: sw          $zero, 0x10($v1)
    MEM_W(0X10, ctx->r3) = 0;
    // 0x80800348: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x8080034C: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    // 0x80800350: b           L_80800394
    // 0x80800354: swc1        $f4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f4.u32l;
        goto L_80800394;
    // 0x80800354: swc1        $f4, 0x1C($v1)
    MEM_W(0X1C, ctx->r3) = ctx->f4.u32l;
L_80800358:
    // 0x80800358: jal         0x80103110
    // 0x8080035C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80103110(rdram, ctx);
        goto after_2;
    // 0x8080035C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800360: b           L_80800398
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800398;
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800368:
    // 0x80800368: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8080036C: jal         0x80089B88
    // 0x80800370: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    _sufreezy_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x80800370: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    after_3:
    // 0x80800374: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80800378: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080037C: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80800380: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800388: swc1        $f0, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f0.u32l;
    // 0x8080038C: jal         0x80103110
    // 0x80800390: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    func_80103110(rdram, ctx);
        goto after_4;
    // 0x80800390: swc1        $f0, 0x18($v1)
    MEM_W(0X18, ctx->r3) = ctx->f0.u32l;
    after_4:
L_80800394:
    // 0x80800394: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800398:
    // 0x80800398: jal         0x80101FDC
    // 0x8080039C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_80101FDC(rdram, ctx);
        goto after_5;
    // 0x8080039C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x808003A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808003AC: jr          $ra
    // 0x808003B0: nop

    return;
    // 0x808003B0: nop

;}
RECOMP_FUNC void ch1pfreeze_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808003B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003BC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x808003C0: jal         0x800F5A00
    // 0x808003C4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800F5A00(rdram, ctx);
        goto after_0;
    // 0x808003C4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x808003C8: addiu       $a0, $zero, 0x2C5
    ctx->r4 = ADD32(0, 0X2C5);
    // 0x808003CC: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x808003D0: jal         0x80108474
    // 0x808003D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80108474(rdram, ctx);
        goto after_1;
    // 0x808003D4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x808003D8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x808003DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808003E0: jal         0x80100094
    // 0x808003E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80100094(rdram, ctx);
        goto after_2;
    // 0x808003E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808003E8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808003EC: jal         0x800F5F24
    // 0x808003F0: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    func_800F5F24(rdram, ctx);
        goto after_3;
    // 0x808003F0: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    after_3:
    // 0x808003F4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x808003F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808003FC: jal         0x800002D0
    // 0x80800400: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    func_808002D0_ch1pfreeze(rdram, ctx);
        goto after_4;
    // 0x80800400: swc1        $f0, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f0.u32l;
    after_4:
    // 0x80800404: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80800408: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080040C: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x80800410: jr          $ra
    // 0x80800414: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80800414: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800418: nop

    // 0x8080041C: nop

;}
RECOMP_FUNC void ch2dbaddy_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(172, 0XA9C) << 16);
    // 0x80800004: jr          $ra
    // 0x80800008: addiu       $v0, $v0, 0xA9C
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(172, 0XA9C));
    return;
    // 0x80800008: addiu       $v0, $v0, 0xA9C
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(172, 0XA9C));
;}
RECOMP_FUNC void func_8080000C_ch2dbaddy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080000C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800010: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800014: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800018: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080001C: jal         0x8008A0F8
    // 0x80800020: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    _sucoaster_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800020: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x80800024: beq         $v0, $zero, L_8080008C
    if (ctx->r2 == 0) {
        // 0x80800028: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080008C;
    }
    // 0x80800028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080002C: lui         $a1, 0x3F0C
    ctx->r5 = S32(0X3F0C << 16);
    // 0x80800030: jal         0x8010A3E8
    // 0x80800034: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8010A3E8(rdram, ctx);
        goto after_1;
    // 0x80800034: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_1:
    // 0x80800038: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(172, 0X8A0) << 16);
    // 0x8080003C: lwc1        $f6, 0x8A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(172, 0X8A0));
    // 0x80800040: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x80800044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800048: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8080004C: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x80800050: jal         0x80102FDC
    // 0x80800054: nop

    func_80102FDC(rdram, ctx);
        goto after_2;
    // 0x80800054: nop

    after_2:
    // 0x80800058: jal         0x8008A110
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _sucoaster_entrypoint_3(rdram, ctx);
        goto after_3;
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800060: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800064: jal         0x80000850
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800850_ch2dbaddy(rdram, ctx);
        goto after_4;
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080006C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800070: jal         0x800EE940
    // 0x80800074: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    func_800EE940(rdram, ctx);
        goto after_5;
    // 0x80800074: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_5:
    // 0x80800078: lbu         $t6, 0x65($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X65);
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800080: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x80800084: jal         0x8010A570
    // 0x80800088: sb          $t7, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r15;
    func_8010A570(rdram, ctx);
        goto after_6;
    // 0x80800088: sb          $t7, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r15;
    after_6:
L_8080008C:
    // 0x8080008C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800090: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800094: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800098: jr          $ra
    // 0x8080009C: nop

    return;
    // 0x8080009C: nop

;}
RECOMP_FUNC void func_808000A0_ch2dbaddy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808000A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000AC: jal         0x8008A108
    // 0x808000B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _sucoaster_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808000B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000B4: lw          $t6, 0x78($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X78);
    // 0x808000B8: sll         $t8, $t6, 29
    ctx->r24 = S32(ctx->r14 << 29);
    // 0x808000BC: bltzl       $t8, L_80800298
    if (SIGNED(ctx->r24) < 0) {
        // 0x808000C0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800298;
    }
    goto skip_0;
    // 0x808000C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808000C4: lhu         $t9, 0x72($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X72);
    // 0x808000C8: srl         $t0, $t9, 10
    ctx->r8 = S32(U32(ctx->r25) >> 10);
    // 0x808000CC: addiu       $t1, $t0, -0x2
    ctx->r9 = ADD32(ctx->r8, -0X2);
    // 0x808000D0: sltiu       $at, $t1, 0x15
    ctx->r1 = ctx->r9 < 0X15 ? 1 : 0;
    // 0x808000D4: beq         $at, $zero, L_80800294
    if (ctx->r1 == 0) {
        // 0x808000D8: sll         $t1, $t1, 2
        ctx->r9 = S32(ctx->r9 << 2);
            goto L_80800294;
    }
    // 0x808000D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x808000DC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(172, 0X8A4) << 16);
    // 0x808000E0: addu        $at, $at, $t1
    gpr jr_addend_808000E8 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x808000E4: lw          $t1, 0x8A4($at)
    ctx->r9 = ADD32(ctx->r1, (int16_t)RELOC_LO16(172, 0X8A4));
    // 0x808000E8: jr          $t1
    // 0x808000EC: nop

    switch (jr_addend_808000E8 >> 2) {
        case 0: goto L_808000F0; break;
        case 1: goto L_808000F0; break;
        case 2: goto L_80800294; break;
        case 3: goto L_80800294; break;
        case 4: goto L_80800294; break;
        case 5: goto L_80800294; break;
        case 6: goto L_808000F0; break;
        case 7: goto L_80800294; break;
        case 8: goto L_80800294; break;
        case 9: goto L_80800294; break;
        case 10: goto L_80800294; break;
        case 11: goto L_80800294; break;
        case 12: goto L_80800294; break;
        case 13: goto L_80800294; break;
        case 14: goto L_80800294; break;
        case 15: goto L_80800294; break;
        case 16: goto L_80800294; break;
        case 17: goto L_80800114; break;
        case 18: goto L_8080013C; break;
        case 19: goto L_80800214; break;
        case 20: goto L_808001C4; break;
        default: switch_error(__func__, 0x808000E8, 0x808008A4);
    }
    // 0x808000EC: nop

L_808000F0:
    // 0x808000F0: jal         0x80000468
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800468_ch2dbaddy(rdram, ctx);
        goto after_1;
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808000F8: beq         $v0, $zero, L_80800294
    if (ctx->r2 == 0) {
        // 0x808000FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800294;
    }
    // 0x808000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800100: jal         0x8008A148
    // 0x80800104: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    _sucoaster_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x80800104: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_2:
    // 0x80800108: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080010C: b           L_80800294
    // 0x80800110: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
        goto L_80800294;
    // 0x80800110: swc1        $f4, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f4.u32l;
L_80800114:
    // 0x80800114: jal         0x8008A190
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _sucoaster_entrypoint_19(rdram, ctx);
        goto after_3;
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080011C: jal         0x8000041C
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080041C_ch2dbaddy(rdram, ctx);
        goto after_4;
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800124: beq         $v0, $zero, L_80800294
    if (ctx->r2 == 0) {
        // 0x80800128: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800294;
    }
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080012C: jal         0x80000700
    // 0x80800130: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_80800700_ch2dbaddy(rdram, ctx);
        goto after_5;
    // 0x80800130: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_5:
    // 0x80800134: b           L_80800298
    // 0x80800138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800298;
    // 0x80800138: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080013C:
    // 0x8080013C: jal         0x80000820
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800820_ch2dbaddy(rdram, ctx);
        goto after_6;
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800144: jal         0x8010CD28
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010CD28(rdram, ctx);
        goto after_7;
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080014C: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800150: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    // 0x80800154: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80800160: jal         0x80102BF8
    // 0x80800164: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    func_80102BF8(rdram, ctx);
        goto after_8;
    // 0x80800164: lui         $a3, 0x4396
    ctx->r7 = S32(0X4396 << 16);
    after_8:
    // 0x80800168: lw          $a1, 0x64($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X64);
    // 0x8080016C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800170: sll         $t2, $a1, 11
    ctx->r10 = S32(ctx->r5 << 11);
    // 0x80800174: jal         0x8010A5B0
    // 0x80800178: srl         $a1, $t2, 31
    ctx->r5 = S32(U32(ctx->r10) >> 31);
    func_8010A5B0(rdram, ctx);
        goto after_9;
    // 0x80800178: srl         $a1, $t2, 31
    ctx->r5 = S32(U32(ctx->r10) >> 31);
    after_9:
    // 0x8080017C: lbu         $t5, 0x65($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X65);
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800184: ori         $t6, $t5, 0x10
    ctx->r14 = ctx->r13 | 0X10;
    // 0x80800188: jal         0x80101DDC
    // 0x8080018C: sb          $t6, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r14;
    func_80101DDC(rdram, ctx);
        goto after_10;
    // 0x8080018C: sb          $t6, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r14;
    after_10:
    // 0x80800190: beql        $v0, $zero, L_80800298
    if (ctx->r2 == 0) {
        // 0x80800194: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800298;
    }
    goto skip_1;
    // 0x80800194: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800198: lw          $t7, 0x64($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X64);
    // 0x8080019C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x808001A0: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x808001A4: bgez        $t9, L_808001B4
    if (SIGNED(ctx->r25) >= 0) {
        // 0x808001A8: nop
    
            goto L_808001B4;
    }
    // 0x808001A8: nop

    // 0x808001AC: b           L_808001B4
    // 0x808001B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
        goto L_808001B4;
    // 0x808001B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
L_808001B4:
    // 0x808001B4: jal         0x8008A148
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _sucoaster_entrypoint_10(rdram, ctx);
        goto after_11;
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808001BC: b           L_80800298
    // 0x808001C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800298;
    // 0x808001C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001C4:
    // 0x808001C4: jal         0x8008A190
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _sucoaster_entrypoint_19(rdram, ctx);
        goto after_12;
    // 0x808001C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808001CC: jal         0x80101F24
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80101F24(rdram, ctx);
        goto after_13;
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808001D4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(172, 0X8F8) << 16);
    // 0x808001D8: lwc1        $f6, 0x8F8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(172, 0X8F8));
    // 0x808001DC: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x808001E0: nop

    // 0x808001E4: bc1f        L_808001F4
    if (!c1cs) {
        // 0x808001E8: nop
    
            goto L_808001F4;
    }
    // 0x808001E8: nop

    // 0x808001EC: jal         0x8010A570
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010A570(rdram, ctx);
        goto after_14;
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
L_808001F4:
    // 0x808001F4: jal         0x80101DDC
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80101DDC(rdram, ctx);
        goto after_15;
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808001FC: beq         $v0, $zero, L_80800294
    if (ctx->r2 == 0) {
        // 0x80800200: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800294;
    }
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800204: jal         0x80000700
    // 0x80800208: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    func_80800700_ch2dbaddy(rdram, ctx);
        goto after_16;
    // 0x80800208: addiu       $a1, $zero, 0x13
    ctx->r5 = ADD32(0, 0X13);
    after_16:
    // 0x8080020C: b           L_80800298
    // 0x80800210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800298;
    // 0x80800210: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800214:
    // 0x80800214: jal         0x8008A190
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _sucoaster_entrypoint_19(rdram, ctx);
        goto after_17;
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x8080021C: jal         0x8008A160
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _sucoaster_entrypoint_13(rdram, ctx);
        goto after_18;
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800224: bnel        $v0, $zero, L_80800288
    if (ctx->r2 != 0) {
        // 0x80800228: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800288;
    }
    goto skip_2;
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x8080022C: jal         0x800003C4
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808003C4_ch2dbaddy(rdram, ctx);
        goto after_19;
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800234: beq         $v0, $zero, L_80800250
    if (ctx->r2 == 0) {
        // 0x80800238: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800250;
    }
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: jal         0x8008A148
    // 0x80800240: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    _sucoaster_entrypoint_10(rdram, ctx);
        goto after_20;
    // 0x80800240: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    after_20:
    // 0x80800244: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80800248: b           L_80800294
    // 0x8080024C: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
        goto L_80800294;
    // 0x8080024C: swc1        $f8, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->f8.u32l;
L_80800250:
    // 0x80800250: jal         0x80089F78
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _subaddierouteDll_entrypoint_4(rdram, ctx);
        goto after_21;
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80800258: beql        $v0, $zero, L_80800288
    if (ctx->r2 == 0) {
        // 0x8080025C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800288;
    }
    goto skip_3;
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80800260: jal         0x8008A110
    // 0x80800264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _sucoaster_entrypoint_3(rdram, ctx);
        goto after_22;
    // 0x80800264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800268: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8080026C: jal         0x800EE88C
    // 0x80800270: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800EE88C(rdram, ctx);
        goto after_23;
    // 0x80800270: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_23:
    // 0x80800274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800278: jal         0x80102D78
    // 0x8080027C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80102D78(rdram, ctx);
        goto after_24;
    // 0x8080027C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_24:
    // 0x80800280: swc1        $f0, 0x54($s0)
    MEM_W(0X54, ctx->r16) = ctx->f0.u32l;
    // 0x80800284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800288:
    // 0x80800288: addiu       $a1, $zero, 0x5802
    ctx->r5 = ADD32(0, 0X5802);
    // 0x8080028C: jal         0x8008A130
    // 0x80800290: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    _sucoaster_entrypoint_7(rdram, ctx);
        goto after_25;
    // 0x80800290: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    after_25:
L_80800294:
    // 0x80800294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800298:
    // 0x80800298: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080029C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808002A0: jr          $ra
    // 0x808002A4: nop

    return;
    // 0x808002A4: nop

;}
RECOMP_FUNC void func_808002A8_ch2dbaddy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808002B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002B4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x808002B8: beq         $a1, $at, L_808002F0
    if (ctx->r5 == ctx->r1) {
        // 0x808002BC: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_808002F0;
    }
    // 0x808002BC: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x808002C0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808002C4: beq         $a1, $at, L_808002F0
    if (ctx->r5 == ctx->r1) {
        // 0x808002C8: addiu       $at, $zero, 0x38
        ctx->r1 = ADD32(0, 0X38);
            goto L_808002F0;
    }
    // 0x808002C8: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x808002CC: beq         $a1, $at, L_80800390
    if (ctx->r5 == ctx->r1) {
        // 0x808002D0: addiu       $at, $zero, 0x42
        ctx->r1 = ADD32(0, 0X42);
            goto L_80800390;
    }
    // 0x808002D0: addiu       $at, $zero, 0x42
    ctx->r1 = ADD32(0, 0X42);
    // 0x808002D4: beq         $a1, $at, L_80800348
    if (ctx->r5 == ctx->r1) {
        // 0x808002D8: addiu       $v0, $sp, 0x20
        ctx->r2 = ADD32(ctx->r29, 0X20);
            goto L_80800348;
    }
    // 0x808002D8: addiu       $v0, $sp, 0x20
    ctx->r2 = ADD32(ctx->r29, 0X20);
    // 0x808002DC: addiu       $at, $zero, 0x95
    ctx->r1 = ADD32(0, 0X95);
    // 0x808002E0: beq         $a1, $at, L_8080035C
    if (ctx->r5 == ctx->r1) {
        // 0x808002E4: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_8080035C;
    }
    // 0x808002E4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x808002E8: b           L_808003A4
    // 0x808002EC: nop

        goto L_808003A4;
    // 0x808002EC: nop

L_808002F0:
    // 0x808002F0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x808002F4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x808002F8: jal         0x8008A1A0
    // 0x808002FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _sucoaster_entrypoint_21(rdram, ctx);
        goto after_0;
    // 0x808002FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800300: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800304: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800308: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x8080030C: sll         $t8, $t6, 29
    ctx->r24 = S32(ctx->r14 << 29);
    // 0x80800310: bltzl       $t8, L_808003B4
    if (SIGNED(ctx->r24) < 0) {
        // 0x80800314: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_808003B4;
    }
    goto skip_0;
    // 0x80800314: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
    // 0x80800318: lw          $t9, 0x64($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X64);
    // 0x8080031C: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80800320: bgez        $t1, L_80800338
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80800324: nop
    
            goto L_80800338;
    }
    // 0x80800324: nop

    // 0x80800328: jal         0x800004A8
    // 0x8080032C: nop

    func_808004A8_ch2dbaddy(rdram, ctx);
        goto after_1;
    // 0x8080032C: nop

    after_1:
    // 0x80800330: b           L_808003B4
    // 0x80800334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808003B4;
    // 0x80800334: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800338:
    // 0x80800338: jal         0x800004F4
    // 0x8080033C: nop

    func_808004F4_ch2dbaddy(rdram, ctx);
        goto after_2;
    // 0x8080033C: nop

    after_2:
    // 0x80800340: b           L_808003B4
    // 0x80800344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808003B4;
    // 0x80800344: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800348:
    // 0x80800348: lh          $a1, 0x0($v0)
    ctx->r5 = MEM_H(ctx->r2, 0X0);
    // 0x8080034C: jal         0x80000564
    // 0x80800350: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    func_80800564_ch2dbaddy(rdram, ctx);
        goto after_3;
    // 0x80800350: lbu         $a2, 0x2($v0)
    ctx->r6 = MEM_BU(ctx->r2, 0X2);
    after_3:
    // 0x80800354: b           L_808003B0
    // 0x80800358: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_808003B0;
    // 0x80800358: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8080035C:
    // 0x8080035C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800360: jal         0x8008A110
    // 0x80800364: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    _sucoaster_entrypoint_3(rdram, ctx);
        goto after_4;
    // 0x80800364: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_4:
    // 0x80800368: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080036C: lhu         $a1, 0x6($v0)
    ctx->r5 = MEM_HU(ctx->r2, 0X6);
    // 0x80800370: jal         0x801032B0
    // 0x80800374: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_801032B0(rdram, ctx);
        goto after_5;
    // 0x80800374: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_5:
    // 0x80800378: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080037C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800380: jal         0x8008A1A0
    // 0x80800384: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    _sucoaster_entrypoint_21(rdram, ctx);
        goto after_6;
    // 0x80800384: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    after_6:
    // 0x80800388: b           L_808003B0
    // 0x8080038C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_808003B0;
    // 0x8080038C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80800390:
    // 0x80800390: lui         $a0, 0x0
    ctx->r4 = S32(RELOC_HI16(172, 0XA3C) << 16);
    // 0x80800394: jal         0x80101074
    // 0x80800398: addiu       $a0, $a0, 0xA3C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(172, 0XA3C));
    func_80101074(rdram, ctx);
        goto after_7;
    // 0x80800398: addiu       $a0, $a0, 0xA3C
    ctx->r4 = ADD32(ctx->r4, (int16_t)RELOC_LO16(172, 0XA3C));
    after_7:
    // 0x8080039C: b           L_808003B4
    // 0x808003A0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
        goto L_808003B4;
    // 0x808003A0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_808003A4:
    // 0x808003A4: jal         0x8008A1A0
    // 0x808003A8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    _sucoaster_entrypoint_21(rdram, ctx);
        goto after_8;
    // 0x808003A8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_8:
    // 0x808003AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_808003B0:
    // 0x808003B0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_808003B4:
    // 0x808003B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003BC: jr          $ra
    // 0x808003C0: nop

    return;
    // 0x808003C0: nop

;}
RECOMP_FUNC void func_808003C4_ch2dbaddy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003CC: jal         0x8008A110
    // 0x808003D0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    _sucoaster_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808003D0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x808003D4: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x808003D8: jal         0x800EE88C
    // 0x808003DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800EE88C(rdram, ctx);
        goto after_1;
    // 0x808003DC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x808003E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808003E4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x808003E8: jal         0x800EFC7C
    // 0x808003EC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EFC7C(rdram, ctx);
        goto after_2;
    // 0x808003EC: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_2:
    // 0x808003F0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(172, 0X8FC) << 16);
    // 0x808003F4: lwc1        $f4, 0x8FC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(172, 0X8FC));
    // 0x808003F8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808003FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800400: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800404: nop

    // 0x80800408: bc1f        L_80800414
    if (!c1cs) {
        // 0x8080040C: nop
    
            goto L_80800414;
    }
    // 0x8080040C: nop

    // 0x80800410: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800414:
    // 0x80800414: jr          $ra
    // 0x80800418: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800418: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8080041C_ch2dbaddy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080041C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800424: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x80800428: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8080042C: bgez        $t8, L_80800448
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80800430: nop
    
            goto L_80800448;
    }
    // 0x80800430: nop

    // 0x80800434: jal         0x80089BD8
    // 0x80800438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _subaddiejoy_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x80800438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8080043C: xori        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 ^ 0X1;
    // 0x80800440: b           L_80800458
    // 0x80800444: sltiu       $v0, $t9, 0x1
    ctx->r2 = ctx->r25 < 0X1 ? 1 : 0;
        goto L_80800458;
    // 0x80800444: sltiu       $v0, $t9, 0x1
    ctx->r2 = ctx->r25 < 0X1 ? 1 : 0;
L_80800448:
    // 0x80800448: jal         0x8008A160
    // 0x8080044C: nop

    _sucoaster_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x8080044C: nop

    after_1:
    // 0x80800450: xori        $t0, $v0, 0x1
    ctx->r8 = ctx->r2 ^ 0X1;
    // 0x80800454: sltiu       $v0, $t0, 0x1
    ctx->r2 = ctx->r8 < 0X1 ? 1 : 0;
L_80800458:
    // 0x80800458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080045C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800460: jr          $ra
    // 0x80800464: nop

    return;
    // 0x80800464: nop

;}
RECOMP_FUNC void func_80800468_ch2dbaddy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800468: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080046C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800470: lw          $t6, 0x64($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X64);
    // 0x80800474: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800478: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x8080047C: bgez        $t8, L_80800498
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80800480: nop
    
            goto L_80800498;
    }
    // 0x80800480: nop

    // 0x80800484: jal         0x80089BD8
    // 0x80800488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _subaddiejoy_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x80800488: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8080048C: xori        $t9, $v0, 0x1
    ctx->r25 = ctx->r2 ^ 0X1;
    // 0x80800490: b           L_80800498
    // 0x80800494: sltiu       $v0, $t9, 0x1
    ctx->r2 = ctx->r25 < 0X1 ? 1 : 0;
        goto L_80800498;
    // 0x80800494: sltiu       $v0, $t9, 0x1
    ctx->r2 = ctx->r25 < 0X1 ? 1 : 0;
L_80800498:
    // 0x80800498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080049C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004A0: jr          $ra
    // 0x808004A4: nop

    return;
    // 0x808004A4: nop

;}
RECOMP_FUNC void func_808004A8_ch2dbaddy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004B0: lhu         $v0, 0x72($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X72);
    // 0x808004B4: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x808004B8: srl         $t6, $v0, 10
    ctx->r14 = S32(U32(ctx->r2) >> 10);
    // 0x808004BC: beq         $t6, $at, L_808004DC
    if (ctx->r14 == ctx->r1) {
        // 0x808004C0: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_808004DC;
    }
    // 0x808004C0: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x808004C4: bnel        $t6, $at, L_808004E8
    if (ctx->r14 != ctx->r1) {
        // 0x808004C8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808004E8;
    }
    goto skip_0;
    // 0x808004C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808004CC: jal         0x8008A148
    // 0x808004D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _sucoaster_entrypoint_10(rdram, ctx);
        goto after_0;
    // 0x808004D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x808004D4: b           L_808004E8
    // 0x808004D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808004E8;
    // 0x808004D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808004DC:
    // 0x808004DC: jal         0x80000700
    // 0x808004E0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_80800700_ch2dbaddy(rdram, ctx);
        goto after_1;
    // 0x808004E0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_1:
    // 0x808004E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808004E8:
    // 0x808004E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004EC: jr          $ra
    // 0x808004F0: nop

    return;
    // 0x808004F0: nop

;}
RECOMP_FUNC void func_808004F4_ch2dbaddy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808004F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004FC: lhu         $v0, 0x72($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X72);
    // 0x80800500: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800504: srl         $t6, $v0, 10
    ctx->r14 = S32(U32(ctx->r2) >> 10);
    // 0x80800508: beq         $t6, $at, L_80800520
    if (ctx->r14 == ctx->r1) {
        // 0x8080050C: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800520;
    }
    // 0x8080050C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800510: beq         $t6, $at, L_80800520
    if (ctx->r14 == ctx->r1) {
        // 0x80800514: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_80800520;
    }
    // 0x80800514: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80800518: bnel        $t6, $at, L_80800558
    if (ctx->r14 != ctx->r1) {
        // 0x8080051C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800558;
    }
    goto skip_0;
    // 0x8080051C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_80800520:
    // 0x80800520: jal         0x8008A4A8
    // 0x80800524: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    _subaddieDll_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800524: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800528: beq         $v0, $zero, L_80800538
    if (ctx->r2 == 0) {
        // 0x8080052C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800538;
    }
    // 0x8080052C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800530: b           L_8080053C
    // 0x80800534: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
        goto L_8080053C;
    // 0x80800534: addiu       $a2, $zero, 0x15
    ctx->r6 = ADD32(0, 0X15);
L_80800538:
    // 0x80800538: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
L_8080053C:
    // 0x8080053C: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x80800540: jal         0x8008A128
    // 0x80800544: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    _sucoaster_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80800544: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x80800548: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080054C: jal         0x8008A148
    // 0x80800550: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _sucoaster_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x80800550: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800558:
    // 0x80800558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080055C: jr          $ra
    // 0x80800560: nop

    return;
    // 0x80800560: nop

;}
RECOMP_FUNC void func_80800564_ch2dbaddy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800568: sltiu       $at, $a2, 0xA
    ctx->r1 = ctx->r6 < 0XA ? 1 : 0;
    // 0x8080056C: beq         $at, $zero, L_808006EC
    if (ctx->r1 == 0) {
        // 0x80800570: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_808006EC;
    }
    // 0x80800570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800574: sll         $t6, $a2, 2
    ctx->r14 = S32(ctx->r6 << 2);
    // 0x80800578: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(172, 0X900) << 16);
    // 0x8080057C: addu        $at, $at, $t6
    gpr jr_addend_80800584 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800580: lw          $t6, 0x900($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(172, 0X900));
    // 0x80800584: jr          $t6
    // 0x80800588: nop

    switch (jr_addend_80800584 >> 2) {
        case 0: goto L_8080058C; break;
        case 1: goto L_80800690; break;
        case 2: goto L_80800604; break;
        case 3: goto L_80800614; break;
        case 4: goto L_80800674; break;
        case 5: goto L_80800698; break;
        case 6: goto L_80800690; break;
        case 7: goto L_80800604; break;
        case 8: goto L_808006A8; break;
        case 9: goto L_808006C4; break;
        default: switch_error(__func__, 0x80800584, 0x80800900);
    }
    // 0x80800588: nop

L_8080058C:
    // 0x8080058C: lhu         $t7, 0x72($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X72);
    // 0x80800590: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80800594: addiu       $t9, $a1, -0x2
    ctx->r25 = ADD32(ctx->r5, -0X2);
    // 0x80800598: srl         $t8, $t7, 10
    ctx->r24 = S32(U32(ctx->r15) >> 10);
    // 0x8080059C: bnel        $t8, $at, L_808005B0
    if (ctx->r24 != ctx->r1) {
        // 0x808005A0: sltiu       $at, $t9, 0x11
        ctx->r1 = ctx->r25 < 0X11 ? 1 : 0;
            goto L_808005B0;
    }
    goto skip_0;
    // 0x808005A0: sltiu       $at, $t9, 0x11
    ctx->r1 = ctx->r25 < 0X11 ? 1 : 0;
    skip_0:
    // 0x808005A4: b           L_808006F0
    // 0x808005A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808006F0;
    // 0x808005A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808005AC: sltiu       $at, $t9, 0x11
    ctx->r1 = ctx->r25 < 0X11 ? 1 : 0;
L_808005B0:
    // 0x808005B0: beq         $at, $zero, L_808006EC
    if (ctx->r1 == 0) {
        // 0x808005B4: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_808006EC;
    }
    // 0x808005B4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x808005B8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(172, 0X928) << 16);
    // 0x808005BC: addu        $at, $at, $t9
    gpr jr_addend_808005C4 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x808005C0: lw          $t9, 0x928($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(172, 0X928));
    // 0x808005C4: jr          $t9
    // 0x808005C8: nop

    switch (jr_addend_808005C4 >> 2) {
        case 0: goto L_808005CC; break;
        case 1: goto L_808005CC; break;
        case 2: goto L_808005DC; break;
        case 3: goto L_808005EC; break;
        case 4: goto L_808006EC; break;
        case 5: goto L_808005F4; break;
        case 6: goto L_808005EC; break;
        case 7: goto L_808005EC; break;
        case 8: goto L_808006EC; break;
        case 9: goto L_808006EC; break;
        case 10: goto L_808006EC; break;
        case 11: goto L_808006EC; break;
        case 12: goto L_808006EC; break;
        case 13: goto L_808006EC; break;
        case 14: goto L_808006EC; break;
        case 15: goto L_808006EC; break;
        case 16: goto L_808005EC; break;
        default: switch_error(__func__, 0x808005C4, 0x80800928);
    }
    // 0x808005C8: nop

L_808005CC:
    // 0x808005CC: jal         0x80000700
    // 0x808005D0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_80800700_ch2dbaddy(rdram, ctx);
        goto after_0;
    // 0x808005D0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_0:
    // 0x808005D4: b           L_808006F0
    // 0x808005D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808006F0;
    // 0x808005D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808005DC:
    // 0x808005DC: jal         0x80000700
    // 0x808005E0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_80800700_ch2dbaddy(rdram, ctx);
        goto after_1;
    // 0x808005E0: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_1:
    // 0x808005E4: b           L_808006F0
    // 0x808005E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808006F0;
    // 0x808005E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808005EC:
    // 0x808005EC: b           L_808006F0
    // 0x808005F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808006F0;
    // 0x808005F0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808005F4:
    // 0x808005F4: jal         0x8008A148
    // 0x808005F8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    _sucoaster_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x808005F8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x808005FC: b           L_808006F0
    // 0x80800600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808006F0;
    // 0x80800600: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800604:
    // 0x80800604: jal         0x80000700
    // 0x80800608: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_80800700_ch2dbaddy(rdram, ctx);
        goto after_3;
    // 0x80800608: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_3:
    // 0x8080060C: b           L_808006F0
    // 0x80800610: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808006F0;
    // 0x80800610: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800614:
    // 0x80800614: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80800618: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8080061C: jal         0x800D9058
    // 0x80800620: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800D9058(rdram, ctx);
        goto after_4;
    // 0x80800620: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_4:
    // 0x80800624: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800628: andi        $t1, $v0, 0x1FF
    ctx->r9 = ctx->r2 & 0X1FF;
    // 0x8080062C: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x80800630: lhu         $t2, 0x6E($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X6E);
    // 0x80800634: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    // 0x80800638: lw          $a1, 0x54($a0)
    ctx->r5 = MEM_W(ctx->r4, 0X54);
    // 0x8080063C: andi        $t3, $t2, 0xFE00
    ctx->r11 = ctx->r10 & 0XFE00;
    // 0x80800640: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x80800644: jal         0x8010297C
    // 0x80800648: sh          $t4, 0x6E($a0)
    MEM_H(0X6E, ctx->r4) = ctx->r12;
    func_8010297C(rdram, ctx);
        goto after_5;
    // 0x80800648: sh          $t4, 0x6E($a0)
    MEM_H(0X6E, ctx->r4) = ctx->r12;
    after_5:
    // 0x8080064C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800650: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80800654: lhu         $t5, 0x72($a0)
    ctx->r13 = MEM_HU(ctx->r4, 0X72);
    // 0x80800658: srl         $t6, $t5, 10
    ctx->r14 = S32(U32(ctx->r13) >> 10);
    // 0x8080065C: bne         $t6, $at, L_8080066C
    if (ctx->r14 != ctx->r1) {
        // 0x80800660: nop
    
            goto L_8080066C;
    }
    // 0x80800660: nop

    // 0x80800664: jal         0x80000700
    // 0x80800668: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    func_80800700_ch2dbaddy(rdram, ctx);
        goto after_6;
    // 0x80800668: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_6:
L_8080066C:
    // 0x8080066C: b           L_808006F0
    // 0x80800670: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808006F0;
    // 0x80800670: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800674:
    // 0x80800674: lhu         $t7, 0x72($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X72);
    // 0x80800678: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x8080067C: srl         $t8, $t7, 10
    ctx->r24 = S32(U32(ctx->r15) >> 10);
    // 0x80800680: beql        $t8, $at, L_808006F0
    if (ctx->r24 == ctx->r1) {
        // 0x80800684: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808006F0;
    }
    goto skip_1;
    // 0x80800684: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x80800688: b           L_808006F0
    // 0x8080068C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808006F0;
    // 0x8080068C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800690:
    // 0x80800690: b           L_808006F0
    // 0x80800694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808006F0;
    // 0x80800694: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800698:
    // 0x80800698: jal         0x80000700
    // 0x8080069C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80800700_ch2dbaddy(rdram, ctx);
        goto after_7;
    // 0x8080069C: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_7:
    // 0x808006A0: b           L_808006F0
    // 0x808006A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808006F0;
    // 0x808006A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808006A8:
    // 0x808006A8: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x808006AC: bne         $a1, $at, L_808006BC
    if (ctx->r5 != ctx->r1) {
        // 0x808006B0: nop
    
            goto L_808006BC;
    }
    // 0x808006B0: nop

    // 0x808006B4: jal         0x801020DC
    // 0x808006B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_801020DC(rdram, ctx);
        goto after_8;
    // 0x808006B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_808006BC:
    // 0x808006BC: b           L_808006F0
    // 0x808006C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808006F0;
    // 0x808006C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808006C4:
    // 0x808006C4: lw          $t9, 0x64($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X64);
    // 0x808006C8: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x808006CC: bgez        $t2, L_808006E4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x808006D0: nop
    
            goto L_808006E4;
    }
    // 0x808006D0: nop

    // 0x808006D4: jal         0x8008A148
    // 0x808006D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _sucoaster_entrypoint_10(rdram, ctx);
        goto after_9;
    // 0x808006D8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x808006DC: b           L_808006F0
    // 0x808006E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808006F0;
    // 0x808006E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808006E4:
    // 0x808006E4: b           L_808006F0
    // 0x808006E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808006F0;
    // 0x808006E8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808006EC:
    // 0x808006EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808006F0:
    // 0x808006F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006F8: jr          $ra
    // 0x808006FC: nop

    return;
    // 0x808006FC: nop

;}
RECOMP_FUNC void func_80800700_ch2dbaddy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800700: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800704: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800708: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080070C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800710: jal         0x8008A110
    // 0x80800714: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    _sucoaster_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800714: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800718: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8080071C: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80800720: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800724: beq         $a1, $at, L_80800750
    if (ctx->r5 == ctx->r1) {
        // 0x80800728: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800750;
    }
    // 0x80800728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080072C: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x80800730: beq         $a1, $at, L_80800788
    if (ctx->r5 == ctx->r1) {
        // 0x80800734: addiu       $at, $zero, 0x14
        ctx->r1 = ADD32(0, 0X14);
            goto L_80800788;
    }
    // 0x80800734: addiu       $at, $zero, 0x14
    ctx->r1 = ADD32(0, 0X14);
    // 0x80800738: beq         $a1, $at, L_808007D4
    if (ctx->r5 == ctx->r1) {
        // 0x8080073C: addiu       $at, $zero, 0x15
        ctx->r1 = ADD32(0, 0X15);
            goto L_808007D4;
    }
    // 0x8080073C: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x80800740: beq         $a1, $at, L_8080076C
    if (ctx->r5 == ctx->r1) {
        // 0x80800744: nop
    
            goto L_8080076C;
    }
    // 0x80800744: nop

    // 0x80800748: b           L_80800810
    // 0x8080074C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800810;
    // 0x8080074C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800750:
    // 0x80800750: jal         0x8010A570
    // 0x80800754: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_8010A570(rdram, ctx);
        goto after_1;
    // 0x80800754: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_1:
    // 0x80800758: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x8080075C: jal         0x8008A148
    // 0x80800760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _sucoaster_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x80800760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800764: b           L_80800810
    // 0x80800768: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800810;
    // 0x80800768: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080076C:
    // 0x8080076C: jal         0x8008A148
    // 0x80800770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _sucoaster_entrypoint_10(rdram, ctx);
        goto after_3;
    // 0x80800770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800774: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800778: jal         0x8008A128
    // 0x8080077C: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    _sucoaster_entrypoint_6(rdram, ctx);
        goto after_4;
    // 0x8080077C: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    after_4:
    // 0x80800780: b           L_80800810
    // 0x80800784: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800810;
    // 0x80800784: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800788:
    // 0x80800788: jal         0x8008A148
    // 0x8080078C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _sucoaster_entrypoint_10(rdram, ctx);
        goto after_5;
    // 0x8080078C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800790: jal         0x8010A570
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010A570(rdram, ctx);
        goto after_6;
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800798: lw          $t6, 0x64($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X64);
    // 0x8080079C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x808007A0: bltzl       $t8, L_808007C8
    if (SIGNED(ctx->r24) < 0) {
        // 0x808007A4: lbu         $t0, 0x65($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X65);
            goto L_808007C8;
    }
    goto skip_0;
    // 0x808007A4: lbu         $t0, 0x65($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X65);
    skip_0:
    // 0x808007A8: jal         0x80000850
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800850_ch2dbaddy(rdram, ctx);
        goto after_7;
    // 0x808007AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808007B0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x808007B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808007BC: jal         0x801032B0
    // 0x808007C0: lhu         $a1, 0x6($t9)
    ctx->r5 = MEM_HU(ctx->r25, 0X6);
    func_801032B0(rdram, ctx);
        goto after_8;
    // 0x808007C0: lhu         $a1, 0x6($t9)
    ctx->r5 = MEM_HU(ctx->r25, 0X6);
    after_8:
    // 0x808007C4: lbu         $t0, 0x65($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X65);
L_808007C8:
    // 0x808007C8: andi        $t1, $t0, 0xFFFE
    ctx->r9 = ctx->r8 & 0XFFFE;
    // 0x808007CC: b           L_8080080C
    // 0x808007D0: sb          $t1, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r9;
        goto L_8080080C;
    // 0x808007D0: sb          $t1, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r9;
L_808007D4:
    // 0x808007D4: jal         0x8008A148
    // 0x808007D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _sucoaster_entrypoint_10(rdram, ctx);
        goto after_9;
    // 0x808007D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808007DC: lbu         $t3, 0x65($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X65);
    // 0x808007E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007E4: ori         $t5, $t3, 0x1
    ctx->r13 = ctx->r11 | 0X1;
    // 0x808007E8: sb          $t5, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r13;
    // 0x808007EC: andi        $t6, $t5, 0xEF
    ctx->r14 = ctx->r13 & 0XEF;
    // 0x808007F0: jal         0x8010A570
    // 0x808007F4: sb          $t6, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r14;
    func_8010A570(rdram, ctx);
        goto after_10;
    // 0x808007F4: sb          $t6, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r14;
    after_10:
    // 0x808007F8: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(172, 0XAE4) << 16);
    // 0x808007FC: addiu       $a2, $a2, 0xAE4
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(172, 0XAE4));
    // 0x80800800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800804: jal         0x80089D18
    // 0x80800808: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    _subaddieaudioquick_entrypoint_2(rdram, ctx);
        goto after_11;
    // 0x80800808: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_11:
L_8080080C:
    // 0x8080080C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800810:
    // 0x80800810: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800814: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800818: jr          $ra
    // 0x8080081C: nop

    return;
    // 0x8080081C: nop

;}
RECOMP_FUNC void func_80800820_ch2dbaddy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800828: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(172, 0XAF4) << 16);
    // 0x8080082C: lui         $a3, 0x3DCC
    ctx->r7 = S32(0X3DCC << 16);
    // 0x80800830: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800834: addiu       $a2, $a2, 0xAF4
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(172, 0XAF4));
    // 0x80800838: jal         0x80089D20
    // 0x8080083C: addiu       $a1, $a0, 0x4
    ctx->r5 = ADD32(ctx->r4, 0X4);
    _subaddieaudioquick_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x8080083C: addiu       $a1, $a0, 0x4
    ctx->r5 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x80800840: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800844: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800848: jr          $ra
    // 0x8080084C: nop

    return;
    // 0x8080084C: nop

;}
RECOMP_FUNC void func_80800850_ch2dbaddy(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800850: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800854: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800858: jal         0x8008A110
    // 0x8080085C: nop

    _sucoaster_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x8080085C: nop

    after_0:
    // 0x80800860: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800864: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80800868: jal         0x800DC128
    // 0x8080086C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800DC128(rdram, ctx);
        goto after_1;
    // 0x8080086C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80800870: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80800874: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(172, 0XB00) << 16);
    // 0x80800878: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8080087C: lh          $t7, 0xB00($t7)
    ctx->r15 = MEM_H(ctx->r15, (int16_t)RELOC_LO16(172, 0XB00));
    // 0x80800880: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80800884: sh          $t7, 0x6($t8)
    MEM_H(0X6, ctx->r24) = ctx->r15;
    // 0x80800888: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080088C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800890: jr          $ra
    // 0x80800894: nop

    return;
    // 0x80800894: nop

    // 0x80800898: nop

    // 0x8080089C: nop

;}
RECOMP_FUNC void func_80800000_chLagoonInnBlockedWall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: lhu         $v0, 0x72($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X72);
    // 0x80800010: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800014: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800018: srl         $t6, $v0, 10
    ctx->r14 = S32(U32(ctx->r2) >> 10);
    // 0x8080001C: beq         $t6, $at, L_80800074
    if (ctx->r14 == ctx->r1) {
        // 0x80800020: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800074;
    }
    // 0x80800020: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800024: bnel        $t6, $at, L_808000B0
    if (ctx->r14 != ctx->r1) {
        // 0x80800028: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808000B0;
    }
    goto skip_0;
    // 0x80800028: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080002C: jal         0x800D9078
    // 0x80800030: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    func_800D9078(rdram, ctx);
        goto after_0;
    // 0x80800030: addiu       $a0, $a0, 0x58
    ctx->r4 = ADD32(ctx->r4, 0X58);
    after_0:
    // 0x80800034: beq         $v0, $zero, L_808000AC
    if (ctx->r2 == 0) {
        // 0x80800038: addiu       $a0, $sp, 0x24
        ctx->r4 = ADD32(ctx->r29, 0X24);
            goto L_808000AC;
    }
    // 0x80800038: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x8080003C: jal         0x800EE7F8
    // 0x80800040: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80800040: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_1:
    // 0x80800044: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80800048: lw          $a1, 0x48($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X48);
    // 0x8080004C: jal         0x800EF1B8
    // 0x80800050: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    func_800EF1B8(rdram, ctx);
        goto after_2;
    // 0x80800050: lui         $a2, 0xC2C8
    ctx->r6 = S32(0XC2C8 << 16);
    after_2:
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800058: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8080005C: jal         0x80086670
    // 0x80800060: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    _chexploder_entrypoint_3(rdram, ctx);
        goto after_3;
    // 0x80800060: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x80800064: jal         0x800DA544
    // 0x80800068: addiu       $a0, $zero, 0x3A9
    ctx->r4 = ADD32(0, 0X3A9);
    func_800DA544(rdram, ctx);
        goto after_4;
    // 0x80800068: addiu       $a0, $zero, 0x3A9
    ctx->r4 = ADD32(0, 0X3A9);
    after_4:
    // 0x8080006C: b           L_808000B0
    // 0x80800070: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000B0;
    // 0x80800070: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800074:
    // 0x80800074: jal         0x800D9078
    // 0x80800078: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
    func_800D9078(rdram, ctx);
        goto after_5;
    // 0x80800078: addiu       $a0, $s0, 0x58
    ctx->r4 = ADD32(ctx->r16, 0X58);
    after_5:
    // 0x8080007C: beql        $v0, $zero, L_808000B0
    if (ctx->r2 == 0) {
        // 0x80800080: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808000B0;
    }
    goto skip_1;
    // 0x80800080: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800084: jal         0x800F54E4
    // 0x80800088: nop

    func_800F54E4(rdram, ctx);
        goto after_6;
    // 0x80800088: nop

    after_6:
    // 0x8080008C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800090: jal         0x800F82D4
    // 0x80800094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800F82D4(rdram, ctx);
        goto after_7;
    // 0x80800094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80800098: addiu       $a0, $zero, 0x1A7
    ctx->r4 = ADD32(0, 0X1A7);
    // 0x8080009C: jal         0x800887D8
    // 0x808000A0: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    _glcutDll_entrypoint_6(rdram, ctx);
        goto after_8;
    // 0x808000A0: addiu       $a1, $zero, 0x32
    ctx->r5 = ADD32(0, 0X32);
    after_8:
    // 0x808000A4: jal         0x800FFAB0
    // 0x808000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FFAB0(rdram, ctx);
        goto after_9;
    // 0x808000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_808000AC:
    // 0x808000AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000B0:
    // 0x808000B0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000B4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808000B8: jr          $ra
    // 0x808000BC: nop

    return;
    // 0x808000BC: nop

;}
RECOMP_FUNC void func_808000C0_chLagoonInnBlockedWall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C8: jal         0x8010A63C
    // 0x808000CC: nop

    func_8010A63C(rdram, ctx);
        goto after_0;
    // 0x808000CC: nop

    after_0:
    // 0x808000D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000D8: jr          $ra
    // 0x808000DC: nop

    return;
    // 0x808000DC: nop

;}
RECOMP_FUNC void func_808000E0_chLagoonInnBlockedWall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808000E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808000E8: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x808000EC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808000F4: beq         $a1, $at, L_80800164
    if (ctx->r5 == ctx->r1) {
        // 0x808000F8: sw          $a2, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r6;
            goto L_80800164;
    }
    // 0x808000F8: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x808000FC: addiu       $at, $zero, 0x49
    ctx->r1 = ADD32(0, 0X49);
    // 0x80800100: beq         $a1, $at, L_80800118
    if (ctx->r5 == ctx->r1) {
        // 0x80800104: addiu       $at, $zero, 0x90
        ctx->r1 = ADD32(0, 0X90);
            goto L_80800118;
    }
    // 0x80800104: addiu       $at, $zero, 0x90
    ctx->r1 = ADD32(0, 0X90);
    // 0x80800108: beq         $a1, $at, L_808001BC
    if (ctx->r5 == ctx->r1) {
        // 0x8080010C: nop
    
            goto L_808001BC;
    }
    // 0x8080010C: nop

    // 0x80800110: b           L_8080023C
    // 0x80800114: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080023C;
    // 0x80800114: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800118:
    // 0x80800118: jal         0x80088840
    // 0x8080011C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    _glcutDll_entrypoint_19(rdram, ctx);
        goto after_0;
    // 0x8080011C: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_0:
    // 0x80800120: beq         $v0, $zero, L_80800238
    if (ctx->r2 == 0) {
        // 0x80800124: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(173, 0X3E0) << 16);
            goto L_80800238;
    }
    // 0x80800124: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(173, 0X3E0) << 16);
    // 0x80800128: lwc1        $f4, 0x3E0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(173, 0X3E0));
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800130: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800134: jal         0x80103110
    // 0x80800138: swc1        $f4, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f4.u32l;
    func_80103110(rdram, ctx);
        goto after_1;
    // 0x80800138: swc1        $f4, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f4.u32l;
    after_1:
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800140: jal         0x80101FDC
    // 0x80800144: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80101FDC(rdram, ctx);
        goto after_2;
    // 0x80800144: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80800148: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8080014C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800150: addiu       $a2, $zero, 0x1C
    ctx->r6 = ADD32(0, 0X1C);
    // 0x80800154: jal         0x80085708
    // 0x80800158: addiu       $a3, $zero, 0x910
    ctx->r7 = ADD32(0, 0X910);
    _capod_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x80800158: addiu       $a3, $zero, 0x910
    ctx->r7 = ADD32(0, 0X910);
    after_3:
    // 0x8080015C: b           L_8080023C
    // 0x80800160: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8080023C;
    // 0x80800160: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800164:
    // 0x80800164: jal         0x8010A570
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010A570(rdram, ctx);
        goto after_4;
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080016C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80800170: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800174: jal         0x800EE7F8
    // 0x80800178: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800EE7F8(rdram, ctx);
        goto after_5;
    // 0x80800178: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_5:
    // 0x8080017C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80800180: lw          $a1, 0x48($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X48);
    // 0x80800184: jal         0x800EF1B8
    // 0x80800188: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    func_800EF1B8(rdram, ctx);
        goto after_6;
    // 0x80800188: lui         $a2, 0x42C8
    ctx->r6 = S32(0X42C8 << 16);
    after_6:
    // 0x8080018C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800190: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80800194: jal         0x80086670
    // 0x80800198: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    _chexploder_entrypoint_3(rdram, ctx);
        goto after_7;
    // 0x80800198: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_7:
    // 0x8080019C: jal         0x800F54E4
    // 0x808001A0: nop

    func_800F54E4(rdram, ctx);
        goto after_8;
    // 0x808001A0: nop

    after_8:
    // 0x808001A4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808001A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808001AC: jal         0x800F8300
    // 0x808001B0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_800F8300(rdram, ctx);
        goto after_9;
    // 0x808001B0: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_9:
    // 0x808001B4: b           L_8080023C
    // 0x808001B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8080023C;
    // 0x808001B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808001BC:
    // 0x808001BC: jal         0x800EA05C
    // 0x808001C0: nop

    func_800EA05C(rdram, ctx);
        goto after_10;
    // 0x808001C0: nop

    after_10:
    // 0x808001C4: addiu       $at, $zero, 0xED
    ctx->r1 = ADD32(0, 0XED);
    // 0x808001C8: bne         $v0, $at, L_808001F4
    if (ctx->r2 != ctx->r1) {
        // 0x808001CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001F4;
    }
    // 0x808001CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D0: jal         0x80101FDC
    // 0x808001D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80101FDC(rdram, ctx);
        goto after_11;
    // 0x808001D4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001DC: jal         0x80103110
    // 0x808001E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80103110(rdram, ctx);
        goto after_12;
    // 0x808001E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x808001E4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(173, 0X3E4) << 16);
    // 0x808001E8: lwc1        $f6, 0x3E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(173, 0X3E4));
    // 0x808001EC: b           L_808001FC
    // 0x808001F0: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
        goto L_808001FC;
    // 0x808001F0: swc1        $f6, 0x58($s0)
    MEM_W(0X58, ctx->r16) = ctx->f6.u32l;
L_808001F4:
    // 0x808001F4: jal         0x800FFAB0
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FFAB0(rdram, ctx);
        goto after_13;
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
L_808001FC:
    // 0x808001FC: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(173, 0X400) << 16);
    // 0x80800200: addiu       $t6, $t6, 0x400
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(173, 0X400));
    // 0x80800204: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80800208: lw          $a3, 0x38($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X38);
    // 0x8080020C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800210: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800214: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800218: jal         0x800BABB8
    // 0x8080021C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800BABB8(rdram, ctx);
        goto after_14;
    // 0x8080021C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x80800220: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(173, 0X46C) << 16);
    // 0x80800224: addiu       $a1, $a1, 0x46C
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(173, 0X46C));
    // 0x80800228: jal         0x800C4AF0
    // 0x8080022C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_800C4AF0(rdram, ctx);
        goto after_15;
    // 0x8080022C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_15:
    // 0x80800230: b           L_8080023C
    // 0x80800234: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8080023C;
    // 0x80800234: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800238:
    // 0x80800238: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080023C:
    // 0x8080023C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800240: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800244: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800248: jr          $ra
    // 0x8080024C: nop

    return;
    // 0x8080024C: nop

;}
RECOMP_FUNC void chLagoonInnBlockedWall_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800250: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(173, 0X480) << 16);
    // 0x80800254: jr          $ra
    // 0x80800258: addiu       $v0, $v0, 0x480
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(173, 0X480));
    return;
    // 0x80800258: addiu       $v0, $v0, 0x480
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(173, 0X480));
;}
RECOMP_FUNC void func_8080025C_chLagoonInnBlockedWall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080025C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800260: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x80800264: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x80800268: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080026C: addiu       $s1, $sp, 0x34
    ctx->r17 = ADD32(ctx->r29, 0X34);
    // 0x80800270: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800274: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80800278: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x8080027C: jal         0x800EE7F8
    // 0x80800280: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80800280: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80800284: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80800288: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080028C: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800290: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(173, 0X3E8) << 16);
    // 0x80800294: lwc1        $f16, 0x3E8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(173, 0X3E8));
    // 0x80800298: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8080029C: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(173, 0X528) << 16);
    // 0x808002A0: addiu       $t6, $t6, 0x528
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(173, 0X528));
    // 0x808002A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808002A8: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x808002AC: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x808002B0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808002B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808002B8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x808002BC: addiu       $a3, $zero, 0x8
    ctx->r7 = ADD32(0, 0X8);
    // 0x808002C0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x808002C4: jal         0x800BBCB8
    // 0x808002C8: nop

    func_800BBCB8(rdram, ctx);
        goto after_1;
    // 0x808002C8: nop

    after_1:
    // 0x808002CC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(173, 0X3EC) << 16);
    // 0x808002D0: lwc1        $f6, 0x3EC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(173, 0X3EC));
    // 0x808002D4: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x808002D8: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(173, 0X4C8) << 16);
    // 0x808002DC: addiu       $t7, $t7, 0x4C8
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(173, 0X4C8));
    // 0x808002E0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x808002E4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x808002E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808002EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808002F0: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    // 0x808002F4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x808002F8: jal         0x800BBCB8
    // 0x808002FC: nop

    func_800BBCB8(rdram, ctx);
        goto after_2;
    // 0x808002FC: nop

    after_2:
    // 0x80800300: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(173, 0X54C) << 16);
    // 0x80800304: addiu       $t8, $t8, 0x54C
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(173, 0X54C));
    // 0x80800308: lw          $a2, 0x38($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X38);
    // 0x8080030C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80800310: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800314: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80800318: jal         0x800BBCB8
    // 0x8080031C: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    func_800BBCB8(rdram, ctx);
        goto after_3;
    // 0x8080031C: addiu       $a3, $zero, 0xF
    ctx->r7 = ADD32(0, 0XF);
    after_3:
    // 0x80800320: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(173, 0X3F0) << 16);
    // 0x80800324: lwc1        $f10, 0x3F0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(173, 0X3F0));
    // 0x80800328: addiu       $t9, $zero, 0xB4
    ctx->r25 = ADD32(0, 0XB4);
    // 0x8080032C: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x80800330: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x80800334: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x80800338: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8080033C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800344: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80800348: addiu       $a2, $zero, -0x28
    ctx->r6 = ADD32(0, -0X28);
    // 0x8080034C: addiu       $a3, $zero, 0xC8
    ctx->r7 = ADD32(0, 0XC8);
    // 0x80800350: jal         0x80109704
    // 0x80800354: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80109704(rdram, ctx);
        goto after_4;
    // 0x80800354: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_4:
    // 0x80800358: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(173, 0X514) << 16);
    // 0x8080035C: addiu       $a2, $a2, 0x514
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(173, 0X514));
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800364: jal         0x80089D18
    // 0x80800368: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    _subaddieaudioquick_entrypoint_2(rdram, ctx);
        goto after_5;
    // 0x80800368: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x8080036C: jal         0x800FFAB0
    // 0x80800370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FFAB0(rdram, ctx);
        goto after_6;
    // 0x80800370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800374: addiu       $a0, $zero, 0x488
    ctx->r4 = ADD32(0, 0X488);
    // 0x80800378: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x8080037C: jal         0x80101180
    // 0x80800380: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80101180(rdram, ctx);
        goto after_7;
    // 0x80800380: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80800384: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800388: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8080038C: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x80800390: jr          $ra
    // 0x80800394: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80800394: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80800398_chLagoonInnBlockedWall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800398: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080039C: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x808003A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003A4: bne         $a1, $at, L_808003BC
    if (ctx->r5 != ctx->r1) {
        // 0x808003A8: sw          $a2, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r6;
            goto L_808003BC;
    }
    // 0x808003A8: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x808003AC: jal         0x8000025C
    // 0x808003B0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8080025C_chLagoonInnBlockedWall(rdram, ctx);
        goto after_0;
    // 0x808003B0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x808003B4: b           L_808003C0
    // 0x808003B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808003C0;
    // 0x808003B8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808003BC:
    // 0x808003BC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808003C0:
    // 0x808003C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003C8: jr          $ra
    // 0x808003CC: nop

    return;
    // 0x808003CC: nop

;}
RECOMP_FUNC void chLagoonInnBlockedWall_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003D0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(173, 0X570) << 16);
    // 0x808003D4: jr          $ra
    // 0x808003D8: addiu       $v0, $v0, 0x570
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(173, 0X570));
    return;
    // 0x808003D8: addiu       $v0, $v0, 0x570
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(173, 0X570));
    // 0x808003DC: nop

;}
RECOMP_FUNC void func_80800000_chTalTorpWall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800004: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80800008_chTalTorpWall(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080000C: addiu       $at, $zero, 0x40
    ctx->r1 = ADD32(0, 0X40);
    // 0x80800010: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800014: bne         $a1, $at, L_80800054
    if (ctx->r5 != ctx->r1) {
        // 0x80800018: sw          $a2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r6;
            goto L_80800054;
    }
    // 0x80800018: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8080001C: addiu       $a1, $a0, 0x4
    ctx->r5 = ADD32(ctx->r4, 0X4);
    // 0x80800020: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800024: addiu       $a2, $zero, 0xE
    ctx->r6 = ADD32(0, 0XE);
    // 0x80800028: jal         0x80086670
    // 0x8080002C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    _chexploder_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x8080002C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800030: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(174, 0X80) << 16);
    // 0x80800034: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800038: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080003C: jal         0x80089D18
    // 0x80800040: addiu       $a2, $a2, 0x80
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(174, 0X80));
    _subaddieaudioquick_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800040: addiu       $a2, $a2, 0x80
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(174, 0X80));
    after_1:
    // 0x80800044: jal         0x800DA544
    // 0x80800048: addiu       $a0, $zero, 0x3AA
    ctx->r4 = ADD32(0, 0X3AA);
    func_800DA544(rdram, ctx);
        goto after_2;
    // 0x80800048: addiu       $a0, $zero, 0x3AA
    ctx->r4 = ADD32(0, 0X3AA);
    after_2:
    // 0x8080004C: b           L_80800058
    // 0x80800050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800058;
    // 0x80800050: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800054:
    // 0x80800054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800058:
    // 0x80800058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080005C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800060: jr          $ra
    // 0x80800064: nop

    return;
    // 0x80800064: nop

;}
RECOMP_FUNC void chTalTorpWall_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800068: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(174, 0X98) << 16);
    // 0x8080006C: jr          $ra
    // 0x80800070: addiu       $v0, $v0, 0x98
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(174, 0X98));
    return;
    // 0x80800070: addiu       $v0, $v0, 0x98
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(174, 0X98));
    // 0x80800074: nop

    // 0x80800078: nop

    // 0x8080007C: nop

;}
