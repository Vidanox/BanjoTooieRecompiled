#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_8080196C_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080196C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801970: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801974: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801978: jal         0x80000030
    // 0x8080197C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_0;
    // 0x8080197C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801984: addiu       $a1, $zero, 0x131
    ctx->r5 = ADD32(0, 0X131);
    // 0x80801988: jal         0x8008CCBC
    // 0x8080198C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x8080198C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_1:
    // 0x80801990: jal         0x80000000
    // 0x80801994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbswim(rdram, ctx);
        goto after_2;
    // 0x80801994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080199C: jal         0x8009B94C
    // 0x808019A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_3;
    // 0x808019A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x808019A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019A8: jal         0x8009BA9C
    // 0x808019AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_4;
    // 0x808019AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x808019B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019B4: jal         0x8009BF5C
    // 0x808019B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_5;
    // 0x808019B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x808019BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019C0: jal         0x8009C4CC
    // 0x808019C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_6;
    // 0x808019C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x808019C8: sb          $zero, 0x165($s0)
    MEM_B(0X165, ctx->r16) = 0;
    // 0x808019CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808019D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808019D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808019D8: jr          $ra
    // 0x808019DC: nop

    return;
    // 0x808019DC: nop

;}
RECOMP_FUNC void func_808019E0_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808019E0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808019E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808019E8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808019EC: lui         $a1, 0x3E57
    ctx->r5 = S32(0X3E57 << 16);
    // 0x808019F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808019F4: ori         $a1, $a1, 0xA3D
    ctx->r5 = ctx->r5 | 0XA3D;
    // 0x808019F8: jal         0x8008CB10
    // 0x808019FC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x808019FC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_0:
    // 0x80801A00: beq         $v0, $zero, L_80801A98
    if (ctx->r2 == 0) {
        // 0x80801A04: lw          $a2, 0x3C($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X3C);
            goto L_80801A98;
    }
    // 0x80801A04: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80801A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A0C: jal         0x800A0CF4
    // 0x80801A10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_1;
    // 0x80801A10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80801A14: jal         0x800849C0
    // 0x80801A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baduo_entrypoint_21(rdram, ctx);
        goto after_2;
    // 0x80801A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801A1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A20: jal         0x800A3410
    // 0x80801A24: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800A3410(rdram, ctx);
        goto after_3;
    // 0x80801A24: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x80801A28: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80801A2C: sb          $t6, 0x165($s0)
    MEM_B(0X165, ctx->r16) = ctx->r14;
    // 0x80801A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A34: jal         0x8009C128
    // 0x80801A38: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_8009C128(rdram, ctx);
        goto after_4;
    // 0x80801A38: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x80801A3C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80801A40: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80801A44: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80801A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A4C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80801A50: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80801A54: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    // 0x80801A58: jal         0x8009FBB0
    // 0x80801A5C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    func_8009FBB0(rdram, ctx);
        goto after_5;
    // 0x80801A5C: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x80801A60: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(85, 0X1F20) << 16);
    // 0x80801A64: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80801A68: addiu       $t7, $t7, 0x1F20
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(85, 0X1F20));
    // 0x80801A6C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80801A70: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80801A74: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80801A78: jal         0x800BABB8
    // 0x80801A7C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_6;
    // 0x80801A7C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_6:
    // 0x80801A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A84: addiu       $a1, $zero, 0x4592
    ctx->r5 = ADD32(0, 0X4592);
    // 0x80801A88: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801A8C: jal         0x8009DF18
    // 0x80801A90: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF18(rdram, ctx);
        goto after_7;
    // 0x80801A90: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_7:
    // 0x80801A94: addiu       $a2, $zero, 0xED
    ctx->r6 = ADD32(0, 0XED);
L_80801A98:
    // 0x80801A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A9C: jal         0x8009E5C8
    // 0x80801AA0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x80801AA0: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_8:
    // 0x80801AA4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801AA8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801AAC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80801AB0: jr          $ra
    // 0x80801AB4: nop

    return;
    // 0x80801AB4: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801AB8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801ABC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1F78) << 16);
    // 0x80801AC0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801AC4: jr          $ra
    // 0x80801AC8: lw          $v0, 0x1F78($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1F78));
    return;
    // 0x80801AC8: lw          $v0, 0x1F78($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1F78));
;}
RECOMP_FUNC void func_80801ACC_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801ACC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801AD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801AD4: jal         0x8009E6EC
    // 0x80801AD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80801AD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801ADC: slti        $at, $v0, 0x34
    ctx->r1 = SIGNED(ctx->r2) < 0X34 ? 1 : 0;
    // 0x80801AE0: bne         $at, $zero, L_80801B0C
    if (ctx->r1 != 0) {
        // 0x80801AE4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80801B0C;
    }
    // 0x80801AE4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801AE8: addiu       $t6, $v0, -0x4E
    ctx->r14 = ADD32(ctx->r2, -0X4E);
    // 0x80801AEC: sltiu       $at, $t6, 0x24
    ctx->r1 = ctx->r14 < 0X24 ? 1 : 0;
    // 0x80801AF0: beq         $at, $zero, L_80801B6C
    if (ctx->r1 == 0) {
        // 0x80801AF4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80801B6C;
    }
    // 0x80801AF4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80801AF8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(85, 0X1D74) << 16);
    // 0x80801AFC: addu        $at, $at, $t6
    gpr jr_addend_80801B04 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80801B00: lw          $t6, 0x1D74($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(85, 0X1D74));
    // 0x80801B04: jr          $t6
    // 0x80801B08: nop

    switch (jr_addend_80801B04 >> 2) {
        case 0: goto L_80801B48; break;
        case 1: goto L_80801B6C; break;
        case 2: goto L_80801B6C; break;
        case 3: goto L_80801B48; break;
        case 4: goto L_80801B48; break;
        case 5: goto L_80801B6C; break;
        case 6: goto L_80801B6C; break;
        case 7: goto L_80801B6C; break;
        case 8: goto L_80801B6C; break;
        case 9: goto L_80801B6C; break;
        case 10: goto L_80801B6C; break;
        case 11: goto L_80801B6C; break;
        case 12: goto L_80801B6C; break;
        case 13: goto L_80801B6C; break;
        case 14: goto L_80801B6C; break;
        case 15: goto L_80801B6C; break;
        case 16: goto L_80801B6C; break;
        case 17: goto L_80801B6C; break;
        case 18: goto L_80801B6C; break;
        case 19: goto L_80801B6C; break;
        case 20: goto L_80801B6C; break;
        case 21: goto L_80801B6C; break;
        case 22: goto L_80801B6C; break;
        case 23: goto L_80801B6C; break;
        case 24: goto L_80801B6C; break;
        case 25: goto L_80801B6C; break;
        case 26: goto L_80801B48; break;
        case 27: goto L_80801B6C; break;
        case 28: goto L_80801B6C; break;
        case 29: goto L_80801B6C; break;
        case 30: goto L_80801B6C; break;
        case 31: goto L_80801B6C; break;
        case 32: goto L_80801B6C; break;
        case 33: goto L_80801B48; break;
        case 34: goto L_80801B6C; break;
        case 35: goto L_80801B30; break;
        default: switch_error(__func__, 0x80801B04, 0x80801D74);
    }
    // 0x80801B08: nop

L_80801B0C:
    // 0x80801B0C: addiu       $t7, $v0, -0x1F
    ctx->r15 = ADD32(ctx->r2, -0X1F);
    // 0x80801B10: sltiu       $at, $t7, 0x15
    ctx->r1 = ctx->r15 < 0X15 ? 1 : 0;
    // 0x80801B14: beq         $at, $zero, L_80801B6C
    if (ctx->r1 == 0) {
        // 0x80801B18: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80801B6C;
    }
    // 0x80801B18: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80801B1C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(85, 0X1E04) << 16);
    // 0x80801B20: addu        $at, $at, $t7
    gpr jr_addend_80801B28 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80801B24: lw          $t7, 0x1E04($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(85, 0X1E04));
    // 0x80801B28: jr          $t7
    // 0x80801B2C: nop

    switch (jr_addend_80801B28 >> 2) {
        case 0: goto L_80801B48; break;
        case 1: goto L_80801B48; break;
        case 2: goto L_80801B48; break;
        case 3: goto L_80801B6C; break;
        case 4: goto L_80801B6C; break;
        case 5: goto L_80801B48; break;
        case 6: goto L_80801B6C; break;
        case 7: goto L_80801B6C; break;
        case 8: goto L_80801B6C; break;
        case 9: goto L_80801B6C; break;
        case 10: goto L_80801B6C; break;
        case 11: goto L_80801B6C; break;
        case 12: goto L_80801B6C; break;
        case 13: goto L_80801B6C; break;
        case 14: goto L_80801B48; break;
        case 15: goto L_80801B48; break;
        case 16: goto L_80801B6C; break;
        case 17: goto L_80801B6C; break;
        case 18: goto L_80801B48; break;
        case 19: goto L_80801B6C; break;
        case 20: goto L_80801B48; break;
        default: switch_error(__func__, 0x80801B28, 0x80801E04);
    }
    // 0x80801B2C: nop

L_80801B30:
    // 0x80801B30: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80801B34: sb          $t8, 0x167($a0)
    MEM_B(0X167, ctx->r4) = ctx->r24;
    // 0x80801B38: jal         0x8009E830
    // 0x80801B3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_1;
    // 0x80801B3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80801B40: b           L_80801B78
    // 0x80801B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80801B78;
    // 0x80801B44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801B48:
    // 0x80801B48: lbu         $t9, 0x167($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X167);
    // 0x80801B4C: bnel        $t9, $zero, L_80801B78
    if (ctx->r25 != 0) {
        // 0x80801B50: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80801B78;
    }
    goto skip_0;
    // 0x80801B50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80801B54: jal         0x800F9BC4
    // 0x80801B58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800F9BC4(rdram, ctx);
        goto after_2;
    // 0x80801B58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x80801B5C: jal         0x80099B94
    // 0x80801B60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_3;
    // 0x80801B60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80801B64: b           L_80801B78
    // 0x80801B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80801B78;
    // 0x80801B68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801B6C:
    // 0x80801B6C: jal         0x80099B94
    // 0x80801B70: nop

    func_80099B94(rdram, ctx);
        goto after_4;
    // 0x80801B70: nop

    after_4:
    // 0x80801B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801B78:
    // 0x80801B78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801B7C: jr          $ra
    // 0x80801B80: nop

    return;
    // 0x80801B80: nop

;}
RECOMP_FUNC void func_80801B84_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801B84: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801B88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801B8C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801B90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801B94: sb          $zero, 0x167($a0)
    MEM_B(0X167, ctx->r4) = 0;
    // 0x80801B98: addiu       $a1, $zero, 0x70
    ctx->r5 = ADD32(0, 0X70);
    // 0x80801B9C: jal         0x8008CB3C
    // 0x80801BA0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x80801BA0: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x80801BA4: jal         0x80000000
    // 0x80801BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbswim(rdram, ctx);
        goto after_1;
    // 0x80801BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BB0: jal         0x8009B94C
    // 0x80801BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_2;
    // 0x80801BB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80801BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BBC: jal         0x800852B0
    // 0x80801BC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    _baswim_entrypoint_9(rdram, ctx);
        goto after_3;
    // 0x80801BC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80801BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BC8: jal         0x8009BA9C
    // 0x80801BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_4;
    // 0x80801BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80801BD0: jal         0x80000030
    // 0x80801BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_5;
    // 0x80801BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BDC: jal         0x80085298
    // 0x80801BE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _baswim_entrypoint_6(rdram, ctx);
        goto after_6;
    // 0x80801BE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80801BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BE8: jal         0x80091104
    // 0x80801BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80091104(rdram, ctx);
        goto after_7;
    // 0x80801BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80801BF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801BF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801BF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801BFC: jr          $ra
    // 0x80801C00: nop

    return;
    // 0x80801C00: nop

;}
RECOMP_FUNC void func_80801C04_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801C04: jr          $ra
    // 0x80801C08: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80801C08: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80801C0C_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801C0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801C10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801C14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80801C18: jal         0x80091104
    // 0x80801C1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091104(rdram, ctx);
        goto after_0;
    // 0x80801C1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80801C20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801C24: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801C28: jal         0x800852A0
    // 0x80801C2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    _baswim_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x80801C2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80801C30: jal         0x8009679C
    // 0x80801C34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009679C(rdram, ctx);
        goto after_2;
    // 0x80801C34: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80801C38: jal         0x80000104
    // 0x80801C3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800104_bsbswim(rdram, ctx);
        goto after_3;
    // 0x80801C3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80801C40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801C48: jr          $ra
    // 0x80801C4C: nop

    return;
    // 0x80801C4C: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801C50: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801C54: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1F88) << 16);
    // 0x80801C58: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801C5C: jr          $ra
    // 0x80801C60: lw          $v0, 0x1F88($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1F88));
    return;
    // 0x80801C60: lw          $v0, 0x1F88($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1F88));
;}
RECOMP_FUNC void func_80801C64_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801C64: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801C68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801C6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801C70: jal         0x80000030
    // 0x80801C74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800030_bsbswim(rdram, ctx);
        goto after_0;
    // 0x80801C74: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801C78: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x80801C7C: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C84: jal         0x8008CDB8
    // 0x80801C88: addiu       $a1, $zero, 0x136
    ctx->r5 = ADD32(0, 0X136);
    func_8008CDB8(rdram, ctx);
        goto after_1;
    // 0x80801C88: addiu       $a1, $zero, 0x136
    ctx->r5 = ADD32(0, 0X136);
    after_1:
    // 0x80801C8C: jal         0x80000000
    // 0x80801C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbswim(rdram, ctx);
        goto after_2;
    // 0x80801C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801C94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C98: jal         0x8009B94C
    // 0x80801C9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_3;
    // 0x80801C9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80801CA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801CA4: jal         0x8009BA9C
    // 0x80801CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_4;
    // 0x80801CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80801CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801CB0: jal         0x8009BF5C
    // 0x80801CB4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_5;
    // 0x80801CB4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80801CB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801CBC: jal         0x8009C4CC
    // 0x80801CC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_6;
    // 0x80801CC0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80801CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801CC8: jal         0x800A0CF4
    // 0x80801CCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_7;
    // 0x80801CCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80801CD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801CD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801CD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801CDC: jr          $ra
    // 0x80801CE0: nop

    return;
    // 0x80801CE0: nop

;}
RECOMP_FUNC void func_80801CE4_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801CE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801CEC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801CF0: jal         0x8008CAEC
    // 0x80801CF4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008CAEC(rdram, ctx);
        goto after_0;
    // 0x80801CF4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80801CF8: bnel        $v0, $zero, L_80801D10
    if (ctx->r2 != 0) {
        // 0x80801CFC: addiu       $t6, $zero, 0x2B
        ctx->r14 = ADD32(0, 0X2B);
            goto L_80801D10;
    }
    goto skip_0;
    // 0x80801CFC: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
    skip_0:
    // 0x80801D00: jal         0x80085280
    // 0x80801D04: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _baswim_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80801D04: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80801D08: beq         $v0, $zero, L_80801D14
    if (ctx->r2 == 0) {
        // 0x80801D0C: addiu       $t6, $zero, 0x2B
        ctx->r14 = ADD32(0, 0X2B);
            goto L_80801D14;
    }
    // 0x80801D0C: addiu       $t6, $zero, 0x2B
    ctx->r14 = ADD32(0, 0X2B);
L_80801D10:
    // 0x80801D10: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80801D14:
    // 0x80801D14: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801D18: jal         0x8009E5C8
    // 0x80801D1C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80801D1C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80801D20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801D24: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801D28: jr          $ra
    // 0x80801D2C: nop

    return;
    // 0x80801D2C: nop

;}
RECOMP_FUNC void func_80801D30_bsbswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801D30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801D34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801D38: jal         0x80000104
    // 0x80801D3C: nop

    func_80800104_bsbswim(rdram, ctx);
        goto after_0;
    // 0x80801D3C: nop

    after_0:
    // 0x80801D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801D48: jr          $ra
    // 0x80801D4C: nop

    return;
    // 0x80801D4C: nop

;}
RECOMP_FUNC void bsbswim_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801D50: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801D54: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(85, 0X1F98) << 16);
    // 0x80801D58: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801D5C: jr          $ra
    // 0x80801D60: lw          $v0, 0x1F98($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1F98));
    return;
    // 0x80801D60: lw          $v0, 0x1F98($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(85, 0X1F98));
    // 0x80801D64: nop

    // 0x80801D68: nop

    // 0x80801D6C: nop

;}
RECOMP_FUNC void func_80800000_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800010: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800014: jal         0x8008E40C
    // 0x80800018: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8008E40C(rdram, ctx);
        goto after_0;
    // 0x80800018: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8080001C: beq         $v0, $zero, L_8080002C
    if (ctx->r2 == 0) {
        // 0x80800020: nop
    
            goto L_8080002C;
    }
    // 0x80800020: nop

    // 0x80800024: b           L_80800060
    // 0x80800028: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
        goto L_80800060;
    // 0x80800028: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
L_8080002C:
    // 0x8080002C: jal         0x8008E3E8
    // 0x80800030: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E3E8(rdram, ctx);
        goto after_1;
    // 0x80800030: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800034: beq         $v0, $zero, L_80800044
    if (ctx->r2 == 0) {
        // 0x80800038: nop
    
            goto L_80800044;
    }
    // 0x80800038: nop

    // 0x8080003C: b           L_80800060
    // 0x80800040: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
        goto L_80800060;
    // 0x80800040: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
L_80800044:
    // 0x80800044: jal         0x8008E430
    // 0x80800048: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E430(rdram, ctx);
        goto after_2;
    // 0x80800048: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8080004C: beql        $v0, $zero, L_80800060
    if (ctx->r2 == 0) {
        // 0x80800050: lw          $v0, 0x1C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X1C);
            goto L_80800060;
    }
    goto skip_0;
    // 0x80800050: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800054: b           L_80800060
    // 0x80800058: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
        goto L_80800060;
    // 0x80800058: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8080005C: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_80800060:
    // 0x80800060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800068: jr          $ra
    // 0x8080006C: nop

    return;
    // 0x8080006C: nop

;}
RECOMP_FUNC void func_80800070_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800070: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800074: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800078: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080007C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800080: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80800084: jal         0x8008E40C
    // 0x80800088: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    func_8008E40C(rdram, ctx);
        goto after_0;
    // 0x80800088: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_0:
    // 0x8080008C: beq         $v0, $zero, L_8080009C
    if (ctx->r2 == 0) {
        // 0x80800090: nop
    
            goto L_8080009C;
    }
    // 0x80800090: nop

    // 0x80800094: b           L_808000CC
    // 0x80800098: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
        goto L_808000CC;
    // 0x80800098: lwc1        $f0, 0x28($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X28);
L_8080009C:
    // 0x8080009C: jal         0x8008E3E8
    // 0x808000A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E3E8(rdram, ctx);
        goto after_1;
    // 0x808000A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808000A4: beq         $v0, $zero, L_808000B4
    if (ctx->r2 == 0) {
        // 0x808000A8: nop
    
            goto L_808000B4;
    }
    // 0x808000A8: nop

    // 0x808000AC: b           L_808000CC
    // 0x808000B0: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
        goto L_808000CC;
    // 0x808000B0: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
L_808000B4:
    // 0x808000B4: jal         0x8008E430
    // 0x808000B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E430(rdram, ctx);
        goto after_2;
    // 0x808000B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808000BC: beq         $v0, $zero, L_808000CC
    if (ctx->r2 == 0) {
        // 0x808000C0: lwc1        $f0, 0x1C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_808000CC;
    }
    // 0x808000C0: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x808000C4: b           L_808000CC
    // 0x808000C8: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
        goto L_808000CC;
    // 0x808000C8: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
L_808000CC:
    // 0x808000CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000D4: jr          $ra
    // 0x808000D8: nop

    return;
    // 0x808000D8: nop

;}
RECOMP_FUNC void func_808000DC_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000E0: beq         $a1, $zero, L_80800100
    if (ctx->r5 == 0) {
        // 0x808000E4: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80800100;
    }
    // 0x808000E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000E8: lui         $a2, 0x3F75
    ctx->r6 = S32(0X3F75 << 16);
    // 0x808000EC: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x808000F0: jal         0x8009DE38
    // 0x808000F4: addiu       $a1, $zero, 0x4433
    ctx->r5 = ADD32(0, 0X4433);
    func_8009DE38(rdram, ctx);
        goto after_0;
    // 0x808000F4: addiu       $a1, $zero, 0x4433
    ctx->r5 = ADD32(0, 0X4433);
    after_0:
    // 0x808000F8: b           L_80800114
    // 0x808000FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800114;
    // 0x808000FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800100:
    // 0x80800100: lui         $a2, 0x3F85
    ctx->r6 = S32(0X3F85 << 16);
    // 0x80800104: ori         $a2, $a2, 0x1EB8
    ctx->r6 = ctx->r6 | 0X1EB8;
    // 0x80800108: jal         0x8009DE38
    // 0x8080010C: addiu       $a1, $zero, 0x4433
    ctx->r5 = ADD32(0, 0X4433);
    func_8009DE38(rdram, ctx);
        goto after_1;
    // 0x8080010C: addiu       $a1, $zero, 0x4433
    ctx->r5 = ADD32(0, 0X4433);
    after_1:
    // 0x80800110: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800114:
    // 0x80800114: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800118: jr          $ra
    // 0x8080011C: nop

    return;
    // 0x8080011C: nop

;}
RECOMP_FUNC void func_80800120_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800120: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800128: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080012C: jal         0x80091A58
    // 0x80800130: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80800130: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_0:
    // 0x80800134: beql        $v0, $zero, L_80800158
    if (ctx->r2 == 0) {
        // 0x80800138: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800158;
    }
    goto skip_0;
    // 0x80800138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8080013C: jal         0x8008E39C
    // 0x80800140: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E39C(rdram, ctx);
        goto after_1;
    // 0x80800140: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800144: beq         $v0, $zero, L_80800154
    if (ctx->r2 == 0) {
        // 0x80800148: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800154;
    }
    // 0x80800148: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080014C: jal         0x80085008
    // 0x80800150: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bashoes_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x80800150: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_80800154:
    // 0x80800154: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800158:
    // 0x80800158: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080015C: jr          $ra
    // 0x80800160: nop

    return;
    // 0x80800160: nop

;}
RECOMP_FUNC void func_80800164_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800164: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800168: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080016C: jal         0x8008DE24
    // 0x80800170: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008DE24(rdram, ctx);
        goto after_0;
    // 0x80800170: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800174: beq         $v0, $zero, L_8080018C
    if (ctx->r2 == 0) {
        // 0x80800178: lui         $at, 0x442F
        ctx->r1 = S32(0X442F << 16);
            goto L_8080018C;
    }
    // 0x80800178: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x8080017C: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80800180: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800184: b           L_808001AC
    // 0x80800188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808001AC;
    // 0x80800188: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080018C:
    // 0x8080018C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800190: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800194: lui         $a2, 0x447A
    ctx->r6 = S32(0X447A << 16);
    // 0x80800198: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080019C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x808001A0: jal         0x80000070
    // 0x808001A4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_80800070_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x808001A4: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x808001A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001AC:
    // 0x808001AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001B0: jr          $ra
    // 0x808001B4: nop

    return;
    // 0x808001B4: nop

;}
RECOMP_FUNC void func_808001B8_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x808001BC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808001C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001C8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001CC: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x808001D0: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x808001D4: jal         0x80000070
    // 0x808001D8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_80800070_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x808001D8: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_0:
    // 0x808001DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001E4: jr          $ra
    // 0x808001E8: nop

    return;
    // 0x808001E8: nop

;}
RECOMP_FUNC void func_808001EC_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001F4: jal         0x8008DE24
    // 0x808001F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008DE24(rdram, ctx);
        goto after_0;
    // 0x808001F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001FC: beq         $v0, $zero, L_80800210
    if (ctx->r2 == 0) {
        // 0x80800200: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800210;
    }
    // 0x80800200: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800204: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2DE0) << 16);
    // 0x80800208: b           L_80800238
    // 0x8080020C: lwc1        $f0, 0x2DE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2DE0));
        goto L_80800238;
    // 0x8080020C: lwc1        $f0, 0x2DE0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2DE0));
L_80800210:
    // 0x80800210: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2DE4) << 16);
    // 0x80800214: lwc1        $f4, 0x2DE4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2DE4));
    // 0x80800218: lui         $a1, 0x3EAE
    ctx->r5 = S32(0X3EAE << 16);
    // 0x8080021C: lui         $a2, 0x3E94
    ctx->r6 = S32(0X3E94 << 16);
    // 0x80800220: lui         $a3, 0x3F33
    ctx->r7 = S32(0X3F33 << 16);
    // 0x80800224: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80800228: ori         $a2, $a2, 0x7AE1
    ctx->r6 = ctx->r6 | 0X7AE1;
    // 0x8080022C: ori         $a1, $a1, 0x147B
    ctx->r5 = ctx->r5 | 0X147B;
    // 0x80800230: jal         0x80000070
    // 0x80800234: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80800070_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80800234: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
L_80800238:
    // 0x80800238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080023C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800240: jr          $ra
    // 0x80800244: nop

    return;
    // 0x80800244: nop

;}
RECOMP_FUNC void func_80800248_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800248: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080024C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800250: jal         0x8008DE24
    // 0x80800254: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008DE24(rdram, ctx);
        goto after_0;
    // 0x80800254: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800258: beq         $v0, $zero, L_8080026C
    if (ctx->r2 == 0) {
        // 0x8080025C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8080026C;
    }
    // 0x8080025C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800260: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2DE8) << 16);
    // 0x80800264: b           L_80800294
    // 0x80800268: lwc1        $f0, 0x2DE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2DE8));
        goto L_80800294;
    // 0x80800268: lwc1        $f0, 0x2DE8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2DE8));
L_8080026C:
    // 0x8080026C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2DEC) << 16);
    // 0x80800270: lwc1        $f4, 0x2DEC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2DEC));
    // 0x80800274: lui         $a1, 0x3F0F
    ctx->r5 = S32(0X3F0F << 16);
    // 0x80800278: lui         $a2, 0x3F02
    ctx->r6 = S32(0X3F02 << 16);
    // 0x8080027C: lui         $a3, 0x3F99
    ctx->r7 = S32(0X3F99 << 16);
    // 0x80800280: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80800284: ori         $a2, $a2, 0x8F5C
    ctx->r6 = ctx->r6 | 0X8F5C;
    // 0x80800288: ori         $a1, $a1, 0x5C29
    ctx->r5 = ctx->r5 | 0X5C29;
    // 0x8080028C: jal         0x80000070
    // 0x80800290: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_80800070_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80800290: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
L_80800294:
    // 0x80800294: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800298: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080029C: jr          $ra
    // 0x808002A0: nop

    return;
    // 0x808002A0: nop

;}
RECOMP_FUNC void func_808002A4_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808002A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002B0: jal         0x8008CABC
    // 0x808002B4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808002B4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x808002B8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808002BC: jal         0x8008B264
    // 0x808002C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B264(rdram, ctx);
        goto after_1;
    // 0x808002C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808002C4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x808002C8: beql        $v0, $a1, L_808002F8
    if (ctx->r2 == ctx->r5) {
        // 0x808002CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808002F8;
    }
    goto skip_0;
    // 0x808002CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808002D0: jal         0x8008AED4
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808002D8: jal         0x8008B2B4
    // 0x808002DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B2B4(rdram, ctx);
        goto after_3;
    // 0x808002DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808002E0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808002E4: jal         0x8008B24C
    // 0x808002E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_4;
    // 0x808002E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808002EC: jal         0x8008B064
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_5;
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808002F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002F8:
    // 0x808002F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800300: jr          $ra
    // 0x80800304: nop

    return;
    // 0x80800304: nop

;}
RECOMP_FUNC void func_80800308_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800308: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080030C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800310: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800314: jal         0x8009E6EC
    // 0x80800318: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800318: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080031C: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x80800320: beq         $v0, $at, L_80800344
    if (ctx->r2 == ctx->r1) {
        // 0x80800324: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800344;
    }
    // 0x80800324: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800328: addiu       $at, $zero, 0x58
    ctx->r1 = ADD32(0, 0X58);
    // 0x8080032C: beq         $v0, $at, L_80800364
    if (ctx->r2 == ctx->r1) {
        // 0x80800330: addiu       $at, $zero, 0x8D
        ctx->r1 = ADD32(0, 0X8D);
            goto L_80800364;
    }
    // 0x80800330: addiu       $at, $zero, 0x8D
    ctx->r1 = ADD32(0, 0X8D);
    // 0x80800334: beq         $v0, $at, L_8080034C
    if (ctx->r2 == ctx->r1) {
        // 0x80800338: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8080034C;
    }
    // 0x80800338: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8080033C: b           L_808003D4
    // 0x80800340: nop

        goto L_808003D4;
    // 0x80800340: nop

L_80800344:
    // 0x80800344: b           L_808003DC
    // 0x80800348: sw          $t6, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r14;
        goto L_808003DC;
    // 0x80800348: sw          $t6, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r14;
L_8080034C:
    // 0x8080034C: sw          $t7, 0x164($s0)
    MEM_W(0X164, ctx->r16) = ctx->r15;
    // 0x80800350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800354: jal         0x8009E830
    // 0x80800358: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_1;
    // 0x80800358: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x8080035C: b           L_808003E0
    // 0x80800360: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808003E0;
    // 0x80800360: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800364:
    // 0x80800364: lw          $t8, 0x160($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X160);
    // 0x80800368: bnel        $t8, $zero, L_808003E0
    if (ctx->r24 != 0) {
        // 0x8080036C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808003E0;
    }
    goto skip_0;
    // 0x8080036C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800370: jal         0x8008E40C
    // 0x80800374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E40C(rdram, ctx);
        goto after_2;
    // 0x80800374: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800378: beql        $v0, $zero, L_808003E0
    if (ctx->r2 == 0) {
        // 0x8080037C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808003E0;
    }
    goto skip_1;
    // 0x8080037C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800380: jal         0x8009E6F8
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E6F8(rdram, ctx);
        goto after_3;
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800388: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x8080038C: beq         $v0, $at, L_808003A0
    if (ctx->r2 == ctx->r1) {
        // 0x80800390: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003A0;
    }
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800394: addiu       $at, $zero, 0x95
    ctx->r1 = ADD32(0, 0X95);
    // 0x80800398: bnel        $v0, $at, L_808003E0
    if (ctx->r2 != ctx->r1) {
        // 0x8080039C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808003E0;
    }
    goto skip_2;
    // 0x8080039C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
L_808003A0:
    // 0x808003A0: jal         0x80099A7C
    // 0x808003A4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80099A7C(rdram, ctx);
        goto after_4;
    // 0x808003A4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x808003A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003AC: jal         0x800850A8
    // 0x808003B0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    _bashoessuck_entrypoint_5(rdram, ctx);
        goto after_5;
    // 0x808003B0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_5:
    // 0x808003B4: beq         $v0, $zero, L_808003DC
    if (ctx->r2 == 0) {
        // 0x808003B8: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_808003DC;
    }
    // 0x808003B8: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x808003BC: sw          $t9, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r25;
    // 0x808003C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003C4: jal         0x8009E5C8
    // 0x808003C8: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x808003C8: addiu       $a1, $zero, 0x17C
    ctx->r5 = ADD32(0, 0X17C);
    after_6:
    // 0x808003CC: b           L_808003E0
    // 0x808003D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808003E0;
    // 0x808003D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808003D4:
    // 0x808003D4: jal         0x80099B94
    // 0x808003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B94(rdram, ctx);
        goto after_7;
    // 0x808003D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_808003DC:
    // 0x808003DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808003E0:
    // 0x808003E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003E4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808003E8: jr          $ra
    // 0x808003EC: nop

    return;
    // 0x808003EC: nop

;}
RECOMP_FUNC void func_808003F0_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003F8: jal         0x8009E6EC
    // 0x808003FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808003FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800400: addiu       $at, $zero, 0x8D
    ctx->r1 = ADD32(0, 0X8D);
    // 0x80800404: bne         $v0, $at, L_80800420
    if (ctx->r2 != ctx->r1) {
        // 0x80800408: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800420;
    }
    // 0x80800408: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080040C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800410: jal         0x80000308
    // 0x80800414: sw          $t6, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->r14;
    func_80800308_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80800414: sw          $t6, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->r14;
    after_1:
    // 0x80800418: b           L_8080042C
    // 0x8080041C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080042C;
    // 0x8080041C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800420:
    // 0x80800420: jal         0x80099B94
    // 0x80800424: nop

    func_80099B94(rdram, ctx);
        goto after_2;
    // 0x80800424: nop

    after_2:
    // 0x80800428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080042C:
    // 0x8080042C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800430: jr          $ra
    // 0x80800434: nop

    return;
    // 0x80800434: nop

;}
RECOMP_FUNC void func_80800438_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800438: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080043C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800440: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800444: jal         0x8009EF1C
    // 0x80800448: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x80800448: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080044C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800450: jal         0x8009EF10
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800458: bne         $v0, $zero, L_80800470
    if (ctx->r2 != 0) {
        // 0x8080045C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800470;
    }
    // 0x8080045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800460: jal         0x8009B9B0
    // 0x80800464: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800464: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800468: b           L_808004A4
    // 0x8080046C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808004A4;
    // 0x8080046C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800470:
    // 0x80800470: jal         0x800001B8
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001B8_bsbtrot(rdram, ctx);
        goto after_3;
    // 0x80800474: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800478: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8080047C: jal         0x80000164
    // 0x80800480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800164_bsbtrot(rdram, ctx);
        goto after_4;
    // 0x80800480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800484: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800488: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8080048C: jal         0x800F1214
    // 0x80800490: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    func_800F1214(rdram, ctx);
        goto after_5;
    // 0x80800490: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x80800494: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800498: jal         0x8009B9B0
    // 0x8080049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x8080049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808004A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808004A4:
    // 0x808004A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808004A8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808004AC: jr          $ra
    // 0x808004B0: nop

    return;
    // 0x808004B0: nop

;}
RECOMP_FUNC void func_808004B4_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808004B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808004BC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808004C0: jal         0x8008E3E8
    // 0x808004C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008E3E8(rdram, ctx);
        goto after_0;
    // 0x808004C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808004C8: beql        $v0, $zero, L_8080051C
    if (ctx->r2 == 0) {
        // 0x808004CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080051C;
    }
    goto skip_0;
    // 0x808004CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808004D0: jal         0x8009EF10
    // 0x808004D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x808004D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808004D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808004DC: bnel        $v0, $at, L_8080051C
    if (ctx->r2 != ctx->r1) {
        // 0x808004E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080051C;
    }
    goto skip_1;
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808004E4: jal         0x8009EF1C
    // 0x808004E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF1C(rdram, ctx);
        goto after_2;
    // 0x808004E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808004EC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2DF0) << 16);
    // 0x808004F0: lwc1        $f4, 0x2DF0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2DF0));
    // 0x808004F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004F8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808004FC: nop

    // 0x80800500: bc1fl       L_8080051C
    if (!c1cs) {
        // 0x80800504: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080051C;
    }
    goto skip_2;
    // 0x80800504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800508: jal         0x800962B0
    // 0x8080050C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800962B0(rdram, ctx);
        goto after_3;
    // 0x8080050C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800510: b           L_80800528
    // 0x80800514: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800528;
    // 0x80800514: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800518: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080051C:
    // 0x8080051C: jal         0x800962B0
    // 0x80800520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800962B0(rdram, ctx);
        goto after_4;
    // 0x80800520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80800524: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800528:
    // 0x80800528: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080052C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800530: jr          $ra
    // 0x80800534: nop

    return;
    // 0x80800534: nop

;}
RECOMP_FUNC void func_80800538_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800538: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080053C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800540: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800544: jal         0x8009E710
    // 0x80800548: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E710(rdram, ctx);
        goto after_0;
    // 0x80800548: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080054C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800550: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800554: jal         0x8009CA70
    // 0x80800558: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8009CA70(rdram, ctx);
        goto after_1;
    // 0x80800558: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x8080055C: bnel        $v0, $zero, L_8080060C
    if (ctx->r2 != 0) {
        // 0x80800560: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080060C;
    }
    goto skip_0;
    // 0x80800560: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800564: jal         0x80085050
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_15(rdram, ctx);
        goto after_2;
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080056C: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x80800570: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800578: jal         0x8009F1C8
    // 0x8080057C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_3;
    // 0x8080057C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800584: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800588: jal         0x8009F1C8
    // 0x8080058C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_4;
    // 0x8080058C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
    // 0x80800590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800594: jal         0x800A0CF4
    // 0x80800598: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_5;
    // 0x80800598: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8080059C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A0: jal         0x800A0CE8
    // 0x808005A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CE8(rdram, ctx);
        goto after_6;
    // 0x808005A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808005A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005AC: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808005B0: jal         0x8009BFE4
    // 0x808005B4: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_7;
    // 0x808005B4: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_7:
    // 0x808005B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005BC: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808005C0: jal         0x8009C554
    // 0x808005C4: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_8;
    // 0x808005C4: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_8:
    // 0x808005C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005CC: jal         0x80095760
    // 0x808005D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80095760(rdram, ctx);
        goto after_9;
    // 0x808005D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x808005D4: lui         $a3, 0x3E75
    ctx->r7 = S32(0X3E75 << 16);
    // 0x808005D8: ori         $a3, $a3, 0xC28F
    ctx->r7 = ctx->r7 | 0XC28F;
    // 0x808005DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005E0: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x808005E4: jal         0x80094F14
    // 0x808005E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80094F14(rdram, ctx);
        goto after_10;
    // 0x808005E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
    // 0x808005EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005F0: jal         0x800931AC
    // 0x808005F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800931AC(rdram, ctx);
        goto after_11;
    // 0x808005F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x808005F8: jal         0x8009E4AC
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_12;
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800600: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x80800604: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
    // 0x80800608: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080060C:
    // 0x8080060C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800610: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800614: jr          $ra
    // 0x80800618: nop

    return;
    // 0x80800618: nop

;}
RECOMP_FUNC void func_8080061C_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080061C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800620: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800624: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800628: jal         0x8009E704
    // 0x8080062C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E704(rdram, ctx);
        goto after_0;
    // 0x8080062C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800630: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800638: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x8080063C: jal         0x8009CA70
    // 0x80800640: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8009CA70(rdram, ctx);
        goto after_1;
    // 0x80800640: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x80800644: bnel        $v0, $zero, L_80800700
    if (ctx->r2 != 0) {
        // 0x80800648: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800700;
    }
    goto skip_0;
    // 0x80800648: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x8080064C: jal         0x8009E474
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_2;
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800658: jal         0x800931AC
    // 0x8080065C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800931AC(rdram, ctx);
        goto after_3;
    // 0x8080065C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800660: jal         0x8009F1E0
    // 0x80800664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F1E0(rdram, ctx);
        goto after_4;
    // 0x80800664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080066C: jal         0x800A0CF4
    // 0x80800670: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_5;
    // 0x80800670: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80800674: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800678: jal         0x800A0CE8
    // 0x8080067C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CE8(rdram, ctx);
        goto after_6;
    // 0x8080067C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80800680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800684: jal         0x8009BF5C
    // 0x80800688: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_7;
    // 0x80800688: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_7:
    // 0x8080068C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800690: jal         0x8009C4CC
    // 0x80800694: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_8;
    // 0x80800694: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x80800698: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080069C: jal         0x80095774
    // 0x808006A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80095774(rdram, ctx);
        goto after_9;
    // 0x808006A0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x808006A4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x808006A8: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006B0: beq         $t6, $at, L_808006C0
    if (ctx->r14 == ctx->r1) {
        // 0x808006B4: addiu       $a1, $zero, 0x3
        ctx->r5 = ADD32(0, 0X3);
            goto L_808006C0;
    }
    // 0x808006B4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x808006B8: jal         0x800917A8
    // 0x808006BC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_800917A8(rdram, ctx);
        goto after_10;
    // 0x808006BC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_10:
L_808006C0:
    // 0x808006C0: jal         0x800004B4
    // 0x808006C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bsbtrot(rdram, ctx);
        goto after_11;
    // 0x808006C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808006C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006CC: jal         0x800962B0
    // 0x808006D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800962B0(rdram, ctx);
        goto after_12;
    // 0x808006D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x808006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006D8: jal         0x8008CA4C
    // 0x808006DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_13;
    // 0x808006DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x808006E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006E4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x808006E8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808006EC: jal         0x80094F14
    // 0x808006F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80094F14(rdram, ctx);
        goto after_14;
    // 0x808006F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_14:
    // 0x808006F4: jal         0x80085048
    // 0x808006F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_14(rdram, ctx);
        goto after_15;
    // 0x808006F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808006FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800700:
    // 0x80800700: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800704: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800708: jr          $ra
    // 0x8080070C: nop

    return;
    // 0x8080070C: nop

;}
RECOMP_FUNC void func_80800710_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800718: lw          $t6, 0x164($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X164);
    // 0x8080071C: beq         $t6, $zero, L_8080072C
    if (ctx->r14 == 0) {
        // 0x80800720: nop
    
            goto L_8080072C;
    }
    // 0x80800720: nop

    // 0x80800724: b           L_8080074C
    // 0x80800728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8080074C;
    // 0x80800728: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8080072C:
    // 0x8080072C: jal         0x8008E39C
    // 0x80800730: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E39C(rdram, ctx);
        goto after_0;
    // 0x80800730: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800734: beq         $v0, $zero, L_80800744
    if (ctx->r2 == 0) {
        // 0x80800738: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800744;
    }
    // 0x80800738: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080073C: b           L_8080074C
    // 0x80800740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8080074C;
    // 0x80800740: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800744:
    // 0x80800744: jal         0x80091A30
    // 0x80800748: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A30(rdram, ctx);
        goto after_1;
    // 0x80800748: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
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
RECOMP_FUNC void func_8080075C_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080075C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800764: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800768: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080076C: jal         0x80095738
    // 0x80800770: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_0;
    // 0x80800770: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x80800774: beq         $v0, $zero, L_80800784
    if (ctx->r2 == 0) {
        // 0x80800778: nop
    
            goto L_80800784;
    }
    // 0x80800778: nop

    // 0x8080077C: b           L_808007D0
    // 0x80800780: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
        goto L_808007D0;
    // 0x80800780: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
L_80800784:
    // 0x80800784: jal         0x8008D3B0
    // 0x80800788: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008D3B0(rdram, ctx);
        goto after_1;
    // 0x80800788: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080078C: beq         $v0, $zero, L_8080079C
    if (ctx->r2 == 0) {
        // 0x80800790: nop
    
            goto L_8080079C;
    }
    // 0x80800790: nop

    // 0x80800794: b           L_808007D0
    // 0x80800798: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
        goto L_808007D0;
    // 0x80800798: addiu       $v0, $zero, 0x23
    ctx->r2 = ADD32(0, 0X23);
L_8080079C:
    // 0x8080079C: jal         0x8008E430
    // 0x808007A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E430(rdram, ctx);
        goto after_2;
    // 0x808007A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808007A4: beq         $v0, $zero, L_808007B4
    if (ctx->r2 == 0) {
        // 0x808007A8: nop
    
            goto L_808007B4;
    }
    // 0x808007A8: nop

    // 0x808007AC: b           L_808007D0
    // 0x808007B0: addiu       $v0, $zero, 0x9C
    ctx->r2 = ADD32(0, 0X9C);
        goto L_808007D0;
    // 0x808007B0: addiu       $v0, $zero, 0x9C
    ctx->r2 = ADD32(0, 0X9C);
L_808007B4:
    // 0x808007B4: jal         0x8008E40C
    // 0x808007B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E40C(rdram, ctx);
        goto after_3;
    // 0x808007B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808007BC: beql        $v0, $zero, L_808007D0
    if (ctx->r2 == 0) {
        // 0x808007C0: addiu       $v0, $zero, 0x8
        ctx->r2 = ADD32(0, 0X8);
            goto L_808007D0;
    }
    goto skip_0;
    // 0x808007C0: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
    skip_0:
    // 0x808007C4: b           L_808007D0
    // 0x808007C8: addiu       $v0, $zero, 0x95
    ctx->r2 = ADD32(0, 0X95);
        goto L_808007D0;
    // 0x808007C8: addiu       $v0, $zero, 0x95
    ctx->r2 = ADD32(0, 0X95);
    // 0x808007CC: addiu       $v0, $zero, 0x8
    ctx->r2 = ADD32(0, 0X8);
L_808007D0:
    // 0x808007D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007D8: jr          $ra
    // 0x808007DC: nop

    return;
    // 0x808007DC: nop

;}
RECOMP_FUNC void func_808007E0_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808007E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808007E8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808007EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808007F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808007F4: jal         0x8009EF10
    // 0x808007F8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_8009EF10(rdram, ctx);
        goto after_0;
    // 0x808007F8: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x808007FC: blez        $v0, L_8080081C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80800800: nop
    
            goto L_8080081C;
    }
    // 0x80800800: nop

    // 0x80800804: lw          $t6, 0x160($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X160);
    // 0x80800808: addiu       $s1, $zero, 0x16
    ctx->r17 = ADD32(0, 0X16);
    // 0x8080080C: beq         $t6, $zero, L_8080081C
    if (ctx->r14 == 0) {
        // 0x80800810: nop
    
            goto L_8080081C;
    }
    // 0x80800810: nop

    // 0x80800814: b           L_8080081C
    // 0x80800818: addiu       $s1, $zero, 0x17C
    ctx->r17 = ADD32(0, 0X17C);
        goto L_8080081C;
    // 0x80800818: addiu       $s1, $zero, 0x17C
    ctx->r17 = ADD32(0, 0X17C);
L_8080081C:
    // 0x8080081C: jal         0x80097AD0
    // 0x80800820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_1;
    // 0x80800820: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800824: beql        $v0, $zero, L_8080083C
    if (ctx->r2 == 0) {
        // 0x80800828: lw          $t7, 0x160($s0)
        ctx->r15 = MEM_W(ctx->r16, 0X160);
            goto L_8080083C;
    }
    goto skip_0;
    // 0x80800828: lw          $t7, 0x160($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X160);
    skip_0:
    // 0x8080082C: jal         0x800848A8
    // 0x80800830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_2;
    // 0x80800830: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800834: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800838: lw          $t7, 0x160($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X160);
L_8080083C:
    // 0x8080083C: bne         $t7, $zero, L_80800858
    if (ctx->r15 != 0) {
        // 0x80800840: nop
    
            goto L_80800858;
    }
    // 0x80800840: nop

    // 0x80800844: jal         0x8008DD04
    // 0x80800848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_3;
    // 0x80800848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080084C: beq         $v0, $zero, L_80800858
    if (ctx->r2 == 0) {
        // 0x80800850: nop
    
            goto L_80800858;
    }
    // 0x80800850: nop

    // 0x80800854: addiu       $s1, $zero, 0x71
    ctx->r17 = ADD32(0, 0X71);
L_80800858:
    // 0x80800858: jal         0x80000710
    // 0x8080085C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800710_bsbtrot(rdram, ctx);
        goto after_4;
    // 0x8080085C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800860: beq         $v0, $zero, L_8080086C
    if (ctx->r2 == 0) {
        // 0x80800864: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080086C;
    }
    // 0x80800864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800868: addiu       $s1, $zero, 0x17
    ctx->r17 = ADD32(0, 0X17);
L_8080086C:
    // 0x8080086C: jal         0x80091A58
    // 0x80800870: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_5;
    // 0x80800870: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_5:
    // 0x80800874: beq         $v0, $zero, L_80800888
    if (ctx->r2 == 0) {
        // 0x80800878: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800888;
    }
    // 0x80800878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080087C: jal         0x8000075C
    // 0x80800880: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8080075C_bsbtrot(rdram, ctx);
        goto after_6;
    // 0x80800880: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x80800884: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80800888:
    // 0x80800888: lw          $t8, 0x160($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X160);
    // 0x8080088C: bne         $t8, $zero, L_808008A8
    if (ctx->r24 != 0) {
        // 0x80800890: nop
    
            goto L_808008A8;
    }
    // 0x80800890: nop

    // 0x80800894: jal         0x8008DF18
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DF18(rdram, ctx);
        goto after_7;
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080089C: beq         $v0, $zero, L_808008A8
    if (ctx->r2 == 0) {
        // 0x808008A0: nop
    
            goto L_808008A8;
    }
    // 0x808008A0: nop

    // 0x808008A4: addiu       $s1, $zero, 0x45
    ctx->r17 = ADD32(0, 0X45);
L_808008A8:
    // 0x808008A8: jal         0x8008E35C
    // 0x808008AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_8;
    // 0x808008AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808008B0: beq         $v0, $zero, L_808008BC
    if (ctx->r2 == 0) {
        // 0x808008B4: lw          $s0, 0x14($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X14);
            goto L_808008BC;
    }
    // 0x808008B4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808008B8: addiu       $s1, $zero, 0x2D
    ctx->r17 = ADD32(0, 0X2D);
L_808008BC:
    // 0x808008BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808008C0: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x808008C4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808008C8: jr          $ra
    // 0x808008CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808008CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_808008D0_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808008D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008D8: jal         0x8008CABC
    // 0x808008DC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808008DC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x808008E0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2DF4) << 16);
    // 0x808008E4: lwc1        $f4, 0x2DF4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2DF4));
    // 0x808008E8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2DF8) << 16);
    // 0x808008EC: lwc1        $f6, 0x2DF8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2DF8));
    // 0x808008F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808008F4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808008F8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x808008FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800900: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80800904: jal         0x80084FE0
    // 0x80800908: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    _bashoes_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800908: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x8080090C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800910: beq         $v0, $at, L_80800930
    if (ctx->r2 == ctx->r1) {
        // 0x80800914: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_80800930;
    }
    // 0x80800914: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800918: beq         $v0, $at, L_80800940
    if (ctx->r2 == ctx->r1) {
        // 0x8080091C: addiu       $at, $zero, 0x5
        ctx->r1 = ADD32(0, 0X5);
            goto L_80800940;
    }
    // 0x8080091C: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80800920: beq         $v0, $at, L_80800948
    if (ctx->r2 == ctx->r1) {
        // 0x80800924: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_80800948;
    }
    // 0x80800924: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800928: b           L_808009A4
    // 0x8080092C: lui         $a1, 0x3E58
    ctx->r5 = S32(0X3E58 << 16);
        goto L_808009A4;
    // 0x8080092C: lui         $a1, 0x3E58
    ctx->r5 = S32(0X3E58 << 16);
L_80800930:
    // 0x80800930: jal         0x80085078
    // 0x80800934: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    _bashoes_entrypoint_20(rdram, ctx);
        goto after_2;
    // 0x80800934: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x80800938: b           L_808009D0
    // 0x8080093C: nop

        goto L_808009D0;
    // 0x8080093C: nop

L_80800940:
    // 0x80800940: b           L_808009D0
    // 0x80800944: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
        goto L_808009D0;
    // 0x80800944: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_80800948:
    // 0x80800948: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2DFC) << 16);
    // 0x8080094C: lwc1        $f0, 0x2DFC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2DFC));
    // 0x80800950: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2E00) << 16);
    // 0x80800954: lwc1        $f8, 0x2E00($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2E00));
    // 0x80800958: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080095C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800960: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80800964: jal         0x8008B348
    // 0x80800968: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x80800968: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x8080096C: beql        $v0, $zero, L_80800980
    if (ctx->r2 == 0) {
        // 0x80800970: lui         $a1, 0x3E36
        ctx->r5 = S32(0X3E36 << 16);
            goto L_80800980;
    }
    goto skip_0;
    // 0x80800970: lui         $a1, 0x3E36
    ctx->r5 = S32(0X3E36 << 16);
    skip_0:
    // 0x80800974: jal         0x80085070
    // 0x80800978: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    _bashoes_entrypoint_19(rdram, ctx);
        goto after_4;
    // 0x80800978: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_4:
    // 0x8080097C: lui         $a1, 0x3E36
    ctx->r5 = S32(0X3E36 << 16);
L_80800980:
    // 0x80800980: ori         $a1, $a1, 0x9446
    ctx->r5 = ctx->r5 | 0X9446;
    // 0x80800984: jal         0x8008B348
    // 0x80800988: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x80800988: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x8080098C: beq         $v0, $zero, L_808009D0
    if (ctx->r2 == 0) {
        // 0x80800990: nop
    
            goto L_808009D0;
    }
    // 0x80800990: nop

    // 0x80800994: jal         0x80085068
    // 0x80800998: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    _bashoes_entrypoint_18(rdram, ctx);
        goto after_6;
    // 0x80800998: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_6:
    // 0x8080099C: b           L_808009D0
    // 0x808009A0: nop

        goto L_808009D0;
    // 0x808009A0: nop

L_808009A4:
    // 0x808009A4: jal         0x8008B348
    // 0x808009A8: ori         $a1, $a1, 0x9375
    ctx->r5 = ctx->r5 | 0X9375;
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x808009A8: ori         $a1, $a1, 0x9375
    ctx->r5 = ctx->r5 | 0X9375;
    after_7:
    // 0x808009AC: bne         $v0, $zero, L_808009C8
    if (ctx->r2 != 0) {
        // 0x808009B0: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_808009C8;
    }
    // 0x808009B0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x808009B4: lui         $a1, 0x3F36
    ctx->r5 = S32(0X3F36 << 16);
    // 0x808009B8: jal         0x8008B348
    // 0x808009BC: ori         $a1, $a1, 0x24DD
    ctx->r5 = ctx->r5 | 0X24DD;
    func_8008B348(rdram, ctx);
        goto after_8;
    // 0x808009BC: ori         $a1, $a1, 0x24DD
    ctx->r5 = ctx->r5 | 0X24DD;
    after_8:
    // 0x808009C0: beq         $v0, $zero, L_808009D0
    if (ctx->r2 == 0) {
        // 0x808009C4: nop
    
            goto L_808009D0;
    }
    // 0x808009C4: nop

L_808009C8:
    // 0x808009C8: jal         0x800849D0
    // 0x808009CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    _badust_entrypoint_1(rdram, ctx);
        goto after_9;
    // 0x808009CC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_9:
L_808009D0:
    // 0x808009D0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2E04) << 16);
    // 0x808009D4: lwc1        $f16, 0x2E04($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2E04));
    // 0x808009D8: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x808009DC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808009E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808009E4: jal         0x800F13C4
    // 0x808009E8: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    func_800F13C4(rdram, ctx);
        goto after_10;
    // 0x808009E8: add.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl + ctx->f16.fl;
    after_10:
    // 0x808009EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808009F0: jal         0x8008B348
    // 0x808009F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_11;
    // 0x808009F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_11:
    // 0x808009F8: beq         $v0, $zero, L_80800A08
    if (ctx->r2 == 0) {
        // 0x808009FC: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_80800A08;
    }
    // 0x808009FC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800A00: jal         0x800000DC
    // 0x80800A04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_808000DC_bsbtrot(rdram, ctx);
        goto after_12;
    // 0x80800A04: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
L_80800A08:
    // 0x80800A08: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2E08) << 16);
    // 0x80800A0C: lwc1        $f4, 0x2E08($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2E08));
    // 0x80800A10: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800A14: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800A18: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800A1C: jal         0x800F13C4
    // 0x80800A20: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    func_800F13C4(rdram, ctx);
        goto after_13;
    // 0x80800A20: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    after_13:
    // 0x80800A24: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800A28: jal         0x8008B348
    // 0x80800A2C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_14;
    // 0x80800A2C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_14:
    // 0x80800A30: beq         $v0, $zero, L_80800A40
    if (ctx->r2 == 0) {
        // 0x80800A34: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_80800A40;
    }
    // 0x80800A34: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800A38: jal         0x800000DC
    // 0x80800A3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808000DC_bsbtrot(rdram, ctx);
        goto after_15;
    // 0x80800A3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
L_80800A40:
    // 0x80800A40: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800A44: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80800A48: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800A4C: beq         $t7, $zero, L_80800A78
    if (ctx->r15 == 0) {
        // 0x80800A50: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800A78;
    }
    // 0x80800A50: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A54: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800A58: jal         0x800A2CE8
    // 0x80800A5C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800A2CE8(rdram, ctx);
        goto after_16;
    // 0x80800A5C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_16:
    // 0x80800A60: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800A64: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80800A68: jal         0x800A2CE8
    // 0x80800A6C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_17;
    // 0x80800A6C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_17:
    // 0x80800A70: b           L_80800A94
    // 0x80800A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800A94;
    // 0x80800A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800A78:
    // 0x80800A78: jal         0x800A2D2C
    // 0x80800A7C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2D2C(rdram, ctx);
        goto after_18;
    // 0x80800A7C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_18:
    // 0x80800A80: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800A84: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80800A88: jal         0x800A2D2C
    // 0x80800A8C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2D2C(rdram, ctx);
        goto after_19;
    // 0x80800A8C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_19:
    // 0x80800A90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800A94:
    // 0x80800A94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800A98: jr          $ra
    // 0x80800A9C: nop

    return;
    // 0x80800A9C: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800AA4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800AA8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800AAC: jal         0x80000538
    // 0x80800AB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800538_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80800AB0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800AB4: jal         0x800004B4
    // 0x80800AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80800AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800ABC: addiu       $t6, $zero, 0xA0
    ctx->r14 = ADD32(0, 0XA0);
    // 0x80800AC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800AC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AC8: addiu       $a1, $zero, 0x16
    ctx->r5 = ADD32(0, 0X16);
    // 0x80800ACC: addiu       $a2, $zero, 0x16
    ctx->r6 = ADD32(0, 0X16);
    // 0x80800AD0: jal         0x80000000
    // 0x80800AD4: addiu       $a3, $zero, 0x29F
    ctx->r7 = ADD32(0, 0X29F);
    func_80800000_bsbtrot(rdram, ctx);
        goto after_2;
    // 0x80800AD4: addiu       $a3, $zero, 0x29F
    ctx->r7 = ADD32(0, 0X29F);
    after_2:
    // 0x80800AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ADC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800AE0: jal         0x8008CDB8
    // 0x80800AE4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CDB8(rdram, ctx);
        goto after_3;
    // 0x80800AE4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x80800AE8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800AEC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800AF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800AF8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800AFC: jal         0x8009FFD8
    // 0x80800B00: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_4;
    // 0x80800B00: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_4:
    // 0x80800B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B08: jal         0x8009B9B0
    // 0x80800B0C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_5;
    // 0x80800B0C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800B10: jal         0x8009D874
    // 0x80800B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D874(rdram, ctx);
        goto after_6;
    // 0x80800B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800B18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800B20: jal         0x80098140
    // 0x80800B24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098140(rdram, ctx);
        goto after_7;
    // 0x80800B24: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80800B28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800B2C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800B30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800B34: jr          $ra
    // 0x80800B38: nop

    return;
    // 0x80800B38: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800B40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B44: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800B48: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800B4C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800B50: jal         0x8008CABC
    // 0x80800B54: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800B54: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    after_0:
    // 0x80800B58: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800B5C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800B60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800B64: jal         0x80098140
    // 0x80800B68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098140(rdram, ctx);
        goto after_1;
    // 0x80800B68: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x80800B6C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800B70: jal         0x8009D3A8
    // 0x80800B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_2;
    // 0x80800B74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800B78: jal         0x8008B324
    // 0x80800B7C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_3;
    // 0x80800B7C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x80800B80: beq         $v0, $zero, L_80800B8C
    if (ctx->r2 == 0) {
        // 0x80800B84: nop
    
            goto L_80800B8C;
    }
    // 0x80800B84: nop

    // 0x80800B88: addiu       $s0, $zero, 0x15
    ctx->r16 = ADD32(0, 0X15);
L_80800B8C:
    // 0x80800B8C: jal         0x8008B2B4
    // 0x80800B90: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B2B4(rdram, ctx);
        goto after_4;
    // 0x80800B90: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800B94: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800B98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800B9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800BA0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800BA4: nop

    // 0x80800BA8: bc1fl       L_80800BC0
    if (!c1cs) {
        // 0x80800BAC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800BC0;
    }
    goto skip_0;
    // 0x80800BAC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x80800BB0: jal         0x800007E0
    // 0x80800BB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_808007E0_bsbtrot(rdram, ctx);
        goto after_5;
    // 0x80800BB4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80800BB8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800BBC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80800BC0:
    // 0x80800BC0: jal         0x8009E5C8
    // 0x80800BC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x80800BC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x80800BC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BCC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800BD0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800BD4: jr          $ra
    // 0x80800BD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800BD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void bsbtrot_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800BE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800BEC: jal         0x80098140
    // 0x80800BF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098140(rdram, ctx);
        goto after_0;
    // 0x80800BF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x80800BF4: jal         0x8000061C
    // 0x80800BF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080061C_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80800BF8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C04: jr          $ra
    // 0x80800C08: nop

    return;
    // 0x80800C08: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C0C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800C10: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2E50) << 16);
    // 0x80800C14: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800C18: jr          $ra
    // 0x80800C1C: lw          $v0, 0x2E50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2E50));
    return;
    // 0x80800C1C: lw          $v0, 0x2E50($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2E50));
;}
RECOMP_FUNC void func_80800C20_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800C24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800C28: addiu       $t6, $zero, 0x86
    ctx->r14 = ADD32(0, 0X86);
    // 0x80800C2C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800C30: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    // 0x80800C34: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80800C38: jal         0x80000000
    // 0x80800C3C: addiu       $a3, $zero, 0x29B
    ctx->r7 = ADD32(0, 0X29B);
    func_80800000_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80800C3C: addiu       $a3, $zero, 0x29B
    ctx->r7 = ADD32(0, 0X29B);
    after_0:
    // 0x80800C40: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800C44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800C48: jr          $ra
    // 0x80800C4C: nop

    return;
    // 0x80800C4C: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C50: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800C54: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800C58: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800C5C: jal         0x8008E430
    // 0x80800C60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008E430(rdram, ctx);
        goto after_0;
    // 0x80800C60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800C64: beq         $v0, $zero, L_80800C84
    if (ctx->r2 == 0) {
        // 0x80800C68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C84;
    }
    // 0x80800C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C6C: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80800C70: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800C74: jal         0x8008CB3C
    // 0x80800C78: addiu       $a1, $zero, 0x29B
    ctx->r5 = ADD32(0, 0X29B);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800C78: addiu       $a1, $zero, 0x29B
    ctx->r5 = ADD32(0, 0X29B);
    after_1:
    // 0x80800C7C: b           L_80800CC4
    // 0x80800C80: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
        goto L_80800CC4;
    // 0x80800C80: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
L_80800C84:
    // 0x80800C84: jal         0x8008E40C
    // 0x80800C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E40C(rdram, ctx);
        goto after_2;
    // 0x80800C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800C8C: beq         $v0, $zero, L_80800CB0
    if (ctx->r2 == 0) {
        // 0x80800C90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800CB0;
    }
    // 0x80800C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C94: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80800C98: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800C9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CA0: jal         0x8008CB3C
    // 0x80800CA4: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    func_8008CB3C(rdram, ctx);
        goto after_3;
    // 0x80800CA4: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    after_3:
    // 0x80800CA8: b           L_80800CC4
    // 0x80800CAC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
        goto L_80800CC4;
    // 0x80800CAC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
L_80800CB0:
    // 0x80800CB0: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80800CB4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800CB8: jal         0x8008CB3C
    // 0x80800CBC: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    func_8008CB3C(rdram, ctx);
        goto after_4;
    // 0x80800CBC: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_4:
    // 0x80800CC0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
L_80800CC4:
    // 0x80800CC4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800CC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CCC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800CD0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800CD4: jal         0x8009FFD8
    // 0x80800CD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_5;
    // 0x80800CD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80800CDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CE0: jal         0x8009B9B0
    // 0x80800CE4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x80800CE4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800CE8: jal         0x80000538
    // 0x80800CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800538_bsbtrot(rdram, ctx);
        goto after_7;
    // 0x80800CEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800CF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800CF4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800CF8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800CFC: jr          $ra
    // 0x80800D00: nop

    return;
    // 0x80800D00: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D04: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800D08: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800D0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800D10: jal         0x80000C20
    // 0x80800D14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800C20_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80800D14: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800D18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D1C: jal         0x800002A4
    // 0x80800D20: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_808002A4_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80800D20: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x80800D24: jal         0x80000120
    // 0x80800D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800120_bsbtrot(rdram, ctx);
        goto after_2;
    // 0x80800D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800D2C: jal         0x800004B4
    // 0x80800D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bsbtrot(rdram, ctx);
        goto after_3;
    // 0x80800D30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800D34: jal         0x8008E3E8
    // 0x80800D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E3E8(rdram, ctx);
        goto after_4;
    // 0x80800D38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800D3C: beql        $v0, $zero, L_80800D50
    if (ctx->r2 == 0) {
        // 0x80800D40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D50;
    }
    goto skip_0;
    // 0x80800D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800D44: jal         0x80085078
    // 0x80800D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_20(rdram, ctx);
        goto after_5;
    // 0x80800D48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800D4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800D50:
    // 0x80800D50: jal         0x8009D3A8
    // 0x80800D54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_6;
    // 0x80800D54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80800D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D5C: jal         0x800007E0
    // 0x80800D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808007E0_bsbtrot(rdram, ctx);
        goto after_7;
    // 0x80800D60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80800D64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D68: jal         0x800A02DC
    // 0x80800D6C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800A02DC(rdram, ctx);
        goto after_8;
    // 0x80800D6C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_8:
    // 0x80800D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D74: jal         0x8009E5C8
    // 0x80800D78: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_9;
    // 0x80800D78: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_9:
    // 0x80800D7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800D80: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800D84: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800D88: jr          $ra
    // 0x80800D8C: nop

    return;
    // 0x80800D8C: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D98: jal         0x8000061C
    // 0x80800D9C: nop

    func_8080061C_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80800D9C: nop

    after_0:
    // 0x80800DA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800DA8: jr          $ra
    // 0x80800DAC: nop

    return;
    // 0x80800DAC: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DB0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800DB4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2E60) << 16);
    // 0x80800DB8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800DBC: jr          $ra
    // 0x80800DC0: lw          $v0, 0x2E60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2E60));
    return;
    // 0x80800DC0: lw          $v0, 0x2E60($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2E60));
;}
RECOMP_FUNC void func_80800DC4_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800DC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800DCC: addiu       $t6, $zero, 0xA1
    ctx->r14 = ADD32(0, 0XA1);
    // 0x80800DD0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800DD4: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    // 0x80800DD8: addiu       $a2, $zero, 0x44
    ctx->r6 = ADD32(0, 0X44);
    // 0x80800DDC: jal         0x80000000
    // 0x80800DE0: addiu       $a3, $zero, 0x29C
    ctx->r7 = ADD32(0, 0X29C);
    func_80800000_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80800DE0: addiu       $a3, $zero, 0x29C
    ctx->r7 = ADD32(0, 0X29C);
    after_0:
    // 0x80800DE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800DE8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800DEC: jr          $ra
    // 0x80800DF0: nop

    return;
    // 0x80800DF0: nop

;}
RECOMP_FUNC void func_80800DF4_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DF4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800DF8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800DFC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800E00: jal         0x800001B8
    // 0x80800E04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808001B8_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80800E04: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800E08: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800E0C: jal         0x80000164
    // 0x80800E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800164_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80800E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800E14: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80800E18: jal         0x80000248
    // 0x80800E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800248_bsbtrot(rdram, ctx);
        goto after_2;
    // 0x80800E1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800E20: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80800E24: jal         0x800001EC
    // 0x80800E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808001EC_bsbtrot(rdram, ctx);
        goto after_3;
    // 0x80800E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E30: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80800E34: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80800E38: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80800E3C: jal         0x8008C9F0
    // 0x80800E40: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_4;
    // 0x80800E40: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x80800E44: jal         0x8008E1A0
    // 0x80800E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E1A0(rdram, ctx);
        goto after_5;
    // 0x80800E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800E4C: beq         $v0, $zero, L_80800E94
    if (ctx->r2 == 0) {
        // 0x80800E50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E94;
    }
    // 0x80800E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E54: jal         0x8009BBB8
    // 0x80800E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BBB8(rdram, ctx);
        goto after_6;
    // 0x80800E58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800E5C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2E0C) << 16);
    // 0x80800E60: lwc1        $f4, 0x2E0C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2E0C));
    // 0x80800E64: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800E68: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x80800E6C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80800E70: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800E74: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800E78: jal         0x800F10B4
    // 0x80800E7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_7;
    // 0x80800E7C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x80800E80: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800E84: jal         0x8008CA30
    // 0x80800E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CA30(rdram, ctx);
        goto after_8;
    // 0x80800E88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800E8C: b           L_80800EA0
    // 0x80800E90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800EA0;
    // 0x80800E90: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800E94:
    // 0x80800E94: jal         0x8008CA30
    // 0x80800E98: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_9;
    // 0x80800E98: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_9:
    // 0x80800E9C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800EA0:
    // 0x80800EA0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800EA4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800EA8: jr          $ra
    // 0x80800EAC: nop

    return;
    // 0x80800EAC: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EB0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800EB4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800EB8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800EBC: jal         0x80000DC4
    // 0x80800EC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800DC4_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80800EC0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800EC4: lui         $a2, 0x3F07
    ctx->r6 = S32(0X3F07 << 16);
    // 0x80800EC8: ori         $a2, $a2, 0xAE14
    ctx->r6 = ctx->r6 | 0XAE14;
    // 0x80800ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800ED0: jal         0x8008CB3C
    // 0x80800ED4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800ED4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x80800ED8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800EDC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800EE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EE4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800EE8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800EEC: jal         0x8009FFD8
    // 0x80800EF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800EF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800EF4: jal         0x80000538
    // 0x80800EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800538_bsbtrot(rdram, ctx);
        goto after_3;
    // 0x80800EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800EFC: jal         0x80000DF4
    // 0x80800F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800DF4_bsbtrot(rdram, ctx);
        goto after_4;
    // 0x80800F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800F04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800F08: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800F0C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800F10: jr          $ra
    // 0x80800F14: nop

    return;
    // 0x80800F14: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800F1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800F20: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800F24: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800F28: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800F2C: jal         0x80000120
    // 0x80800F30: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_80800120_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80800F30: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x80800F34: jal         0x80000DF4
    // 0x80800F38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800DF4_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80800F38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800F3C: jal         0x800004B4
    // 0x80800F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bsbtrot(rdram, ctx);
        goto after_2;
    // 0x80800F40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800F44: jal         0x80000DC4
    // 0x80800F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800DC4_bsbtrot(rdram, ctx);
        goto after_3;
    // 0x80800F48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F50: jal         0x800002A4
    // 0x80800F54: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_808002A4_bsbtrot(rdram, ctx);
        goto after_4;
    // 0x80800F54: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x80800F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F5C: jal         0x8009D3A8
    // 0x80800F60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_5;
    // 0x80800F60: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800F64: jal         0x80000438
    // 0x80800F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800438_bsbtrot(rdram, ctx);
        goto after_6;
    // 0x80800F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800F6C: jal         0x800008D0
    // 0x80800F70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808008D0_bsbtrot(rdram, ctx);
        goto after_7;
    // 0x80800F70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800F74: jal         0x8009EF10
    // 0x80800F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_8;
    // 0x80800F78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800F7C: bne         $v0, $zero, L_80800F98
    if (ctx->r2 != 0) {
        // 0x80800F80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800F98;
    }
    // 0x80800F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F84: jal         0x8009BCD4
    // 0x80800F88: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_9;
    // 0x80800F88: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_9:
    // 0x80800F8C: beq         $v0, $zero, L_80800F98
    if (ctx->r2 == 0) {
        // 0x80800F90: nop
    
            goto L_80800F98;
    }
    // 0x80800F90: nop

    // 0x80800F94: addiu       $s1, $zero, 0x15
    ctx->r17 = ADD32(0, 0X15);
L_80800F98:
    // 0x80800F98: jal         0x8008DD04
    // 0x80800F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_10;
    // 0x80800F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800FA0: beq         $v0, $zero, L_80800FAC
    if (ctx->r2 == 0) {
        // 0x80800FA4: nop
    
            goto L_80800FAC;
    }
    // 0x80800FA4: nop

    // 0x80800FA8: addiu       $s1, $zero, 0x71
    ctx->r17 = ADD32(0, 0X71);
L_80800FAC:
    // 0x80800FAC: jal         0x80000710
    // 0x80800FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800710_bsbtrot(rdram, ctx);
        goto after_11;
    // 0x80800FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800FB4: beq         $v0, $zero, L_80800FC0
    if (ctx->r2 == 0) {
        // 0x80800FB8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800FC0;
    }
    // 0x80800FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FBC: addiu       $s1, $zero, 0x17
    ctx->r17 = ADD32(0, 0X17);
L_80800FC0:
    // 0x80800FC0: jal         0x80091A58
    // 0x80800FC4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_12;
    // 0x80800FC4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_12:
    // 0x80800FC8: beq         $v0, $zero, L_80800FDC
    if (ctx->r2 == 0) {
        // 0x80800FCC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800FDC;
    }
    // 0x80800FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FD0: jal         0x8000075C
    // 0x80800FD4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8080075C_bsbtrot(rdram, ctx);
        goto after_13;
    // 0x80800FD4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_13:
    // 0x80800FD8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80800FDC:
    // 0x80800FDC: jal         0x8008DF18
    // 0x80800FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DF18(rdram, ctx);
        goto after_14;
    // 0x80800FE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800FE4: beq         $v0, $zero, L_80800FF0
    if (ctx->r2 == 0) {
        // 0x80800FE8: nop
    
            goto L_80800FF0;
    }
    // 0x80800FE8: nop

    // 0x80800FEC: addiu       $s1, $zero, 0x45
    ctx->r17 = ADD32(0, 0X45);
L_80800FF0:
    // 0x80800FF0: jal         0x8008E35C
    // 0x80800FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_15;
    // 0x80800FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800FF8: beq         $v0, $zero, L_80801004
    if (ctx->r2 == 0) {
        // 0x80800FFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801004;
    }
    // 0x80800FFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801000: addiu       $s1, $zero, 0x2D
    ctx->r17 = ADD32(0, 0X2D);
L_80801004:
    // 0x80801004: jal         0x800A02DC
    // 0x80801008: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800A02DC(rdram, ctx);
        goto after_16;
    // 0x80801008: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_16:
    // 0x8080100C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801010: jal         0x8009E5C8
    // 0x80801014: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_17;
    // 0x80801014: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_17:
    // 0x80801018: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080101C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80801020: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80801024: jr          $ra
    // 0x80801028: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80801028: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsbtrot_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080102C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801030: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801034: jal         0x8000061C
    // 0x80801038: nop

    func_8080061C_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80801038: nop

    after_0:
    // 0x8080103C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801040: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801044: jr          $ra
    // 0x80801048: nop

    return;
    // 0x80801048: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080104C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801050: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2E70) << 16);
    // 0x80801054: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801058: jr          $ra
    // 0x8080105C: lw          $v0, 0x2E70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2E70));
    return;
    // 0x8080105C: lw          $v0, 0x2E70($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2E70));
;}
RECOMP_FUNC void bsbtrot_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801060: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80801064: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801068: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080106C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80801070: jal         0x8008CABC
    // 0x80801074: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80801074: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80801078: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8080107C: jal         0x8008AF24
    // 0x80801080: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80801080: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80801084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801088: jal         0x8008AED4
    // 0x8080108C: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x8080108C: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    after_2:
    // 0x80801090: lui         $a1, 0x3FB3
    ctx->r5 = S32(0X3FB3 << 16);
    // 0x80801094: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80801098: jal         0x8008B1BC
    // 0x8080109C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x8080109C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808010A0: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x808010A4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808010A8: jal         0x8008B1C8
    // 0x808010AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_4;
    // 0x808010AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808010B0: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x808010B4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808010B8: jal         0x8008B24C
    // 0x808010BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_5;
    // 0x808010BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808010C0: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x808010C4: ori         $a2, $a2, 0xE704
    ctx->r6 = ctx->r6 | 0XE704;
    // 0x808010C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010CC: jal         0x8008B1D4
    // 0x808010D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_6;
    // 0x808010D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x808010D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010D8: jal         0x8008B134
    // 0x808010DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x808010DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x808010E0: jal         0x8008B064
    // 0x808010E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x808010E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808010E8: jal         0x80000538
    // 0x808010EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800538_bsbtrot(rdram, ctx);
        goto after_9;
    // 0x808010EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x808010F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808010F4: jal         0x8008CA4C
    // 0x808010F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_10;
    // 0x808010F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x808010FC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801100: jal         0x8009C908
    // 0x80801104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009C908(rdram, ctx);
        goto after_11;
    // 0x80801104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80801108: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080110C: jal         0x8009D2D8
    // 0x80801110: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009D2D8(rdram, ctx);
        goto after_12;
    // 0x80801110: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_12:
    // 0x80801114: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801118: jal         0x8009B800
    // 0x8080111C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009B800(rdram, ctx);
        goto after_13;
    // 0x8080111C: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_13:
    // 0x80801120: jal         0x8009EF04
    // 0x80801124: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF04(rdram, ctx);
        goto after_14;
    // 0x80801124: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x80801128: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080112C: nop

    // 0x80801130: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80801134: nop

    // 0x80801138: bc1t        L_80801154
    if (c1cs) {
        // 0x8080113C: nop
    
            goto L_80801154;
    }
    // 0x8080113C: nop

    // 0x80801140: jal         0x8009EEB8
    // 0x80801144: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_15;
    // 0x80801144: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x80801148: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080114C: jal         0x8009C914
    // 0x80801150: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_16;
    // 0x80801150: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
L_80801154:
    // 0x80801154: jal         0x8009C990
    // 0x80801158: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_17;
    // 0x80801158: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x8080115C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801160: jal         0x8009B9C0
    // 0x80801164: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_18;
    // 0x80801164: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x80801168: jal         0x80000438
    // 0x8080116C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800438_bsbtrot(rdram, ctx);
        goto after_19;
    // 0x8080116C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_19:
    // 0x80801170: jal         0x8009C990
    // 0x80801174: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_20;
    // 0x80801174: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_20:
    // 0x80801178: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x8080117C: jal         0x8009BB00
    // 0x80801180: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB00(rdram, ctx);
        goto after_21;
    // 0x80801180: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_21:
    // 0x80801184: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80801188: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080118C: jal         0x8009BA68
    // 0x80801190: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009BA68(rdram, ctx);
        goto after_22;
    // 0x80801190: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_22:
    // 0x80801194: lui         $a1, 0x442D
    ctx->r5 = S32(0X442D << 16);
    // 0x80801198: ori         $a1, $a1, 0x6000
    ctx->r5 = ctx->r5 | 0X6000;
    // 0x8080119C: jal         0x8009BA58
    // 0x808011A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BA58(rdram, ctx);
        goto after_23;
    // 0x808011A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_23:
    // 0x808011A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808011A8: jal         0x8009BCB4
    // 0x808011AC: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_24;
    // 0x808011AC: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_24:
    // 0x808011B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808011B4: addiu       $a1, $zero, 0x4432
    ctx->r5 = ADD32(0, 0X4432);
    // 0x808011B8: jal         0x8009DE38
    // 0x808011BC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_25;
    // 0x808011BC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_25:
    // 0x808011C0: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x808011C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808011C8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808011CC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808011D0: jr          $ra
    // 0x808011D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x808011D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void bsbtrot_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808011DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808011E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808011E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808011E8: jal         0x8008CABC
    // 0x808011EC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808011EC: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x808011F0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x808011F4: jal         0x800004B4
    // 0x808011F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x808011F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808011FC: jal         0x8008E3E8
    // 0x80801200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E3E8(rdram, ctx);
        goto after_2;
    // 0x80801200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801204: beql        $v0, $zero, L_80801218
    if (ctx->r2 == 0) {
        // 0x80801208: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801218;
    }
    goto skip_0;
    // 0x80801208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080120C: jal         0x80085078
    // 0x80801210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_20(rdram, ctx);
        goto after_3;
    // 0x80801210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801218:
    // 0x80801218: jal         0x80095738
    // 0x8080121C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_4;
    // 0x8080121C: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_4:
    // 0x80801220: beq         $v0, $zero, L_80801238
    if (ctx->r2 == 0) {
        // 0x80801224: nop
    
            goto L_80801238;
    }
    // 0x80801224: nop

    // 0x80801228: jal         0x8009B7C0
    // 0x8080122C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B7C0(rdram, ctx);
        goto after_5;
    // 0x8080122C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801230: b           L_80801244
    // 0x80801234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801244;
    // 0x80801234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801238:
    // 0x80801238: jal         0x80000438
    // 0x8080123C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800438_bsbtrot(rdram, ctx);
        goto after_6;
    // 0x8080123C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801244:
    // 0x80801244: jal         0x8009BB24
    // 0x80801248: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_7;
    // 0x80801248: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_7:
    // 0x8080124C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801250: jal         0x80091A30
    // 0x80801254: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_8;
    // 0x80801254: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_8:
    // 0x80801258: beq         $v0, $zero, L_80801280
    if (ctx->r2 == 0) {
        // 0x8080125C: lwc1        $f6, 0x28($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80801280;
    }
    // 0x8080125C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80801260: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80801264: nop

    // 0x80801268: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8080126C: nop

    // 0x80801270: bc1fl       L_80801284
    if (!c1cs) {
        // 0x80801274: lw          $t6, 0x15C($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X15C);
            goto L_80801284;
    }
    goto skip_1;
    // 0x80801274: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    skip_1:
    // 0x80801278: jal         0x8009BC6C
    // 0x8080127C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_9;
    // 0x8080127C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_80801280:
    // 0x80801280: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
L_80801284:
    // 0x80801284: sltiu       $at, $t6, 0x6
    ctx->r1 = ctx->r14 < 0X6 ? 1 : 0;
    // 0x80801288: beq         $at, $zero, L_80801534
    if (ctx->r1 == 0) {
        // 0x8080128C: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80801534;
    }
    // 0x8080128C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80801290: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2E10) << 16);
    // 0x80801294: addu        $at, $at, $t6
    gpr jr_addend_8080129C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80801298: lw          $t6, 0x2E10($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(86, 0X2E10));
    // 0x8080129C: jr          $t6
    // 0x808012A0: nop

    switch (jr_addend_8080129C >> 2) {
        case 0: goto L_808012A4; break;
        case 1: goto L_808012E8; break;
        case 2: goto L_80801334; break;
        case 3: goto L_808013D8; break;
        case 4: goto L_80801460; break;
        case 5: goto L_808014E8; break;
        default: switch_error(__func__, 0x8080129C, 0x80802E10);
    }
    // 0x808012A0: nop

L_808012A4:
    // 0x808012A4: jal         0x8008B324
    // 0x808012A8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_10;
    // 0x808012A8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_10:
    // 0x808012AC: beq         $v0, $zero, L_80801534
    if (ctx->r2 == 0) {
        // 0x808012B0: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_80801534;
    }
    // 0x808012B0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808012B4: lui         $a2, 0x3EEE
    ctx->r6 = S32(0X3EEE << 16);
    // 0x808012B8: ori         $a2, $a2, 0x3BCD
    ctx->r6 = ctx->r6 | 0X3BCD;
    // 0x808012BC: jal         0x8008B1D4
    // 0x808012C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_11;
    // 0x808012C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x808012C4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808012C8: jal         0x8008B1BC
    // 0x808012CC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_12;
    // 0x808012CC: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_12:
    // 0x808012D0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808012D4: jal         0x8008B134
    // 0x808012D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_13;
    // 0x808012D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x808012DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808012E0: b           L_80801534
    // 0x808012E4: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_80801534;
    // 0x808012E4: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_808012E8:
    // 0x808012E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012EC: jal         0x8008DF8C
    // 0x808012F0: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    func_8008DF8C(rdram, ctx);
        goto after_14;
    // 0x808012F0: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    after_14:
    // 0x808012F4: beq         $v0, $zero, L_80801534
    if (ctx->r2 == 0) {
        // 0x808012F8: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_80801534;
    }
    // 0x808012F8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808012FC: lui         $a2, 0x3F3B
    ctx->r6 = S32(0X3F3B << 16);
    // 0x80801300: ori         $a2, $a2, 0x98C8
    ctx->r6 = ctx->r6 | 0X98C8;
    // 0x80801304: jal         0x8008B1D4
    // 0x80801308: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_15;
    // 0x80801308: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_15:
    // 0x8080130C: lui         $a1, 0x3FB3
    ctx->r5 = S32(0X3FB3 << 16);
    // 0x80801310: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80801314: jal         0x8008B1BC
    // 0x80801318: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B1BC(rdram, ctx);
        goto after_16;
    // 0x80801318: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_16:
    // 0x8080131C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801320: jal         0x8008B134
    // 0x80801324: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_17;
    // 0x80801324: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x80801328: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x8080132C: b           L_80801534
    // 0x80801330: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
        goto L_80801534;
    // 0x80801330: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
L_80801334:
    // 0x80801334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801338: jal         0x8009D3A8
    // 0x8080133C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_18;
    // 0x8080133C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x80801340: jal         0x8008E078
    // 0x80801344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_19;
    // 0x80801344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80801348: beq         $v0, $zero, L_80801534
    if (ctx->r2 == 0) {
        // 0x8080134C: nop
    
            goto L_80801534;
    }
    // 0x8080134C: nop

    // 0x80801350: jal         0x8009FE58
    // 0x80801354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_20;
    // 0x80801354: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80801358: lui         $a2, 0x3F61
    ctx->r6 = S32(0X3F61 << 16);
    // 0x8080135C: ori         $a2, $a2, 0x3A93
    ctx->r6 = ctx->r6 | 0X3A93;
    // 0x80801360: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801364: jal         0x8008B1D4
    // 0x80801368: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_21;
    // 0x80801368: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_21:
    // 0x8080136C: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80801370: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80801374: jal         0x8008B1BC
    // 0x80801378: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B1BC(rdram, ctx);
        goto after_22;
    // 0x80801378: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_22:
    // 0x8080137C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801380: jal         0x8008B134
    // 0x80801384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_23;
    // 0x80801384: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x80801388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080138C: jal         0x8009D2D8
    // 0x80801390: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D2D8(rdram, ctx);
        goto after_24;
    // 0x80801390: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x80801394: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80801398: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
    // 0x8080139C: jal         0x8009BB00
    // 0x808013A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_25;
    // 0x808013A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x808013A4: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x808013A8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808013AC: nop

    // 0x808013B0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x808013B4: nop

    // 0x808013B8: bc1f        L_808013C8
    if (!c1cs) {
        // 0x808013BC: nop
    
            goto L_808013C8;
    }
    // 0x808013BC: nop

    // 0x808013C0: jal         0x8009D658
    // 0x808013C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_26;
    // 0x808013C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
L_808013C8:
    // 0x808013C8: jal         0x800849D0
    // 0x808013CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_1(rdram, ctx);
        goto after_27;
    // 0x808013CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x808013D0: b           L_80801534
    // 0x808013D4: nop

        goto L_80801534;
    // 0x808013D4: nop

L_808013D8:
    // 0x808013D8: jal         0x8009BB00
    // 0x808013DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_28;
    // 0x808013DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x808013E0: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x808013E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808013E8: nop

    // 0x808013EC: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x808013F0: nop

    // 0x808013F4: bc1fl       L_80801408
    if (!c1cs) {
        // 0x808013F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801408;
    }
    goto skip_2;
    // 0x808013F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808013FC: jal         0x8009D658
    // 0x80801400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_29;
    // 0x80801400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80801404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801408:
    // 0x80801408: jal         0x8009D3A8
    // 0x8080140C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_30;
    // 0x8080140C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_30:
    // 0x80801410: jal         0x8008B324
    // 0x80801414: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_31;
    // 0x80801414: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_31:
    // 0x80801418: beq         $v0, $zero, L_80801450
    if (ctx->r2 == 0) {
        // 0x8080141C: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_80801450;
    }
    // 0x8080141C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801420: lui         $a2, 0x3F63
    ctx->r6 = S32(0X3F63 << 16);
    // 0x80801424: ori         $a2, $a2, 0xC9EF
    ctx->r6 = ctx->r6 | 0XC9EF;
    // 0x80801428: jal         0x8008B1D4
    // 0x8080142C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_32;
    // 0x8080142C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_32:
    // 0x80801430: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801434: jal         0x8008B1BC
    // 0x80801438: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_33;
    // 0x80801438: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_33:
    // 0x8080143C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801440: jal         0x8008B134
    // 0x80801444: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_34;
    // 0x80801444: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_34:
    // 0x80801448: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8080144C: sw          $t0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r8;
L_80801450:
    // 0x80801450: jal         0x800849D0
    // 0x80801454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_1(rdram, ctx);
        goto after_35;
    // 0x80801454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x80801458: b           L_80801534
    // 0x8080145C: nop

        goto L_80801534;
    // 0x8080145C: nop

L_80801460:
    // 0x80801460: jal         0x8009BB00
    // 0x80801464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_36;
    // 0x80801464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x80801468: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x8080146C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80801470: nop

    // 0x80801474: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80801478: nop

    // 0x8080147C: bc1fl       L_80801490
    if (!c1cs) {
        // 0x80801480: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801490;
    }
    goto skip_3;
    // 0x80801480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80801484: jal         0x8009D658
    // 0x80801488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_37;
    // 0x80801488: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x8080148C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801490:
    // 0x80801490: jal         0x8009D3A8
    // 0x80801494: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_38;
    // 0x80801494: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_38:
    // 0x80801498: jal         0x8008B324
    // 0x8080149C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_39;
    // 0x8080149C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_39:
    // 0x808014A0: beq         $v0, $zero, L_808014D8
    if (ctx->r2 == 0) {
        // 0x808014A4: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_808014D8;
    }
    // 0x808014A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808014A8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x808014AC: jal         0x8008B1D4
    // 0x808014B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_40;
    // 0x808014B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_40:
    // 0x808014B4: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x808014B8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808014BC: jal         0x8008B1BC
    // 0x808014C0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B1BC(rdram, ctx);
        goto after_41;
    // 0x808014C0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_41:
    // 0x808014C4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808014C8: jal         0x8008B134
    // 0x808014CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_42;
    // 0x808014CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_42:
    // 0x808014D0: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x808014D4: sw          $t1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r9;
L_808014D8:
    // 0x808014D8: jal         0x800849D0
    // 0x808014DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_1(rdram, ctx);
        goto after_43;
    // 0x808014DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_43:
    // 0x808014E0: b           L_80801534
    // 0x808014E4: nop

        goto L_80801534;
    // 0x808014E4: nop

L_808014E8:
    // 0x808014E8: jal         0x8009BB00
    // 0x808014EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_44;
    // 0x808014EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_44:
    // 0x808014F0: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x808014F4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x808014F8: nop

    // 0x808014FC: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x80801500: nop

    // 0x80801504: bc1fl       L_80801518
    if (!c1cs) {
        // 0x80801508: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801518;
    }
    goto skip_4;
    // 0x80801508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x8080150C: jal         0x8009D658
    // 0x80801510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_45;
    // 0x80801510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_45:
    // 0x80801514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801518:
    // 0x80801518: jal         0x8009D3A8
    // 0x8080151C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_46;
    // 0x8080151C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_46:
    // 0x80801520: jal         0x8008B324
    // 0x80801524: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_47;
    // 0x80801524: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_47:
    // 0x80801528: beq         $v0, $zero, L_80801534
    if (ctx->r2 == 0) {
        // 0x8080152C: addiu       $t2, $zero, 0x15
        ctx->r10 = ADD32(0, 0X15);
            goto L_80801534;
    }
    // 0x8080152C: addiu       $t2, $zero, 0x15
    ctx->r10 = ADD32(0, 0X15);
    // 0x80801530: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_80801534:
    // 0x80801534: jal         0x80084FE0
    // 0x80801538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_1(rdram, ctx);
        goto after_48;
    // 0x80801538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_48:
    // 0x8080153C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80801540: beq         $v0, $at, L_80801550
    if (ctx->r2 == ctx->r1) {
        // 0x80801544: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80801550;
    }
    // 0x80801544: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801548: bne         $v0, $at, L_80801578
    if (ctx->r2 != ctx->r1) {
        // 0x8080154C: nop
    
            goto L_80801578;
    }
    // 0x8080154C: nop

L_80801550:
    // 0x80801550: jal         0x80097DF4
    // 0x80801554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097DF4(rdram, ctx);
        goto after_49;
    // 0x80801554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_49:
    // 0x80801558: beq         $v0, $zero, L_80801564
    if (ctx->r2 == 0) {
        // 0x8080155C: addiu       $t3, $zero, 0x10
        ctx->r11 = ADD32(0, 0X10);
            goto L_80801564;
    }
    // 0x8080155C: addiu       $t3, $zero, 0x10
    ctx->r11 = ADD32(0, 0X10);
    // 0x80801560: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_80801564:
    // 0x80801564: jal         0x80097F08
    // 0x80801568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097F08(rdram, ctx);
        goto after_50;
    // 0x80801568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_50:
    // 0x8080156C: beq         $v0, $zero, L_80801578
    if (ctx->r2 == 0) {
        // 0x80801570: addiu       $t4, $zero, 0x11
        ctx->r12 = ADD32(0, 0X11);
            goto L_80801578;
    }
    // 0x80801570: addiu       $t4, $zero, 0x11
    ctx->r12 = ADD32(0, 0X11);
    // 0x80801574: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_80801578:
    // 0x80801578: jal         0x8008E35C
    // 0x8080157C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_51;
    // 0x8080157C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_51:
    // 0x80801580: beq         $v0, $zero, L_8080158C
    if (ctx->r2 == 0) {
        // 0x80801584: addiu       $t5, $zero, 0x4C
        ctx->r13 = ADD32(0, 0X4C);
            goto L_8080158C;
    }
    // 0x80801584: addiu       $t5, $zero, 0x4C
    ctx->r13 = ADD32(0, 0X4C);
    // 0x80801588: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
L_8080158C:
    // 0x8080158C: jal         0x8008E078
    // 0x80801590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_52;
    // 0x80801590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_52:
    // 0x80801594: beq         $v0, $zero, L_808015CC
    if (ctx->r2 == 0) {
        // 0x80801598: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808015CC;
    }
    // 0x80801598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080159C: jal         0x80091A58
    // 0x808015A0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_53;
    // 0x808015A0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_53:
    // 0x808015A4: beq         $v0, $zero, L_808015B8
    if (ctx->r2 == 0) {
        // 0x808015A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808015B8;
    }
    // 0x808015A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015AC: jal         0x8000075C
    // 0x808015B0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8080075C_bsbtrot(rdram, ctx);
        goto after_54;
    // 0x808015B0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_54:
    // 0x808015B4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_808015B8:
    // 0x808015B8: jal         0x8008DF18
    // 0x808015BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DF18(rdram, ctx);
        goto after_55;
    // 0x808015BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_55:
    // 0x808015C0: beq         $v0, $zero, L_808015CC
    if (ctx->r2 == 0) {
        // 0x808015C4: addiu       $t6, $zero, 0x45
        ctx->r14 = ADD32(0, 0X45);
            goto L_808015CC;
    }
    // 0x808015C4: addiu       $t6, $zero, 0x45
    ctx->r14 = ADD32(0, 0X45);
    // 0x808015C8: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_808015CC:
    // 0x808015CC: jal         0x8008E260
    // 0x808015D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_56;
    // 0x808015D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_56:
    // 0x808015D4: beq         $v0, $zero, L_808015E4
    if (ctx->r2 == 0) {
        // 0x808015D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808015E4;
    }
    // 0x808015D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015DC: addiu       $t7, $zero, 0x3D
    ctx->r15 = ADD32(0, 0X3D);
    // 0x808015E0: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_808015E4:
    // 0x808015E4: jal         0x8009E5C8
    // 0x808015E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_57;
    // 0x808015E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_57:
    // 0x808015EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808015F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808015F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808015F8: jr          $ra
    // 0x808015FC: nop

    return;
    // 0x808015FC: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801608: jal         0x8009BC6C
    // 0x8080160C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x8080160C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801610: jal         0x8000061C
    // 0x80801614: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080061C_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80801614: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801618: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080161C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801620: jr          $ra
    // 0x80801624: nop

    return;
    // 0x80801624: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801628: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080162C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2E80) << 16);
    // 0x80801630: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801634: jr          $ra
    // 0x80801638: lw          $v0, 0x2E80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2E80));
    return;
    // 0x80801638: lw          $v0, 0x2E80($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2E80));
;}
RECOMP_FUNC void func_8080163C_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080163C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801644: jal         0x8009E6EC
    // 0x80801648: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80801648: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080164C: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x80801650: beq         $v0, $at, L_80801678
    if (ctx->r2 == ctx->r1) {
        // 0x80801654: addiu       $at, $zero, 0x1B
        ctx->r1 = ADD32(0, 0X1B);
            goto L_80801678;
    }
    // 0x80801654: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x80801658: beq         $v0, $at, L_80801678
    if (ctx->r2 == ctx->r1) {
        // 0x8080165C: addiu       $at, $zero, 0x29
        ctx->r1 = ADD32(0, 0X29);
            goto L_80801678;
    }
    // 0x8080165C: addiu       $at, $zero, 0x29
    ctx->r1 = ADD32(0, 0X29);
    // 0x80801660: beq         $v0, $at, L_80801678
    if (ctx->r2 == ctx->r1) {
        // 0x80801664: addiu       $at, $zero, 0x2B
        ctx->r1 = ADD32(0, 0X2B);
            goto L_80801678;
    }
    // 0x80801664: addiu       $at, $zero, 0x2B
    ctx->r1 = ADD32(0, 0X2B);
    // 0x80801668: beql        $v0, $at, L_8080167C
    if (ctx->r2 == ctx->r1) {
        // 0x8080166C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080167C;
    }
    goto skip_0;
    // 0x8080166C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80801670: jal         0x80099B94
    // 0x80801674: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_1;
    // 0x80801674: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_80801678:
    // 0x80801678: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080167C:
    // 0x8080167C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801680: jr          $ra
    // 0x80801684: nop

    return;
    // 0x80801684: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080168C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801690: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x80801694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80801698: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8080169C: jal         0x8008CDB8
    // 0x808016A0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8008CDB8(rdram, ctx);
        goto after_0;
    // 0x808016A0: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x808016A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808016A8: jal         0x8008CA4C
    // 0x808016AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_1;
    // 0x808016AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808016B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808016B4: jal         0x8009B9B0
    // 0x808016B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x808016B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x808016BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808016C0: jal         0x800931AC
    // 0x808016C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800931AC(rdram, ctx);
        goto after_3;
    // 0x808016C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x808016C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808016CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808016D0: jr          $ra
    // 0x808016D4: nop

    return;
    // 0x808016D4: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808016D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808016DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808016E0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808016E4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808016E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808016EC: jal         0x8008CAEC
    // 0x808016F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_0;
    // 0x808016F0: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x808016F4: beq         $v0, $zero, L_80801700
    if (ctx->r2 == 0) {
        // 0x808016F8: nop
    
            goto L_80801700;
    }
    // 0x808016F8: nop

    // 0x808016FC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80801700:
    // 0x80801700: jal         0x8008CAC8
    // 0x80801704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_1;
    // 0x80801704: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801708: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2E28) << 16);
    // 0x8080170C: lwc1        $f4, 0x2E28($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2E28));
    // 0x80801710: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80801714: nop

    // 0x80801718: bc1f        L_80801734
    if (!c1cs) {
        // 0x8080171C: nop
    
            goto L_80801734;
    }
    // 0x8080171C: nop

    // 0x80801720: jal         0x8009EF10
    // 0x80801724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_2;
    // 0x80801724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801728: beq         $v0, $zero, L_80801734
    if (ctx->r2 == 0) {
        // 0x8080172C: nop
    
            goto L_80801734;
    }
    // 0x8080172C: nop

    // 0x80801730: addiu       $s1, $zero, 0x2
    ctx->r17 = ADD32(0, 0X2);
L_80801734:
    // 0x80801734: jal         0x8008DD04
    // 0x80801738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_3;
    // 0x80801738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080173C: beq         $v0, $zero, L_80801748
    if (ctx->r2 == 0) {
        // 0x80801740: nop
    
            goto L_80801748;
    }
    // 0x80801740: nop

    // 0x80801744: addiu       $s1, $zero, 0x2F
    ctx->r17 = ADD32(0, 0X2F);
L_80801748:
    // 0x80801748: jal         0x8008E124
    // 0x8080174C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E124(rdram, ctx);
        goto after_4;
    // 0x8080174C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801750: beql        $v0, $zero, L_80801774
    if (ctx->r2 == 0) {
        // 0x80801754: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801774;
    }
    goto skip_0;
    // 0x80801754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80801758: jal         0x8009CC68
    // 0x8080175C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009CC68(rdram, ctx);
        goto after_5;
    // 0x8080175C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801764: jal         0x80084730
    // 0x80801768: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    _badata_entrypoint_30(rdram, ctx);
        goto after_6;
    // 0x80801768: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x8080176C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80801770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801774:
    // 0x80801774: jal         0x8009E5C8
    // 0x80801778: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x80801778: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_7:
    // 0x8080177C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801780: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80801784: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80801788: jr          $ra
    // 0x8080178C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8080178C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsbtrot_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801798: jal         0x8009E704
    // 0x8080179C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E704(rdram, ctx);
        goto after_0;
    // 0x8080179C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808017A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808017A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808017A8: jal         0x8009CA70
    // 0x808017AC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    func_8009CA70(rdram, ctx);
        goto after_1;
    // 0x808017AC: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    after_1:
    // 0x808017B0: beq         $v0, $zero, L_808017C0
    if (ctx->r2 == 0) {
        // 0x808017B4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808017C0;
    }
    // 0x808017B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808017B8: jal         0x800931AC
    // 0x808017BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800931AC(rdram, ctx);
        goto after_2;
    // 0x808017BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_808017C0:
    // 0x808017C0: jal         0x8000061C
    // 0x808017C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080061C_bsbtrot(rdram, ctx);
        goto after_3;
    // 0x808017C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808017C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808017CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808017D0: jr          $ra
    // 0x808017D4: nop

    return;
    // 0x808017D4: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808017D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808017DC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2E90) << 16);
    // 0x808017E0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808017E4: jr          $ra
    // 0x808017E8: lw          $v0, 0x2E90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2E90));
    return;
    // 0x808017E8: lw          $v0, 0x2E90($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2E90));
;}
RECOMP_FUNC void bsbtrot_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808017EC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808017F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808017F4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808017F8: jal         0x8008CABC
    // 0x808017FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808017FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801800: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80801804: jal         0x8008AF24
    // 0x80801808: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80801808: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080180C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80801810: jal         0x8008AED4
    // 0x80801814: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x80801814: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    after_2:
    // 0x80801818: lui         $a1, 0x3D8D
    ctx->r5 = S32(0X3D8D << 16);
    // 0x8080181C: ori         $a1, $a1, 0x4FDF
    ctx->r5 = ctx->r5 | 0X4FDF;
    // 0x80801820: jal         0x8008B24C
    // 0x80801824: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B24C(rdram, ctx);
        goto after_3;
    // 0x80801824: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x80801828: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8080182C: jal         0x8008B134
    // 0x80801830: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_4;
    // 0x80801830: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80801834: jal         0x8008B064
    // 0x80801838: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_5;
    // 0x80801838: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x8080183C: jal         0x80000538
    // 0x80801840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800538_bsbtrot(rdram, ctx);
        goto after_6;
    // 0x80801840: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801844: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80801848: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080184C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801850: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801854: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80801858: jal         0x8009FFD8
    // 0x8080185C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_7;
    // 0x8080185C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_7:
    // 0x80801860: jal         0x8009C990
    // 0x80801864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_8;
    // 0x80801864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80801868: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080186C: jal         0x8009B9C0
    // 0x80801870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_9;
    // 0x80801870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80801874: jal         0x8009C990
    // 0x80801878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_10;
    // 0x80801878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080187C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80801880: jal         0x8009BB00
    // 0x80801884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_11;
    // 0x80801884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80801888: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080188C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801890: jal         0x8009BA68
    // 0x80801894: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_12;
    // 0x80801894: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_12:
    // 0x80801898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080189C: jal         0x800A0CF4
    // 0x808018A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_13;
    // 0x808018A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x808018A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018A8: jal         0x800A0CE8
    // 0x808018AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CE8(rdram, ctx);
        goto after_14;
    // 0x808018AC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x808018B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018B4: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808018B8: jal         0x8009BFE4
    // 0x808018BC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_15;
    // 0x808018BC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_15:
    // 0x808018C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018C4: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x808018C8: jal         0x8009C554
    // 0x808018CC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_16;
    // 0x808018CC: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_16:
    // 0x808018D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808018D4: jal         0x8009B9B0
    // 0x808018D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_17;
    // 0x808018D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_17:
    // 0x808018DC: jal         0x8009D658
    // 0x808018E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_18;
    // 0x808018E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x808018E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808018E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808018EC: nop

    // 0x808018F0: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    // 0x808018F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808018F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808018FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80801900: jr          $ra
    // 0x80801904: nop

    return;
    // 0x80801904: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801908: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8080190C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801910: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801914: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801918: jal         0x800004B4
    // 0x8080191C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    func_808004B4_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x8080191C: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    after_0:
    // 0x80801920: jal         0x8008E3E8
    // 0x80801924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E3E8(rdram, ctx);
        goto after_1;
    // 0x80801924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801928: beq         $v0, $zero, L_80801938
    if (ctx->r2 == 0) {
        // 0x8080192C: nop
    
            goto L_80801938;
    }
    // 0x8080192C: nop

    // 0x80801930: jal         0x80085078
    // 0x80801934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_20(rdram, ctx);
        goto after_2;
    // 0x80801934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_80801938:
    // 0x80801938: jal         0x8009D658
    // 0x8080193C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_3;
    // 0x8080193C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801940: jal         0x800D8FF8
    // 0x80801944: nop

    func_800D8FF8(rdram, ctx);
        goto after_4;
    // 0x80801944: nop

    after_4:
    // 0x80801948: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x8080194C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80801950: jal         0x800F0E00
    // 0x80801954: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    func_800F0E00(rdram, ctx);
        goto after_5;
    // 0x80801954: sub.s       $f12, $f4, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f0.fl;
    after_5:
    // 0x80801958: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x8080195C: jal         0x8008DF18
    // 0x80801960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DF18(rdram, ctx);
        goto after_6;
    // 0x80801960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801964: beq         $v0, $zero, L_808019E8
    if (ctx->r2 == 0) {
        // 0x80801968: addiu       $t6, $zero, 0x15
        ctx->r14 = ADD32(0, 0X15);
            goto L_808019E8;
    }
    // 0x80801968: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x8080196C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801970: jal         0x800963C0
    // 0x80801974: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800963C0(rdram, ctx);
        goto after_7;
    // 0x80801974: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_7:
    // 0x80801978: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x8080197C: jal         0x800F1EA4
    // 0x80801980: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800F1EA4(rdram, ctx);
        goto after_8;
    // 0x80801980: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_8:
    // 0x80801984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801988: jal         0x8009D3A8
    // 0x8080198C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_9;
    // 0x8080198C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80801990: jal         0x8009BFD8
    // 0x80801994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFD8(rdram, ctx);
        goto after_10;
    // 0x80801994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80801998: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8080199C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808019A0: lui         $at, 0x442F
    ctx->r1 = S32(0X442F << 16);
    // 0x808019A4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808019A8: lui         $a3, 0x4409
    ctx->r7 = S32(0X4409 << 16);
    // 0x808019AC: ori         $a3, $a3, 0x8000
    ctx->r7 = ctx->r7 | 0X8000;
    // 0x808019B0: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808019B4: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x808019B8: jal         0x800F10B4
    // 0x808019BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_11;
    // 0x808019BC: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x808019C0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808019C4: jal         0x8009B9B0
    // 0x808019C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_12;
    // 0x808019C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808019CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019D0: jal         0x8009B9C0
    // 0x808019D4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009B9C0(rdram, ctx);
        goto after_13;
    // 0x808019D4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_13:
    // 0x808019D8: jal         0x800849D0
    // 0x808019DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_1(rdram, ctx);
        goto after_14;
    // 0x808019DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808019E0: b           L_808019EC
    // 0x808019E4: nop

        goto L_808019EC;
    // 0x808019E4: nop

L_808019E8:
    // 0x808019E8: sw          $t6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r14;
L_808019EC:
    // 0x808019EC: jal         0x8008E35C
    // 0x808019F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_15;
    // 0x808019F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808019F4: beq         $v0, $zero, L_80801A00
    if (ctx->r2 == 0) {
        // 0x808019F8: addiu       $t7, $zero, 0x2D
        ctx->r15 = ADD32(0, 0X2D);
            goto L_80801A00;
    }
    // 0x808019F8: addiu       $t7, $zero, 0x2D
    ctx->r15 = ADD32(0, 0X2D);
    // 0x808019FC: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
L_80801A00:
    // 0x80801A00: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80801A04: lwc1        $f10, 0x16C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80801A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A0C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80801A10: nop

    // 0x80801A14: bc1fl       L_80801A4C
    if (!c1cs) {
        // 0x80801A18: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801A4C;
    }
    goto skip_0;
    // 0x80801A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80801A1C: jal         0x80091A58
    // 0x80801A20: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_16;
    // 0x80801A20: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_16:
    // 0x80801A24: beql        $v0, $zero, L_80801A4C
    if (ctx->r2 == 0) {
        // 0x80801A28: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801A4C;
    }
    goto skip_1;
    // 0x80801A28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80801A2C: jal         0x8008E078
    // 0x80801A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_17;
    // 0x80801A30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80801A34: beq         $v0, $zero, L_80801A48
    if (ctx->r2 == 0) {
        // 0x80801A38: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801A48;
    }
    // 0x80801A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A3C: jal         0x8000075C
    // 0x80801A40: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8080075C_bsbtrot(rdram, ctx);
        goto after_18;
    // 0x80801A40: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_18:
    // 0x80801A44: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
L_80801A48:
    // 0x80801A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801A4C:
    // 0x80801A4C: jal         0x8009E5C8
    // 0x80801A50: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8009E5C8(rdram, ctx);
        goto after_19;
    // 0x80801A50: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_19:
    // 0x80801A54: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801A58: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801A5C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80801A60: jr          $ra
    // 0x80801A64: nop

    return;
    // 0x80801A64: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801A70: jal         0x8000061C
    // 0x80801A74: nop

    func_8080061C_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80801A74: nop

    after_0:
    // 0x80801A78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801A7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801A80: jr          $ra
    // 0x80801A84: nop

    return;
    // 0x80801A84: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801A88: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801A8C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2EA0) << 16);
    // 0x80801A90: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801A94: jr          $ra
    // 0x80801A98: lw          $v0, 0x2EA0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2EA0));
    return;
    // 0x80801A98: lw          $v0, 0x2EA0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2EA0));
;}
RECOMP_FUNC void bsbtrot_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801A9C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80801AA0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801AA4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80801AA8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801AAC: jal         0x8008CABC
    // 0x80801AB0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80801AB0: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    after_0:
    // 0x80801AB4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80801AB8: jal         0x8008AF24
    // 0x80801ABC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80801ABC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80801AC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801AC4: jal         0x8008AED4
    // 0x80801AC8: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x80801AC8: addiu       $a1, $zero, 0x27
    ctx->r5 = ADD32(0, 0X27);
    after_2:
    // 0x80801ACC: lui         $a1, 0x3FB3
    ctx->r5 = S32(0X3FB3 << 16);
    // 0x80801AD0: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80801AD4: jal         0x8008B1BC
    // 0x80801AD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x80801AD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80801ADC: lui         $a1, 0x3EEE
    ctx->r5 = S32(0X3EEE << 16);
    // 0x80801AE0: ori         $a1, $a1, 0x3BCD
    ctx->r5 = ctx->r5 | 0X3BCD;
    // 0x80801AE4: jal         0x8008B24C
    // 0x80801AE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B24C(rdram, ctx);
        goto after_4;
    // 0x80801AE8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80801AEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801AF0: jal         0x8008B134
    // 0x80801AF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x80801AF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80801AF8: jal         0x8008B064
    // 0x80801AFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B064(rdram, ctx);
        goto after_6;
    // 0x80801AFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x80801B00: jal         0x80000538
    // 0x80801B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800538_bsbtrot(rdram, ctx);
        goto after_7;
    // 0x80801B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80801B08: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80801B0C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801B10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801B18: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80801B1C: jal         0x8009FFD8
    // 0x80801B20: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_8;
    // 0x80801B20: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_8:
    // 0x80801B24: jal         0x8009C990
    // 0x80801B28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_9;
    // 0x80801B28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80801B2C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80801B30: jal         0x8009B9C0
    // 0x80801B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_10;
    // 0x80801B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80801B38: jal         0x80000438
    // 0x80801B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800438_bsbtrot(rdram, ctx);
        goto after_11;
    // 0x80801B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80801B40: jal         0x8009C990
    // 0x80801B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_12;
    // 0x80801B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80801B48: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80801B4C: jal         0x8009BB00
    // 0x80801B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_13;
    // 0x80801B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80801B54: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80801B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B5C: jal         0x8009BA68
    // 0x80801B60: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_14;
    // 0x80801B60: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_14:
    // 0x80801B64: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x80801B68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801B6C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80801B70: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80801B74: jr          $ra
    // 0x80801B78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80801B78: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void bsbtrot_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801B7C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80801B80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801B84: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801B88: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801B8C: jal         0x8008CABC
    // 0x80801B90: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80801B90: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80801B94: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80801B98: jal         0x800004B4
    // 0x80801B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80801B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801BA0: jal         0x8008E3E8
    // 0x80801BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E3E8(rdram, ctx);
        goto after_2;
    // 0x80801BA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801BA8: beql        $v0, $zero, L_80801BBC
    if (ctx->r2 == 0) {
        // 0x80801BAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801BBC;
    }
    goto skip_0;
    // 0x80801BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80801BB0: jal         0x80085078
    // 0x80801BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_20(rdram, ctx);
        goto after_3;
    // 0x80801BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801BB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801BBC:
    // 0x80801BBC: jal         0x80095738
    // 0x80801BC0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_4;
    // 0x80801BC0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_4:
    // 0x80801BC4: beq         $v0, $zero, L_80801BDC
    if (ctx->r2 == 0) {
        // 0x80801BC8: nop
    
            goto L_80801BDC;
    }
    // 0x80801BC8: nop

    // 0x80801BCC: jal         0x8009B7C0
    // 0x80801BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B7C0(rdram, ctx);
        goto after_5;
    // 0x80801BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801BD4: b           L_80801BE8
    // 0x80801BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801BE8;
    // 0x80801BD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801BDC:
    // 0x80801BDC: jal         0x80000438
    // 0x80801BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800438_bsbtrot(rdram, ctx);
        goto after_6;
    // 0x80801BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801BE8:
    // 0x80801BE8: jal         0x8009BB24
    // 0x80801BEC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_7;
    // 0x80801BEC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_7:
    // 0x80801BF0: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    // 0x80801BF4: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x80801BF8: beq         $at, $zero, L_80801E5C
    if (ctx->r1 == 0) {
        // 0x80801BFC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_80801E5C;
    }
    // 0x80801BFC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80801C00: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2E2C) << 16);
    // 0x80801C04: addu        $at, $at, $t6
    gpr jr_addend_80801C0C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80801C08: lw          $t6, 0x2E2C($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(86, 0X2E2C));
    // 0x80801C0C: jr          $t6
    // 0x80801C10: nop

    switch (jr_addend_80801C0C >> 2) {
        case 0: goto L_80801C14; break;
        case 1: goto L_80801C60; break;
        case 2: goto L_80801D00; break;
        case 3: goto L_80801D88; break;
        case 4: goto L_80801E10; break;
        default: switch_error(__func__, 0x80801C0C, 0x80802E2C);
    }
    // 0x80801C10: nop

L_80801C14:
    // 0x80801C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C18: jal         0x8008DF8C
    // 0x80801C1C: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    func_8008DF8C(rdram, ctx);
        goto after_8;
    // 0x80801C1C: addiu       $a1, $zero, 0x8C
    ctx->r5 = ADD32(0, 0X8C);
    after_8:
    // 0x80801C20: beq         $v0, $zero, L_80801E5C
    if (ctx->r2 == 0) {
        // 0x80801C24: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_80801E5C;
    }
    // 0x80801C24: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801C28: lui         $a2, 0x3F3B
    ctx->r6 = S32(0X3F3B << 16);
    // 0x80801C2C: ori         $a2, $a2, 0x98C8
    ctx->r6 = ctx->r6 | 0X98C8;
    // 0x80801C30: jal         0x8008B1D4
    // 0x80801C34: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_9;
    // 0x80801C34: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_9:
    // 0x80801C38: lui         $a1, 0x3FB3
    ctx->r5 = S32(0X3FB3 << 16);
    // 0x80801C3C: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80801C40: jal         0x8008B1BC
    // 0x80801C44: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B1BC(rdram, ctx);
        goto after_10;
    // 0x80801C44: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_10:
    // 0x80801C48: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801C4C: jal         0x8008B134
    // 0x80801C50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_11;
    // 0x80801C50: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80801C54: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80801C58: b           L_80801E5C
    // 0x80801C5C: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_80801E5C;
    // 0x80801C5C: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80801C60:
    // 0x80801C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C64: jal         0x8009D3A8
    // 0x80801C68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_12;
    // 0x80801C68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80801C6C: jal         0x8008E078
    // 0x80801C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_13;
    // 0x80801C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80801C74: beq         $v0, $zero, L_80801E5C
    if (ctx->r2 == 0) {
        // 0x80801C78: nop
    
            goto L_80801E5C;
    }
    // 0x80801C78: nop

    // 0x80801C7C: jal         0x8009FE58
    // 0x80801C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_14;
    // 0x80801C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80801C84: lui         $a2, 0x3F61
    ctx->r6 = S32(0X3F61 << 16);
    // 0x80801C88: ori         $a2, $a2, 0x3A93
    ctx->r6 = ctx->r6 | 0X3A93;
    // 0x80801C8C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801C90: jal         0x8008B1D4
    // 0x80801C94: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_15;
    // 0x80801C94: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_15:
    // 0x80801C98: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80801C9C: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80801CA0: jal         0x8008B1BC
    // 0x80801CA4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B1BC(rdram, ctx);
        goto after_16;
    // 0x80801CA4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_16:
    // 0x80801CA8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801CAC: jal         0x8008B134
    // 0x80801CB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_17;
    // 0x80801CB0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x80801CB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801CB8: jal         0x8009D2D8
    // 0x80801CBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D2D8(rdram, ctx);
        goto after_18;
    // 0x80801CBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_18:
    // 0x80801CC0: jal         0x8009BB00
    // 0x80801CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_19;
    // 0x80801CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80801CC8: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x80801CCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80801CD0: nop

    // 0x80801CD4: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80801CD8: nop

    // 0x80801CDC: bc1f        L_80801CEC
    if (!c1cs) {
        // 0x80801CE0: nop
    
            goto L_80801CEC;
    }
    // 0x80801CE0: nop

    // 0x80801CE4: jal         0x8009D658
    // 0x80801CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_20;
    // 0x80801CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
L_80801CEC:
    // 0x80801CEC: jal         0x800849D0
    // 0x80801CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_1(rdram, ctx);
        goto after_21;
    // 0x80801CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80801CF4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80801CF8: b           L_80801E5C
    // 0x80801CFC: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
        goto L_80801E5C;
    // 0x80801CFC: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
L_80801D00:
    // 0x80801D00: jal         0x8009BB00
    // 0x80801D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_22;
    // 0x80801D04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80801D08: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x80801D0C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80801D10: nop

    // 0x80801D14: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x80801D18: nop

    // 0x80801D1C: bc1fl       L_80801D30
    if (!c1cs) {
        // 0x80801D20: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801D30;
    }
    goto skip_1;
    // 0x80801D20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80801D24: jal         0x8009D658
    // 0x80801D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_23;
    // 0x80801D28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80801D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801D30:
    // 0x80801D30: jal         0x8009D3A8
    // 0x80801D34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_24;
    // 0x80801D34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_24:
    // 0x80801D38: jal         0x8008B324
    // 0x80801D3C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_25;
    // 0x80801D3C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_25:
    // 0x80801D40: beq         $v0, $zero, L_80801D78
    if (ctx->r2 == 0) {
        // 0x80801D44: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_80801D78;
    }
    // 0x80801D44: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801D48: lui         $a2, 0x3F63
    ctx->r6 = S32(0X3F63 << 16);
    // 0x80801D4C: ori         $a2, $a2, 0xC9EF
    ctx->r6 = ctx->r6 | 0XC9EF;
    // 0x80801D50: jal         0x8008B1D4
    // 0x80801D54: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_26;
    // 0x80801D54: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_26:
    // 0x80801D58: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801D5C: jal         0x8008B1BC
    // 0x80801D60: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_27;
    // 0x80801D60: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_27:
    // 0x80801D64: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801D68: jal         0x8008B134
    // 0x80801D6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_28;
    // 0x80801D6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_28:
    // 0x80801D70: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80801D74: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
L_80801D78:
    // 0x80801D78: jal         0x800849D0
    // 0x80801D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_1(rdram, ctx);
        goto after_29;
    // 0x80801D7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x80801D80: b           L_80801E5C
    // 0x80801D84: nop

        goto L_80801E5C;
    // 0x80801D84: nop

L_80801D88:
    // 0x80801D88: jal         0x8009BB00
    // 0x80801D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_30;
    // 0x80801D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80801D90: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x80801D94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80801D98: nop

    // 0x80801D9C: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80801DA0: nop

    // 0x80801DA4: bc1fl       L_80801DB8
    if (!c1cs) {
        // 0x80801DA8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801DB8;
    }
    goto skip_2;
    // 0x80801DA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80801DAC: jal         0x8009D658
    // 0x80801DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_31;
    // 0x80801DB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80801DB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801DB8:
    // 0x80801DB8: jal         0x8009D3A8
    // 0x80801DBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_32;
    // 0x80801DBC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_32:
    // 0x80801DC0: jal         0x8008B324
    // 0x80801DC4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_33;
    // 0x80801DC4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_33:
    // 0x80801DC8: beq         $v0, $zero, L_80801E00
    if (ctx->r2 == 0) {
        // 0x80801DCC: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_80801E00;
    }
    // 0x80801DCC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801DD0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80801DD4: jal         0x8008B1D4
    // 0x80801DD8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_34;
    // 0x80801DD8: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_34:
    // 0x80801DDC: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x80801DE0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80801DE4: jal         0x8008B1BC
    // 0x80801DE8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B1BC(rdram, ctx);
        goto after_35;
    // 0x80801DE8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_35:
    // 0x80801DEC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80801DF0: jal         0x8008B134
    // 0x80801DF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_36;
    // 0x80801DF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_36:
    // 0x80801DF8: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80801DFC: sw          $t0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r8;
L_80801E00:
    // 0x80801E00: jal         0x800849D0
    // 0x80801E04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_1(rdram, ctx);
        goto after_37;
    // 0x80801E04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x80801E08: b           L_80801E5C
    // 0x80801E0C: nop

        goto L_80801E5C;
    // 0x80801E0C: nop

L_80801E10:
    // 0x80801E10: jal         0x8009BB00
    // 0x80801E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_38;
    // 0x80801E14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
    // 0x80801E18: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x80801E1C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80801E20: nop

    // 0x80801E24: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80801E28: nop

    // 0x80801E2C: bc1fl       L_80801E40
    if (!c1cs) {
        // 0x80801E30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801E40;
    }
    goto skip_3;
    // 0x80801E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80801E34: jal         0x8009D658
    // 0x80801E38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_39;
    // 0x80801E38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x80801E3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801E40:
    // 0x80801E40: jal         0x8009D3A8
    // 0x80801E44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_40;
    // 0x80801E44: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_40:
    // 0x80801E48: jal         0x8008B324
    // 0x80801E4C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_41;
    // 0x80801E4C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_41:
    // 0x80801E50: beq         $v0, $zero, L_80801E5C
    if (ctx->r2 == 0) {
        // 0x80801E54: addiu       $t1, $zero, 0x15
        ctx->r9 = ADD32(0, 0X15);
            goto L_80801E5C;
    }
    // 0x80801E54: addiu       $t1, $zero, 0x15
    ctx->r9 = ADD32(0, 0X15);
    // 0x80801E58: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_80801E5C:
    // 0x80801E5C: jal         0x8008E35C
    // 0x80801E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_42;
    // 0x80801E60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_42:
    // 0x80801E64: beq         $v0, $zero, L_80801E70
    if (ctx->r2 == 0) {
        // 0x80801E68: addiu       $t2, $zero, 0x4C
        ctx->r10 = ADD32(0, 0X4C);
            goto L_80801E70;
    }
    // 0x80801E68: addiu       $t2, $zero, 0x4C
    ctx->r10 = ADD32(0, 0X4C);
    // 0x80801E6C: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_80801E70:
    // 0x80801E70: jal         0x8008E078
    // 0x80801E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_43;
    // 0x80801E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_43:
    // 0x80801E78: beq         $v0, $zero, L_80801EB0
    if (ctx->r2 == 0) {
        // 0x80801E7C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801EB0;
    }
    // 0x80801E7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801E80: jal         0x80091A58
    // 0x80801E84: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_44;
    // 0x80801E84: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_44:
    // 0x80801E88: beq         $v0, $zero, L_80801E9C
    if (ctx->r2 == 0) {
        // 0x80801E8C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801E9C;
    }
    // 0x80801E8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801E90: jal         0x8000075C
    // 0x80801E94: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8080075C_bsbtrot(rdram, ctx);
        goto after_45;
    // 0x80801E94: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_45:
    // 0x80801E98: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_80801E9C:
    // 0x80801E9C: jal         0x8008DF18
    // 0x80801EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DF18(rdram, ctx);
        goto after_46;
    // 0x80801EA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_46:
    // 0x80801EA4: beq         $v0, $zero, L_80801EB0
    if (ctx->r2 == 0) {
        // 0x80801EA8: addiu       $t3, $zero, 0x45
        ctx->r11 = ADD32(0, 0X45);
            goto L_80801EB0;
    }
    // 0x80801EA8: addiu       $t3, $zero, 0x45
    ctx->r11 = ADD32(0, 0X45);
    // 0x80801EAC: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_80801EB0:
    // 0x80801EB0: jal         0x8008E260
    // 0x80801EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_47;
    // 0x80801EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_47:
    // 0x80801EB8: beq         $v0, $zero, L_80801EC8
    if (ctx->r2 == 0) {
        // 0x80801EBC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801EC8;
    }
    // 0x80801EBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801EC0: addiu       $t4, $zero, 0x3D
    ctx->r12 = ADD32(0, 0X3D);
    // 0x80801EC4: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_80801EC8:
    // 0x80801EC8: jal         0x8009E5C8
    // 0x80801ECC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_48;
    // 0x80801ECC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_48:
    // 0x80801ED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801ED4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801ED8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80801EDC: jr          $ra
    // 0x80801EE0: nop

    return;
    // 0x80801EE0: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801EE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801EE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801EEC: jal         0x8000061C
    // 0x80801EF0: nop

    func_8080061C_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80801EF0: nop

    after_0:
    // 0x80801EF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801EF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801EFC: jr          $ra
    // 0x80801F00: nop

    return;
    // 0x80801F00: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801F04: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801F08: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2EB0) << 16);
    // 0x80801F0C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801F10: jr          $ra
    // 0x80801F14: lw          $v0, 0x2EB0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2EB0));
    return;
    // 0x80801F14: lw          $v0, 0x2EB0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2EB0));
;}
RECOMP_FUNC void bsbtrot_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801F18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801F20: jal         0x800839B8
    // 0x80801F24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80801F24: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801F28: jal         0x8000061C
    // 0x80801F2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080061C_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80801F2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801F38: jr          $ra
    // 0x80801F3C: nop

    return;
    // 0x80801F3C: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801F40: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801F44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801F48: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801F4C: jal         0x80000538
    // 0x80801F50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800538_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80801F50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801F54: jal         0x800839D8
    // 0x80801F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsrest_entrypoint_18(rdram, ctx);
        goto after_1;
    // 0x80801F58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801F5C: jal         0x8008E430
    // 0x80801F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E430(rdram, ctx);
        goto after_2;
    // 0x80801F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801F64: beq         $v0, $zero, L_80801F84
    if (ctx->r2 == 0) {
        // 0x80801F68: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801F84;
    }
    // 0x80801F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801F6C: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80801F70: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801F74: jal         0x8008CB3C
    // 0x80801F78: addiu       $a1, $zero, 0x29B
    ctx->r5 = ADD32(0, 0X29B);
    func_8008CB3C(rdram, ctx);
        goto after_3;
    // 0x80801F78: addiu       $a1, $zero, 0x29B
    ctx->r5 = ADD32(0, 0X29B);
    after_3:
    // 0x80801F7C: b           L_80801FC4
    // 0x80801F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801FC4;
    // 0x80801F80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801F84:
    // 0x80801F84: jal         0x8008E40C
    // 0x80801F88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E40C(rdram, ctx);
        goto after_4;
    // 0x80801F88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801F8C: beq         $v0, $zero, L_80801FB0
    if (ctx->r2 == 0) {
        // 0x80801F90: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801FB0;
    }
    // 0x80801F90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801F94: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80801F98: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801F9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801FA0: jal         0x8008CB3C
    // 0x80801FA4: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    func_8008CB3C(rdram, ctx);
        goto after_5;
    // 0x80801FA4: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    after_5:
    // 0x80801FA8: b           L_80801FC4
    // 0x80801FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801FC4;
    // 0x80801FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801FB0:
    // 0x80801FB0: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80801FB4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801FB8: jal         0x8008CB3C
    // 0x80801FBC: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    func_8008CB3C(rdram, ctx);
        goto after_6;
    // 0x80801FBC: addiu       $a1, $zero, 0x26
    ctx->r5 = ADD32(0, 0X26);
    after_6:
    // 0x80801FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801FC4:
    // 0x80801FC4: jal         0x800931AC
    // 0x80801FC8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800931AC(rdram, ctx);
        goto after_7;
    // 0x80801FC8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x80801FCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801FD0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801FD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801FD8: jr          $ra
    // 0x80801FDC: nop

    return;
    // 0x80801FDC: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801FE0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801FE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801FE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801FEC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801FF0: jal         0x800004B4
    // 0x80801FF4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_808004B4_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80801FF4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80801FF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801FFC: jal         0x8009D3A8
    // 0x80802000: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x80802000: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80802004: lw          $t6, 0x164($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X164);
    // 0x80802008: addiu       $t7, $zero, 0x17
    ctx->r15 = ADD32(0, 0X17);
    // 0x8080200C: beq         $t6, $zero, L_8080201C
    if (ctx->r14 == 0) {
        // 0x80802010: nop
    
            goto L_8080201C;
    }
    // 0x80802010: nop

    // 0x80802014: b           L_80802038
    // 0x80802018: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
        goto L_80802038;
    // 0x80802018: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_8080201C:
    // 0x8080201C: jal         0x800839E8
    // 0x80802020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_2;
    // 0x80802020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80802024: beql        $v0, $zero, L_8080203C
    if (ctx->r2 == 0) {
        // 0x80802028: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080203C;
    }
    goto skip_0;
    // 0x80802028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080202C: jal         0x800839B0
    // 0x80802030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x80802030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80802034: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80802038:
    // 0x80802038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080203C:
    // 0x8080203C: jal         0x8009E5C8
    // 0x80802040: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80802040: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80802044: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80802048: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080204C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80802050: jr          $ra
    // 0x80802054: nop

    return;
    // 0x80802054: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802058: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080205C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2EC0) << 16);
    // 0x80802060: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80802064: jr          $ra
    // 0x80802068: lw          $v0, 0x2EC0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2EC0));
    return;
    // 0x80802068: lw          $v0, 0x2EC0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2EC0));
;}
RECOMP_FUNC void bsbtrot_entrypoint_32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080206C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80802070: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80802074: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80802078: jal         0x80000538
    // 0x8080207C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800538_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x8080207C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80802080: jal         0x80099A58
    // 0x80802084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A58(rdram, ctx);
        goto after_1;
    // 0x80802084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80802088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080208C: jal         0x80084F78
    // 0x80802090: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    _bareact_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80802090: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x80802094: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x80802098: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080209C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808020A0: jal         0x8008CDB8
    // 0x808020A4: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    func_8008CDB8(rdram, ctx);
        goto after_3;
    // 0x808020A4: addiu       $a1, $zero, 0x66
    ctx->r5 = ADD32(0, 0X66);
    after_3:
    // 0x808020A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808020AC: jal         0x8009D89C
    // 0x808020B0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009D89C(rdram, ctx);
        goto after_4;
    // 0x808020B0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x808020B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808020B8: jal         0x8009C128
    // 0x808020BC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8009C128(rdram, ctx);
        goto after_5;
    // 0x808020BC: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_5:
    // 0x808020C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808020C4: jal         0x800A32C4
    // 0x808020C8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800A32C4(rdram, ctx);
        goto after_6;
    // 0x808020C8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x808020CC: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x808020D0: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x808020D4: jal         0x800F1E6C
    // 0x808020D8: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    func_800F1E6C(rdram, ctx);
        goto after_7;
    // 0x808020D8: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    after_7:
    // 0x808020DC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808020E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808020E4: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x808020E8: jal         0x800136E4
    // 0x808020EC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    func_800136E4(rdram, ctx);
        goto after_8;
    // 0x808020EC: add.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl + ctx->f6.fl;
    after_8:
    // 0x808020F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808020F4: jal         0x8009C914
    // 0x808020F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_9;
    // 0x808020F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808020FC: jal         0x8009C974
    // 0x80802100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_10;
    // 0x80802100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80802104: jal         0x80084F90
    // 0x80802108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bareact_entrypoint_4(rdram, ctx);
        goto after_11;
    // 0x80802108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080210C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80802110: jal         0x8009B9B0
    // 0x80802114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_12;
    // 0x80802114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80802118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080211C: jal         0x8009B9C0
    // 0x80802120: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009B9C0(rdram, ctx);
        goto after_13;
    // 0x80802120: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_13:
    // 0x80802124: jal         0x8009BB00
    // 0x80802128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_14;
    // 0x80802128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8080212C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80802130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802134: jal         0x8009BA68
    // 0x80802138: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009BA68(rdram, ctx);
        goto after_15;
    // 0x80802138: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_15:
    // 0x8080213C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80802140: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80802144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802148: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080214C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80802150: jal         0x8009FFD8
    // 0x80802154: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_16;
    // 0x80802154: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_16:
    // 0x80802158: jal         0x80084F80
    // 0x8080215C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bareact_entrypoint_2(rdram, ctx);
        goto after_17;
    // 0x8080215C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80802160: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80802164: bne         $v0, $at, L_80802174
    if (ctx->r2 != ctx->r1) {
        // 0x80802168: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80802174;
    }
    // 0x80802168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080216C: jal         0x8009B800
    // 0x80802170: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009B800(rdram, ctx);
        goto after_18;
    // 0x80802170: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_18:
L_80802174:
    // 0x80802174: jal         0x80084F88
    // 0x80802178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bareact_entrypoint_3(rdram, ctx);
        goto after_19;
    // 0x80802178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x8080217C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80802180: jal         0x8009BA58
    // 0x80802184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_20;
    // 0x80802184: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80802188: jal         0x80084F98
    // 0x8080218C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bareact_entrypoint_5(rdram, ctx);
        goto after_21;
    // 0x8080218C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80802190: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80802194: jal         0x8009BCB4
    // 0x80802198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_22;
    // 0x80802198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x8080219C: jal         0x8008E944
    // 0x808021A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_23;
    // 0x808021A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x808021A4: jal         0x8009514C
    // 0x808021A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009514C(rdram, ctx);
        goto after_24;
    // 0x808021A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x808021AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808021B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808021B4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x808021B8: jr          $ra
    // 0x808021BC: nop

    return;
    // 0x808021BC: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808021C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808021C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808021C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808021CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808021D0: jal         0x80084F80
    // 0x808021D4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    _bareact_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x808021D4: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808021D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808021DC: bnel        $v0, $at, L_808021F0
    if (ctx->r2 != ctx->r1) {
        // 0x808021E0: lui         $a1, 0x3E99
        ctx->r5 = S32(0X3E99 << 16);
            goto L_808021F0;
    }
    goto skip_0;
    // 0x808021E0: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    skip_0:
    // 0x808021E4: jal         0x80000438
    // 0x808021E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800438_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x808021E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808021EC: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
L_808021F0:
    // 0x808021F0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808021F4: jal         0x8008CB10
    // 0x808021F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x808021F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808021FC: beq         $v0, $zero, L_8080220C
    if (ctx->r2 == 0) {
        // 0x80802200: nop
    
            goto L_8080220C;
    }
    // 0x80802200: nop

    // 0x80802204: jal         0x800951B4
    // 0x80802208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_3;
    // 0x80802208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_8080220C:
    // 0x8080220C: jal         0x8008E260
    // 0x80802210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_4;
    // 0x80802210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80802214: beq         $v0, $zero, L_80802220
    if (ctx->r2 == 0) {
        // 0x80802218: addiu       $t6, $zero, 0x3D
        ctx->r14 = ADD32(0, 0X3D);
            goto L_80802220;
    }
    // 0x80802218: addiu       $t6, $zero, 0x3D
    ctx->r14 = ADD32(0, 0X3D);
    // 0x8080221C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80802220:
    // 0x80802220: jal         0x8008E078
    // 0x80802224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_5;
    // 0x80802224: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80802228: beq         $v0, $zero, L_80802244
    if (ctx->r2 == 0) {
        // 0x8080222C: nop
    
            goto L_80802244;
    }
    // 0x8080222C: nop

    // 0x80802230: jal         0x8008CAEC
    // 0x80802234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_6;
    // 0x80802234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80802238: beq         $v0, $zero, L_80802244
    if (ctx->r2 == 0) {
        // 0x8080223C: addiu       $t7, $zero, 0x15
        ctx->r15 = ADD32(0, 0X15);
            goto L_80802244;
    }
    // 0x8080223C: addiu       $t7, $zero, 0x15
    ctx->r15 = ADD32(0, 0X15);
    // 0x80802240: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80802244:
    // 0x80802244: jal         0x8008CABC
    // 0x80802248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_7;
    // 0x80802248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080224C: jal         0x8008B324
    // 0x80802250: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B324(rdram, ctx);
        goto after_8;
    // 0x80802250: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_8:
    // 0x80802254: beql        $v0, $zero, L_80802274
    if (ctx->r2 == 0) {
        // 0x80802258: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80802274;
    }
    goto skip_1;
    // 0x80802258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x8080225C: jal         0x8008E35C
    // 0x80802260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_9;
    // 0x80802260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80802264: beq         $v0, $zero, L_80802270
    if (ctx->r2 == 0) {
        // 0x80802268: addiu       $t8, $zero, 0x2D
        ctx->r24 = ADD32(0, 0X2D);
            goto L_80802270;
    }
    // 0x80802268: addiu       $t8, $zero, 0x2D
    ctx->r24 = ADD32(0, 0X2D);
    // 0x8080226C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80802270:
    // 0x80802270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80802274:
    // 0x80802274: jal         0x8009E5C8
    // 0x80802278: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x80802278: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_10:
    // 0x8080227C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80802280: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80802284: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80802288: jr          $ra
    // 0x8080228C: nop

    return;
    // 0x8080228C: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802290: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80802294: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80802298: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080229C: jal         0x8009BD88
    // 0x808022A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009BD88(rdram, ctx);
        goto after_0;
    // 0x808022A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808022A4: jal         0x8009BC6C
    // 0x808022A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_1;
    // 0x808022A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808022AC: jal         0x8008E95C
    // 0x808022B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E95C(rdram, ctx);
        goto after_2;
    // 0x808022B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808022B4: jal         0x800951B4
    // 0x808022B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_3;
    // 0x808022B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808022BC: jal         0x8000061C
    // 0x808022C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080061C_bsbtrot(rdram, ctx);
        goto after_4;
    // 0x808022C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808022C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808022C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808022CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808022D0: jr          $ra
    // 0x808022D4: nop

    return;
    // 0x808022D4: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808022D8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808022DC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2ED0) << 16);
    // 0x808022E0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808022E4: jr          $ra
    // 0x808022E8: lw          $v0, 0x2ED0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2ED0));
    return;
    // 0x808022E8: lw          $v0, 0x2ED0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2ED0));
;}
RECOMP_FUNC void bsbtrot_entrypoint_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808022EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808022F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808022F4: jal         0x800004B4
    // 0x808022F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808004B4_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x808022F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808022FC: jal         0x80000538
    // 0x80802300: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800538_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80802300: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80802304: jal         0x80082FE0
    // 0x80802308: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x80802308: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8080230C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80802310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80802314: jr          $ra
    // 0x80802318: nop

    return;
    // 0x80802318: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080231C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80802320: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80802324: jal         0x80082FE8
    // 0x80802328: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80802328: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080232C: jal         0x800004B4
    // 0x80802330: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808004B4_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80802330: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80802334: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80802338: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080233C: jr          $ra
    // 0x80802340: nop

    return;
    // 0x80802340: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802344: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80802348: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080234C: jal         0x80082FF0
    // 0x80802350: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80802350: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80802354: jal         0x8000061C
    // 0x80802358: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080061C_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80802358: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080235C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80802360: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80802364: jr          $ra
    // 0x80802368: nop

    return;
    // 0x80802368: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080236C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80802370: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2EE0) << 16);
    // 0x80802374: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80802378: jr          $ra
    // 0x8080237C: lw          $v0, 0x2EE0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2EE0));
    return;
    // 0x8080237C: lw          $v0, 0x2EE0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2EE0));
;}
RECOMP_FUNC void func_80802380_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802380: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80802384: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80802388: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080238C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80802390: beq         $a1, $zero, L_808023B8
    if (ctx->r5 == 0) {
        // 0x80802394: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_808023B8;
    }
    // 0x80802394: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80802398: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080239C: beq         $a1, $at, L_808023C8
    if (ctx->r5 == ctx->r1) {
        // 0x808023A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808023C8;
    }
    // 0x808023A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808023A4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808023A8: beq         $a1, $at, L_80802418
    if (ctx->r5 == ctx->r1) {
        // 0x808023AC: nop
    
            goto L_80802418;
    }
    // 0x808023AC: nop

    // 0x808023B0: b           L_8080246C
    // 0x808023B4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_8080246C;
    // 0x808023B4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_808023B8:
    // 0x808023B8: jal         0x8009BC6C
    // 0x808023BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x808023BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x808023C0: b           L_8080246C
    // 0x808023C4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_8080246C;
    // 0x808023C4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_808023C8:
    // 0x808023C8: lui         $a2, 0x3FF3
    ctx->r6 = S32(0X3FF3 << 16);
    // 0x808023CC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808023D0: jal         0x8008CCBC
    // 0x808023D4: addiu       $a1, $zero, 0x298
    ctx->r5 = ADD32(0, 0X298);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x808023D4: addiu       $a1, $zero, 0x298
    ctx->r5 = ADD32(0, 0X298);
    after_1:
    // 0x808023D8: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x808023DC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x808023E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808023E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808023E8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808023EC: jal         0x8009FFD8
    // 0x808023F0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808023F0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x808023F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808023F8: jal         0x8009B9B0
    // 0x808023FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x808023FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80802400: lui         $a1, 0xC528
    ctx->r5 = S32(0XC528 << 16);
    // 0x80802404: ori         $a1, $a1, 0xC000
    ctx->r5 = ctx->r5 | 0XC000;
    // 0x80802408: jal         0x8009BCB4
    // 0x8080240C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_4;
    // 0x8080240C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80802410: b           L_8080246C
    // 0x80802414: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
        goto L_8080246C;
    // 0x80802414: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_80802418:
    // 0x80802418: jal         0x80085060
    // 0x8080241C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_17(rdram, ctx);
        goto after_5;
    // 0x8080241C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80802420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802424: jal         0x8009B800
    // 0x80802428: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009B800(rdram, ctx);
        goto after_6;
    // 0x80802428: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_6:
    // 0x8080242C: lui         $a1, 0x4514
    ctx->r5 = S32(0X4514 << 16);
    // 0x80802430: ori         $a1, $a1, 0xF000
    ctx->r5 = ctx->r5 | 0XF000;
    // 0x80802434: jal         0x8009BA58
    // 0x80802438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_7;
    // 0x80802438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080243C: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x80802440: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x80802444: addiu       $t8, $zero, 0x7FFF
    ctx->r24 = ADD32(0, 0X7FFF);
    // 0x80802448: addiu       $t9, $zero, 0x7FFF
    ctx->r25 = ADD32(0, 0X7FFF);
    // 0x8080244C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80802450: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80802454: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80802458: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080245C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802460: jal         0x8009DEC0
    // 0x80802464: addiu       $a1, $zero, 0x4598
    ctx->r5 = ADD32(0, 0X4598);
    func_8009DEC0(rdram, ctx);
        goto after_8;
    // 0x80802464: addiu       $a1, $zero, 0x4598
    ctx->r5 = ADD32(0, 0X4598);
    after_8:
    // 0x80802468: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
L_8080246C:
    // 0x8080246C: sw          $t0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r8;
    // 0x80802470: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80802474: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80802478: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080247C: jr          $ra
    // 0x80802480: nop

    return;
    // 0x80802480: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80802488: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080248C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80802490: jal         0x80002380
    // 0x80802494: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80802380_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80802494: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80802498: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080249C: jal         0x80085008
    // 0x808024A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bashoes_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x808024A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x808024A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808024A8: jal         0x80085000
    // 0x808024AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bashoes_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x808024AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808024B0: jal         0x8000061C
    // 0x808024B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080061C_bsbtrot(rdram, ctx);
        goto after_3;
    // 0x808024B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808024B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808024BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808024C0: jr          $ra
    // 0x808024C4: nop

    return;
    // 0x808024C4: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808024C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808024CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808024D0: jal         0x80000538
    // 0x808024D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800538_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x808024D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808024D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808024DC: jal         0x80085000
    // 0x808024E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bashoes_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x808024E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808024E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808024E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808024EC: jal         0x80002380
    // 0x808024F0: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_80802380_bsbtrot(rdram, ctx);
        goto after_2;
    // 0x808024F0: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    after_2:
    // 0x808024F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808024F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808024FC: jr          $ra
    // 0x80802500: nop

    return;
    // 0x80802500: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802504: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80802508: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080250C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80802510: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80802514: lw          $v0, 0x15C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X15C);
    // 0x80802518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080251C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80802520: beq         $v0, $at, L_8080253C
    if (ctx->r2 == ctx->r1) {
        // 0x80802524: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080253C;
    }
    // 0x80802524: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802528: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080252C: beq         $v0, $at, L_80802560
    if (ctx->r2 == ctx->r1) {
        // 0x80802530: nop
    
            goto L_80802560;
    }
    // 0x80802530: nop

    // 0x80802534: b           L_808025A8
    // 0x80802538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808025A8;
    // 0x80802538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080253C:
    // 0x8080253C: lui         $a1, 0x3EF2
    ctx->r5 = S32(0X3EF2 << 16);
    // 0x80802540: jal         0x8008CB10
    // 0x80802544: ori         $a1, $a1, 0xE48F
    ctx->r5 = ctx->r5 | 0XE48F;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x80802544: ori         $a1, $a1, 0xE48F
    ctx->r5 = ctx->r5 | 0XE48F;
    after_0:
    // 0x80802548: beq         $v0, $zero, L_808025A4
    if (ctx->r2 == 0) {
        // 0x8080254C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808025A4;
    }
    // 0x8080254C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802550: jal         0x80002380
    // 0x80802554: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80802380_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80802554: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80802558: b           L_808025A8
    // 0x8080255C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808025A8;
    // 0x8080255C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80802560:
    // 0x80802560: jal         0x8008CAC8
    // 0x80802564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_2;
    // 0x80802564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80802568: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(86, 0X2E40) << 16);
    // 0x8080256C: lwc1        $f4, 0x2E40($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(86, 0X2E40));
    // 0x80802570: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80802574: nop

    // 0x80802578: bc1f        L_80802588
    if (!c1cs) {
        // 0x8080257C: nop
    
            goto L_80802588;
    }
    // 0x8080257C: nop

    // 0x80802580: jal         0x80085058
    // 0x80802584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_16(rdram, ctx);
        goto after_3;
    // 0x80802584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
L_80802588:
    // 0x80802588: jal         0x80000438
    // 0x8080258C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800438_bsbtrot(rdram, ctx);
        goto after_4;
    // 0x8080258C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80802590: jal         0x8008CAEC
    // 0x80802594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_5;
    // 0x80802594: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80802598: beq         $v0, $zero, L_808025A4
    if (ctx->r2 == 0) {
        // 0x8080259C: addiu       $t6, $zero, 0x2F
        ctx->r14 = ADD32(0, 0X2F);
            goto L_808025A4;
    }
    // 0x8080259C: addiu       $t6, $zero, 0x2F
    ctx->r14 = ADD32(0, 0X2F);
    // 0x808025A0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808025A4:
    // 0x808025A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808025A8:
    // 0x808025A8: jal         0x8009E5C8
    // 0x808025AC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x808025AC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x808025B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808025B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808025B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808025BC: jr          $ra
    // 0x808025C0: nop

    return;
    // 0x808025C0: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808025C4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808025C8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2EF0) << 16);
    // 0x808025CC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808025D0: jr          $ra
    // 0x808025D4: lw          $v0, 0x2EF0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2EF0));
    return;
    // 0x808025D4: lw          $v0, 0x2EF0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2EF0));
;}
RECOMP_FUNC void func_808025D8_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808025D8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808025DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808025E0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808025E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808025E8: jal         0x8008CABC
    // 0x808025EC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808025EC: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808025F0: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x808025F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808025F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808025FC: beq         $v1, $at, L_8080262C
    if (ctx->r3 == ctx->r1) {
        // 0x80802600: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8080262C;
    }
    // 0x80802600: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80802604: beq         $v1, $at, L_8080275C
    if (ctx->r3 == ctx->r1) {
        // 0x80802608: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080275C;
    }
    // 0x80802608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080260C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80802610: beq         $v1, $at, L_80802774
    if (ctx->r3 == ctx->r1) {
        // 0x80802614: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80802774;
    }
    // 0x80802614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802618: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8080261C: beq         $v1, $at, L_80802790
    if (ctx->r3 == ctx->r1) {
        // 0x80802620: nop
    
            goto L_80802790;
    }
    // 0x80802620: nop

    // 0x80802624: b           L_808027AC
    // 0x80802628: sw          $v1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r3;
        goto L_808027AC;
    // 0x80802628: sw          $v1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r3;
L_8080262C:
    // 0x8080262C: jal         0x8008AF24
    // 0x80802630: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80802630: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_1:
    // 0x80802634: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80802638: jal         0x8008AED4
    // 0x8080263C: addiu       $a1, $zero, 0x11F
    ctx->r5 = ADD32(0, 0X11F);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x8080263C: addiu       $a1, $zero, 0x11F
    ctx->r5 = ADD32(0, 0X11F);
    after_2:
    // 0x80802640: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80802644: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80802648: jal         0x8008B1BC
    // 0x8080264C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x8080264C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x80802650: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80802654: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80802658: jal         0x8008B1C8
    // 0x8080265C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B1C8(rdram, ctx);
        goto after_4;
    // 0x8080265C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_4:
    // 0x80802660: lui         $a1, 0x3E31
    ctx->r5 = S32(0X3E31 << 16);
    // 0x80802664: ori         $a1, $a1, 0x8FC5
    ctx->r5 = ctx->r5 | 0X8FC5;
    // 0x80802668: jal         0x8008B24C
    // 0x8080266C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B24C(rdram, ctx);
        goto after_5;
    // 0x8080266C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_5:
    // 0x80802670: lui         $a2, 0x3ECC
    ctx->r6 = S32(0X3ECC << 16);
    // 0x80802674: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80802678: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8080267C: jal         0x8008B1D4
    // 0x80802680: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_6;
    // 0x80802680: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80802684: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80802688: jal         0x8008B134
    // 0x8080268C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x8080268C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80802690: jal         0x8008B064
    // 0x80802694: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x80802694: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_8:
    // 0x80802698: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8080269C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808026A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808026A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808026A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808026AC: jal         0x8009FFD8
    // 0x808026B0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_9;
    // 0x808026B0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_9:
    // 0x808026B4: jal         0x8009EF04
    // 0x808026B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_10;
    // 0x808026B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808026BC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808026C0: nop

    // 0x808026C4: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808026C8: nop

    // 0x808026CC: bc1t        L_808026E8
    if (c1cs) {
        // 0x808026D0: nop
    
            goto L_808026E8;
    }
    // 0x808026D0: nop

    // 0x808026D4: jal         0x8009EEB8
    // 0x808026D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_11;
    // 0x808026D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808026DC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808026E0: jal         0x8009C914
    // 0x808026E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_12;
    // 0x808026E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_808026E8:
    // 0x808026E8: jal         0x8009C990
    // 0x808026EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_13;
    // 0x808026EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808026F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808026F4: jal         0x8009B9C0
    // 0x808026F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_14;
    // 0x808026F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808026FC: jal         0x80000438
    // 0x80802700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800438_bsbtrot(rdram, ctx);
        goto after_15;
    // 0x80802700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80802704: jal         0x8009C990
    // 0x80802708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_16;
    // 0x80802708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8080270C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80802710: jal         0x8009BB00
    // 0x80802714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_17;
    // 0x80802714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80802718: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080271C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802720: jal         0x8009BA68
    // 0x80802724: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009BA68(rdram, ctx);
        goto after_18;
    // 0x80802724: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_18:
    // 0x80802728: lui         $a1, 0x442D
    ctx->r5 = S32(0X442D << 16);
    // 0x8080272C: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    // 0x80802730: jal         0x8009BA58
    // 0x80802734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_19;
    // 0x80802734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80802738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080273C: jal         0x8009BCB4
    // 0x80802740: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_20;
    // 0x80802740: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_20:
    // 0x80802744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802748: addiu       $a1, $zero, 0x4432
    ctx->r5 = ADD32(0, 0X4432);
    // 0x8080274C: jal         0x8009DE38
    // 0x80802750: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009DE38(rdram, ctx);
        goto after_21;
    // 0x80802750: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_21:
    // 0x80802754: b           L_808027A8
    // 0x80802758: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
        goto L_808027A8;
    // 0x80802758: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
L_8080275C:
    // 0x8080275C: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x80802760: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80802764: jal         0x8008CF1C
    // 0x80802768: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_22;
    // 0x80802768: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_22:
    // 0x8080276C: b           L_808027A8
    // 0x80802770: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
        goto L_808027A8;
    // 0x80802770: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
L_80802774:
    // 0x80802774: lui         $a1, 0x3F45
    ctx->r5 = S32(0X3F45 << 16);
    // 0x80802778: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x8080277C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80802780: jal         0x8008CF1C
    // 0x80802784: ori         $a1, $a1, 0xFD8B
    ctx->r5 = ctx->r5 | 0XFD8B;
    func_8008CF1C(rdram, ctx);
        goto after_23;
    // 0x80802784: ori         $a1, $a1, 0xFD8B
    ctx->r5 = ctx->r5 | 0XFD8B;
    after_23:
    // 0x80802788: b           L_808027A8
    // 0x8080278C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
        goto L_808027A8;
    // 0x8080278C: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
L_80802790:
    // 0x80802790: jal         0x8009FE58
    // 0x80802794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_24;
    // 0x80802794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80802798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080279C: jal         0x8008CED4
    // 0x808027A0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CED4(rdram, ctx);
        goto after_25;
    // 0x808027A0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_25:
    // 0x808027A4: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
L_808027A8:
    // 0x808027A8: sw          $v1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r3;
L_808027AC:
    // 0x808027AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808027B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808027B4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808027B8: jr          $ra
    // 0x808027BC: nop

    return;
    // 0x808027BC: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808027C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808027C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808027C8: jal         0x8009BC6C
    // 0x808027CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x808027CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808027D0: jal         0x8000061C
    // 0x808027D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080061C_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x808027D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808027D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808027DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808027E0: jr          $ra
    // 0x808027E4: nop

    return;
    // 0x808027E4: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808027E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808027EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808027F0: jal         0x80000538
    // 0x808027F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800538_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x808027F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808027F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808027FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80802800: jal         0x800025D8
    // 0x80802804: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_808025D8_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80802804: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    after_1:
    // 0x80802808: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080280C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80802810: jr          $ra
    // 0x80802814: nop

    return;
    // 0x80802814: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_46(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802818: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8080281C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80802820: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80802824: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80802828: jal         0x8008CABC
    // 0x8080282C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080282C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80802830: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80802834: jal         0x800004B4
    // 0x80802838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80802838: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080283C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802840: jal         0x80095738
    // 0x80802844: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_2;
    // 0x80802844: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_2:
    // 0x80802848: beq         $v0, $zero, L_80802860
    if (ctx->r2 == 0) {
        // 0x8080284C: nop
    
            goto L_80802860;
    }
    // 0x8080284C: nop

    // 0x80802850: jal         0x8009B7C0
    // 0x80802854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B7C0(rdram, ctx);
        goto after_3;
    // 0x80802854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80802858: b           L_8080286C
    // 0x8080285C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080286C;
    // 0x8080285C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80802860:
    // 0x80802860: jal         0x80000438
    // 0x80802864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800438_bsbtrot(rdram, ctx);
        goto after_4;
    // 0x80802864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80802868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080286C:
    // 0x8080286C: jal         0x8009BB24
    // 0x80802870: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_5;
    // 0x80802870: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_5:
    // 0x80802874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802878: jal         0x80091A30
    // 0x8080287C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_6;
    // 0x8080287C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_6:
    // 0x80802880: beq         $v0, $zero, L_808028A8
    if (ctx->r2 == 0) {
        // 0x80802884: lwc1        $f6, 0x28($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
            goto L_808028A8;
    }
    // 0x80802884: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80802888: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080288C: nop

    // 0x80802890: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80802894: nop

    // 0x80802898: bc1fl       L_808028AC
    if (!c1cs) {
        // 0x8080289C: lw          $v0, 0x15C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X15C);
            goto L_808028AC;
    }
    goto skip_0;
    // 0x8080289C: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    skip_0:
    // 0x808028A0: jal         0x8009BC6C
    // 0x808028A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_7;
    // 0x808028A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_808028A8:
    // 0x808028A8: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
L_808028AC:
    // 0x808028AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808028B0: beq         $v0, $at, L_808028E0
    if (ctx->r2 == ctx->r1) {
        // 0x808028B4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808028E0;
    }
    // 0x808028B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808028B8: beq         $v0, $at, L_80802900
    if (ctx->r2 == ctx->r1) {
        // 0x808028BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80802900;
    }
    // 0x808028BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808028C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808028C4: beq         $v0, $at, L_80802920
    if (ctx->r2 == ctx->r1) {
        // 0x808028C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80802920;
    }
    // 0x808028C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808028CC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808028D0: beq         $v0, $at, L_80802948
    if (ctx->r2 == ctx->r1) {
        // 0x808028D4: nop
    
            goto L_80802948;
    }
    // 0x808028D4: nop

    // 0x808028D8: b           L_8080296C
    // 0x808028DC: nop

        goto L_8080296C;
    // 0x808028DC: nop

L_808028E0:
    // 0x808028E0: jal         0x8008B324
    // 0x808028E4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_8;
    // 0x808028E4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_8:
    // 0x808028E8: beq         $v0, $zero, L_8080296C
    if (ctx->r2 == 0) {
        // 0x808028EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080296C;
    }
    // 0x808028EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808028F0: jal         0x800025D8
    // 0x808028F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808025D8_bsbtrot(rdram, ctx);
        goto after_9;
    // 0x808028F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x808028F8: b           L_8080296C
    // 0x808028FC: nop

        goto L_8080296C;
    // 0x808028FC: nop

L_80802900:
    // 0x80802900: jal         0x8008DF8C
    // 0x80802904: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_10;
    // 0x80802904: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_10:
    // 0x80802908: beq         $v0, $zero, L_8080296C
    if (ctx->r2 == 0) {
        // 0x8080290C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080296C;
    }
    // 0x8080290C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802910: jal         0x800025D8
    // 0x80802914: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808025D8_bsbtrot(rdram, ctx);
        goto after_11;
    // 0x80802914: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x80802918: b           L_8080296C
    // 0x8080291C: nop

        goto L_8080296C;
    // 0x8080291C: nop

L_80802920:
    // 0x80802920: jal         0x8009D3A8
    // 0x80802924: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D3A8(rdram, ctx);
        goto after_12;
    // 0x80802924: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80802928: jal         0x8008E078
    // 0x8080292C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_13;
    // 0x8080292C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80802930: beq         $v0, $zero, L_8080296C
    if (ctx->r2 == 0) {
        // 0x80802934: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080296C;
    }
    // 0x80802934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802938: jal         0x800025D8
    // 0x8080293C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_808025D8_bsbtrot(rdram, ctx);
        goto after_14;
    // 0x8080293C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_14:
    // 0x80802940: b           L_8080296C
    // 0x80802944: nop

        goto L_8080296C;
    // 0x80802944: nop

L_80802948:
    // 0x80802948: jal         0x8008B324
    // 0x8080294C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_15;
    // 0x8080294C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_15:
    // 0x80802950: beq         $v0, $zero, L_80802960
    if (ctx->r2 == 0) {
        // 0x80802954: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80802960;
    }
    // 0x80802954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802958: addiu       $t6, $zero, 0x15
    ctx->r14 = ADD32(0, 0X15);
    // 0x8080295C: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_80802960:
    // 0x80802960: jal         0x800007E0
    // 0x80802964: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_808007E0_bsbtrot(rdram, ctx);
        goto after_16;
    // 0x80802964: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_16:
    // 0x80802968: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_8080296C:
    // 0x8080296C: jal         0x8008E078
    // 0x80802970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_17;
    // 0x80802970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80802974: bnel        $v0, $zero, L_808029A8
    if (ctx->r2 != 0) {
        // 0x80802978: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808029A8;
    }
    goto skip_1;
    // 0x80802978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x8080297C: jal         0x8008E260
    // 0x80802980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_18;
    // 0x80802980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80802984: beq         $v0, $zero, L_80802990
    if (ctx->r2 == 0) {
        // 0x80802988: addiu       $t7, $zero, 0x3D
        ctx->r15 = ADD32(0, 0X3D);
            goto L_80802990;
    }
    // 0x80802988: addiu       $t7, $zero, 0x3D
    ctx->r15 = ADD32(0, 0X3D);
    // 0x8080298C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_80802990:
    // 0x80802990: jal         0x8008E35C
    // 0x80802994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_19;
    // 0x80802994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80802998: beq         $v0, $zero, L_808029A4
    if (ctx->r2 == 0) {
        // 0x8080299C: addiu       $t8, $zero, 0x4C
        ctx->r24 = ADD32(0, 0X4C);
            goto L_808029A4;
    }
    // 0x8080299C: addiu       $t8, $zero, 0x4C
    ctx->r24 = ADD32(0, 0X4C);
    // 0x808029A0: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_808029A4:
    // 0x808029A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808029A8:
    // 0x808029A8: jal         0x8009E5C8
    // 0x808029AC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_20;
    // 0x808029AC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_20:
    // 0x808029B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808029B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808029B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808029BC: jr          $ra
    // 0x808029C0: nop

    return;
    // 0x808029C0: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_47(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808029C4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808029C8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2F00) << 16);
    // 0x808029CC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808029D0: jr          $ra
    // 0x808029D4: lw          $v0, 0x2F00($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2F00));
    return;
    // 0x808029D4: lw          $v0, 0x2F00($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2F00));
;}
RECOMP_FUNC void func_808029D8_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808029D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808029DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808029E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808029E4: jal         0x8009E710
    // 0x808029E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E710(rdram, ctx);
        goto after_0;
    // 0x808029E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808029EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808029F0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808029F4: jal         0x8009CA70
    // 0x808029F8: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_8009CA70(rdram, ctx);
        goto after_1;
    // 0x808029F8: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_1:
    // 0x808029FC: bnel        $v0, $zero, L_80802A3C
    if (ctx->r2 != 0) {
        // 0x80802A00: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80802A3C;
    }
    goto skip_0;
    // 0x80802A00: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80802A04: jal         0x80085098
    // 0x80802A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoessuck_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80802A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80802A0C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80802A10: sw          $t6, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r14;
    // 0x80802A14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802A18: jal         0x80092880
    // 0x80802A1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80092880(rdram, ctx);
        goto after_3;
    // 0x80802A1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80802A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802A24: jal         0x800A2018
    // 0x80802A28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800A2018(rdram, ctx);
        goto after_4;
    // 0x80802A28: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80802A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802A30: jal         0x800A4DA4
    // 0x80802A34: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    func_800A4DA4(rdram, ctx);
        goto after_5;
    // 0x80802A34: addiu       $a1, $zero, 0x19
    ctx->r5 = ADD32(0, 0X19);
    after_5:
    // 0x80802A38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80802A3C:
    // 0x80802A3C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80802A40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80802A44: jr          $ra
    // 0x80802A48: nop

    return;
    // 0x80802A48: nop

;}
RECOMP_FUNC void func_80802A4C_bsbtrot(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802A4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80802A50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80802A54: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80802A58: jal         0x8009E704
    // 0x80802A5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E704(rdram, ctx);
        goto after_0;
    // 0x80802A5C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80802A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802A64: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80802A68: jal         0x8009CA70
    // 0x80802A6C: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    func_8009CA70(rdram, ctx);
        goto after_1;
    // 0x80802A6C: addiu       $a2, $zero, 0x800
    ctx->r6 = ADD32(0, 0X800);
    after_1:
    // 0x80802A70: bnel        $v0, $zero, L_80802AA8
    if (ctx->r2 != 0) {
        // 0x80802A74: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80802AA8;
    }
    goto skip_0;
    // 0x80802A74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80802A78: jal         0x80085090
    // 0x80802A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoessuck_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80802A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80802A80: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x80802A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802A88: jal         0x80092880
    // 0x80802A8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80092880(rdram, ctx);
        goto after_3;
    // 0x80802A8C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80802A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802A94: jal         0x800A2018
    // 0x80802A98: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A2018(rdram, ctx);
        goto after_4;
    // 0x80802A98: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_4:
    // 0x80802A9C: jal         0x800A4E30
    // 0x80802AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4E30(rdram, ctx);
        goto after_5;
    // 0x80802AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80802AA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80802AA8:
    // 0x80802AA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80802AAC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80802AB0: jr          $ra
    // 0x80802AB4: nop

    return;
    // 0x80802AB4: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802AB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80802ABC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80802AC0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80802AC4: jal         0x80000538
    // 0x80802AC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800538_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80802AC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80802ACC: jal         0x800029D8
    // 0x80802AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808029D8_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80802AD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80802AD4: jal         0x80000DC4
    // 0x80802AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800DC4_bsbtrot(rdram, ctx);
        goto after_2;
    // 0x80802AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80802ADC: lui         $a2, 0x3F07
    ctx->r6 = S32(0X3F07 << 16);
    // 0x80802AE0: ori         $a2, $a2, 0xAE14
    ctx->r6 = ctx->r6 | 0XAE14;
    // 0x80802AE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802AE8: jal         0x8008CB3C
    // 0x80802AEC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8008CB3C(rdram, ctx);
        goto after_3;
    // 0x80802AEC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x80802AF0: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x80802AF4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80802AF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802AFC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80802B00: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80802B04: jal         0x8009FFD8
    // 0x80802B08: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8009FFD8(rdram, ctx);
        goto after_4;
    // 0x80802B08: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_4:
    // 0x80802B0C: jal         0x80000DF4
    // 0x80802B10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800DF4_bsbtrot(rdram, ctx);
        goto after_5;
    // 0x80802B10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80802B14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80802B18: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80802B1C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80802B20: jr          $ra
    // 0x80802B24: nop

    return;
    // 0x80802B24: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_49(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802B28: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80802B2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80802B30: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80802B34: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80802B38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80802B3C: jal         0x800956B8
    // 0x80802B40: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_800956B8(rdram, ctx);
        goto after_0;
    // 0x80802B40: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x80802B44: jal         0x80000120
    // 0x80802B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800120_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80802B48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80802B4C: jal         0x80000DF4
    // 0x80802B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800DF4_bsbtrot(rdram, ctx);
        goto after_2;
    // 0x80802B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80802B54: jal         0x800004B4
    // 0x80802B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bsbtrot(rdram, ctx);
        goto after_3;
    // 0x80802B58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80802B5C: jal         0x80000DC4
    // 0x80802B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800DC4_bsbtrot(rdram, ctx);
        goto after_4;
    // 0x80802B60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80802B64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802B68: jal         0x800002A4
    // 0x80802B6C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_808002A4_bsbtrot(rdram, ctx);
        goto after_5;
    // 0x80802B6C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_5:
    // 0x80802B70: jal         0x800850A0
    // 0x80802B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoessuck_entrypoint_4(rdram, ctx);
        goto after_6;
    // 0x80802B74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80802B78: jal         0x80000438
    // 0x80802B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800438_bsbtrot(rdram, ctx);
        goto after_7;
    // 0x80802B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80802B80: jal         0x800008D0
    // 0x80802B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808008D0_bsbtrot(rdram, ctx);
        goto after_8;
    // 0x80802B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80802B88: jal         0x8009EF10
    // 0x80802B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_9;
    // 0x80802B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80802B90: bne         $v0, $zero, L_80802BAC
    if (ctx->r2 != 0) {
        // 0x80802B94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80802BAC;
    }
    // 0x80802B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802B98: jal         0x8009BCD4
    // 0x80802B9C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_10;
    // 0x80802B9C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_10:
    // 0x80802BA0: beq         $v0, $zero, L_80802BAC
    if (ctx->r2 == 0) {
        // 0x80802BA4: nop
    
            goto L_80802BAC;
    }
    // 0x80802BA4: nop

    // 0x80802BA8: addiu       $s1, $zero, 0x17B
    ctx->r17 = ADD32(0, 0X17B);
L_80802BAC:
    // 0x80802BAC: jal         0x80000710
    // 0x80802BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800710_bsbtrot(rdram, ctx);
        goto after_11;
    // 0x80802BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80802BB4: bnel        $v0, $zero, L_80802BD0
    if (ctx->r2 != 0) {
        // 0x80802BB8: addiu       $s1, $zero, 0x17
        ctx->r17 = ADD32(0, 0X17);
            goto L_80802BD0;
    }
    goto skip_0;
    // 0x80802BB8: addiu       $s1, $zero, 0x17
    ctx->r17 = ADD32(0, 0X17);
    skip_0:
    // 0x80802BBC: jal         0x8008E40C
    // 0x80802BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E40C(rdram, ctx);
        goto after_12;
    // 0x80802BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80802BC4: bnel        $v0, $zero, L_80802BD4
    if (ctx->r2 != 0) {
        // 0x80802BC8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80802BD4;
    }
    goto skip_1;
    // 0x80802BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80802BCC: addiu       $s1, $zero, 0x17
    ctx->r17 = ADD32(0, 0X17);
L_80802BD0:
    // 0x80802BD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80802BD4:
    // 0x80802BD4: jal         0x80091A58
    // 0x80802BD8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_13;
    // 0x80802BD8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_13:
    // 0x80802BDC: beq         $v0, $zero, L_80802BF0
    if (ctx->r2 == 0) {
        // 0x80802BE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80802BF0;
    }
    // 0x80802BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802BE4: jal         0x8000075C
    // 0x80802BE8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8080075C_bsbtrot(rdram, ctx);
        goto after_14;
    // 0x80802BE8: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_14:
    // 0x80802BEC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80802BF0:
    // 0x80802BF0: jal         0x8008E35C
    // 0x80802BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_15;
    // 0x80802BF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80802BF8: beq         $v0, $zero, L_80802C04
    if (ctx->r2 == 0) {
        // 0x80802BFC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80802C04;
    }
    // 0x80802BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802C00: addiu       $s1, $zero, 0x2D
    ctx->r17 = ADD32(0, 0X2D);
L_80802C04:
    // 0x80802C04: jal         0x80084E80
    // 0x80802C08: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    _bamovespline_entrypoint_1(rdram, ctx);
        goto after_16;
    // 0x80802C08: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_16:
    // 0x80802C0C: beq         $v0, $zero, L_80802C18
    if (ctx->r2 == 0) {
        // 0x80802C10: nop
    
            goto L_80802C18;
    }
    // 0x80802C10: nop

    // 0x80802C14: addiu       $s1, $zero, 0x71
    ctx->r17 = ADD32(0, 0X71);
L_80802C18:
    // 0x80802C18: jal         0x80084E90
    // 0x80802C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovespline_entrypoint_3(rdram, ctx);
        goto after_17;
    // 0x80802C1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80802C20: beq         $v0, $zero, L_80802C2C
    if (ctx->r2 == 0) {
        // 0x80802C24: nop
    
            goto L_80802C2C;
    }
    // 0x80802C24: nop

    // 0x80802C28: addiu       $s1, $zero, 0x16
    ctx->r17 = ADD32(0, 0X16);
L_80802C2C:
    // 0x80802C2C: jal         0x80084E88
    // 0x80802C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovespline_entrypoint_2(rdram, ctx);
        goto after_18;
    // 0x80802C30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80802C34: beql        $v0, $zero, L_80802C78
    if (ctx->r2 == 0) {
        // 0x80802C38: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80802C78;
    }
    goto skip_2;
    // 0x80802C38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80802C3C: jal         0x80084FE8
    // 0x80802C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoes_entrypoint_2(rdram, ctx);
        goto after_19;
    // 0x80802C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80802C44: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80802C48: bne         $v0, $at, L_80802C74
    if (ctx->r2 != ctx->r1) {
        // 0x80802C4C: addiu       $s1, $zero, 0x16
        ctx->r17 = ADD32(0, 0X16);
            goto L_80802C74;
    }
    // 0x80802C4C: addiu       $s1, $zero, 0x16
    ctx->r17 = ADD32(0, 0X16);
    // 0x80802C50: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80802C54: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80802C58: jal         0x80085088
    // 0x80802C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoessuck_entrypoint_1(rdram, ctx);
        goto after_20;
    // 0x80802C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80802C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802C64: jal         0x800848A0
    // 0x80802C68: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    _badrone_entrypoint_23(rdram, ctx);
        goto after_21;
    // 0x80802C68: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_21:
    // 0x80802C6C: b           L_80802C74
    // 0x80802C70: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
        goto L_80802C74;
    // 0x80802C70: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80802C74:
    // 0x80802C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80802C78:
    // 0x80802C78: jal         0x8009E5C8
    // 0x80802C7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_22;
    // 0x80802C7C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_22:
    // 0x80802C80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80802C84: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80802C88: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80802C8C: jr          $ra
    // 0x80802C90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80802C90: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void bsbtrot_entrypoint_50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802C94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80802C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80802C9C: jal         0x80002A4C
    // 0x80802CA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80802A4C_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80802CA0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80802CA4: jal         0x8000061C
    // 0x80802CA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080061C_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80802CA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80802CAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80802CB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80802CB4: jr          $ra
    // 0x80802CB8: nop

    return;
    // 0x80802CB8: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_51(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802CBC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80802CC0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2F10) << 16);
    // 0x80802CC4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80802CC8: jr          $ra
    // 0x80802CCC: lw          $v0, 0x2F10($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2F10));
    return;
    // 0x80802CCC: lw          $v0, 0x2F10($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2F10));
;}
RECOMP_FUNC void bsbtrot_entrypoint_52(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802CD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80802CD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80802CD8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80802CDC: jal         0x80000538
    // 0x80802CE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800538_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80802CE0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80802CE4: jal         0x800029D8
    // 0x80802CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808029D8_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80802CE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80802CEC: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80802CF0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80802CF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802CF8: jal         0x8008CB3C
    // 0x80802CFC: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    func_8008CB3C(rdram, ctx);
        goto after_2;
    // 0x80802CFC: addiu       $a1, $zero, 0x86
    ctx->r5 = ADD32(0, 0X86);
    after_2:
    // 0x80802D00: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x80802D04: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80802D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802D0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80802D10: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80802D14: jal         0x8009FFD8
    // 0x80802D18: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    func_8009FFD8(rdram, ctx);
        goto after_3;
    // 0x80802D18: addiu       $a3, $zero, 0x9
    ctx->r7 = ADD32(0, 0X9);
    after_3:
    // 0x80802D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802D20: jal         0x8009B9B0
    // 0x80802D24: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80802D24: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80802D28: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80802D2C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80802D30: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80802D34: jr          $ra
    // 0x80802D38: nop

    return;
    // 0x80802D38: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_53(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802D3C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80802D40: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80802D44: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80802D48: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80802D4C: jal         0x80000120
    // 0x80802D50: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_80800120_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80802D50: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80802D54: jal         0x800004B4
    // 0x80802D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004B4_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80802D58: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80802D5C: jal         0x800850A0
    // 0x80802D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bashoessuck_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x80802D60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80802D64: jal         0x8008E40C
    // 0x80802D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E40C(rdram, ctx);
        goto after_3;
    // 0x80802D68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80802D6C: bne         $v0, $zero, L_80802D7C
    if (ctx->r2 != 0) {
        // 0x80802D70: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80802D7C;
    }
    // 0x80802D70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802D74: addiu       $t6, $zero, 0x17
    ctx->r14 = ADD32(0, 0X17);
    // 0x80802D78: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80802D7C:
    // 0x80802D7C: jal         0x800007E0
    // 0x80802D80: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_808007E0_bsbtrot(rdram, ctx);
        goto after_4;
    // 0x80802D80: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80802D84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802D88: jal         0x8009E5C8
    // 0x80802D8C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_5;
    // 0x80802D8C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_5:
    // 0x80802D90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80802D94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80802D98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80802D9C: jr          $ra
    // 0x80802DA0: nop

    return;
    // 0x80802DA0: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802DA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80802DA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80802DAC: jal         0x80002A4C
    // 0x80802DB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80802A4C_bsbtrot(rdram, ctx);
        goto after_0;
    // 0x80802DB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80802DB4: jal         0x8000061C
    // 0x80802DB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080061C_bsbtrot(rdram, ctx);
        goto after_1;
    // 0x80802DB8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80802DBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80802DC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80802DC4: jr          $ra
    // 0x80802DC8: nop

    return;
    // 0x80802DC8: nop

;}
RECOMP_FUNC void bsbtrot_entrypoint_55(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802DCC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80802DD0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(86, 0X2F20) << 16);
    // 0x80802DD4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80802DD8: jr          $ra
    // 0x80802DDC: lw          $v0, 0x2F20($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2F20));
    return;
    // 0x80802DDC: lw          $v0, 0x2F20($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(86, 0X2F20));
;}
RECOMP_FUNC void func_80800000_bsbwhirl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: sw          $zero, 0x160($a0)
    MEM_W(0X160, ctx->r4) = 0;
    return;
    // 0x80800004: sw          $zero, 0x160($a0)
    MEM_W(0X160, ctx->r4) = 0;
;}
RECOMP_FUNC void func_80800008_bsbwhirl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8080000C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800014: jal         0x800BF8E4
    // 0x80800018: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800BF8E4(rdram, ctx);
        goto after_0;
    // 0x80800018: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080001C: blezl       $v0, L_808000C8
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80800020: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808000C8;
    }
    goto skip_0;
    // 0x80800020: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800024: lw          $t6, 0x160($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X160);
    // 0x80800028: bnel        $t6, $zero, L_8080006C
    if (ctx->r14 != 0) {
        // 0x8080002C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080006C;
    }
    goto skip_1;
    // 0x8080002C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800030: jal         0x800C8A98
    // 0x80800034: nop

    func_800C8A98(rdram, ctx);
        goto after_1;
    // 0x80800034: nop

    after_1:
    // 0x80800038: sw          $v0, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r2;
    // 0x8080003C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800040: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80800044: jal         0x800C8E54
    // 0x80800048: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    func_800C8E54(rdram, ctx);
        goto after_2;
    // 0x80800048: lui         $a2, 0x43AF
    ctx->r6 = S32(0X43AF << 16);
    after_2:
    // 0x8080004C: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    // 0x80800050: jal         0x800C8F64
    // 0x80800054: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_800C8F64(rdram, ctx);
        goto after_3;
    // 0x80800054: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_3:
    // 0x80800058: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(87, 0XF50) << 16);
    // 0x8080005C: addiu       $a1, $a1, 0xF50
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(87, 0XF50));
    // 0x80800060: jal         0x800C8E84
    // 0x80800064: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    func_800C8E84(rdram, ctx);
        goto after_4;
    // 0x80800064: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    after_4:
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080006C:
    // 0x8080006C: jal         0x80092B8C
    // 0x80800070: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_80092B8C(rdram, ctx);
        goto after_5;
    // 0x80800070: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_5:
    // 0x80800074: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80800078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080007C: jal         0x8009C128
    // 0x80800080: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_8009C128(rdram, ctx);
        goto after_6;
    // 0x80800080: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x80800084: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80800088: jal         0x800EF04C
    // 0x8080008C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800EF04C(rdram, ctx);
        goto after_7;
    // 0x8080008C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_7:
    // 0x80800090: jal         0x80092BE8
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092BE8(rdram, ctx);
        goto after_8;
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800098: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080009C: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x808000A0: jal         0x800EF1B8
    // 0x808000A4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    func_800EF1B8(rdram, ctx);
        goto after_9;
    // 0x808000A4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x808000A8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808000AC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808000B0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x808000B4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x808000B8: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x808000BC: jal         0x800C8CB8
    // 0x808000C0: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    func_800C8CB8(rdram, ctx);
        goto after_10;
    // 0x808000C0: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    after_10:
    // 0x808000C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000C8:
    // 0x808000C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000CC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808000D0: jr          $ra
    // 0x808000D4: nop

    return;
    // 0x808000D4: nop

;}
RECOMP_FUNC void func_808000D8_bsbwhirl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000E4: lw          $a3, 0x160($a0)
    ctx->r7 = MEM_W(ctx->r4, 0X160);
    // 0x808000E8: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    // 0x808000EC: beq         $a3, $zero, L_80800104
    if (ctx->r7 == 0) {
        // 0x808000F0: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80800104;
    }
    // 0x808000F0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x808000F4: jal         0x800863E8
    // 0x808000F8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    _chlightfader_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808000F8: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x808000FC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800100: sw          $v0, 0x160($t7)
    MEM_W(0X160, ctx->r15) = ctx->r2;
L_80800104:
    // 0x80800104: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800108: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080010C: jr          $ra
    // 0x80800110: nop

    return;
    // 0x80800110: nop

;}
RECOMP_FUNC void func_80800114_bsbwhirl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800114: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080011C: jal         0x8009EF1C
    // 0x80800120: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x80800120: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800124: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80800128: jal         0x8009EF10
    // 0x8080012C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x8080012C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800130: bne         $v0, $zero, L_8080014C
    if (ctx->r2 != 0) {
        // 0x80800134: lwc1        $f12, 0x1C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_8080014C;
    }
    // 0x80800134: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800138: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080013C: jal         0x8009B9B0
    // 0x80800140: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800140: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800144: b           L_80800170
    // 0x80800148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800170;
    // 0x80800148: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080014C:
    // 0x8080014C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80800150: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800154: lui         $a2, 0x43D4
    ctx->r6 = S32(0X43D4 << 16);
    // 0x80800158: jal         0x800F1214
    // 0x8080015C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x8080015C: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    after_3:
    // 0x80800160: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800164: jal         0x8009B9B0
    // 0x80800168: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800168: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x8080016C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800170:
    // 0x80800170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800174: jr          $ra
    // 0x80800178: nop

    return;
    // 0x80800178: nop

;}
RECOMP_FUNC void func_8080017C_bsbwhirl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080017C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800180: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800184: jal         0x8009E704
    // 0x80800188: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E704(rdram, ctx);
        goto after_0;
    // 0x80800188: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080018C: addiu       $at, $zero, 0x1B
    ctx->r1 = ADD32(0, 0X1B);
    // 0x80800190: beq         $v0, $at, L_808001E4
    if (ctx->r2 == ctx->r1) {
        // 0x80800194: addiu       $at, $zero, 0x1C
        ctx->r1 = ADD32(0, 0X1C);
            goto L_808001E4;
    }
    // 0x80800194: addiu       $at, $zero, 0x1C
    ctx->r1 = ADD32(0, 0X1C);
    // 0x80800198: beq         $v0, $at, L_808001E4
    if (ctx->r2 == ctx->r1) {
        // 0x8080019C: addiu       $at, $zero, 0x1D
        ctx->r1 = ADD32(0, 0X1D);
            goto L_808001E4;
    }
    // 0x8080019C: addiu       $at, $zero, 0x1D
    ctx->r1 = ADD32(0, 0X1D);
    // 0x808001A0: beq         $v0, $at, L_808001E4
    if (ctx->r2 == ctx->r1) {
        // 0x808001A4: addiu       $at, $zero, 0x1E
        ctx->r1 = ADD32(0, 0X1E);
            goto L_808001E4;
    }
    // 0x808001A4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x808001A8: beq         $v0, $at, L_808001E4
    if (ctx->r2 == ctx->r1) {
        // 0x808001AC: addiu       $at, $zero, 0xA4
        ctx->r1 = ADD32(0, 0XA4);
            goto L_808001E4;
    }
    // 0x808001AC: addiu       $at, $zero, 0xA4
    ctx->r1 = ADD32(0, 0XA4);
    // 0x808001B0: beq         $v0, $at, L_808001E4
    if (ctx->r2 == ctx->r1) {
        // 0x808001B4: addiu       $at, $zero, 0xA5
        ctx->r1 = ADD32(0, 0XA5);
            goto L_808001E4;
    }
    // 0x808001B4: addiu       $at, $zero, 0xA5
    ctx->r1 = ADD32(0, 0XA5);
    // 0x808001B8: beql        $v0, $at, L_808001E8
    if (ctx->r2 == ctx->r1) {
        // 0x808001BC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808001E8;
    }
    goto skip_0;
    // 0x808001BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x808001C0: jal         0x8009F1E0
    // 0x808001C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009F1E0(rdram, ctx);
        goto after_1;
    // 0x808001C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808001C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001CC: jal         0x800A0CF4
    // 0x808001D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_2;
    // 0x808001D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808001D4: jal         0x800FC74C
    // 0x808001D8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    func_800FC74C(rdram, ctx);
        goto after_3;
    // 0x808001D8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    after_3:
    // 0x808001DC: jal         0x800000D8
    // 0x808001E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000D8_bsbwhirl(rdram, ctx);
        goto after_4;
    // 0x808001E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
L_808001E4:
    // 0x808001E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_808001E8:
    // 0x808001E8: jal         0x8008CA4C
    // 0x808001EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_5;
    // 0x808001EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x808001F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001F8: jr          $ra
    // 0x808001FC: nop

    return;
    // 0x808001FC: nop

;}
RECOMP_FUNC void func_80800200_bsbwhirl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800200: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80800204: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800208: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8080020C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800210: jal         0x8009C128
    // 0x80800214: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800214: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_0:
    // 0x80800218: jal         0x8009C984
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_1;
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800220: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800224: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80800228: jal         0x800EFCD8
    // 0x8080022C: lui         $a2, 0x4240
    ctx->r6 = S32(0X4240 << 16);
    func_800EFCD8(rdram, ctx);
        goto after_2;
    // 0x8080022C: lui         $a2, 0x4240
    ctx->r6 = S32(0X4240 << 16);
    after_2:
    // 0x80800230: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800234: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80800238: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x8080023C: jal         0x800EF04C
    // 0x80800240: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x80800240: swc1        $f4, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80800244: jal         0x800B5BE4
    // 0x80800248: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    func_800B5BE4(rdram, ctx);
        goto after_4;
    // 0x80800248: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    after_4:
    // 0x8080024C: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(87, 0XF5C) << 16);
    // 0x80800250: addiu       $t6, $t6, 0xF5C
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(87, 0XF5C));
    // 0x80800254: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80800258: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080025C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800260: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80800264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800268: jal         0x800BABB8
    // 0x8080026C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_5;
    // 0x8080026C: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_5:
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800274: jal         0x8009BB24
    // 0x80800278: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_8009BB24(rdram, ctx);
        goto after_6;
    // 0x80800278: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_6:
    // 0x8080027C: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x80800280: lw          $a1, 0x170($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X170);
    // 0x80800284: jal         0x800EFCD8
    // 0x80800288: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    func_800EFCD8(rdram, ctx);
        goto after_7;
    // 0x80800288: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    after_7:
    // 0x8080028C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80800290: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800294: lwc1        $f6, 0x170($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X170);
    // 0x80800298: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x8080029C: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    // 0x808002A0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x808002A4: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x808002A8: jal         0x800EFCD8
    // 0x808002AC: nop

    func_800EFCD8(rdram, ctx);
        goto after_8;
    // 0x808002AC: nop

    after_8:
    // 0x808002B0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808002B4: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x808002B8: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    // 0x808002BC: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x808002C0: jal         0x800EF04C
    // 0x808002C4: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    func_800EF04C(rdram, ctx);
        goto after_9;
    // 0x808002C4: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x808002C8: addiu       $a0, $sp, 0x48
    ctx->r4 = ADD32(ctx->r29, 0X48);
    // 0x808002CC: jal         0x800EF04C
    // 0x808002D0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    func_800EF04C(rdram, ctx);
        goto after_10;
    // 0x808002D0: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_10:
    // 0x808002D4: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x808002D8: lwc1        $f12, 0x54($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X54);
    // 0x808002DC: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x808002E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x808002E4: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x808002E8: nop

    // 0x808002EC: bc1fl       L_80800300
    if (!c1cs) {
        // 0x808002F0: lwc1        $f2, 0x50($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X50);
            goto L_80800300;
    }
    goto skip_0;
    // 0x808002F0: lwc1        $f2, 0x50($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X50);
    skip_0:
    // 0x808002F4: swc1        $f12, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f12.u32l;
    // 0x808002F8: swc1        $f2, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f2.u32l;
    // 0x808002FC: lwc1        $f2, 0x50($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X50);
L_80800300:
    // 0x80800300: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80800304: c.lt.s      $f2, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f2.fl < ctx->f12.fl;
    // 0x80800308: nop

    // 0x8080030C: bc1fl       L_80800320
    if (!c1cs) {
        // 0x80800310: lwc1        $f16, 0x170($s0)
        ctx->f16.u32l = MEM_W(ctx->r16, 0X170);
            goto L_80800320;
    }
    goto skip_1;
    // 0x80800310: lwc1        $f16, 0x170($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X170);
    skip_1:
    // 0x80800314: swc1        $f12, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f12.u32l;
    // 0x80800318: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    // 0x8080031C: lwc1        $f16, 0x170($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X170);
L_80800320:
    // 0x80800320: jal         0x800136E4
    // 0x80800324: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    func_800136E4(rdram, ctx);
        goto after_11;
    // 0x80800324: add.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl + ctx->f18.fl;
    after_11:
    // 0x80800328: swc1        $f0, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f0.u32l;
    // 0x8080032C: lwc1        $f4, 0x54($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X54);
    // 0x80800330: lwc1        $f8, 0x5C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80800334: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80800338: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8080033C: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80800340: addiu       $t5, $zero, 0xFA
    ctx->r13 = ADD32(0, 0XFA);
    // 0x80800344: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80800348: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8080034C: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80800350: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80800354: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80800358: sll         $t8, $a1, 16
    ctx->r24 = S32(ctx->r5 << 16);
    // 0x8080035C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80800360: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x80800364: sll         $t1, $a3, 16
    ctx->r9 = S32(ctx->r7 << 16);
    // 0x80800368: sra         $a3, $t1, 16
    ctx->r7 = S32(SIGNED(ctx->r9) >> 16);
    // 0x8080036C: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80800370: sra         $a1, $t8, 16
    ctx->r5 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80800374: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800378: addiu       $a2, $zero, 0xFA
    ctx->r6 = ADD32(0, 0XFA);
    // 0x8080037C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80800380: jal         0x800BA930
    // 0x80800384: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_800BA930(rdram, ctx);
        goto after_12;
    // 0x80800384: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_12:
    // 0x80800388: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x8080038C: jal         0x800BA22C
    // 0x80800390: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800BA22C(rdram, ctx);
        goto after_13;
    // 0x80800390: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
    // 0x80800394: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800398: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8080039C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x808003A0: jr          $ra
    // 0x808003A4: nop

    return;
    // 0x808003A4: nop

;}
RECOMP_FUNC void func_808003A8_bsbwhirl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808003AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003B0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808003B4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808003B8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808003BC: jal         0x8009EF10
    // 0x808003C0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    func_8009EF10(rdram, ctx);
        goto after_0;
    // 0x808003C0: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    after_0:
    // 0x808003C4: blez        $v0, L_808003D0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x808003C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003D0;
    }
    // 0x808003C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003CC: addiu       $s1, $zero, 0x1C
    ctx->r17 = ADD32(0, 0X1C);
L_808003D0:
    // 0x808003D0: jal         0x80091A30
    // 0x808003D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A30(rdram, ctx);
        goto after_1;
    // 0x808003D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808003D8: beq         $v0, $zero, L_808003E4
    if (ctx->r2 == 0) {
        // 0x808003DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003E4;
    }
    // 0x808003DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003E0: addiu       $s1, $zero, 0x1E
    ctx->r17 = ADD32(0, 0X1E);
L_808003E4:
    // 0x808003E4: jal         0x80091A58
    // 0x808003E8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_2;
    // 0x808003E8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x808003EC: beq         $v0, $zero, L_80800408
    if (ctx->r2 == 0) {
        // 0x808003F0: nop
    
            goto L_80800408;
    }
    // 0x808003F0: nop

    // 0x808003F4: jal         0x8008E078
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_3;
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808003FC: beq         $v0, $zero, L_80800408
    if (ctx->r2 == 0) {
        // 0x80800400: nop
    
            goto L_80800408;
    }
    // 0x80800400: nop

    // 0x80800404: addiu       $s1, $zero, 0x1D
    ctx->r17 = ADD32(0, 0X1D);
L_80800408:
    // 0x80800408: jal         0x8008E35C
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_4;
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800410: beq         $v0, $zero, L_8080041C
    if (ctx->r2 == 0) {
        // 0x80800414: lw          $s0, 0x14($sp)
        ctx->r16 = MEM_W(ctx->r29, 0X14);
            goto L_8080041C;
    }
    // 0x80800414: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800418: addiu       $s1, $zero, 0x2D
    ctx->r17 = ADD32(0, 0X2D);
L_8080041C:
    // 0x8080041C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800420: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80800424: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800428: jr          $ra
    // 0x8080042C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8080042C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80800430_bsbwhirl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800430: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800434: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800438: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080043C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800440: jal         0x800D8FF8
    // 0x80800444: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x80800444: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800448: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x8080044C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80800450: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800454: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80800458: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    // 0x8080045C: addiu       $a2, $zero, -0x1
    ctx->r6 = ADD32(0, -0X1);
    // 0x80800460: swc1        $f6, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f6.u32l;
    // 0x80800464: lwc1        $f10, 0x16C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800468: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8080046C: nop

    // 0x80800470: bc1fl       L_808004CC
    if (!c1cs) {
        // 0x80800474: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_808004CC;
    }
    goto skip_0;
    // 0x80800474: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800478: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8080047C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800480: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    // 0x80800484: swc1        $f16, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f16.u32l;
    // 0x80800488: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080048C: jal         0x8008A690
    // 0x80800490: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    _suinv_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800490: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x80800494: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80800498: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8080049C: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808004A0: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x808004A4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808004A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004AC: beq         $t8, $at, L_808004C8
    if (ctx->r24 == ctx->r1) {
        // 0x808004B0: addiu       $a1, $zero, 0x3E9
        ctx->r5 = ADD32(0, 0X3E9);
            goto L_808004C8;
    }
    // 0x808004B0: addiu       $a1, $zero, 0x3E9
    ctx->r5 = ADD32(0, 0X3E9);
    // 0x808004B4: jal         0x8009DF18
    // 0x808004B8: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DF18(rdram, ctx);
        goto after_2;
    // 0x808004B8: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_2:
    // 0x808004BC: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    // 0x808004C0: jal         0x80085948
    // 0x808004C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _chusefeather_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x808004C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_808004C8:
    // 0x808004C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808004CC:
    // 0x808004CC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808004D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808004D4: jr          $ra
    // 0x808004D8: nop

    return;
    // 0x808004D8: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808004E0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808004E4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808004E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808004EC: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    // 0x808004F0: jal         0x8008CDB8
    // 0x808004F4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8008CDB8(rdram, ctx);
        goto after_0;
    // 0x808004F4: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_0:
    // 0x808004F8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808004FC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800504: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800508: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080050C: jal         0x8009FFD8
    // 0x80800510: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800510: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80800514: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800518: jal         0x8009B9B0
    // 0x8080051C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x8080051C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800520: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x80800524: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080052C: jal         0x8009F1C8
    // 0x80800530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_3;
    // 0x80800530: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800538: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080053C: jal         0x8009F1C8
    // 0x80800540: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_4;
    // 0x80800540: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
    // 0x80800544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800548: jal         0x800A0CF4
    // 0x8080054C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_5;
    // 0x8080054C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800550: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80800554: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x80800558: swc1        $f0, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f0.u32l;
    // 0x8080055C: jal         0x800FC660
    // 0x80800560: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    func_800FC660(rdram, ctx);
        goto after_6;
    // 0x80800560: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    after_6:
    // 0x80800564: jal         0x80000000
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsbwhirl(rdram, ctx);
        goto after_7;
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080056C: jal         0x8009D874
    // 0x80800570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D874(rdram, ctx);
        goto after_8;
    // 0x80800570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800578: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080057C: jal         0x80098140
    // 0x80800580: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098140(rdram, ctx);
        goto after_9;
    // 0x80800580: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80800584: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800588: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080058C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800590: jr          $ra
    // 0x80800594: nop

    return;
    // 0x80800594: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800598: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080059C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005A0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808005A4: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x808005A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808005AC: jal         0x80098140
    // 0x808005B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098140(rdram, ctx);
        goto after_0;
    // 0x808005B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x808005B4: jal         0x8008CABC
    // 0x808005B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008CABC(rdram, ctx);
        goto after_1;
    // 0x808005B8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808005BC: jal         0x8008B324
    // 0x808005C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B324(rdram, ctx);
        goto after_2;
    // 0x808005C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x808005C4: beq         $v0, $zero, L_808005D0
    if (ctx->r2 == 0) {
        // 0x808005C8: addiu       $t6, $zero, 0x1B
        ctx->r14 = ADD32(0, 0X1B);
            goto L_808005D0;
    }
    // 0x808005C8: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x808005CC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_808005D0:
    // 0x808005D0: jal         0x80000008
    // 0x808005D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800008_bsbwhirl(rdram, ctx);
        goto after_3;
    // 0x808005D4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x808005D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808005DC: jal         0x8009E5C8
    // 0x808005E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x808005E0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_4:
    // 0x808005E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808005EC: jr          $ra
    // 0x808005F0: nop

    return;
    // 0x808005F0: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800600: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800604: jal         0x80098140
    // 0x80800608: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098140(rdram, ctx);
        goto after_0;
    // 0x80800608: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8080060C: jal         0x8000017C
    // 0x80800610: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080017C_bsbwhirl(rdram, ctx);
        goto after_1;
    // 0x80800610: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800618: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080061C: jr          $ra
    // 0x80800620: nop

    return;
    // 0x80800620: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800624: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800628: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(87, 0XF98) << 16);
    // 0x8080062C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800630: jr          $ra
    // 0x80800634: lw          $v0, 0xF98($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XF98));
    return;
    // 0x80800634: lw          $v0, 0xF98($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XF98));
;}
RECOMP_FUNC void bsbwhirl_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800638: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080063C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800640: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800644: addiu       $a1, $zero, 0x23
    ctx->r5 = ADD32(0, 0X23);
    // 0x80800648: jal         0x8008CB3C
    // 0x8080064C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x8080064C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
    // 0x80800650: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800654: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800658: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080065C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800660: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800664: jal         0x8009FFD8
    // 0x80800668: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800668: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8080066C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800670: jal         0x8009B9B0
    // 0x80800674: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800674: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800678: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080067C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800680: jr          $ra
    // 0x80800684: nop

    return;
    // 0x80800684: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800688: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080068C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800690: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800694: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800698: jal         0x80000200
    // 0x8080069C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_80800200_bsbwhirl(rdram, ctx);
        goto after_0;
    // 0x8080069C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808006A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006A4: jal         0x800003A8
    // 0x808006A8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_808003A8_bsbwhirl(rdram, ctx);
        goto after_1;
    // 0x808006A8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x808006AC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808006B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006B4: jal         0x80000430
    // 0x808006B8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80800430_bsbwhirl(rdram, ctx);
        goto after_2;
    // 0x808006B8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_2:
    // 0x808006BC: jal         0x80000008
    // 0x808006C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800008_bsbwhirl(rdram, ctx);
        goto after_3;
    // 0x808006C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808006C4: jal         0x8008E148
    // 0x808006C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_4;
    // 0x808006C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808006CC: beq         $v0, $zero, L_808006E0
    if (ctx->r2 == 0) {
        // 0x808006D0: nop
    
            goto L_808006E0;
    }
    // 0x808006D0: nop

    // 0x808006D4: jal         0x800848B0
    // 0x808006D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_5;
    // 0x808006D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808006DC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_808006E0:
    // 0x808006E0: jal         0x8008E35C
    // 0x808006E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_6;
    // 0x808006E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808006E8: beq         $v0, $zero, L_808006F8
    if (ctx->r2 == 0) {
        // 0x808006EC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808006F8;
    }
    // 0x808006EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006F0: addiu       $t6, $zero, 0x4C
    ctx->r14 = ADD32(0, 0X4C);
    // 0x808006F4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808006F8:
    // 0x808006F8: jal         0x8009E5C8
    // 0x808006FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x808006FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x80800700: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800704: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800708: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080070C: jr          $ra
    // 0x80800710: nop

    return;
    // 0x80800710: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800714: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800718: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080071C: jal         0x8000017C
    // 0x80800720: nop

    func_8080017C_bsbwhirl(rdram, ctx);
        goto after_0;
    // 0x80800720: nop

    after_0:
    // 0x80800724: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800728: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080072C: jr          $ra
    // 0x80800730: nop

    return;
    // 0x80800730: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800734: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800738: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(87, 0XFA8) << 16);
    // 0x8080073C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800740: jr          $ra
    // 0x80800744: lw          $v0, 0xFA8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XFA8));
    return;
    // 0x80800744: lw          $v0, 0xFA8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XFA8));
;}
RECOMP_FUNC void bsbwhirl_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800748: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080074C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800750: lui         $a2, 0x3F07
    ctx->r6 = S32(0X3F07 << 16);
    // 0x80800754: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800758: ori         $a2, $a2, 0xAE14
    ctx->r6 = ctx->r6 | 0XAE14;
    // 0x8080075C: jal         0x8008CB3C
    // 0x80800760: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x80800760: addiu       $a1, $zero, 0x11
    ctx->r5 = ADD32(0, 0X11);
    after_0:
    // 0x80800764: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(87, 0XF40) << 16);
    // 0x80800768: lwc1        $f4, 0xF40($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(87, 0XF40));
    // 0x8080076C: lui         $a2, 0x43D4
    ctx->r6 = S32(0X43D4 << 16);
    // 0x80800770: lui         $a3, 0x3F0F
    ctx->r7 = S32(0X3F0F << 16);
    // 0x80800774: ori         $a3, $a3, 0x5C29
    ctx->r7 = ctx->r7 | 0X5C29;
    // 0x80800778: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x8080077C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800780: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80800784: jal         0x8008C9F0
    // 0x80800788: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_1;
    // 0x80800788: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8080078C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800790: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800794: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800798: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8080079C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808007A0: jal         0x8009FFD8
    // 0x808007A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808007A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x808007A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808007AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808007B0: jr          $ra
    // 0x808007B4: nop

    return;
    // 0x808007B4: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808007BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808007C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808007C4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808007C8: jal         0x80000200
    // 0x808007CC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_80800200_bsbwhirl(rdram, ctx);
        goto after_0;
    // 0x808007CC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808007D0: lui         $a1, 0x3EF0
    ctx->r5 = S32(0X3EF0 << 16);
    // 0x808007D4: ori         $a1, $a1, 0xA3D7
    ctx->r5 = ctx->r5 | 0XA3D7;
    // 0x808007D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007DC: jal         0x800A2CE8
    // 0x808007E0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_1;
    // 0x808007E0: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x808007E4: lui         $a1, 0x3F78
    ctx->r5 = S32(0X3F78 << 16);
    // 0x808007E8: ori         $a1, $a1, 0x51EC
    ctx->r5 = ctx->r5 | 0X51EC;
    // 0x808007EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007F0: jal         0x800A2CE8
    // 0x808007F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_2;
    // 0x808007F4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x808007F8: jal         0x80000114
    // 0x808007FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800114_bsbwhirl(rdram, ctx);
        goto after_3;
    // 0x808007FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800800: jal         0x8009EF10
    // 0x80800804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_4;
    // 0x80800804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800808: bne         $v0, $zero, L_80800824
    if (ctx->r2 != 0) {
        // 0x8080080C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800824;
    }
    // 0x8080080C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800810: jal         0x8009BCD4
    // 0x80800814: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_5;
    // 0x80800814: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_5:
    // 0x80800818: beq         $v0, $zero, L_80800824
    if (ctx->r2 == 0) {
        // 0x8080081C: addiu       $t6, $zero, 0x1B
        ctx->r14 = ADD32(0, 0X1B);
            goto L_80800824;
    }
    // 0x8080081C: addiu       $t6, $zero, 0x1B
    ctx->r14 = ADD32(0, 0X1B);
    // 0x80800820: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800824:
    // 0x80800824: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800828: jal         0x80091A30
    // 0x8080082C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A30(rdram, ctx);
        goto after_6;
    // 0x8080082C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80800830: beq         $v0, $zero, L_80800840
    if (ctx->r2 == 0) {
        // 0x80800834: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800840;
    }
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800838: addiu       $t7, $zero, 0x1E
    ctx->r15 = ADD32(0, 0X1E);
    // 0x8080083C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80800840:
    // 0x80800840: jal         0x80091A58
    // 0x80800844: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_7;
    // 0x80800844: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_7:
    // 0x80800848: beq         $v0, $zero, L_80800864
    if (ctx->r2 == 0) {
        // 0x8080084C: nop
    
            goto L_80800864;
    }
    // 0x8080084C: nop

    // 0x80800850: jal         0x8008E078
    // 0x80800854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_8;
    // 0x80800854: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800858: beq         $v0, $zero, L_80800864
    if (ctx->r2 == 0) {
        // 0x8080085C: addiu       $t8, $zero, 0x1D
        ctx->r24 = ADD32(0, 0X1D);
            goto L_80800864;
    }
    // 0x8080085C: addiu       $t8, $zero, 0x1D
    ctx->r24 = ADD32(0, 0X1D);
    // 0x80800860: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80800864:
    // 0x80800864: jal         0x8008E35C
    // 0x80800868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_9;
    // 0x80800868: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080086C: beq         $v0, $zero, L_8080087C
    if (ctx->r2 == 0) {
        // 0x80800870: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080087C;
    }
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800874: addiu       $t9, $zero, 0x4C
    ctx->r25 = ADD32(0, 0X4C);
    // 0x80800878: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_8080087C:
    // 0x8080087C: jal         0x80000430
    // 0x80800880: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80800430_bsbwhirl(rdram, ctx);
        goto after_10;
    // 0x80800880: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_10:
    // 0x80800884: jal         0x80000008
    // 0x80800888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800008_bsbwhirl(rdram, ctx);
        goto after_11;
    // 0x80800888: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080088C: jal         0x8008E148
    // 0x80800890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_12;
    // 0x80800890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800894: beql        $v0, $zero, L_808008AC
    if (ctx->r2 == 0) {
        // 0x80800898: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008AC;
    }
    goto skip_0;
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080089C: jal         0x800848B0
    // 0x808008A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_13;
    // 0x808008A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808008A4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808008A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808008AC:
    // 0x808008AC: jal         0x8009E5C8
    // 0x808008B0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_14;
    // 0x808008B0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_14:
    // 0x808008B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808008B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808008BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808008C0: jr          $ra
    // 0x808008C4: nop

    return;
    // 0x808008C4: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808008D0: jal         0x8000017C
    // 0x808008D4: nop

    func_8080017C_bsbwhirl(rdram, ctx);
        goto after_0;
    // 0x808008D4: nop

    after_0:
    // 0x808008D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008E0: jr          $ra
    // 0x808008E4: nop

    return;
    // 0x808008E4: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008E8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808008EC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(87, 0XFB8) << 16);
    // 0x808008F0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808008F4: jr          $ra
    // 0x808008F8: lw          $v0, 0xFB8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XFB8));
    return;
    // 0x808008F8: lw          $v0, 0xFB8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XFB8));
;}
RECOMP_FUNC void bsbwhirl_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008FC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800900: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800904: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800908: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8080090C: jal         0x8008CABC
    // 0x80800910: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800910: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800914: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800918: jal         0x8008AF24
    // 0x8080091C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x8080091C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800924: jal         0x8008AED4
    // 0x80800928: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x80800928: addiu       $a1, $zero, 0x1B
    ctx->r5 = ADD32(0, 0X1B);
    after_2:
    // 0x8080092C: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x80800930: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800934: jal         0x8008B1BC
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080093C: lui         $a1, 0x3E09
    ctx->r5 = S32(0X3E09 << 16);
    // 0x80800940: ori         $a1, $a1, 0x374C
    ctx->r5 = ctx->r5 | 0X374C;
    // 0x80800944: jal         0x8008B1C8
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_4;
    // 0x80800948: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080094C: lui         $a1, 0x3E0F
    ctx->r5 = S32(0X3E0F << 16);
    // 0x80800950: ori         $a1, $a1, 0x5C29
    ctx->r5 = ctx->r5 | 0X5C29;
    // 0x80800954: jal         0x8008B24C
    // 0x80800958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_5;
    // 0x80800958: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080095C: lui         $a2, 0x3EE6
    ctx->r6 = S32(0X3EE6 << 16);
    // 0x80800960: ori         $a2, $a2, 0x24DD
    ctx->r6 = ctx->r6 | 0X24DD;
    // 0x80800964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800968: jal         0x8008B1D4
    // 0x8080096C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_6;
    // 0x8080096C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800974: jal         0x8008B134
    // 0x80800978: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x80800978: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x8080097C: jal         0x8008B064
    // 0x80800980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x80800980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800984: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800988: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080098C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800990: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800994: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800998: jal         0x8009FFD8
    // 0x8080099C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_9;
    // 0x8080099C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_9:
    // 0x808009A0: jal         0x8009EF04
    // 0x808009A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF04(rdram, ctx);
        goto after_10;
    // 0x808009A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_10:
    // 0x808009A8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808009AC: nop

    // 0x808009B0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x808009B4: nop

    // 0x808009B8: bc1t        L_808009D4
    if (c1cs) {
        // 0x808009BC: nop
    
            goto L_808009D4;
    }
    // 0x808009BC: nop

    // 0x808009C0: jal         0x8009EEB8
    // 0x808009C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_11;
    // 0x808009C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x808009C8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808009CC: jal         0x8009C914
    // 0x808009D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_12;
    // 0x808009D0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
L_808009D4:
    // 0x808009D4: jal         0x8009C990
    // 0x808009D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_13;
    // 0x808009D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
    // 0x808009DC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808009E0: jal         0x8009B9C0
    // 0x808009E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_14;
    // 0x808009E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x808009E8: jal         0x80000114
    // 0x808009EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800114_bsbwhirl(rdram, ctx);
        goto after_15;
    // 0x808009EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x808009F0: jal         0x8009C990
    // 0x808009F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_16;
    // 0x808009F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x808009F8: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808009FC: jal         0x8009BB00
    // 0x80800A00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB00(rdram, ctx);
        goto after_17;
    // 0x80800A00: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x80800A04: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800A08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800A0C: jal         0x8009BA68
    // 0x80800A10: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_18;
    // 0x80800A10: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x80800A14: lui         $a1, 0x442D
    ctx->r5 = S32(0X442D << 16);
    // 0x80800A18: ori         $a1, $a1, 0x6000
    ctx->r5 = ctx->r5 | 0X6000;
    // 0x80800A1C: jal         0x8009BA58
    // 0x80800A20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BA58(rdram, ctx);
        goto after_19;
    // 0x80800A20: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_19:
    // 0x80800A24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800A28: jal         0x8009BCB4
    // 0x80800A2C: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_20;
    // 0x80800A2C: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_20:
    // 0x80800A30: lui         $a1, 0x3F68
    ctx->r5 = S32(0X3F68 << 16);
    // 0x80800A34: lui         $a2, 0x3F8B
    ctx->r6 = S32(0X3F8B << 16);
    // 0x80800A38: ori         $a2, $a2, 0x851F
    ctx->r6 = ctx->r6 | 0X851F;
    // 0x80800A3C: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    // 0x80800A40: jal         0x8009D7A4
    // 0x80800A44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009D7A4(rdram, ctx);
        goto after_21;
    // 0x80800A44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_21:
    // 0x80800A48: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x80800A4C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800A50: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800A54: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A58: jr          $ra
    // 0x80800A5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80800A5C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void bsbwhirl_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A60: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800A64: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800A68: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800A6C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800A70: jal         0x8008CABC
    // 0x80800A74: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800A74: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80800A78: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800A7C: jal         0x80000200
    // 0x80800A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800200_bsbwhirl(rdram, ctx);
        goto after_1;
    // 0x80800A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800A84: jal         0x80000114
    // 0x80800A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800114_bsbwhirl(rdram, ctx);
        goto after_2;
    // 0x80800A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A90: jal         0x8009BB24
    // 0x80800A94: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_8009BB24(rdram, ctx);
        goto after_3;
    // 0x80800A94: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_3:
    // 0x80800A98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A9C: jal         0x80091A30
    // 0x80800AA0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_4;
    // 0x80800AA0: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_4:
    // 0x80800AA4: beq         $v0, $zero, L_80800ACC
    if (ctx->r2 == 0) {
        // 0x80800AA8: lwc1        $f6, 0x28($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
            goto L_80800ACC;
    }
    // 0x80800AA8: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800AAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800AB0: nop

    // 0x80800AB4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800AB8: nop

    // 0x80800ABC: bc1fl       L_80800AD0
    if (!c1cs) {
        // 0x80800AC0: lw          $v0, 0x15C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X15C);
            goto L_80800AD0;
    }
    goto skip_0;
    // 0x80800AC0: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    skip_0:
    // 0x80800AC4: jal         0x8009BC6C
    // 0x80800AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_5;
    // 0x80800AC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_80800ACC:
    // 0x80800ACC: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
L_80800AD0:
    // 0x80800AD0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AD8: beq         $v0, $zero, L_80800AF8
    if (ctx->r2 == 0) {
        // 0x80800ADC: nop
    
            goto L_80800AF8;
    }
    // 0x80800ADC: nop

    // 0x80800AE0: beq         $v0, $at, L_80800B3C
    if (ctx->r2 == ctx->r1) {
        // 0x80800AE4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800B3C;
    }
    // 0x80800AE4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800AE8: beq         $v0, $at, L_80800B74
    if (ctx->r2 == ctx->r1) {
        // 0x80800AEC: nop
    
            goto L_80800B74;
    }
    // 0x80800AEC: nop

    // 0x80800AF0: b           L_80800B9C
    // 0x80800AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800B9C;
    // 0x80800AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800AF8:
    // 0x80800AF8: jal         0x8008DF8C
    // 0x80800AFC: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_6;
    // 0x80800AFC: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_6:
    // 0x80800B00: beq         $v0, $zero, L_80800B98
    if (ctx->r2 == 0) {
        // 0x80800B04: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_80800B98;
    }
    // 0x80800B04: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800B08: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80800B0C: jal         0x8008B1D4
    // 0x80800B10: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_7;
    // 0x80800B10: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_7:
    // 0x80800B14: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x80800B18: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800B1C: jal         0x8008B1BC
    // 0x80800B20: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B1BC(rdram, ctx);
        goto after_8;
    // 0x80800B20: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_8:
    // 0x80800B24: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800B28: jal         0x8008B134
    // 0x80800B2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_9;
    // 0x80800B2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80800B30: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800B34: b           L_80800B98
    // 0x80800B38: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_80800B98;
    // 0x80800B38: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800B3C:
    // 0x80800B3C: jal         0x8008E35C
    // 0x80800B40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_10;
    // 0x80800B40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800B44: beq         $v0, $zero, L_80800B50
    if (ctx->r2 == 0) {
        // 0x80800B48: addiu       $t7, $zero, 0x2D
        ctx->r15 = ADD32(0, 0X2D);
            goto L_80800B50;
    }
    // 0x80800B48: addiu       $t7, $zero, 0x2D
    ctx->r15 = ADD32(0, 0X2D);
    // 0x80800B4C: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_80800B50:
    // 0x80800B50: jal         0x8008E078
    // 0x80800B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_11;
    // 0x80800B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800B58: beq         $v0, $zero, L_80800B98
    if (ctx->r2 == 0) {
        // 0x80800B5C: addiu       $t8, $zero, 0x2
        ctx->r24 = ADD32(0, 0X2);
            goto L_80800B98;
    }
    // 0x80800B5C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80800B60: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
    // 0x80800B64: jal         0x8009FE58
    // 0x80800B68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_12;
    // 0x80800B68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800B6C: b           L_80800B9C
    // 0x80800B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800B9C;
    // 0x80800B70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800B74:
    // 0x80800B74: jal         0x8008B324
    // 0x80800B78: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B324(rdram, ctx);
        goto after_13;
    // 0x80800B78: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_13:
    // 0x80800B7C: beq         $v0, $zero, L_80800B8C
    if (ctx->r2 == 0) {
        // 0x80800B80: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B8C;
    }
    // 0x80800B80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B84: addiu       $t9, $zero, 0x1B
    ctx->r25 = ADD32(0, 0X1B);
    // 0x80800B88: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_80800B8C:
    // 0x80800B8C: jal         0x800003A8
    // 0x80800B90: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_808003A8_bsbwhirl(rdram, ctx);
        goto after_14;
    // 0x80800B90: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_14:
    // 0x80800B94: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_80800B98:
    // 0x80800B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800B9C:
    // 0x80800B9C: jal         0x80000430
    // 0x80800BA0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80800430_bsbwhirl(rdram, ctx);
        goto after_15;
    // 0x80800BA0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_15:
    // 0x80800BA4: jal         0x80000008
    // 0x80800BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800008_bsbwhirl(rdram, ctx);
        goto after_16;
    // 0x80800BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800BAC: jal         0x8008DA24
    // 0x80800BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DA24(rdram, ctx);
        goto after_17;
    // 0x80800BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800BB4: beq         $v0, $zero, L_80800BC0
    if (ctx->r2 == 0) {
        // 0x80800BB8: addiu       $t0, $zero, 0xA8
        ctx->r8 = ADD32(0, 0XA8);
            goto L_80800BC0;
    }
    // 0x80800BB8: addiu       $t0, $zero, 0xA8
    ctx->r8 = ADD32(0, 0XA8);
    // 0x80800BBC: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
L_80800BC0:
    // 0x80800BC0: jal         0x8008E35C
    // 0x80800BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_18;
    // 0x80800BC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800BC8: beq         $v0, $zero, L_80800BD8
    if (ctx->r2 == 0) {
        // 0x80800BCC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800BD8;
    }
    // 0x80800BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BD0: addiu       $t1, $zero, 0x4C
    ctx->r9 = ADD32(0, 0X4C);
    // 0x80800BD4: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_80800BD8:
    // 0x80800BD8: jal         0x8009E5C8
    // 0x80800BDC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_19;
    // 0x80800BDC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_19:
    // 0x80800BE0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BE4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800BE8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800BEC: jr          $ra
    // 0x80800BF0: nop

    return;
    // 0x80800BF0: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BFC: jal         0x8009BC6C
    // 0x80800C00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x80800C00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800C04: jal         0x8000017C
    // 0x80800C08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080017C_bsbwhirl(rdram, ctx);
        goto after_1;
    // 0x80800C08: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C14: jr          $ra
    // 0x80800C18: nop

    return;
    // 0x80800C18: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C1C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800C20: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(87, 0XFC8) << 16);
    // 0x80800C24: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800C28: jr          $ra
    // 0x80800C2C: lw          $v0, 0xFC8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XFC8));
    return;
    // 0x80800C2C: lw          $v0, 0xFC8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XFC8));
;}
RECOMP_FUNC void bsbwhirl_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800C34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800C38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800C3C: jal         0x8008CABC
    // 0x80800C40: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800C40: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800C44: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800C48: jal         0x8008AF24
    // 0x80800C4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800C4C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800C50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C54: jal         0x8008B1A0
    // 0x80800C58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x80800C58: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C60: jal         0x8008B188
    // 0x80800C64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B188(rdram, ctx);
        goto after_3;
    // 0x80800C64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800C68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C6C: jal         0x8008AED4
    // 0x80800C70: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    func_8008AED4(rdram, ctx);
        goto after_4;
    // 0x80800C70: addiu       $a1, $zero, 0x22
    ctx->r5 = ADD32(0, 0X22);
    after_4:
    // 0x80800C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C78: jal         0x8008B1BC
    // 0x80800C7C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x80800C7C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_5:
    // 0x80800C80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C84: jal         0x8008B134
    // 0x80800C88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x80800C88: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80800C8C: jal         0x8008B064
    // 0x80800C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x80800C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800C94: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800C98: jal         0x8008CA4C
    // 0x80800C9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_8;
    // 0x80800C9C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800CA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800CA4: jal         0x8009D2D8
    // 0x80800CA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009D2D8(rdram, ctx);
        goto after_9;
    // 0x80800CA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_9:
    // 0x80800CAC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800CB0: jal         0x8009B9B0
    // 0x80800CB4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_10;
    // 0x80800CB4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x80800CB8: addiu       $a0, $zero, 0xD
    ctx->r4 = ADD32(0, 0XD);
    // 0x80800CBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800CC0: jal         0x800FCAE0
    // 0x80800CC4: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    func_800FCAE0(rdram, ctx);
        goto after_11;
    // 0x80800CC4: addiu       $a2, $zero, 0xFA0
    ctx->r6 = ADD32(0, 0XFA0);
    after_11:
    // 0x80800CC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800CCC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800CD0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800CD4: jr          $ra
    // 0x80800CD8: nop

    return;
    // 0x80800CD8: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CDC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CE4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800CE8: jal         0x8008CABC
    // 0x80800CEC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800CEC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800CF0: jal         0x8008B324
    // 0x80800CF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B324(rdram, ctx);
        goto after_1;
    // 0x80800CF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800CF8: beq         $v0, $zero, L_80800D04
    if (ctx->r2 == 0) {
        // 0x80800CFC: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800D04;
    }
    // 0x80800CFC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800D00: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800D04:
    // 0x80800D04: jal         0x80000008
    // 0x80800D08: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800008_bsbwhirl(rdram, ctx);
        goto after_2;
    // 0x80800D08: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800D0C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800D10: jal         0x8009E5C8
    // 0x80800D14: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80800D14: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80800D18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800D20: jr          $ra
    // 0x80800D24: nop

    return;
    // 0x80800D24: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D30: jal         0x8000017C
    // 0x80800D34: nop

    func_8080017C_bsbwhirl(rdram, ctx);
        goto after_0;
    // 0x80800D34: nop

    after_0:
    // 0x80800D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D40: jr          $ra
    // 0x80800D44: nop

    return;
    // 0x80800D44: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D48: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800D4C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(87, 0XFD8) << 16);
    // 0x80800D50: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800D54: jr          $ra
    // 0x80800D58: lw          $v0, 0xFD8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XFD8));
    return;
    // 0x80800D58: lw          $v0, 0xFD8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XFD8));
;}
RECOMP_FUNC void bsbwhirl_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D64: jal         0x80082FE0
    // 0x80800D68: nop

    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800D68: nop

    after_0:
    // 0x80800D6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D70: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D74: jr          $ra
    // 0x80800D78: nop

    return;
    // 0x80800D78: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D7C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D84: jal         0x80000200
    // 0x80800D88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800200_bsbwhirl(rdram, ctx);
        goto after_0;
    // 0x80800D88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D8C: jal         0x80000008
    // 0x80800D90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800008_bsbwhirl(rdram, ctx);
        goto after_1;
    // 0x80800D90: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800D94: jal         0x80082FE8
    // 0x80800D98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800D98: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800D9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800DA4: jr          $ra
    // 0x80800DA8: nop

    return;
    // 0x80800DA8: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800DB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DB4: jal         0x80082FF0
    // 0x80800DB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800DB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800DBC: jal         0x8000017C
    // 0x80800DC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080017C_bsbwhirl(rdram, ctx);
        goto after_1;
    // 0x80800DC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800DC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800DCC: jr          $ra
    // 0x80800DD0: nop

    return;
    // 0x80800DD0: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DD4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800DD8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(87, 0XFE8) << 16);
    // 0x80800DDC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800DE0: jr          $ra
    // 0x80800DE4: lw          $v0, 0xFE8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XFE8));
    return;
    // 0x80800DE4: lw          $v0, 0xFE8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XFE8));
;}
RECOMP_FUNC void bsbwhirl_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800DEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800DF0: jal         0x800839B8
    // 0x80800DF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800DF4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800DF8: jal         0x8000017C
    // 0x80800DFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8080017C_bsbwhirl(rdram, ctx);
        goto after_1;
    // 0x80800DFC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800E00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E08: jr          $ra
    // 0x80800E0C: nop

    return;
    // 0x80800E0C: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800E18: jal         0x800839C8
    // 0x80800E1C: nop

    _bsrest_entrypoint_16(rdram, ctx);
        goto after_0;
    // 0x80800E1C: nop

    after_0:
    // 0x80800E20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800E24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800E28: jr          $ra
    // 0x80800E2C: nop

    return;
    // 0x80800E2C: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800E34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800E38: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800E3C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800E40: jal         0x80000200
    // 0x80800E44: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_80800200_bsbwhirl(rdram, ctx);
        goto after_0;
    // 0x80800E44: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800E48: jal         0x80000008
    // 0x80800E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800008_bsbwhirl(rdram, ctx);
        goto after_1;
    // 0x80800E4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800E50: jal         0x800839E8
    // 0x80800E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_2;
    // 0x80800E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800E58: beql        $v0, $zero, L_80800E70
    if (ctx->r2 == 0) {
        // 0x80800E5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E70;
    }
    goto skip_0;
    // 0x80800E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800E60: jal         0x800839B0
    // 0x80800E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_3;
    // 0x80800E64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800E68: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800E70:
    // 0x80800E70: jal         0x8009E5C8
    // 0x80800E74: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80800E74: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80800E78: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800E7C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800E80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800E84: jr          $ra
    // 0x80800E88: nop

    return;
    // 0x80800E88: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E8C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800E90: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(87, 0XFF8) << 16);
    // 0x80800E94: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800E98: jr          $ra
    // 0x80800E9C: lw          $v0, 0xFF8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XFF8));
    return;
    // 0x80800E9C: lw          $v0, 0xFF8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(87, 0XFF8));
;}
RECOMP_FUNC void func_80800EA0_bsbwhirl(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800EA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800EA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800EAC: jal         0x8009E6EC
    // 0x80800EB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800EB0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800EB4: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x80800EB8: beq         $v0, $at, L_80800EEC
    if (ctx->r2 == ctx->r1) {
        // 0x80800EBC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800EEC;
    }
    // 0x80800EBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800EC0: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x80800EC4: beq         $v0, $at, L_80800EEC
    if (ctx->r2 == ctx->r1) {
        // 0x80800EC8: addiu       $at, $zero, 0x21
        ctx->r1 = ADD32(0, 0X21);
            goto L_80800EEC;
    }
    // 0x80800EC8: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x80800ECC: beq         $v0, $at, L_80800EEC
    if (ctx->r2 == ctx->r1) {
        // 0x80800ED0: addiu       $at, $zero, 0x4E
        ctx->r1 = ADD32(0, 0X4E);
            goto L_80800EEC;
    }
    // 0x80800ED0: addiu       $at, $zero, 0x4E
    ctx->r1 = ADD32(0, 0X4E);
    // 0x80800ED4: beq         $v0, $at, L_80800EEC
    if (ctx->r2 == ctx->r1) {
        // 0x80800ED8: addiu       $at, $zero, 0x51
        ctx->r1 = ADD32(0, 0X51);
            goto L_80800EEC;
    }
    // 0x80800ED8: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x80800EDC: beq         $v0, $at, L_80800EEC
    if (ctx->r2 == ctx->r1) {
        // 0x80800EE0: addiu       $at, $zero, 0x52
        ctx->r1 = ADD32(0, 0X52);
            goto L_80800EEC;
    }
    // 0x80800EE0: addiu       $at, $zero, 0x52
    ctx->r1 = ADD32(0, 0X52);
    // 0x80800EE4: bne         $v0, $at, L_80800EFC
    if (ctx->r2 != ctx->r1) {
        // 0x80800EE8: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_80800EFC;
    }
    // 0x80800EE8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
L_80800EEC:
    // 0x80800EEC: jal         0x8009E830
    // 0x80800EF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E830(rdram, ctx);
        goto after_1;
    // 0x80800EF0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800EF4: b           L_80800F08
    // 0x80800EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800F08;
    // 0x80800EF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800EFC:
    // 0x80800EFC: jalr        $t9
    // 0x80800F00: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80800F00: nop

    after_2:
    // 0x80800F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800F08:
    // 0x80800F08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F0C: jr          $ra
    // 0x80800F10: nop

    return;
    // 0x80800F10: nop

;}
RECOMP_FUNC void bsbwhirl_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F14: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F18: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F1C: lui         $a1, 0x800A
    ctx->r5 = S32(0X800A << 16);
    // 0x80800F20: jal         0x80000EA0
    // 0x80800F24: addiu       $a1, $a1, -0x646C
    ctx->r5 = ADD32(ctx->r5, -0X646C);
    func_80800EA0_bsbwhirl(rdram, ctx);
        goto after_0;
    // 0x80800F24: addiu       $a1, $a1, -0x646C
    ctx->r5 = ADD32(ctx->r5, -0X646C);
    after_0:
    // 0x80800F28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F2C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F30: jr          $ra
    // 0x80800F34: nop

    return;
    // 0x80800F34: nop

    // 0x80800F38: nop

    // 0x80800F3C: nop

;}
RECOMP_FUNC void func_80800000_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: jal         0x8009E6EC
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800014: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80800018: beq         $v0, $at, L_8080003C
    if (ctx->r2 == ctx->r1) {
        // 0x8080001C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080003C;
    }
    // 0x8080001C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800020: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x80800024: beq         $v0, $at, L_80800058
    if (ctx->r2 == ctx->r1) {
        // 0x80800028: addiu       $at, $zero, 0x16
        ctx->r1 = ADD32(0, 0X16);
            goto L_80800058;
    }
    // 0x80800028: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x8080002C: beq         $v0, $at, L_80800074
    if (ctx->r2 == ctx->r1) {
        // 0x80800030: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800074;
    }
    // 0x80800030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800034: b           L_808000B4
    // 0x80800038: nop

        goto L_808000B4;
    // 0x80800038: nop

L_8080003C:
    // 0x8080003C: jal         0x8009E830
    // 0x80800040: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_1;
    // 0x80800040: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800048: jal         0x8009E5C8
    // 0x8080004C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x8080004C: addiu       $a1, $zero, 0x3C
    ctx->r5 = ADD32(0, 0X3C);
    after_2:
    // 0x80800050: b           L_808000C0
    // 0x80800054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000C0;
    // 0x80800054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800058:
    // 0x80800058: jal         0x8008E9AC
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E9AC(rdram, ctx);
        goto after_3;
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800064: jal         0x8008F6B8
    // 0x80800068: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8008F6B8(rdram, ctx);
        goto after_4;
    // 0x80800068: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x8080006C: b           L_808000C0
    // 0x80800070: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000C0;
    // 0x80800070: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800074:
    // 0x80800074: jal         0x800915AC
    // 0x80800078: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800915AC(rdram, ctx);
        goto after_5;
    // 0x80800078: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8080007C: beq         $v0, $zero, L_808000A4
    if (ctx->r2 == 0) {
        // 0x80800080: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000A4;
    }
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800088: jal         0x8009E5C8
    // 0x8080008C: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x8080008C: addiu       $a1, $zero, 0x5B
    ctx->r5 = ADD32(0, 0X5B);
    after_6:
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800094: jal         0x8009E830
    // 0x80800098: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_7;
    // 0x80800098: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x8080009C: b           L_808000C0
    // 0x808000A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000C0;
    // 0x808000A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000A4:
    // 0x808000A4: jal         0x8009E830
    // 0x808000A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E830(rdram, ctx);
        goto after_8;
    // 0x808000A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x808000AC: b           L_808000C0
    // 0x808000B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000C0;
    // 0x808000B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000B4:
    // 0x808000B4: jal         0x80099B94
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B94(rdram, ctx);
        goto after_9;
    // 0x808000B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808000BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000C0:
    // 0x808000C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000C8: jr          $ra
    // 0x808000CC: nop

    return;
    // 0x808000CC: nop

;}
RECOMP_FUNC void func_808000D0_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000D8: jal         0x8009E6EC
    // 0x808000DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808000DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000E0: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x808000E4: beq         $v0, $at, L_80800100
    if (ctx->r2 == ctx->r1) {
        // 0x808000E8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800100;
    }
    // 0x808000E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000EC: addiu       $at, $zero, 0x12
    ctx->r1 = ADD32(0, 0X12);
    // 0x808000F0: beq         $v0, $at, L_80800100
    if (ctx->r2 == ctx->r1) {
        // 0x808000F4: addiu       $at, $zero, 0x16
        ctx->r1 = ADD32(0, 0X16);
            goto L_80800100;
    }
    // 0x808000F4: addiu       $at, $zero, 0x16
    ctx->r1 = ADD32(0, 0X16);
    // 0x808000F8: bne         $v0, $at, L_80800110
    if (ctx->r2 != ctx->r1) {
        // 0x808000FC: nop
    
            goto L_80800110;
    }
    // 0x808000FC: nop

L_80800100:
    // 0x80800100: jal         0x80000000
    // 0x80800104: nop

    func_80800000_bscarry(rdram, ctx);
        goto after_1;
    // 0x80800104: nop

    after_1:
    // 0x80800108: b           L_8080011C
    // 0x8080010C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080011C;
    // 0x8080010C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800110:
    // 0x80800110: jal         0x80082FF8
    // 0x80800114: nop

    _bsdrone_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80800114: nop

    after_2:
    // 0x80800118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080011C:
    // 0x8080011C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800120: jr          $ra
    // 0x80800124: nop

    return;
    // 0x80800124: nop

;}
RECOMP_FUNC void func_80800128_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800128: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080012C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800130: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800134: jal         0x8009EF1C
    // 0x80800138: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x80800138: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800140: jal         0x8009EF10
    // 0x80800144: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x80800144: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80800148: beq         $v0, $zero, L_8080016C
    if (ctx->r2 == 0) {
        // 0x8080014C: lwc1        $f12, 0x24($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
            goto L_8080016C;
    }
    // 0x8080014C: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800150: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800154: beq         $v0, $at, L_80800180
    if (ctx->r2 == ctx->r1) {
        // 0x80800158: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800180;
    }
    // 0x80800158: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080015C: beql        $v0, $at, L_808001A8
    if (ctx->r2 == ctx->r1) {
        // 0x80800160: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_808001A8;
    }
    goto skip_0;
    // 0x80800160: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    skip_0:
    // 0x80800164: b           L_808001C4
    // 0x80800168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808001C4;
    // 0x80800168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080016C:
    // 0x8080016C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800170: jal         0x8009B9B0
    // 0x80800174: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800174: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800178: b           L_808001C4
    // 0x8080017C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808001C4;
    // 0x8080017C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800180:
    // 0x80800180: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800184: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800188: jal         0x800F1214
    // 0x8080018C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x8080018C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    after_3:
    // 0x80800190: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800194: jal         0x8009B9B0
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080019C: b           L_808001C4
    // 0x808001A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808001C4;
    // 0x808001A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001A4: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
L_808001A8:
    // 0x808001A8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808001AC: jal         0x800F1214
    // 0x808001B0: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    func_800F1214(rdram, ctx);
        goto after_5;
    // 0x808001B0: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    after_5:
    // 0x808001B4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001B8: jal         0x8009B9B0
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808001C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001C4:
    // 0x808001C4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808001CC: jr          $ra
    // 0x808001D0: nop

    return;
    // 0x808001D0: nop

;}
RECOMP_FUNC void func_808001D4_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001DC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808001E0: jal         0x8009E69C
    // 0x808001E4: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    func_8009E69C(rdram, ctx);
        goto after_0;
    // 0x808001E4: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_0:
    // 0x808001E8: bnel        $v0, $zero, L_808001FC
    if (ctx->r2 != 0) {
        // 0x808001EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808001FC;
    }
    goto skip_0;
    // 0x808001EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808001F0: jal         0x8009EF60
    // 0x808001F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009EF60(rdram, ctx);
        goto after_1;
    // 0x808001F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808001F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001FC:
    // 0x808001FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800200: jr          $ra
    // 0x80800204: nop

    return;
    // 0x80800204: nop

;}
RECOMP_FUNC void func_80800208_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800208: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080020C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800210: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800214: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800218: jal         0x8009E6C4
    // 0x8080021C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    func_8009E6C4(rdram, ctx);
        goto after_0;
    // 0x8080021C: addiu       $a1, $zero, 0x400
    ctx->r5 = ADD32(0, 0X400);
    after_0:
    // 0x80800220: bnel        $v0, $zero, L_8080026C
    if (ctx->r2 != 0) {
        // 0x80800224: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080026C;
    }
    goto skip_0;
    // 0x80800224: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800228: jal         0x8009EFA8
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_1;
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800230: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x80800234: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: jal         0x8009F1C8
    // 0x80800240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_2;
    // 0x80800240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800244: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x80800248: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800250: jal         0x8009F1C8
    // 0x80800254: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009F1C8(rdram, ctx);
        goto after_3;
    // 0x80800254: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080025C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800260: jal         0x8009F1C8
    // 0x80800264: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_4;
    // 0x80800264: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
    // 0x80800268: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080026C:
    // 0x8080026C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800270: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800274: jr          $ra
    // 0x80800278: nop

    return;
    // 0x80800278: nop

;}
RECOMP_FUNC void func_8080027C_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080027C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800284: jal         0x800001D4
    // 0x80800288: nop

    func_808001D4_bscarry(rdram, ctx);
        goto after_0;
    // 0x80800288: nop

    after_0:
    // 0x8080028C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800294: jr          $ra
    // 0x80800298: nop

    return;
    // 0x80800298: nop

;}
RECOMP_FUNC void func_8080029C_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080029C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808002A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002A4: jal         0x80000208
    // 0x808002A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80800208_bscarry(rdram, ctx);
        goto after_0;
    // 0x808002A8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808002AC: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808002B0: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808002B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808002B8: jal         0x8008CB3C
    // 0x808002BC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808002BC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_1:
    // 0x808002C0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808002C4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808002C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808002CC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808002D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808002D4: jal         0x8009FFD8
    // 0x808002D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808002D8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x808002DC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(88, 0X7A0) << 16);
    // 0x808002E0: lwc1        $f4, 0x7A0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(88, 0X7A0));
    // 0x808002E4: lui         $a3, 0x3FE6
    ctx->r7 = S32(0X3FE6 << 16);
    // 0x808002E8: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x808002EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808002F0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x808002F4: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x808002F8: jal         0x8008C9F0
    // 0x808002FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_3;
    // 0x808002FC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80800300: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800304: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800308: jr          $ra
    // 0x8080030C: nop

    return;
    // 0x8080030C: nop

;}
RECOMP_FUNC void func_80800310_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800310: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800314: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800318: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080031C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800320: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x80800324: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800328: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8080032C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800330: jal         0x800A2CE8
    // 0x80800334: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_0;
    // 0x80800334: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x80800338: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x8080033C: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800340: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800344: jal         0x800A2CE8
    // 0x80800348: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_1;
    // 0x80800348: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x8080034C: jal         0x80000128
    // 0x80800350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800128_bscarry(rdram, ctx);
        goto after_2;
    // 0x80800350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800354: jal         0x8009EF10
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_3;
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080035C: beq         $v0, $zero, L_80800378
    if (ctx->r2 == 0) {
        // 0x80800360: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800378;
    }
    // 0x80800360: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800364: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800368: beql        $v0, $at, L_80800394
    if (ctx->r2 == ctx->r1) {
        // 0x8080036C: addiu       $s1, $zero, 0x3B
        ctx->r17 = ADD32(0, 0X3B);
            goto L_80800394;
    }
    goto skip_0;
    // 0x8080036C: addiu       $s1, $zero, 0x3B
    ctx->r17 = ADD32(0, 0X3B);
    skip_0:
    // 0x80800370: b           L_80800394
    // 0x80800374: nop

        goto L_80800394;
    // 0x80800374: nop

L_80800378:
    // 0x80800378: jal         0x8009BCD4
    // 0x8080037C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_4;
    // 0x8080037C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x80800380: beq         $v0, $zero, L_80800394
    if (ctx->r2 == 0) {
        // 0x80800384: nop
    
            goto L_80800394;
    }
    // 0x80800384: nop

    // 0x80800388: b           L_80800394
    // 0x8080038C: addiu       $s1, $zero, 0x3A
    ctx->r17 = ADD32(0, 0X3A);
        goto L_80800394;
    // 0x8080038C: addiu       $s1, $zero, 0x3A
    ctx->r17 = ADD32(0, 0X3A);
    // 0x80800390: addiu       $s1, $zero, 0x3B
    ctx->r17 = ADD32(0, 0X3B);
L_80800394:
    // 0x80800394: jal         0x80084D40
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bahold_entrypoint_5(rdram, ctx);
        goto after_5;
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080039C: bne         $v0, $zero, L_808003A8
    if (ctx->r2 != 0) {
        // 0x808003A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003A8;
    }
    // 0x808003A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003A4: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_808003A8:
    // 0x808003A8: jal         0x8009E5C8
    // 0x808003AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x808003AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x808003B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003B4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808003B8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808003BC: jr          $ra
    // 0x808003C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808003C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bscarry_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003C4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808003C8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(88, 0X7B0) << 16);
    // 0x808003CC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808003D0: jr          $ra
    // 0x808003D4: lw          $v0, 0x7B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(88, 0X7B0));
    return;
    // 0x808003D4: lw          $v0, 0x7B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(88, 0X7B0));
;}
RECOMP_FUNC void func_808003D8_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003E0: jal         0x800001D4
    // 0x808003E4: nop

    func_808001D4_bscarry(rdram, ctx);
        goto after_0;
    // 0x808003E4: nop

    after_0:
    // 0x808003E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003F0: jr          $ra
    // 0x808003F4: nop

    return;
    // 0x808003F4: nop

;}
RECOMP_FUNC void func_808003F8_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003FC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800400: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800404: jal         0x80000208
    // 0x80800408: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800208_bscarry(rdram, ctx);
        goto after_0;
    // 0x80800408: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080040C: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80800410: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800418: jal         0x8008CB3C
    // 0x8080041C: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x8080041C: addiu       $a1, $zero, 0x72
    ctx->r5 = ADD32(0, 0X72);
    after_1:
    // 0x80800420: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800424: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080042C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800430: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800434: jal         0x8009FFD8
    // 0x80800438: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800438: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8080043C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800440: jal         0x8009B9B0
    // 0x80800444: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800444: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080044C: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800450: jal         0x8009BFE4
    // 0x80800454: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_4;
    // 0x80800454: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_4:
    // 0x80800458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080045C: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800460: jal         0x8009C554
    // 0x80800464: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009C554(rdram, ctx);
        goto after_5;
    // 0x80800464: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_5:
    // 0x80800468: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080046C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800470: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800474: jr          $ra
    // 0x80800478: nop

    return;
    // 0x80800478: nop

;}
RECOMP_FUNC void func_8080047C_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080047C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800484: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800488: jal         0x8009EF10
    // 0x8080048C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8009EF10(rdram, ctx);
        goto after_0;
    // 0x8080048C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800490: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800494: beq         $v0, $at, L_808004B0
    if (ctx->r2 == ctx->r1) {
        // 0x80800498: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_808004B0;
    }
    // 0x80800498: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080049C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808004A0: beql        $v0, $at, L_808004BC
    if (ctx->r2 == ctx->r1) {
        // 0x808004A4: addiu       $a1, $zero, 0x3B
        ctx->r5 = ADD32(0, 0X3B);
            goto L_808004BC;
    }
    goto skip_0;
    // 0x808004A4: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
    skip_0:
    // 0x808004A8: b           L_808004C0
    // 0x808004AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_808004C0;
    // 0x808004AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_808004B0:
    // 0x808004B0: b           L_808004BC
    // 0x808004B4: addiu       $a1, $zero, 0x9F
    ctx->r5 = ADD32(0, 0X9F);
        goto L_808004BC;
    // 0x808004B4: addiu       $a1, $zero, 0x9F
    ctx->r5 = ADD32(0, 0X9F);
    // 0x808004B8: addiu       $a1, $zero, 0x3B
    ctx->r5 = ADD32(0, 0X3B);
L_808004BC:
    // 0x808004BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_808004C0:
    // 0x808004C0: jal         0x80084D40
    // 0x808004C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    _bahold_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x808004C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x808004C8: bne         $v0, $zero, L_808004D4
    if (ctx->r2 != 0) {
        // 0x808004CC: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_808004D4;
    }
    // 0x808004CC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808004D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_808004D4:
    // 0x808004D4: jal         0x8009E5C8
    // 0x808004D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x808004D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808004DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004E0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004E4: jr          $ra
    // 0x808004E8: nop

    return;
    // 0x808004E8: nop

;}
RECOMP_FUNC void bscarry_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004EC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808004F0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(88, 0X7C0) << 16);
    // 0x808004F4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808004F8: jr          $ra
    // 0x808004FC: lw          $v0, 0x7C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(88, 0X7C0));
    return;
    // 0x808004FC: lw          $v0, 0x7C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(88, 0X7C0));
;}
RECOMP_FUNC void func_80800500_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800500: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800504: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800508: jal         0x800001D4
    // 0x8080050C: nop

    func_808001D4_bscarry(rdram, ctx);
        goto after_0;
    // 0x8080050C: nop

    after_0:
    // 0x80800510: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800514: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800518: jr          $ra
    // 0x8080051C: nop

    return;
    // 0x8080051C: nop

;}
RECOMP_FUNC void func_80800520_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800528: jal         0x80000208
    // 0x8080052C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80800208_bscarry(rdram, ctx);
        goto after_0;
    // 0x8080052C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800530: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800534: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800538: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080053C: jal         0x8008CB3C
    // 0x80800540: addiu       $a1, $zero, 0x73
    ctx->r5 = ADD32(0, 0X73);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800540: addiu       $a1, $zero, 0x73
    ctx->r5 = ADD32(0, 0X73);
    after_1:
    // 0x80800544: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800548: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080054C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800550: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800554: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800558: jal         0x8009FFD8
    // 0x8080055C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x8080055C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800560: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(88, 0X7A4) << 16);
    // 0x80800564: lwc1        $f4, 0x7A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(88, 0X7A4));
    // 0x80800568: lui         $a3, 0x3F57
    ctx->r7 = S32(0X3F57 << 16);
    // 0x8080056C: ori         $a3, $a3, 0xA3D
    ctx->r7 = ctx->r7 | 0XA3D;
    // 0x80800570: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800574: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x80800578: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x8080057C: jal         0x8008C9F0
    // 0x80800580: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_3;
    // 0x80800580: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80800584: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800588: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080058C: jr          $ra
    // 0x80800590: nop

    return;
    // 0x80800590: nop

;}
RECOMP_FUNC void func_80800594_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800594: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800598: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080059C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808005A0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808005A4: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x808005A8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808005AC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x808005B0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808005B4: jal         0x800A2CE8
    // 0x808005B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_0;
    // 0x808005B8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x808005BC: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x808005C0: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x808005C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005C8: jal         0x800A2CE8
    // 0x808005CC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_1;
    // 0x808005CC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x808005D0: jal         0x80000128
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800128_bscarry(rdram, ctx);
        goto after_2;
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808005D8: jal         0x8009EF10
    // 0x808005DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_3;
    // 0x808005DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808005E0: beq         $v0, $zero, L_808005FC
    if (ctx->r2 == 0) {
        // 0x808005E4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005FC;
    }
    // 0x808005E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808005EC: beql        $v0, $at, L_80800618
    if (ctx->r2 == ctx->r1) {
        // 0x808005F0: addiu       $s1, $zero, 0x9F
        ctx->r17 = ADD32(0, 0X9F);
            goto L_80800618;
    }
    goto skip_0;
    // 0x808005F0: addiu       $s1, $zero, 0x9F
    ctx->r17 = ADD32(0, 0X9F);
    skip_0:
    // 0x808005F4: b           L_80800618
    // 0x808005F8: nop

        goto L_80800618;
    // 0x808005F8: nop

L_808005FC:
    // 0x808005FC: jal         0x8009BCD4
    // 0x80800600: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_4;
    // 0x80800600: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_4:
    // 0x80800604: beq         $v0, $zero, L_80800618
    if (ctx->r2 == 0) {
        // 0x80800608: nop
    
            goto L_80800618;
    }
    // 0x80800608: nop

    // 0x8080060C: b           L_80800618
    // 0x80800610: addiu       $s1, $zero, 0x3A
    ctx->r17 = ADD32(0, 0X3A);
        goto L_80800618;
    // 0x80800610: addiu       $s1, $zero, 0x3A
    ctx->r17 = ADD32(0, 0X3A);
    // 0x80800614: addiu       $s1, $zero, 0x9F
    ctx->r17 = ADD32(0, 0X9F);
L_80800618:
    // 0x80800618: jal         0x80084D40
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bahold_entrypoint_5(rdram, ctx);
        goto after_5;
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800620: bne         $v0, $zero, L_8080062C
    if (ctx->r2 != 0) {
        // 0x80800624: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080062C;
    }
    // 0x80800624: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800628: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8080062C:
    // 0x8080062C: jal         0x8009E5C8
    // 0x80800630: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x80800630: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x80800634: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800638: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8080063C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800640: jr          $ra
    // 0x80800644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800644: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bscarry_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800648: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080064C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(88, 0X7D0) << 16);
    // 0x80800650: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800654: jr          $ra
    // 0x80800658: lw          $v0, 0x7D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(88, 0X7D0));
    return;
    // 0x80800658: lw          $v0, 0x7D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(88, 0X7D0));
;}
RECOMP_FUNC void func_8080065C_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080065C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800664: jal         0x80082FF0
    // 0x80800668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800668: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080066C: jal         0x800001D4
    // 0x80800670: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808001D4_bscarry(rdram, ctx);
        goto after_1;
    // 0x80800670: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800674: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800678: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080067C: jr          $ra
    // 0x80800680: nop

    return;
    // 0x80800680: nop

;}
RECOMP_FUNC void func_80800684_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800684: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800688: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080068C: jal         0x80000208
    // 0x80800690: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800208_bscarry(rdram, ctx);
        goto after_0;
    // 0x80800690: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800694: jal         0x80082FE0
    // 0x80800698: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800698: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080069C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006A4: jr          $ra
    // 0x808006A8: nop

    return;
    // 0x808006A8: nop

;}
RECOMP_FUNC void func_808006AC_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808006B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006B4: jal         0x80082FE8
    // 0x808006B8: nop

    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808006B8: nop

    after_0:
    // 0x808006BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006C4: jr          $ra
    // 0x808006C8: nop

    return;
    // 0x808006C8: nop

;}
RECOMP_FUNC void bscarry_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006CC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808006D0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(88, 0X7E0) << 16);
    // 0x808006D4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808006D8: jr          $ra
    // 0x808006DC: lw          $v0, 0x7E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(88, 0X7E0));
    return;
    // 0x808006DC: lw          $v0, 0x7E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(88, 0X7E0));
;}
RECOMP_FUNC void func_808006E0_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808006E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006E8: jal         0x800839B8
    // 0x808006EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x808006EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808006F0: jal         0x800001D4
    // 0x808006F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808001D4_bscarry(rdram, ctx);
        goto after_1;
    // 0x808006F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808006F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800700: jr          $ra
    // 0x80800704: nop

    return;
    // 0x80800704: nop

;}
RECOMP_FUNC void func_80800708_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800708: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080070C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800710: jal         0x80000208
    // 0x80800714: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800208_bscarry(rdram, ctx);
        goto after_0;
    // 0x80800714: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800718: jal         0x800839C8
    // 0x8080071C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x8080071C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800728: jr          $ra
    // 0x8080072C: nop

    return;
    // 0x8080072C: nop

;}
RECOMP_FUNC void func_80800730_bscarry(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800730: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800734: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800738: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080073C: jal         0x800839E8
    // 0x80800740: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x80800740: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800744: beq         $v0, $zero, L_80800750
    if (ctx->r2 == 0) {
        // 0x80800748: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800750;
    }
    // 0x80800748: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080074C: addiu       $a1, $zero, 0x3A
    ctx->r5 = ADD32(0, 0X3A);
L_80800750:
    // 0x80800750: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800754: jal         0x80084D40
    // 0x80800758: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    _bahold_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800758: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x8080075C: bne         $v0, $zero, L_80800768
    if (ctx->r2 != 0) {
        // 0x80800760: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800768;
    }
    // 0x80800760: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800764: addiu       $a1, $zero, 0x73
    ctx->r5 = ADD32(0, 0X73);
L_80800768:
    // 0x80800768: jal         0x8009E5C8
    // 0x8080076C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x8080076C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800770: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800774: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800778: jr          $ra
    // 0x8080077C: nop

    return;
    // 0x8080077C: nop

;}
RECOMP_FUNC void bscarry_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800780: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800784: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(88, 0X7F0) << 16);
    // 0x80800788: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080078C: jr          $ra
    // 0x80800790: lw          $v0, 0x7F0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(88, 0X7F0));
    return;
    // 0x80800790: lw          $v0, 0x7F0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(88, 0X7F0));
    // 0x80800794: nop

    // 0x80800798: nop

    // 0x8080079C: nop

;}
RECOMP_FUNC void bschokedie_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080000C: lui         $a2, 0x4086
    ctx->r6 = S32(0X4086 << 16);
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800014: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800018: jal         0x8008CCBC
    // 0x8080001C: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x8080001C: addiu       $a1, $zero, 0xF0
    ctx->r5 = ADD32(0, 0XF0);
    after_0:
    // 0x80800020: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800024: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080002C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800030: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800034: jal         0x8009FFD8
    // 0x80800038: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800038: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
    // 0x8080003C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800040: jal         0x8009BA9C
    // 0x80800044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_2;
    // 0x80800044: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080004C: jal         0x8009B9B0
    // 0x80800050: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800050: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800058: jal         0x800A4DFC
    // 0x8080005C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800A4DFC(rdram, ctx);
        goto after_4;
    // 0x8080005C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_4:
    // 0x80800060: jal         0x800A4CA8
    // 0x80800064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_5;
    // 0x80800064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800068: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080006C: jal         0x80089288
    // 0x80800070: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    _ncbadie_entrypoint_3(rdram, ctx);
        goto after_6;
    // 0x80800070: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_6:
    // 0x80800074: jal         0x800A0180
    // 0x80800078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0180(rdram, ctx);
        goto after_7;
    // 0x80800078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x8080007C: lui         $a2, 0x4073
    ctx->r6 = S32(0X4073 << 16);
    // 0x80800080: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800088: jal         0x80085338
    // 0x8080008C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_8;
    // 0x8080008C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80800090: jal         0x8008E944
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_9;
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800098: jal         0x80090A0C
    // 0x8080009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80090A0C(rdram, ctx);
        goto after_10;
    // 0x8080009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808000A0: jal         0x80085208
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_1(rdram, ctx);
        goto after_11;
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808000A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808000AC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808000B0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808000B4: jr          $ra
    // 0x808000B8: nop

    return;
    // 0x808000B8: nop

;}
RECOMP_FUNC void bschokedie_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000C8: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x808000CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000D0: jal         0x8008CB10
    // 0x808000D4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x808000D4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_0:
    // 0x808000D8: beql        $v0, $zero, L_808000EC
    if (ctx->r2 == 0) {
        // 0x808000DC: lui         $a1, 0x3F14
        ctx->r5 = S32(0X3F14 << 16);
            goto L_808000EC;
    }
    goto skip_0;
    // 0x808000DC: lui         $a1, 0x3F14
    ctx->r5 = S32(0X3F14 << 16);
    skip_0:
    // 0x808000E0: jal         0x80090A2C
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80090A2C(rdram, ctx);
        goto after_1;
    // 0x808000E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808000E8: lui         $a1, 0x3F14
    ctx->r5 = S32(0X3F14 << 16);
L_808000EC:
    // 0x808000EC: ori         $a1, $a1, 0x7AE1
    ctx->r5 = ctx->r5 | 0X7AE1;
    // 0x808000F0: jal         0x8008CB10
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808000F8: beql        $v0, $zero, L_8080010C
    if (ctx->r2 == 0) {
        // 0x808000FC: lui         $a1, 0x3D4C
        ctx->r5 = S32(0X3D4C << 16);
            goto L_8080010C;
    }
    goto skip_1;
    // 0x808000FC: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
    skip_1:
    // 0x80800100: jal         0x8009514C
    // 0x80800104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009514C(rdram, ctx);
        goto after_3;
    // 0x80800104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800108: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
L_8080010C:
    // 0x8080010C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800110: jal         0x8008CB10
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800118: beq         $v0, $zero, L_80800130
    if (ctx->r2 == 0) {
        // 0x8080011C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800130;
    }
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800120: addiu       $a1, $zero, 0x574
    ctx->r5 = ADD32(0, 0X574);
    // 0x80800124: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800128: jal         0x8009DF18
    // 0x8080012C: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DF18(rdram, ctx);
        goto after_5;
    // 0x8080012C: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_5:
L_80800130:
    // 0x80800130: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800134: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800138: jal         0x8008CB10
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_6;
    // 0x8080013C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800140: beq         $v0, $zero, L_80800158
    if (ctx->r2 == 0) {
        // 0x80800144: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800158;
    }
    // 0x80800144: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800148: addiu       $a1, $zero, 0x575
    ctx->r5 = ADD32(0, 0X575);
    // 0x8080014C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800150: jal         0x8009DF18
    // 0x80800154: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DF18(rdram, ctx);
        goto after_7;
    // 0x80800154: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_7:
L_80800158:
    // 0x80800158: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x8080015C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800160: jal         0x8008CB10
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_8;
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800168: beq         $v0, $zero, L_80800180
    if (ctx->r2 == 0) {
        // 0x8080016C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800180;
    }
    // 0x8080016C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800170: addiu       $a1, $zero, 0x576
    ctx->r5 = ADD32(0, 0X576);
    // 0x80800174: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800178: jal         0x8009DF18
    // 0x8080017C: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DF18(rdram, ctx);
        goto after_9;
    // 0x8080017C: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_9:
L_80800180:
    // 0x80800180: lui         $a1, 0x3F28
    ctx->r5 = S32(0X3F28 << 16);
    // 0x80800184: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    // 0x80800188: jal         0x8008CB10
    // 0x8080018C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_10;
    // 0x8080018C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800190: beq         $v0, $zero, L_808001A8
    if (ctx->r2 == 0) {
        // 0x80800194: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001A8;
    }
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800198: addiu       $a1, $zero, 0x577
    ctx->r5 = ADD32(0, 0X577);
    // 0x8080019C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808001A0: jal         0x8009DF18
    // 0x808001A4: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DF18(rdram, ctx);
        goto after_11;
    // 0x808001A4: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_11:
L_808001A8:
    // 0x808001A8: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x808001AC: ori         $a1, $a1, 0x930C
    ctx->r5 = ctx->r5 | 0X930C;
    // 0x808001B0: jal         0x8008CB10
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_12;
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808001B8: beq         $v0, $zero, L_808001D4
    if (ctx->r2 == 0) {
        // 0x808001BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001D4;
    }
    // 0x808001BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C0: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x808001C4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x808001C8: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x808001CC: jal         0x8009DF94
    // 0x808001D0: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DF94(rdram, ctx);
        goto after_13;
    // 0x808001D0: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_13:
L_808001D4:
    // 0x808001D4: lui         $a1, 0x3F4A
    ctx->r5 = S32(0X3F4A << 16);
    // 0x808001D8: ori         $a1, $a1, 0x275
    ctx->r5 = ctx->r5 | 0X275;
    // 0x808001DC: jal         0x8008CB10
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_14;
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808001E4: beq         $v0, $zero, L_80800200
    if (ctx->r2 == 0) {
        // 0x808001E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800200;
    }
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001EC: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x808001F0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808001F4: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x808001F8: jal         0x8009DF94
    // 0x808001FC: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    func_8009DF94(rdram, ctx);
        goto after_15;
    // 0x808001FC: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    after_15:
L_80800200:
    // 0x80800200: lui         $a1, 0x3F6D
    ctx->r5 = S32(0X3F6D << 16);
    // 0x80800204: ori         $a1, $a1, 0xD97F
    ctx->r5 = ctx->r5 | 0XD97F;
    // 0x80800208: jal         0x8008CB10
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_16;
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800210: beq         $v0, $zero, L_8080022C
    if (ctx->r2 == 0) {
        // 0x80800214: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080022C;
    }
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800218: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x8080021C: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800220: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x80800224: jal         0x8009DF94
    // 0x80800228: addiu       $a3, $zero, 0x2328
    ctx->r7 = ADD32(0, 0X2328);
    func_8009DF94(rdram, ctx);
        goto after_17;
    // 0x80800228: addiu       $a3, $zero, 0x2328
    ctx->r7 = ADD32(0, 0X2328);
    after_17:
L_8080022C:
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800230: jal         0x800852F0
    // 0x80800234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_18;
    // 0x80800234: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x80800238: beql        $v0, $zero, L_8080024C
    if (ctx->r2 == 0) {
        // 0x8080023C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080024C;
    }
    goto skip_2;
    // 0x8080023C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80800240: jal         0x80085200
    // 0x80800244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_0(rdram, ctx);
        goto after_19;
    // 0x80800244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800248: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080024C:
    // 0x8080024C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800250: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800254: jr          $ra
    // 0x80800258: nop

    return;
    // 0x80800258: nop

;}
RECOMP_FUNC void bschokedie_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080025C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800264: jal         0x800951B4
    // 0x80800268: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800951B4(rdram, ctx);
        goto after_0;
    // 0x80800268: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080026C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800270: jal         0x8009BF5C
    // 0x80800274: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x80800274: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800278: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080027C: jal         0x8009C4CC
    // 0x80800280: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x80800280: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800284: jal         0x800A4E30
    // 0x80800288: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4E30(rdram, ctx);
        goto after_3;
    // 0x80800288: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x8080028C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800294: jr          $ra
    // 0x80800298: nop

    return;
    // 0x80800298: nop

;}
RECOMP_FUNC void bschokedie_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080029C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808002A0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(89, 0X2B0) << 16);
    // 0x808002A4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808002A8: jr          $ra
    // 0x808002AC: lw          $v0, 0x2B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(89, 0X2B0));
    return;
    // 0x808002AC: lw          $v0, 0x2B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(89, 0X2B0));
;}
RECOMP_FUNC void bsclaw_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x8009E474
    // 0x8080000C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E474(rdram, ctx);
        goto after_0;
    // 0x8080000C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800010: jal         0x800C6DA0
    // 0x80800014: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    func_800C6DA0(rdram, ctx);
        goto after_1;
    // 0x80800014: addiu       $a0, $zero, 0x47
    ctx->r4 = ADD32(0, 0X47);
    after_1:
    // 0x80800018: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080001C: jal         0x80095774
    // 0x80800020: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_80095774(rdram, ctx);
        goto after_2;
    // 0x80800020: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_2:
    // 0x80800024: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800028: jal         0x800A0CF4
    // 0x8080002C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_3;
    // 0x8080002C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800038: jr          $ra
    // 0x8080003C: nop

    return;
    // 0x8080003C: nop

;}
RECOMP_FUNC void bsclaw_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800040: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800044: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800048: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080004C: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x80800050: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800054: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800058: jal         0x8008CCBC
    // 0x8080005C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x8080005C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_0:
    // 0x80800060: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800064: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080006C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800070: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800074: jal         0x8009FFD8
    // 0x80800078: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800078: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8080007C: jal         0x8009C990
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_2;
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800084: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800088: jal         0x8009B9C0
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_3;
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800090: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800094: jal         0x8009B9B0
    // 0x80800098: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800098: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_4:
    // 0x8080009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A0: jal         0x80095774
    // 0x808000A4: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_80095774(rdram, ctx);
        goto after_5;
    // 0x808000A4: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_5:
    // 0x808000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000AC: jal         0x800A0CF4
    // 0x808000B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_6;
    // 0x808000B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808000B4: jal         0x800C6E38
    // 0x808000B8: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    func_800C6E38(rdram, ctx);
        goto after_7;
    // 0x808000B8: addiu       $a0, $zero, 0x32
    ctx->r4 = ADD32(0, 0X32);
    after_7:
    // 0x808000BC: beq         $v0, $zero, L_808000D0
    if (ctx->r2 == 0) {
        // 0x808000C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000D0;
    }
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(90, 0X3E0) << 16);
    // 0x808000C8: b           L_808000D8
    // 0x808000CC: lwc1        $f0, 0x3E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(90, 0X3E0));
        goto L_808000D8;
    // 0x808000CC: lwc1        $f0, 0x3E0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(90, 0X3E0));
L_808000D0:
    // 0x808000D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808000D4: nop

L_808000D8:
    // 0x808000D8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808000DC: jal         0x80085338
    // 0x808000E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_8;
    // 0x808000E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x808000E4: jal         0x8009E4AC
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_9;
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808000EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808000F4: jal         0x8009E5A4
    // 0x808000F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8009E5A4(rdram, ctx);
        goto after_10;
    // 0x808000F8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_10:
    // 0x808000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800100: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800104: jal         0x8009E55C
    // 0x80800108: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    func_8009E55C(rdram, ctx);
        goto after_11;
    // 0x80800108: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    after_11:
    // 0x8080010C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800110: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800114: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800118: jr          $ra
    // 0x8080011C: nop

    return;
    // 0x8080011C: nop

;}
RECOMP_FUNC void bsclaw_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800120: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800124: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800128: jal         0x8008CABC
    // 0x8080012C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080012C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800130: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800134: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80800138: jal         0x8008B2B4
    // 0x8080013C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B2B4(rdram, ctx);
        goto after_1;
    // 0x8080013C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800140: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80800144: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800148: jal         0x80085300
    // 0x8080014C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_get(rdram, ctx);
        goto after_2;
    // 0x8080014C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800150: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800154: nop

    // 0x80800158: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x8080015C: nop

    // 0x80800160: bc1tl       L_80800184
    if (c1cs) {
        // 0x80800164: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_80800184;
    }
    goto skip_0;
    // 0x80800164: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    skip_0:
    // 0x80800168: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8080016C: jal         0x80091A58
    // 0x80800170: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_3;
    // 0x80800170: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x80800174: beq         $v0, $zero, L_80800180
    if (ctx->r2 == 0) {
        // 0x80800178: addiu       $t6, $zero, 0x189
        ctx->r14 = ADD32(0, 0X189);
            goto L_80800180;
    }
    // 0x80800178: addiu       $t6, $zero, 0x189
    ctx->r14 = ADD32(0, 0X189);
    // 0x8080017C: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_80800180:
    // 0x80800180: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_80800184:
    // 0x80800184: jal         0x800852F0
    // 0x80800188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_4;
    // 0x80800188: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8080018C: lui         $a1, 0x3F03
    ctx->r5 = S32(0X3F03 << 16);
    // 0x80800190: ori         $a1, $a1, 0x4D6A
    ctx->r5 = ctx->r5 | 0X4D6A;
    // 0x80800194: jal         0x8008B348
    // 0x80800198: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x80800198: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x8080019C: beql        $v0, $zero, L_808001C0
    if (ctx->r2 == 0) {
        // 0x808001A0: lui         $a1, 0x3F27
        ctx->r5 = S32(0X3F27 << 16);
            goto L_808001C0;
    }
    goto skip_1;
    // 0x808001A0: lui         $a1, 0x3F27
    ctx->r5 = S32(0X3F27 << 16);
    skip_1:
    // 0x808001A4: jal         0x8009C984
    // 0x808001A8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8009C984(rdram, ctx);
        goto after_6;
    // 0x808001A8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_6:
    // 0x808001AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001B0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808001B4: jal         0x8009BA68
    // 0x808001B8: lui         $a2, 0x43B4
    ctx->r6 = S32(0X43B4 << 16);
    func_8009BA68(rdram, ctx);
        goto after_7;
    // 0x808001B8: lui         $a2, 0x43B4
    ctx->r6 = S32(0X43B4 << 16);
    after_7:
    // 0x808001BC: lui         $a1, 0x3F27
    ctx->r5 = S32(0X3F27 << 16);
L_808001C0:
    // 0x808001C0: ori         $a1, $a1, 0x65FE
    ctx->r5 = ctx->r5 | 0X65FE;
    // 0x808001C4: jal         0x8008B348
    // 0x808001C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_8;
    // 0x808001C8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x808001CC: beql        $v0, $zero, L_808001E4
    if (ctx->r2 == 0) {
        // 0x808001D0: lui         $a1, 0x3E18
        ctx->r5 = S32(0X3E18 << 16);
            goto L_808001E4;
    }
    goto skip_2;
    // 0x808001D0: lui         $a1, 0x3E18
    ctx->r5 = S32(0X3E18 << 16);
    skip_2:
    // 0x808001D4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808001D8: jal         0x8009B9B0
    // 0x808001DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_9;
    // 0x808001DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_9:
    // 0x808001E0: lui         $a1, 0x3E18
    ctx->r5 = S32(0X3E18 << 16);
L_808001E4:
    // 0x808001E4: ori         $a1, $a1, 0x5F07
    ctx->r5 = ctx->r5 | 0X5F07;
    // 0x808001E8: jal         0x8008B348
    // 0x808001EC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_10;
    // 0x808001EC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_10:
    // 0x808001F0: bne         $v0, $zero, L_808002B4
    if (ctx->r2 != 0) {
        // 0x808001F4: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(90, 0X3E4) << 16);
            goto L_808002B4;
    }
    // 0x808001F4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(90, 0X3E4) << 16);
    // 0x808001F8: lwc1        $f6, 0x3E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(90, 0X3E4));
    // 0x808001FC: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800200: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(90, 0X3E8) << 16);
    // 0x80800204: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800208: c.lt.s      $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f6.fl < ctx->f0.fl;
    // 0x8080020C: lui         $a1, 0x3EA8
    ctx->r5 = S32(0X3EA8 << 16);
    // 0x80800210: bc1f        L_8080022C
    if (!c1cs) {
        // 0x80800214: nop
    
            goto L_8080022C;
    }
    // 0x80800214: nop

    // 0x80800218: lwc1        $f8, 0x3E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(90, 0X3E8));
    // 0x8080021C: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x80800220: nop

    // 0x80800224: bc1tl       L_808002B8
    if (c1cs) {
        // 0x80800228: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_808002B8;
    }
    goto skip_3;
    // 0x80800228: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    skip_3:
L_8080022C:
    // 0x8080022C: jal         0x8008B348
    // 0x80800230: ori         $a1, $a1, 0x5879
    ctx->r5 = ctx->r5 | 0X5879;
    func_8008B348(rdram, ctx);
        goto after_11;
    // 0x80800230: ori         $a1, $a1, 0x5879
    ctx->r5 = ctx->r5 | 0X5879;
    after_11:
    // 0x80800234: bne         $v0, $zero, L_808002B4
    if (ctx->r2 != 0) {
        // 0x80800238: lwc1        $f0, 0x1C($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_808002B4;
    }
    // 0x80800238: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8080023C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(90, 0X3EC) << 16);
    // 0x80800240: lwc1        $f10, 0x3EC($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(90, 0X3EC));
    // 0x80800244: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(90, 0X3F0) << 16);
    // 0x80800248: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8080024C: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x80800250: lui         $a1, 0x3F14
    ctx->r5 = S32(0X3F14 << 16);
    // 0x80800254: bc1f        L_80800270
    if (!c1cs) {
        // 0x80800258: nop
    
            goto L_80800270;
    }
    // 0x80800258: nop

    // 0x8080025C: lwc1        $f16, 0x3F0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(90, 0X3F0));
    // 0x80800260: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80800264: nop

    // 0x80800268: bc1tl       L_808002B8
    if (c1cs) {
        // 0x8080026C: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_808002B8;
    }
    goto skip_4;
    // 0x8080026C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    skip_4:
L_80800270:
    // 0x80800270: jal         0x8008B348
    // 0x80800274: ori         $a1, $a1, 0x2C3D
    ctx->r5 = ctx->r5 | 0X2C3D;
    func_8008B348(rdram, ctx);
        goto after_12;
    // 0x80800274: ori         $a1, $a1, 0x2C3D
    ctx->r5 = ctx->r5 | 0X2C3D;
    after_12:
    // 0x80800278: bne         $v0, $zero, L_808002B4
    if (ctx->r2 != 0) {
        // 0x8080027C: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(90, 0X3F4) << 16);
            goto L_808002B4;
    }
    // 0x8080027C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(90, 0X3F4) << 16);
    // 0x80800280: lwc1        $f18, 0x3F4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(90, 0X3F4));
    // 0x80800284: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800288: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(90, 0X3F8) << 16);
    // 0x8080028C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800290: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80800294: nop

    // 0x80800298: bc1f        L_808002C8
    if (!c1cs) {
        // 0x8080029C: nop
    
            goto L_808002C8;
    }
    // 0x8080029C: nop

    // 0x808002A0: lwc1        $f6, 0x3F8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(90, 0X3F8));
    // 0x808002A4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x808002A8: nop

    // 0x808002AC: bc1f        L_808002C8
    if (!c1cs) {
        // 0x808002B0: nop
    
            goto L_808002C8;
    }
    // 0x808002B0: nop

L_808002B4:
    // 0x808002B4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_808002B8:
    // 0x808002B8: jal         0x80095760
    // 0x808002BC: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_80095760(rdram, ctx);
        goto after_13;
    // 0x808002BC: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_13:
    // 0x808002C0: b           L_808002D4
    // 0x808002C4: lui         $a1, 0x3F14
    ctx->r5 = S32(0X3F14 << 16);
        goto L_808002D4;
    // 0x808002C4: lui         $a1, 0x3F14
    ctx->r5 = S32(0X3F14 << 16);
L_808002C8:
    // 0x808002C8: jal         0x80095774
    // 0x808002CC: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    func_80095774(rdram, ctx);
        goto after_14;
    // 0x808002CC: addiu       $a1, $zero, 0x1F
    ctx->r5 = ADD32(0, 0X1F);
    after_14:
    // 0x808002D0: lui         $a1, 0x3F14
    ctx->r5 = S32(0X3F14 << 16);
L_808002D4:
    // 0x808002D4: ori         $a1, $a1, 0x2C3D
    ctx->r5 = ctx->r5 | 0X2C3D;
    // 0x808002D8: jal         0x8008B348
    // 0x808002DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_15;
    // 0x808002DC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x808002E0: beql        $v0, $zero, L_808002F8
    if (ctx->r2 == 0) {
        // 0x808002E4: lui         $a1, 0x3DF3
        ctx->r5 = S32(0X3DF3 << 16);
            goto L_808002F8;
    }
    goto skip_5;
    // 0x808002E4: lui         $a1, 0x3DF3
    ctx->r5 = S32(0X3DF3 << 16);
    skip_5:
    // 0x808002E8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808002EC: jal         0x8009B9B0
    // 0x808002F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_16;
    // 0x808002F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_16:
    // 0x808002F4: lui         $a1, 0x3DF3
    ctx->r5 = S32(0X3DF3 << 16);
L_808002F8:
    // 0x808002F8: ori         $a1, $a1, 0x4D6A
    ctx->r5 = ctx->r5 | 0X4D6A;
    // 0x808002FC: jal         0x8008B348
    // 0x80800300: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_17;
    // 0x80800300: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_17:
    // 0x80800304: beq         $v0, $zero, L_8080031C
    if (ctx->r2 == 0) {
        // 0x80800308: lui         $a2, 0x3F90
        ctx->r6 = S32(0X3F90 << 16);
            goto L_8080031C;
    }
    // 0x80800308: lui         $a2, 0x3F90
    ctx->r6 = S32(0X3F90 << 16);
    // 0x8080030C: ori         $a2, $a2, 0xA3D7
    ctx->r6 = ctx->r6 | 0XA3D7;
    // 0x80800310: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800314: jal         0x8009DE38
    // 0x80800318: addiu       $a1, $zero, 0x442C
    ctx->r5 = ADD32(0, 0X442C);
    func_8009DE38(rdram, ctx);
        goto after_18;
    // 0x80800318: addiu       $a1, $zero, 0x442C
    ctx->r5 = ADD32(0, 0X442C);
    after_18:
L_8080031C:
    // 0x8080031C: lui         $a1, 0x3E93
    ctx->r5 = S32(0X3E93 << 16);
    // 0x80800320: ori         $a1, $a1, 0xDD98
    ctx->r5 = ctx->r5 | 0XDD98;
    // 0x80800324: jal         0x8008B348
    // 0x80800328: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_19;
    // 0x80800328: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_19:
    // 0x8080032C: beq         $v0, $zero, L_80800344
    if (ctx->r2 == 0) {
        // 0x80800330: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_80800344;
    }
    // 0x80800330: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800334: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x80800338: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080033C: jal         0x8009DE38
    // 0x80800340: addiu       $a1, $zero, 0x442C
    ctx->r5 = ADD32(0, 0X442C);
    func_8009DE38(rdram, ctx);
        goto after_20;
    // 0x80800340: addiu       $a1, $zero, 0x442C
    ctx->r5 = ADD32(0, 0X442C);
    after_20:
L_80800344:
    // 0x80800344: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800348: jal         0x8008B348
    // 0x8080034C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008B348(rdram, ctx);
        goto after_21;
    // 0x8080034C: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_21:
    // 0x80800350: beq         $v0, $zero, L_80800368
    if (ctx->r2 == 0) {
        // 0x80800354: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_80800368;
    }
    // 0x80800354: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800358: lui         $a2, 0x3FA8
    ctx->r6 = S32(0X3FA8 << 16);
    // 0x8080035C: ori         $a2, $a2, 0xF5C3
    ctx->r6 = ctx->r6 | 0XF5C3;
    // 0x80800360: jal         0x8009DE38
    // 0x80800364: addiu       $a1, $zero, 0x442C
    ctx->r5 = ADD32(0, 0X442C);
    func_8009DE38(rdram, ctx);
        goto after_22;
    // 0x80800364: addiu       $a1, $zero, 0x442C
    ctx->r5 = ADD32(0, 0X442C);
    after_22:
L_80800368:
    // 0x80800368: jal         0x8008B324
    // 0x8080036C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B324(rdram, ctx);
        goto after_23;
    // 0x8080036C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_23:
    // 0x80800370: beq         $v0, $zero, L_8080037C
    if (ctx->r2 == 0) {
        // 0x80800374: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_8080037C;
    }
    // 0x80800374: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800378: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
L_8080037C:
    // 0x8080037C: jal         0x8008E35C
    // 0x80800380: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008E35C(rdram, ctx);
        goto after_24;
    // 0x80800380: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_24:
    // 0x80800384: beq         $v0, $zero, L_80800394
    if (ctx->r2 == 0) {
        // 0x80800388: addiu       $a1, $zero, 0x8
        ctx->r5 = ADD32(0, 0X8);
            goto L_80800394;
    }
    // 0x80800388: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8080038C: addiu       $t8, $zero, 0x4C
    ctx->r24 = ADD32(0, 0X4C);
    // 0x80800390: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
L_80800394:
    // 0x80800394: jal         0x80091A58
    // 0x80800398: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80091A58(rdram, ctx);
        goto after_25;
    // 0x80800398: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_25:
    // 0x8080039C: beql        $v0, $zero, L_808003B4
    if (ctx->r2 == 0) {
        // 0x808003A0: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_808003B4;
    }
    goto skip_6;
    // 0x808003A0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    skip_6:
    // 0x808003A4: jal         0x8009FE84
    // 0x808003A8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8009FE84(rdram, ctx);
        goto after_26;
    // 0x808003A8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_26:
    // 0x808003AC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808003B0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
L_808003B4:
    // 0x808003B4: jal         0x8009E5C8
    // 0x808003B8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_27;
    // 0x808003B8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_27:
    // 0x808003BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808003C4: jr          $ra
    // 0x808003C8: nop

    return;
    // 0x808003C8: nop

;}
RECOMP_FUNC void bsclaw_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003CC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808003D0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(90, 0X400) << 16);
    // 0x808003D4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808003D8: jr          $ra
    // 0x808003DC: lw          $v0, 0x400($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(90, 0X400));
    return;
    // 0x808003DC: lw          $v0, 0x400($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(90, 0X400));
;}
RECOMP_FUNC void func_80800000_bsclimb(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: jal         0x80098634
    // 0x80800010: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80098634(rdram, ctx);
        goto after_0;
    // 0x80800010: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800014: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80800018: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8080001C: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80800020: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(91, 0X8C0) << 16);
    // 0x80800024: addiu       $t7, $t7, 0x8C0
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(91, 0X8C0));
    // 0x80800028: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8080002C: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80800030: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80800034: addu        $t0, $v1, $t9
    ctx->r8 = ADD32(ctx->r3, ctx->r25);
    // 0x80800038: lw          $a2, -0x10($t0)
    ctx->r6 = MEM_W(ctx->r8, -0X10);
    // 0x8080003C: lw          $a3, -0xC($t0)
    ctx->r7 = MEM_W(ctx->r8, -0XC);
    // 0x80800040: lh          $a1, -0x12($v1)
    ctx->r5 = MEM_H(ctx->r3, -0X12);
    // 0x80800044: jal         0x8009DF94
    // 0x80800048: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009DF94(rdram, ctx);
        goto after_1;
    // 0x80800048: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080004C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800050: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800054: jr          $ra
    // 0x80800058: nop

    return;
    // 0x80800058: nop

;}
RECOMP_FUNC void func_8080005C_bsclimb(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080005C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800060: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800064: jal         0x8009EF34
    // 0x80800068: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_8009EF34(rdram, ctx);
        goto after_0;
    // 0x80800068: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080006C: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800070: jal         0x800F2100
    // 0x80800074: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_1;
    // 0x80800074: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x80800078: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(91, 0X8B0) << 16);
    // 0x8080007C: lwc1        $f14, 0x8B0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(91, 0X8B0));
    // 0x80800080: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80800084: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800088: c.lt.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl < ctx->f14.fl;
    // 0x8080008C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800090: bc1fl       L_808000A8
    if (!c1cs) {
        // 0x80800094: mtc1        $at, $f4
        ctx->f4.u32l = ctx->r1;
            goto L_808000A8;
    }
    goto skip_0;
    // 0x80800094: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    skip_0:
    // 0x80800098: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8080009C: b           L_808000C0
    // 0x808000A0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_808000C0;
    // 0x808000A0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x808000A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
L_808000A8:
    // 0x808000A8: lui         $a3, 0x42C8
    ctx->r7 = S32(0X42C8 << 16);
    // 0x808000AC: jal         0x800F1344
    // 0x808000B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F1344(rdram, ctx);
        goto after_2;
    // 0x808000B0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x808000B4: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x808000B8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808000BC: nop

L_808000C0:
    // 0x808000C0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x808000C4: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    // 0x808000C8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x808000CC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x808000D0: jal         0x8009B94C
    // 0x808000D4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009B94C(rdram, ctx);
        goto after_3;
    // 0x808000D4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x808000D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000DC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808000E0: jr          $ra
    // 0x808000E4: nop

    return;
    // 0x808000E4: nop

;}
RECOMP_FUNC void func_808000E8_bsclimb(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000F4: jal         0x8009861C
    // 0x808000F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009861C(rdram, ctx);
        goto after_0;
    // 0x808000F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000FC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800100: bne         $v0, $at, L_80800118
    if (ctx->r2 != ctx->r1) {
        // 0x80800104: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800118;
    }
    // 0x80800104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800108: jal         0x8009D2D8
    // 0x8080010C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009D2D8(rdram, ctx);
        goto after_1;
    // 0x8080010C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x80800110: b           L_80800128
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800128;
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800118:
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080011C: jal         0x8009D2D8
    // 0x80800120: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_8009D2D8(rdram, ctx);
        goto after_2;
    // 0x80800120: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_2:
    // 0x80800124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800128:
    // 0x80800128: jal         0x8009C908
    // 0x8080012C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009C908(rdram, ctx);
        goto after_3;
    // 0x8080012C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x80800130: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800134: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x80800138: jal         0x8009C99C
    // 0x8080013C: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    func_8009C99C(rdram, ctx);
        goto after_4;
    // 0x8080013C: lui         $a2, 0x4170
    ctx->r6 = S32(0X4170 << 16);
    after_4:
    // 0x80800140: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x80800144: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080014C: jal         0x8009F1C8
    // 0x80800150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_5;
    // 0x80800150: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800158: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080015C: jal         0x8009F1C8
    // 0x80800160: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_6;
    // 0x80800160: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_6:
    // 0x80800164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800168: jal         0x8009B800
    // 0x8080016C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8009B800(rdram, ctx);
        goto after_7;
    // 0x8080016C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_7:
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800174: jal         0x8009BC5C
    // 0x80800178: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    func_8009BC5C(rdram, ctx);
        goto after_8;
    // 0x80800178: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    after_8:
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800180: jal         0x800961AC
    // 0x80800184: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800961AC(rdram, ctx);
        goto after_9;
    // 0x80800184: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_9:
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080018C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    // 0x80800190: jal         0x800959C8
    // 0x80800194: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_800959C8(rdram, ctx);
        goto after_10;
    // 0x80800194: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_10:
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080019C: jal         0x800A4DA4
    // 0x808001A0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_800A4DA4(rdram, ctx);
        goto after_11;
    // 0x808001A0: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_11:
    // 0x808001A4: jal         0x8008E0E8
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E0E8(rdram, ctx);
        goto after_12;
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808001AC: beq         $v0, $zero, L_808001BC
    if (ctx->r2 == 0) {
        // 0x808001B0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001BC;
    }
    // 0x808001B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B4: jal         0x80084788
    // 0x808001B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_13;
    // 0x808001B8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_13:
L_808001BC:
    // 0x808001BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808001C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001C4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001C8: jr          $ra
    // 0x808001CC: nop

    return;
    // 0x808001CC: nop

;}
RECOMP_FUNC void func_808001D0_bsclimb(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001D8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001E0: jal         0x8009E74C
    // 0x808001E4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x808001E4: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x808001E8: bnel        $v0, $zero, L_80800248
    if (ctx->r2 != 0) {
        // 0x808001EC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800248;
    }
    goto skip_0;
    // 0x808001EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808001F0: jal         0x800A4E30
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4E30(rdram, ctx);
        goto after_1;
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808001F8: jal         0x8009F1E0
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F1E0(rdram, ctx);
        goto after_2;
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800200: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800204: jal         0x8008CA4C
    // 0x80800208: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_3;
    // 0x80800208: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800210: jal         0x8009B800
    // 0x80800214: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009B800(rdram, ctx);
        goto after_4;
    // 0x80800214: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080021C: jal         0x800961AC
    // 0x80800220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_5;
    // 0x80800220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800224: jal         0x80095A40
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_6;
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080022C: jal         0x8008E0E8
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E0E8(rdram, ctx);
        goto after_7;
    // 0x80800230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800234: beq         $v0, $zero, L_80800244
    if (ctx->r2 == 0) {
        // 0x80800238: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800244;
    }
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: jal         0x80084788
    // 0x80800240: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_8;
    // 0x80800240: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
L_80800244:
    // 0x80800244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800248:
    // 0x80800248: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080024C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800250: jr          $ra
    // 0x80800254: nop

    return;
    // 0x80800254: nop

;}
RECOMP_FUNC void func_80800258_bsclimb(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800258: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080025C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800260: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800264: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800268: jal         0x800DC0C0
    // 0x8080026C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800DC0C0(rdram, ctx);
        goto after_0;
    // 0x8080026C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800270: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800274: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800278: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8080027C: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80800280: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80800284: swc1        $f10, 0x16C($t6)
    MEM_W(0X16C, ctx->r14) = ctx->f10.u32l;
    // 0x80800288: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080028C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800290: jr          $ra
    // 0x80800294: nop

    return;
    // 0x80800294: nop

;}
RECOMP_FUNC void func_80800298_bsclimb(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800298: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080029C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002A0: jal         0x8009BB0C
    // 0x808002A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009BB0C(rdram, ctx);
        goto after_0;
    // 0x808002A4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808002A8: jal         0x800F2100
    // 0x808002AC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_1;
    // 0x808002AC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_1:
    // 0x808002B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808002B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808002B8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808002BC: nop

    // 0x808002C0: bc1f        L_808002CC
    if (!c1cs) {
        // 0x808002C4: nop
    
            goto L_808002CC;
    }
    // 0x808002C4: nop

    // 0x808002C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808002CC:
    // 0x808002CC: bnel        $v0, $zero, L_80800308
    if (ctx->r2 != 0) {
        // 0x808002D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800308;
    }
    goto skip_0;
    // 0x808002D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808002D4: jal         0x8009C984
    // 0x808002D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009C984(rdram, ctx);
        goto after_2;
    // 0x808002D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808002DC: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x808002E0: jal         0x8009C990
    // 0x808002E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009C990(rdram, ctx);
        goto after_3;
    // 0x808002E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_3:
    // 0x808002E8: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x808002EC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808002F0: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x808002F4: nop

    // 0x808002F8: bc1tl       L_80800308
    if (c1cs) {
        // 0x808002FC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800308;
    }
    goto skip_1;
    // 0x808002FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80800300: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800308:
    // 0x80800308: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080030C: jr          $ra
    // 0x80800310: nop

    return;
    // 0x80800310: nop

;}
RECOMP_FUNC void bsclimb_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800314: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800318: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080031C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800320: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800324: jal         0x8008FE68
    // 0x80800328: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_8008FE68(rdram, ctx);
        goto after_0;
    // 0x80800328: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_0:
    // 0x8080032C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800330: jal         0x80098590
    // 0x80800334: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80098590(rdram, ctx);
        goto after_1;
    // 0x80800334: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080033C: jal         0x8009E77C
    // 0x80800340: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8009E77C(rdram, ctx);
        goto after_2;
    // 0x80800340: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_2:
    // 0x80800344: bne         $v0, $zero, L_8080036C
    if (ctx->r2 != 0) {
        // 0x80800348: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_8080036C;
    }
    // 0x80800348: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8080034C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80800350: jal         0x800F1E6C
    // 0x80800354: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    func_800F1E6C(rdram, ctx);
        goto after_3;
    // 0x80800354: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    after_3:
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080035C: jal         0x8009C914
    // 0x80800360: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_8009C914(rdram, ctx);
        goto after_4;
    // 0x80800360: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_4:
    // 0x80800364: jal         0x8009C974
    // 0x80800368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_5;
    // 0x80800368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
L_8080036C:
    // 0x8080036C: jal         0x800C6DA0
    // 0x80800370: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_800C6DA0(rdram, ctx);
        goto after_6;
    // 0x80800370: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_6:
    // 0x80800374: lui         $a2, 0x4028
    ctx->r6 = S32(0X4028 << 16);
    // 0x80800378: ori         $a2, $a2, 0xF5C3
    ctx->r6 = ctx->r6 | 0XF5C3;
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800380: jal         0x8008CB3C
    // 0x80800384: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    func_8008CB3C(rdram, ctx);
        goto after_7;
    // 0x80800384: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    after_7:
    // 0x80800388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080038C: jal         0x8008CA4C
    // 0x80800390: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_8;
    // 0x80800390: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800394: jal         0x800000E8
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000E8_bsclimb(rdram, ctx);
        goto after_9;
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080039C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808003A0: sw          $t6, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r14;
    // 0x808003A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003A8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x808003AC: jal         0x80000258
    // 0x808003B0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_80800258_bsclimb(rdram, ctx);
        goto after_10;
    // 0x808003B0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_10:
    // 0x808003B4: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x808003B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808003C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808003C4: jr          $ra
    // 0x808003C8: nop

    return;
    // 0x808003C8: nop

;}
RECOMP_FUNC void bsclimb_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808003D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808003DC: jal         0x8008CABC
    // 0x808003E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808003E0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808003E4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808003E8: jal         0x800956B8
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800956B8(rdram, ctx);
        goto after_1;
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808003F0: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x808003F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808003F8: beq         $v0, $zero, L_80800410
    if (ctx->r2 == 0) {
        // 0x808003FC: nop
    
            goto L_80800410;
    }
    // 0x808003FC: nop

    // 0x80800400: beq         $v0, $at, L_8080045C
    if (ctx->r2 == ctx->r1) {
        // 0x80800404: nop
    
            goto L_8080045C;
    }
    // 0x80800404: nop

    // 0x80800408: b           L_80800490
    // 0x8080040C: nop

        goto L_80800490;
    // 0x8080040C: nop

L_80800410:
    // 0x80800410: jal         0x800D8FF8
    // 0x80800414: nop

    func_800D8FF8(rdram, ctx);
        goto after_2;
    // 0x80800414: nop

    after_2:
    // 0x80800418: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x8080041C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80800420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800424: sub.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f0.fl;
    // 0x80800428: addiu       $a1, $zero, 0xB1
    ctx->r5 = ADD32(0, 0XB1);
    // 0x8080042C: lui         $a2, 0x403D
    ctx->r6 = S32(0X403D << 16);
    // 0x80800430: swc1        $f6, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f6.u32l;
    // 0x80800434: lwc1        $f10, 0x16C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800438: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8080043C: nop

    // 0x80800440: bc1f        L_80800490
    if (!c1cs) {
        // 0x80800444: nop
    
            goto L_80800490;
    }
    // 0x80800444: nop

    // 0x80800448: jal         0x8008CCBC
    // 0x8080044C: ori         $a2, $a2, 0x70A4
    ctx->r6 = ctx->r6 | 0X70A4;
    func_8008CCBC(rdram, ctx);
        goto after_3;
    // 0x8080044C: ori         $a2, $a2, 0x70A4
    ctx->r6 = ctx->r6 | 0X70A4;
    after_3:
    // 0x80800450: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800454: b           L_80800490
    // 0x80800458: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_80800490;
    // 0x80800458: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_8080045C:
    // 0x8080045C: jal         0x8008B324
    // 0x80800460: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_4;
    // 0x80800460: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800464: beq         $v0, $zero, L_80800490
    if (ctx->r2 == 0) {
        // 0x80800468: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800490;
    }
    // 0x80800468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080046C: lui         $a2, 0x4028
    ctx->r6 = S32(0X4028 << 16);
    // 0x80800470: ori         $a2, $a2, 0xF5C3
    ctx->r6 = ctx->r6 | 0XF5C3;
    // 0x80800474: jal         0x8008CB3C
    // 0x80800478: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    func_8008CB3C(rdram, ctx);
        goto after_5;
    // 0x80800478: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    after_5:
    // 0x8080047C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800480: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    // 0x80800484: jal         0x80000258
    // 0x80800488: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_80800258_bsclimb(rdram, ctx);
        goto after_6;
    // 0x80800488: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_6:
    // 0x8080048C: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
L_80800490:
    // 0x80800490: jal         0x8000005C
    // 0x80800494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080005C_bsclimb(rdram, ctx);
        goto after_7;
    // 0x80800494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800498: jal         0x80000298
    // 0x8080049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800298_bsclimb(rdram, ctx);
        goto after_8;
    // 0x8080049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808004A0: beq         $v0, $zero, L_808004B0
    if (ctx->r2 == 0) {
        // 0x808004A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004B0;
    }
    // 0x808004A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004A8: addiu       $t7, $zero, 0x50
    ctx->r15 = ADD32(0, 0X50);
    // 0x808004AC: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_808004B0:
    // 0x808004B0: jal         0x80091A58
    // 0x808004B4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_9;
    // 0x808004B4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_9:
    // 0x808004B8: beq         $v0, $zero, L_808004C8
    if (ctx->r2 == 0) {
        // 0x808004BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808004C8;
    }
    // 0x808004BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004C0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x808004C4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808004C8:
    // 0x808004C8: lw          $t9, 0x160($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X160);
    // 0x808004CC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x808004D0: bnel        $t9, $zero, L_808004E0
    if (ctx->r25 != 0) {
        // 0x808004D4: sw          $zero, 0x160($s0)
        MEM_W(0X160, ctx->r16) = 0;
            goto L_808004E0;
    }
    goto skip_0;
    // 0x808004D4: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    skip_0:
    // 0x808004D8: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x808004DC: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
L_808004E0:
    // 0x808004E0: jal         0x8009E5C8
    // 0x808004E4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x808004E4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_10:
    // 0x808004E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808004EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808004F0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808004F4: jr          $ra
    // 0x808004F8: nop

    return;
    // 0x808004F8: nop

;}
RECOMP_FUNC void bsclimb_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800504: jal         0x800001D0
    // 0x80800508: nop

    func_808001D0_bsclimb(rdram, ctx);
        goto after_0;
    // 0x80800508: nop

    after_0:
    // 0x8080050C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800510: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800514: jr          $ra
    // 0x80800518: nop

    return;
    // 0x80800518: nop

;}
RECOMP_FUNC void bsclimb_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080051C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800520: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(91, 0X8FC) << 16);
    // 0x80800524: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800528: jr          $ra
    // 0x8080052C: lw          $v0, 0x8FC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(91, 0X8FC));
    return;
    // 0x8080052C: lw          $v0, 0x8FC($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(91, 0X8FC));
;}
RECOMP_FUNC void bsclimb_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800530: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800534: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800538: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080053C: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80800540: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800544: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800548: jal         0x8008CB3C
    // 0x8080054C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x8080054C: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_0:
    // 0x80800550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800554: jal         0x8008CA4C
    // 0x80800558: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8008CA4C(rdram, ctx);
        goto after_1;
    // 0x80800558: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8080055C: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800560: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800568: jal         0x8008C9BC
    // 0x8080056C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_2;
    // 0x8080056C: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_2:
    // 0x80800570: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(91, 0X8B4) << 16);
    // 0x80800574: lwc1        $f4, 0x8B4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(91, 0X8B4));
    // 0x80800578: lui         $a3, 0x3F19
    ctx->r7 = S32(0X3F19 << 16);
    // 0x8080057C: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x80800580: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800584: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80800588: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x8080058C: jal         0x8008C9F0
    // 0x80800590: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_3;
    // 0x80800590: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80800594: jal         0x800000E8
    // 0x80800598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000E8_bsclimb(rdram, ctx);
        goto after_4;
    // 0x80800598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080059C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808005A0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808005A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808005A8: jr          $ra
    // 0x808005AC: nop

    return;
    // 0x808005AC: nop

;}
RECOMP_FUNC void bsclimb_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808005B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808005B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808005BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808005C0: jal         0x800956B8
    // 0x808005C4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_800956B8(rdram, ctx);
        goto after_0;
    // 0x808005C4: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_0:
    // 0x808005C8: jal         0x8000005C
    // 0x808005CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080005C_bsclimb(rdram, ctx);
        goto after_1;
    // 0x808005CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808005D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005D4: jal         0x8008CB10
    // 0x808005D8: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x808005D8: lui         $a1, 0x3E80
    ctx->r5 = S32(0X3E80 << 16);
    after_2:
    // 0x808005DC: beq         $v0, $zero, L_808005EC
    if (ctx->r2 == 0) {
        // 0x808005E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005EC;
    }
    // 0x808005E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005E4: jal         0x80000000
    // 0x808005E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800000_bsclimb(rdram, ctx);
        goto after_3;
    // 0x808005E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_808005EC:
    // 0x808005EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005F0: jal         0x8008CB10
    // 0x808005F4: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x808005F4: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    after_4:
    // 0x808005F8: beq         $v0, $zero, L_80800608
    if (ctx->r2 == 0) {
        // 0x808005FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800608;
    }
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800600: jal         0x80000000
    // 0x80800604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800000_bsclimb(rdram, ctx);
        goto after_5;
    // 0x80800604: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
L_80800608:
    // 0x80800608: jal         0x80000298
    // 0x8080060C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800298_bsclimb(rdram, ctx);
        goto after_6;
    // 0x8080060C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800610: bnel        $v0, $zero, L_80800644
    if (ctx->r2 != 0) {
        // 0x80800614: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800644;
    }
    goto skip_0;
    // 0x80800614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800618: jal         0x8009BB50
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_7;
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800620: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800624: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800628: addiu       $t6, $zero, 0x4F
    ctx->r14 = ADD32(0, 0X4F);
    // 0x8080062C: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800630: nop

    // 0x80800634: bc1fl       L_80800644
    if (!c1cs) {
        // 0x80800638: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800644;
    }
    goto skip_1;
    // 0x80800638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x8080063C: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80800640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800644:
    // 0x80800644: jal         0x8009C128
    // 0x80800648: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_8009C128(rdram, ctx);
        goto after_8;
    // 0x80800648: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_8:
    // 0x8080064C: jal         0x8009BB0C
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB0C(rdram, ctx);
        goto after_9;
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800654: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800658: nop

    // 0x8080065C: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80800660: nop

    // 0x80800664: bc1f        L_80800690
    if (!c1cs) {
        // 0x80800668: nop
    
            goto L_80800690;
    }
    // 0x80800668: nop

    // 0x8080066C: jal         0x800985B8
    // 0x80800670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800985B8(rdram, ctx);
        goto after_10;
    // 0x80800670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800674: lwc1        $f8, 0x34($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80800678: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8080067C: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x80800680: nop

    // 0x80800684: bc1f        L_80800690
    if (!c1cs) {
        // 0x80800688: nop
    
            goto L_80800690;
    }
    // 0x80800688: nop

    // 0x8080068C: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
L_80800690:
    // 0x80800690: jal         0x80098640
    // 0x80800694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80098640(rdram, ctx);
        goto after_11;
    // 0x80800694: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800698: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080069C: bnel        $v0, $at, L_80800710
    if (ctx->r2 != ctx->r1) {
        // 0x808006A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800710;
    }
    goto skip_2;
    // 0x808006A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808006A4: jal         0x8009BB0C
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB0C(rdram, ctx);
        goto after_12;
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808006AC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x808006B0: nop

    // 0x808006B4: c.lt.s      $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f10.fl < ctx->f0.fl;
    // 0x808006B8: nop

    // 0x808006BC: bc1fl       L_80800710
    if (!c1cs) {
        // 0x808006C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800710;
    }
    goto skip_3;
    // 0x808006C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x808006C4: jal         0x8009864C
    // 0x808006C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009864C(rdram, ctx);
        goto after_13;
    // 0x808006C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808006CC: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808006D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006D4: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x808006D8: nop

    // 0x808006DC: bc1fl       L_80800710
    if (!c1cs) {
        // 0x808006E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800710;
    }
    goto skip_4;
    // 0x808006E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x808006E4: jal         0x800985C4
    // 0x808006E8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_800985C4(rdram, ctx);
        goto after_14;
    // 0x808006E8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_14:
    // 0x808006EC: beq         $v0, $zero, L_80800708
    if (ctx->r2 == 0) {
        // 0x808006F0: addiu       $t8, $zero, 0x51
        ctx->r24 = ADD32(0, 0X51);
            goto L_80800708;
    }
    // 0x808006F0: addiu       $t8, $zero, 0x51
    ctx->r24 = ADD32(0, 0X51);
    // 0x808006F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006F8: jal         0x800848A0
    // 0x808006FC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    _badrone_entrypoint_23(rdram, ctx);
        goto after_15;
    // 0x808006FC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_15:
    // 0x80800700: b           L_8080070C
    // 0x80800704: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
        goto L_8080070C;
    // 0x80800704: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_80800708:
    // 0x80800708: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
L_8080070C:
    // 0x8080070C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800710:
    // 0x80800710: jal         0x80091A58
    // 0x80800714: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_16;
    // 0x80800714: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_16:
    // 0x80800718: beq         $v0, $zero, L_80800728
    if (ctx->r2 == 0) {
        // 0x8080071C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800728;
    }
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800720: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x80800724: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
L_80800728:
    // 0x80800728: lw          $t0, 0x160($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X160);
    // 0x8080072C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80800730: bnel        $t0, $zero, L_80800740
    if (ctx->r8 != 0) {
        // 0x80800734: sw          $zero, 0x160($s0)
        MEM_W(0X160, ctx->r16) = 0;
            goto L_80800740;
    }
    goto skip_5;
    // 0x80800734: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    skip_5:
    // 0x80800738: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x8080073C: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
L_80800740:
    // 0x80800740: jal         0x8009E5C8
    // 0x80800744: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_8009E5C8(rdram, ctx);
        goto after_17;
    // 0x80800744: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_17:
    // 0x80800748: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080074C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800750: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800754: jr          $ra
    // 0x80800758: nop

    return;
    // 0x80800758: nop

;}
RECOMP_FUNC void bsclimb_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080075C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800760: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800764: jal         0x800001D0
    // 0x80800768: nop

    func_808001D0_bsclimb(rdram, ctx);
        goto after_0;
    // 0x80800768: nop

    after_0:
    // 0x8080076C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800770: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800774: jr          $ra
    // 0x80800778: nop

    return;
    // 0x80800778: nop

;}
RECOMP_FUNC void bsclimb_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080077C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800780: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(91, 0X90C) << 16);
    // 0x80800784: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800788: jr          $ra
    // 0x8080078C: lw          $v0, 0x90C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(91, 0X90C));
    return;
    // 0x8080078C: lw          $v0, 0x90C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(91, 0X90C));
;}
RECOMP_FUNC void bsclimb_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800798: lui         $a2, 0x4028
    ctx->r6 = S32(0X4028 << 16);
    // 0x8080079C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808007A0: ori         $a2, $a2, 0xF5C3
    ctx->r6 = ctx->r6 | 0XF5C3;
    // 0x808007A4: jal         0x8008CB3C
    // 0x808007A8: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x808007A8: addiu       $a1, $zero, 0xB2
    ctx->r5 = ADD32(0, 0XB2);
    after_0:
    // 0x808007AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808007B0: jal         0x8008CA4C
    // 0x808007B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_1;
    // 0x808007B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808007B8: jal         0x800000E8
    // 0x808007BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000E8_bsclimb(rdram, ctx);
        goto after_2;
    // 0x808007BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808007C0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808007C4: jal         0x8009B800
    // 0x808007C8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8009B800(rdram, ctx);
        goto after_3;
    // 0x808007C8: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_3:
    // 0x808007CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007D4: jr          $ra
    // 0x808007D8: nop

    return;
    // 0x808007D8: nop

;}
RECOMP_FUNC void bsclimb_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808007E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007E4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808007E8: jal         0x8009CC68
    // 0x808007EC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_8009CC68(rdram, ctx);
        goto after_0;
    // 0x808007EC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808007F0: bne         $v0, $zero, L_808007FC
    if (ctx->r2 != 0) {
        // 0x808007F4: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_808007FC;
    }
    // 0x808007F4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808007F8: addiu       $a1, $zero, 0x4F
    ctx->r5 = ADD32(0, 0X4F);
L_808007FC:
    // 0x808007FC: jal         0x8009E5C8
    // 0x80800800: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x80800800: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080080C: jr          $ra
    // 0x80800810: nop

    return;
    // 0x80800810: nop

;}
RECOMP_FUNC void bsclimb_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800814: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080081C: jal         0x800001D0
    // 0x80800820: nop

    func_808001D0_bsclimb(rdram, ctx);
        goto after_0;
    // 0x80800820: nop

    after_0:
    // 0x80800824: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800828: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080082C: jr          $ra
    // 0x80800830: nop

    return;
    // 0x80800830: nop

;}
RECOMP_FUNC void bsclimb_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800834: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800838: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(91, 0X91C) << 16);
    // 0x8080083C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800840: jr          $ra
    // 0x80800844: lw          $v0, 0x91C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(91, 0X91C));
    return;
    // 0x80800844: lw          $v0, 0x91C($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(91, 0X91C));
;}
RECOMP_FUNC void bsclimb_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080084C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800850: jal         0x8009E6EC
    // 0x80800854: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800854: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800858: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x8080085C: bne         $v0, $at, L_80800870
    if (ctx->r2 != ctx->r1) {
        // 0x80800860: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800870;
    }
    // 0x80800860: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800864: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800868: b           L_80800880
    // 0x8080086C: sw          $t6, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->r14;
        goto L_80800880;
    // 0x8080086C: sw          $t6, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->r14;
L_80800870:
    // 0x80800870: jal         0x80099B94
    // 0x80800874: nop

    func_80099B94(rdram, ctx);
        goto after_1;
    // 0x80800874: nop

    after_1:
    // 0x80800878: b           L_8080089C
    // 0x8080087C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080089C;
    // 0x8080087C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800880:
    // 0x80800880: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800884: jal         0x8009E830
    // 0x80800888: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E830(rdram, ctx);
        goto after_2;
    // 0x80800888: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x8080088C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800890: jal         0x8009E5C8
    // 0x80800894: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80800894: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080089C:
    // 0x8080089C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008A0: jr          $ra
    // 0x808008A4: nop

    return;
    // 0x808008A4: nop

    // 0x808008A8: nop

    // 0x808008AC: nop

;}
RECOMP_FUNC void func_80800000_bscrashout(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: lui         $a1, 0x3EBB
    ctx->r5 = S32(0X3EBB << 16);
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800014: jal         0x8008CB10
    // 0x80800018: ori         $a1, $a1, 0x573F
    ctx->r5 = ctx->r5 | 0X573F;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x80800018: ori         $a1, $a1, 0x573F
    ctx->r5 = ctx->r5 | 0X573F;
    after_0:
    // 0x8080001C: beq         $v0, $zero, L_80800034
    if (ctx->r2 == 0) {
        // 0x80800020: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800034;
    }
    // 0x80800020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800024: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x80800028: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080002C: jal         0x8009DB04
    // 0x80800030: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    func_8009DB04(rdram, ctx);
        goto after_1;
    // 0x80800030: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    after_1:
L_80800034:
    // 0x80800034: lui         $a1, 0x3F2F
    ctx->r5 = S32(0X3F2F << 16);
    // 0x80800038: ori         $a1, $a1, 0xAACE
    ctx->r5 = ctx->r5 | 0XAACE;
    // 0x8080003C: jal         0x8008CB10
    // 0x80800040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80800040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800044: beq         $v0, $zero, L_80800074
    if (ctx->r2 == 0) {
        // 0x80800048: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800074;
    }
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080004C: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800050: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800054: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x80800058: jal         0x8009DB04
    // 0x8080005C: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DB04(rdram, ctx);
        goto after_3;
    // 0x8080005C: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_3:
    // 0x80800060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800064: addiu       $a1, $zero, 0x427
    ctx->r5 = ADD32(0, 0X427);
    // 0x80800068: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080006C: jal         0x8009DB04
    // 0x80800070: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DB04(rdram, ctx);
        goto after_4;
    // 0x80800070: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_4:
L_80800074:
    // 0x80800074: jal         0x8008CAC8
    // 0x80800078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_5;
    // 0x80800078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080007C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(92, 0X3C0) << 16);
    // 0x80800080: lwc1        $f4, 0x3C0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(92, 0X3C0));
    // 0x80800084: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800088: nop

    // 0x8080008C: bc1fl       L_808000A0
    if (!c1cs) {
        // 0x80800090: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808000A0;
    }
    goto skip_0;
    // 0x80800090: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800094: jal         0x80084A10
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_9(rdram, ctx);
        goto after_6;
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080009C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000A0:
    // 0x808000A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000A8: jr          $ra
    // 0x808000AC: nop

    return;
    // 0x808000AC: nop

;}
RECOMP_FUNC void func_808000B0_bscrashout(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808000B8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808000BC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808000C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000C4: beq         $a1, $at, L_808000E8
    if (ctx->r5 == ctx->r1) {
        // 0x808000C8: sw          $a1, 0x15C($a0)
        MEM_W(0X15C, ctx->r4) = ctx->r5;
            goto L_808000E8;
    }
    // 0x808000C8: sw          $a1, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->r5;
    // 0x808000CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808000D0: beq         $a1, $at, L_80800150
    if (ctx->r5 == ctx->r1) {
        // 0x808000D4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800150;
    }
    // 0x808000D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808000D8: beq         $a1, $at, L_80800170
    if (ctx->r5 == ctx->r1) {
        // 0x808000DC: nop
    
            goto L_80800170;
    }
    // 0x808000DC: nop

    // 0x808000E0: b           L_808001B8
    // 0x808000E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808001B8;
    // 0x808000E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808000E8:
    // 0x808000E8: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x808000EC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F4: jal         0x8008CCBC
    // 0x808000F8: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x808000F8: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    after_0:
    // 0x808000FC: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80800100: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800108: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080010C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800110: jal         0x8009FFD8
    // 0x80800114: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800114: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800118: jal         0x8009C990
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_2;
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800120: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800124: jal         0x8009B9C0
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_3;
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800130: jal         0x8009B9B0
    // 0x80800134: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800134: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_4:
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080013C: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x80800140: jal         0x8009BA68
    // 0x80800144: lw          $a2, 0x16C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X16C);
    func_8009BA68(rdram, ctx);
        goto after_5;
    // 0x80800144: lw          $a2, 0x16C($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X16C);
    after_5:
    // 0x80800148: b           L_808001B8
    // 0x8080014C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808001B8;
    // 0x8080014C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800150:
    // 0x80800150: jal         0x800951B4
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800951B4(rdram, ctx);
        goto after_6;
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: addiu       $a1, $zero, 0xD2
    ctx->r5 = ADD32(0, 0XD2);
    // 0x80800160: jal         0x8008CCBC
    // 0x80800164: lui         $a2, 0x4010
    ctx->r6 = S32(0X4010 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_7;
    // 0x80800164: lui         $a2, 0x4010
    ctx->r6 = S32(0X4010 << 16);
    after_7:
    // 0x80800168: b           L_808001B8
    // 0x8080016C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808001B8;
    // 0x8080016C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800170:
    // 0x80800170: jal         0x800A0180
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A0180(rdram, ctx);
        goto after_8;
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800178: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080017C: jal         0x800A4DFC
    // 0x80800180: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800A4DFC(rdram, ctx);
        goto after_9;
    // 0x80800180: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_9:
    // 0x80800184: jal         0x800A4CA8
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_10;
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080018C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800190: jal         0x80089288
    // 0x80800194: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    _ncbadie_entrypoint_3(rdram, ctx);
        goto after_11;
    // 0x80800194: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_11:
    // 0x80800198: jal         0x80085208
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_1(rdram, ctx);
        goto after_12;
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808001A0: lui         $a2, 0x404C
    ctx->r6 = S32(0X404C << 16);
    // 0x808001A4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001AC: jal         0x80085338
    // 0x808001B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_13;
    // 0x808001B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x808001B4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808001B8:
    // 0x808001B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808001BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808001C0: jr          $ra
    // 0x808001C4: nop

    return;
    // 0x808001C4: nop

;}
RECOMP_FUNC void bscrashout_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001D0: jal         0x8009BD88
    // 0x808001D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BD88(rdram, ctx);
        goto after_0;
    // 0x808001D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001D8: jal         0x8008E95C
    // 0x808001DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E95C(rdram, ctx);
        goto after_1;
    // 0x808001DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808001E0: jal         0x800951B4
    // 0x808001E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800951B4(rdram, ctx);
        goto after_2;
    // 0x808001E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808001E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001F0: jr          $ra
    // 0x808001F4: nop

    return;
    // 0x808001F4: nop

;}
RECOMP_FUNC void bscrashout_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800200: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800204: jal         0x80099A34
    // 0x80800208: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80099A34(rdram, ctx);
        goto after_0;
    // 0x80800208: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080020C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800210: jal         0x8009C914
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_1;
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800218: jal         0x8009C974
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_2;
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800224: jal         0x8009D89C
    // 0x80800228: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009D89C(rdram, ctx);
        goto after_3;
    // 0x80800228: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x8080022C: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800230: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800234: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800238: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x8080023C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800240: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80800244: jal         0x80085490
    // 0x80800248: nop

    _bamotor_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x80800248: nop

    after_4:
    // 0x8080024C: jal         0x8008E944
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_5;
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800254: jal         0x8009514C
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009514C(rdram, ctx);
        goto after_6;
    // 0x80800258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080025C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x80800260: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800264: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080026C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800270: jal         0x800000B0
    // 0x80800274: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    func_808000B0_bscrashout(rdram, ctx);
        goto after_7;
    // 0x80800274: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    after_7:
    // 0x80800278: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080027C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800280: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800284: jr          $ra
    // 0x80800288: nop

    return;
    // 0x80800288: nop

;}
RECOMP_FUNC void bscrashout_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080028C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800290: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800294: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800298: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080029C: jal         0x800D8FF8
    // 0x808002A0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x808002A0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808002A4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x808002A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808002AC: addiu       $a0, $s0, 0x16C
    ctx->r4 = ADD32(ctx->r16, 0X16C);
    // 0x808002B0: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x808002B4: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x808002B8: jal         0x800F1574
    // 0x808002BC: nop

    func_800F1574(rdram, ctx);
        goto after_1;
    // 0x808002BC: nop

    after_1:
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C4: jal         0x8009B9B0
    // 0x808002C8: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x808002C8: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_2:
    // 0x808002CC: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x808002D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808002D4: beq         $v0, $at, L_808002F4
    if (ctx->r2 == ctx->r1) {
        // 0x808002D8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808002F4;
    }
    // 0x808002D8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808002DC: beq         $v0, $at, L_8080034C
    if (ctx->r2 == ctx->r1) {
        // 0x808002E0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_8080034C;
    }
    // 0x808002E0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808002E4: beq         $v0, $at, L_80800364
    if (ctx->r2 == ctx->r1) {
        // 0x808002E8: nop
    
            goto L_80800364;
    }
    // 0x808002E8: nop

    // 0x808002EC: b           L_8080038C
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080038C;
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808002F4:
    // 0x808002F4: jal         0x80000000
    // 0x808002F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bscrashout(rdram, ctx);
        goto after_3;
    // 0x808002F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808002FC: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800300: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800304: jal         0x8008CB10
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x80800308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080030C: beq         $v0, $zero, L_8080032C
    if (ctx->r2 == 0) {
        // 0x80800310: nop
    
            goto L_8080032C;
    }
    // 0x80800310: nop

    // 0x80800314: jal         0x800A1718
    // 0x80800318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_5;
    // 0x80800318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8080031C: bne         $v0, $zero, L_8080032C
    if (ctx->r2 != 0) {
        // 0x80800320: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080032C;
    }
    // 0x80800320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800324: jal         0x800000B0
    // 0x80800328: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808000B0_bscrashout(rdram, ctx);
        goto after_6;
    // 0x80800328: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
L_8080032C:
    // 0x8080032C: jal         0x8008CAEC
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_7;
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800334: beq         $v0, $zero, L_80800388
    if (ctx->r2 == 0) {
        // 0x80800338: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800388;
    }
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080033C: jal         0x800000B0
    // 0x80800340: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808000B0_bscrashout(rdram, ctx);
        goto after_8;
    // 0x80800340: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x80800344: b           L_8080038C
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080038C;
    // 0x80800348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080034C:
    // 0x8080034C: jal         0x8008CAEC
    // 0x80800350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_9;
    // 0x80800350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800354: beq         $v0, $zero, L_80800388
    if (ctx->r2 == 0) {
        // 0x80800358: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800388;
    }
    // 0x80800358: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080035C: b           L_80800388
    // 0x80800360: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
        goto L_80800388;
    // 0x80800360: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800364:
    // 0x80800364: jal         0x80000000
    // 0x80800368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bscrashout(rdram, ctx);
        goto after_10;
    // 0x80800368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800370: jal         0x800852F0
    // 0x80800374: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_11;
    // 0x80800374: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80800378: beql        $v0, $zero, L_8080038C
    if (ctx->r2 == 0) {
        // 0x8080037C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080038C;
    }
    goto skip_0;
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800380: jal         0x80085200
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_0(rdram, ctx);
        goto after_12;
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_80800388:
    // 0x80800388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080038C:
    // 0x8080038C: jal         0x8009E5C8
    // 0x80800390: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x80800390: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_13:
    // 0x80800394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800398: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080039C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808003A0: jr          $ra
    // 0x808003A4: nop

    return;
    // 0x808003A4: nop

;}
RECOMP_FUNC void bscrashout_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003A8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808003AC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(92, 0X3D0) << 16);
    // 0x808003B0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808003B4: jr          $ra
    // 0x808003B8: lw          $v0, 0x3D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(92, 0X3D0));
    return;
    // 0x808003B8: lw          $v0, 0x3D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(92, 0X3D0));
    // 0x808003BC: nop

;}
RECOMP_FUNC void func_80800000_bscrouch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: addiu       $a1, $zero, 0x10C
    ctx->r5 = ADD32(0, 0X10C);
    // 0x80800010: jal         0x8008CB3C
    // 0x80800014: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x80800014: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_0:
    // 0x80800018: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8080001C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80800020: sw          $t6, 0x15C($t7)
    MEM_W(0X15C, ctx->r15) = ctx->r14;
    // 0x80800024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080002C: jr          $ra
    // 0x80800030: nop

    return;
    // 0x80800030: nop

;}
RECOMP_FUNC void func_80800034_bscrouch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800034: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080003C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800040: addiu       $a1, $zero, 0x116
    ctx->r5 = ADD32(0, 0X116);
    // 0x80800044: jal         0x8008CCBC
    // 0x80800048: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x80800048: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_0:
    // 0x8080004C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800050: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800054: sw          $t6, 0x15C($t7)
    MEM_W(0X15C, ctx->r15) = ctx->r14;
    // 0x80800058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080005C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800060: jr          $ra
    // 0x80800064: nop

    return;
    // 0x80800064: nop

;}
RECOMP_FUNC void func_80800068_bscrouch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080006C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800070: lui         $a3, 0x3F7F
    ctx->r7 = S32(0X3F7F << 16);
    // 0x80800074: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800078: ori         $a3, $a3, 0xF972
    ctx->r7 = ctx->r7 | 0XF972;
    // 0x8080007C: addiu       $a1, $zero, 0x10C
    ctx->r5 = ADD32(0, 0X10C);
    // 0x80800080: jal         0x8008CD30
    // 0x80800084: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    func_8008CD30(rdram, ctx);
        goto after_0;
    // 0x80800084: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_0:
    // 0x80800088: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080008C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800090: jal         0x80085338
    // 0x80800094: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    _batimer_set(rdram, ctx);
        goto after_1;
    // 0x80800094: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_1:
    // 0x80800098: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8080009C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808000A0: sw          $t6, 0x15C($t7)
    MEM_W(0X15C, ctx->r15) = ctx->r14;
    // 0x808000A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000AC: jr          $ra
    // 0x808000B0: nop

    return;
    // 0x808000B0: nop

;}
RECOMP_FUNC void func_808000B4_bscrouch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(93, 0X970) << 16);
    // 0x808000B8: lwc1        $f4, 0x970($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(93, 0X970));
    // 0x808000BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000C4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808000C8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808000CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808000D0: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    // 0x808000D4: lui         $a3, 0x3F00
    ctx->r7 = S32(0X3F00 << 16);
    // 0x808000D8: jal         0x800F10B4
    // 0x808000DC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_0;
    // 0x808000DC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x808000E0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808000E4: jal         0x8008B1BC
    // 0x808000E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B1BC(rdram, ctx);
        goto after_1;
    // 0x808000E8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808000EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000F4: jr          $ra
    // 0x808000F8: nop

    return;
    // 0x808000F8: nop

;}
RECOMP_FUNC void func_808000FC_bscrouch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800100: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800104: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800108: lui         $a1, 0x3ED1
    ctx->r5 = S32(0X3ED1 << 16);
    // 0x8080010C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800110: ori         $a1, $a1, 0xEB85
    ctx->r5 = ctx->r5 | 0XEB85;
    // 0x80800114: jal         0x800A2CE8
    // 0x80800118: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_0;
    // 0x80800118: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x8080011C: lui         $a1, 0x3F68
    ctx->r5 = S32(0X3F68 << 16);
    // 0x80800120: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    // 0x80800124: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800128: jal         0x800A2CE8
    // 0x8080012C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_1;
    // 0x8080012C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80800130: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800134: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800138: jr          $ra
    // 0x8080013C: nop

    return;
    // 0x8080013C: nop

;}
RECOMP_FUNC void bscrouch_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800140: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800144: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800148: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080014C: jal         0x8008CABC
    // 0x80800150: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800150: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800154: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80800158: jal         0x8009E710
    // 0x8080015C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E710(rdram, ctx);
        goto after_1;
    // 0x8080015C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800160: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80800164: beq         $v0, $at, L_80800188
    if (ctx->r2 == ctx->r1) {
        // 0x80800168: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_80800188;
    }
    // 0x80800168: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8080016C: beq         $v0, $at, L_80800188
    if (ctx->r2 == ctx->r1) {
        // 0x80800170: addiu       $at, $zero, 0x1A
        ctx->r1 = ADD32(0, 0X1A);
            goto L_80800188;
    }
    // 0x80800170: addiu       $at, $zero, 0x1A
    ctx->r1 = ADD32(0, 0X1A);
    // 0x80800174: beq         $v0, $at, L_80800188
    if (ctx->r2 == ctx->r1) {
        // 0x80800178: nop
    
            goto L_80800188;
    }
    // 0x80800178: nop

    // 0x8080017C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800180: b           L_80800194
    // 0x80800184: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
        goto L_80800194;
    // 0x80800184: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
L_80800188:
    // 0x80800188: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(93, 0X974) << 16);
    // 0x8080018C: lwc1        $f6, 0x974($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(93, 0X974));
    // 0x80800190: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_80800194:
    // 0x80800194: jal         0x8008AF24
    // 0x80800198: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x80800198: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_2:
    // 0x8080019C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x808001A0: jal         0x8008AED4
    // 0x808001A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x808001A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x808001A8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x808001AC: jal         0x8008B1BC
    // 0x808001B0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x808001B0: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_4:
    // 0x808001B4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x808001B8: jal         0x8008B134
    // 0x808001BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x808001BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x808001C0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x808001C4: jal         0x8008B24C
    // 0x808001C8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8008B24C(rdram, ctx);
        goto after_6;
    // 0x808001C8: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_6:
    // 0x808001CC: jal         0x8008B064
    // 0x808001D0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x808001D0: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_7:
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D8: jal         0x8008CA4C
    // 0x808001DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_8;
    // 0x808001DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E4: jal         0x8009C908
    // 0x808001E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009C908(rdram, ctx);
        goto after_9;
    // 0x808001E8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x808001EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F0: lui         $a1, 0x43AF
    ctx->r5 = S32(0X43AF << 16);
    // 0x808001F4: jal         0x8009C99C
    // 0x808001F8: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8009C99C(rdram, ctx);
        goto after_10;
    // 0x808001F8: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_10:
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800200: jal         0x8009D2D8
    // 0x80800204: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8009D2D8(rdram, ctx);
        goto after_11;
    // 0x80800204: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_11:
    // 0x80800208: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080020C: jal         0x8009CFD8
    // 0x80800210: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8009CFD8(rdram, ctx);
        goto after_12;
    // 0x80800210: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_12:
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800218: jal         0x8009B800
    // 0x8080021C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009B800(rdram, ctx);
        goto after_13;
    // 0x8080021C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_13:
    // 0x80800220: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x80800224: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080022C: jal         0x80085338
    // 0x80800230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_14;
    // 0x80800230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x80800234: lui         $a2, 0x3E4C
    ctx->r6 = S32(0X3E4C << 16);
    // 0x80800238: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800240: jal         0x80085338
    // 0x80800244: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_set(rdram, ctx);
        goto after_15;
    // 0x80800244: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080024C: jal         0x8009BB24
    // 0x80800250: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_8009BB24(rdram, ctx);
        goto after_16;
    // 0x80800250: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_16:
    // 0x80800254: lwc1        $f0, 0x38($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800258: lwc1        $f2, 0x30($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8080025C: mul.s       $f8, $f0, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80800260: nop

    // 0x80800264: mul.s       $f10, $f2, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80800268: jal         0x8002DCA0
    // 0x8080026C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_17;
    // 0x8080026C: add.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f10.fl;
    after_17:
    // 0x80800270: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x80800274: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800278: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x8080027C: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x80800280: nop

    // 0x80800284: bc1fl       L_80800298
    if (!c1cs) {
        // 0x80800288: addiu       $a0, $sp, 0x30
        ctx->r4 = ADD32(ctx->r29, 0X30);
            goto L_80800298;
    }
    goto skip_0;
    // 0x80800288: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    skip_0:
    // 0x8080028C: jal         0x8009D658
    // 0x80800290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_18;
    // 0x80800290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800294: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
L_80800298:
    // 0x80800298: jal         0x800F1EA4
    // 0x8080029C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800F1EA4(rdram, ctx);
        goto after_19;
    // 0x8080029C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_19:
    // 0x808002A0: beq         $v0, $zero, L_808002B0
    if (ctx->r2 == 0) {
        // 0x808002A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002B0;
    }
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A8: jal         0x8009B9C0
    // 0x808002AC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009B9C0(rdram, ctx);
        goto after_20;
    // 0x808002AC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_20:
L_808002B0:
    // 0x808002B0: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
    // 0x808002B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002B8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002BC: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808002C0: jr          $ra
    // 0x808002C4: nop

    return;
    // 0x808002C4: nop

;}
RECOMP_FUNC void bscrouch_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002C8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808002CC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808002D0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808002D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808002D8: jal         0x8008CABC
    // 0x808002DC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808002DC: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_0:
    // 0x808002E0: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x808002E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E8: jal         0x800852F0
    // 0x808002EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_1;
    // 0x808002EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002F4: jal         0x800852F0
    // 0x808002F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_decrement(rdram, ctx);
        goto after_2;
    // 0x808002F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x808002FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800300: jal         0x80085300
    // 0x80800304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_get(rdram, ctx);
        goto after_3;
    // 0x80800304: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800308: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8080030C: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800310: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x80800314: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80800318: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8080031C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800320: jal         0x800F10B4
    // 0x80800324: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_4;
    // 0x80800324: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x80800328: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080032C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80800330: jal         0x8009B9B0
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_5;
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800338: lui         $at, 0x435C
    ctx->r1 = S32(0X435C << 16);
    // 0x8080033C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800340: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800344: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80800348: nop

    // 0x8080034C: bc1fl       L_80800360
    if (!c1cs) {
        // 0x80800350: lui         $at, 0x4320
        ctx->r1 = S32(0X4320 << 16);
            goto L_80800360;
    }
    goto skip_0;
    // 0x80800350: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    skip_0:
    // 0x80800354: jal         0x80084A10
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_9(rdram, ctx);
        goto after_6;
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080035C: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
L_80800360:
    // 0x80800360: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800364: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800368: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8080036C: nop

    // 0x80800370: bc1f        L_80800380
    if (!c1cs) {
        // 0x80800374: nop
    
            goto L_80800380;
    }
    // 0x80800374: nop

    // 0x80800378: jal         0x8009D658
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D658(rdram, ctx);
        goto after_7;
    // 0x8080037C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
L_80800380:
    // 0x80800380: jal         0x8009EF04
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_8;
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800388: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8080038C: nop

    // 0x80800390: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x80800394: nop

    // 0x80800398: bc1f        L_808003B4
    if (!c1cs) {
        // 0x8080039C: nop
    
            goto L_808003B4;
    }
    // 0x8080039C: nop

    // 0x808003A0: jal         0x8009C984
    // 0x808003A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_9;
    // 0x808003A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808003A8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808003AC: jal         0x8009C914
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_10;
    // 0x808003B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_808003B4:
    // 0x808003B4: jal         0x8009C990
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_11;
    // 0x808003B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808003BC: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x808003C0: jal         0x8009C984
    // 0x808003C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_12;
    // 0x808003C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808003C8: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808003CC: jal         0x800F1DCC
    // 0x808003D0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_13;
    // 0x808003D0: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_13:
    // 0x808003D4: jal         0x800F2100
    // 0x808003D8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_14;
    // 0x808003D8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_14:
    // 0x808003DC: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    // 0x808003E0: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x808003E4: sltiu       $at, $t6, 0x5
    ctx->r1 = ctx->r14 < 0X5 ? 1 : 0;
    // 0x808003E8: beq         $at, $zero, L_808005F4
    if (ctx->r1 == 0) {
        // 0x808003EC: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_808005F4;
    }
    // 0x808003EC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808003F0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(93, 0X978) << 16);
    // 0x808003F4: addu        $at, $at, $t6
    gpr jr_addend_808003FC = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808003F8: lw          $t6, 0x978($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(93, 0X978));
    // 0x808003FC: jr          $t6
    // 0x80800400: nop

    switch (jr_addend_808003FC >> 2) {
        case 0: goto L_80800404; break;
        case 1: goto L_80800438; break;
        case 2: goto L_8080048C; break;
        case 3: goto L_8080056C; break;
        case 4: goto L_808004D4; break;
        default: switch_error(__func__, 0x808003FC, 0x80800978);
    }
    // 0x80800400: nop

L_80800404:
    // 0x80800404: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80800408: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800410: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800414: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80800418: nop

    // 0x8080041C: bc1f        L_808005F4
    if (!c1cs) {
        // 0x80800420: nop
    
            goto L_808005F4;
    }
    // 0x80800420: nop

    // 0x80800424: jal         0x80085338
    // 0x80800428: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    _batimer_set(rdram, ctx);
        goto after_15;
    // 0x80800428: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_15:
    // 0x8080042C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80800430: b           L_808005F4
    // 0x80800434: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_808005F4;
    // 0x80800434: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800438:
    // 0x80800438: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8080043C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800440: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x80800444: nop

    // 0x80800448: bc1t        L_80800460
    if (c1cs) {
        // 0x8080044C: nop
    
            goto L_80800460;
    }
    // 0x8080044C: nop

    // 0x80800450: jal         0x80000000
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bscrouch(rdram, ctx);
        goto after_16;
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800458: b           L_808005F4
    // 0x8080045C: nop

        goto L_808005F4;
    // 0x8080045C: nop

L_80800460:
    // 0x80800460: jal         0x800852F0
    // 0x80800464: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _batimer_decrement(rdram, ctx);
        goto after_17;
    // 0x80800464: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_17:
    // 0x80800468: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080046C: jal         0x80085330
    // 0x80800470: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _batimer_isZero(rdram, ctx);
        goto after_18;
    // 0x80800470: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_18:
    // 0x80800474: beq         $v0, $zero, L_808005F4
    if (ctx->r2 == 0) {
        // 0x80800478: nop
    
            goto L_808005F4;
    }
    // 0x80800478: nop

    // 0x8080047C: jal         0x80000034
    // 0x80800480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800034_bscrouch(rdram, ctx);
        goto after_19;
    // 0x80800480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800484: b           L_808005F4
    // 0x80800488: nop

        goto L_808005F4;
    // 0x80800488: nop

L_8080048C:
    // 0x8080048C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800490: nop

    // 0x80800494: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x80800498: nop

    // 0x8080049C: bc1t        L_808004B4
    if (c1cs) {
        // 0x808004A0: nop
    
            goto L_808004B4;
    }
    // 0x808004A0: nop

    // 0x808004A4: jal         0x80000000
    // 0x808004A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bscrouch(rdram, ctx);
        goto after_20;
    // 0x808004A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x808004AC: b           L_808005F4
    // 0x808004B0: nop

        goto L_808005F4;
    // 0x808004B0: nop

L_808004B4:
    // 0x808004B4: jal         0x8008B324
    // 0x808004B8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B324(rdram, ctx);
        goto after_21;
    // 0x808004B8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_21:
    // 0x808004BC: beq         $v0, $zero, L_808005F4
    if (ctx->r2 == 0) {
        // 0x808004C0: nop
    
            goto L_808005F4;
    }
    // 0x808004C0: nop

    // 0x808004C4: jal         0x80000068
    // 0x808004C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800068_bscrouch(rdram, ctx);
        goto after_22;
    // 0x808004C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x808004CC: b           L_808005F4
    // 0x808004D0: nop

        goto L_808005F4;
    // 0x808004D0: nop

L_808004D4:
    // 0x808004D4: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x808004D8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808004DC: jal         0x800000B4
    // 0x808004E0: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    func_808000B4_bscrouch(rdram, ctx);
        goto after_23;
    // 0x808004E0: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    after_23:
    // 0x808004E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004E8: jal         0x800000FC
    // 0x808004EC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_808000FC_bscrouch(rdram, ctx);
        goto after_24;
    // 0x808004EC: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_24:
    // 0x808004F0: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808004F4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x808004F8: nop

    // 0x808004FC: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80800500: nop

    // 0x80800504: bc1f        L_808005F4
    if (!c1cs) {
        // 0x80800508: nop
    
            goto L_808005F4;
    }
    // 0x80800508: nop

    // 0x8080050C: jal         0x8008B2B4
    // 0x80800510: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B2B4(rdram, ctx);
        goto after_25;
    // 0x80800510: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_25:
    // 0x80800514: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800518: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x8080051C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800520: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80800524: c.le.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl <= ctx->f2.fl;
    // 0x80800528: nop

    // 0x8080052C: bc1f        L_8080054C
    if (!c1cs) {
        // 0x80800530: nop
    
            goto L_8080054C;
    }
    // 0x80800530: nop

    // 0x80800534: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80800538: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8080053C: jal         0x8008B1D4
    // 0x80800540: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_26;
    // 0x80800540: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_26:
    // 0x80800544: b           L_80800558
    // 0x80800548: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
        goto L_80800558;
    // 0x80800548: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
L_8080054C:
    // 0x8080054C: jal         0x8008B1D4
    // 0x80800550: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_27;
    // 0x80800550: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_27:
    // 0x80800554: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
L_80800558:
    // 0x80800558: jal         0x8008B134
    // 0x8080055C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_28;
    // 0x8080055C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_28:
    // 0x80800560: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80800564: b           L_808005F4
    // 0x80800568: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
        goto L_808005F4;
    // 0x80800568: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
L_8080056C:
    // 0x8080056C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80800570: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800574: jal         0x800000B4
    // 0x80800578: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    func_808000B4_bscrouch(rdram, ctx);
        goto after_29;
    // 0x80800578: swc1        $f2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f2.u32l;
    after_29:
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800580: jal         0x800000FC
    // 0x80800584: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_808000FC_bscrouch(rdram, ctx);
        goto after_30;
    // 0x80800584: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_30:
    // 0x80800588: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8080058C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80800590: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800594: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80800598: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8080059C: nop

    // 0x808005A0: bc1t        L_808005C8
    if (c1cs) {
        // 0x808005A4: nop
    
            goto L_808005C8;
    }
    // 0x808005A4: nop

    // 0x808005A8: jal         0x8008B1D4
    // 0x808005AC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_31;
    // 0x808005AC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_31:
    // 0x808005B0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808005B4: jal         0x8008B134
    // 0x808005B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_32;
    // 0x808005B8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_32:
    // 0x808005BC: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x808005C0: b           L_808005F4
    // 0x808005C4: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
        goto L_808005F4;
    // 0x808005C4: sw          $t9, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r25;
L_808005C8:
    // 0x808005C8: jal         0x8008B324
    // 0x808005CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B324(rdram, ctx);
        goto after_33;
    // 0x808005CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_33:
    // 0x808005D0: beq         $v0, $zero, L_808005F4
    if (ctx->r2 == 0) {
        // 0x808005D4: nop
    
            goto L_808005F4;
    }
    // 0x808005D4: nop

    // 0x808005D8: jal         0x8009C984
    // 0x808005DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_34;
    // 0x808005DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_34:
    // 0x808005E0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808005E4: jal         0x8009C914
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_35;
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_35:
    // 0x808005EC: jal         0x80000068
    // 0x808005F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800068_bscrouch(rdram, ctx);
        goto after_36;
    // 0x808005F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
L_808005F4:
    // 0x808005F4: jal         0x8008E148
    // 0x808005F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_37;
    // 0x808005F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x808005FC: beq         $v0, $zero, L_80800610
    if (ctx->r2 == 0) {
        // 0x80800600: nop
    
            goto L_80800610;
    }
    // 0x80800600: nop

    // 0x80800604: jal         0x800848B0
    // 0x80800608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_38;
    // 0x80800608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_38:
    // 0x8080060C: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
L_80800610:
    // 0x80800610: jal         0x8008DD04
    // 0x80800614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_39;
    // 0x80800614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x80800618: beq         $v0, $zero, L_80800628
    if (ctx->r2 == 0) {
        // 0x8080061C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800628;
    }
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800620: addiu       $t0, $zero, 0x2F
    ctx->r8 = ADD32(0, 0X2F);
    // 0x80800624: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
L_80800628:
    // 0x80800628: jal         0x8000070C
    // 0x8080062C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    bscrouch_entrypoint_4(rdram, ctx);
        goto after_40;
    // 0x8080062C: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_40:
    // 0x80800630: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800634: bne         $v0, $at, L_80800654
    if (ctx->r2 != ctx->r1) {
        // 0x80800638: sw          $v0, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r2;
            goto L_80800654;
    }
    // 0x80800638: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8080063C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800640: jal         0x80085328
    // 0x80800644: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_isNonzero(rdram, ctx);
        goto after_41;
    // 0x80800644: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_41:
    // 0x80800648: beq         $v0, $zero, L_80800654
    if (ctx->r2 == 0) {
        // 0x8080064C: nop
    
            goto L_80800654;
    }
    // 0x8080064C: nop

    // 0x80800650: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
L_80800654:
    // 0x80800654: jal         0x8008E35C
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_42;
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_42:
    // 0x8080065C: beq         $v0, $zero, L_8080066C
    if (ctx->r2 == 0) {
        // 0x80800660: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080066C;
    }
    // 0x80800660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800664: addiu       $t1, $zero, 0x2D
    ctx->r9 = ADD32(0, 0X2D);
    // 0x80800668: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
L_8080066C:
    // 0x8080066C: jal         0x8009E5C8
    // 0x80800670: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_8009E5C8(rdram, ctx);
        goto after_43;
    // 0x80800670: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_43:
    // 0x80800674: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800678: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080067C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800680: jr          $ra
    // 0x80800684: nop

    return;
    // 0x80800684: nop

;}
RECOMP_FUNC void bscrouch_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800688: jr          $ra
    // 0x8080068C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080068C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bscrouch_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800690: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800694: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(93, 0X990) << 16);
    // 0x80800698: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080069C: jr          $ra
    // 0x808006A0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(93, 0X990));
    return;
    // 0x808006A0: lw          $v0, 0x990($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(93, 0X990));
;}
RECOMP_FUNC void func_808006A4_bscrouch(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006A4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808006A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006AC: jal         0x80084768
    // 0x808006B0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    _bapackctrl_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808006B0: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    after_0:
    // 0x808006B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808006B8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x808006BC: jal         0x8009C128
    // 0x808006C0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_8009C128(rdram, ctx);
        goto after_1;
    // 0x808006C0: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_1:
    // 0x808006C4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x808006C8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x808006CC: jal         0x800CB7C4
    // 0x808006D0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_800CB7C4(rdram, ctx);
        goto after_2;
    // 0x808006D0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_2:
    // 0x808006D4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808006D8: bne         $v0, $at, L_808006F8
    if (ctx->r2 != ctx->r1) {
        // 0x808006DC: sw          $v0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r2;
            goto L_808006F8;
    }
    // 0x808006DC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x808006E0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x808006E4: jal         0x800F1DF4
    // 0x808006E8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800F1DF4(rdram, ctx);
        goto after_3;
    // 0x808006E8: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x808006EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808006F0: jal         0x8009C914
    // 0x808006F4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_8009C914(rdram, ctx);
        goto after_4;
    // 0x808006F4: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_4:
L_808006F8:
    // 0x808006F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006FC: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80800700: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800704: jr          $ra
    // 0x80800708: nop

    return;
    // 0x80800708: nop

;}
RECOMP_FUNC void bscrouch_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080070C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800710: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800714: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800718: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8080071C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800720: jal         0x80091A30
    // 0x80800724: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A30(rdram, ctx);
        goto after_0;
    // 0x80800724: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800728: beq         $v0, $zero, L_8080077C
    if (ctx->r2 == 0) {
        // 0x8080072C: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8080077C;
    }
    // 0x8080072C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800730: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80800734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800738: jal         0x80091A58
    // 0x8080073C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_1;
    // 0x8080073C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x80800740: beq         $v0, $zero, L_80800754
    if (ctx->r2 == 0) {
        // 0x80800744: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800754;
    }
    // 0x80800744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800748: jal         0x800A055C
    // 0x8080074C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800A055C(rdram, ctx);
        goto after_2;
    // 0x8080074C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x80800750: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_80800754:
    // 0x80800754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800758: jal         0x80091A58
    // 0x8080075C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_3;
    // 0x8080075C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x80800760: beq         $v0, $zero, L_80800774
    if (ctx->r2 == 0) {
        // 0x80800764: nop
    
            goto L_80800774;
    }
    // 0x80800764: nop

    // 0x80800768: jal         0x8009FE84
    // 0x8080076C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE84(rdram, ctx);
        goto after_4;
    // 0x8080076C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800770: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_80800774:
    // 0x80800774: b           L_80800950
    // 0x80800778: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
        goto L_80800950;
    // 0x80800778: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_8080077C:
    // 0x8080077C: jal         0x8008E23C
    // 0x80800780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E23C(rdram, ctx);
        goto after_5;
    // 0x80800780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800784: beq         $v0, $zero, L_808008A0
    if (ctx->r2 == 0) {
        // 0x80800788: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008A0;
    }
    // 0x80800788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080078C: jal         0x80091A58
    // 0x80800790: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    func_80091A58(rdram, ctx);
        goto after_6;
    // 0x80800790: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
    after_6:
    // 0x80800794: beql        $v0, $zero, L_808007B8
    if (ctx->r2 == 0) {
        // 0x80800798: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007B8;
    }
    goto skip_0;
    // 0x80800798: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080079C: jal         0x800C6E38
    // 0x808007A0: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    func_800C6E38(rdram, ctx);
        goto after_7;
    // 0x808007A0: addiu       $a0, $zero, 0x21
    ctx->r4 = ADD32(0, 0X21);
    after_7:
    // 0x808007A4: beq         $v0, $zero, L_808007B4
    if (ctx->r2 == 0) {
        // 0x808007A8: addiu       $t7, $zero, 0x16A
        ctx->r15 = ADD32(0, 0X16A);
            goto L_808007B4;
    }
    // 0x808007A8: addiu       $t7, $zero, 0x16A
    ctx->r15 = ADD32(0, 0X16A);
    // 0x808007AC: b           L_80800880
    // 0x808007B0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
        goto L_80800880;
    // 0x808007B0: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_808007B4:
    // 0x808007B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808007B8:
    // 0x808007B8: jal         0x80091A58
    // 0x808007BC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_80091A58(rdram, ctx);
        goto after_8;
    // 0x808007BC: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_8:
    // 0x808007C0: beql        $v0, $zero, L_808007E4
    if (ctx->r2 == 0) {
        // 0x808007C4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007E4;
    }
    goto skip_1;
    // 0x808007C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808007C8: jal         0x800C6E38
    // 0x808007CC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    func_800C6E38(rdram, ctx);
        goto after_9;
    // 0x808007CC: addiu       $a0, $zero, 0x2A
    ctx->r4 = ADD32(0, 0X2A);
    after_9:
    // 0x808007D0: beq         $v0, $zero, L_808007E0
    if (ctx->r2 == 0) {
        // 0x808007D4: addiu       $t8, $zero, 0x163
        ctx->r24 = ADD32(0, 0X163);
            goto L_808007E0;
    }
    // 0x808007D4: addiu       $t8, $zero, 0x163
    ctx->r24 = ADD32(0, 0X163);
    // 0x808007D8: b           L_80800880
    // 0x808007DC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
        goto L_80800880;
    // 0x808007DC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_808007E0:
    // 0x808007E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808007E4:
    // 0x808007E4: jal         0x80091A58
    // 0x808007E8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    func_80091A58(rdram, ctx);
        goto after_10;
    // 0x808007E8: addiu       $a1, $zero, 0xD
    ctx->r5 = ADD32(0, 0XD);
    after_10:
    // 0x808007EC: beql        $v0, $zero, L_80800810
    if (ctx->r2 == 0) {
        // 0x808007F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800810;
    }
    goto skip_2;
    // 0x808007F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808007F4: jal         0x800C6E38
    // 0x808007F8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    func_800C6E38(rdram, ctx);
        goto after_11;
    // 0x808007F8: addiu       $a0, $zero, 0x23
    ctx->r4 = ADD32(0, 0X23);
    after_11:
    // 0x808007FC: beq         $v0, $zero, L_8080080C
    if (ctx->r2 == 0) {
        // 0x80800800: addiu       $t9, $zero, 0x171
        ctx->r25 = ADD32(0, 0X171);
            goto L_8080080C;
    }
    // 0x80800800: addiu       $t9, $zero, 0x171
    ctx->r25 = ADD32(0, 0X171);
    // 0x80800804: b           L_80800880
    // 0x80800808: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
        goto L_80800880;
    // 0x80800808: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_8080080C:
    // 0x8080080C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800810:
    // 0x80800810: jal         0x80091A58
    // 0x80800814: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_80091A58(rdram, ctx);
        goto after_12;
    // 0x80800814: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_12:
    // 0x80800818: beql        $v0, $zero, L_80800884
    if (ctx->r2 == 0) {
        // 0x8080081C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800884;
    }
    goto skip_3;
    // 0x8080081C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80800820: jal         0x800C6E38
    // 0x80800824: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    func_800C6E38(rdram, ctx);
        goto after_13;
    // 0x80800824: addiu       $a0, $zero, 0x27
    ctx->r4 = ADD32(0, 0X27);
    after_13:
    // 0x80800828: beql        $v0, $zero, L_80800884
    if (ctx->r2 == 0) {
        // 0x8080082C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800884;
    }
    goto skip_4;
    // 0x8080082C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_4:
    // 0x80800830: jal         0x8008E0C8
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E0C8(rdram, ctx);
        goto after_14;
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800838: bne         $v0, $zero, L_80800848
    if (ctx->r2 != 0) {
        // 0x8080083C: addiu       $t0, $zero, 0x122
        ctx->r8 = ADD32(0, 0X122);
            goto L_80800848;
    }
    // 0x8080083C: addiu       $t0, $zero, 0x122
    ctx->r8 = ADD32(0, 0X122);
    // 0x80800840: b           L_80800880
    // 0x80800844: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
        goto L_80800880;
    // 0x80800844: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_80800848:
    // 0x80800848: jal         0x800006A4
    // 0x8080084C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808006A4_bscrouch(rdram, ctx);
        goto after_15;
    // 0x8080084C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800850: beq         $v0, $zero, L_80800880
    if (ctx->r2 == 0) {
        // 0x80800854: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_80800880;
    }
    // 0x80800854: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800858: beq         $v0, $at, L_80800874
    if (ctx->r2 == ctx->r1) {
        // 0x8080085C: addiu       $t1, $zero, 0x129
        ctx->r9 = ADD32(0, 0X129);
            goto L_80800874;
    }
    // 0x8080085C: addiu       $t1, $zero, 0x129
    ctx->r9 = ADD32(0, 0X129);
    // 0x80800860: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800864: beq         $v0, $at, L_8080087C
    if (ctx->r2 == ctx->r1) {
        // 0x80800868: addiu       $t2, $zero, 0x128
        ctx->r10 = ADD32(0, 0X128);
            goto L_8080087C;
    }
    // 0x80800868: addiu       $t2, $zero, 0x128
    ctx->r10 = ADD32(0, 0X128);
    // 0x8080086C: b           L_80800884
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800884;
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800874:
    // 0x80800874: b           L_80800880
    // 0x80800878: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
        goto L_80800880;
    // 0x80800878: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_8080087C:
    // 0x8080087C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_80800880:
    // 0x80800880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800884:
    // 0x80800884: jal         0x80091A58
    // 0x80800888: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_16;
    // 0x80800888: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_16:
    // 0x8080088C: beq         $v0, $zero, L_80800898
    if (ctx->r2 == 0) {
        // 0x80800890: addiu       $t3, $zero, 0x6C
        ctx->r11 = ADD32(0, 0X6C);
            goto L_80800898;
    }
    // 0x80800890: addiu       $t3, $zero, 0x6C
    ctx->r11 = ADD32(0, 0X6C);
    // 0x80800894: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
L_80800898:
    // 0x80800898: b           L_80800950
    // 0x8080089C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
        goto L_80800950;
    // 0x8080089C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_808008A0:
    // 0x808008A0: jal         0x800980DC
    // 0x808008A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800980DC(rdram, ctx);
        goto after_17;
    // 0x808008A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x808008A8: beq         $v0, $zero, L_808008C8
    if (ctx->r2 == 0) {
        // 0x808008AC: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_808008C8;
    }
    // 0x808008AC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x808008B0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x808008B4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x808008B8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x808008BC: addiu       $a2, $zero, 0x1A
    ctx->r6 = ADD32(0, 0X1A);
    // 0x808008C0: jal         0x8008A690
    // 0x808008C4: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    _suinv_entrypoint_0(rdram, ctx);
        goto after_18;
    // 0x808008C4: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    after_18:
L_808008C8:
    // 0x808008C8: jal         0x8009809C
    // 0x808008CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009809C(rdram, ctx);
        goto after_19;
    // 0x808008CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x808008D0: beq         $v0, $zero, L_808008DC
    if (ctx->r2 == 0) {
        // 0x808008D4: addiu       $t5, $zero, 0x14
        ctx->r13 = ADD32(0, 0X14);
            goto L_808008DC;
    }
    // 0x808008D4: addiu       $t5, $zero, 0x14
    ctx->r13 = ADD32(0, 0X14);
    // 0x808008D8: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
L_808008DC:
    // 0x808008DC: jal         0x80097BFC
    // 0x808008E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097BFC(rdram, ctx);
        goto after_20;
    // 0x808008E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x808008E4: beq         $v0, $zero, L_80800900
    if (ctx->r2 == 0) {
        // 0x808008E8: nop
    
            goto L_80800900;
    }
    // 0x808008E8: nop

    // 0x808008EC: jal         0x80094B14
    // 0x808008F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094B14(rdram, ctx);
        goto after_21;
    // 0x808008F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x808008F4: beq         $v0, $zero, L_80800900
    if (ctx->r2 == 0) {
        // 0x808008F8: addiu       $t6, $zero, 0xA
        ctx->r14 = ADD32(0, 0XA);
            goto L_80800900;
    }
    // 0x808008F8: addiu       $t6, $zero, 0xA
    ctx->r14 = ADD32(0, 0XA);
    // 0x808008FC: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_80800900:
    // 0x80800900: jal         0x80097C3C
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097C3C(rdram, ctx);
        goto after_22;
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800908: beq         $v0, $zero, L_80800924
    if (ctx->r2 == 0) {
        // 0x8080090C: nop
    
            goto L_80800924;
    }
    // 0x8080090C: nop

    // 0x80800910: jal         0x80094B14
    // 0x80800914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80094B14(rdram, ctx);
        goto after_23;
    // 0x80800914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800918: beq         $v0, $zero, L_80800924
    if (ctx->r2 == 0) {
        // 0x8080091C: addiu       $t7, $zero, 0x9
        ctx->r15 = ADD32(0, 0X9);
            goto L_80800924;
    }
    // 0x8080091C: addiu       $t7, $zero, 0x9
    ctx->r15 = ADD32(0, 0X9);
    // 0x80800920: sw          $t7, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r15;
L_80800924:
    // 0x80800924: jal         0x80097E34
    // 0x80800928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097E34(rdram, ctx);
        goto after_24;
    // 0x80800928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x8080092C: beq         $v0, $zero, L_80800938
    if (ctx->r2 == 0) {
        // 0x80800930: addiu       $t8, $zero, 0x12
        ctx->r24 = ADD32(0, 0X12);
            goto L_80800938;
    }
    // 0x80800930: addiu       $t8, $zero, 0x12
    ctx->r24 = ADD32(0, 0X12);
    // 0x80800934: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_80800938:
    // 0x80800938: jal         0x80097A50
    // 0x8080093C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097A50(rdram, ctx);
        goto after_25;
    // 0x8080093C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80800940: beq         $v0, $zero, L_8080094C
    if (ctx->r2 == 0) {
        // 0x80800944: addiu       $t9, $zero, 0x13
        ctx->r25 = ADD32(0, 0X13);
            goto L_8080094C;
    }
    // 0x80800944: addiu       $t9, $zero, 0x13
    ctx->r25 = ADD32(0, 0X13);
    // 0x80800948: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_8080094C:
    // 0x8080094C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_80800950:
    // 0x80800950: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800954: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800958: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080095C: jr          $ra
    // 0x80800960: nop

    return;
    // 0x80800960: nop

    // 0x80800964: nop

    // 0x80800968: nop

    // 0x8080096C: nop

;}
RECOMP_FUNC void func_80800000_bsdie(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800004: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80800008: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8080000C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80800010: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80800014: mtc1        $zero, $f20
    ctx->f20.u32l = 0;
    // 0x80800018: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8080001C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800020: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x80800024: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80800028: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x8080002C: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80800030: bc1f        L_8080006C
    if (!c1cs) {
        // 0x80800034: lui         $at, 0x4234
        ctx->r1 = S32(0X4234 << 16);
            goto L_8080006C;
    }
    // 0x80800034: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80800038: mtc1        $at, $f26
    ctx->f26.u32l = ctx->r1;
    // 0x8080003C: lui         $at, 0x4366
    ctx->r1 = S32(0X4366 << 16);
    // 0x80800040: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80800044: nop

    // 0x80800048: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_8080004C:
    // 0x8080004C: mfc1        $a2, $f24
    ctx->r6 = (int32_t)ctx->f24.u32l;
    // 0x80800050: jal         0x800849F0
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80800058: add.s       $f20, $f20, $f26
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 26);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f26.fl); 
    ctx->f20.fl = ctx->f20.fl + ctx->f26.fl;
    // 0x8080005C: c.lt.s      $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f20.fl < ctx->f22.fl;
    // 0x80800060: nop

    // 0x80800064: bc1tl       L_8080004C
    if (c1cs) {
        // 0x80800068: mfc1        $a1, $f20
        ctx->r5 = (int32_t)ctx->f20.u32l;
            goto L_8080004C;
    }
    goto skip_0;
    // 0x80800068: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    skip_0:
L_8080006C:
    // 0x8080006C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80800070: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80800074: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80800078: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x8080007C: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x80800080: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x80800084: jr          $ra
    // 0x80800088: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80800088: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void bsdie_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080008C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800090: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800094: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800098: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8080009C: jal         0x8008CABC
    // 0x808000A0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808000A0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x808000A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808000A8: jal         0x8008AF24
    // 0x808000AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x808000AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808000B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B4: jal         0x8008B1A0
    // 0x808000B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x808000B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808000BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C0: jal         0x8008AED4
    // 0x808000C4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x808000C4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_3:
    // 0x808000C8: lui         $a2, 0x3EAB
    ctx->r6 = S32(0X3EAB << 16);
    // 0x808000CC: ori         $a2, $a2, 0xD3C3
    ctx->r6 = ctx->r6 | 0XD3C3;
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D4: jal         0x8008B1D4
    // 0x808000D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_4;
    // 0x808000D8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x808000DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E0: jal         0x8008B1BC
    // 0x808000E4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x808000E4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_5:
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000EC: jal         0x8008B134
    // 0x808000F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x808000F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808000F4: jal         0x8008B064
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808000FC: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80800100: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800104: lui         $at, 0x41C8
    ctx->r1 = S32(0X41C8 << 16);
    // 0x80800108: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080010C: lui         $at, 0x4060
    ctx->r1 = S32(0X4060 << 16);
    // 0x80800110: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800114: swc1        $f0, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f0.u32l;
    // 0x80800118: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080011C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800120: lui         $a2, 0x43FF
    ctx->r6 = S32(0X43FF << 16);
    // 0x80800124: lui         $a3, 0xC4AF
    ctx->r7 = S32(0XC4AF << 16);
    // 0x80800128: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8080012C: jal         0x80085220
    // 0x80800130: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    _basudie_entrypoint_4(rdram, ctx);
        goto after_8;
    // 0x80800130: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x80800134: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800138: jal         0x800A0CF4
    // 0x8080013C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_9;
    // 0x8080013C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80800140: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800144: jal         0x8009D820
    // 0x80800148: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009D820(rdram, ctx);
        goto after_10;
    // 0x80800148: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_10:
    // 0x8080014C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800150: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800154: jal         0x8009BFE4
    // 0x80800158: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_11;
    // 0x80800158: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_11:
    // 0x8080015C: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x80800160: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800164: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800168: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8080016C: jr          $ra
    // 0x80800170: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800170: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void bsdie_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800174: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800178: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080017C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800180: jal         0x8008CABC
    // 0x80800184: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800184: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800188: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8080018C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80800190: jal         0x80085228
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800198: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080019C: jal         0x8009B9B0
    // 0x808001A0: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x808001A0: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_2:
    // 0x808001A4: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x808001A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001AC: beq         $v0, $zero, L_808001D4
    if (ctx->r2 == 0) {
        // 0x808001B0: nop
    
            goto L_808001D4;
    }
    // 0x808001B0: nop

    // 0x808001B4: beq         $v0, $at, L_80800258
    if (ctx->r2 == ctx->r1) {
        // 0x808001B8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800258;
    }
    // 0x808001B8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808001BC: beq         $v0, $at, L_808002A8
    if (ctx->r2 == ctx->r1) {
        // 0x808001C0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_808002A8;
    }
    // 0x808001C0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808001C4: beq         $v0, $at, L_80800324
    if (ctx->r2 == ctx->r1) {
        // 0x808001C8: nop
    
            goto L_80800324;
    }
    // 0x808001C8: nop

    // 0x808001CC: b           L_80800324
    // 0x808001D0: nop

        goto L_80800324;
    // 0x808001D0: nop

L_808001D4:
    // 0x808001D4: jal         0x8008E078
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_3;
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808001DC: beq         $v0, $zero, L_80800324
    if (ctx->r2 == 0) {
        // 0x808001E0: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_80800324;
    }
    // 0x808001E0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x808001E4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x808001E8: jal         0x8008B1D4
    // 0x808001EC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008B1D4(rdram, ctx);
        goto after_4;
    // 0x808001EC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
    // 0x808001F0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x808001F4: jal         0x8008B134
    // 0x808001F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x808001F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x808001FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800200: jal         0x8009BA58
    // 0x80800204: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    func_8009BA58(rdram, ctx);
        goto after_6;
    // 0x80800204: lui         $a1, 0x43C8
    ctx->r5 = S32(0X43C8 << 16);
    after_6:
    // 0x80800208: jal         0x8009E058
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E058(rdram, ctx);
        goto after_7;
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800214: addiu       $a1, $zero, 0x428
    ctx->r5 = ADD32(0, 0X428);
    // 0x80800218: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080021C: jal         0x8009DF18
    // 0x80800220: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_8;
    // 0x80800220: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_8:
    // 0x80800224: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800228: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080022C: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x80800230: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800234: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800238: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080023C: jal         0x80085490
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_9;
    // 0x80800240: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800244: jal         0x80000000
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsdie(rdram, ctx);
        goto after_10;
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080024C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800250: b           L_80800324
    // 0x80800254: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_80800324;
    // 0x80800254: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800258:
    // 0x80800258: jal         0x8008E078
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_11;
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800260: beq         $v0, $zero, L_80800324
    if (ctx->r2 == 0) {
        // 0x80800264: nop
    
            goto L_80800324;
    }
    // 0x80800264: nop

    // 0x80800268: jal         0x8009E084
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E084(rdram, ctx);
        goto after_12;
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800270: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800274: addiu       $a1, $zero, 0x427
    ctx->r5 = ADD32(0, 0X427);
    // 0x80800278: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x8080027C: jal         0x8009DF18
    // 0x80800280: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_13;
    // 0x80800280: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_13:
    // 0x80800284: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x80800288: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x8080028C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800290: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80800294: jal         0x80085490
    // 0x80800298: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_14;
    // 0x80800298: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_14:
    // 0x8080029C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x808002A0: b           L_80800324
    // 0x808002A4: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_80800324;
    // 0x808002A4: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_808002A8:
    // 0x808002A8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x808002AC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808002B0: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808002B4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808002B8: jal         0x800F0E00
    // 0x808002BC: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800F0E00(rdram, ctx);
        goto after_15;
    // 0x808002BC: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_15:
    // 0x808002C0: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x808002C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808002C8: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x808002CC: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x808002D0: nop

    // 0x808002D4: bc1fl       L_808002E8
    if (!c1cs) {
        // 0x808002D8: lui         $a1, 0x3F27
        ctx->r5 = S32(0X3F27 << 16);
            goto L_808002E8;
    }
    goto skip_0;
    // 0x808002D8: lui         $a1, 0x3F27
    ctx->r5 = S32(0X3F27 << 16);
    skip_0:
    // 0x808002DC: jal         0x80084A10
    // 0x808002E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_9(rdram, ctx);
        goto after_16;
    // 0x808002E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808002E4: lui         $a1, 0x3F27
    ctx->r5 = S32(0X3F27 << 16);
L_808002E8:
    // 0x808002E8: ori         $a1, $a1, 0x5F70
    ctx->r5 = ctx->r5 | 0X5F70;
    // 0x808002EC: jal         0x8008B348
    // 0x808002F0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_17;
    // 0x808002F0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_17:
    // 0x808002F4: beq         $v0, $zero, L_80800304
    if (ctx->r2 == 0) {
        // 0x808002F8: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_80800304;
    }
    // 0x808002F8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x808002FC: jal         0x8008B1BC
    // 0x80800300: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_18;
    // 0x80800300: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_18:
L_80800304:
    // 0x80800304: jal         0x8008B324
    // 0x80800308: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B324(rdram, ctx);
        goto after_19;
    // 0x80800308: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_19:
    // 0x8080030C: beq         $v0, $zero, L_80800324
    if (ctx->r2 == 0) {
        // 0x80800310: nop
    
            goto L_80800324;
    }
    // 0x80800310: nop

    // 0x80800314: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800318: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x8080031C: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
    // 0x80800320: swc1        $f10, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f10.u32l;
L_80800324:
    // 0x80800324: jal         0x80085238
    // 0x80800328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_7(rdram, ctx);
        goto after_20;
    // 0x80800328: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8080032C: beq         $v0, $zero, L_8080033C
    if (ctx->r2 == 0) {
        // 0x80800330: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080033C;
    }
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800334: addiu       $t9, $zero, 0x54
    ctx->r25 = ADD32(0, 0X54);
    // 0x80800338: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
L_8080033C:
    // 0x8080033C: jal         0x8009E5C8
    // 0x80800340: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_21;
    // 0x80800340: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_21:
    // 0x80800344: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800348: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080034C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800350: jr          $ra
    // 0x80800354: nop

    return;
    // 0x80800354: nop

;}
RECOMP_FUNC void bsdie_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800358: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080035C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800360: jal         0x80085230
    // 0x80800364: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _basudie_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x80800364: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800368: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080036C: jal         0x800A0CF4
    // 0x80800370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_1;
    // 0x80800370: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800374: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800378: jal         0x8009BF5C
    // 0x8080037C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_2;
    // 0x8080037C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800380: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800384: jal         0x8009C4CC
    // 0x80800388: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_3;
    // 0x80800388: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x8080038C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800390: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800394: jr          $ra
    // 0x80800398: nop

    return;
    // 0x80800398: nop

;}
RECOMP_FUNC void bsdie_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080039C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808003A0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(94, 0X960) << 16);
    // 0x808003A4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808003A8: jr          $ra
    // 0x808003AC: lw          $v0, 0x960($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(94, 0X960));
    return;
    // 0x808003AC: lw          $v0, 0x960($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(94, 0X960));
;}
RECOMP_FUNC void bsdie_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808003B8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808003BC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808003C0: jal         0x8008CABC
    // 0x808003C4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808003C4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x808003C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808003CC: jal         0x8008AF24
    // 0x808003D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x808003D0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808003D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003D8: jal         0x8008B1A0
    // 0x808003DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x808003DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808003E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003E4: jal         0x8008AED4
    // 0x808003E8: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x808003E8: addiu       $a1, $zero, 0xD8
    ctx->r5 = ADD32(0, 0XD8);
    after_3:
    // 0x808003EC: lui         $a2, 0x3DBE
    ctx->r6 = S32(0X3DBE << 16);
    // 0x808003F0: ori         $a2, $a2, 0xDFA4
    ctx->r6 = ctx->r6 | 0XDFA4;
    // 0x808003F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003F8: jal         0x8008B1D4
    // 0x808003FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_4;
    // 0x808003FC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800400: lui         $a1, 0x4096
    ctx->r5 = S32(0X4096 << 16);
    // 0x80800404: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800408: jal         0x8008B1BC
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x8080040C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800410: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800414: jal         0x8008B134
    // 0x80800418: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x80800418: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8080041C: jal         0x8008B064
    // 0x80800420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x80800420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800424: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x80800428: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x8080042C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800430: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800434: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80800438: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080043C: swc1        $f0, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f0.u32l;
    // 0x80800440: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800444: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800448: lui         $a2, 0x43FF
    ctx->r6 = S32(0X43FF << 16);
    // 0x8080044C: lui         $a3, 0xC4AF
    ctx->r7 = S32(0XC4AF << 16);
    // 0x80800450: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80800454: jal         0x80085220
    // 0x80800458: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    _basudie_entrypoint_4(rdram, ctx);
        goto after_8;
    // 0x80800458: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_8:
    // 0x8080045C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800460: jal         0x800A0CF4
    // 0x80800464: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_9;
    // 0x80800464: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80800468: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080046C: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800470: jal         0x8009BFE4
    // 0x80800474: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_10;
    // 0x80800474: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_10:
    // 0x80800478: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080047C: jal         0x8009D820
    // 0x80800480: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009D820(rdram, ctx);
        goto after_11;
    // 0x80800480: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_11:
    // 0x80800484: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x80800488: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080048C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800490: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80800494: jr          $ra
    // 0x80800498: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800498: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void bsdie_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080049C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808004A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808004A4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808004A8: jal         0x8008CABC
    // 0x808004AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808004AC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808004B0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808004B4: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x808004B8: jal         0x80085228
    // 0x808004BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x808004BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808004C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004C4: jal         0x8009B9B0
    // 0x808004C8: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x808004C8: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_2:
    // 0x808004CC: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x808004D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808004D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004D8: beq         $v0, $zero, L_80800500
    if (ctx->r2 == 0) {
        // 0x808004DC: nop
    
            goto L_80800500;
    }
    // 0x808004DC: nop

    // 0x808004E0: beq         $v0, $at, L_80800528
    if (ctx->r2 == ctx->r1) {
        // 0x808004E4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800528;
    }
    // 0x808004E4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808004E8: beq         $v0, $at, L_80800594
    if (ctx->r2 == ctx->r1) {
        // 0x808004EC: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800594;
    }
    // 0x808004EC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808004F0: beq         $v0, $at, L_808005F8
    if (ctx->r2 == ctx->r1) {
        // 0x808004F4: nop
    
            goto L_808005F8;
    }
    // 0x808004F4: nop

    // 0x808004F8: b           L_808005F8
    // 0x808004FC: nop

        goto L_808005F8;
    // 0x808004FC: nop

L_80800500:
    // 0x80800500: jal         0x8008DF8C
    // 0x80800504: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    func_8008DF8C(rdram, ctx);
        goto after_3;
    // 0x80800504: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    after_3:
    // 0x80800508: beq         $v0, $zero, L_808005F8
    if (ctx->r2 == 0) {
        // 0x8080050C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005F8;
    }
    // 0x8080050C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800510: lui         $a1, 0x3E3E
    ctx->r5 = S32(0X3E3E << 16);
    // 0x80800514: jal         0x8008CED4
    // 0x80800518: ori         $a1, $a1, 0xC56D
    ctx->r5 = ctx->r5 | 0XC56D;
    func_8008CED4(rdram, ctx);
        goto after_4;
    // 0x80800518: ori         $a1, $a1, 0xC56D
    ctx->r5 = ctx->r5 | 0XC56D;
    after_4:
    // 0x8080051C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800520: b           L_808005F8
    // 0x80800524: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_808005F8;
    // 0x80800524: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_80800528:
    // 0x80800528: jal         0x8008E078
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_5;
    // 0x8080052C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800530: beq         $v0, $zero, L_808005F8
    if (ctx->r2 == 0) {
        // 0x80800534: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005F8;
    }
    // 0x80800534: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800538: addiu       $a1, $zero, 0x428
    ctx->r5 = ADD32(0, 0X428);
    // 0x8080053C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800540: jal         0x8009DF18
    // 0x80800544: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_6;
    // 0x80800544: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_6:
    // 0x80800548: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080054C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800550: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x80800554: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800558: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080055C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800560: jal         0x80085490
    // 0x80800564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x80800564: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800568: jal         0x80000000
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsdie(rdram, ctx);
        goto after_8;
    // 0x8080056C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800570: jal         0x8009E058
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E058(rdram, ctx);
        goto after_9;
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800578: lui         $a1, 0x3EAA
    ctx->r5 = S32(0X3EAA << 16);
    // 0x8080057C: ori         $a1, $a1, 0xA64C
    ctx->r5 = ctx->r5 | 0XA64C;
    // 0x80800580: jal         0x8008CED4
    // 0x80800584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CED4(rdram, ctx);
        goto after_10;
    // 0x80800584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800588: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x8080058C: b           L_808005F8
    // 0x80800590: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_808005F8;
    // 0x80800590: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800594:
    // 0x80800594: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80800598: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080059C: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808005A0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808005A4: jal         0x800F0E00
    // 0x808005A8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800F0E00(rdram, ctx);
        goto after_11;
    // 0x808005A8: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_11:
    // 0x808005AC: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x808005B0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808005B4: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x808005B8: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x808005BC: nop

    // 0x808005C0: bc1f        L_808005D0
    if (!c1cs) {
        // 0x808005C4: nop
    
            goto L_808005D0;
    }
    // 0x808005C4: nop

    // 0x808005C8: jal         0x80084A10
    // 0x808005CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_9(rdram, ctx);
        goto after_12;
    // 0x808005CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_808005D0:
    // 0x808005D0: jal         0x8008B324
    // 0x808005D4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B324(rdram, ctx);
        goto after_13;
    // 0x808005D4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_13:
    // 0x808005D8: beq         $v0, $zero, L_808005F8
    if (ctx->r2 == 0) {
        // 0x808005DC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005F8;
    }
    // 0x808005DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005E0: jal         0x8008CED4
    // 0x808005E4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CED4(rdram, ctx);
        goto after_14;
    // 0x808005E4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_14:
    // 0x808005E8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x808005EC: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x808005F0: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
    // 0x808005F4: swc1        $f10, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f10.u32l;
L_808005F8:
    // 0x808005F8: jal         0x80085238
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_7(rdram, ctx);
        goto after_15;
    // 0x808005FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800600: beq         $v0, $zero, L_80800610
    if (ctx->r2 == 0) {
        // 0x80800604: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800610;
    }
    // 0x80800604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800608: addiu       $t9, $zero, 0x54
    ctx->r25 = ADD32(0, 0X54);
    // 0x8080060C: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
L_80800610:
    // 0x80800610: jal         0x8009E5C8
    // 0x80800614: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_16;
    // 0x80800614: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_16:
    // 0x80800618: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080061C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800620: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800624: jr          $ra
    // 0x80800628: nop

    return;
    // 0x80800628: nop

;}
RECOMP_FUNC void bsdie_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080062C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800630: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800634: jal         0x80085230
    // 0x80800638: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _basudie_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x80800638: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080063C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800640: jal         0x8009BF5C
    // 0x80800644: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x80800644: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800648: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080064C: jal         0x8009C4CC
    // 0x80800650: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x80800650: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800654: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800658: jal         0x800A0CF4
    // 0x8080065C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_3;
    // 0x8080065C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800660: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800664: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800668: jr          $ra
    // 0x8080066C: nop

    return;
    // 0x8080066C: nop

;}
RECOMP_FUNC void bsdie_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800670: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800674: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(94, 0X970) << 16);
    // 0x80800678: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080067C: jr          $ra
    // 0x80800680: lw          $v0, 0x970($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(94, 0X970));
    return;
    // 0x80800680: lw          $v0, 0x970($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(94, 0X970));
;}
RECOMP_FUNC void bsdie_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800684: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800688: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080068C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800690: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800694: jal         0x8008CABC
    // 0x80800698: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800698: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x8080069C: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x808006A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808006A4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808006A8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808006AC: jal         0x8008AF24
    // 0x808006B0: swc1        $f4, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f4.u32l;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x808006B0: swc1        $f4, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f4.u32l;
    after_1:
    // 0x808006B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006B8: jal         0x8008B1A0
    // 0x808006BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_2;
    // 0x808006BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x808006C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C4: jal         0x8008AED4
    // 0x808006C8: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x808006C8: addiu       $a1, $zero, 0xD7
    ctx->r5 = ADD32(0, 0XD7);
    after_3:
    // 0x808006CC: lui         $a2, 0x3DC8
    ctx->r6 = S32(0X3DC8 << 16);
    // 0x808006D0: ori         $a2, $a2, 0xE8A7
    ctx->r6 = ctx->r6 | 0XE8A7;
    // 0x808006D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006D8: jal         0x8008B1D4
    // 0x808006DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_4;
    // 0x808006DC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x808006E0: lui         $a1, 0x4073
    ctx->r5 = S32(0X4073 << 16);
    // 0x808006E4: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x808006E8: jal         0x8008B1BC
    // 0x808006EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x808006EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808006F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006F4: jal         0x8008B134
    // 0x808006F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x808006F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808006FC: jal         0x8008B064
    // 0x80800700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x80800700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800704: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800708: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080070C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(94, 0X950) << 16);
    // 0x80800710: lwc1        $f8, 0x950($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(94, 0X950));
    // 0x80800714: lw          $a1, 0x16C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X16C);
    // 0x80800718: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080071C: lui         $a2, 0x43FF
    ctx->r6 = S32(0X43FF << 16);
    // 0x80800720: lui         $a3, 0xC4AF
    ctx->r7 = S32(0XC4AF << 16);
    // 0x80800724: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80800728: jal         0x80085220
    // 0x8080072C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    _basudie_entrypoint_4(rdram, ctx);
        goto after_8;
    // 0x8080072C: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x80800730: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800734: lui         $a1, 0x447A
    ctx->r5 = S32(0X447A << 16);
    // 0x80800738: jal         0x8009BFE4
    // 0x8080073C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    func_8009BFE4(rdram, ctx);
        goto after_9;
    // 0x8080073C: lui         $a2, 0x4140
    ctx->r6 = S32(0X4140 << 16);
    after_9:
    // 0x80800740: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800744: jal         0x8009D820
    // 0x80800748: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009D820(rdram, ctx);
        goto after_10;
    // 0x80800748: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_10:
    // 0x8080074C: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x80800750: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800754: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80800758: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8080075C: jr          $ra
    // 0x80800760: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800760: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void bsdie_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800764: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800768: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080076C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800770: jal         0x8008CABC
    // 0x80800774: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800774: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800778: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8080077C: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80800780: jal         0x80085228
    // 0x80800784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80800784: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800788: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080078C: jal         0x8009B9B0
    // 0x80800790: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800790: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_2:
    // 0x80800794: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80800798: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080079C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007A0: beq         $v0, $zero, L_808007C8
    if (ctx->r2 == 0) {
        // 0x808007A4: nop
    
            goto L_808007C8;
    }
    // 0x808007A4: nop

    // 0x808007A8: beq         $v0, $at, L_808007F8
    if (ctx->r2 == ctx->r1) {
        // 0x808007AC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808007F8;
    }
    // 0x808007AC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808007B0: beq         $v0, $at, L_80800860
    if (ctx->r2 == ctx->r1) {
        // 0x808007B4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800860;
    }
    // 0x808007B4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808007B8: beq         $v0, $at, L_808008C4
    if (ctx->r2 == ctx->r1) {
        // 0x808007BC: nop
    
            goto L_808008C4;
    }
    // 0x808007BC: nop

    // 0x808007C0: b           L_808008C4
    // 0x808007C4: nop

        goto L_808008C4;
    // 0x808007C4: nop

L_808007C8:
    // 0x808007C8: jal         0x8008DF8C
    // 0x808007CC: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    func_8008DF8C(rdram, ctx);
        goto after_3;
    // 0x808007CC: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_3:
    // 0x808007D0: beq         $v0, $zero, L_808008C4
    if (ctx->r2 == 0) {
        // 0x808007D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008C4;
    }
    // 0x808007D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007D8: lui         $a1, 0x3E48
    ctx->r5 = S32(0X3E48 << 16);
    // 0x808007DC: lui         $a2, 0x4046
    ctx->r6 = S32(0X4046 << 16);
    // 0x808007E0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808007E4: jal         0x8008CF1C
    // 0x808007E8: ori         $a1, $a1, 0xCE70
    ctx->r5 = ctx->r5 | 0XCE70;
    func_8008CF1C(rdram, ctx);
        goto after_4;
    // 0x808007E8: ori         $a1, $a1, 0xCE70
    ctx->r5 = ctx->r5 | 0XCE70;
    after_4:
    // 0x808007EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808007F0: b           L_808008C4
    // 0x808007F4: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
        goto L_808008C4;
    // 0x808007F4: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
L_808007F8:
    // 0x808007F8: jal         0x8008E078
    // 0x808007FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_5;
    // 0x808007FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800800: beq         $v0, $zero, L_808008C4
    if (ctx->r2 == 0) {
        // 0x80800804: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008C4;
    }
    // 0x80800804: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800808: addiu       $a1, $zero, 0x428
    ctx->r5 = ADD32(0, 0X428);
    // 0x8080080C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800810: jal         0x8009DF18
    // 0x80800814: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_6;
    // 0x80800814: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_6:
    // 0x80800818: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8080081C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800820: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x80800824: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800828: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080082C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800830: jal         0x80085490
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamotor_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x80800834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800838: jal         0x80000000
    // 0x8080083C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsdie(rdram, ctx);
        goto after_8;
    // 0x8080083C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800840: jal         0x8009E058
    // 0x80800844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E058(rdram, ctx);
        goto after_9;
    // 0x80800844: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080084C: jal         0x8008CED4
    // 0x80800850: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    func_8008CED4(rdram, ctx);
        goto after_10;
    // 0x80800850: lui         $a1, 0x3F40
    ctx->r5 = S32(0X3F40 << 16);
    after_10:
    // 0x80800854: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800858: b           L_808008C4
    // 0x8080085C: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
        goto L_808008C4;
    // 0x8080085C: sw          $t7, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r15;
L_80800860:
    // 0x80800860: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80800864: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800868: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x8080086C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800870: jal         0x800F0E00
    // 0x80800874: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    func_800F0E00(rdram, ctx);
        goto after_11;
    // 0x80800874: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    after_11:
    // 0x80800878: lui         $at, 0x430C
    ctx->r1 = S32(0X430C << 16);
    // 0x8080087C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800880: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x80800884: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x80800888: nop

    // 0x8080088C: bc1f        L_8080089C
    if (!c1cs) {
        // 0x80800890: nop
    
            goto L_8080089C;
    }
    // 0x80800890: nop

    // 0x80800894: jal         0x80084A10
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_9(rdram, ctx);
        goto after_12;
    // 0x80800898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
L_8080089C:
    // 0x8080089C: jal         0x8008B324
    // 0x808008A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B324(rdram, ctx);
        goto after_13;
    // 0x808008A0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_13:
    // 0x808008A4: beq         $v0, $zero, L_808008C4
    if (ctx->r2 == 0) {
        // 0x808008A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008C4;
    }
    // 0x808008A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008AC: jal         0x8008CED4
    // 0x808008B0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CED4(rdram, ctx);
        goto after_14;
    // 0x808008B0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_14:
    // 0x808008B4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x808008B8: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x808008BC: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
    // 0x808008C0: swc1        $f10, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f10.u32l;
L_808008C4:
    // 0x808008C4: jal         0x80085238
    // 0x808008C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_7(rdram, ctx);
        goto after_15;
    // 0x808008C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x808008CC: beq         $v0, $zero, L_808008DC
    if (ctx->r2 == 0) {
        // 0x808008D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008DC;
    }
    // 0x808008D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008D4: addiu       $t9, $zero, 0x54
    ctx->r25 = ADD32(0, 0X54);
    // 0x808008D8: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
L_808008DC:
    // 0x808008DC: jal         0x8009E5C8
    // 0x808008E0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_16;
    // 0x808008E0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_16:
    // 0x808008E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808008E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808008EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808008F0: jr          $ra
    // 0x808008F4: nop

    return;
    // 0x808008F4: nop

;}
RECOMP_FUNC void bsdie_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808008FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800900: jal         0x80085230
    // 0x80800904: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _basudie_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x80800904: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800908: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080090C: jal         0x8009BF5C
    // 0x80800910: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x80800910: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800914: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800918: jal         0x8009C4CC
    // 0x8080091C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x8080091C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800920: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800924: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800928: jr          $ra
    // 0x8080092C: nop

    return;
    // 0x8080092C: nop

;}
RECOMP_FUNC void bsdie_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800930: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800934: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(94, 0X980) << 16);
    // 0x80800938: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080093C: jr          $ra
    // 0x80800940: lw          $v0, 0x980($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(94, 0X980));
    return;
    // 0x80800940: lw          $v0, 0x980($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(94, 0X980));
    // 0x80800944: nop

    // 0x80800948: nop

    // 0x8080094C: nop

;}
RECOMP_FUNC void func_80800000_bsdrone(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x80084800
    // 0x8080000C: nop

    _badrone_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x8080000C: nop

    after_0:
    // 0x80800010: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(95, 0X180) << 16);
    // 0x80800014: lbu         $t6, 0x180($t6)
    ctx->r14 = MEM_BU(ctx->r14, (int16_t)RELOC_LO16(95, 0X180));
    // 0x80800018: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8080001C: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(95, 0X180) << 16);
    // 0x80800020: beq         $t6, $zero, L_80800054
    if (ctx->r14 == 0) {
        // 0x80800024: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800054;
    }
    // 0x80800024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800028: addiu       $v1, $t7, 0x180
    ctx->r3 = ADD32(ctx->r15, (int16_t)RELOC_LO16(95, 0X180));
    // 0x8080002C: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
L_80800030:
    // 0x80800030: bnel        $v0, $a0, L_80800044
    if (ctx->r2 != ctx->r4) {
        // 0x80800034: lbu         $a0, 0x14($v1)
        ctx->r4 = MEM_BU(ctx->r3, 0X14);
            goto L_80800044;
    }
    goto skip_0;
    // 0x80800034: lbu         $a0, 0x14($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X14);
    skip_0:
    // 0x80800038: b           L_80800058
    // 0x8080003C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
        goto L_80800058;
    // 0x8080003C: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x80800040: lbu         $a0, 0x14($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X14);
L_80800044:
    // 0x80800044: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x80800048: addiu       $v1, $v1, 0x14
    ctx->r3 = ADD32(ctx->r3, 0X14);
    // 0x8080004C: bne         $a0, $zero, L_80800030
    if (ctx->r4 != 0) {
        // 0x80800050: nop
    
            goto L_80800030;
    }
    // 0x80800050: nop

L_80800054:
    // 0x80800054: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800058:
    // 0x80800058: jr          $ra
    // 0x8080005C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8080005C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void bsdrone_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800068: jal         0x80084808
    // 0x8080006C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _badrone_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x8080006C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800070: jal         0x80000000
    // 0x80800074: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_bsdrone(rdram, ctx);
        goto after_1;
    // 0x80800074: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800078: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x8080007C: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80800080: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800084: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(95, 0X184) << 16);
    // 0x80800088: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x8080008C: lw          $t9, 0x184($t9)
    ctx->r25 = MEM_W(ctx->r25, (int16_t)RELOC_LO16(95, 0X184));
    // 0x80800090: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800094: jalr        $t9
    // 0x80800098: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80800098: nop

    after_2:
    // 0x8080009C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000A4: jr          $ra
    // 0x808000A8: nop

    return;
    // 0x808000A8: nop

;}
RECOMP_FUNC void bsdrone_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000B4: jal         0x80000000
    // 0x808000B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800000_bsdrone(rdram, ctx);
        goto after_0;
    // 0x808000B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000BC: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x808000C0: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x808000C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808000C8: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(95, 0X188) << 16);
    // 0x808000CC: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x808000D0: lw          $t9, 0x188($t9)
    ctx->r25 = MEM_W(ctx->r25, (int16_t)RELOC_LO16(95, 0X188));
    // 0x808000D4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000D8: jalr        $t9
    // 0x808000DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x808000DC: nop

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
RECOMP_FUNC void bsdrone_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000F8: jal         0x80000000
    // 0x808000FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800000_bsdrone(rdram, ctx);
        goto after_0;
    // 0x808000FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800100: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80800104: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x80800108: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8080010C: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(95, 0X18C) << 16);
    // 0x80800110: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x80800114: lw          $t9, 0x18C($t9)
    ctx->r25 = MEM_W(ctx->r25, (int16_t)RELOC_LO16(95, 0X18C));
    // 0x80800118: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080011C: jalr        $t9
    // 0x80800120: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80800120: nop

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
RECOMP_FUNC void bsdrone_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800134: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800138: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080013C: jal         0x80000000
    // 0x80800140: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800000_bsdrone(rdram, ctx);
        goto after_0;
    // 0x80800140: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800144: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80800148: addu        $t6, $t6, $v0
    ctx->r14 = ADD32(ctx->r14, ctx->r2);
    // 0x8080014C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800150: lui         $v1, 0x0
    ctx->r3 = S32(RELOC_HI16(95, 0X190) << 16);
    // 0x80800154: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x80800158: lw          $v1, 0x190($v1)
    ctx->r3 = MEM_W(ctx->r3, (int16_t)RELOC_LO16(95, 0X190));
    // 0x8080015C: beql        $v1, $zero, L_80800170
    if (ctx->r3 == 0) {
        // 0x80800160: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800170;
    }
    goto skip_0;
    // 0x80800160: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800164: jalr        $v1
    // 0x80800168: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    LOOKUP_FUNC(ctx->r3)(rdram, ctx);
        goto after_1;
    // 0x80800168: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080016C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800170:
    // 0x80800170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800174: jr          $ra
    // 0x80800178: nop

    return;
    // 0x80800178: nop

    // 0x8080017C: nop

;}
RECOMP_FUNC void func_80800000_bsdronebitten(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800044: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x80800044: lui         $a2, 0x43FA
    ctx->r6 = S32(0X43FA << 16);
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
RECOMP_FUNC void bsdronebitten_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080006C: jal         0x8008E95C
    // 0x80800070: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E95C(rdram, ctx);
        goto after_0;
    // 0x80800070: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800074: jal         0x8009EF60
    // 0x80800078: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009EF60(rdram, ctx);
        goto after_1;
    // 0x80800078: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080007C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800080: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800084: jr          $ra
    // 0x80800088: nop

    return;
    // 0x80800088: nop

;}
RECOMP_FUNC void bsdronebitten_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080008C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800090: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800094: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800098: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080009C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x808000A0: jal         0x80084660
    // 0x808000A4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    _badata_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x808000A4: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x808000A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000AC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x808000B0: jal         0x8008CB3C
    // 0x808000B4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808000B4: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x808000B8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x808000BC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808000CC: jal         0x8009FFD8
    // 0x808000D0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808000D0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D8: jal         0x8009BA58
    // 0x808000DC: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    func_8009BA58(rdram, ctx);
        goto after_3;
    // 0x808000DC: lui         $a1, 0x4461
    ctx->r5 = S32(0X4461 << 16);
    after_3:
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: jal         0x8009BCB4
    // 0x808000E8: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_4;
    // 0x808000E8: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_4:
    // 0x808000EC: jal         0x8009EFA8
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_5;
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808000F4: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x808000F8: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x808000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800100: jal         0x8009F1C8
    // 0x80800104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_6;
    // 0x80800104: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080010C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800110: jal         0x8009F1C8
    // 0x80800114: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_7;
    // 0x80800114: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_7:
    // 0x80800118: jal         0x8008E944
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_8;
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800120: jal         0x8009D9D4
    // 0x80800124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D9D4(rdram, ctx);
        goto after_9;
    // 0x80800124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800128: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080012C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800130: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800134: jr          $ra
    // 0x80800138: nop

    return;
    // 0x80800138: nop

;}
RECOMP_FUNC void bsdronebitten_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080013C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800140: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800144: jal         0x80099AA8
    // 0x80800148: nop

    func_80099AA8(rdram, ctx);
        goto after_0;
    // 0x80800148: nop

    after_0:
    // 0x8080014C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800150: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800154: jr          $ra
    // 0x80800158: nop

    return;
    // 0x80800158: nop

;}
RECOMP_FUNC void bsdronebitten_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080015C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800160: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800164: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800168: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080016C: jal         0x80000000
    // 0x80800170: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_80800000_bsdronebitten(rdram, ctx);
        goto after_0;
    // 0x80800170: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x80800174: lw          $a0, 0x184($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X184);
    // 0x80800178: jal         0x800F64A4
    // 0x8080017C: addiu       $a1, $zero, 0x201
    ctx->r5 = ADD32(0, 0X201);
    func_800F64A4(rdram, ctx);
        goto after_1;
    // 0x8080017C: addiu       $a1, $zero, 0x201
    ctx->r5 = ADD32(0, 0X201);
    after_1:
    // 0x80800180: beq         $v0, $zero, L_8080019C
    if (ctx->r2 == 0) {
        // 0x80800184: nop
    
            goto L_8080019C;
    }
    // 0x80800184: nop

    // 0x80800188: jal         0x8008DA24
    // 0x8080018C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DA24(rdram, ctx);
        goto after_2;
    // 0x8080018C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800190: beq         $v0, $zero, L_8080019C
    if (ctx->r2 == 0) {
        // 0x80800194: addiu       $t6, $zero, 0xA8
        ctx->r14 = ADD32(0, 0XA8);
            goto L_8080019C;
    }
    // 0x80800194: addiu       $t6, $zero, 0xA8
    ctx->r14 = ADD32(0, 0XA8);
    // 0x80800198: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
L_8080019C:
    // 0x8080019C: jal         0x8009BB50
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_3;
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808001A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808001A8: or          $t7, $zero, $zero
    ctx->r15 = 0 | 0;
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B0: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x808001B4: addiu       $a1, $zero, 0x96
    ctx->r5 = ADD32(0, 0X96);
    // 0x808001B8: bc1f        L_808001C4
    if (!c1cs) {
        // 0x808001BC: nop
    
            goto L_808001C4;
    }
    // 0x808001BC: nop

    // 0x808001C0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_808001C4:
    // 0x808001C4: jal         0x8008DF8C
    // 0x808001C8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_8008DF8C(rdram, ctx);
        goto after_4;
    // 0x808001C8: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_4:
    // 0x808001CC: bne         $v0, $zero, L_808001EC
    if (ctx->r2 != 0) {
        // 0x808001D0: lw          $t8, 0x24($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X24);
            goto L_808001EC;
    }
    // 0x808001D0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x808001D4: beql        $t8, $zero, L_808001FC
    if (ctx->r24 == 0) {
        // 0x808001D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001FC;
    }
    goto skip_0;
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808001DC: jal         0x8008E35C
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_5;
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808001E4: beql        $v0, $zero, L_808001FC
    if (ctx->r2 == 0) {
        // 0x808001E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001FC;
    }
    goto skip_1;
    // 0x808001E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_808001EC:
    // 0x808001EC: jal         0x80084700
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_24(rdram, ctx);
        goto after_6;
    // 0x808001F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808001F4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001FC:
    // 0x808001FC: jal         0x8009E5C8
    // 0x80800200: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x80800200: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x80800204: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800208: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080020C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800210: jr          $ra
    // 0x80800214: nop

    return;
    // 0x80800214: nop

;}
RECOMP_FUNC void bsdronebitten_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800218: lbu         $v0, 0x191($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X191);
    // 0x8080021C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80800220: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800224: beq         $v0, $at, L_8080023C
    if (ctx->r2 == ctx->r1) {
        // 0x80800228: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8080023C;
    }
    // 0x80800228: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080022C: beql        $v0, $at, L_80800248
    if (ctx->r2 == ctx->r1) {
        // 0x80800230: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80800248;
    }
    goto skip_0;
    // 0x80800230: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    skip_0:
    // 0x80800234: b           L_80800260
    // 0x80800238: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_80800260;
    // 0x80800238: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
L_8080023C:
    // 0x8080023C: jr          $ra
    // 0x80800240: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    return;
    // 0x80800240: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x80800244: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
L_80800248:
    // 0x80800248: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8080024C: nop

    // 0x80800250: sub.s       $f2, $f14, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x80800254: mul.s       $f4, $f2, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x80800258: jr          $ra
    // 0x8080025C: sub.s       $f0, $f14, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f4.fl;
    return;
    // 0x8080025C: sub.s       $f0, $f14, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f14.fl - ctx->f4.fl;
L_80800260:
    // 0x80800260: jr          $ra
    // 0x80800264: nop

    return;
    // 0x80800264: nop

;}
RECOMP_FUNC void bsdronebitten_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800268: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080026C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800270: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80800274: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80800278: lbu         $v0, 0x191($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X191);
    // 0x8080027C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800280: beq         $v0, $at, L_808002D8
    if (ctx->r2 == ctx->r1) {
        // 0x80800284: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808002D8;
    }
    // 0x80800284: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800288: bnel        $v0, $at, L_808002DC
    if (ctx->r2 != ctx->r1) {
        // 0x8080028C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808002DC;
    }
    goto skip_0;
    // 0x8080028C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800290: jal         0x80084DD0
    // 0x80800294: nop

    _bamovegoto_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800294: nop

    after_0:
    // 0x80800298: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8080029C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808002A0: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x808002A4: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x808002A8: mul.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x808002AC: jal         0x80013970
    // 0x808002B0: nop

    func_80013970(rdram, ctx);
        goto after_1;
    // 0x808002B0: nop

    after_1:
    // 0x808002B4: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x808002B8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808002BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808002C0: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x808002C4: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x808002C8: lwc1        $f4, 0x4($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0X4);
    // 0x808002CC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x808002D0: add.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x808002D4: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
L_808002D8:
    // 0x808002D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808002DC:
    // 0x808002DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808002E0: jr          $ra
    // 0x808002E4: nop

    return;
    // 0x808002E4: nop

;}
RECOMP_FUNC void bsdronebitten_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002F0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808002F4: jal         0x800961A0
    // 0x808002F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800961A0(rdram, ctx);
        goto after_0;
    // 0x808002F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808002FC: jal         0x8008E95C
    // 0x80800300: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008E95C(rdram, ctx);
        goto after_1;
    // 0x80800300: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800304: jal         0x80084D10
    // 0x80800308: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bafpctrl_entrypoint_19(rdram, ctx);
        goto after_2;
    // 0x80800308: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8080030C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800310: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800314: jr          $ra
    // 0x80800318: nop

    return;
    // 0x80800318: nop

;}
RECOMP_FUNC void bsdronebitten_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080031C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800320: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800324: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800328: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080032C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80800330: jal         0x80084660
    // 0x80800334: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    _badata_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800334: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x80800338: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080033C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80800340: jal         0x8008CB3C
    // 0x80800344: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800344: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x80800348: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8080034C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800358: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080035C: jal         0x8009FFD8
    // 0x80800360: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800360: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800368: jal         0x8009C128
    // 0x8080036C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_8009C128(rdram, ctx);
        goto after_3;
    // 0x8080036C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_3:
    // 0x80800370: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
    // 0x80800374: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80800378: jal         0x800EEAD4
    // 0x8080037C: addiu       $a1, $a1, 0x34
    ctx->r5 = ADD32(ctx->r5, 0X34);
    func_800EEAD4(rdram, ctx);
        goto after_4;
    // 0x8080037C: addiu       $a1, $a1, 0x34
    ctx->r5 = ADD32(ctx->r5, 0X34);
    after_4:
    // 0x80800380: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
    // 0x80800384: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x80800388: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080038C: lbu         $t8, 0x30($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X30);
    // 0x80800390: jal         0x80084DB8
    // 0x80800394: sb          $t8, 0x191($s0)
    MEM_B(0X191, ctx->r16) = ctx->r24;
    _bamovegoto_entrypoint_0(rdram, ctx);
        goto after_5;
    // 0x80800394: sb          $t8, 0x191($s0)
    MEM_B(0X191, ctx->r16) = ctx->r24;
    after_5:
    // 0x80800398: lbu         $t9, 0x191($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X191);
    // 0x8080039C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808003A0: lwc1        $f12, 0x3C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808003A4: bne         $t9, $at, L_808003C0
    if (ctx->r25 != ctx->r1) {
        // 0x808003A8: lui         $a2, 0x459C
        ctx->r6 = S32(0X459C << 16);
            goto L_808003C0;
    }
    // 0x808003A8: lui         $a2, 0x459C
    ctx->r6 = S32(0X459C << 16);
    // 0x808003AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003B0: jal         0x80084DF8
    // 0x808003B4: lui         $a1, 0x4516
    ctx->r5 = S32(0X4516 << 16);
    _bamovegoto_entrypoint_8(rdram, ctx);
        goto after_6;
    // 0x808003B4: lui         $a1, 0x4516
    ctx->r5 = S32(0X4516 << 16);
    after_6:
    // 0x808003B8: b           L_808003F8
    // 0x808003BC: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
        goto L_808003F8;
    // 0x808003BC: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
L_808003C0:
    // 0x808003C0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x808003C4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808003C8: lui         $at, 0x4090
    ctx->r1 = S32(0X4090 << 16);
    // 0x808003CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808003D0: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x808003D4: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808003D8: ori         $a2, $a2, 0x4000
    ctx->r6 = ctx->r6 | 0X4000;
    // 0x808003DC: jal         0x800F10B4
    // 0x808003E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_7;
    // 0x808003E0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_7:
    // 0x808003E4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808003E8: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x808003EC: jal         0x80084DF0
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_7(rdram, ctx);
        goto after_8;
    // 0x808003F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808003F4: lw          $a1, 0x54($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X54);
L_808003F8:
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808003FC: jal         0x80084E18
    // 0x80800400: addiu       $a1, $a1, 0x34
    ctx->r5 = ADD32(ctx->r5, 0X34);
    _bamovegoto_entrypoint_12(rdram, ctx);
        goto after_9;
    // 0x80800400: addiu       $a1, $a1, 0x34
    ctx->r5 = ADD32(ctx->r5, 0X34);
    after_9:
    // 0x80800404: lui         $a1, 0x8008
    ctx->r5 = S32(0X8008 << 16);
    // 0x80800408: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x8080040C: addiu       $a2, $a2, 0x3028
    ctx->r6 = ADD32(ctx->r6, 0X3028);
    // 0x80800410: addiu       $a1, $a1, 0x3020
    ctx->r5 = ADD32(ctx->r5, 0X3020);
    // 0x80800414: jal         0x80084E10
    // 0x80800418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_11(rdram, ctx);
        goto after_10;
    // 0x80800418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080041C: jal         0x80084E20
    // 0x80800420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_13(rdram, ctx);
        goto after_11;
    // 0x80800420: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800424: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800428: jal         0x800961A0
    // 0x8080042C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961A0(rdram, ctx);
        goto after_12;
    // 0x8080042C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_12:
    // 0x80800430: jal         0x8008E944
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_13;
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800438: jal         0x8009D9D4
    // 0x8080043C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D9D4(rdram, ctx);
        goto after_14;
    // 0x8080043C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800440: sb          $zero, 0x190($s0)
    MEM_B(0X190, ctx->r16) = 0;
    // 0x80800444: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800448: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080044C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800450: jr          $ra
    // 0x80800454: nop

    return;
    // 0x80800454: nop

;}
RECOMP_FUNC void bsdronebitten_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800458: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080045C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800460: jal         0x80099AA8
    // 0x80800464: nop

    func_80099AA8(rdram, ctx);
        goto after_0;
    // 0x80800464: nop

    after_0:
    // 0x80800468: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080046C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800470: jr          $ra
    // 0x80800474: nop

    return;
    // 0x80800474: nop

;}
RECOMP_FUNC void func_80800478_bsdronebitten(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800478: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080047C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800480: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800484: jal         0x8008E124
    // 0x80800488: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E124(rdram, ctx);
        goto after_0;
    // 0x80800488: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080048C: beq         $v0, $zero, L_808004A4
    if (ctx->r2 == 0) {
        // 0x80800490: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808004A4;
    }
    // 0x80800490: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800494: jal         0x80084740
    // 0x80800498: nop

    _badata_entrypoint_32(rdram, ctx);
        goto after_1;
    // 0x80800498: nop

    after_1:
    // 0x8080049C: b           L_808004B0
    // 0x808004A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_808004B0;
    // 0x808004A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_808004A4:
    // 0x808004A4: jal         0x80084750
    // 0x808004A8: nop

    _badata_entrypoint_34(rdram, ctx);
        goto after_2;
    // 0x808004A8: nop

    after_2:
    // 0x808004AC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_808004B0:
    // 0x808004B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x808004BC: jr          $ra
    // 0x808004C0: nop

    return;
    // 0x808004C0: nop

;}
RECOMP_FUNC void func_808004C4_bsdronebitten(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808004C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808004CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808004D0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808004D4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x808004D8: jal         0x8008CABC
    // 0x808004DC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808004DC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_0:
    // 0x808004E0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808004E4: jal         0x8008AF24
    // 0x808004E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x808004E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808004EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004F0: jal         0x8008AED4
    // 0x808004F4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x808004F4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x808004F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004FC: jal         0x8008B1BC
    // 0x80800500: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x80800500: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_3:
    // 0x80800504: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800508: jal         0x8008B134
    // 0x8080050C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_4;
    // 0x8080050C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800514: jal         0x8008B1A0
    // 0x80800518: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_5;
    // 0x80800518: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x8080051C: jal         0x8008B064
    // 0x80800520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_6;
    // 0x80800520: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800524: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80800528: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080052C: sb          $t6, 0x190($t7)
    MEM_B(0X190, ctx->r15) = ctx->r14;
    // 0x80800530: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800534: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800538: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080053C: jr          $ra
    // 0x80800540: nop

    return;
    // 0x80800540: nop

;}
RECOMP_FUNC void bsdronebitten_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800544: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800548: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080054C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800550: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80800554: lbu         $v0, 0x190($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X190);
    // 0x80800558: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080055C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800560: beq         $v0, $zero, L_80800578
    if (ctx->r2 == 0) {
        // 0x80800564: nop
    
            goto L_80800578;
    }
    // 0x80800564: nop

    // 0x80800568: beq         $v0, $at, L_8080064C
    if (ctx->r2 == ctx->r1) {
        // 0x8080056C: nop
    
            goto L_8080064C;
    }
    // 0x8080056C: nop

    // 0x80800570: b           L_8080066C
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080066C;
    // 0x80800574: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800578:
    // 0x80800578: jal         0x80084DD8
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovegoto_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80800580: beql        $v0, $zero, L_8080066C
    if (ctx->r2 == 0) {
        // 0x80800584: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080066C;
    }
    goto skip_0;
    // 0x80800584: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800588: jal         0x8009D9D4
    // 0x8080058C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D9D4(rdram, ctx);
        goto after_1;
    // 0x8080058C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800590: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800594: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080059C: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x808005A0: jal         0x8009DB04
    // 0x808005A4: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DB04(rdram, ctx);
        goto after_2;
    // 0x808005A4: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_2:
    // 0x808005A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x808005B0: jal         0x80084FC8
    // 0x808005B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    _bashake_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x808005B4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x808005B8: jal         0x80084A08
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badust_entrypoint_8(rdram, ctx);
        goto after_4;
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808005C0: jal         0x800A1718
    // 0x808005C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A1718(rdram, ctx);
        goto after_5;
    // 0x808005C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808005C8: bne         $v0, $zero, L_808005E0
    if (ctx->r2 != 0) {
        // 0x808005CC: nop
    
            goto L_808005E0;
    }
    // 0x808005CC: nop

    // 0x808005D0: jal         0x800846E0
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_20(rdram, ctx);
        goto after_6;
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808005D8: b           L_80800668
    // 0x808005DC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
        goto L_80800668;
    // 0x808005DC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_808005E0:
    // 0x808005E0: jal         0x800A3274
    // 0x808005E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_7;
    // 0x808005E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808005E8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808005EC: beq         $v0, $at, L_80800610
    if (ctx->r2 == ctx->r1) {
        // 0x808005F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800610;
    }
    // 0x808005F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005F4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x808005F8: beq         $v0, $at, L_80800610
    if (ctx->r2 == ctx->r1) {
        // 0x808005FC: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80800610;
    }
    // 0x808005FC: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80800600: beq         $v0, $at, L_80800624
    if (ctx->r2 == ctx->r1) {
        // 0x80800604: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800624;
    }
    // 0x80800604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800608: b           L_8080063C
    // 0x8080060C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080063C;
    // 0x8080060C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800610:
    // 0x80800610: addiu       $a1, $zero, 0xD2
    ctx->r5 = ADD32(0, 0XD2);
    // 0x80800614: jal         0x800004C4
    // 0x80800618: lui         $a2, 0x4010
    ctx->r6 = S32(0X4010 << 16);
    func_808004C4_bsdronebitten(rdram, ctx);
        goto after_8;
    // 0x80800618: lui         $a2, 0x4010
    ctx->r6 = S32(0X4010 << 16);
    after_8:
    // 0x8080061C: b           L_8080066C
    // 0x80800620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080066C;
    // 0x80800620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800624:
    // 0x80800624: lui         $a2, 0x3FCC
    ctx->r6 = S32(0X3FCC << 16);
    // 0x80800628: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080062C: jal         0x800004C4
    // 0x80800630: addiu       $a1, $zero, 0x11E
    ctx->r5 = ADD32(0, 0X11E);
    func_808004C4_bsdronebitten(rdram, ctx);
        goto after_9;
    // 0x80800630: addiu       $a1, $zero, 0x11E
    ctx->r5 = ADD32(0, 0X11E);
    after_9:
    // 0x80800634: b           L_8080066C
    // 0x80800638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080066C;
    // 0x80800638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080063C:
    // 0x8080063C: jal         0x80000478
    // 0x80800640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800478_bsdronebitten(rdram, ctx);
        goto after_10;
    // 0x80800640: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80800644: b           L_80800668
    // 0x80800648: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
        goto L_80800668;
    // 0x80800648: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_8080064C:
    // 0x8080064C: jal         0x8008CAEC
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_11;
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800654: beq         $v0, $zero, L_80800668
    if (ctx->r2 == 0) {
        // 0x80800658: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800668;
    }
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080065C: jal         0x80000478
    // 0x80800660: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800478_bsdronebitten(rdram, ctx);
        goto after_12;
    // 0x80800660: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80800664: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80800668:
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080066C:
    // 0x8080066C: jal         0x8009E5C8
    // 0x80800670: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_13;
    // 0x80800670: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_13:
    // 0x80800674: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800678: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080067C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800680: jr          $ra
    // 0x80800684: nop

    return;
    // 0x80800684: nop

    // 0x80800688: nop

    // 0x8080068C: nop

;}
RECOMP_FUNC void func_80800000_bsdronebubbled(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x8080000C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80800010: lw          $a2, 0x184($a3)
    ctx->r6 = MEM_W(ctx->r7, 0X184);
    // 0x80800014: lw          $a0, 0x48($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X48);
    // 0x80800018: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    // 0x8080001C: jal         0x8010114C
    // 0x80800020: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    func_8010114C(rdram, ctx);
        goto after_0;
    // 0x80800020: addiu       $a1, $zero, 0x2C
    ctx->r5 = ADD32(0, 0X2C);
    after_0:
    // 0x80800024: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80800028: lw          $t7, 0x54($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X54);
    // 0x8080002C: sw          $zero, 0x48($t7)
    MEM_W(0X48, ctx->r15) = 0;
    // 0x80800030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800038: jr          $ra
    // 0x8080003C: nop

    return;
    // 0x8080003C: nop

;}
RECOMP_FUNC void bsdronebubbled_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800040: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800044: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800048: lw          $t6, 0x54($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X54);
    // 0x8080004C: lw          $t7, 0x48($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X48);
    // 0x80800050: beql        $t7, $zero, L_80800064
    if (ctx->r15 == 0) {
        // 0x80800054: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800064;
    }
    goto skip_0;
    // 0x80800054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800058: jal         0x80000000
    // 0x8080005C: nop

    func_80800000_bsdronebubbled(rdram, ctx);
        goto after_0;
    // 0x8080005C: nop

    after_0:
    // 0x80800060: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800064:
    // 0x80800064: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800068: jr          $ra
    // 0x8080006C: nop

    return;
    // 0x8080006C: nop

;}
RECOMP_FUNC void bsdronebubbled_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800070: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800074: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800078: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080007C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800080: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80800084: jal         0x80084640
    // 0x80800088: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    _badata_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800088: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800090: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80800094: jal         0x8008CB3C
    // 0x80800098: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800098: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_1:
    // 0x8080009C: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x808000A0: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
    // 0x808000A4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808000A8: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x808000AC: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x808000B0: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000BC: swc1        $f6, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f6.u32l;
    // 0x808000C0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x808000C4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808000C8: jal         0x8009FFD8
    // 0x808000CC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808000CC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x808000D0: jal         0x8009D9D4
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D9D4(rdram, ctx);
        goto after_3;
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808000DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808000E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808000E4: jr          $ra
    // 0x808000E8: nop

    return;
    // 0x808000E8: nop

;}
RECOMP_FUNC void bsdronebubbled_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000EC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000F4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000F8: jal         0x8009E6EC
    // 0x808000FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808000FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800100: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x80800104: beq         $v0, $at, L_80800130
    if (ctx->r2 == ctx->r1) {
        // 0x80800108: addiu       $at, $zero, 0x6F
        ctx->r1 = ADD32(0, 0X6F);
            goto L_80800130;
    }
    // 0x80800108: addiu       $at, $zero, 0x6F
    ctx->r1 = ADD32(0, 0X6F);
    // 0x8080010C: beq         $v0, $at, L_80800140
    if (ctx->r2 == ctx->r1) {
        // 0x80800110: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800140;
    }
    // 0x80800110: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800114: addiu       $at, $zero, 0x70
    ctx->r1 = ADD32(0, 0X70);
    // 0x80800118: beq         $v0, $at, L_80800150
    if (ctx->r2 == ctx->r1) {
        // 0x8080011C: addiu       $at, $zero, 0x7B
        ctx->r1 = ADD32(0, 0X7B);
            goto L_80800150;
    }
    // 0x8080011C: addiu       $at, $zero, 0x7B
    ctx->r1 = ADD32(0, 0X7B);
    // 0x80800120: beql        $v0, $at, L_80800170
    if (ctx->r2 == ctx->r1) {
        // 0x80800124: lw          $t6, 0x54($s0)
        ctx->r14 = MEM_W(ctx->r16, 0X54);
            goto L_80800170;
    }
    goto skip_0;
    // 0x80800124: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
    skip_0:
    // 0x80800128: b           L_80800198
    // 0x8080012C: nop

        goto L_80800198;
    // 0x8080012C: nop

L_80800130:
    // 0x80800130: jal         0x80099B94
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B94(rdram, ctx);
        goto after_1;
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800138: b           L_808001A4
    // 0x8080013C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808001A4;
    // 0x8080013C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800140:
    // 0x80800140: jal         0x8009E830
    // 0x80800144: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E830(rdram, ctx);
        goto after_2;
    // 0x80800144: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800148: b           L_808001A4
    // 0x8080014C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808001A4;
    // 0x8080014C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800150:
    // 0x80800150: jal         0x80084750
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badata_entrypoint_34(rdram, ctx);
        goto after_3;
    // 0x80800154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080015C: jal         0x8009E5C8
    // 0x80800160: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80800160: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x80800164: b           L_808001A4
    // 0x80800168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808001A4;
    // 0x80800168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080016C: lw          $t6, 0x54($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X54);
L_80800170:
    // 0x80800170: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800174: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80800178: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(97, 0X2E0) << 16);
    // 0x8080017C: lwc1        $f6, 0x2E0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(97, 0X2E0));
    // 0x80800180: lwc1        $f4, 0x40($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X40);
    // 0x80800184: jal         0x800F13F0
    // 0x80800188: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_800F13F0(rdram, ctx);
        goto after_5;
    // 0x80800188: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_5:
    // 0x8080018C: lw          $t7, 0x54($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X54);
    // 0x80800190: b           L_808001A0
    // 0x80800194: swc1        $f0, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f0.u32l;
        goto L_808001A0;
    // 0x80800194: swc1        $f0, 0x40($t7)
    MEM_W(0X40, ctx->r15) = ctx->f0.u32l;
L_80800198:
    // 0x80800198: jal         0x80099B94
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B94(rdram, ctx);
        goto after_6;
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_808001A0:
    // 0x808001A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808001A4:
    // 0x808001A4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001AC: jr          $ra
    // 0x808001B0: nop

    return;
    // 0x808001B0: nop

;}
RECOMP_FUNC void bsdronebubbled_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808001B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001BC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x808001C0: lw          $t7, 0x54($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X54);
    // 0x808001C4: lwc1        $f4, 0x44($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X44);
    // 0x808001C8: jal         0x800D8FF8
    // 0x808001CC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_0;
    // 0x808001CC: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    after_0:
    // 0x808001D0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(97, 0X2E4) << 16);
    // 0x808001D4: lwc1        $f6, 0x2E4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(97, 0X2E4));
    // 0x808001D8: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x808001DC: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x808001E0: lw          $a0, 0x54($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X54);
    // 0x808001E4: addiu       $a0, $a0, 0x40
    ctx->r4 = ADD32(ctx->r4, 0X40);
    // 0x808001E8: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x808001EC: jal         0x800F1574
    // 0x808001F0: nop

    func_800F1574(rdram, ctx);
        goto after_1;
    // 0x808001F0: nop

    after_1:
    // 0x808001F4: jal         0x8008CABC
    // 0x808001F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008CABC(rdram, ctx);
        goto after_2;
    // 0x808001F8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x808001FC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(97, 0X2E8) << 16);
    // 0x80800200: lwc1        $f10, 0x2E8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(97, 0X2E8));
    // 0x80800204: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800208: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8080020C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800210: mul.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f14.fl, ctx->f10.fl);
    // 0x80800214: lw          $t0, 0x54($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X54);
    // 0x80800218: lwc1        $f12, 0x40($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X40);
    // 0x8080021C: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80800220: jal         0x800F1214
    // 0x80800224: nop

    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x80800224: nop

    after_3:
    // 0x80800228: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080022C: jal         0x8008B1BC
    // 0x80800230: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8008B1BC(rdram, ctx);
        goto after_4;
    // 0x80800230: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_4:
    // 0x80800234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800238: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080023C: jr          $ra
    // 0x80800240: nop

    return;
    // 0x80800240: nop

;}
RECOMP_FUNC void bsdronebubbled_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800244: jr          $ra
    // 0x80800248: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800248: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bsdronebubbled_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080024C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800250: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800254: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80800258: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x8080025C: jal         0x80084640
    // 0x80800260: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    _badata_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800260: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    after_0:
    // 0x80800264: lwc1        $f0, 0x24($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800268: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8080026C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80800270: add.s       $f0, $f0, $f0
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f0.fl = ctx->f0.fl + ctx->f0.fl;
    // 0x80800274: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800278: jal         0x8008CB3C
    // 0x8080027C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x8080027C: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80800280: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80800284: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800288: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8080028C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800290: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800294: jal         0x8009FFD8
    // 0x80800298: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800298: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x8080029C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808002A4: jr          $ra
    // 0x808002A8: nop

    return;
    // 0x808002A8: nop

;}
RECOMP_FUNC void bsdronebubbled_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002B4: jal         0x80099B94
    // 0x808002B8: nop

    func_80099B94(rdram, ctx);
        goto after_0;
    // 0x808002B8: nop

    after_0:
    // 0x808002BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002C4: jr          $ra
    // 0x808002C8: nop

    return;
    // 0x808002C8: nop

;}
RECOMP_FUNC void bsdronebubbled_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002CC: jr          $ra
    // 0x808002D0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x808002D0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x808002D4: nop

    // 0x808002D8: nop

    // 0x808002DC: nop

;}
RECOMP_FUNC void func_80800000_bsdronefalldie(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080000C: bne         $a1, $at, L_80800020
    if (ctx->r5 != ctx->r1) {
        // 0x80800010: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80800020;
    }
    // 0x80800010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800014: jal         0x80085200
    // 0x80800018: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    _basudie_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800018: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8080001C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_80800020:
    // 0x80800020: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800024: sw          $a1, 0x190($t6)
    MEM_W(0X190, ctx->r14) = ctx->r5;
    // 0x80800028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080002C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800030: jr          $ra
    // 0x80800034: nop

    return;
    // 0x80800034: nop

;}
RECOMP_FUNC void bsdronefalldie_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080003C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800040: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800044: jal         0x800961AC
    // 0x80800048: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_0;
    // 0x80800048: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8080004C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800050: jal         0x80092880
    // 0x80800054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80092880(rdram, ctx);
        goto after_1;
    // 0x80800054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800058: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080005C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800060: jr          $ra
    // 0x80800064: nop

    return;
    // 0x80800064: nop

;}
RECOMP_FUNC void bsdronefalldie_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800068: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8080006C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800070: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800074: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800078: jal         0x80085208
    // 0x8080007C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    _basudie_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080007C: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800080: jal         0x8008CABC
    // 0x80800084: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008CABC(rdram, ctx);
        goto after_1;
    // 0x80800084: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800088: addiu       $t6, $sp, 0x38
    ctx->r14 = ADD32(ctx->r29, 0X38);
    // 0x8080008C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800090: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800094: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800098: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8080009C: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x808000A0: jal         0x80084670
    // 0x808000A4: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    _badata_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x808000A4: addiu       $a3, $sp, 0x34
    ctx->r7 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x808000A8: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808000AC: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x808000B0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x808000B4: nop

    // 0x808000B8: bc1f        L_80800118
    if (!c1cs) {
        // 0x808000BC: nop
    
            goto L_80800118;
    }
    // 0x808000BC: nop

    // 0x808000C0: jal         0x8008AF24
    // 0x808000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_3;
    // 0x808000C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808000C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000CC: jal         0x8008AED4
    // 0x808000D0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8008AED4(rdram, ctx);
        goto after_4;
    // 0x808000D0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x808000D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000D8: jal         0x8008B1BC
    // 0x808000DC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x808000DC: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_5:
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: jal         0x8008B24C
    // 0x808000E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8008B24C(rdram, ctx);
        goto after_6;
    // 0x808000E8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x808000EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F0: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x808000F4: jal         0x8008B1D4
    // 0x808000F8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    func_8008B1D4(rdram, ctx);
        goto after_7;
    // 0x808000F8: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_7:
    // 0x808000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800100: jal         0x8008B134
    // 0x80800104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x80800104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800108: jal         0x8008B064
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800110: b           L_80800160
    // 0x80800114: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
        goto L_80800160;
    // 0x80800114: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
L_80800118:
    // 0x80800118: jal         0x8008AF24
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_10;
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800124: jal         0x8008AED4
    // 0x80800128: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8008AED4(rdram, ctx);
        goto after_11;
    // 0x80800128: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_11:
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800130: jal         0x8008B1BC
    // 0x80800134: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_8008B1BC(rdram, ctx);
        goto after_12;
    // 0x80800134: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_12:
    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080013C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80800140: jal         0x8008B1D4
    // 0x80800144: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    func_8008B1D4(rdram, ctx);
        goto after_13;
    // 0x80800144: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    after_13:
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080014C: jal         0x8008B134
    // 0x80800150: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8008B134(rdram, ctx);
        goto after_14;
    // 0x80800150: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_14:
    // 0x80800154: jal         0x8008B064
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_15;
    // 0x80800158: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x8080015C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
L_80800160:
    // 0x80800160: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800164: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800168: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8080016C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800170: jal         0x8009FFD8
    // 0x80800174: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_16;
    // 0x80800174: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_16:
    // 0x80800178: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080017C: jal         0x800961AC
    // 0x80800180: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_800961AC(rdram, ctx);
        goto after_17;
    // 0x80800180: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_17:
    // 0x80800184: jal         0x800A0180
    // 0x80800188: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800A0180(rdram, ctx);
        goto after_18;
    // 0x80800188: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x8080018C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800190: jal         0x800A4DFC
    // 0x80800194: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_800A4DFC(rdram, ctx);
        goto after_19;
    // 0x80800194: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_19:
    // 0x80800198: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080019C: jal         0x80098B4C
    // 0x808001A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80098B4C(rdram, ctx);
        goto after_20;
    // 0x808001A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_20:
    // 0x808001A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808001A8: jal         0x80092880
    // 0x808001AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80092880(rdram, ctx);
        goto after_21;
    // 0x808001AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x808001B0: sw          $zero, 0x190($s1)
    MEM_W(0X190, ctx->r17) = 0;
    // 0x808001B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808001B8: jal         0x80000000
    // 0x808001BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800000_bsdronefalldie(rdram, ctx);
        goto after_22;
    // 0x808001BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_22:
    // 0x808001C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808001C4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808001C8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808001CC: jr          $ra
    // 0x808001D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x808001D0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void bsdronefalldie_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001DC: jal         0x8009E6EC
    // 0x808001E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808001E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001E4: addiu       $at, $zero, 0x91
    ctx->r1 = ADD32(0, 0X91);
    // 0x808001E8: beql        $v0, $at, L_808001FC
    if (ctx->r2 == ctx->r1) {
        // 0x808001EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808001FC;
    }
    goto skip_0;
    // 0x808001EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808001F0: jal         0x80099AA8
    // 0x808001F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099AA8(rdram, ctx);
        goto after_1;
    // 0x808001F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808001F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001FC:
    // 0x808001FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800200: jr          $ra
    // 0x80800204: nop

    return;
    // 0x80800204: nop

;}
RECOMP_FUNC void bsdronefalldie_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800208: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080020C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800210: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800214: lw          $v0, 0x190($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X190);
    // 0x80800218: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080021C: beq         $v0, $at, L_80800234
    if (ctx->r2 == ctx->r1) {
        // 0x80800220: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800234;
    }
    // 0x80800220: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800224: beql        $v0, $at, L_80800258
    if (ctx->r2 == ctx->r1) {
        // 0x80800228: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800258;
    }
    goto skip_0;
    // 0x80800228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8080022C: b           L_80800258
    // 0x80800230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800258;
    // 0x80800230: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800234:
    // 0x80800234: jal         0x800846C0
    // 0x80800238: nop

    _badata_entrypoint_16(rdram, ctx);
        goto after_0;
    // 0x80800238: nop

    after_0:
    // 0x8080023C: jal         0x800FCCD4
    // 0x80800240: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800FCCD4(rdram, ctx);
        goto after_1;
    // 0x80800240: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800244: bne         $v0, $zero, L_80800254
    if (ctx->r2 != 0) {
        // 0x80800248: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800254;
    }
    // 0x80800248: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080024C: jal         0x80000000
    // 0x80800250: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800000_bsdronefalldie(rdram, ctx);
        goto after_2;
    // 0x80800250: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
L_80800254:
    // 0x80800254: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800258:
    // 0x80800258: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080025C: jr          $ra
    // 0x80800260: nop

    return;
    // 0x80800260: nop

    // 0x80800264: nop

    // 0x80800268: nop

    // 0x8080026C: nop

;}
RECOMP_FUNC void bsdronefired_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x800845D0
    // 0x8080000C: nop

    _babounce_entrypoint_3(rdram, ctx);
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
RECOMP_FUNC void bsdronefired_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800020: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800024: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800028: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080002C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800030: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80800034: jal         0x80084678
    // 0x80800038: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    _badata_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x80800038: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x8080003C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800040: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80800044: jal         0x8008CB3C
    // 0x80800048: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80800048: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x8080004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800050: jal         0x800845D8
    // 0x80800054: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x80800054: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80800058: jal         0x8009C990
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_3;
    // 0x8080005C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800060: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80800064: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080006C: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80800070: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80800074: jal         0x8009C914
    // 0x80800078: nop

    func_8009C914(rdram, ctx);
        goto after_4;
    // 0x80800078: nop

    after_4:
    // 0x8080007C: jal         0x8009C974
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_5;
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800084: jal         0x800A3274
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A3274(rdram, ctx);
        goto after_6;
    // 0x80800088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080008C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800090: beq         $v0, $at, L_808000BC
    if (ctx->r2 == ctx->r1) {
        // 0x80800094: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000BC;
    }
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800098: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8080009C: beq         $v0, $at, L_808000BC
    if (ctx->r2 == ctx->r1) {
        // 0x808000A0: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_808000BC;
    }
    // 0x808000A0: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x808000A4: beq         $v0, $at, L_808000C4
    if (ctx->r2 == ctx->r1) {
        // 0x808000A8: addiu       $at, $zero, 0xD
        ctx->r1 = ADD32(0, 0XD);
            goto L_808000C4;
    }
    // 0x808000A8: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x808000AC: beq         $v0, $at, L_808000CC
    if (ctx->r2 == ctx->r1) {
        // 0x808000B0: addiu       $a1, $zero, 0x5A3
        ctx->r5 = ADD32(0, 0X5A3);
            goto L_808000CC;
    }
    // 0x808000B0: addiu       $a1, $zero, 0x5A3
    ctx->r5 = ADD32(0, 0X5A3);
    // 0x808000B4: b           L_808000FC
    // 0x808000B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000FC;
    // 0x808000B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000BC:
    // 0x808000BC: b           L_808000CC
    // 0x808000C0: addiu       $a1, $zero, 0x420
    ctx->r5 = ADD32(0, 0X420);
        goto L_808000CC;
    // 0x808000C0: addiu       $a1, $zero, 0x420
    ctx->r5 = ADD32(0, 0X420);
L_808000C4:
    // 0x808000C4: b           L_808000CC
    // 0x808000C8: addiu       $a1, $zero, 0x598
    ctx->r5 = ADD32(0, 0X598);
        goto L_808000CC;
    // 0x808000C8: addiu       $a1, $zero, 0x598
    ctx->r5 = ADD32(0, 0X598);
L_808000CC:
    // 0x808000CC: jal         0x800846D0
    // 0x808000D0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    _badata_entrypoint_18(rdram, ctx);
        goto after_7;
    // 0x808000D0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_7:
    // 0x808000D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808000D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808000DC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000E4: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x808000E8: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    // 0x808000EC: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x808000F0: jal         0x8009DF18
    // 0x808000F4: nop

    func_8009DF18(rdram, ctx);
        goto after_8;
    // 0x808000F4: nop

    after_8:
    // 0x808000F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000FC:
    // 0x808000FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800100: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800104: jr          $ra
    // 0x80800108: nop

    return;
    // 0x80800108: nop

;}
RECOMP_FUNC void bsdronefired_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080010C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800114: jal         0x80099AA8
    // 0x80800118: nop

    func_80099AA8(rdram, ctx);
        goto after_0;
    // 0x80800118: nop

    after_0:
    // 0x8080011C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800124: jr          $ra
    // 0x80800128: nop

    return;
    // 0x80800128: nop

;}
RECOMP_FUNC void bsdronefired_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080012C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800130: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800134: jal         0x80084608
    // 0x80800138: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_10(rdram, ctx);
        goto after_0;
    // 0x80800138: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080013C: beql        $v0, $zero, L_8080015C
    if (ctx->r2 == 0) {
        // 0x80800140: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080015C;
    }
    goto skip_0;
    // 0x80800140: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800144: jal         0x80084700
    // 0x80800148: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _badata_entrypoint_24(rdram, ctx);
        goto after_1;
    // 0x80800148: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080014C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800150: jal         0x8009E5C8
    // 0x80800154: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800154: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x80800158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080015C:
    // 0x8080015C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800160: jr          $ra
    // 0x80800164: nop

    return;
    // 0x80800164: nop

    // 0x80800168: nop

    // 0x8080016C: nop

;}
RECOMP_FUNC void func_80800000_bsdronegoto(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: lw          $v0, 0x190($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X190);
    // 0x8080000C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800010: beq         $v0, $at, L_80800028
    if (ctx->r2 == ctx->r1) {
        // 0x80800014: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800028;
    }
    // 0x80800014: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800018: beql        $v0, $at, L_80800044
    if (ctx->r2 == ctx->r1) {
        // 0x8080001C: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_80800044;
    }
    goto skip_0;
    // 0x8080001C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    skip_0:
    // 0x80800020: b           L_80800058
    // 0x80800024: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
        goto L_80800058;
    // 0x80800024: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_80800028:
    // 0x80800028: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080002C: jal         0x80000148
    // 0x80800030: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800148_bsdronegoto(rdram, ctx);
        goto after_0;
    // 0x80800030: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800034: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800038: b           L_80800054
    // 0x8080003C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
        goto L_80800054;
    // 0x8080003C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800040: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
L_80800044:
    // 0x80800044: jal         0x8000032C
    // 0x80800048: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_8080032C_bsdronegoto(rdram, ctx);
        goto after_1;
    // 0x80800048: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_1:
    // 0x8080004C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800050: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
L_80800054:
    // 0x80800054: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
L_80800058:
    // 0x80800058: beq         $a1, $at, L_80800074
    if (ctx->r5 == ctx->r1) {
        // 0x8080005C: sw          $a1, 0x190($a0)
        MEM_W(0X190, ctx->r4) = ctx->r5;
            goto L_80800074;
    }
    // 0x8080005C: sw          $a1, 0x190($a0)
    MEM_W(0X190, ctx->r4) = ctx->r5;
    // 0x80800060: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800064: beq         $a1, $at, L_80800084
    if (ctx->r5 == ctx->r1) {
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
    // 0x80800074: jal         0x800000C0
    // 0x80800078: nop

    func_808000C0_bsdronegoto(rdram, ctx);
        goto after_2;
    // 0x80800078: nop

    after_2:
    // 0x8080007C: b           L_80800090
    // 0x80800080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800090;
    // 0x80800080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800084:
    // 0x80800084: jal         0x80000150
    // 0x80800088: nop

    func_80800150_bsdronegoto(rdram, ctx);
        goto after_3;
    // 0x80800088: nop

    after_3:
    // 0x8080008C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800090:
    // 0x80800090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800094: jr          $ra
    // 0x80800098: nop

    return;
    // 0x80800098: nop

;}
RECOMP_FUNC void func_8080009C_bsdronegoto(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080009C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000A4: jal         0x800A3274
    // 0x808000A8: nop

    func_800A3274(rdram, ctx);
        goto after_0;
    // 0x808000A8: nop

    after_0:
    // 0x808000AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000B0: xori        $t6, $v0, 0x12
    ctx->r14 = ctx->r2 ^ 0X12;
    // 0x808000B4: sltu        $v0, $zero, $t6
    ctx->r2 = 0 < ctx->r14 ? 1 : 0;
    // 0x808000B8: jr          $ra
    // 0x808000BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x808000BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_808000C0_bsdronegoto(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C8: jal         0x8009B7C0
    // 0x808000CC: nop

    func_8009B7C0(rdram, ctx);
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
RECOMP_FUNC void func_808000E0_bsdronegoto(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000EC: jal         0x8009B7C0
    // 0x808000F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009B7C0(rdram, ctx);
        goto after_0;
    // 0x808000F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000F4: jal         0x8000009C
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080009C_bsdronegoto(rdram, ctx);
        goto after_1;
    // 0x808000F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808000FC: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
    // 0x80800100: beq         $v1, $zero, L_80800114
    if (ctx->r3 == 0) {
        // 0x80800104: nop
    
            goto L_80800114;
    }
    // 0x80800104: nop

    // 0x80800108: jal         0x8008E35C
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_2;
    // 0x8080010C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800110: sltu        $v1, $zero, $v0
    ctx->r3 = 0 < ctx->r2 ? 1 : 0;
L_80800114:
    // 0x80800114: bnel        $v1, $zero, L_8080012C
    if (ctx->r3 != 0) {
        // 0x80800118: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080012C;
    }
    goto skip_0;
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080011C: jal         0x8008E078
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_3;
    // 0x80800120: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800124: beq         $v0, $zero, L_80800134
    if (ctx->r2 == 0) {
        // 0x80800128: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800134;
    }
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080012C:
    // 0x8080012C: jal         0x80000000
    // 0x80800130: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800000_bsdronegoto(rdram, ctx);
        goto after_4;
    // 0x80800130: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
L_80800134:
    // 0x80800134: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800138: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080013C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800140: jr          $ra
    // 0x80800144: nop

    return;
    // 0x80800144: nop

;}
RECOMP_FUNC void func_80800148_bsdronegoto(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800148: jr          $ra
    // 0x8080014C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x8080014C: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
