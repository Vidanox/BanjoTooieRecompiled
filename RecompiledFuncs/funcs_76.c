#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void gctransitionDll_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800954: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800958: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080095C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800960: jal         0x800000D8
    // 0x80800964: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_808000D8_gctransitionDll(rdram, ctx);
        goto after_0;
    // 0x80800964: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80800968: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080096C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800970: jr          $ra
    // 0x80800974: nop

    return;
    // 0x80800974: nop

;}
RECOMP_FUNC void gctransitionDll_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800978: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080097C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800980: jal         0x800EA05C
    // 0x80800984: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x80800984: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800988: jal         0x8000004C
    // 0x8080098C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8080004C_gctransitionDll(rdram, ctx);
        goto after_1;
    // 0x8080098C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800990: jal         0x80000000
    // 0x80800994: lbu         $a0, 0x3($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X3);
    func_80800000_gctransitionDll(rdram, ctx);
        goto after_2;
    // 0x80800994: lbu         $a0, 0x3($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X3);
    after_2:
    // 0x80800998: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080099C: lbu         $a1, 0x1($v0)
    ctx->r5 = MEM_BU(ctx->r2, 0X1);
    // 0x808009A0: jal         0x800000D8
    // 0x808009A4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_808000D8_gctransitionDll(rdram, ctx);
        goto after_3;
    // 0x808009A4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_3:
    // 0x808009A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808009B0: jr          $ra
    // 0x808009B4: nop

    return;
    // 0x808009B4: nop

;}
RECOMP_FUNC void gctransitionDll_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009B8: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x808009BC: addu        $t6, $t6, $a1
    ctx->r14 = ADD32(ctx->r14, ctx->r5);
    // 0x808009C0: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(686, 0XEA4) << 16);
    // 0x808009C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009C8: addiu       $t7, $t7, 0xEA4
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(686, 0XEA4));
    // 0x808009CC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808009D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009D4: addu        $a2, $t6, $t7
    ctx->r6 = ADD32(ctx->r14, ctx->r15);
    // 0x808009D8: jal         0x800000D8
    // 0x808009DC: lbu         $a1, 0x1($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X1);
    func_808000D8_gctransitionDll(rdram, ctx);
        goto after_0;
    // 0x808009DC: lbu         $a1, 0x1($a2)
    ctx->r5 = MEM_BU(ctx->r6, 0X1);
    after_0:
    // 0x808009E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808009E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808009E8: jr          $ra
    // 0x808009EC: nop

    return;
    // 0x808009EC: nop

;}
RECOMP_FUNC void gctransitionDll_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808009FC: sb          $zero, 0x8($a0)
    MEM_B(0X8, ctx->r4) = 0;
    // 0x80800A00: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80800A04: sw          $a1, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r5;
    // 0x80800A08: sb          $zero, 0x1C($a0)
    MEM_B(0X1C, ctx->r4) = 0;
    // 0x80800A0C: swc1        $f4, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->f4.u32l;
    // 0x80800A10: jal         0x800E6A00
    // 0x80800A14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800E6A00(rdram, ctx);
        goto after_0;
    // 0x80800A14: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A18: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800A1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800A20: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800A24: jal         0x800000D8
    // 0x80800A28: sb          $v0, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = ctx->r2;
    func_808000D8_gctransitionDll(rdram, ctx);
        goto after_1;
    // 0x80800A28: sb          $v0, 0x1D($a0)
    MEM_B(0X1D, ctx->r4) = ctx->r2;
    after_1:
    // 0x80800A2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A30: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A34: jr          $ra
    // 0x80800A38: nop

    return;
    // 0x80800A38: nop

;}
RECOMP_FUNC void gctransitionDll_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A3C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800A40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A44: lbu         $t6, 0x1D($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1D);
    // 0x80800A48: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80800A4C: beq         $t6, $zero, L_80800A68
    if (ctx->r14 == 0) {
        // 0x80800A50: nop
    
            goto L_80800A68;
    }
    // 0x80800A50: nop

    // 0x80800A54: jal         0x800885F8
    // 0x80800A58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    _glintrosyncDll_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x80800A58: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A5C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80800A60: b           L_80800A78
    // 0x80800A64: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_80800A78;
    // 0x80800A64: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80800A68:
    // 0x80800A68: jal         0x800D8FF8
    // 0x80800A6C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x80800A6C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_1:
    // 0x80800A70: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80800A74: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80800A78:
    // 0x80800A78: lbu         $t7, 0x8($a3)
    ctx->r15 = MEM_BU(ctx->r7, 0X8);
    // 0x80800A7C: beql        $t7, $zero, L_80800C74
    if (ctx->r15 == 0) {
        // 0x80800A80: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800C74;
    }
    goto skip_0;
    // 0x80800A80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800A84: lw          $a0, 0x2C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X2C);
    // 0x80800A88: beql        $a0, $zero, L_80800B70
    if (ctx->r4 == 0) {
        // 0x80800A8C: lwc1        $f16, 0x28($a3)
        ctx->f16.u32l = MEM_W(ctx->r7, 0X28);
            goto L_80800B70;
    }
    goto skip_1;
    // 0x80800A8C: lwc1        $f16, 0x28($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X28);
    skip_1:
    // 0x80800A90: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80800A94: jal         0x8008ADE4
    // 0x80800A98: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    func_8008ADE4(rdram, ctx);
        goto after_2;
    // 0x80800A98: swc1        $f2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f2.u32l;
    after_2:
    // 0x80800A9C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80800AA0: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80800AA4: lwc1        $f2, 0x1C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800AA8: lbu         $t8, 0x1C($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X1C);
    // 0x80800AAC: bnel        $t8, $at, L_80800B30
    if (ctx->r24 != ctx->r1) {
        // 0x80800AB0: lw          $v0, 0x30($a3)
        ctx->r2 = MEM_W(ctx->r7, 0X30);
            goto L_80800B30;
    }
    goto skip_2;
    // 0x80800AB0: lw          $v0, 0x30($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X30);
    skip_2:
    // 0x80800AB4: lw          $t9, 0x30($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X30);
    // 0x80800AB8: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x80800ABC: beq         $at, $zero, L_80800B1C
    if (ctx->r1 == 0) {
        // 0x80800AC0: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_80800B1C;
    }
    // 0x80800AC0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80800AC4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(686, 0XC94) << 16);
    // 0x80800AC8: addu        $at, $at, $t9
    gpr jr_addend_80800AD0 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80800ACC: lw          $t9, 0xC94($at)
    ctx->r25 = ADD32(ctx->r1, (int16_t)RELOC_LO16(686, 0XC94));
    // 0x80800AD0: jr          $t9
    // 0x80800AD4: nop

    switch (jr_addend_80800AD0 >> 2) {
        case 0: goto L_80800B78; break;
        case 1: goto L_80800AD8; break;
        case 2: goto L_80800AF4; break;
        case 3: goto L_80800B78; break;
        case 4: goto L_80800B08; break;
        default: switch_error(__func__, 0x80800AD0, 0x80800C94);
    }
    // 0x80800AD4: nop

L_80800AD8:
    // 0x80800AD8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80800ADC: jal         0x80090684
    // 0x80800AE0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_80090684(rdram, ctx);
        goto after_3;
    // 0x80800AE0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_3:
    // 0x80800AE4: jal         0x800EA334
    // 0x80800AE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800EA334(rdram, ctx);
        goto after_4;
    // 0x80800AE8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80800AEC: b           L_80800B78
    // 0x80800AF0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
        goto L_80800B78;
    // 0x80800AF0: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_80800AF4:
    // 0x80800AF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80800AF8: jal         0x800EA34C
    // 0x80800AFC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_800EA34C(rdram, ctx);
        goto after_5;
    // 0x80800AFC: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_5:
    // 0x80800B00: b           L_80800B78
    // 0x80800B04: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
        goto L_80800B78;
    // 0x80800B04: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_80800B08:
    // 0x80800B08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80800B0C: jal         0x8002FBB0
    // 0x80800B10: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    osViBlack_recomp(rdram, ctx);
        goto after_6;
    // 0x80800B10: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_6:
    // 0x80800B14: b           L_80800B78
    // 0x80800B18: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
        goto L_80800B78;
    // 0x80800B18: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_80800B1C:
    // 0x80800B1C: lwc1        $f4, 0x28($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X28);
    // 0x80800B20: add.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f2.fl;
    // 0x80800B24: b           L_80800B78
    // 0x80800B28: swc1        $f6, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f6.u32l;
        goto L_80800B78;
    // 0x80800B28: swc1        $f6, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f6.u32l;
    // 0x80800B2C: lw          $v0, 0x30($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X30);
L_80800B30:
    // 0x80800B30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800B34: beql        $v0, $zero, L_80800B7C
    if (ctx->r2 == 0) {
        // 0x80800B38: lwc1        $f0, 0xC($a3)
        ctx->f0.u32l = MEM_W(ctx->r7, 0XC);
            goto L_80800B7C;
    }
    goto skip_3;
    // 0x80800B38: lwc1        $f0, 0xC($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XC);
    skip_3:
    // 0x80800B3C: beq         $v0, $at, L_80800B78
    if (ctx->r2 == ctx->r1) {
        // 0x80800B40: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800B78;
    }
    // 0x80800B40: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800B44: beq         $v0, $at, L_80800B5C
    if (ctx->r2 == ctx->r1) {
        // 0x80800B48: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80800B5C;
    }
    // 0x80800B48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80800B4C: lwc1        $f8, 0x28($a3)
    ctx->f8.u32l = MEM_W(ctx->r7, 0X28);
    // 0x80800B50: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x80800B54: b           L_80800B78
    // 0x80800B58: swc1        $f10, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f10.u32l;
        goto L_80800B78;
    // 0x80800B58: swc1        $f10, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f10.u32l;
L_80800B5C:
    // 0x80800B5C: jal         0x800EA34C
    // 0x80800B60: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_800EA34C(rdram, ctx);
        goto after_7;
    // 0x80800B60: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_7:
    // 0x80800B64: b           L_80800B78
    // 0x80800B68: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
        goto L_80800B78;
    // 0x80800B68: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80800B6C: lwc1        $f16, 0x28($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X28);
L_80800B70:
    // 0x80800B70: add.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f0.fl;
    // 0x80800B74: swc1        $f18, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f18.u32l;
L_80800B78:
    // 0x80800B78: lwc1        $f0, 0xC($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XC);
L_80800B7C:
    // 0x80800B7C: lwc1        $f4, 0x28($a3)
    ctx->f4.u32l = MEM_W(ctx->r7, 0X28);
    // 0x80800B80: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800B84: nop

    // 0x80800B88: bc1tl       L_80800BB4
    if (c1cs) {
        // 0x80800B8C: lbu         $v0, 0x1C($a3)
        ctx->r2 = MEM_BU(ctx->r7, 0X1C);
            goto L_80800BB4;
    }
    goto skip_4;
    // 0x80800B8C: lbu         $v0, 0x1C($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X1C);
    skip_4:
    // 0x80800B90: lw          $a0, 0x2C($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X2C);
    // 0x80800B94: beql        $a0, $zero, L_80800C68
    if (ctx->r4 == 0) {
        // 0x80800B98: lw          $t1, 0x30($a3)
        ctx->r9 = MEM_W(ctx->r7, 0X30);
            goto L_80800C68;
    }
    goto skip_5;
    // 0x80800B98: lw          $t1, 0x30($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X30);
    skip_5:
    // 0x80800B9C: jal         0x8008B324
    // 0x80800BA0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_8008B324(rdram, ctx);
        goto after_8;
    // 0x80800BA0: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_8:
    // 0x80800BA4: beq         $v0, $zero, L_80800C64
    if (ctx->r2 == 0) {
        // 0x80800BA8: lw          $a3, 0x20($sp)
        ctx->r7 = MEM_W(ctx->r29, 0X20);
            goto L_80800C64;
    }
    // 0x80800BA8: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80800BAC: lwc1        $f0, 0xC($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0XC);
    // 0x80800BB0: lbu         $v0, 0x1C($a3)
    ctx->r2 = MEM_BU(ctx->r7, 0X1C);
L_80800BB4:
    // 0x80800BB4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80800BB8: swc1        $f0, 0x28($a3)
    MEM_W(0X28, ctx->r7) = ctx->f0.u32l;
    // 0x80800BBC: beq         $v0, $at, L_80800BCC
    if (ctx->r2 == ctx->r1) {
        // 0x80800BC0: or          $a0, $a3, $zero
        ctx->r4 = ctx->r7 | 0;
            goto L_80800BCC;
    }
    // 0x80800BC0: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x80800BC4: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80800BC8: bne         $v0, $at, L_80800C38
    if (ctx->r2 != ctx->r1) {
        // 0x80800BCC: lui         $at, 0x42B4
        ctx->r1 = S32(0X42B4 << 16);
            goto L_80800C38;
    }
L_80800BCC:
    // 0x80800BCC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80800BD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800BD4: lwc1        $f6, 0x24($a3)
    ctx->f6.u32l = MEM_W(ctx->r7, 0X24);
    // 0x80800BD8: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x80800BDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800BE0: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80800BE4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80800BE8: swc1        $f10, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f10.u32l;
    // 0x80800BEC: lwc1        $f0, 0x24($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X24);
    // 0x80800BF0: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x80800BF4: nop

    // 0x80800BF8: bc1fl       L_80800C18
    if (!c1cs) {
        // 0x80800BFC: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_80800C18;
    }
    goto skip_6;
    // 0x80800BFC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    skip_6:
    // 0x80800C00: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800C04: nop

    // 0x80800C08: add.s       $f18, $f0, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f2.fl;
    // 0x80800C0C: swc1        $f18, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f18.u32l;
    // 0x80800C10: lwc1        $f0, 0x24($a3)
    ctx->f0.u32l = MEM_W(ctx->r7, 0X24);
    // 0x80800C14: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
L_80800C18:
    // 0x80800C18: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800C1C: nop

    // 0x80800C20: c.lt.s      $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f2.fl < ctx->f0.fl;
    // 0x80800C24: nop

    // 0x80800C28: bc1fl       L_80800C3C
    if (!c1cs) {
        // 0x80800C2C: lbu         $a1, 0xA($a3)
        ctx->r5 = MEM_BU(ctx->r7, 0XA);
            goto L_80800C3C;
    }
    goto skip_7;
    // 0x80800C2C: lbu         $a1, 0xA($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0XA);
    skip_7:
    // 0x80800C30: sub.s       $f4, $f0, $f2
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f4.fl = ctx->f0.fl - ctx->f2.fl;
    // 0x80800C34: swc1        $f4, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->f4.u32l;
L_80800C38:
    // 0x80800C38: lbu         $a1, 0xA($a3)
    ctx->r5 = MEM_BU(ctx->r7, 0XA);
L_80800C3C:
    // 0x80800C3C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    // 0x80800C40: jal         0x800000D8
    // 0x80800C44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_808000D8_gctransitionDll(rdram, ctx);
        goto after_9;
    // 0x80800C44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80800C48: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80800C4C: lw          $t0, 0x2C($a3)
    ctx->r8 = MEM_W(ctx->r7, 0X2C);
    // 0x80800C50: beql        $t0, $zero, L_80800C68
    if (ctx->r8 == 0) {
        // 0x80800C54: lw          $t1, 0x30($a3)
        ctx->r9 = MEM_W(ctx->r7, 0X30);
            goto L_80800C68;
    }
    goto skip_8;
    // 0x80800C54: lw          $t1, 0x30($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X30);
    skip_8:
    // 0x80800C58: jal         0x800EA170
    // 0x80800C5C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    func_800EA170(rdram, ctx);
        goto after_10;
    // 0x80800C5C: sw          $a3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r7;
    after_10:
    // 0x80800C60: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
L_80800C64:
    // 0x80800C64: lw          $t1, 0x30($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X30);
L_80800C68:
    // 0x80800C68: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80800C6C: sw          $t2, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r10;
    // 0x80800C70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800C74:
    // 0x80800C74: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800C78: jr          $ra
    // 0x80800C7C: nop

    return;
    // 0x80800C7C: nop

;}
RECOMP_FUNC void gcwater_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80800010: jal         0x800BEB28
    // 0x80800014: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800BEB28(rdram, ctx);
        goto after_0;
    // 0x80800014: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80800018: beq         $v0, $zero, L_8080003C
    if (ctx->r2 == 0) {
        // 0x8080001C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8080003C;
    }
    // 0x8080001C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800020: jal         0x800B2720
    // 0x80800024: nop

    func_800B2720(rdram, ctx);
        goto after_1;
    // 0x80800024: nop

    after_1:
    // 0x80800028: beq         $v0, $zero, L_8080003C
    if (ctx->r2 == 0) {
        // 0x8080002C: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8080003C;
    }
    // 0x8080002C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800030: jal         0x800AAD80
    // 0x80800034: nop

    func_800AAD80(rdram, ctx);
        goto after_2;
    // 0x80800034: nop

    after_2:
    // 0x80800038: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8080003C:
    // 0x8080003C: bne         $s0, $zero, L_80800070
    if (ctx->r16 != 0) {
        // 0x80800040: nop
    
            goto L_80800070;
    }
    // 0x80800040: nop

    // 0x80800044: jal         0x800BEB28
    // 0x80800048: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800BEB28(rdram, ctx);
        goto after_3;
    // 0x80800048: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8080004C: beq         $v0, $zero, L_80800070
    if (ctx->r2 == 0) {
        // 0x80800050: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800070;
    }
    // 0x80800050: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800054: jal         0x800B2720
    // 0x80800058: nop

    func_800B2720(rdram, ctx);
        goto after_4;
    // 0x80800058: nop

    after_4:
    // 0x8080005C: beq         $v0, $zero, L_80800070
    if (ctx->r2 == 0) {
        // 0x80800060: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800070;
    }
    // 0x80800060: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800064: jal         0x800AAD80
    // 0x80800068: nop

    func_800AAD80(rdram, ctx);
        goto after_5;
    // 0x80800068: nop

    after_5:
    // 0x8080006C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80800070:
    // 0x80800070: beq         $s0, $zero, L_80800080
    if (ctx->r16 == 0) {
        // 0x80800074: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80800080;
    }
    // 0x80800074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800078: b           L_80800080
    // 0x8080007C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_80800080;
    // 0x8080007C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80800080:
    // 0x80800080: jal         0x800DA3B8
    // 0x80800084: addiu       $a0, $zero, 0x6B5
    ctx->r4 = ADD32(0, 0X6B5);
    func_800DA3B8(rdram, ctx);
        goto after_6;
    // 0x80800084: addiu       $a0, $zero, 0x6B5
    ctx->r4 = ADD32(0, 0X6B5);
    after_6:
    // 0x80800088: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080008C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800090: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800094: jr          $ra
    // 0x80800098: nop

    return;
    // 0x80800098: nop

    // 0x8080009C: nop

;}
RECOMP_FUNC void func_80800000_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8080000C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80800010: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800014: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800018: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8080001C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800020: lwc1        $f6, 0x14C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X14C);
    // 0x80800024: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80800028: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x8080002C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80800030: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80800034: addiu       $s3, $zero, 0x5
    ctx->r19 = ADD32(0, 0X5);
    // 0x80800038: bc1f        L_80800060
    if (!c1cs) {
        // 0x8080003C: nop
    
            goto L_80800060;
    }
    // 0x8080003C: nop

    // 0x80800040: jal         0x800FCCD4
    // 0x80800044: lbu         $a0, 0x144($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X144);
    func_800FCCD4(rdram, ctx);
        goto after_0;
    // 0x80800044: lbu         $a0, 0x144($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X144);
    after_0:
    // 0x80800048: beql        $v0, $zero, L_80800090
    if (ctx->r2 == 0) {
        // 0x8080004C: addiu       $s1, $zero, 0x1
        ctx->r17 = ADD32(0, 0X1);
            goto L_80800090;
    }
    goto skip_0;
    // 0x8080004C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    skip_0:
    // 0x80800050: jal         0x800FC74C
    // 0x80800054: lbu         $a0, 0x144($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X144);
    func_800FC74C(rdram, ctx);
        goto after_1;
    // 0x80800054: lbu         $a0, 0x144($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X144);
    after_1:
    // 0x80800058: b           L_80800090
    // 0x8080005C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
        goto L_80800090;
    // 0x8080005C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80800060:
    // 0x80800060: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    // 0x80800064: beql        $a0, $zero, L_80800084
    if (ctx->r4 == 0) {
        // 0x80800068: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80800084;
    }
    goto skip_1;
    // 0x80800068: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_1:
    // 0x8080006C: jal         0x800C2FDC
    // 0x80800070: nop

    func_800C2FDC(rdram, ctx);
        goto after_2;
    // 0x80800070: nop

    after_2:
    // 0x80800074: lbu         $t6, 0x178($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X178);
    // 0x80800078: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8080007C: sb          $t7, 0x178($s2)
    MEM_B(0X178, ctx->r18) = ctx->r15;
    // 0x80800080: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80800084:
    // 0x80800084: bne         $s1, $s3, L_80800060
    if (ctx->r17 != ctx->r19) {
        // 0x80800088: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80800060;
    }
    // 0x80800088: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8080008C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_80800090:
    // 0x80800090: sb          $zero, 0x144($s2)
    MEM_B(0X144, ctx->r18) = 0;
    // 0x80800094: addu        $s0, $s2, $s1
    ctx->r16 = ADD32(ctx->r18, ctx->r17);
    // 0x80800098: sb          $zero, 0x145($s0)
    MEM_B(0X145, ctx->r16) = 0;
    // 0x8080009C: sb          $zero, 0x146($s0)
    MEM_B(0X146, ctx->r16) = 0;
    // 0x808000A0: sb          $zero, 0x147($s0)
    MEM_B(0X147, ctx->r16) = 0;
    // 0x808000A4: sb          $zero, 0x144($s0)
    MEM_B(0X144, ctx->r16) = 0;
    // 0x808000A8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808000AC: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x808000B0: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x808000B4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808000B8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808000BC: jr          $ra
    // 0x808000C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808000C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_808000C4_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C4: lhu         $t6, 0x142($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X142);
    // 0x808000C8: beq         $t6, $zero, L_808000D4
    if (ctx->r14 == 0) {
        // 0x808000CC: nop
    
            goto L_808000D4;
    }
    // 0x808000CC: nop

    // 0x808000D0: sh          $zero, 0x142($a0)
    MEM_H(0X142, ctx->r4) = 0;
L_808000D4:
    // 0x808000D4: jr          $ra
    // 0x808000D8: nop

    return;
    // 0x808000D8: nop

;}
RECOMP_FUNC void func_808000DC_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000E4: lhu         $t6, 0x140($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X140);
    // 0x808000E8: beq         $t6, $zero, L_808000F4
    if (ctx->r14 == 0) {
        // 0x808000EC: nop
    
            goto L_808000F4;
    }
    // 0x808000EC: nop

    // 0x808000F0: sh          $zero, 0x140($a0)
    MEM_H(0X140, ctx->r4) = 0;
L_808000F4:
    // 0x808000F4: jal         0x800000C4
    // 0x808000F8: nop

    func_808000C4_gczoombox(rdram, ctx);
        goto after_0;
    // 0x808000F8: nop

    after_0:
    // 0x808000FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800100: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800104: jr          $ra
    // 0x80800108: nop

    return;
    // 0x80800108: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080010C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800110: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800114: beq         $a0, $zero, L_8080013C
    if (ctx->r4 == 0) {
        // 0x80800118: sw          $a0, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r4;
            goto L_8080013C;
    }
    // 0x80800118: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080011C: jal         0x800D52B0
    // 0x80800120: nop

    func_800D52B0(rdram, ctx);
        goto after_0;
    // 0x80800120: nop

    after_0:
    // 0x80800124: jal         0x80000000
    // 0x80800128: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_gczoombox(rdram, ctx);
        goto after_1;
    // 0x80800128: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080012C: jal         0x800000DC
    // 0x80800130: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808000DC_gczoombox(rdram, ctx);
        goto after_2;
    // 0x80800130: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800134: jal         0x8001B084
    // 0x80800138: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001B084(rdram, ctx);
        goto after_3;
    // 0x80800138: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
L_8080013C:
    // 0x8080013C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800140: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800144: jr          $ra
    // 0x80800148: nop

    return;
    // 0x80800148: nop

;}
RECOMP_FUNC void func_8080014C_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080014C: slt         $at, $a2, $a3
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r7) ? 1 : 0;
    // 0x80800150: beq         $at, $zero, L_808001CC
    if (ctx->r1 == 0) {
        // 0x80800154: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_808001CC;
    }
    // 0x80800154: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80800158: subu        $t2, $a3, $a2
    ctx->r10 = SUB32(ctx->r7, ctx->r6);
    // 0x8080015C: andi        $t6, $t2, 0x3
    ctx->r14 = ctx->r10 & 0X3;
    // 0x80800160: beq         $t6, $zero, L_80800190
    if (ctx->r14 == 0) {
        // 0x80800164: addu        $t1, $t6, $a2
        ctx->r9 = ADD32(ctx->r14, ctx->r6);
            goto L_80800190;
    }
    // 0x80800164: addu        $t1, $t6, $a2
    ctx->r9 = ADD32(ctx->r14, ctx->r6);
    // 0x80800168: addu        $t7, $a1, $v0
    ctx->r15 = ADD32(ctx->r5, ctx->r2);
    // 0x8080016C: subu        $v1, $t7, $a2
    ctx->r3 = SUB32(ctx->r15, ctx->r6);
    // 0x80800170: addu        $t0, $a0, $v0
    ctx->r8 = ADD32(ctx->r4, ctx->r2);
L_80800174:
    // 0x80800174: lbu         $t8, 0x0($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0X0);
    // 0x80800178: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8080017C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80800180: addiu       $t0, $t0, 0x1
    ctx->r8 = ADD32(ctx->r8, 0X1);
    // 0x80800184: bne         $t1, $v0, L_80800174
    if (ctx->r9 != ctx->r2) {
        // 0x80800188: sb          $t8, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r24;
            goto L_80800174;
    }
    // 0x80800188: sb          $t8, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r24;
    // 0x8080018C: beq         $v0, $a3, L_808001CC
    if (ctx->r2 == ctx->r7) {
        // 0x80800190: addu        $t9, $a1, $v0
        ctx->r25 = ADD32(ctx->r5, ctx->r2);
            goto L_808001CC;
    }
L_80800190:
    // 0x80800190: addu        $t9, $a1, $v0
    ctx->r25 = ADD32(ctx->r5, ctx->r2);
    // 0x80800194: subu        $v1, $t9, $a2
    ctx->r3 = SUB32(ctx->r25, ctx->r6);
    // 0x80800198: addu        $t0, $a0, $v0
    ctx->r8 = ADD32(ctx->r4, ctx->r2);
L_8080019C:
    // 0x8080019C: lbu         $t3, 0x0($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0X0);
    // 0x808001A0: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x808001A4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x808001A8: sb          $t3, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = ctx->r11;
    // 0x808001AC: lbu         $t4, 0x1($t0)
    ctx->r12 = MEM_BU(ctx->r8, 0X1);
    // 0x808001B0: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x808001B4: sb          $t4, -0x3($v1)
    MEM_B(-0X3, ctx->r3) = ctx->r12;
    // 0x808001B8: lbu         $t5, -0x2($t0)
    ctx->r13 = MEM_BU(ctx->r8, -0X2);
    // 0x808001BC: sb          $t5, -0x2($v1)
    MEM_B(-0X2, ctx->r3) = ctx->r13;
    // 0x808001C0: lbu         $t6, -0x1($t0)
    ctx->r14 = MEM_BU(ctx->r8, -0X1);
    // 0x808001C4: bne         $v0, $a3, L_8080019C
    if (ctx->r2 != ctx->r7) {
        // 0x808001C8: sb          $t6, -0x1($v1)
        MEM_B(-0X1, ctx->r3) = ctx->r14;
            goto L_8080019C;
    }
    // 0x808001C8: sb          $t6, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r14;
L_808001CC:
    // 0x808001CC: jr          $ra
    // 0x808001D0: nop

    return;
    // 0x808001D0: nop

;}
RECOMP_FUNC void func_808001D4_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001D4: blez        $a1, L_80800220
    if (SIGNED(ctx->r5) <= 0) {
        // 0x808001D8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80800220;
    }
    // 0x808001D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808001DC: andi        $a3, $a1, 0x3
    ctx->r7 = ctx->r5 & 0X3;
    // 0x808001E0: beq         $a3, $zero, L_80800200
    if (ctx->r7 == 0) {
        // 0x808001E4: or          $a2, $a3, $zero
        ctx->r6 = ctx->r7 | 0;
            goto L_80800200;
    }
    // 0x808001E4: or          $a2, $a3, $zero
    ctx->r6 = ctx->r7 | 0;
    // 0x808001E8: addu        $v1, $a0, $zero
    ctx->r3 = ADD32(ctx->r4, 0);
L_808001EC:
    // 0x808001EC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x808001F0: sb          $zero, 0x0($v1)
    MEM_B(0X0, ctx->r3) = 0;
    // 0x808001F4: bne         $a2, $v0, L_808001EC
    if (ctx->r6 != ctx->r2) {
        // 0x808001F8: addiu       $v1, $v1, 0x1
        ctx->r3 = ADD32(ctx->r3, 0X1);
            goto L_808001EC;
    }
    // 0x808001F8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x808001FC: beq         $v0, $a1, L_80800220
    if (ctx->r2 == ctx->r5) {
        // 0x80800200: addu        $v1, $a0, $v0
        ctx->r3 = ADD32(ctx->r4, ctx->r2);
            goto L_80800220;
    }
L_80800200:
    // 0x80800200: addu        $v1, $a0, $v0
    ctx->r3 = ADD32(ctx->r4, ctx->r2);
L_80800204:
    // 0x80800204: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80800208: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x8080020C: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x80800210: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80800214: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80800218: bne         $v0, $a1, L_80800204
    if (ctx->r2 != ctx->r5) {
        // 0x8080021C: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_80800204;
    }
    // 0x8080021C: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
L_80800220:
    // 0x80800220: jr          $ra
    // 0x80800224: nop

    return;
    // 0x80800224: nop

;}
RECOMP_FUNC void func_80800228_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800228: lw          $v0, 0x1E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1E4);
    // 0x8080022C: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x80800230: sll         $t6, $v0, 12
    ctx->r14 = S32(ctx->r2 << 12);
    // 0x80800234: srl         $v0, $t6, 31
    ctx->r2 = S32(U32(ctx->r14) >> 31);
    // 0x80800238: beq         $v0, $zero, L_80800248
    if (ctx->r2 == 0) {
        // 0x8080023C: nop
    
            goto L_80800248;
    }
    // 0x8080023C: nop

    // 0x80800240: b           L_80800248
    // 0x80800244: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
        goto L_80800248;
    // 0x80800244: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
L_80800248:
    // 0x80800248: lh          $t8, 0x1B0($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X1B0);
    // 0x8080024C: bgez        $v1, L_8080025C
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80800250: sra         $t9, $v1, 1
        ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
            goto L_8080025C;
    }
    // 0x80800250: sra         $t9, $v1, 1
    ctx->r25 = S32(SIGNED(ctx->r3) >> 1);
    // 0x80800254: addiu       $at, $v1, 0x1
    ctx->r1 = ADD32(ctx->r3, 0X1);
    // 0x80800258: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_8080025C:
    // 0x8080025C: subu        $t0, $t8, $t9
    ctx->r8 = SUB32(ctx->r24, ctx->r25);
    // 0x80800260: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80800264: addiu       $v1, $zero, 0xC
    ctx->r3 = ADD32(0, 0XC);
    // 0x80800268: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8080026C: beq         $v0, $zero, L_8080027C
    if (ctx->r2 == 0) {
        // 0x80800270: swc1        $f6, 0x1A4($a0)
        MEM_W(0X1A4, ctx->r4) = ctx->f6.u32l;
            goto L_8080027C;
    }
    // 0x80800270: swc1        $f6, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->f6.u32l;
    // 0x80800274: b           L_8080027C
    // 0x80800278: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
        goto L_8080027C;
    // 0x80800278: addiu       $v1, $zero, 0xF
    ctx->r3 = ADD32(0, 0XF);
L_8080027C:
    // 0x8080027C: mtc1        $v1, $f8
    ctx->f8.u32l = ctx->r3;
    // 0x80800280: lwc1        $f16, 0x1A4($a0)
    ctx->f16.u32l = MEM_W(ctx->r4, 0X1A4);
    // 0x80800284: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80800288: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8080028C: jr          $ra
    // 0x80800290: swc1        $f18, 0x1A8($a0)
    MEM_W(0X1A8, ctx->r4) = ctx->f18.u32l;
    return;
    // 0x80800290: swc1        $f18, 0x1A8($a0)
    MEM_W(0X1A8, ctx->r4) = ctx->f18.u32l;
;}
RECOMP_FUNC void func_80800294_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080029C: lw          $v0, 0x1E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1E4);
    // 0x808002A0: srl         $t6, $v0, 31
    ctx->r14 = S32(U32(ctx->r2) >> 31);
    // 0x808002A4: beq         $t6, $zero, L_808002CC
    if (ctx->r14 == 0) {
        // 0x808002A8: sll         $t8, $v0, 5
        ctx->r24 = S32(ctx->r2 << 5);
            goto L_808002CC;
    }
    // 0x808002A8: sll         $t8, $v0, 5
    ctx->r24 = S32(ctx->r2 << 5);
    // 0x808002AC: bltz        $t8, L_808002CC
    if (SIGNED(ctx->r24) < 0) {
        // 0x808002B0: nop
    
            goto L_808002CC;
    }
    // 0x808002B0: nop

    // 0x808002B4: lh          $t9, 0x1B0($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X1B0);
    // 0x808002B8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x808002BC: nop

    // 0x808002C0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x808002C4: b           L_808002D4
    // 0x808002C8: swc1        $f6, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->f6.u32l;
        goto L_808002D4;
    // 0x808002C8: swc1        $f6, 0x1A4($a0)
    MEM_W(0X1A4, ctx->r4) = ctx->f6.u32l;
L_808002CC:
    // 0x808002CC: jal         0x80000228
    // 0x808002D0: nop

    func_80800228_gczoombox(rdram, ctx);
        goto after_0;
    // 0x808002D0: nop

    after_0:
L_808002D4:
    // 0x808002D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002DC: jr          $ra
    // 0x808002E0: nop

    return;
    // 0x808002E0: nop

;}
RECOMP_FUNC void func_808002E4_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E4: lw          $v0, 0x1E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1E4);
    // 0x808002E8: sll         $t7, $v0, 5
    ctx->r15 = S32(ctx->r2 << 5);
    // 0x808002EC: bltz        $t7, L_808002FC
    if (SIGNED(ctx->r15) < 0) {
        // 0x808002F0: srl         $t8, $v0, 31
        ctx->r24 = S32(U32(ctx->r2) >> 31);
            goto L_808002FC;
    }
    // 0x808002F0: srl         $t8, $v0, 31
    ctx->r24 = S32(U32(ctx->r2) >> 31);
    // 0x808002F4: beq         $t8, $zero, L_8080033C
    if (ctx->r24 == 0) {
        // 0x808002F8: addiu       $t1, $zero, 0x4
        ctx->r9 = ADD32(0, 0X4);
            goto L_8080033C;
    }
    // 0x808002F8: addiu       $t1, $zero, 0x4
    ctx->r9 = ADD32(0, 0X4);
L_808002FC:
    // 0x808002FC: lbu         $t0, 0x1CC($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1CC);
    // 0x80800300: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80800304: sb          $t9, 0x171($a0)
    MEM_B(0X171, ctx->r4) = ctx->r25;
    // 0x80800308: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x8080030C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80800310: bgez        $t0, L_80800324
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80800314: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80800324;
    }
    // 0x80800314: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800318: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080031C: nop

    // 0x80800320: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80800324:
    // 0x80800324: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80800328: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8080032C: nop

    // 0x80800330: div.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80800334: b           L_80800340
    // 0x80800338: swc1        $f16, 0x1C4($a0)
    MEM_W(0X1C4, ctx->r4) = ctx->f16.u32l;
        goto L_80800340;
    // 0x80800338: swc1        $f16, 0x1C4($a0)
    MEM_W(0X1C4, ctx->r4) = ctx->f16.u32l;
L_8080033C:
    // 0x8080033C: sb          $t1, 0x171($a0)
    MEM_B(0X171, ctx->r4) = ctx->r9;
L_80800340:
    // 0x80800340: lbu         $t3, 0x1E5($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X1E5);
    // 0x80800344: lbu         $t2, 0x19C($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X19C);
    // 0x80800348: andi        $t4, $t3, 0xFF7F
    ctx->r12 = ctx->r11 & 0XFF7F;
    // 0x8080034C: sb          $t4, 0x1E5($a0)
    MEM_B(0X1E5, ctx->r4) = ctx->r12;
    // 0x80800350: jr          $ra
    // 0x80800354: sb          $t2, 0x19E($a0)
    MEM_B(0X19E, ctx->r4) = ctx->r10;
    return;
    // 0x80800354: sb          $t2, 0x19E($a0)
    MEM_B(0X19E, ctx->r4) = ctx->r10;
;}
RECOMP_FUNC void func_80800358_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800358: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8080035C: jr          $ra
    // 0x80800360: swc1        $f12, 0x1F0($a0)
    MEM_W(0X1F0, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x80800360: swc1        $f12, 0x1F0($a0)
    MEM_W(0X1F0, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80800364_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800364: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800368: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080036C: lwc1        $f4, 0x1EC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1EC);
    // 0x80800370: swc1        $f4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f4.u32l;
    // 0x80800374: lw          $t6, 0x1E4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1E4);
    // 0x80800378: sll         $t8, $t6, 30
    ctx->r24 = S32(ctx->r14 << 30);
    // 0x8080037C: bgez        $t8, L_80800394
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80800380: nop
    
            goto L_80800394;
    }
    // 0x80800380: nop

    // 0x80800384: jal         0x800885F8
    // 0x80800388: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    _glintrosyncDll_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x80800388: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080038C: b           L_808003A0
    // 0x80800390: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
        goto L_808003A0;
    // 0x80800390: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_80800394:
    // 0x80800394: jal         0x800D8FF8
    // 0x80800398: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x80800398: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x8080039C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_808003A0:
    // 0x808003A0: lw          $t9, 0x1E4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X1E4);
    // 0x808003A4: lwc1        $f6, 0x1F0($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1F0);
    // 0x808003A8: sll         $t1, $t9, 29
    ctx->r9 = S32(ctx->r25 << 29);
    // 0x808003AC: bltz        $t1, L_808003B8
    if (SIGNED(ctx->r9) < 0) {
        // 0x808003B0: div.s       $f2, $f0, $f6
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
            goto L_808003B8;
    }
    // 0x808003B0: div.s       $f2, $f0, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = DIV_S(ctx->f0.fl, ctx->f6.fl);
    // 0x808003B4: neg.s       $f2, $f2
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f2.fl = -ctx->f2.fl;
L_808003B8:
    // 0x808003B8: lwc1        $f8, 0x1EC($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X1EC);
    // 0x808003BC: add.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = ctx->f8.fl + ctx->f2.fl;
    // 0x808003C0: swc1        $f10, 0x1EC($a0)
    MEM_W(0X1EC, ctx->r4) = ctx->f10.u32l;
    // 0x808003C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003C8: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x808003CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808003D0: jr          $ra
    // 0x808003D4: nop

    return;
    // 0x808003D4: nop

;}
RECOMP_FUNC void func_808003D8_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003D8: lw          $t6, 0x1E4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1E4);
    // 0x808003DC: mtc1        $a1, $f14
    ctx->f14.u32l = ctx->r5;
    // 0x808003E0: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x808003E4: sll         $t8, $t6, 29
    ctx->r24 = S32(ctx->r14 << 29);
    // 0x808003E8: bgezl       $t8, L_80800434
    if (SIGNED(ctx->r24) >= 0) {
        // 0x808003EC: c.le.s      $f12, $f14
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl <= ctx->f14.fl;
            goto L_80800434;
    }
    goto skip_0;
    // 0x808003EC: c.le.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl <= ctx->f14.fl;
    skip_0:
    // 0x808003F0: c.le.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl <= ctx->f12.fl;
    // 0x808003F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808003F8: bc1f        L_80800404
    if (!c1cs) {
        // 0x808003FC: nop
    
            goto L_80800404;
    }
    // 0x808003FC: nop

    // 0x80800400: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800404:
    // 0x80800404: beq         $v0, $zero, L_80800468
    if (ctx->r2 == 0) {
        // 0x80800408: nop
    
            goto L_80800468;
    }
    // 0x80800408: nop

    // 0x8080040C: lwc1        $f4, 0x1EC($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X1EC);
    // 0x80800410: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800414: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x80800418: nop

    // 0x8080041C: bc1f        L_80800428
    if (!c1cs) {
        // 0x80800420: nop
    
            goto L_80800428;
    }
    // 0x80800420: nop

    // 0x80800424: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800428:
    // 0x80800428: jr          $ra
    // 0x8080042C: nop

    return;
    // 0x8080042C: nop

    // 0x80800430: c.le.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl <= ctx->f14.fl;
L_80800434:
    // 0x80800434: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800438: bc1f        L_80800444
    if (!c1cs) {
        // 0x8080043C: nop
    
            goto L_80800444;
    }
    // 0x8080043C: nop

    // 0x80800440: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800444:
    // 0x80800444: beq         $v0, $zero, L_80800468
    if (ctx->r2 == 0) {
        // 0x80800448: nop
    
            goto L_80800468;
    }
    // 0x80800448: nop

    // 0x8080044C: lwc1        $f6, 0x1EC($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X1EC);
    // 0x80800450: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800454: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x80800458: nop

    // 0x8080045C: bc1f        L_80800468
    if (!c1cs) {
        // 0x80800460: nop
    
            goto L_80800468;
    }
    // 0x80800460: nop

    // 0x80800464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800468:
    // 0x80800468: jr          $ra
    // 0x8080046C: nop

    return;
    // 0x8080046C: nop

;}
RECOMP_FUNC void func_80800470_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800478: lbu         $t8, 0x1E7($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1E7);
    // 0x8080047C: lbu         $t1, 0x1E5($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X1E5);
    // 0x80800480: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80800484: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x80800488: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x8080048C: sb          $t9, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r25;
    // 0x80800490: sb          $t2, 0x1E5($a0)
    MEM_B(0X1E5, ctx->r4) = ctx->r10;
    // 0x80800494: lw          $t3, 0x1E4($a0)
    ctx->r11 = MEM_W(ctx->r4, 0X1E4);
    // 0x80800498: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x8080049C: sb          $t6, 0x171($a0)
    MEM_B(0X171, ctx->r4) = ctx->r14;
    // 0x808004A0: sll         $t5, $t3, 27
    ctx->r13 = S32(ctx->r11 << 27);
    // 0x808004A4: bgez        $t5, L_808004B8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x808004A8: ori         $a1, $a1, 0xCCCD
        ctx->r5 = ctx->r5 | 0XCCCD;
            goto L_808004B8;
    }
    // 0x808004A8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808004AC: jal         0x80000358
    // 0x808004B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800358_gczoombox(rdram, ctx);
        goto after_0;
    // 0x808004B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808004B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_808004B8:
    // 0x808004B8: jal         0x80003430
    // 0x808004BC: sb          $zero, 0x170($a0)
    MEM_B(0X170, ctx->r4) = 0;
    gczoombox_entrypoint_17(rdram, ctx);
        goto after_1;
    // 0x808004BC: sb          $zero, 0x170($a0)
    MEM_B(0X170, ctx->r4) = 0;
    after_1:
    // 0x808004C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004C8: jr          $ra
    // 0x808004CC: nop

    return;
    // 0x808004CC: nop

;}
RECOMP_FUNC void func_808004D0_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808004D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808004D8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x808004DC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x808004E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808004E4: lbu         $t0, 0x1E5($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1E5);
    // 0x808004E8: lbu         $t7, 0x1E7($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1E7);
    // 0x808004EC: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x808004F0: ori         $t2, $t0, 0x1
    ctx->r10 = ctx->r8 | 0X1;
    // 0x808004F4: sb          $t2, 0x1E5($a0)
    MEM_B(0X1E5, ctx->r4) = ctx->r10;
    // 0x808004F8: andi        $t3, $t2, 0x7F
    ctx->r11 = ctx->r10 & 0X7F;
    // 0x808004FC: andi        $t8, $t7, 0xFFFB
    ctx->r24 = ctx->r15 & 0XFFFB;
    // 0x80800500: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80800504: sb          $t6, 0x171($a0)
    MEM_B(0X171, ctx->r4) = ctx->r14;
    // 0x80800508: sb          $t8, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r24;
    // 0x8080050C: sb          $t3, 0x1E5($a0)
    MEM_B(0X1E5, ctx->r4) = ctx->r11;
    // 0x80800510: jal         0x800001D4
    // 0x80800514: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_808001D4_gczoombox(rdram, ctx);
        goto after_0;
    // 0x80800514: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_0:
    // 0x80800518: addiu       $a0, $s2, 0x30
    ctx->r4 = ADD32(ctx->r18, 0X30);
    // 0x8080051C: jal         0x800001D4
    // 0x80800520: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_808001D4_gczoombox(rdram, ctx);
        goto after_1;
    // 0x80800520: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_1:
    // 0x80800524: lbu         $t4, 0x1E4($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X1E4);
    // 0x80800528: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8080052C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800530: lwc1        $f6, 0x14C($s2)
    ctx->f6.u32l = MEM_W(ctx->r18, 0X14C);
    // 0x80800534: andi        $t6, $t4, 0xFFBF
    ctx->r14 = ctx->r12 & 0XFFBF;
    // 0x80800538: andi        $t8, $t6, 0xDF
    ctx->r24 = ctx->r14 & 0XDF;
    // 0x8080053C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80800540: sb          $t6, 0x1E4($s2)
    MEM_B(0X1E4, ctx->r18) = ctx->r14;
    // 0x80800544: andi        $t0, $t8, 0xF7
    ctx->r8 = ctx->r24 & 0XF7;
    // 0x80800548: sb          $t8, 0x1E4($s2)
    MEM_B(0X1E4, ctx->r18) = ctx->r24;
    // 0x8080054C: andi        $t2, $t0, 0xFB
    ctx->r10 = ctx->r8 & 0XFB;
    // 0x80800550: sb          $t0, 0x1E4($s2)
    MEM_B(0X1E4, ctx->r18) = ctx->r8;
    // 0x80800554: sb          $t2, 0x1E4($s2)
    MEM_B(0X1E4, ctx->r18) = ctx->r10;
    // 0x80800558: andi        $t3, $t2, 0x7F
    ctx->r11 = ctx->r10 & 0X7F;
    // 0x8080055C: bc1f        L_80800584
    if (!c1cs) {
        // 0x80800560: sb          $t3, 0x1E4($s2)
        MEM_B(0X1E4, ctx->r18) = ctx->r11;
            goto L_80800584;
    }
    // 0x80800560: sb          $t3, 0x1E4($s2)
    MEM_B(0X1E4, ctx->r18) = ctx->r11;
    // 0x80800564: jal         0x800FCCD4
    // 0x80800568: lbu         $a0, 0x144($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X144);
    func_800FCCD4(rdram, ctx);
        goto after_2;
    // 0x80800568: lbu         $a0, 0x144($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X144);
    after_2:
    // 0x8080056C: beql        $v0, $zero, L_808005D0
    if (ctx->r2 == 0) {
        // 0x80800570: sb          $zero, 0x170($s2)
        MEM_B(0X170, ctx->r18) = 0;
            goto L_808005D0;
    }
    goto skip_0;
    // 0x80800570: sb          $zero, 0x170($s2)
    MEM_B(0X170, ctx->r18) = 0;
    skip_0:
    // 0x80800574: jal         0x800FC74C
    // 0x80800578: lbu         $a0, 0x144($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X144);
    func_800FC74C(rdram, ctx);
        goto after_3;
    // 0x80800578: lbu         $a0, 0x144($s2)
    ctx->r4 = MEM_BU(ctx->r18, 0X144);
    after_3:
    // 0x8080057C: b           L_808005D0
    // 0x80800580: sb          $zero, 0x170($s2)
    MEM_B(0X170, ctx->r18) = 0;
        goto L_808005D0;
    // 0x80800580: sb          $zero, 0x170($s2)
    MEM_B(0X170, ctx->r18) = 0;
L_80800584:
    // 0x80800584: lbu         $v0, 0x178($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X178);
    // 0x80800588: beql        $v0, $zero, L_808005D0
    if (ctx->r2 == 0) {
        // 0x8080058C: sb          $zero, 0x170($s2)
        MEM_B(0X170, ctx->r18) = 0;
            goto L_808005D0;
    }
    goto skip_1;
    // 0x8080058C: sb          $zero, 0x170($s2)
    MEM_B(0X170, ctx->r18) = 0;
    skip_1:
    // 0x80800590: blez        $v0, L_808005CC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80800594: or          $s1, $zero, $zero
        ctx->r17 = 0 | 0;
            goto L_808005CC;
    }
    // 0x80800594: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80800598: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
L_8080059C:
    // 0x8080059C: jal         0x800C3D78
    // 0x808005A0: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    func_800C3D78(rdram, ctx);
        goto after_4;
    // 0x808005A0: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    after_4:
    // 0x808005A4: beql        $v0, $zero, L_808005B8
    if (ctx->r2 == 0) {
        // 0x808005A8: lbu         $t4, 0x178($s2)
        ctx->r12 = MEM_BU(ctx->r18, 0X178);
            goto L_808005B8;
    }
    goto skip_2;
    // 0x808005A8: lbu         $t4, 0x178($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X178);
    skip_2:
    // 0x808005AC: jal         0x800C3CE8
    // 0x808005B0: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    func_800C3CE8(rdram, ctx);
        goto after_5;
    // 0x808005B0: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    after_5:
    // 0x808005B4: lbu         $t4, 0x178($s2)
    ctx->r12 = MEM_BU(ctx->r18, 0X178);
L_808005B8:
    // 0x808005B8: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x808005BC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x808005C0: slt         $at, $s1, $t4
    ctx->r1 = SIGNED(ctx->r17) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x808005C4: bne         $at, $zero, L_8080059C
    if (ctx->r1 != 0) {
        // 0x808005C8: nop
    
            goto L_8080059C;
    }
    // 0x808005C8: nop

L_808005CC:
    // 0x808005CC: sb          $zero, 0x170($s2)
    MEM_B(0X170, ctx->r18) = 0;
L_808005D0:
    // 0x808005D0: jal         0x80003440
    // 0x808005D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    gczoombox_entrypoint_18(rdram, ctx);
        goto after_6;
    // 0x808005D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x808005D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808005DC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808005E0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x808005E4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x808005E8: jr          $ra
    // 0x808005EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808005EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_808005F0_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005F0: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x808005F4: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x808005F8: andi        $t7, $a1, 0xFF
    ctx->r15 = ctx->r5 & 0XFF;
    // 0x808005FC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80800600: bne         $t7, $zero, L_80800654
    if (ctx->r15 != 0) {
        // 0x80800604: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_80800654;
    }
    // 0x80800604: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80800608: xori        $v0, $t6, 0x2E
    ctx->r2 = ctx->r14 ^ 0X2E;
    // 0x8080060C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80800610: bne         $v0, $zero, L_8080068C
    if (ctx->r2 != 0) {
        // 0x80800614: nop
    
            goto L_8080068C;
    }
    // 0x80800614: nop

    // 0x80800618: xori        $v0, $t6, 0x21
    ctx->r2 = ctx->r14 ^ 0X21;
    // 0x8080061C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80800620: bne         $v0, $zero, L_8080068C
    if (ctx->r2 != 0) {
        // 0x80800624: nop
    
            goto L_8080068C;
    }
    // 0x80800624: nop

    // 0x80800628: xori        $v0, $t6, 0x2C
    ctx->r2 = ctx->r14 ^ 0X2C;
    // 0x8080062C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80800630: bne         $v0, $zero, L_8080068C
    if (ctx->r2 != 0) {
        // 0x80800634: nop
    
            goto L_8080068C;
    }
    // 0x80800634: nop

    // 0x80800638: xori        $v0, $t6, 0x2D
    ctx->r2 = ctx->r14 ^ 0X2D;
    // 0x8080063C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80800640: bne         $v0, $zero, L_8080068C
    if (ctx->r2 != 0) {
        // 0x80800644: nop
    
            goto L_8080068C;
    }
    // 0x80800644: nop

    // 0x80800648: xori        $v0, $t6, 0x3F
    ctx->r2 = ctx->r14 ^ 0X3F;
    // 0x8080064C: jr          $ra
    // 0x80800650: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x80800650: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_80800654:
    // 0x80800654: xori        $v0, $a0, 0x1
    ctx->r2 = ctx->r4 ^ 0X1;
    // 0x80800658: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8080065C: bne         $v0, $zero, L_8080068C
    if (ctx->r2 != 0) {
        // 0x80800660: nop
    
            goto L_8080068C;
    }
    // 0x80800660: nop

    // 0x80800664: xori        $v0, $a0, 0x34
    ctx->r2 = ctx->r4 ^ 0X34;
    // 0x80800668: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8080066C: bne         $v0, $zero, L_8080068C
    if (ctx->r2 != 0) {
        // 0x80800670: nop
    
            goto L_8080068C;
    }
    // 0x80800670: nop

    // 0x80800674: xori        $v0, $a0, 0x40
    ctx->r2 = ctx->r4 ^ 0X40;
    // 0x80800678: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x8080067C: bne         $v0, $zero, L_8080068C
    if (ctx->r2 != 0) {
        // 0x80800680: nop
    
            goto L_8080068C;
    }
    // 0x80800680: nop

    // 0x80800684: xori        $v0, $a0, 0x42
    ctx->r2 = ctx->r4 ^ 0X42;
    // 0x80800688: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
L_8080068C:
    // 0x8080068C: jr          $ra
    // 0x80800690: nop

    return;
    // 0x80800690: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800694: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800698: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080069C: jal         0x800E7188
    // 0x808006A0: nop

    func_800E7188(rdram, ctx);
        goto after_0;
    // 0x808006A0: nop

    after_0:
    // 0x808006A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006AC: jr          $ra
    // 0x808006B0: nop

    return;
    // 0x808006B0: nop

;}
RECOMP_FUNC void func_808006B4_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006B4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x808006B8: bnel        $a1, $at, L_808006CC
    if (ctx->r5 != ctx->r1) {
        // 0x808006BC: lhu         $t6, 0x12($a0)
        ctx->r14 = MEM_HU(ctx->r4, 0X12);
            goto L_808006CC;
    }
    goto skip_0;
    // 0x808006BC: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    skip_0:
    // 0x808006C0: jr          $ra
    // 0x808006C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x808006C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808006C8: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
L_808006CC:
    // 0x808006CC: srl         $t7, $t6, 1
    ctx->r15 = S32(U32(ctx->r14) >> 1);
    // 0x808006D0: xor         $v1, $a1, $t7
    ctx->r3 = ctx->r5 ^ ctx->r15;
    // 0x808006D4: sltiu       $v1, $v1, 0x1
    ctx->r3 = ctx->r3 < 0X1 ? 1 : 0;
    // 0x808006D8: jr          $ra
    // 0x808006DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x808006DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_808006E0_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006E0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808006E4: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x808006E8: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x808006EC: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x808006F0: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x808006F4: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x808006F8: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x808006FC: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x80800700: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x80800704: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x80800708: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x8080070C: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80800710: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80800714: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x80800718: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8080071C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80800720: blez        $a1, L_808007B4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80800724: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_808007B4;
    }
    // 0x80800724: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80800728: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8080072C: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x80800730: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3DC0) << 16);
    // 0x80800734: lui         $s4, 0x0
    ctx->r20 = S32(RELOC_HI16(688, 0X3E80) << 16);
    // 0x80800738: addiu       $s4, $s4, 0x3E80
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(688, 0X3E80));
    // 0x8080073C: lwc1        $f20, 0x3DC0($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3DC0));
    // 0x80800740: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
L_80800744:
    // 0x80800744: beq         $s2, $zero, L_80800794
    if (ctx->r18 == 0) {
        // 0x80800748: addu        $t6, $s4, $s2
        ctx->r14 = ADD32(ctx->r20, ctx->r18);
            goto L_80800794;
    }
    // 0x80800748: addu        $t6, $s4, $s2
    ctx->r14 = ADD32(ctx->r20, ctx->r18);
    // 0x8080074C: jal         0x800DC1AC
    // 0x80800750: nop

    func_800DC1AC(rdram, ctx);
        goto after_0;
    // 0x80800750: nop

    after_0:
    // 0x80800754: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x80800758: nop

    // 0x8080075C: bc1fl       L_808007A0
    if (!c1cs) {
        // 0x80800760: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_808007A0;
    }
    goto skip_0;
    // 0x80800760: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    skip_0:
    // 0x80800764: jal         0x800DC1AC
    // 0x80800768: addu        $s0, $s4, $s2
    ctx->r16 = ADD32(ctx->r20, ctx->r18);
    func_800DC1AC(rdram, ctx);
        goto after_1;
    // 0x80800768: addu        $s0, $s4, $s2
    ctx->r16 = ADD32(ctx->r20, ctx->r18);
    after_1:
    // 0x8080076C: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x80800770: nop

    // 0x80800774: bc1fl       L_8080078C
    if (!c1cs) {
        // 0x80800778: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_8080078C;
    }
    goto skip_1;
    // 0x80800778: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_1:
    // 0x8080077C: sb          $s7, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r23;
    // 0x80800780: b           L_8080079C
    // 0x80800784: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8080079C;
    // 0x80800784: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80800788: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_8080078C:
    // 0x8080078C: b           L_8080079C
    // 0x80800790: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
        goto L_8080079C;
    // 0x80800790: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80800794:
    // 0x80800794: sb          $s7, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r23;
    // 0x80800798: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_8080079C:
    // 0x8080079C: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
L_808007A0:
    // 0x808007A0: slt         $at, $s3, $s1
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x808007A4: beq         $at, $zero, L_808007B4
    if (ctx->r1 == 0) {
        // 0x808007A8: slti        $at, $s2, 0x20
        ctx->r1 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
            goto L_808007B4;
    }
    // 0x808007A8: slti        $at, $s2, 0x20
    ctx->r1 = SIGNED(ctx->r18) < 0X20 ? 1 : 0;
    // 0x808007AC: bne         $at, $zero, L_80800744
    if (ctx->r1 != 0) {
        // 0x808007B0: nop
    
            goto L_80800744;
    }
    // 0x808007B0: nop

L_808007B4:
    // 0x808007B4: lui         $s4, 0x0
    ctx->r20 = S32(RELOC_HI16(688, 0X3E80) << 16);
    // 0x808007B8: addiu       $s4, $s4, 0x3E80
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(688, 0X3E80));
    // 0x808007BC: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808007C0: addu        $t7, $s4, $s2
    ctx->r15 = ADD32(ctx->r20, ctx->r18);
    // 0x808007C4: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x808007C8: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x808007CC: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x808007D0: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x808007D4: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x808007D8: blez        $s2, L_808008B4
    if (SIGNED(ctx->r18) <= 0) {
        // 0x808007DC: or          $s5, $zero, $zero
        ctx->r21 = 0 | 0;
            goto L_808008B4;
    }
    // 0x808007DC: or          $s5, $zero, $zero
    ctx->r21 = 0 | 0;
    // 0x808007E0: lui         $s1, 0x0
    ctx->r17 = S32(RELOC_HI16(688, 0X3E80) << 16);
    // 0x808007E4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3DC4) << 16);
    // 0x808007E8: lwc1        $f20, 0x3DC4($at)
    ctx->f20.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3DC4));
    // 0x808007EC: addiu       $s1, $s1, 0x3E80
    ctx->r17 = ADD32(ctx->r17, (int16_t)RELOC_LO16(688, 0X3E80));
    // 0x808007F0: or          $s0, $fp, $zero
    ctx->r16 = ctx->r30 | 0;
    // 0x808007F4: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x808007F8: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
L_808007FC:
    // 0x808007FC: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
    // 0x80800800: bnel        $s4, $t8, L_808008A0
    if (ctx->r20 != ctx->r24) {
        // 0x80800804: addiu       $s5, $s5, 0x1
        ctx->r21 = ADD32(ctx->r21, 0X1);
            goto L_808008A0;
    }
    goto skip_2;
    // 0x80800804: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
    skip_2:
    // 0x80800808: lbu         $t9, 0x1($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X1);
    // 0x8080080C: bnel        $s4, $t9, L_8080088C
    if (ctx->r20 != ctx->r25) {
        // 0x80800810: lbu         $t4, 0x1D1($fp)
        ctx->r12 = MEM_BU(ctx->r30, 0X1D1);
            goto L_8080088C;
    }
    goto skip_3;
    // 0x80800810: lbu         $t4, 0x1D1($fp)
    ctx->r12 = MEM_BU(ctx->r30, 0X1D1);
    skip_3:
    // 0x80800814: lbu         $t0, 0x2($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X2);
    // 0x80800818: bne         $s4, $t0, L_80800848
    if (ctx->r20 != ctx->r8) {
        // 0x8080081C: nop
    
            goto L_80800848;
    }
    // 0x8080081C: nop

    // 0x80800820: jal         0x800DC1AC
    // 0x80800824: nop

    func_800DC1AC(rdram, ctx);
        goto after_2;
    // 0x80800824: nop

    after_2:
    // 0x80800828: c.lt.s      $f0, $f20
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 20);
    c1cs = ctx->f0.fl < ctx->f20.fl;
    // 0x8080082C: nop

    // 0x80800830: bc1f        L_80800840
    if (!c1cs) {
        // 0x80800834: nop
    
            goto L_80800840;
    }
    // 0x80800834: nop

    // 0x80800838: b           L_80800894
    // 0x8080083C: sb          $s7, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r23;
        goto L_80800894;
    // 0x8080083C: sb          $s7, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r23;
L_80800840:
    // 0x80800840: b           L_80800894
    // 0x80800844: sb          $s6, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r22;
        goto L_80800894;
    // 0x80800844: sb          $s6, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r22;
L_80800848:
    // 0x80800848: jal         0x800DC1AC
    // 0x8080084C: nop

    func_800DC1AC(rdram, ctx);
        goto after_3;
    // 0x8080084C: nop

    after_3:
    // 0x80800850: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x80800854: nop

    // 0x80800858: bc1fl       L_8080086C
    if (!c1cs) {
        // 0x8080085C: lbu         $t1, 0x1D1($fp)
        ctx->r9 = MEM_BU(ctx->r30, 0X1D1);
            goto L_8080086C;
    }
    goto skip_4;
    // 0x8080085C: lbu         $t1, 0x1D1($fp)
    ctx->r9 = MEM_BU(ctx->r30, 0X1D1);
    skip_4:
    // 0x80800860: b           L_80800894
    // 0x80800864: sb          $s6, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r22;
        goto L_80800894;
    // 0x80800864: sb          $s6, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r22;
    // 0x80800868: lbu         $t1, 0x1D1($fp)
    ctx->r9 = MEM_BU(ctx->r30, 0X1D1);
L_8080086C:
    // 0x8080086C: addiu       $t2, $t1, -0x4
    ctx->r10 = ADD32(ctx->r9, -0X4);
    // 0x80800870: bgez        $t2, L_80800880
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80800874: sra         $t3, $t2, 1
        ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
            goto L_80800880;
    }
    // 0x80800874: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x80800878: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x8080087C: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_80800880:
    // 0x80800880: b           L_80800894
    // 0x80800884: sb          $t3, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r11;
        goto L_80800894;
    // 0x80800884: sb          $t3, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r11;
    // 0x80800888: lbu         $t4, 0x1D1($fp)
    ctx->r12 = MEM_BU(ctx->r30, 0X1D1);
L_8080088C:
    // 0x8080088C: addiu       $t5, $t4, -0x6
    ctx->r13 = ADD32(ctx->r12, -0X6);
    // 0x80800890: sb          $t5, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = ctx->r13;
L_80800894:
    // 0x80800894: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80800898: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8080089C: addiu       $s5, $s5, 0x1
    ctx->r21 = ADD32(ctx->r21, 0X1);
L_808008A0:
    // 0x808008A0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x808008A4: sb          $zero, 0xF0($s0)
    MEM_B(0XF0, ctx->r16) = 0;
    // 0x808008A8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x808008AC: bne         $s5, $s2, L_808007FC
    if (ctx->r21 != ctx->r18) {
        // 0x808008B0: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_808007FC;
    }
    // 0x808008B0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_808008B4:
    // 0x808008B4: sb          $s3, 0x1D2($fp)
    MEM_B(0X1D2, ctx->r30) = ctx->r19;
    // 0x808008B8: sb          $zero, 0x1D0($fp)
    MEM_B(0X1D0, ctx->r30) = 0;
    // 0x808008BC: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x808008C0: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x808008C4: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x808008C8: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x808008CC: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x808008D0: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x808008D4: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x808008D8: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x808008DC: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x808008E0: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x808008E4: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x808008E8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x808008EC: jr          $ra
    // 0x808008F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x808008F0: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_808008F4_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808008F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808008FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800900: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80800904: jal         0x800C429C
    // 0x80800908: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_800C429C(rdram, ctx);
        goto after_0;
    // 0x80800908: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_0:
    // 0x8080090C: sb          $v0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r2;
    // 0x80800910: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x80800914: jal         0x800C3418
    // 0x80800918: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C3418(rdram, ctx);
        goto after_1;
    // 0x80800918: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8080091C: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x80800920: jal         0x800C34CC
    // 0x80800924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C34CC(rdram, ctx);
        goto after_2;
    // 0x80800924: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800928: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8080092C: addiu       $at, $zero, 0x80
    ctx->r1 = ADD32(0, 0X80);
    // 0x80800930: lbu         $a0, 0x1F($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X1F);
    // 0x80800934: lh          $v0, 0x172($t6)
    ctx->r2 = MEM_H(ctx->r14, 0X172);
    // 0x80800938: beq         $v0, $at, L_80800948
    if (ctx->r2 == ctx->r1) {
        // 0x8080093C: addiu       $at, $zero, 0xBB
        ctx->r1 = ADD32(0, 0XBB);
            goto L_80800948;
    }
    // 0x8080093C: addiu       $at, $zero, 0xBB
    ctx->r1 = ADD32(0, 0XBB);
    // 0x80800940: bnel        $v0, $at, L_80800954
    if (ctx->r2 != ctx->r1) {
        // 0x80800944: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800954;
    }
    goto skip_0;
    // 0x80800944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
L_80800948:
    // 0x80800948: jal         0x800C32C4
    // 0x8080094C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_800C32C4(rdram, ctx);
        goto after_3;
    // 0x8080094C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_3:
    // 0x80800950: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800954:
    // 0x80800954: lbu         $v0, 0x1F($sp)
    ctx->r2 = MEM_BU(ctx->r29, 0X1F);
    // 0x80800958: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080095C: jr          $ra
    // 0x80800960: nop

    return;
    // 0x80800960: nop

;}
RECOMP_FUNC void func_80800964_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800964: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800968: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080096C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800970: jal         0x800D52B0
    // 0x80800974: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800D52B0(rdram, ctx);
        goto after_0;
    // 0x80800974: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800978: jal         0x80000000
    // 0x8080097C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_gczoombox(rdram, ctx);
        goto after_1;
    // 0x8080097C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800980: jal         0x800000DC
    // 0x80800984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000DC_gczoombox(rdram, ctx);
        goto after_2;
    // 0x80800984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800988: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8080098C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80800990: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
L_80800994:
    // 0x80800994: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80800998: sw          $zero, 0x180($v0)
    MEM_W(0X180, ctx->r2) = 0;
    // 0x8080099C: sw          $zero, 0x184($v0)
    MEM_W(0X184, ctx->r2) = 0;
    // 0x808009A0: sw          $zero, 0x188($v0)
    MEM_W(0X188, ctx->r2) = 0;
    // 0x808009A4: addiu       $v0, $v0, 0x10
    ctx->r2 = ADD32(ctx->r2, 0X10);
    // 0x808009A8: bne         $v1, $a0, L_80800994
    if (ctx->r3 != ctx->r4) {
        // 0x808009AC: sw          $zero, 0x16C($v0)
        MEM_W(0X16C, ctx->r2) = 0;
            goto L_80800994;
    }
    // 0x808009AC: sw          $zero, 0x16C($v0)
    MEM_W(0X16C, ctx->r2) = 0;
    // 0x808009B0: lbu         $t6, 0x1E5($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1E5);
    // 0x808009B4: sb          $zero, 0x171($s0)
    MEM_B(0X171, ctx->r16) = 0;
    // 0x808009B8: andi        $t7, $t6, 0xFFEF
    ctx->r15 = ctx->r14 & 0XFFEF;
    // 0x808009BC: sb          $t7, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r15;
    // 0x808009C0: lw          $t8, 0x1E4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1E4);
    // 0x808009C4: sll         $t9, $t8, 11
    ctx->r25 = S32(ctx->r24 << 11);
    // 0x808009C8: srl         $t0, $t9, 31
    ctx->r8 = S32(U32(ctx->r25) >> 31);
    // 0x808009CC: sb          $t0, 0x174($s0)
    MEM_B(0X174, ctx->r16) = ctx->r8;
    // 0x808009D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808009D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808009D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808009DC: jr          $ra
    // 0x808009E0: nop

    return;
    // 0x808009E0: nop

;}
RECOMP_FUNC void func_808009E4_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009E4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x808009E8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x808009EC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x808009F0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808009F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808009F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808009FC: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x80800A00: beq         $a0, $zero, L_80800E0C
    if (ctx->r4 == 0) {
        // 0x80800A04: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80800E0C;
    }
    // 0x80800A04: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80800A08: lbu         $a0, 0x178($a0)
    ctx->r4 = MEM_BU(ctx->r4, 0X178);
    // 0x80800A0C: beql        $a0, $zero, L_80800E10
    if (ctx->r4 == 0) {
        // 0x80800A10: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800E10;
    }
    goto skip_0;
    // 0x80800A10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800A14: lw          $t6, 0x1E4($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X1E4);
    // 0x80800A18: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80800A1C: sll         $t8, $t6, 20
    ctx->r24 = S32(ctx->r14 << 20);
    // 0x80800A20: bgezl       $t8, L_80800E10
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80800A24: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800E10;
    }
    goto skip_1;
    // 0x80800A24: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x80800A28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800A2C: lwc1        $f6, 0x14C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X14C);
    // 0x80800A30: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800A34: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80800A38: nop

    // 0x80800A3C: bc1f        L_80800A64
    if (!c1cs) {
        // 0x80800A40: nop
    
            goto L_80800A64;
    }
    // 0x80800A40: nop

    // 0x80800A44: jal         0x800FCCD4
    // 0x80800A48: lbu         $a0, 0x144($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X144);
    func_800FCCD4(rdram, ctx);
        goto after_0;
    // 0x80800A48: lbu         $a0, 0x144($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X144);
    after_0:
    // 0x80800A4C: bnel        $v0, $zero, L_80800E10
    if (ctx->r2 != 0) {
        // 0x80800A50: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800E10;
    }
    goto skip_2;
    // 0x80800A50: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x80800A54: jal         0x800FC6B0
    // 0x80800A58: lbu         $a0, 0x144($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X144);
    func_800FC6B0(rdram, ctx);
        goto after_1;
    // 0x80800A58: lbu         $a0, 0x144($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X144);
    after_1:
    // 0x80800A5C: b           L_80800E10
    // 0x80800A60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800E10;
    // 0x80800A60: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800A64:
    // 0x80800A64: blez        $a0, L_80800AAC
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80800A68: or          $v0, $a0, $zero
        ctx->r2 = ctx->r4 | 0;
            goto L_80800AAC;
    }
    // 0x80800A68: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x80800A6C: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x80800A70: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
L_80800A74:
    // 0x80800A74: jal         0x800C3D78
    // 0x80800A78: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_800C3D78(rdram, ctx);
        goto after_2;
    // 0x80800A78: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_2:
    // 0x80800A7C: beq         $v0, $zero, L_80800A94
    if (ctx->r2 == 0) {
        // 0x80800A80: lw          $v1, 0x64($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X64);
            goto L_80800A94;
    }
    // 0x80800A80: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
    // 0x80800A84: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    // 0x80800A88: jal         0x800C3CE8
    // 0x80800A8C: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    func_800C3CE8(rdram, ctx);
        goto after_3;
    // 0x80800A8C: sw          $v1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r3;
    after_3:
    // 0x80800A90: lw          $v1, 0x64($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X64);
L_80800A94:
    // 0x80800A94: lbu         $v0, 0x178($s1)
    ctx->r2 = MEM_BU(ctx->r17, 0X178);
    // 0x80800A98: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80800A9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800AA0: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80800AA4: bnel        $at, $zero, L_80800A74
    if (ctx->r1 != 0) {
        // 0x80800AA8: lbu         $a0, 0x144($s0)
        ctx->r4 = MEM_BU(ctx->r16, 0X144);
            goto L_80800A74;
    }
    goto skip_3;
    // 0x80800AA8: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    skip_3:
L_80800AAC:
    // 0x80800AAC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800AB0: beq         $v0, $at, L_80800AE4
    if (ctx->r2 == ctx->r1) {
        // 0x80800AB4: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80800AE4;
    }
    // 0x80800AB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80800AB8:
    // 0x80800AB8: jal         0x800DC214
    // 0x80800ABC: lbu         $a1, 0x178($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X178);
    func_800DC214(rdram, ctx);
        goto after_4;
    // 0x80800ABC: lbu         $a1, 0x178($s1)
    ctx->r5 = MEM_BU(ctx->r17, 0X178);
    after_4:
    // 0x80800AC0: lbu         $t9, 0x1D3($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X1D3);
    // 0x80800AC4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80800AC8: beql        $v0, $t9, L_80800AB8
    if (ctx->r2 == ctx->r25) {
        // 0x80800ACC: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80800AB8;
    }
    goto skip_4;
    // 0x80800ACC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_4:
    // 0x80800AD0: sll         $t0, $v0, 1
    ctx->r8 = S32(ctx->r2 << 1);
    // 0x80800AD4: addu        $t1, $s1, $t0
    ctx->r9 = ADD32(ctx->r17, ctx->r8);
    // 0x80800AD8: lh          $t2, 0x160($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X160);
    // 0x80800ADC: beql        $t2, $zero, L_80800AB8
    if (ctx->r10 == 0) {
        // 0x80800AE0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80800AB8;
    }
    goto skip_5;
    // 0x80800AE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_5:
L_80800AE4:
    // 0x80800AE4: sll         $t3, $s2, 2
    ctx->r11 = S32(ctx->r18 << 2);
    // 0x80800AE8: sb          $s2, 0x1D3($s1)
    MEM_B(0X1D3, ctx->r17) = ctx->r18;
    // 0x80800AEC: addu        $s0, $s1, $t3
    ctx->r16 = ADD32(ctx->r17, ctx->r11);
    // 0x80800AF0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80800AF4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800AF8: lwc1        $f2, 0x14C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x80800AFC: sll         $t4, $s2, 1
    ctx->r12 = S32(ctx->r18 << 1);
    // 0x80800B00: addu        $t5, $s1, $t4
    ctx->r13 = ADD32(ctx->r17, ctx->r12);
    // 0x80800B04: c.lt.s      $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f2.fl < ctx->f8.fl;
    // 0x80800B08: sw          $t5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r13;
    // 0x80800B0C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3DC8) << 16);
    // 0x80800B10: bc1f        L_80800C38
    if (!c1cs) {
        // 0x80800B14: addiu       $a0, $zero, -0xC
        ctx->r4 = ADD32(0, -0XC);
            goto L_80800C38;
    }
    // 0x80800B14: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
L_80800B18:
    // 0x80800B18: jal         0x800DC214
    // 0x80800B1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800DC214(rdram, ctx);
        goto after_5;
    // 0x80800B1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x80800B20: mtc1        $v0, $f10
    ctx->f10.u32l = ctx->r2;
    // 0x80800B24: lui         $at, 0xC130
    ctx->r1 = S32(0XC130 << 16);
    // 0x80800B28: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800B2C: cvt.s.w     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    ctx->f0.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80800B30: c.eq.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl == ctx->f0.fl;
    // 0x80800B34: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800B38: bc1tl       L_80800B18
    if (c1cs) {
        // 0x80800B3C: addiu       $a0, $zero, -0xC
        ctx->r4 = ADD32(0, -0XC);
            goto L_80800B18;
    }
    goto skip_6;
    // 0x80800B3C: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    skip_6:
    // 0x80800B40: lui         $at, 0xC110
    ctx->r1 = S32(0XC110 << 16);
    // 0x80800B44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800B48: nop

    // 0x80800B4C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80800B50: nop

    // 0x80800B54: bc1tl       L_80800B18
    if (c1cs) {
        // 0x80800B58: addiu       $a0, $zero, -0xC
        ctx->r4 = ADD32(0, -0XC);
            goto L_80800B18;
    }
    goto skip_7;
    // 0x80800B58: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    skip_7:
    // 0x80800B5C: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x80800B60: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800B64: nop

    // 0x80800B68: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x80800B6C: nop

    // 0x80800B70: bc1tl       L_80800B18
    if (c1cs) {
        // 0x80800B74: addiu       $a0, $zero, -0xC
        ctx->r4 = ADD32(0, -0XC);
            goto L_80800B18;
    }
    goto skip_8;
    // 0x80800B74: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    skip_8:
    // 0x80800B78: lui         $at, 0xC0C0
    ctx->r1 = S32(0XC0C0 << 16);
    // 0x80800B7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800B80: nop

    // 0x80800B84: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x80800B88: nop

    // 0x80800B8C: bc1tl       L_80800B18
    if (c1cs) {
        // 0x80800B90: addiu       $a0, $zero, -0xC
        ctx->r4 = ADD32(0, -0XC);
            goto L_80800B18;
    }
    goto skip_9;
    // 0x80800B90: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    skip_9:
    // 0x80800B94: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80800B98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800B9C: nop

    // 0x80800BA0: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800BA4: nop

    // 0x80800BA8: bc1tl       L_80800B18
    if (c1cs) {
        // 0x80800BAC: addiu       $a0, $zero, -0xC
        ctx->r4 = ADD32(0, -0XC);
            goto L_80800B18;
    }
    goto skip_10;
    // 0x80800BAC: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    skip_10:
    // 0x80800BB0: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80800BB4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800BB8: nop

    // 0x80800BBC: c.eq.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl == ctx->f14.fl;
    // 0x80800BC0: nop

    // 0x80800BC4: bc1tl       L_80800B18
    if (c1cs) {
        // 0x80800BC8: addiu       $a0, $zero, -0xC
        ctx->r4 = ADD32(0, -0XC);
            goto L_80800B18;
    }
    goto skip_11;
    // 0x80800BC8: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    skip_11:
    // 0x80800BCC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80800BD0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800BD4: nop

    // 0x80800BD8: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x80800BDC: nop

    // 0x80800BE0: bc1tl       L_80800B18
    if (c1cs) {
        // 0x80800BE4: addiu       $a0, $zero, -0xC
        ctx->r4 = ADD32(0, -0XC);
            goto L_80800B18;
    }
    goto skip_12;
    // 0x80800BE4: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    skip_12:
    // 0x80800BE8: lwc1        $f2, 0x14C($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x80800BEC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80800BF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800BF4: c.lt.s      $f2, $f14
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f2.fl < ctx->f14.fl;
    // 0x80800BF8: nop

    // 0x80800BFC: bc1f        L_80800C0C
    if (!c1cs) {
        // 0x80800C00: nop
    
            goto L_80800C0C;
    }
    // 0x80800C00: nop

    // 0x80800C04: sub.s       $f8, $f2, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f14.fl;
    // 0x80800C08: sub.s       $f12, $f0, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f8.fl;
L_80800C0C:
    // 0x80800C0C: mul.s       $f4, $f12, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f10.fl);
    // 0x80800C10: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80800C14: mfc1        $a0, $f6
    ctx->r4 = (int32_t)ctx->f6.u32l;
    // 0x80800C18: jal         0x80027170
    // 0x80800C1C: nop

    func_80027170(rdram, ctx);
        goto after_6;
    // 0x80800C1C: nop

    after_6:
    // 0x80800C20: addu        $s0, $s1, $s2
    ctx->r16 = ADD32(ctx->r17, ctx->r18);
    // 0x80800C24: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800C28: jal         0x800C31DC
    // 0x80800C2C: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    func_800C31DC(rdram, ctx);
        goto after_7;
    // 0x80800C2C: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    after_7:
    // 0x80800C30: b           L_80800CD4
    // 0x80800C34: lh          $t7, 0x13A($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X13A);
        goto L_80800CD4;
    // 0x80800C34: lh          $t7, 0x13A($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X13A);
L_80800C38:
    // 0x80800C38: lwc1        $f18, 0x3DC8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3DC8));
    // 0x80800C3C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3DCC) << 16);
    // 0x80800C40: lwc1        $f8, 0x3DCC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3DCC));
    // 0x80800C44: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80800C48: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800C4C: sub.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x80800C50: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800C54: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3DD0) << 16);
    // 0x80800C58: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80800C5C: nop

    // 0x80800C60: bc1fl       L_80800C74
    if (!c1cs) {
        // 0x80800C64: mov.s       $f12, $f0
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
            goto L_80800C74;
    }
    goto skip_13;
    // 0x80800C64: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    skip_13:
    // 0x80800C68: b           L_80800C74
    // 0x80800C6C: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
        goto L_80800C74;
    // 0x80800C6C: mov.s       $f12, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    ctx->f12.fl = ctx->f18.fl;
    // 0x80800C70: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
L_80800C74:
    // 0x80800C74: c.le.s      $f16, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f16.fl <= ctx->f12.fl;
    // 0x80800C78: sub.s       $f0, $f2, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f10.fl;
    // 0x80800C7C: bc1fl       L_80800C8C
    if (!c1cs) {
        // 0x80800C80: c.lt.s      $f0, $f16
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
            goto L_80800C8C;
    }
    goto skip_14;
    // 0x80800C80: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    skip_14:
    // 0x80800C84: lwc1        $f12, 0x3DD0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3DD0));
    // 0x80800C88: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
L_80800C8C:
    // 0x80800C8C: nop

    // 0x80800C90: bc1fl       L_80800CA4
    if (!c1cs) {
        // 0x80800C94: mov.s       $f14, $f16
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
            goto L_80800CA4;
    }
    goto skip_15;
    // 0x80800C94: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
    skip_15:
    // 0x80800C98: b           L_80800CA4
    // 0x80800C9C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_80800CA4;
    // 0x80800C9C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x80800CA0: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
L_80800CA4:
    // 0x80800CA4: c.lt.s      $f18, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f18.fl < ctx->f14.fl;
    // 0x80800CA8: nop

    // 0x80800CAC: bc1t        L_80800CB8
    if (c1cs) {
        // 0x80800CB0: nop
    
            goto L_80800CB8;
    }
    // 0x80800CB0: nop

    // 0x80800CB4: mov.s       $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = ctx->f18.fl;
L_80800CB8:
    // 0x80800CB8: jal         0x800DC264
    // 0x80800CBC: nop

    func_800DC264(rdram, ctx);
        goto after_8;
    // 0x80800CBC: nop

    after_8:
    // 0x80800CC0: addu        $s0, $s1, $s2
    ctx->r16 = ADD32(ctx->r17, ctx->r18);
    // 0x80800CC4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800CC8: jal         0x800C31DC
    // 0x80800CCC: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    func_800C31DC(rdram, ctx);
        goto after_9;
    // 0x80800CCC: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    after_9:
    // 0x80800CD0: lh          $t7, 0x13A($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X13A);
L_80800CD4:
    // 0x80800CD4: lh          $t8, 0x172($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X172);
    // 0x80800CD8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80800CDC: bnel        $t7, $t8, L_80800DB8
    if (ctx->r15 != ctx->r24) {
        // 0x80800CE0: lh          $v1, 0x160($t6)
        ctx->r3 = MEM_H(ctx->r14, 0X160);
            goto L_80800DB8;
    }
    goto skip_16;
    // 0x80800CE0: lh          $v1, 0x160($t6)
    ctx->r3 = MEM_H(ctx->r14, 0X160);
    skip_16:
    // 0x80800CE4: lw          $a0, 0x130($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X130);
    // 0x80800CE8: jal         0x800006B4
    // 0x80800CEC: lw          $a1, 0x13C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X13C);
    func_808006B4_gczoombox(rdram, ctx);
        goto after_10;
    // 0x80800CEC: lw          $a1, 0x13C($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X13C);
    after_10:
    // 0x80800CF0: beq         $v0, $zero, L_80800D2C
    if (ctx->r2 == 0) {
        // 0x80800CF4: addiu       $a1, $s1, 0x134
        ctx->r5 = ADD32(ctx->r17, 0X134);
            goto L_80800D2C;
    }
    // 0x80800CF4: addiu       $a1, $s1, 0x134
    ctx->r5 = ADD32(ctx->r17, 0X134);
    // 0x80800CF8: jal         0x800EC370
    // 0x80800CFC: lw          $a0, 0x130($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X130);
    func_800EC370(rdram, ctx);
        goto after_11;
    // 0x80800CFC: lw          $a0, 0x130($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X130);
    after_11:
    // 0x80800D00: jal         0x80089788
    // 0x80800D04: lbu         $a0, 0x173($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X173);
    _suexpression_entrypoint_0(rdram, ctx);
        goto after_12;
    // 0x80800D04: lbu         $a0, 0x173($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X173);
    after_12:
    // 0x80800D08: lh          $t9, 0x136($s1)
    ctx->r25 = MEM_H(ctx->r17, 0X136);
    // 0x80800D0C: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80800D10: nop

    // 0x80800D14: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800D18: add.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl + ctx->f0.fl;
    // 0x80800D1C: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80800D20: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80800D24: nop

    // 0x80800D28: sh          $t1, 0x136($s1)
    MEM_H(0X136, ctx->r17) = ctx->r9;
L_80800D2C:
    // 0x80800D2C: lh          $t2, 0x134($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X134);
    // 0x80800D30: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80800D34: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80800D38: nop

    // 0x80800D3C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800D40: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    // 0x80800D44: lh          $t3, 0x136($s1)
    ctx->r11 = MEM_H(ctx->r17, 0X136);
    // 0x80800D48: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80800D4C: nop

    // 0x80800D50: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80800D54: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x80800D58: lh          $t4, 0x138($s1)
    ctx->r12 = MEM_H(ctx->r17, 0X138);
    // 0x80800D5C: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80800D60: nop

    // 0x80800D64: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800D68: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x80800D6C: lh          $v1, 0x160($t5)
    ctx->r3 = MEM_H(ctx->r13, 0X160);
    // 0x80800D70: addiu       $v0, $v1, -0x1770
    ctx->r2 = ADD32(ctx->r3, -0X1770);
    // 0x80800D74: bgez        $v0, L_80800D84
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80800D78: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800D84;
    }
    // 0x80800D78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800D7C: b           L_80800D84
    // 0x80800D80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_80800D84;
    // 0x80800D80: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80800D84:
    // 0x80800D84: bgez        $v1, L_80800D94
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80800D88: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80800D94;
    }
    // 0x80800D88: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800D8C: b           L_80800D98
    // 0x80800D90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_80800D98;
    // 0x80800D90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80800D94:
    // 0x80800D94: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80800D98:
    // 0x80800D98: jal         0x800DC214
    // 0x80800D9C: nop

    func_800DC214(rdram, ctx);
        goto after_13;
    // 0x80800D9C: nop

    after_13:
    // 0x80800DA0: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    // 0x80800DA4: jal         0x800C3058
    // 0x80800DA8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800C3058(rdram, ctx);
        goto after_14;
    // 0x80800DA8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_14:
    // 0x80800DAC: b           L_80800DF4
    // 0x80800DB0: nop

        goto L_80800DF4;
    // 0x80800DB0: nop

    // 0x80800DB4: lh          $v1, 0x160($t6)
    ctx->r3 = MEM_H(ctx->r14, 0X160);
L_80800DB8:
    // 0x80800DB8: addiu       $v0, $v1, -0x1770
    ctx->r2 = ADD32(ctx->r3, -0X1770);
    // 0x80800DBC: bgez        $v0, L_80800DCC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80800DC0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80800DCC;
    }
    // 0x80800DC0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800DC4: b           L_80800DCC
    // 0x80800DC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_80800DCC;
    // 0x80800DC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80800DCC:
    // 0x80800DCC: bgez        $v1, L_80800DDC
    if (SIGNED(ctx->r3) >= 0) {
        // 0x80800DD0: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80800DDC;
    }
    // 0x80800DD0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800DD4: b           L_80800DE0
    // 0x80800DD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_80800DE0;
    // 0x80800DD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80800DDC:
    // 0x80800DDC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80800DE0:
    // 0x80800DE0: jal         0x800DC214
    // 0x80800DE4: nop

    func_800DC214(rdram, ctx);
        goto after_15;
    // 0x80800DE4: nop

    after_15:
    // 0x80800DE8: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    // 0x80800DEC: jal         0x800C3058
    // 0x80800DF0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800C3058(rdram, ctx);
        goto after_16;
    // 0x80800DF0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_16:
L_80800DF4:
    // 0x80800DF4: jal         0x800C3BDC
    // 0x80800DF8: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    func_800C3BDC(rdram, ctx);
        goto after_17;
    // 0x80800DF8: lbu         $a0, 0x144($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X144);
    after_17:
    // 0x80800DFC: jal         0x800D52CC
    // 0x80800E00: lh          $a0, 0x172($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X172);
    func_800D52CC(rdram, ctx);
        goto after_18;
    // 0x80800E00: lh          $a0, 0x172($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X172);
    after_18:
    // 0x80800E04: jal         0x800D527C
    // 0x80800E08: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800D527C(rdram, ctx);
        goto after_19;
    // 0x80800E08: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_19:
L_80800E0C:
    // 0x80800E0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800E10:
    // 0x80800E10: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800E14: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800E18: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80800E1C: jr          $ra
    // 0x80800E20: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80800E20: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80800E24_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E24: andi        $t6, $a0, 0xFF
    ctx->r14 = ctx->r4 & 0XFF;
    // 0x80800E28: slti        $v0, $t6, 0x7F
    ctx->r2 = SIGNED(ctx->r14) < 0X7F ? 1 : 0;
    // 0x80800E2C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    // 0x80800E30: beq         $v0, $zero, L_80800E3C
    if (ctx->r2 == 0) {
        // 0x80800E34: sw          $a0, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r4;
            goto L_80800E3C;
    }
    // 0x80800E34: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x80800E38: slti        $v0, $t6, 0x88
    ctx->r2 = SIGNED(ctx->r14) < 0X88 ? 1 : 0;
L_80800E3C:
    // 0x80800E3C: jr          $ra
    // 0x80800E40: nop

    return;
    // 0x80800E40: nop

;}
RECOMP_FUNC void func_80800E44_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E44: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800E48: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800E4C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80800E50: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80800E54: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80800E58: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80800E5C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800E60: lh          $t6, 0x1AC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X1AC);
    // 0x80800E64: lbu         $t7, 0x1B4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1B4);
    // 0x80800E68: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80800E6C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80800E70: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800E74: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80800E78: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80800E7C: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80800E80: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80800E84: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80800E88: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80800E8C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80800E90: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80800E94: bgez        $t7, L_80800EA8
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80800E98: cvt.s.w     $f16, $f10
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
            goto L_80800EA8;
    }
    // 0x80800E98: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80800E9C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800EA0: nop

    // 0x80800EA4: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80800EA8:
    // 0x80800EA8: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80800EAC: lui         $s4, 0x0
    ctx->r20 = S32(RELOC_HI16(688, 0X3F3E) << 16);
    // 0x80800EB0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80800EB4: addiu       $s4, $s4, 0x3F3E
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(688, 0X3F3E));
    // 0x80800EB8: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80800EBC: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80800EC0: nop

    // 0x80800EC4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80800EC8: lbu         $t0, 0x1B5($s3)
    ctx->r8 = MEM_BU(ctx->r19, 0X1B5);
    // 0x80800ECC: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80800ED0: bgez        $t0, L_80800EE4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80800ED4: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_80800EE4;
    }
    // 0x80800ED4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80800ED8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800EDC: nop

    // 0x80800EE0: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_80800EE4:
    // 0x80800EE4: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80800EE8: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80800EEC: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80800EF0: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x80800EF4: nop

    // 0x80800EF8: sw          $t2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r10;
    // 0x80800EFC: lbu         $t3, 0x1B6($s3)
    ctx->r11 = MEM_BU(ctx->r19, 0X1B6);
    // 0x80800F00: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80800F04: bgez        $t3, L_80800F18
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80800F08: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80800F18;
    }
    // 0x80800F08: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80800F0C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80800F10: nop

    // 0x80800F14: add.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f18.fl;
L_80800F18:
    // 0x80800F18: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80800F1C: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80800F20: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x80800F24: nop

    // 0x80800F28: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
    // 0x80800F2C: sb          $zero, 0x0($s2)
    MEM_B(0X0, ctx->r18) = 0;
    // 0x80800F30: lbu         $t6, 0x0($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X0);
    // 0x80800F34: beql        $t6, $zero, L_80800FC0
    if (ctx->r14 == 0) {
        // 0x80800F38: sb          $zero, 0x0($s0)
        MEM_B(0X0, ctx->r16) = 0;
            goto L_80800FC0;
    }
    goto skip_0;
    // 0x80800F38: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    skip_0:
    // 0x80800F3C: lbu         $a0, 0x0($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X0);
L_80800F40:
    // 0x80800F40: jal         0x80000E24
    // 0x80800F44: nop

    func_80800E24_gczoombox(rdram, ctx);
        goto after_0;
    // 0x80800F44: nop

    after_0:
    // 0x80800F48: beq         $v0, $zero, L_80800FA0
    if (ctx->r2 == 0) {
        // 0x80800F4C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80800FA0;
    }
    // 0x80800F4C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800F50: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
    // 0x80800F54: lwc1        $f4, 0x1E8($s3)
    ctx->f4.u32l = MEM_W(ctx->r19, 0X1E8);
    // 0x80800F58: lbu         $t7, 0x0($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X0);
    // 0x80800F5C: or          $s0, $s2, $zero
    ctx->r16 = ctx->r18 | 0;
    // 0x80800F60: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80800F64: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80800F68: negu        $t9, $t8
    ctx->r25 = SUB32(0, ctx->r24);
    // 0x80800F6C: addu        $t0, $s4, $t9
    ctx->r8 = ADD32(ctx->r20, ctx->r25);
    // 0x80800F70: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80800F74: jal         0x80088990
    // 0x80800F78: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    _fxfontstring_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80800F78: lh          $a1, 0x0($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X0);
    after_1:
    // 0x80800F7C: lbu         $t2, 0x0($s2)
    ctx->r10 = MEM_BU(ctx->r18, 0X0);
    // 0x80800F80: beql        $t2, $zero, L_80800FB0
    if (ctx->r10 == 0) {
        // 0x80800F84: lbu         $a0, 0x1($s1)
        ctx->r4 = MEM_BU(ctx->r17, 0X1);
            goto L_80800FB0;
    }
    goto skip_1;
    // 0x80800F84: lbu         $a0, 0x1($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X1);
    skip_1:
    // 0x80800F88: lbu         $t3, 0x1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1);
L_80800F8C:
    // 0x80800F8C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800F90: bnel        $t3, $zero, L_80800F8C
    if (ctx->r11 != 0) {
        // 0x80800F94: lbu         $t3, 0x1($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X1);
            goto L_80800F8C;
    }
    goto skip_2;
    // 0x80800F94: lbu         $t3, 0x1($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1);
    skip_2:
    // 0x80800F98: b           L_80800FB0
    // 0x80800F9C: lbu         $a0, 0x1($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X1);
        goto L_80800FB0;
    // 0x80800F9C: lbu         $a0, 0x1($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X1);
L_80800FA0:
    // 0x80800FA0: lbu         $t4, 0x0($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X0);
    // 0x80800FA4: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800FA8: sb          $t4, -0x1($s0)
    MEM_B(-0X1, ctx->r16) = ctx->r12;
    // 0x80800FAC: lbu         $a0, 0x1($s1)
    ctx->r4 = MEM_BU(ctx->r17, 0X1);
L_80800FB0:
    // 0x80800FB0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80800FB4: bne         $a0, $zero, L_80800F40
    if (ctx->r4 != 0) {
        // 0x80800FB8: nop
    
            goto L_80800F40;
    }
    // 0x80800FB8: nop

    // 0x80800FBC: sb          $zero, 0x0($s0)
    MEM_B(0X0, ctx->r16) = 0;
L_80800FC0:
    // 0x80800FC0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800FC4: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80800FC8: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80800FCC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80800FD0: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800FD4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800FD8: jr          $ra
    // 0x80800FDC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80800FDC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80800FE0_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FE0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800FE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800FE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800FEC: lh          $t6, 0x1AC($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X1AC);
    // 0x80800FF0: lbu         $t7, 0x1B4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1B4);
    // 0x80800FF4: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x80800FF8: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80800FFC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80801000: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80801004: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80801008: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080100C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80801010: bgez        $t7, L_80801028
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80801014: div.s       $f0, $f6, $f8
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
            goto L_80801028;
    }
    // 0x80801014: div.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80801018: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8080101C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80801020: nop

    // 0x80801024: add.s       $f16, $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f16.fl + ctx->f18.fl;
L_80801028:
    // 0x80801028: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8080102C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80801030: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80801034: nop

    // 0x80801038: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8080103C: lbu         $t0, 0x1B5($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1B5);
    // 0x80801040: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x80801044: bgez        $t0, L_8080105C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80801048: cvt.s.w     $f10, $f8
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
            goto L_8080105C;
    }
    // 0x80801048: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8080104C: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80801050: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80801054: nop

    // 0x80801058: add.s       $f10, $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f10.fl + ctx->f18.fl;
L_8080105C:
    // 0x8080105C: mul.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f0.fl);
    // 0x80801060: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80801064: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x80801068: nop

    // 0x8080106C: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x80801070: lbu         $t3, 0x1B6($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1B6);
    // 0x80801074: mtc1        $t3, $f6
    ctx->f6.u32l = ctx->r11;
    // 0x80801078: bgez        $t3, L_80801090
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8080107C: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80801090;
    }
    // 0x8080107C: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80801080: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80801084: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80801088: nop

    // 0x8080108C: add.s       $f8, $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f18.fl;
L_80801090:
    // 0x80801090: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80801094: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80801098: mfc1        $t5, $f16
    ctx->r13 = (int32_t)ctx->f16.u32l;
    // 0x8080109C: jal         0x800B7A98
    // 0x808010A0: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    func_800B7A98(rdram, ctx);
        goto after_0;
    // 0x808010A0: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    after_0:
    // 0x808010A4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x808010A8: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x808010AC: jal         0x800B7B8C
    // 0x808010B0: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    func_800B7B8C(rdram, ctx);
        goto after_1;
    // 0x808010B0: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    after_1:
    // 0x808010B4: jal         0x800B7ADC
    // 0x808010B8: lh          $a0, 0x1BC($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X1BC);
    func_800B7ADC(rdram, ctx);
        goto after_2;
    // 0x808010B8: lh          $a0, 0x1BC($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X1BC);
    after_2:
    // 0x808010BC: lh          $t7, 0x1E6($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1E6);
    // 0x808010C0: bgezl       $t7, L_808010DC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x808010C4: lw          $t8, 0x1E4($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X1E4);
            goto L_808010DC;
    }
    goto skip_0;
    // 0x808010C4: lw          $t8, 0x1E4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1E4);
    skip_0:
    // 0x808010C8: jal         0x800B7B38
    // 0x808010CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800B7B38(rdram, ctx);
        goto after_3;
    // 0x808010CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x808010D0: b           L_808010F4
    // 0x808010D4: lh          $t1, 0x172($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X172);
        goto L_808010F4;
    // 0x808010D4: lh          $t1, 0x172($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X172);
    // 0x808010D8: lw          $t8, 0x1E4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1E4);
L_808010DC:
    // 0x808010DC: sll         $t0, $t8, 12
    ctx->r8 = S32(ctx->r24 << 12);
    // 0x808010E0: bgezl       $t0, L_808010F4
    if (SIGNED(ctx->r8) >= 0) {
        // 0x808010E4: lh          $t1, 0x172($s0)
        ctx->r9 = MEM_H(ctx->r16, 0X172);
            goto L_808010F4;
    }
    goto skip_1;
    // 0x808010E4: lh          $t1, 0x172($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X172);
    skip_1:
    // 0x808010E8: jal         0x800B7B38
    // 0x808010EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800B7B38(rdram, ctx);
        goto after_4;
    // 0x808010EC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x808010F0: lh          $t1, 0x172($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X172);
L_808010F4:
    // 0x808010F4: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x808010F8: bnel        $t1, $at, L_8080113C
    if (ctx->r9 != ctx->r1) {
        // 0x808010FC: lbu         $t5, 0x1E4($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X1E4);
            goto L_8080113C;
    }
    goto skip_2;
    // 0x808010FC: lbu         $t5, 0x1E4($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1E4);
    skip_2:
    // 0x80801100: lh          $t2, 0x1AE($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X1AE);
    // 0x80801104: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80801108: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080110C: lwc1        $f6, 0x1DC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x80801110: mtc1        $t2, $f8
    ctx->f8.u32l = ctx->r10;
    // 0x80801114: mul.s       $f18, $f4, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80801118: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8080111C: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x80801120: trunc.w.s   $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80801124: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x80801128: nop

    // 0x8080112C: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x80801130: b           L_8080125C
    // 0x80801134: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
        goto L_8080125C;
    // 0x80801134: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
    // 0x80801138: lbu         $t5, 0x1E4($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1E4);
L_8080113C:
    // 0x8080113C: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80801140: beql        $t6, $zero, L_808011D8
    if (ctx->r14 == 0) {
        // 0x80801144: lh          $t6, 0x1E6($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X1E6);
            goto L_808011D8;
    }
    goto skip_3;
    // 0x80801144: lh          $t6, 0x1E6($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1E6);
    skip_3:
    // 0x80801148: jal         0x800A8184
    // 0x8080114C: nop

    func_800A8184(rdram, ctx);
        goto after_5;
    // 0x8080114C: nop

    after_5:
    // 0x80801150: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80801154: bne         $v0, $at, L_80801198
    if (ctx->r2 != ctx->r1) {
        // 0x80801158: addiu       $t1, $zero, 0x130
        ctx->r9 = ADD32(0, 0X130);
            goto L_80801198;
    }
    // 0x80801158: addiu       $t1, $zero, 0x130
    ctx->r9 = ADD32(0, 0X130);
    // 0x8080115C: lui         $at, 0x4358
    ctx->r1 = S32(0X4358 << 16);
    // 0x80801160: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80801164: lwc1        $f8, 0x1DC($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x80801168: lh          $t7, 0x1AE($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1AE);
    // 0x8080116C: lwc1        $f18, 0x1F4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1F4);
    // 0x80801170: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80801174: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80801178: nop

    // 0x8080117C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80801180: mul.s       $f16, $f18, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80801184: sub.s       $f8, $f6, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80801188: trunc.w.s   $f18, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    ctx->f18.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x8080118C: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80801190: b           L_808011CC
    // 0x80801194: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
        goto L_808011CC;
    // 0x80801194: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_80801198:
    // 0x80801198: lh          $t0, 0x1AE($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X1AE);
    // 0x8080119C: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x808011A0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808011A4: lwc1        $f4, 0x1DC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x808011A8: subu        $t2, $t1, $t0
    ctx->r10 = SUB32(ctx->r9, ctx->r8);
    // 0x808011AC: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x808011B0: mul.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x808011B4: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x808011B8: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x808011BC: trunc.w.s   $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    ctx->f10.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x808011C0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x808011C4: nop

    // 0x808011C8: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_808011CC:
    // 0x808011CC: b           L_8080125C
    // 0x808011D0: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
        goto L_8080125C;
    // 0x808011D0: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
    // 0x808011D4: lh          $t6, 0x1E6($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X1E6);
L_808011D8:
    // 0x808011D8: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
    // 0x808011DC: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x808011E0: bgezl       $t6, L_80801228
    if (SIGNED(ctx->r14) >= 0) {
        // 0x808011E4: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_80801228;
    }
    goto skip_4;
    // 0x808011E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_4:
    // 0x808011E8: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x808011EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808011F0: lwc1        $f16, 0x1DC($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x808011F4: lh          $t7, 0x1AE($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1AE);
    // 0x808011F8: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x808011FC: mul.s       $f8, $f4, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x80801200: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x80801204: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80801208: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8080120C: add.s       $f18, $f8, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f6.fl;
    // 0x80801210: add.s       $f16, $f4, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80801214: trunc.w.s   $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80801218: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x8080121C: b           L_8080125C
    // 0x80801220: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
        goto L_8080125C;
    // 0x80801220: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80801224: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_80801228:
    // 0x80801228: lwc1        $f10, 0x1DC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x8080122C: lh          $t1, 0x1AE($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X1AE);
    // 0x80801230: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80801234: mul.s       $f4, $f6, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80801238: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8080123C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80801240: cvt.s.w     $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    ctx->f6.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80801244: add.s       $f16, $f4, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f18.fl;
    // 0x80801248: add.s       $f10, $f6, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x8080124C: trunc.w.s   $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80801250: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x80801254: nop

    // 0x80801258: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
L_8080125C:
    // 0x8080125C: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x80801260: bgez        $t4, L_808012D4
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80801264: sll         $t6, $v0, 14
        ctx->r14 = S32(ctx->r2 << 14);
            goto L_808012D4;
    }
    // 0x80801264: sll         $t6, $v0, 14
    ctx->r14 = S32(ctx->r2 << 14);
    // 0x80801268: bgez        $t6, L_8080129C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8080126C: sll         $t8, $v0, 12
        ctx->r24 = S32(ctx->r2 << 12);
            goto L_8080129C;
    }
    // 0x8080126C: sll         $t8, $v0, 12
    ctx->r24 = S32(ctx->r2 << 12);
    // 0x80801270: bgez        $t8, L_80801280
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80801274: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80801280;
    }
    // 0x80801274: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80801278: b           L_80801280
    // 0x8080127C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_80801280;
    // 0x8080127C: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_80801280:
    // 0x80801280: lh          $t9, 0x1B0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X1B0);
    // 0x80801284: bgez        $v0, L_80801294
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80801288: sra         $t1, $v0, 1
        ctx->r9 = S32(SIGNED(ctx->r2) >> 1);
            goto L_80801294;
    }
    // 0x80801288: sra         $t1, $v0, 1
    ctx->r9 = S32(SIGNED(ctx->r2) >> 1);
    // 0x8080128C: addiu       $at, $v0, 0x1
    ctx->r1 = ADD32(ctx->r2, 0X1);
    // 0x80801290: sra         $t1, $at, 1
    ctx->r9 = S32(SIGNED(ctx->r1) >> 1);
L_80801294:
    // 0x80801294: jal         0x800B7B2C
    // 0x80801298: subu        $a0, $t9, $t1
    ctx->r4 = SUB32(ctx->r25, ctx->r9);
    func_800B7B2C(rdram, ctx);
        goto after_6;
    // 0x80801298: subu        $a0, $t9, $t1
    ctx->r4 = SUB32(ctx->r25, ctx->r9);
    after_6:
L_8080129C:
    // 0x8080129C: addiu       $a3, $s0, 0x60
    ctx->r7 = ADD32(ctx->r16, 0X60);
    // 0x808012A0: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x808012A4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x808012A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012AC: jal         0x80000E44
    // 0x808012B0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_80800E44_gczoombox(rdram, ctx);
        goto after_7;
    // 0x808012B0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x808012B4: lwc1        $f18, 0x1A4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x808012B8: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x808012BC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808012C0: trunc.w.s   $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    ctx->f8.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x808012C4: mfc1        $a1, $f8
    ctx->r5 = (int32_t)ctx->f8.u32l;
    // 0x808012C8: jal         0x800B798C
    // 0x808012CC: nop

    func_800B798C(rdram, ctx);
        goto after_8;
    // 0x808012CC: nop

    after_8:
    // 0x808012D0: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
L_808012D4:
    // 0x808012D4: sll         $t3, $v0, 2
    ctx->r11 = S32(ctx->r2 << 2);
    // 0x808012D8: bgezl       $t3, L_80801324
    if (SIGNED(ctx->r11) >= 0) {
        // 0x808012DC: lb          $t6, 0x1E7($s0)
        ctx->r14 = MEM_B(ctx->r16, 0X1E7);
            goto L_80801324;
    }
    goto skip_5;
    // 0x808012DC: lb          $t6, 0x1E7($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X1E7);
    skip_5:
    // 0x808012E0: jal         0x800B7B2C
    // 0x808012E4: addiu       $a0, $zero, -0x7FFF
    ctx->r4 = ADD32(0, -0X7FFF);
    func_800B7B2C(rdram, ctx);
        goto after_9;
    // 0x808012E4: addiu       $a0, $zero, -0x7FFF
    ctx->r4 = ADD32(0, -0X7FFF);
    after_9:
    // 0x808012E8: addiu       $a3, $s0, 0x90
    ctx->r7 = ADD32(ctx->r16, 0X90);
    // 0x808012EC: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    // 0x808012F0: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x808012F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012F8: jal         0x80000E44
    // 0x808012FC: addiu       $a2, $s0, 0x30
    ctx->r6 = ADD32(ctx->r16, 0X30);
    func_80800E44_gczoombox(rdram, ctx);
        goto after_10;
    // 0x808012FC: addiu       $a2, $s0, 0x30
    ctx->r6 = ADD32(ctx->r16, 0X30);
    after_10:
    // 0x80801300: lwc1        $f6, 0x1A8($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x80801304: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80801308: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8080130C: trunc.w.s   $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    ctx->f16.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x80801310: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80801314: jal         0x800B798C
    // 0x80801318: nop

    func_800B798C(rdram, ctx);
        goto after_11;
    // 0x80801318: nop

    after_11:
    // 0x8080131C: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
    // 0x80801320: lb          $t6, 0x1E7($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X1E7);
L_80801324:
    // 0x80801324: sll         $t8, $v0, 30
    ctx->r24 = S32(ctx->r2 << 30);
    // 0x80801328: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8080132C: bgezl       $t6, L_80801348
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80801330: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_80801348;
    }
    goto skip_6;
    // 0x80801330: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_6:
    // 0x80801334: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80801338: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8080133C: b           L_8080134C
    // 0x80801340: nop

        goto L_8080134C;
    // 0x80801340: nop

    // 0x80801344: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_80801348:
    // 0x80801348: nop

L_8080134C:
    // 0x8080134C: bgez        $t8, L_80801364
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80801350: nop
    
            goto L_80801364;
    }
    // 0x80801350: nop

    // 0x80801354: jal         0x800885F8
    // 0x80801358: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    _glintrosyncDll_entrypoint_5(rdram, ctx);
        goto after_12;
    // 0x80801358: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_12:
    // 0x8080135C: b           L_80801370
    // 0x80801360: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
        goto L_80801370;
    // 0x80801360: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
L_80801364:
    // 0x80801364: jal         0x800D8FF8
    // 0x80801368: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_13;
    // 0x80801368: swc1        $f12, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f12.u32l;
    after_13:
    // 0x8080136C: lwc1        $f12, 0x28($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X28);
L_80801370:
    // 0x80801370: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80801374: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80801378: lwc1        $f10, 0x1E8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1E8);
    // 0x8080137C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80801380: mul.s       $f18, $f0, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80801384: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80801388: mul.s       $f8, $f18, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x8080138C: add.s       $f6, $f10, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80801390: swc1        $f6, 0x1E8($s0)
    MEM_W(0X1E8, ctx->r16) = ctx->f6.u32l;
    // 0x80801394: lwc1        $f2, 0x1E8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1E8);
    // 0x80801398: c.le.s      $f16, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f16.fl <= ctx->f2.fl;
    // 0x8080139C: nop

    // 0x808013A0: bc1fl       L_808013D8
    if (!c1cs) {
        // 0x808013A4: mtc1        $zero, $f18
        ctx->f18.u32l = 0;
            goto L_808013D8;
    }
    goto skip_7;
    // 0x808013A4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    skip_7:
    // 0x808013A8: lbu         $v0, 0x1E7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1E7);
    // 0x808013AC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3DD4) << 16);
    // 0x808013B0: lwc1        $f4, 0x3DD4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3DD4));
    // 0x808013B4: srl         $t9, $v0, 7
    ctx->r25 = S32(U32(ctx->r2) >> 7);
    // 0x808013B8: xori        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 ^ 0X1;
    // 0x808013BC: sll         $t3, $t0, 7
    ctx->r11 = S32(ctx->r8 << 7);
    // 0x808013C0: andi        $t4, $v0, 0xFF7F
    ctx->r12 = ctx->r2 & 0XFF7F;
    // 0x808013C4: or          $t5, $t3, $t4
    ctx->r13 = ctx->r11 | ctx->r12;
    // 0x808013C8: sb          $t5, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r13;
    // 0x808013CC: b           L_80801410
    // 0x808013D0: swc1        $f4, 0x1E8($s0)
    MEM_W(0X1E8, ctx->r16) = ctx->f4.u32l;
        goto L_80801410;
    // 0x808013D0: swc1        $f4, 0x1E8($s0)
    MEM_W(0X1E8, ctx->r16) = ctx->f4.u32l;
    // 0x808013D4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
L_808013D8:
    // 0x808013D8: nop

    // 0x808013DC: c.lt.s      $f2, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f2.fl < ctx->f18.fl;
    // 0x808013E0: nop

    // 0x808013E4: bc1fl       L_80801414
    if (!c1cs) {
        // 0x808013E8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80801414;
    }
    goto skip_8;
    // 0x808013E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_8:
    // 0x808013EC: lbu         $v0, 0x1E7($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X1E7);
    // 0x808013F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x808013F4: srl         $t6, $v0, 7
    ctx->r14 = S32(U32(ctx->r2) >> 7);
    // 0x808013F8: xori        $t8, $t6, 0x1
    ctx->r24 = ctx->r14 ^ 0X1;
    // 0x808013FC: sll         $t1, $t8, 7
    ctx->r9 = S32(ctx->r24 << 7);
    // 0x80801400: andi        $t0, $v0, 0xFF7F
    ctx->r8 = ctx->r2 & 0XFF7F;
    // 0x80801404: or          $t2, $t1, $t0
    ctx->r10 = ctx->r9 | ctx->r8;
    // 0x80801408: sb          $t2, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r10;
    // 0x8080140C: swc1        $f10, 0x1E8($s0)
    MEM_W(0X1E8, ctx->r16) = ctx->f10.u32l;
L_80801410:
    // 0x80801410: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80801414:
    // 0x80801414: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801418: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8080141C: jr          $ra
    // 0x80801420: nop

    return;
    // 0x80801420: nop

;}
RECOMP_FUNC void func_80801424_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801424: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801428: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080142C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801430: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801434: jal         0x80088B30
    // 0x80801438: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    _fxdialog_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80801438: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8080143C: lh          $a0, 0x1AE($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X1AE);
    // 0x80801440: jal         0x80088B38
    // 0x80801444: lh          $a1, 0x1B0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X1B0);
    _fxdialog_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80801444: lh          $a1, 0x1B0($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X1B0);
    after_1:
    // 0x80801448: jal         0x80088B40
    // 0x8080144C: lwc1        $f12, 0x1DC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X1DC);
    _fxdialog_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x8080144C: lwc1        $f12, 0x1DC($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X1DC);
    after_2:
    // 0x80801450: lbu         $t6, 0x1E4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1E4);
    // 0x80801454: lui         $at, 0x4358
    ctx->r1 = S32(0X4358 << 16);
    // 0x80801458: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080145C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80801460: beq         $t7, $zero, L_80801470
    if (ctx->r15 == 0) {
        // 0x80801464: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80801470;
    }
    // 0x80801464: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80801468: b           L_80801470
    // 0x8080146C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_80801470;
    // 0x8080146C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
L_80801470:
    // 0x80801470: lwc1        $f6, 0x1DC($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x80801474: lwc1        $f10, 0x1EC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1EC);
    // 0x80801478: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8080147C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80801480: lh          $a3, 0x1BC($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X1BC);
    // 0x80801484: mul.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80801488: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8080148C: jal         0x80088B48
    // 0x80801490: nop

    _fxdialog_entrypoint_3(rdram, ctx);
        goto after_3;
    // 0x80801490: nop

    after_3:
    // 0x80801494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801498: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080149C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808014A0: jr          $ra
    // 0x808014A4: nop

    return;
    // 0x808014A4: nop

;}
RECOMP_FUNC void func_808014A8_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014A8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808014AC: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x808014B0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x808014B4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x808014B8: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x808014BC: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x808014C0: lh          $t6, 0x172($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X172);
    // 0x808014C4: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x808014C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808014CC: beq         $t6, $at, L_80801558
    if (ctx->r14 == ctx->r1) {
        // 0x808014D0: lw          $t7, 0x38($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X38);
            goto L_80801558;
    }
    // 0x808014D0: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x808014D4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x808014D8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x808014DC: lwc1        $f0, 0x1DC($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1DC);
    // 0x808014E0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x808014E4: mtc1        $t8, $f10
    ctx->f10.u32l = ctx->r24;
    // 0x808014E8: lb          $a2, 0x1CF($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1CF);
    // 0x808014EC: lui         $at, 0x437F
    ctx->r1 = S32(0X437F << 16);
    // 0x808014F0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x808014F4: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x808014F8: mul.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f0.fl);
    // 0x808014FC: lw          $a1, 0x40($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X40);
    // 0x80801500: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80801504: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80801508: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x8080150C: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80801510: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80801514: lh          $t0, 0x1BC($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X1BC);
    // 0x80801518: lh          $t9, 0x1AC($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X1AC);
    // 0x8080151C: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80801520: mflo        $t1
    ctx->r9 = lo;
    // 0x80801524: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80801528: nop

    // 0x8080152C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80801530: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80801534: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80801538: trunc.w.s   $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x8080153C: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80801540: nop

    // 0x80801544: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80801548: lbu         $t4, 0x1E4($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1E4);
    // 0x8080154C: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80801550: jal         0x80088B50
    // 0x80801554: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    _fxdialog_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80801554: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    after_0:
L_80801558:
    // 0x80801558: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8080155C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80801560: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80801564: jr          $ra
    // 0x80801568: nop

    return;
    // 0x80801568: nop

;}
RECOMP_FUNC void func_8080156C_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080156C: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80801570: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801574: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801578: sw          $a1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r5;
    // 0x8080157C: lw          $t6, 0x1E4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1E4);
    // 0x80801580: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801584: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80801588: sll         $t8, $t6, 21
    ctx->r24 = S32(ctx->r14 << 21);
    // 0x8080158C: bltz        $t8, L_808015B0
    if (SIGNED(ctx->r24) < 0) {
        // 0x80801590: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_808015B0;
    }
    // 0x80801590: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80801594: jal         0x80015E80
    // 0x80801598: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80015E80(rdram, ctx);
        goto after_0;
    // 0x80801598: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x8080159C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x808015A0: jal         0x80015F28
    // 0x808015A4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80015F28(rdram, ctx);
        goto after_1;
    // 0x808015A4: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_1:
    // 0x808015A8: b           L_808015C8
    // 0x808015AC: lhu         $t9, 0x140($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X140);
        goto L_808015C8;
    // 0x808015AC: lhu         $t9, 0x140($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X140);
L_808015B0:
    // 0x808015B0: jal         0x80015ECC
    // 0x808015B4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_80015ECC(rdram, ctx);
        goto after_2;
    // 0x808015B4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x808015B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x808015BC: jal         0x80015F5C
    // 0x808015C0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80015F5C(rdram, ctx);
        goto after_3;
    // 0x808015C0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x808015C4: lhu         $t9, 0x140($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X140);
L_808015C8:
    // 0x808015C8: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x808015CC: beql        $t9, $zero, L_808018C0
    if (ctx->r25 == 0) {
        // 0x808015D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808018C0;
    }
    goto skip_0;
    // 0x808015D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808015D4: beql        $t0, $zero, L_80801670
    if (ctx->r8 == 0) {
        // 0x808015D8: lw          $v0, 0x1E4($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1E4);
            goto L_80801670;
    }
    goto skip_1;
    // 0x808015D8: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
    skip_1:
    // 0x808015DC: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
    // 0x808015E0: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x808015E4: sll         $t3, $t1, 19
    ctx->r11 = S32(ctx->r9 << 19);
    // 0x808015E8: bgezl       $t3, L_80801670
    if (SIGNED(ctx->r11) >= 0) {
        // 0x808015EC: lw          $v0, 0x1E4($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1E4);
            goto L_80801670;
    }
    goto skip_2;
    // 0x808015EC: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
    skip_2:
    // 0x808015F0: beq         $t4, $zero, L_8080166C
    if (ctx->r12 == 0) {
        // 0x808015F4: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_8080166C;
    }
    // 0x808015F4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x808015F8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808015FC: lwc1        $f6, 0x14C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x80801600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801604: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80801608: nop

    // 0x8080160C: bc1fl       L_80801628
    if (!c1cs) {
        // 0x80801610: lb          $t5, 0x1CF($s0)
        ctx->r13 = MEM_B(ctx->r16, 0X1CF);
            goto L_80801628;
    }
    goto skip_3;
    // 0x80801610: lb          $t5, 0x1CF($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X1CF);
    skip_3:
    // 0x80801614: jal         0x800009E4
    // 0x80801618: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_808009E4_gczoombox(rdram, ctx);
        goto after_4;
    // 0x80801618: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x8080161C: b           L_80801898
    // 0x80801620: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
        goto L_80801898;
    // 0x80801620: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
    // 0x80801624: lb          $t5, 0x1CF($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X1CF);
L_80801628:
    // 0x80801628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080162C: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x80801630: sb          $t6, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r14;
    // 0x80801634: lb          $t7, 0x1CF($s0)
    ctx->r15 = MEM_B(ctx->r16, 0X1CF);
    // 0x80801638: bgez        $t7, L_8080164C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8080163C: andi        $t8, $t7, 0x3
        ctx->r24 = ctx->r15 & 0X3;
            goto L_8080164C;
    }
    // 0x8080163C: andi        $t8, $t7, 0x3
    ctx->r24 = ctx->r15 & 0X3;
    // 0x80801640: beq         $t8, $zero, L_8080164C
    if (ctx->r24 == 0) {
        // 0x80801644: nop
    
            goto L_8080164C;
    }
    // 0x80801644: nop

    // 0x80801648: addiu       $t8, $t8, -0x4
    ctx->r24 = ADD32(ctx->r24, -0X4);
L_8080164C:
    // 0x8080164C: sb          $t8, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r24;
    // 0x80801650: lb          $t9, 0x1CF($s0)
    ctx->r25 = MEM_B(ctx->r16, 0X1CF);
    // 0x80801654: bnel        $t9, $zero, L_80801898
    if (ctx->r25 != 0) {
        // 0x80801658: lb          $v0, 0x1CF($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X1CF);
            goto L_80801898;
    }
    goto skip_4;
    // 0x80801658: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
    skip_4:
    // 0x8080165C: jal         0x800009E4
    // 0x80801660: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_808009E4_gczoombox(rdram, ctx);
        goto after_5;
    // 0x80801660: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80801664: b           L_80801898
    // 0x80801668: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
        goto L_80801898;
    // 0x80801668: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
L_8080166C:
    // 0x8080166C: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
L_80801670:
    // 0x80801670: lw          $t9, 0x54($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X54);
    // 0x80801674: sll         $v1, $v0, 9
    ctx->r3 = S32(ctx->r2 << 9);
    // 0x80801678: srl         $t0, $v1, 31
    ctx->r8 = S32(U32(ctx->r3) >> 31);
    // 0x8080167C: beq         $t0, $zero, L_80801708
    if (ctx->r8 == 0) {
        // 0x80801680: or          $v1, $t0, $zero
        ctx->r3 = ctx->r8 | 0;
            goto L_80801708;
    }
    // 0x80801680: or          $v1, $t0, $zero
    ctx->r3 = ctx->r8 | 0;
    // 0x80801684: sll         $t2, $v0, 10
    ctx->r10 = S32(ctx->r2 << 10);
    // 0x80801688: bgezl       $t2, L_808016D4
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8080168C: lb          $t2, 0x1CF($s0)
        ctx->r10 = MEM_B(ctx->r16, 0X1CF);
            goto L_808016D4;
    }
    goto skip_5;
    // 0x8080168C: lb          $t2, 0x1CF($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X1CF);
    skip_5:
    // 0x80801690: lb          $t3, 0x1CF($s0)
    ctx->r11 = MEM_B(ctx->r16, 0X1CF);
    // 0x80801694: lbu         $t6, 0x1D1($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1D1);
    // 0x80801698: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8080169C: sb          $t4, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r12;
    // 0x808016A0: lb          $t5, 0x1CF($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X1CF);
    // 0x808016A4: addiu       $t7, $t6, -0x4
    ctx->r15 = ADD32(ctx->r14, -0X4);
    // 0x808016A8: slt         $at, $t7, $t5
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x808016AC: bnel        $at, $zero, L_80801898
    if (ctx->r1 != 0) {
        // 0x808016B0: lb          $v0, 0x1CF($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X1CF);
            goto L_80801898;
    }
    goto skip_6;
    // 0x808016B0: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
    skip_6:
    // 0x808016B4: lbu         $t8, 0x1E5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1E5);
    // 0x808016B8: sb          $zero, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = 0;
    // 0x808016BC: andi        $t0, $t8, 0xFFDF
    ctx->r8 = ctx->r24 & 0XFFDF;
    // 0x808016C0: sb          $t0, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r8;
    // 0x808016C4: andi        $t1, $t0, 0xBF
    ctx->r9 = ctx->r8 & 0XBF;
    // 0x808016C8: b           L_80801894
    // 0x808016CC: sb          $t1, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r9;
        goto L_80801894;
    // 0x808016CC: sb          $t1, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r9;
    // 0x808016D0: lb          $t2, 0x1CF($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X1CF);
L_808016D4:
    // 0x808016D4: lbu         $t4, 0x1D1($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1D1);
    // 0x808016D8: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x808016DC: sb          $t3, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r11;
    // 0x808016E0: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
    // 0x808016E4: slt         $at, $v0, $t4
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x808016E8: bnel        $at, $zero, L_80801898
    if (ctx->r1 != 0) {
        // 0x808016EC: lb          $v0, 0x1CF($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X1CF);
            goto L_80801898;
    }
    goto skip_7;
    // 0x808016EC: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
    skip_7:
    // 0x808016F0: lbu         $t5, 0x1E5($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1E5);
    // 0x808016F4: addiu       $t8, $v0, -0x1
    ctx->r24 = ADD32(ctx->r2, -0X1);
    // 0x808016F8: sb          $t8, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r24;
    // 0x808016FC: ori         $t7, $t5, 0x20
    ctx->r15 = ctx->r13 | 0X20;
    // 0x80801700: b           L_80801894
    // 0x80801704: sb          $t7, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r15;
        goto L_80801894;
    // 0x80801704: sb          $t7, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r15;
L_80801708:
    // 0x80801708: beq         $t9, $zero, L_80801840
    if (ctx->r25 == 0) {
        // 0x8080170C: sll         $t1, $v0, 19
        ctx->r9 = S32(ctx->r2 << 19);
            goto L_80801840;
    }
    // 0x8080170C: sll         $t1, $v0, 19
    ctx->r9 = S32(ctx->r2 << 19);
    // 0x80801710: bgez        $t1, L_80801730
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80801714: lw          $t2, 0x2C($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X2C);
            goto L_80801730;
    }
    // 0x80801714: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80801718: beql        $t2, $zero, L_80801734
    if (ctx->r10 == 0) {
        // 0x8080171C: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_80801734;
    }
    goto skip_8;
    // 0x8080171C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    skip_8:
    // 0x80801720: jal         0x8001211C
    // 0x80801724: nop

    func_8001211C(rdram, ctx);
        goto after_6;
    // 0x80801724: nop

    after_6:
    // 0x80801728: andi        $t3, $v0, 0x1
    ctx->r11 = ctx->r2 & 0X1;
    // 0x8080172C: bne         $t3, $zero, L_808018BC
    if (ctx->r11 != 0) {
        // 0x80801730: lui         $at, 0xBF80
        ctx->r1 = S32(0XBF80 << 16);
            goto L_808018BC;
    }
L_80801730:
    // 0x80801730: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
L_80801734:
    // 0x80801734: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80801738: lwc1        $f10, 0x14C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X14C);
    // 0x8080173C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801740: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80801744: nop

    // 0x80801748: bc1fl       L_80801764
    if (!c1cs) {
        // 0x8080174C: lbu         $t4, 0x178($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X178);
            goto L_80801764;
    }
    goto skip_9;
    // 0x8080174C: lbu         $t4, 0x178($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X178);
    skip_9:
    // 0x80801750: jal         0x800009E4
    // 0x80801754: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_808009E4_gczoombox(rdram, ctx);
        goto after_7;
    // 0x80801754: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80801758: b           L_808017A0
    // 0x8080175C: lbu         $t8, 0x1E5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1E5);
        goto L_808017A0;
    // 0x8080175C: lbu         $t8, 0x1E5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1E5);
    // 0x80801760: lbu         $t4, 0x178($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X178);
L_80801764:
    // 0x80801764: beql        $t4, $zero, L_808017A0
    if (ctx->r12 == 0) {
        // 0x80801768: lbu         $t8, 0x1E5($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X1E5);
            goto L_808017A0;
    }
    goto skip_10;
    // 0x80801768: lbu         $t8, 0x1E5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1E5);
    skip_10:
    // 0x8080176C: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
    // 0x80801770: bnel        $v0, $zero, L_808017A0
    if (ctx->r2 != 0) {
        // 0x80801774: lbu         $t8, 0x1E5($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X1E5);
            goto L_808017A0;
    }
    goto skip_11;
    // 0x80801774: lbu         $t8, 0x1E5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1E5);
    skip_11:
    // 0x80801778: lbu         $t6, 0x1D0($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1D0);
    // 0x8080177C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801780: addu        $t5, $s0, $t6
    ctx->r13 = ADD32(ctx->r16, ctx->r14);
    // 0x80801784: lbu         $t7, 0xF0($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0XF0);
    // 0x80801788: slt         $at, $v0, $t7
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x8080178C: beql        $at, $zero, L_808017A0
    if (ctx->r1 == 0) {
        // 0x80801790: lbu         $t8, 0x1E5($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X1E5);
            goto L_808017A0;
    }
    goto skip_12;
    // 0x80801790: lbu         $t8, 0x1E5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1E5);
    skip_12:
    // 0x80801794: jal         0x800009E4
    // 0x80801798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808009E4_gczoombox(rdram, ctx);
        goto after_8;
    // 0x80801798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8080179C: lbu         $t8, 0x1E5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1E5);
L_808017A0:
    // 0x808017A0: lbu         $v1, 0x1D0($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1D0);
    // 0x808017A4: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
    // 0x808017A8: andi        $t0, $t8, 0xFFBF
    ctx->r8 = ctx->r24 & 0XFFBF;
    // 0x808017AC: sb          $t0, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r8;
    // 0x808017B0: andi        $t1, $t0, 0xDF
    ctx->r9 = ctx->r8 & 0XDF;
    // 0x808017B4: sb          $t1, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r9;
    // 0x808017B8: addu        $t2, $s0, $v1
    ctx->r10 = ADD32(ctx->r16, ctx->r3);
    // 0x808017BC: lbu         $a0, 0xF0($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0XF0);
    // 0x808017C0: bne         $v0, $a0, L_80801824
    if (ctx->r2 != ctx->r4) {
        // 0x808017C4: slt         $at, $v0, $a0
        ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
            goto L_80801824;
    }
    // 0x808017C4: slt         $at, $v0, $a0
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x808017C8: lbu         $t6, 0x1D2($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1D2);
    // 0x808017CC: addiu       $t3, $v1, 0x1
    ctx->r11 = ADD32(ctx->r3, 0X1);
    // 0x808017D0: andi        $t4, $t3, 0xFF
    ctx->r12 = ctx->r11 & 0XFF;
    // 0x808017D4: slt         $at, $t4, $t6
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r14) ? 1 : 0;
    // 0x808017D8: bne         $at, $zero, L_80801894
    if (ctx->r1 != 0) {
        // 0x808017DC: sb          $t3, 0x1D0($s0)
        MEM_B(0X1D0, ctx->r16) = ctx->r11;
            goto L_80801894;
    }
    // 0x808017DC: sb          $t3, 0x1D0($s0)
    MEM_B(0X1D0, ctx->r16) = ctx->r11;
    // 0x808017E0: andi        $t7, $t1, 0x7F
    ctx->r15 = ctx->r9 & 0X7F;
    // 0x808017E4: sb          $zero, 0x1D0($s0)
    MEM_B(0X1D0, ctx->r16) = 0;
    // 0x808017E8: jal         0x800DC1AC
    // 0x808017EC: sb          $t7, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r15;
    func_800DC1AC(rdram, ctx);
        goto after_9;
    // 0x808017EC: sb          $t7, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r15;
    after_9:
    // 0x808017F0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3DD8) << 16);
    // 0x808017F4: lwc1        $f16, 0x3DD8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3DD8));
    // 0x808017F8: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x808017FC: nop

    // 0x80801800: bc1fl       L_80801898
    if (!c1cs) {
        // 0x80801804: lb          $v0, 0x1CF($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X1CF);
            goto L_80801898;
    }
    goto skip_13;
    // 0x80801804: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
    skip_13:
    // 0x80801808: lbu         $t9, 0x1E5($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1E5);
    // 0x8080180C: lbu         $t1, 0x1D1($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1D1);
    // 0x80801810: ori         $t0, $t9, 0x40
    ctx->r8 = ctx->r25 | 0X40;
    // 0x80801814: addiu       $t2, $t1, -0x4
    ctx->r10 = ADD32(ctx->r9, -0X4);
    // 0x80801818: sb          $t0, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r8;
    // 0x8080181C: b           L_80801894
    // 0x80801820: sb          $t2, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r10;
        goto L_80801894;
    // 0x80801820: sb          $t2, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r10;
L_80801824:
    // 0x80801824: beq         $at, $zero, L_80801838
    if (ctx->r1 == 0) {
        // 0x80801828: addiu       $t4, $v0, -0x1
        ctx->r12 = ADD32(ctx->r2, -0X1);
            goto L_80801838;
    }
    // 0x80801828: addiu       $t4, $v0, -0x1
    ctx->r12 = ADD32(ctx->r2, -0X1);
    // 0x8080182C: addiu       $t3, $v0, 0x1
    ctx->r11 = ADD32(ctx->r2, 0X1);
    // 0x80801830: b           L_80801894
    // 0x80801834: sb          $t3, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r11;
        goto L_80801894;
    // 0x80801834: sb          $t3, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r11;
L_80801838:
    // 0x80801838: b           L_80801894
    // 0x8080183C: sb          $t4, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r12;
        goto L_80801894;
    // 0x8080183C: sb          $t4, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r12;
L_80801840:
    // 0x80801840: bnel        $v1, $zero, L_80801898
    if (ctx->r3 != 0) {
        // 0x80801844: lb          $v0, 0x1CF($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X1CF);
            goto L_80801898;
    }
    goto skip_14;
    // 0x80801844: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
    skip_14:
    // 0x80801848: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
    // 0x8080184C: blez        $v0, L_8080185C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80801850: addiu       $t6, $v0, -0x1
        ctx->r14 = ADD32(ctx->r2, -0X1);
            goto L_8080185C;
    }
    // 0x80801850: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80801854: b           L_80801894
    // 0x80801858: sb          $t6, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r14;
        goto L_80801894;
    // 0x80801858: sb          $t6, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r14;
L_8080185C:
    // 0x8080185C: jal         0x800DC1AC
    // 0x80801860: nop

    func_800DC1AC(rdram, ctx);
        goto after_10;
    // 0x80801860: nop

    after_10:
    // 0x80801864: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3DDC) << 16);
    // 0x80801868: lwc1        $f18, 0x3DDC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3DDC));
    // 0x8080186C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80801870: nop

    // 0x80801874: bc1fl       L_80801898
    if (!c1cs) {
        // 0x80801878: lb          $v0, 0x1CF($s0)
        ctx->r2 = MEM_B(ctx->r16, 0X1CF);
            goto L_80801898;
    }
    goto skip_15;
    // 0x80801878: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
    skip_15:
    // 0x8080187C: lbu         $t7, 0x1E5($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1E5);
    // 0x80801880: lbu         $t9, 0x1D1($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1D1);
    // 0x80801884: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x80801888: addiu       $t0, $t9, -0x4
    ctx->r8 = ADD32(ctx->r25, -0X4);
    // 0x8080188C: sb          $t8, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r24;
    // 0x80801890: sb          $t0, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r8;
L_80801894:
    // 0x80801894: lb          $v0, 0x1CF($s0)
    ctx->r2 = MEM_B(ctx->r16, 0X1CF);
L_80801898:
    // 0x80801898: bgezl       $v0, L_808018AC
    if (SIGNED(ctx->r2) >= 0) {
        // 0x8080189C: lbu         $v1, 0x1D1($s0)
        ctx->r3 = MEM_BU(ctx->r16, 0X1D1);
            goto L_808018AC;
    }
    goto skip_16;
    // 0x8080189C: lbu         $v1, 0x1D1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1D1);
    skip_16:
    // 0x808018A0: b           L_808018BC
    // 0x808018A4: sb          $zero, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = 0;
        goto L_808018BC;
    // 0x808018A4: sb          $zero, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = 0;
    // 0x808018A8: lbu         $v1, 0x1D1($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X1D1);
L_808018AC:
    // 0x808018AC: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x808018B0: bne         $at, $zero, L_808018BC
    if (ctx->r1 != 0) {
        // 0x808018B4: addiu       $t1, $v1, -0x1
        ctx->r9 = ADD32(ctx->r3, -0X1);
            goto L_808018BC;
    }
    // 0x808018B4: addiu       $t1, $v1, -0x1
    ctx->r9 = ADD32(ctx->r3, -0X1);
    // 0x808018B8: sb          $t1, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r9;
L_808018BC:
    // 0x808018BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808018C0:
    // 0x808018C0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808018C4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x808018C8: jr          $ra
    // 0x808018CC: nop

    return;
    // 0x808018CC: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808018D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808018D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808018D8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808018DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808018E0: beq         $a0, $zero, L_80801B1C
    if (ctx->r4 == 0) {
        // 0x808018E4: sw          $a1, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r5;
            goto L_80801B1C;
    }
    // 0x808018E4: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x808018E8: lw          $v1, 0x1E4($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1E4);
    // 0x808018EC: sll         $t7, $v1, 3
    ctx->r15 = S32(ctx->r3 << 3);
    // 0x808018F0: bgezl       $t7, L_80801B20
    if (SIGNED(ctx->r15) >= 0) {
        // 0x808018F4: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80801B20;
    }
    goto skip_0;
    // 0x808018F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x808018F8: lbu         $t8, 0x171($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X171);
    // 0x808018FC: sll         $t0, $v1, 25
    ctx->r8 = S32(ctx->r3 << 25);
    // 0x80801900: beql        $t8, $zero, L_80801B20
    if (ctx->r24 == 0) {
        // 0x80801904: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80801B20;
    }
    goto skip_1;
    // 0x80801904: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x80801908: bgez        $t0, L_8080191C
    if (SIGNED(ctx->r8) >= 0) {
        // 0x8080190C: addiu       $t2, $zero, 0x80
        ctx->r10 = ADD32(0, 0X80);
            goto L_8080191C;
    }
    // 0x8080190C: addiu       $t2, $zero, 0x80
    ctx->r10 = ADD32(0, 0X80);
    // 0x80801910: addiu       $t1, $zero, 0xAA
    ctx->r9 = ADD32(0, 0XAA);
    // 0x80801914: b           L_80801920
    // 0x80801918: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
        goto L_80801920;
    // 0x80801918: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_8080191C:
    // 0x8080191C: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_80801920:
    // 0x80801920: jal         0x80000FE0
    // 0x80801924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800FE0_gczoombox(rdram, ctx);
        goto after_0;
    // 0x80801924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80801928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080192C: jal         0x80001424
    // 0x80801930: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_80801424_gczoombox(rdram, ctx);
        goto after_1;
    // 0x80801930: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_1:
    // 0x80801934: lbu         $t3, 0x176($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X176);
    // 0x80801938: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080193C: beql        $t3, $at, L_80801964
    if (ctx->r11 == ctx->r1) {
        // 0x80801940: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801964;
    }
    goto skip_2;
    // 0x80801940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80801944: jal         0x800A819C
    // 0x80801948: nop

    func_800A819C(rdram, ctx);
        goto after_2;
    // 0x80801948: nop

    after_2:
    // 0x8080194C: bnel        $v0, $zero, L_80801978
    if (ctx->r2 != 0) {
        // 0x80801950: lbu         $a1, 0x1E5($s0)
        ctx->r5 = MEM_BU(ctx->r16, 0X1E5);
            goto L_80801978;
    }
    goto skip_3;
    // 0x80801950: lbu         $a1, 0x1E5($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1E5);
    skip_3:
    // 0x80801954: jal         0x800DA298
    // 0x80801958: addiu       $a0, $zero, 0x650
    ctx->r4 = ADD32(0, 0X650);
    func_800DA298(rdram, ctx);
        goto after_3;
    // 0x80801958: addiu       $a0, $zero, 0x650
    ctx->r4 = ADD32(0, 0X650);
    after_3:
    // 0x8080195C: bne         $v0, $zero, L_80801974
    if (ctx->r2 != 0) {
        // 0x80801960: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801974;
    }
    // 0x80801960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801964:
    // 0x80801964: jal         0x8000156C
    // 0x80801968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8080156C_gczoombox(rdram, ctx);
        goto after_4;
    // 0x80801968: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x8080196C: b           L_8080198C
    // 0x80801970: lw          $t5, 0x1E4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1E4);
        goto L_8080198C;
    // 0x80801970: lw          $t5, 0x1E4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1E4);
L_80801974:
    // 0x80801974: lbu         $a1, 0x1E5($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X1E5);
L_80801978:
    // 0x80801978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080197C: srl         $t4, $a1, 7
    ctx->r12 = S32(U32(ctx->r5) >> 7);
    // 0x80801980: jal         0x8000156C
    // 0x80801984: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_8080156C_gczoombox(rdram, ctx);
        goto after_5;
    // 0x80801984: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_5:
    // 0x80801988: lw          $t5, 0x1E4($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1E4);
L_8080198C:
    // 0x8080198C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801990: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80801994: sll         $t7, $t5, 18
    ctx->r15 = S32(ctx->r13 << 18);
    // 0x80801998: bltz        $t7, L_808019C8
    if (SIGNED(ctx->r15) < 0) {
        // 0x8080199C: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_808019C8;
    }
    // 0x8080199C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808019A0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808019A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808019A8: lhu         $t8, 0x140($s0)
    ctx->r24 = MEM_HU(ctx->r16, 0X140);
    // 0x808019AC: lb          $a2, 0x1B7($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1B7);
    // 0x808019B0: lb          $a3, 0x1B8($s0)
    ctx->r7 = MEM_B(ctx->r16, 0X1B8);
    // 0x808019B4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    // 0x808019B8: jal         0x800014A8
    // 0x808019BC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_808014A8_gczoombox(rdram, ctx);
        goto after_6;
    // 0x808019BC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_6:
    // 0x808019C0: b           L_80801A1C
    // 0x808019C4: lw          $v1, 0x1E4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1E4);
        goto L_80801A1C;
    // 0x808019C4: lw          $v1, 0x1E4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1E4);
L_808019C8:
    // 0x808019C8: lhu         $t9, 0x140($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X140);
    // 0x808019CC: lb          $a2, 0x1B7($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1B7);
    // 0x808019D0: lb          $a3, 0x1B8($s0)
    ctx->r7 = MEM_B(ctx->r16, 0X1B8);
    // 0x808019D4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x808019D8: lwc1        $f8, 0x1C0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1C0);
    // 0x808019DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808019E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019E4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x808019E8: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x808019EC: jal         0x800014A8
    // 0x808019F0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_808014A8_gczoombox(rdram, ctx);
        goto after_7;
    // 0x808019F0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x808019F4: lhu         $t0, 0x142($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X142);
    // 0x808019F8: lb          $a2, 0x1B9($s0)
    ctx->r6 = MEM_B(ctx->r16, 0X1B9);
    // 0x808019FC: lb          $a3, 0x1BA($s0)
    ctx->r7 = MEM_B(ctx->r16, 0X1BA);
    // 0x80801A00: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80801A04: lwc1        $f16, 0x1C0($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1C0);
    // 0x80801A08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A0C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80801A10: jal         0x800014A8
    // 0x80801A14: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_808014A8_gczoombox(rdram, ctx);
        goto after_8;
    // 0x80801A14: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x80801A18: lw          $v1, 0x1E4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1E4);
L_80801A1C:
    // 0x80801A1C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80801A20: sll         $a0, $v1, 13
    ctx->r4 = S32(ctx->r3 << 13);
    // 0x80801A24: srl         $t1, $a0, 31
    ctx->r9 = S32(U32(ctx->r4) >> 31);
    // 0x80801A28: bne         $t1, $zero, L_80801A80
    if (ctx->r9 != 0) {
        // 0x80801A2C: or          $a0, $t1, $zero
        ctx->r4 = ctx->r9 | 0;
            goto L_80801A80;
    }
    // 0x80801A2C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80801A30: lh          $v0, 0x1AC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1AC);
    // 0x80801A34: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80801A38: beq         $at, $zero, L_80801A80
    if (ctx->r1 == 0) {
        // 0x80801A3C: addiu       $t2, $v0, -0x10
        ctx->r10 = ADD32(ctx->r2, -0X10);
            goto L_80801A80;
    }
    // 0x80801A3C: addiu       $t2, $v0, -0x10
    ctx->r10 = ADD32(ctx->r2, -0X10);
    // 0x80801A40: sh          $t2, 0x1AC($s0)
    MEM_H(0X1AC, ctx->r16) = ctx->r10;
    // 0x80801A44: lh          $v0, 0x1AC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1AC);
    // 0x80801A48: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80801A4C: beql        $at, $zero, L_80801A70
    if (ctx->r1 == 0) {
        // 0x80801A50: lw          $v1, 0x1E4($s0)
        ctx->r3 = MEM_W(ctx->r16, 0X1E4);
            goto L_80801A70;
    }
    goto skip_4;
    // 0x80801A50: lw          $v1, 0x1E4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1E4);
    skip_4:
    // 0x80801A54: lw          $v1, 0x1E4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1E4);
    // 0x80801A58: sh          $v0, 0x1AC($s0)
    MEM_H(0X1AC, ctx->r16) = ctx->r2;
    // 0x80801A5C: sll         $a0, $v1, 13
    ctx->r4 = S32(ctx->r3 << 13);
    // 0x80801A60: srl         $t3, $a0, 31
    ctx->r11 = S32(U32(ctx->r4) >> 31);
    // 0x80801A64: b           L_80801A80
    // 0x80801A68: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
        goto L_80801A80;
    // 0x80801A68: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x80801A6C: lw          $v1, 0x1E4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1E4);
L_80801A70:
    // 0x80801A70: sh          $a1, 0x1AC($s0)
    MEM_H(0X1AC, ctx->r16) = ctx->r5;
    // 0x80801A74: sll         $a0, $v1, 13
    ctx->r4 = S32(ctx->r3 << 13);
    // 0x80801A78: srl         $t4, $a0, 31
    ctx->r12 = S32(U32(ctx->r4) >> 31);
    // 0x80801A7C: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
L_80801A80:
    // 0x80801A80: beq         $a0, $zero, L_80801AF8
    if (ctx->r4 == 0) {
        // 0x80801A84: lh          $v0, 0x1AC($s0)
        ctx->r2 = MEM_H(ctx->r16, 0X1AC);
            goto L_80801AF8;
    }
    // 0x80801A84: lh          $v0, 0x1AC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1AC);
    // 0x80801A88: sll         $a0, $v1, 26
    ctx->r4 = S32(ctx->r3 << 26);
    // 0x80801A8C: srl         $t5, $a0, 31
    ctx->r13 = S32(U32(ctx->r4) >> 31);
    // 0x80801A90: beq         $t5, $zero, L_80801AA0
    if (ctx->r13 == 0) {
        // 0x80801A94: or          $a0, $t5, $zero
        ctx->r4 = ctx->r13 | 0;
            goto L_80801AA0;
    }
    // 0x80801A94: or          $a0, $t5, $zero
    ctx->r4 = ctx->r13 | 0;
    // 0x80801A98: b           L_80801AA4
    // 0x80801A9C: addiu       $v1, $zero, 0xAA
    ctx->r3 = ADD32(0, 0XAA);
        goto L_80801AA4;
    // 0x80801A9C: addiu       $v1, $zero, 0xAA
    ctx->r3 = ADD32(0, 0XAA);
L_80801AA0:
    // 0x80801AA0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_80801AA4:
    // 0x80801AA4: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80801AA8: beq         $at, $zero, L_80801AF8
    if (ctx->r1 == 0) {
        // 0x80801AAC: addiu       $t6, $v0, 0x10
        ctx->r14 = ADD32(ctx->r2, 0X10);
            goto L_80801AF8;
    }
    // 0x80801AAC: addiu       $t6, $v0, 0x10
    ctx->r14 = ADD32(ctx->r2, 0X10);
    // 0x80801AB0: beq         $a0, $zero, L_80801AC0
    if (ctx->r4 == 0) {
        // 0x80801AB4: sh          $t6, 0x1AC($s0)
        MEM_H(0X1AC, ctx->r16) = ctx->r14;
            goto L_80801AC0;
    }
    // 0x80801AB4: sh          $t6, 0x1AC($s0)
    MEM_H(0X1AC, ctx->r16) = ctx->r14;
    // 0x80801AB8: b           L_80801AC4
    // 0x80801ABC: addiu       $v1, $zero, 0xAA
    ctx->r3 = ADD32(0, 0XAA);
        goto L_80801AC4;
    // 0x80801ABC: addiu       $v1, $zero, 0xAA
    ctx->r3 = ADD32(0, 0XAA);
L_80801AC0:
    // 0x80801AC0: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
L_80801AC4:
    // 0x80801AC4: lh          $v0, 0x1AC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1AC);
    // 0x80801AC8: slt         $at, $v0, $v1
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x80801ACC: beq         $at, $zero, L_80801AE0
    if (ctx->r1 == 0) {
        // 0x80801AD0: nop
    
            goto L_80801AE0;
    }
    // 0x80801AD0: nop

    // 0x80801AD4: sh          $v0, 0x1AC($s0)
    MEM_H(0X1AC, ctx->r16) = ctx->r2;
    // 0x80801AD8: b           L_80801AF8
    // 0x80801ADC: lh          $v0, 0x1AC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1AC);
        goto L_80801AF8;
    // 0x80801ADC: lh          $v0, 0x1AC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1AC);
L_80801AE0:
    // 0x80801AE0: beq         $a0, $zero, L_80801AF0
    if (ctx->r4 == 0) {
        // 0x80801AE4: addiu       $v1, $zero, 0xFF
        ctx->r3 = ADD32(0, 0XFF);
            goto L_80801AF0;
    }
    // 0x80801AE4: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80801AE8: b           L_80801AF0
    // 0x80801AEC: addiu       $v1, $zero, 0xAA
    ctx->r3 = ADD32(0, 0XAA);
        goto L_80801AF0;
    // 0x80801AEC: addiu       $v1, $zero, 0xAA
    ctx->r3 = ADD32(0, 0XAA);
L_80801AF0:
    // 0x80801AF0: sh          $v1, 0x1AC($s0)
    MEM_H(0X1AC, ctx->r16) = ctx->r3;
    // 0x80801AF4: lh          $v0, 0x1AC($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1AC);
L_80801AF8:
    // 0x80801AF8: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x80801AFC: bnel        $v0, $at, L_80801B20
    if (ctx->r2 != ctx->r1) {
        // 0x80801B00: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80801B20;
    }
    goto skip_5;
    // 0x80801B00: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x80801B04: lw          $t7, 0x1E4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1E4);
    // 0x80801B08: addiu       $t0, $zero, 0xAA
    ctx->r8 = ADD32(0, 0XAA);
    // 0x80801B0C: sll         $t9, $t7, 26
    ctx->r25 = S32(ctx->r15 << 26);
    // 0x80801B10: bgezl       $t9, L_80801B20
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80801B14: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80801B20;
    }
    goto skip_6;
    // 0x80801B14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_6:
    // 0x80801B18: sh          $t0, 0x1AC($s0)
    MEM_H(0X1AC, ctx->r16) = ctx->r8;
L_80801B1C:
    // 0x80801B1C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80801B20:
    // 0x80801B20: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801B24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80801B28: jr          $ra
    // 0x80801B2C: nop

    return;
    // 0x80801B2C: nop

;}
RECOMP_FUNC void func_80801B30_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801B38: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80801B3C: sb          $t6, 0x171($a0)
    MEM_B(0X171, ctx->r4) = ctx->r14;
    // 0x80801B40: jal         0x80003410
    // 0x80801B44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    gczoombox_entrypoint_15(rdram, ctx);
        goto after_0;
    // 0x80801B44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801B48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801B4C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80801B50: lbu         $t7, 0x1E4($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1E4);
    // 0x80801B54: swc1        $f4, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->f4.u32l;
    // 0x80801B58: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80801B5C: beql        $t8, $zero, L_80801B78
    if (ctx->r24 == 0) {
        // 0x80801B60: lh          $t1, 0x1B2($a0)
        ctx->r9 = MEM_H(ctx->r4, 0X1B2);
            goto L_80801B78;
    }
    goto skip_0;
    // 0x80801B60: lh          $t1, 0x1B2($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X1B2);
    skip_0:
    // 0x80801B64: lh          $t9, 0x1B2($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X1B2);
    // 0x80801B68: addiu       $t0, $t9, 0x8C
    ctx->r8 = ADD32(ctx->r25, 0X8C);
    // 0x80801B6C: b           L_80801B80
    // 0x80801B70: sh          $t0, 0x1AE($a0)
    MEM_H(0X1AE, ctx->r4) = ctx->r8;
        goto L_80801B80;
    // 0x80801B70: sh          $t0, 0x1AE($a0)
    MEM_H(0X1AE, ctx->r4) = ctx->r8;
    // 0x80801B74: lh          $t1, 0x1B2($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X1B2);
L_80801B78:
    // 0x80801B78: addiu       $t2, $t1, -0x8C
    ctx->r10 = ADD32(ctx->r9, -0X8C);
    // 0x80801B7C: sh          $t2, 0x1AE($a0)
    MEM_H(0X1AE, ctx->r4) = ctx->r10;
L_80801B80:
    // 0x80801B80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801B84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801B88: jr          $ra
    // 0x80801B8C: nop

    return;
    // 0x80801B8C: nop

;}
RECOMP_FUNC void func_80801B90_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801B90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801B94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801B98: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80801B9C: sb          $t6, 0x171($a0)
    MEM_B(0X171, ctx->r4) = ctx->r14;
    // 0x80801BA0: jal         0x80003420
    // 0x80801BA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    gczoombox_entrypoint_16(rdram, ctx);
        goto after_0;
    // 0x80801BA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801BA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801BAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80801BB0: nop

    // 0x80801BB4: swc1        $f4, 0x1E0($a0)
    MEM_W(0X1E0, ctx->r4) = ctx->f4.u32l;
    // 0x80801BB8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801BBC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801BC0: jr          $ra
    // 0x80801BC4: nop

    return;
    // 0x80801BC4: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801BC8: jr          $ra
    // 0x80801BCC: lbu         $v0, 0x170($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X170);
    return;
    // 0x80801BCC: lbu         $v0, 0x170($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X170);
;}
RECOMP_FUNC void func_80801BD0_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801BD0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801BD4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801BD8: lbu         $t6, 0x170($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X170);
    // 0x80801BDC: beql        $a1, $t6, L_80801C00
    if (ctx->r5 == ctx->r14) {
        // 0x80801BE0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80801C00;
    }
    goto skip_0;
    // 0x80801BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80801BE4: lw          $v0, 0x16C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X16C);
    // 0x80801BE8: sb          $a1, 0x170($a0)
    MEM_B(0X170, ctx->r4) = ctx->r5;
    // 0x80801BEC: beql        $v0, $zero, L_80801C00
    if (ctx->r2 == 0) {
        // 0x80801BF0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80801C00;
    }
    goto skip_1;
    // 0x80801BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80801BF4: jalr        $v0
    // 0x80801BF8: lh          $a0, 0x172($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X172);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80801BF8: lh          $a0, 0x172($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X172);
    after_0:
    // 0x80801BFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801C00:
    // 0x80801C00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801C04: jr          $ra
    // 0x80801C08: nop

    return;
    // 0x80801C08: nop

;}
RECOMP_FUNC void func_80801C0C_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801C0C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80801C10: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80801C14: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80801C18: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80801C1C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80801C20: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80801C24: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80801C28: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80801C2C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80801C30: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80801C34: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80801C38: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80801C3C: lui         $at, 0x4358
    ctx->r1 = S32(0X4358 << 16);
    // 0x80801C40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80801C44: lwc1        $f0, 0x1DC($a0)
    ctx->f0.u32l = MEM_W(ctx->r4, 0X1DC);
    // 0x80801C48: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80801C4C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80801C50: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80801C54: lw          $t8, 0x1E4($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X1E4);
    // 0x80801C58: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80801C5C: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x80801C60: sll         $t0, $t8, 12
    ctx->r8 = S32(ctx->r24 << 12);
    // 0x80801C64: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80801C68: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80801C6C: addiu       $s3, $zero, 0x20
    ctx->r19 = ADD32(0, 0X20);
    // 0x80801C70: addiu       $s5, $zero, 0xFD
    ctx->r21 = ADD32(0, 0XFD);
    // 0x80801C74: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x80801C78: sub.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80801C7C: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80801C80: mfc1        $s7, $f18
    ctx->r23 = (int32_t)ctx->f18.u32l;
    // 0x80801C84: bgezl       $t0, L_80801C98
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80801C88: lh          $t3, 0x1E6($t1)
        ctx->r11 = MEM_H(ctx->r9, 0X1E6);
            goto L_80801C98;
    }
    goto skip_0;
    // 0x80801C88: lh          $t3, 0x1E6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X1E6);
    skip_0:
    // 0x80801C8C: b           L_80801CB0
    // 0x80801C90: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
        goto L_80801CB0;
    // 0x80801C90: addiu       $s6, $zero, 0x2
    ctx->r22 = ADD32(0, 0X2);
    // 0x80801C94: lh          $t3, 0x1E6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X1E6);
L_80801C98:
    // 0x80801C98: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80801C9C: bgez        $t3, L_80801CAC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80801CA0: nop
    
            goto L_80801CAC;
    }
    // 0x80801CA0: nop

    // 0x80801CA4: b           L_80801CAC
    // 0x80801CA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80801CAC;
    // 0x80801CA8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80801CAC:
    // 0x80801CAC: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
L_80801CB0:
    // 0x80801CB0: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x80801CB4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80801CB8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80801CBC: beq         $t5, $zero, L_80801D44
    if (ctx->r13 == 0) {
        // 0x80801CC0: nop
    
            goto L_80801D44;
    }
    // 0x80801CC0: nop

    // 0x80801CC4: lbu         $a0, 0x0($t4)
    ctx->r4 = MEM_BU(ctx->r12, 0X0);
L_80801CC8:
    // 0x80801CC8: bne         $s5, $a0, L_80801CDC
    if (ctx->r21 != ctx->r4) {
        // 0x80801CCC: nop
    
            goto L_80801CDC;
    }
    // 0x80801CCC: nop

    // 0x80801CD0: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80801CD4: b           L_80801D30
    // 0x80801CD8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
        goto L_80801D30;
    // 0x80801CD8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80801CDC:
    // 0x80801CDC: jal         0x80000E24
    // 0x80801CE0: nop

    func_80800E24_gczoombox(rdram, ctx);
        goto after_0;
    // 0x80801CE0: nop

    after_0:
    // 0x80801CE4: beq         $v0, $zero, L_80801CF4
    if (ctx->r2 == 0) {
        // 0x80801CE8: or          $a0, $s6, $zero
        ctx->r4 = ctx->r22 | 0;
            goto L_80801CF4;
    }
    // 0x80801CE8: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80801CEC: b           L_80801D00
    // 0x80801CF0: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
        goto L_80801D00;
    // 0x80801CF0: addiu       $v1, $zero, 0x18
    ctx->r3 = ADD32(0, 0X18);
L_80801CF4:
    // 0x80801CF4: jal         0x800D36C4
    // 0x80801CF8: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    func_800D36C4(rdram, ctx);
        goto after_1;
    // 0x80801CF8: lbu         $a1, 0x0($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X0);
    after_1:
    // 0x80801CFC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80801D00:
    // 0x80801D00: addu        $s2, $s2, $v1
    ctx->r18 = ADD32(ctx->r18, ctx->r3);
    // 0x80801D04: slt         $at, $s7, $s2
    ctx->r1 = SIGNED(ctx->r23) < SIGNED(ctx->r18) ? 1 : 0;
    // 0x80801D08: beql        $at, $zero, L_80801D34
    if (ctx->r1 == 0) {
        // 0x80801D0C: lbu         $a0, 0x1($s0)
        ctx->r4 = MEM_BU(ctx->r16, 0X1);
            goto L_80801D34;
    }
    goto skip_1;
    // 0x80801D0C: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    skip_1:
    // 0x80801D10: bnel        $s4, $zero, L_80801D20
    if (ctx->r20 != 0) {
        // 0x80801D14: lbu         $t7, 0x0($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X0);
            goto L_80801D20;
    }
    goto skip_2;
    // 0x80801D14: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
    skip_2:
    // 0x80801D18: or          $s4, $s1, $zero
    ctx->r20 = ctx->r17 | 0;
    // 0x80801D1C: lbu         $t7, 0x0($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X0);
L_80801D20:
    // 0x80801D20: bnel        $s3, $t7, L_80801D34
    if (ctx->r19 != ctx->r15) {
        // 0x80801D24: lbu         $a0, 0x1($s0)
        ctx->r4 = MEM_BU(ctx->r16, 0X1);
            goto L_80801D34;
    }
    goto skip_3;
    // 0x80801D24: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
    skip_3:
    // 0x80801D28: b           L_80801D44
    // 0x80801D2C: subu        $s2, $s2, $v1
    ctx->r18 = SUB32(ctx->r18, ctx->r3);
        goto L_80801D44;
    // 0x80801D2C: subu        $s2, $s2, $v1
    ctx->r18 = SUB32(ctx->r18, ctx->r3);
L_80801D30:
    // 0x80801D30: lbu         $a0, 0x1($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1);
L_80801D34:
    // 0x80801D34: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80801D38: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80801D3C: bne         $a0, $zero, L_80801CC8
    if (ctx->r4 != 0) {
        // 0x80801D40: nop
    
            goto L_80801CC8;
    }
    // 0x80801D40: nop

L_80801D44:
    // 0x80801D44: beq         $s4, $zero, L_80801DC4
    if (ctx->r20 == 0) {
        // 0x80801D48: addiu       $s3, $zero, 0x20
        ctx->r19 = ADD32(0, 0X20);
            goto L_80801DC4;
    }
    // 0x80801D48: addiu       $s3, $zero, 0x20
    ctx->r19 = ADD32(0, 0X20);
    // 0x80801D4C: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80801D50: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80801D54: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80801D58: lwc1        $f10, 0x1DC($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X1DC);
    // 0x80801D5C: subu        $t6, $s2, $s7
    ctx->r14 = SUB32(ctx->r18, ctx->r23);
    // 0x80801D60: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80801D64: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80801D68: cvt.s.w     $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    ctx->f8.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80801D6C: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x80801D70: nop

    // 0x80801D74: bc1tl       L_80801DC8
    if (c1cs) {
        // 0x80801D78: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80801DC8;
    }
    goto skip_4;
    // 0x80801D78: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_4:
    // 0x80801D7C: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    // 0x80801D80: blez        $s1, L_80801DB0
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80801D84: lw          $t9, 0x3C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X3C);
            goto L_80801DB0;
    }
    // 0x80801D84: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80801D88: addu        $s0, $t9, $s1
    ctx->r16 = ADD32(ctx->r25, ctx->r17);
    // 0x80801D8C: lbu         $t0, 0x0($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X0);
    // 0x80801D90: beq         $s3, $t0, L_80801DB0
    if (ctx->r19 == ctx->r8) {
        // 0x80801D94: nop
    
            goto L_80801DB0;
    }
    // 0x80801D94: nop

    // 0x80801D98: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_80801D9C:
    // 0x80801D9C: blez        $s1, L_80801DB0
    if (SIGNED(ctx->r17) <= 0) {
        // 0x80801DA0: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_80801DB0;
    }
    // 0x80801DA0: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80801DA4: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x80801DA8: bnel        $s3, $t1, L_80801D9C
    if (ctx->r19 != ctx->r9) {
        // 0x80801DAC: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_80801D9C;
    }
    goto skip_5;
    // 0x80801DAC: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
    skip_5:
L_80801DB0:
    // 0x80801DB0: bnel        $s1, $zero, L_80801DC8
    if (ctx->r17 != 0) {
        // 0x80801DB4: lw          $ra, 0x34($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X34);
            goto L_80801DC8;
    }
    goto skip_6;
    // 0x80801DB4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    skip_6:
    // 0x80801DB8: jal         0x80000694
    // 0x80801DBC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    gczoombox_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80801DBC: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_2:
    // 0x80801DC0: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_80801DC4:
    // 0x80801DC4: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
L_80801DC8:
    // 0x80801DC8: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80801DCC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80801DD0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80801DD4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80801DD8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80801DDC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80801DE0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80801DE4: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80801DE8: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80801DEC: jr          $ra
    // 0x80801DF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80801DF0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void gczoombox_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801DF4: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80801DF8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801DFC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801E00: beq         $a0, $zero, L_80802B80
    if (ctx->r4 == 0) {
        // 0x80801E04: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80802B80;
    }
    // 0x80801E04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801E08: lw          $t6, 0x1E4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X1E4);
    // 0x80801E0C: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80801E10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80801E14: sll         $t8, $t6, 21
    ctx->r24 = S32(ctx->r14 << 21);
    // 0x80801E18: bltz        $t8, L_80801E64
    if (SIGNED(ctx->r24) < 0) {
        // 0x80801E1C: nop
    
            goto L_80801E64;
    }
    // 0x80801E1C: nop

    // 0x80801E20: jal         0x80015E80
    // 0x80801E24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80015E80(rdram, ctx);
        goto after_0;
    // 0x80801E24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80801E28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80801E2C: jal         0x80015F28
    // 0x80801E30: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80015F28(rdram, ctx);
        goto after_1;
    // 0x80801E30: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_1:
    // 0x80801E34: lw          $t9, 0x1E4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1E4);
    // 0x80801E38: sll         $t1, $t9, 30
    ctx->r9 = S32(ctx->r25 << 30);
    // 0x80801E3C: bgez        $t1, L_80801E54
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80801E40: nop
    
            goto L_80801E54;
    }
    // 0x80801E40: nop

    // 0x80801E44: jal         0x800885F8
    // 0x80801E48: nop

    _glintrosyncDll_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80801E48: nop

    after_2:
    // 0x80801E4C: b           L_80801E84
    // 0x80801E50: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
        goto L_80801E84;
    // 0x80801E50: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
L_80801E54:
    // 0x80801E54: jal         0x800D8FF8
    // 0x80801E58: nop

    func_800D8FF8(rdram, ctx);
        goto after_3;
    // 0x80801E58: nop

    after_3:
    // 0x80801E5C: b           L_80801E84
    // 0x80801E60: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
        goto L_80801E84;
    // 0x80801E60: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
L_80801E64:
    // 0x80801E64: jal         0x80015ECC
    // 0x80801E68: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_80015ECC(rdram, ctx);
        goto after_4;
    // 0x80801E68: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_4:
    // 0x80801E6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80801E70: jal         0x80015F5C
    // 0x80801E74: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    func_80015F5C(rdram, ctx);
        goto after_5;
    // 0x80801E74: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    after_5:
    // 0x80801E78: jal         0x800D9004
    // 0x80801E7C: nop

    func_800D9004(rdram, ctx);
        goto after_6;
    // 0x80801E7C: nop

    after_6:
    // 0x80801E80: swc1        $f0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f0.u32l;
L_80801E84:
    // 0x80801E84: lbu         $t2, 0x171($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X171);
    // 0x80801E88: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80801E8C: sltiu       $at, $t3, 0xB
    ctx->r1 = ctx->r11 < 0XB ? 1 : 0;
    // 0x80801E90: beq         $at, $zero, L_80802B80
    if (ctx->r1 == 0) {
        // 0x80801E94: sll         $t3, $t3, 2
        ctx->r11 = S32(ctx->r11 << 2);
            goto L_80802B80;
    }
    // 0x80801E94: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80801E98: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3DE0) << 16);
    // 0x80801E9C: addu        $at, $at, $t3
    gpr jr_addend_80801EA4 = ctx->r11;
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80801EA0: lw          $t3, 0x3DE0($at)
    ctx->r11 = ADD32(ctx->r1, (int16_t)RELOC_LO16(688, 0X3DE0));
    // 0x80801EA4: jr          $t3
    // 0x80801EA8: nop

    switch (jr_addend_80801EA4 >> 2) {
        case 0: goto L_80801EAC; break;
        case 1: goto L_8080204C; break;
        case 2: goto L_808022A0; break;
        case 3: goto L_80802324; break;
        case 4: goto L_80802590; break;
        case 5: goto L_80802718; break;
        case 6: goto L_80802890; break;
        case 7: goto L_808028AC; break;
        case 8: goto L_80802A10; break;
        case 9: goto L_80802538; break;
        case 10: goto L_80802B68; break;
        default: switch_error(__func__, 0x80801EA4, 0x80803DE0);
    }
    // 0x80801EA8: nop

L_80801EAC:
    // 0x80801EAC: lbu         $t4, 0x19D($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X19D);
    // 0x80801EB0: beql        $t4, $zero, L_80801ED4
    if (ctx->r12 == 0) {
        // 0x80801EB4: lbu         $t9, 0x175($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X175);
            goto L_80801ED4;
    }
    goto skip_0;
    // 0x80801EB4: lbu         $t9, 0x175($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X175);
    skip_0:
    // 0x80801EB8: lw          $t5, 0x1A0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X1A0);
    // 0x80801EBC: lbu         $t6, 0x19C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X19C);
    // 0x80801EC0: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80801EC4: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80801EC8: b           L_80801F00
    // 0x80801ECC: sw          $t8, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r24;
        goto L_80801F00;
    // 0x80801ECC: sw          $t8, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r24;
    // 0x80801ED0: lbu         $t9, 0x175($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X175);
L_80801ED4:
    // 0x80801ED4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80801ED8: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x80801EDC: lw          $a0, 0x17C($t1)
    ctx->r4 = MEM_W(ctx->r9, 0X17C);
    // 0x80801EE0: jal         0x80088738
    // 0x80801EE4: sw          $a0, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r4;
    _gldialog_entrypoint_1(rdram, ctx);
        goto after_7;
    // 0x80801EE4: sw          $a0, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = ctx->r4;
    after_7:
    // 0x80801EE8: lbu         $t6, 0x1E5($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1E5);
    // 0x80801EEC: sll         $t4, $v0, 3
    ctx->r12 = S32(ctx->r2 << 3);
    // 0x80801EF0: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x80801EF4: andi        $t7, $t6, 0xFFF7
    ctx->r15 = ctx->r14 & 0XFFF7;
    // 0x80801EF8: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x80801EFC: sb          $t8, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r24;
L_80801F00:
    // 0x80801F00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801F04: jal         0x80001C0C
    // 0x80801F08: lw          $a1, 0x1A0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1A0);
    func_80801C0C_gczoombox(rdram, ctx);
        goto after_8;
    // 0x80801F08: lw          $a1, 0x1A0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1A0);
    after_8:
    // 0x80801F0C: lw          $t9, 0x1A0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1A0);
    // 0x80801F10: andi        $t0, $v0, 0xFF
    ctx->r8 = ctx->r2 & 0XFF;
    // 0x80801F14: sb          $v0, 0x19C($s0)
    MEM_B(0X19C, ctx->r16) = ctx->r2;
    // 0x80801F18: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80801F1C: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80801F20: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80801F24: addiu       $a1, $s0, 0xC0
    ctx->r5 = ADD32(ctx->r16, 0XC0);
    // 0x80801F28: beq         $t2, $zero, L_80801F38
    if (ctx->r10 == 0) {
        // 0x80801F2C: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80801F38;
    }
    // 0x80801F2C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80801F30: b           L_80801F3C
    // 0x80801F34: sb          $t3, 0x19D($s0)
    MEM_B(0X19D, ctx->r16) = ctx->r11;
        goto L_80801F3C;
    // 0x80801F34: sb          $t3, 0x19D($s0)
    MEM_B(0X19D, ctx->r16) = ctx->r11;
L_80801F38:
    // 0x80801F38: sb          $zero, 0x19D($s0)
    MEM_B(0X19D, ctx->r16) = 0;
L_80801F3C:
    // 0x80801F3C: lw          $a0, 0x1A0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X1A0);
    // 0x80801F40: jal         0x8000014C
    // 0x80801F44: lbu         $a3, 0x19C($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X19C);
    func_8080014C_gczoombox(rdram, ctx);
        goto after_9;
    // 0x80801F44: lbu         $a3, 0x19C($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X19C);
    after_9:
    // 0x80801F48: lbu         $t4, 0x19C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X19C);
    // 0x80801F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801F50: addu        $t6, $s0, $t4
    ctx->r14 = ADD32(ctx->r16, ctx->r12);
    // 0x80801F54: sb          $zero, 0xC0($t6)
    MEM_B(0XC0, ctx->r14) = 0;
    // 0x80801F58: lbu         $v0, 0x19D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19D);
    // 0x80801F5C: bne         $v0, $zero, L_80801F74
    if (ctx->r2 != 0) {
        // 0x80801F60: nop
    
            goto L_80801F74;
    }
    // 0x80801F60: nop

    // 0x80801F64: lbu         $t5, 0x175($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X175);
    // 0x80801F68: lbu         $v0, 0x19D($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19D);
    // 0x80801F6C: addiu       $t7, $t5, 0x1
    ctx->r15 = ADD32(ctx->r13, 0X1);
    // 0x80801F70: sb          $t7, 0x175($s0)
    MEM_B(0X175, ctx->r16) = ctx->r15;
L_80801F74:
    // 0x80801F74: bnel        $v0, $zero, L_80801F94
    if (ctx->r2 != 0) {
        // 0x80801F78: lbu         $t0, 0x1E4($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X1E4);
            goto L_80801F94;
    }
    goto skip_1;
    // 0x80801F78: lbu         $t0, 0x1E4($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1E4);
    skip_1:
    // 0x80801F7C: lbu         $t8, 0x175($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X175);
    // 0x80801F80: lbu         $t9, 0x174($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X174);
    // 0x80801F84: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80801F88: beql        $at, $zero, L_80801FAC
    if (ctx->r1 == 0) {
        // 0x80801F8C: lbu         $t6, 0x1E4($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X1E4);
            goto L_80801FAC;
    }
    goto skip_2;
    // 0x80801F8C: lbu         $t6, 0x1E4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1E4);
    skip_2:
    // 0x80801F90: lbu         $t0, 0x1E4($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1E4);
L_80801F94:
    // 0x80801F94: andi        $t2, $t0, 0xFFFD
    ctx->r10 = ctx->r8 & 0XFFFD;
    // 0x80801F98: sb          $t2, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r10;
    // 0x80801F9C: andi        $t3, $t2, 0x7F
    ctx->r11 = ctx->r10 & 0X7F;
    // 0x80801FA0: b           L_80801FBC
    // 0x80801FA4: sb          $t3, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r11;
        goto L_80801FBC;
    // 0x80801FA4: sb          $t3, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r11;
    // 0x80801FA8: lbu         $t6, 0x1E4($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1E4);
L_80801FAC:
    // 0x80801FAC: ori         $t8, $t6, 0x2
    ctx->r24 = ctx->r14 | 0X2;
    // 0x80801FB0: sb          $t8, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r24;
    // 0x80801FB4: ori         $t9, $t8, 0x80
    ctx->r25 = ctx->r24 | 0X80;
    // 0x80801FB8: sb          $t9, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r25;
L_80801FBC:
    // 0x80801FBC: lw          $t0, 0x1E4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1E4);
    // 0x80801FC0: sll         $t2, $t0, 4
    ctx->r10 = S32(ctx->r8 << 4);
    // 0x80801FC4: bgezl       $t2, L_80801FF0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80801FC8: lbu         $t1, 0x1E4($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X1E4);
            goto L_80801FF0;
    }
    goto skip_3;
    // 0x80801FC8: lbu         $t1, 0x1E4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1E4);
    skip_3:
    // 0x80801FCC: lbu         $t4, 0x1E4($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1E4);
    // 0x80801FD0: ori         $t7, $t4, 0x4
    ctx->r15 = ctx->r12 | 0X4;
    // 0x80801FD4: ori         $t9, $t7, 0x40
    ctx->r25 = ctx->r15 | 0X40;
    // 0x80801FD8: sb          $t7, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r15;
    // 0x80801FDC: sb          $t9, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r25;
    // 0x80801FE0: andi        $t0, $t9, 0xDF
    ctx->r8 = ctx->r25 & 0XDF;
    // 0x80801FE4: b           L_80801FF8
    // 0x80801FE8: sb          $t0, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r8;
        goto L_80801FF8;
    // 0x80801FE8: sb          $t0, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r8;
    // 0x80801FEC: lbu         $t1, 0x1E4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1E4);
L_80801FF0:
    // 0x80801FF0: andi        $t2, $t1, 0xFFFB
    ctx->r10 = ctx->r9 & 0XFFFB;
    // 0x80801FF4: sb          $t2, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r10;
L_80801FF8:
    // 0x80801FF8: jal         0x800006E0
    // 0x80801FFC: lbu         $a1, 0x19C($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X19C);
    func_808006E0_gczoombox(rdram, ctx);
        goto after_10;
    // 0x80801FFC: lbu         $a1, 0x19C($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X19C);
    after_10:
    // 0x80802000: lw          $t4, 0x1E4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1E4);
    // 0x80802004: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80802008: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8080200C: andi        $a3, $zero, 0xFF
    ctx->r7 = 0 & 0XFF;
    // 0x80802010: sll         $t5, $t4, 12
    ctx->r13 = S32(ctx->r12 << 12);
    // 0x80802014: sb          $t3, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r11;
    // 0x80802018: sb          $a3, 0x1CE($s0)
    MEM_B(0X1CE, ctx->r16) = ctx->r7;
    // 0x8080201C: sb          $zero, 0x19E($s0)
    MEM_B(0X19E, ctx->r16) = 0;
    // 0x80802020: bgez        $t5, L_80802030
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80802024: swc1        $f4, 0x1D4($s0)
        MEM_W(0X1D4, ctx->r16) = ctx->f4.u32l;
            goto L_80802030;
    }
    // 0x80802024: swc1        $f4, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->f4.u32l;
    // 0x80802028: addiu       $t7, $a3, 0x2
    ctx->r15 = ADD32(ctx->r7, 0X2);
    // 0x8080202C: sb          $t7, 0x19E($s0)
    MEM_B(0X19E, ctx->r16) = ctx->r15;
L_80802030:
    // 0x80802030: lbu         $t9, 0x1E5($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1E5);
    // 0x80802034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802038: ori         $t0, $t9, 0x80
    ctx->r8 = ctx->r25 | 0X80;
    // 0x8080203C: jal         0x80000294
    // 0x80802040: sb          $t0, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r8;
    func_80800294_gczoombox(rdram, ctx);
        goto after_11;
    // 0x80802040: sb          $t0, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r8;
    after_11:
    // 0x80802044: b           L_80802B84
    // 0x80802048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80802B84;
    // 0x80802048: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080204C:
    // 0x8080204C: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
    // 0x80802050: lwc1        $f2, 0x1D8($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1D8);
    // 0x80802054: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80802058: sll         $t2, $v0, 12
    ctx->r10 = S32(ctx->r2 << 12);
    // 0x8080205C: bgez        $t2, L_80802074
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80802060: sll         $t4, $v0, 27
        ctx->r12 = S32(ctx->r2 << 27);
            goto L_80802074;
    }
    // 0x80802060: sll         $t4, $v0, 27
    ctx->r12 = S32(ctx->r2 << 27);
    // 0x80802064: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80802068: nop

    // 0x8080206C: mul.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f6.fl);
    // 0x80802070: nop

L_80802074:
    // 0x80802074: bgez        $t4, L_80802098
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80802078: lw          $t7, 0x50($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X50);
            goto L_80802098;
    }
    // 0x80802078: lw          $t7, 0x50($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X50);
    // 0x8080207C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3E0C) << 16);
    // 0x80802080: lwc1        $f8, 0x3E0C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3E0C));
    // 0x80802084: lbu         $t6, 0x1E7($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1E7);
    // 0x80802088: mul.s       $f2, $f2, $f8
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x8080208C: andi        $t5, $t6, 0xFFEF
    ctx->r13 = ctx->r14 & 0XFFEF;
    // 0x80802090: b           L_808020E0
    // 0x80802094: sb          $t5, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r13;
        goto L_808020E0;
    // 0x80802094: sb          $t5, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r13;
L_80802098:
    // 0x80802098: beq         $t7, $zero, L_808020B8
    if (ctx->r15 == 0) {
        // 0x8080209C: sll         $t9, $v0, 19
        ctx->r25 = S32(ctx->r2 << 19);
            goto L_808020B8;
    }
    // 0x8080209C: sll         $t9, $v0, 19
    ctx->r25 = S32(ctx->r2 << 19);
    // 0x808020A0: bgez        $t9, L_808020B8
    if (SIGNED(ctx->r25) >= 0) {
        // 0x808020A4: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(688, 0X3E10) << 16);
            goto L_808020B8;
    }
    // 0x808020A4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3E10) << 16);
    // 0x808020A8: lwc1        $f10, 0x3E10($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3E10));
    // 0x808020AC: mul.s       $f2, $f2, $f10
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f10.fl);
    // 0x808020B0: b           L_808020E4
    // 0x808020B4: lwc1        $f18, 0x1D4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1D4);
        goto L_808020E4;
    // 0x808020B4: lwc1        $f18, 0x1D4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1D4);
L_808020B8:
    // 0x808020B8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x808020BC: sll         $t2, $v0, 19
    ctx->r10 = S32(ctx->r2 << 19);
    // 0x808020C0: beql        $t0, $zero, L_808020E4
    if (ctx->r8 == 0) {
        // 0x808020C4: lwc1        $f18, 0x1D4($s0)
        ctx->f18.u32l = MEM_W(ctx->r16, 0X1D4);
            goto L_808020E4;
    }
    goto skip_4;
    // 0x808020C4: lwc1        $f18, 0x1D4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1D4);
    skip_4:
    // 0x808020C8: bgez        $t2, L_808020E0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x808020CC: lui         $at, 0x4000
        ctx->r1 = S32(0X4000 << 16);
            goto L_808020E0;
    }
    // 0x808020CC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x808020D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808020D4: nop

    // 0x808020D8: mul.s       $f2, $f2, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = MUL_S(ctx->f2.fl, ctx->f16.fl);
    // 0x808020DC: nop

L_808020E0:
    // 0x808020E0: lwc1        $f18, 0x1D4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1D4);
L_808020E4:
    // 0x808020E4: add.s       $f4, $f18, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f0.fl;
    // 0x808020E8: swc1        $f4, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->f4.u32l;
    // 0x808020EC: lwc1        $f6, 0x1D4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1D4);
    // 0x808020F0: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x808020F4: nop

    // 0x808020F8: bc1fl       L_808021BC
    if (!c1cs) {
        // 0x808020FC: lw          $v0, 0x1E4($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1E4);
            goto L_808021BC;
    }
    goto skip_5;
    // 0x808020FC: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
    skip_5:
    // 0x80802100: lbu         $v0, 0x19E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19E);
    // 0x80802104: lbu         $t3, 0x19C($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X19C);
    // 0x80802108: slt         $at, $t3, $v0
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8080210C: bnel        $at, $zero, L_808021BC
    if (ctx->r1 != 0) {
        // 0x80802110: lw          $v0, 0x1E4($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1E4);
            goto L_808021BC;
    }
    goto skip_6;
    // 0x80802110: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
    skip_6:
    // 0x80802114: lw          $a1, 0x1E4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1E4);
L_80802118:
    // 0x80802118: addiu       $t4, $v0, 0x1
    ctx->r12 = ADD32(ctx->r2, 0X1);
    // 0x8080211C: andi        $t6, $t4, 0xFF
    ctx->r14 = ctx->r12 & 0XFF;
    // 0x80802120: sb          $t4, 0x19E($s0)
    MEM_B(0X19E, ctx->r16) = ctx->r12;
    // 0x80802124: addu        $t5, $s0, $t6
    ctx->r13 = ADD32(ctx->r16, ctx->r14);
    // 0x80802128: sll         $t7, $a1, 12
    ctx->r15 = S32(ctx->r5 << 12);
    // 0x8080212C: srl         $t8, $t7, 31
    ctx->r24 = S32(U32(ctx->r15) >> 31);
    // 0x80802130: lbu         $a0, 0xC0($t5)
    ctx->r4 = MEM_BU(ctx->r13, 0XC0);
    // 0x80802134: swc1        $f2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f2.u32l;
    // 0x80802138: jal         0x800005F0
    // 0x8080213C: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    func_808005F0_gczoombox(rdram, ctx);
        goto after_12;
    // 0x8080213C: andi        $a1, $t8, 0xFF
    ctx->r5 = ctx->r24 & 0XFF;
    after_12:
    // 0x80802140: beq         $v0, $zero, L_80802184
    if (ctx->r2 == 0) {
        // 0x80802144: lwc1        $f2, 0x40($sp)
        ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
            goto L_80802184;
    }
    // 0x80802144: lwc1        $f2, 0x40($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80802148: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x8080214C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3E18) << 16);
    // 0x80802150: beq         $t0, $zero, L_80802174
    if (ctx->r8 == 0) {
        // 0x80802154: nop
    
            goto L_80802174;
    }
    // 0x80802154: nop

    // 0x80802158: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
    // 0x8080215C: sll         $t3, $t1, 19
    ctx->r11 = S32(ctx->r9 << 19);
    // 0x80802160: bgez        $t3, L_80802174
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80802164: nop
    
            goto L_80802174;
    }
    // 0x80802164: nop

    // 0x80802168: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3E14) << 16);
    // 0x8080216C: b           L_80802178
    // 0x80802170: lwc1        $f0, 0x3E14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3E14));
        goto L_80802178;
    // 0x80802170: lwc1        $f0, 0x3E14($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3E14));
L_80802174:
    // 0x80802174: lwc1        $f0, 0x3E18($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3E18));
L_80802178:
    // 0x80802178: lwc1        $f8, 0x1D4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1D4);
    // 0x8080217C: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80802180: swc1        $f10, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->f10.u32l;
L_80802184:
    // 0x80802184: lwc1        $f16, 0x1D4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1D4);
    // 0x80802188: sub.s       $f18, $f16, $f2
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f2.fl;
    // 0x8080218C: swc1        $f18, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->f18.u32l;
    // 0x80802190: lwc1        $f4, 0x1D4($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1D4);
    // 0x80802194: c.lt.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl < ctx->f4.fl;
    // 0x80802198: nop

    // 0x8080219C: bc1fl       L_808021BC
    if (!c1cs) {
        // 0x808021A0: lw          $v0, 0x1E4($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X1E4);
            goto L_808021BC;
    }
    goto skip_7;
    // 0x808021A0: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
    skip_7:
    // 0x808021A4: lbu         $v0, 0x19E($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X19E);
    // 0x808021A8: lbu         $t4, 0x19C($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X19C);
    // 0x808021AC: slt         $at, $t4, $v0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x808021B0: beql        $at, $zero, L_80802118
    if (ctx->r1 == 0) {
        // 0x808021B4: lw          $a1, 0x1E4($s0)
        ctx->r5 = MEM_W(ctx->r16, 0X1E4);
            goto L_80802118;
    }
    goto skip_8;
    // 0x808021B4: lw          $a1, 0x1E4($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X1E4);
    skip_8:
    // 0x808021B8: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
L_808021BC:
    // 0x808021BC: lbu         $a3, 0x19E($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X19E);
    // 0x808021C0: sll         $t5, $v0, 5
    ctx->r13 = S32(ctx->r2 << 5);
    // 0x808021C4: bgez        $t5, L_80802224
    if (SIGNED(ctx->r13) >= 0) {
        // 0x808021C8: sll         $t7, $v0, 28
        ctx->r15 = S32(ctx->r2 << 28);
            goto L_80802224;
    }
    // 0x808021C8: sll         $t7, $v0, 28
    ctx->r15 = S32(ctx->r2 << 28);
    // 0x808021CC: sll         $t8, $v0, 28
    ctx->r24 = S32(ctx->r2 << 28);
    // 0x808021D0: bgez        $t8, L_80802208
    if (SIGNED(ctx->r24) >= 0) {
        // 0x808021D4: addiu       $a0, $s0, 0xC0
        ctx->r4 = ADD32(ctx->r16, 0XC0);
            goto L_80802208;
    }
    // 0x808021D4: addiu       $a0, $s0, 0xC0
    ctx->r4 = ADD32(ctx->r16, 0XC0);
    // 0x808021D8: addiu       $t9, $zero, 0xFD
    ctx->r25 = ADD32(0, 0XFD);
    // 0x808021DC: addiu       $t0, $zero, 0x68
    ctx->r8 = ADD32(0, 0X68);
    // 0x808021E0: sb          $t9, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r25;
    // 0x808021E4: sb          $t0, 0x31($s0)
    MEM_B(0X31, ctx->r16) = ctx->r8;
    // 0x808021E8: addiu       $a0, $s0, 0xC0
    ctx->r4 = ADD32(ctx->r16, 0XC0);
    // 0x808021EC: addiu       $a1, $s0, 0x32
    ctx->r5 = ADD32(ctx->r16, 0X32);
    // 0x808021F0: jal         0x8000014C
    // 0x808021F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8080014C_gczoombox(rdram, ctx);
        goto after_13;
    // 0x808021F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x808021F8: lbu         $t1, 0x19E($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X19E);
    // 0x808021FC: addu        $t2, $s0, $t1
    ctx->r10 = ADD32(ctx->r16, ctx->r9);
    // 0x80802200: b           L_80802214
    // 0x80802204: sb          $zero, 0x32($t2)
    MEM_B(0X32, ctx->r10) = 0;
        goto L_80802214;
    // 0x80802204: sb          $zero, 0x32($t2)
    MEM_B(0X32, ctx->r10) = 0;
L_80802208:
    // 0x80802208: addiu       $a1, $s0, 0x30
    ctx->r5 = ADD32(ctx->r16, 0X30);
    // 0x8080220C: jal         0x8000014C
    // 0x80802210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8080014C_gczoombox(rdram, ctx);
        goto after_14;
    // 0x80802210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_14:
L_80802214:
    // 0x80802214: lbu         $t4, 0x1E4($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1E4);
    // 0x80802218: ori         $t6, $t4, 0x20
    ctx->r14 = ctx->r12 | 0X20;
    // 0x8080221C: b           L_8080227C
    // 0x80802220: sb          $t6, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r14;
        goto L_8080227C;
    // 0x80802220: sb          $t6, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r14;
L_80802224:
    // 0x80802224: bgez        $t7, L_8080225C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80802228: addiu       $a0, $s0, 0xC0
        ctx->r4 = ADD32(ctx->r16, 0XC0);
            goto L_8080225C;
    }
    // 0x80802228: addiu       $a0, $s0, 0xC0
    ctx->r4 = ADD32(ctx->r16, 0XC0);
    // 0x8080222C: addiu       $t8, $zero, 0xFD
    ctx->r24 = ADD32(0, 0XFD);
    // 0x80802230: addiu       $t9, $zero, 0x68
    ctx->r25 = ADD32(0, 0X68);
    // 0x80802234: sb          $t8, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r24;
    // 0x80802238: sb          $t9, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r25;
    // 0x8080223C: addiu       $a0, $s0, 0xC0
    ctx->r4 = ADD32(ctx->r16, 0XC0);
    // 0x80802240: addiu       $a1, $s0, 0x2
    ctx->r5 = ADD32(ctx->r16, 0X2);
    // 0x80802244: jal         0x8000014C
    // 0x80802248: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8080014C_gczoombox(rdram, ctx);
        goto after_15;
    // 0x80802248: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_15:
    // 0x8080224C: lbu         $t0, 0x19E($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X19E);
    // 0x80802250: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x80802254: b           L_80802268
    // 0x80802258: sb          $zero, 0x2($t1)
    MEM_B(0X2, ctx->r9) = 0;
        goto L_80802268;
    // 0x80802258: sb          $zero, 0x2($t1)
    MEM_B(0X2, ctx->r9) = 0;
L_8080225C:
    // 0x8080225C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80802260: jal         0x8000014C
    // 0x80802264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8080014C_gczoombox(rdram, ctx);
        goto after_16;
    // 0x80802264: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_16:
L_80802268:
    // 0x80802268: lbu         $t3, 0x1E4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1E4);
    // 0x8080226C: ori         $t5, $t3, 0x8
    ctx->r13 = ctx->r11 | 0X8;
    // 0x80802270: sb          $t5, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r13;
    // 0x80802274: ori         $t7, $t5, 0x40
    ctx->r15 = ctx->r13 | 0X40;
    // 0x80802278: sb          $t7, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r15;
L_8080227C:
    // 0x8080227C: lbu         $t8, 0x19C($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X19C);
    // 0x80802280: lbu         $t9, 0x19E($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X19E);
    // 0x80802284: slt         $at, $t8, $t9
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x80802288: beql        $at, $zero, L_80802B84
    if (ctx->r1 == 0) {
        // 0x8080228C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80802B84;
    }
    goto skip_9;
    // 0x8080228C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_9:
    // 0x80802290: jal         0x800002E4
    // 0x80802294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808002E4_gczoombox(rdram, ctx);
        goto after_17;
    // 0x80802294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80802298: b           L_80802B84
    // 0x8080229C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80802B84;
    // 0x8080229C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808022A0:
    // 0x808022A0: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x808022A4: beql        $t0, $zero, L_808022C0
    if (ctx->r8 == 0) {
        // 0x808022A8: lwc1        $f2, 0x1C4($s0)
        ctx->f2.u32l = MEM_W(ctx->r16, 0X1C4);
            goto L_808022C0;
    }
    goto skip_10;
    // 0x808022A8: lwc1        $f2, 0x1C4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C4);
    skip_10:
    // 0x808022AC: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
    // 0x808022B0: sll         $t3, $t1, 19
    ctx->r11 = S32(ctx->r9 << 19);
    // 0x808022B4: bltzl       $t3, L_808022DC
    if (SIGNED(ctx->r11) < 0) {
        // 0x808022B8: lbu         $t6, 0x1CD($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X1CD);
            goto L_808022DC;
    }
    goto skip_11;
    // 0x808022B8: lbu         $t6, 0x1CD($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1CD);
    skip_11:
    // 0x808022BC: lwc1        $f2, 0x1C4($s0)
    ctx->f2.u32l = MEM_W(ctx->r16, 0X1C4);
L_808022C0:
    // 0x808022C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808022C4: nop

    // 0x808022C8: c.lt.s      $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f2.fl < ctx->f6.fl;
    // 0x808022CC: nop

    // 0x808022D0: bc1fl       L_8080231C
    if (!c1cs) {
        // 0x808022D4: sub.s       $f8, $f2, $f0
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
            goto L_8080231C;
    }
    goto skip_12;
    // 0x808022D4: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
    skip_12:
    // 0x808022D8: lbu         $t6, 0x1CD($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1CD);
L_808022DC:
    // 0x808022DC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x808022E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808022E4: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x808022E8: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x808022EC: mul.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x808022F0: sb          $t4, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r12;
    // 0x808022F4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x808022F8: bgez        $t6, L_8080230C
    if (SIGNED(ctx->r14) >= 0) {
        // 0x808022FC: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8080230C;
    }
    // 0x808022FC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80802300: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80802304: nop

    // 0x80802308: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_8080230C:
    // 0x8080230C: mul.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80802310: b           L_80802B80
    // 0x80802314: swc1        $f6, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->f6.u32l;
        goto L_80802B80;
    // 0x80802314: swc1        $f6, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->f6.u32l;
    // 0x80802318: sub.s       $f8, $f2, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f2.fl - ctx->f0.fl;
L_8080231C:
    // 0x8080231C: b           L_80802B80
    // 0x80802320: swc1        $f8, 0x1C4($s0)
    MEM_W(0X1C4, ctx->r16) = ctx->f8.u32l;
        goto L_80802B80;
    // 0x80802320: swc1        $f8, 0x1C4($s0)
    MEM_W(0X1C4, ctx->r16) = ctx->f8.u32l;
L_80802324:
    // 0x80802324: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x80802328: beql        $t5, $zero, L_80802378
    if (ctx->r13 == 0) {
        // 0x8080232C: lw          $t4, 0x1E4($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X1E4);
            goto L_80802378;
    }
    goto skip_13;
    // 0x8080232C: lw          $t4, 0x1E4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1E4);
    skip_13:
    // 0x80802330: lw          $t7, 0x1E4($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X1E4);
    // 0x80802334: sll         $t9, $t7, 19
    ctx->r25 = S32(ctx->r15 << 19);
    // 0x80802338: bgezl       $t9, L_80802378
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8080233C: lw          $t4, 0x1E4($s0)
        ctx->r12 = MEM_W(ctx->r16, 0X1E4);
            goto L_80802378;
    }
    goto skip_14;
    // 0x8080233C: lw          $t4, 0x1E4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1E4);
    skip_14:
    // 0x80802340: lbu         $t0, 0x1CD($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1CD);
    // 0x80802344: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80802348: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8080234C: addiu       $t1, $t0, 0x2
    ctx->r9 = ADD32(ctx->r8, 0X2);
    // 0x80802350: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x80802354: mul.s       $f4, $f16, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80802358: lbu         $t2, 0x1E5($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1E5);
    // 0x8080235C: andi        $t3, $t2, 0xFF7F
    ctx->r11 = ctx->r10 & 0XFF7F;
    // 0x80802360: sb          $t3, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r11;
    // 0x80802364: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80802368: mul.s       $f6, $f4, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f18.fl);
    // 0x8080236C: b           L_808023B4
    // 0x80802370: swc1        $f6, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->f6.u32l;
        goto L_808023B4;
    // 0x80802370: swc1        $f6, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->f6.u32l;
    // 0x80802374: lw          $t4, 0x1E4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1E4);
L_80802378:
    // 0x80802378: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8080237C: sll         $t5, $t4, 19
    ctx->r13 = S32(ctx->r12 << 19);
    // 0x80802380: bgezl       $t5, L_808023B8
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80802384: lbu         $t0, 0x1E5($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X1E5);
            goto L_808023B8;
    }
    goto skip_15;
    // 0x80802384: lbu         $t0, 0x1E5($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1E5);
    skip_15:
    // 0x80802388: beql        $t7, $zero, L_808023B8
    if (ctx->r15 == 0) {
        // 0x8080238C: lbu         $t0, 0x1E5($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X1E5);
            goto L_808023B8;
    }
    goto skip_16;
    // 0x8080238C: lbu         $t0, 0x1E5($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1E5);
    skip_16:
    // 0x80802390: lbu         $t8, 0x1CD($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1CD);
    // 0x80802394: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80802398: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080239C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x808023A0: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x808023A4: mul.s       $f16, $f8, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f0.fl);
    // 0x808023A8: cvt.s.w     $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    ctx->f4.fl = CVT_S_W(ctx->f10.u32l);
    // 0x808023AC: mul.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x808023B0: swc1        $f18, 0x1C8($s0)
    MEM_W(0X1C8, ctx->r16) = ctx->f18.u32l;
L_808023B4:
    // 0x808023B4: lbu         $t0, 0x1E5($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1E5);
L_808023B8:
    // 0x808023B8: andi        $t1, $t0, 0xFFFD
    ctx->r9 = ctx->r8 & 0XFFFD;
    // 0x808023BC: sb          $t1, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r9;
    // 0x808023C0: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
    // 0x808023C4: sll         $a0, $v0, 5
    ctx->r4 = S32(ctx->r2 << 5);
    // 0x808023C8: srl         $t2, $a0, 31
    ctx->r10 = S32(U32(ctx->r4) >> 31);
    // 0x808023CC: bne         $t2, $zero, L_808023DC
    if (ctx->r10 != 0) {
        // 0x808023D0: or          $a0, $t2, $zero
        ctx->r4 = ctx->r10 | 0;
            goto L_808023DC;
    }
    // 0x808023D0: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x808023D4: srl         $t3, $v0, 31
    ctx->r11 = S32(U32(ctx->r2) >> 31);
    // 0x808023D8: beq         $t3, $zero, L_80802520
    if (ctx->r11 == 0) {
        // 0x808023DC: sll         $v1, $v0, 6
        ctx->r3 = S32(ctx->r2 << 6);
            goto L_80802520;
    }
L_808023DC:
    // 0x808023DC: sll         $v1, $v0, 6
    ctx->r3 = S32(ctx->r2 << 6);
    // 0x808023E0: srl         $t4, $v1, 31
    ctx->r12 = S32(U32(ctx->r3) >> 31);
    // 0x808023E4: beq         $t4, $zero, L_80802438
    if (ctx->r12 == 0) {
        // 0x808023E8: or          $v1, $t4, $zero
        ctx->r3 = ctx->r12 | 0;
            goto L_80802438;
    }
    // 0x808023E8: or          $v1, $t4, $zero
    ctx->r3 = ctx->r12 | 0;
    // 0x808023EC: sll         $t5, $v0, 25
    ctx->r13 = S32(ctx->r2 << 25);
    // 0x808023F0: bgez        $t5, L_80802418
    if (SIGNED(ctx->r13) >= 0) {
        // 0x808023F4: nop
    
            goto L_80802418;
    }
    // 0x808023F4: nop

    // 0x808023F8: lbu         $t7, 0x171($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X171);
    // 0x808023FC: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80802400: beq         $t7, $at, L_80802418
    if (ctx->r15 == ctx->r1) {
        // 0x80802404: nop
    
            goto L_80802418;
    }
    // 0x80802404: nop

    // 0x80802408: beq         $a0, $zero, L_80802418
    if (ctx->r4 == 0) {
        // 0x8080240C: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80802418;
    }
    // 0x8080240C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80802410: jal         0x80101238
    // 0x80802414: addiu       $a0, $zero, 0x6D
    ctx->r4 = ADD32(0, 0X6D);
    func_80101238(rdram, ctx);
        goto after_18;
    // 0x80802414: addiu       $a0, $zero, 0x6D
    ctx->r4 = ADD32(0, 0X6D);
    after_18:
L_80802418:
    // 0x80802418: jal         0x800033D0
    // 0x8080241C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    gczoombox_entrypoint_14(rdram, ctx);
        goto after_19;
    // 0x8080241C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80802420: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
    // 0x80802424: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x80802428: sb          $t8, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r24;
    // 0x8080242C: sll         $v1, $v0, 6
    ctx->r3 = S32(ctx->r2 << 6);
    // 0x80802430: srl         $t9, $v1, 31
    ctx->r25 = S32(U32(ctx->r3) >> 31);
    // 0x80802434: or          $v1, $t9, $zero
    ctx->r3 = ctx->r25 | 0;
L_80802438:
    // 0x80802438: lbu         $a0, 0x1E5($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X1E5);
    // 0x8080243C: srl         $t0, $a0, 7
    ctx->r8 = S32(U32(ctx->r4) >> 7);
    // 0x80802440: bne         $t0, $zero, L_80802480
    if (ctx->r8 != 0) {
        // 0x80802444: nop
    
            goto L_80802480;
    }
    // 0x80802444: nop

    // 0x80802448: bne         $v1, $zero, L_80802480
    if (ctx->r3 != 0) {
        // 0x8080244C: ori         $t2, $a0, 0x2
        ctx->r10 = ctx->r4 | 0X2;
            goto L_80802480;
    }
    // 0x8080244C: ori         $t2, $a0, 0x2
    ctx->r10 = ctx->r4 | 0X2;
    // 0x80802450: lwc1        $f0, 0x1C8($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X1C8);
    // 0x80802454: lwc1        $f6, 0x1A4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x80802458: lwc1        $f10, 0x1A8($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1A8);
    // 0x8080245C: sb          $t2, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r10;
    // 0x80802460: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
    // 0x80802464: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x80802468: sll         $v1, $v0, 6
    ctx->r3 = S32(ctx->r2 << 6);
    // 0x8080246C: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x80802470: srl         $t3, $v1, 31
    ctx->r11 = S32(U32(ctx->r3) >> 31);
    // 0x80802474: swc1        $f8, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f8.u32l;
    // 0x80802478: or          $v1, $t3, $zero
    ctx->r3 = ctx->r11 | 0;
    // 0x8080247C: swc1        $f16, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f16.u32l;
L_80802480:
    // 0x80802480: bne         $v1, $zero, L_80802B80
    if (ctx->r3 != 0) {
        // 0x80802484: sll         $t6, $v0, 12
        ctx->r14 = S32(ctx->r2 << 12);
            goto L_80802B80;
    }
    // 0x80802484: sll         $t6, $v0, 12
    ctx->r14 = S32(ctx->r2 << 12);
    // 0x80802488: bgez        $t6, L_80802498
    if (SIGNED(ctx->r14) >= 0) {
        // 0x8080248C: addiu       $v0, $zero, 0xC
        ctx->r2 = ADD32(0, 0XC);
            goto L_80802498;
    }
    // 0x8080248C: addiu       $v0, $zero, 0xC
    ctx->r2 = ADD32(0, 0XC);
    // 0x80802490: b           L_80802498
    // 0x80802494: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
        goto L_80802498;
    // 0x80802494: addiu       $v0, $zero, 0xF
    ctx->r2 = ADD32(0, 0XF);
L_80802498:
    // 0x80802498: lh          $t5, 0x1B0($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X1B0);
    // 0x8080249C: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x808024A0: subu        $t7, $t7, $v0
    ctx->r15 = SUB32(ctx->r15, ctx->r2);
    // 0x808024A4: bgez        $t7, L_808024B4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x808024A8: sra         $t8, $t7, 1
        ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
            goto L_808024B4;
    }
    // 0x808024A8: sra         $t8, $t7, 1
    ctx->r24 = S32(SIGNED(ctx->r15) >> 1);
    // 0x808024AC: addiu       $at, $t7, 0x1
    ctx->r1 = ADD32(ctx->r15, 0X1);
    // 0x808024B0: sra         $t8, $at, 1
    ctx->r24 = S32(SIGNED(ctx->r1) >> 1);
L_808024B4:
    // 0x808024B4: subu        $t9, $t5, $t8
    ctx->r25 = SUB32(ctx->r13, ctx->r24);
    // 0x808024B8: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x808024BC: lwc1        $f6, 0x1A4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1A4);
    // 0x808024C0: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x808024C4: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x808024C8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x808024CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808024D0: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    // 0x808024D4: c.le.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl <= ctx->f18.fl;
    // 0x808024D8: nop

    // 0x808024DC: bc1fl       L_80802B84
    if (!c1cs) {
        // 0x808024E0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80802B84;
    }
    goto skip_17;
    // 0x808024E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_17:
    // 0x808024E4: jal         0x8000014C
    // 0x808024E8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_8080014C_gczoombox(rdram, ctx);
        goto after_20;
    // 0x808024E8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_20:
    // 0x808024EC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808024F0: jal         0x800001D4
    // 0x808024F4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_808001D4_gczoombox(rdram, ctx);
        goto after_21;
    // 0x808024F4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_21:
    // 0x808024F8: jal         0x80000228
    // 0x808024FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800228_gczoombox(rdram, ctx);
        goto after_22;
    // 0x808024FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80802500: lbu         $t1, 0x1E4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1E4);
    // 0x80802504: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80802508: sb          $t6, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r14;
    // 0x8080250C: ori         $t3, $t1, 0x40
    ctx->r11 = ctx->r9 | 0X40;
    // 0x80802510: sb          $t3, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r11;
    // 0x80802514: andi        $t4, $t3, 0xDF
    ctx->r12 = ctx->r11 & 0XDF;
    // 0x80802518: b           L_80802B80
    // 0x8080251C: sb          $t4, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r12;
        goto L_80802B80;
    // 0x8080251C: sb          $t4, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r12;
L_80802520:
    // 0x80802520: lb          $t5, 0x1E5($s0)
    ctx->r13 = MEM_B(ctx->r16, 0X1E5);
    // 0x80802524: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80802528: bltzl       $t5, L_80802B84
    if (SIGNED(ctx->r13) < 0) {
        // 0x8080252C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80802B84;
    }
    goto skip_18;
    // 0x8080252C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_18:
    // 0x80802530: b           L_80802B80
    // 0x80802534: sb          $t8, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r24;
        goto L_80802B80;
    // 0x80802534: sb          $t8, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r24;
L_80802538:
    // 0x80802538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080253C: jal         0x80001BD0
    // 0x80802540: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80801BD0_gczoombox(rdram, ctx);
        goto after_23;
    // 0x80802540: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_23:
    // 0x80802544: lbu         $v0, 0x177($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X177);
    // 0x80802548: andi        $t9, $v0, 0x8
    ctx->r25 = ctx->r2 & 0X8;
    // 0x8080254C: beq         $t9, $zero, L_80802570
    if (ctx->r25 == 0) {
        // 0x80802550: andi        $t2, $v0, 0x4
        ctx->r10 = ctx->r2 & 0X4;
            goto L_80802570;
    }
    // 0x80802550: andi        $t2, $v0, 0x4
    ctx->r10 = ctx->r2 & 0X4;
    // 0x80802554: lbu         $t0, 0x1E4($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X1E4);
    // 0x80802558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080255C: andi        $t1, $t0, 0xFFF7
    ctx->r9 = ctx->r8 & 0XFFF7;
    // 0x80802560: jal         0x800004D0
    // 0x80802564: sb          $t1, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r9;
    func_808004D0_gczoombox(rdram, ctx);
        goto after_24;
    // 0x80802564: sb          $t1, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r9;
    after_24:
    // 0x80802568: b           L_80802B84
    // 0x8080256C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80802B84;
    // 0x8080256C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80802570:
    // 0x80802570: beq         $t2, $zero, L_80802B80
    if (ctx->r10 == 0) {
        // 0x80802574: addiu       $t6, $zero, 0x4
        ctx->r14 = ADD32(0, 0X4);
            goto L_80802B80;
    }
    // 0x80802574: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80802578: lbu         $t3, 0x1E4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1E4);
    // 0x8080257C: sb          $zero, 0x170($s0)
    MEM_B(0X170, ctx->r16) = 0;
    // 0x80802580: sb          $t6, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r14;
    // 0x80802584: andi        $t4, $t3, 0xFFFD
    ctx->r12 = ctx->r11 & 0XFFFD;
    // 0x80802588: b           L_80802B80
    // 0x8080258C: sb          $t4, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r12;
        goto L_80802B80;
    // 0x8080258C: sb          $t4, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r12;
L_80802590:
    // 0x80802590: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80802594: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80802598: nop

    // 0x8080259C: swc1        $f8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f8.u32l;
    // 0x808025A0: lhu         $t7, 0x1E4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X1E4);
    // 0x808025A4: andi        $t5, $t7, 0x1
    ctx->r13 = ctx->r15 & 0X1;
    // 0x808025A8: beql        $t5, $zero, L_808025EC
    if (ctx->r13 == 0) {
        // 0x808025AC: lw          $t1, 0x1E4($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X1E4);
            goto L_808025EC;
    }
    goto skip_19;
    // 0x808025AC: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
    skip_19:
    // 0x808025B0: jal         0x80000364
    // 0x808025B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800364_gczoombox(rdram, ctx);
        goto after_25;
    // 0x808025B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x808025B8: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x808025BC: lw          $t8, 0x1E4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1E4);
    // 0x808025C0: sll         $t0, $t8, 17
    ctx->r8 = S32(ctx->r24 << 17);
    // 0x808025C4: bgezl       $t0, L_808025EC
    if (SIGNED(ctx->r8) >= 0) {
        // 0x808025C8: lw          $t1, 0x1E4($s0)
        ctx->r9 = MEM_W(ctx->r16, 0X1E4);
            goto L_808025EC;
    }
    goto skip_20;
    // 0x808025C8: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
    skip_20:
    // 0x808025CC: lwc1        $f10, 0x1EC($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1EC);
    // 0x808025D0: lwc1        $f16, 0x1F4($s0)
    ctx->f16.u32l = MEM_W(ctx->r16, 0X1F4);
    // 0x808025D4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808025D8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x808025DC: div.s       $f4, $f10, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x808025E0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x808025E4: swc1        $f6, 0x1C0($s0)
    MEM_W(0X1C0, ctx->r16) = ctx->f6.u32l;
    // 0x808025E8: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
L_808025EC:
    // 0x808025EC: sll         $t3, $t1, 20
    ctx->r11 = S32(ctx->r9 << 20);
    // 0x808025F0: bgezl       $t3, L_80802650
    if (SIGNED(ctx->r11) >= 0) {
        // 0x808025F4: lhu         $t7, 0x1E4($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X1E4);
            goto L_80802650;
    }
    goto skip_21;
    // 0x808025F4: lhu         $t7, 0x1E4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X1E4);
    skip_21:
    // 0x808025F8: lhu         $t4, 0x1E4($s0)
    ctx->r12 = MEM_HU(ctx->r16, 0X1E4);
    // 0x808025FC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3E1C) << 16);
    // 0x80802600: andi        $t6, $t4, 0x1
    ctx->r14 = ctx->r12 & 0X1;
    // 0x80802604: beql        $t6, $zero, L_80802650
    if (ctx->r14 == 0) {
        // 0x80802608: lhu         $t7, 0x1E4($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X1E4);
            goto L_80802650;
    }
    goto skip_22;
    // 0x80802608: lhu         $t7, 0x1E4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X1E4);
    skip_22:
    // 0x8080260C: lwc1        $f8, 0x1F4($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1F4);
    // 0x80802610: lwc1        $f10, 0x3E1C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3E1C));
    // 0x80802614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802618: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x8080261C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x80802620: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80802624: jal         0x800003D8
    // 0x80802628: nop

    func_808003D8_gczoombox(rdram, ctx);
        goto after_26;
    // 0x80802628: nop

    after_26:
    // 0x8080262C: beql        $v0, $zero, L_80802650
    if (ctx->r2 == 0) {
        // 0x80802630: lhu         $t7, 0x1E4($s0)
        ctx->r15 = MEM_HU(ctx->r16, 0X1E4);
            goto L_80802650;
    }
    goto skip_23;
    // 0x80802630: lhu         $t7, 0x1E4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X1E4);
    skip_23:
    // 0x80802634: jal         0x800C710C
    // 0x80802638: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800C710C(rdram, ctx);
        goto after_27;
    // 0x80802638: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_27:
    // 0x8080263C: beq         $v0, $zero, L_8080264C
    if (ctx->r2 == 0) {
        // 0x80802640: addiu       $a0, $zero, 0x2
        ctx->r4 = ADD32(0, 0X2);
            goto L_8080264C;
    }
    // 0x80802640: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80802644: jal         0x800880D8
    // 0x80802648: lh          $a1, 0x16A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16A);
    _gcaudiolist_entrypoint_1(rdram, ctx);
        goto after_28;
    // 0x80802648: lh          $a1, 0x16A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16A);
    after_28:
L_8080264C:
    // 0x8080264C: lhu         $t7, 0x1E4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X1E4);
L_80802650:
    // 0x80802650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802654: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x80802658: andi        $t5, $t7, 0x1
    ctx->r13 = ctx->r15 & 0X1;
    // 0x8080265C: beql        $t5, $zero, L_808026CC
    if (ctx->r13 == 0) {
        // 0x80802660: lhu         $t3, 0x1E4($s0)
        ctx->r11 = MEM_HU(ctx->r16, 0X1E4);
            goto L_808026CC;
    }
    goto skip_24;
    // 0x80802660: lhu         $t3, 0x1E4($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X1E4);
    skip_24:
    // 0x80802664: jal         0x800003D8
    // 0x80802668: lw          $a2, 0x1F4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1F4);
    func_808003D8_gczoombox(rdram, ctx);
        goto after_29;
    // 0x80802668: lw          $a2, 0x1F4($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X1F4);
    after_29:
    // 0x8080266C: beql        $v0, $zero, L_808026CC
    if (ctx->r2 == 0) {
        // 0x80802670: lhu         $t3, 0x1E4($s0)
        ctx->r11 = MEM_HU(ctx->r16, 0X1E4);
            goto L_808026CC;
    }
    goto skip_25;
    // 0x80802670: lhu         $t3, 0x1E4($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X1E4);
    skip_25:
    // 0x80802674: lw          $t8, 0x1E4($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X1E4);
    // 0x80802678: lwc1        $f18, 0x1F4($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1F4);
    // 0x8080267C: sll         $t0, $t8, 17
    ctx->r8 = S32(ctx->r24 << 17);
    // 0x80802680: bgez        $t0, L_80802690
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80802684: swc1        $f18, 0x1EC($s0)
        MEM_W(0X1EC, ctx->r16) = ctx->f18.u32l;
            goto L_80802690;
    }
    // 0x80802684: swc1        $f18, 0x1EC($s0)
    MEM_W(0X1EC, ctx->r16) = ctx->f18.u32l;
    // 0x80802688: jal         0x800000C4
    // 0x8080268C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C4_gczoombox(rdram, ctx);
        goto after_30;
    // 0x8080268C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
L_80802690:
    // 0x80802690: lbu         $t1, 0x1E6($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1E6);
    // 0x80802694: andi        $t8, $t1, 0xFFDF
    ctx->r24 = ctx->r9 & 0XFFDF;
    // 0x80802698: sb          $t8, 0x1E6($s0)
    MEM_B(0X1E6, ctx->r16) = ctx->r24;
    // 0x8080269C: lw          $t3, 0x1E4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1E4);
    // 0x808026A0: lbu         $t1, 0x1E5($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1E5);
    // 0x808026A4: andi        $t9, $t8, 0xBF
    ctx->r25 = ctx->r24 & 0XBF;
    // 0x808026A8: sll         $t4, $t3, 18
    ctx->r12 = S32(ctx->r11 << 18);
    // 0x808026AC: srl         $t6, $t4, 31
    ctx->r14 = S32(U32(ctx->r12) >> 31);
    // 0x808026B0: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x808026B4: andi        $t5, $t7, 0x40
    ctx->r13 = ctx->r15 & 0X40;
    // 0x808026B8: or          $t0, $t5, $t9
    ctx->r8 = ctx->r13 | ctx->r25;
    // 0x808026BC: andi        $t2, $t1, 0xFFFE
    ctx->r10 = ctx->r9 & 0XFFFE;
    // 0x808026C0: sb          $t0, 0x1E6($s0)
    MEM_B(0X1E6, ctx->r16) = ctx->r8;
    // 0x808026C4: sb          $t2, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r10;
    // 0x808026C8: lhu         $t3, 0x1E4($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X1E4);
L_808026CC:
    // 0x808026CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808026D0: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x808026D4: bnel        $t4, $zero, L_80802B84
    if (ctx->r12 != 0) {
        // 0x808026D8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80802B84;
    }
    goto skip_26;
    // 0x808026D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_26:
    // 0x808026DC: jal         0x80001BD0
    // 0x808026E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80801BD0_gczoombox(rdram, ctx);
        goto after_31;
    // 0x808026E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_31:
    // 0x808026E4: lbu         $v0, 0x177($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X177);
    // 0x808026E8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808026EC: andi        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 & 0X4;
    // 0x808026F0: beq         $t6, $zero, L_80802700
    if (ctx->r14 == 0) {
        // 0x808026F4: andi        $t8, $v0, 0x8
        ctx->r24 = ctx->r2 & 0X8;
            goto L_80802700;
    }
    // 0x808026F4: andi        $t8, $v0, 0x8
    ctx->r24 = ctx->r2 & 0X8;
    // 0x808026F8: b           L_80802B80
    // 0x808026FC: sb          $t7, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r15;
        goto L_80802B80;
    // 0x808026FC: sb          $t7, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r15;
L_80802700:
    // 0x80802700: beql        $t8, $zero, L_80802B84
    if (ctx->r24 == 0) {
        // 0x80802704: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80802B84;
    }
    goto skip_27;
    // 0x80802704: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_27:
    // 0x80802708: jal         0x800004D0
    // 0x8080270C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808004D0_gczoombox(rdram, ctx);
        goto after_32;
    // 0x8080270C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80802710: b           L_80802B84
    // 0x80802714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80802B84;
    // 0x80802714: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80802718:
    // 0x80802718: lhu         $t5, 0x1E4($s0)
    ctx->r13 = MEM_HU(ctx->r16, 0X1E4);
    // 0x8080271C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80802720: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80802724: andi        $t9, $t5, 0x1
    ctx->r25 = ctx->r13 & 0X1;
    // 0x80802728: beql        $t9, $zero, L_80802760
    if (ctx->r25 == 0) {
        // 0x8080272C: lw          $t3, 0x1E4($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X1E4);
            goto L_80802760;
    }
    goto skip_28;
    // 0x8080272C: lw          $t3, 0x1E4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1E4);
    skip_28:
    // 0x80802730: jal         0x80000364
    // 0x80802734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800364_gczoombox(rdram, ctx);
        goto after_33;
    // 0x80802734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_33:
    // 0x80802738: lw          $t0, 0x1E4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1E4);
    // 0x8080273C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
    // 0x80802740: sll         $t2, $t0, 17
    ctx->r10 = S32(ctx->r8 << 17);
    // 0x80802744: bgezl       $t2, L_80802760
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80802748: lw          $t3, 0x1E4($s0)
        ctx->r11 = MEM_W(ctx->r16, 0X1E4);
            goto L_80802760;
    }
    goto skip_29;
    // 0x80802748: lw          $t3, 0x1E4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1E4);
    skip_29:
    // 0x8080274C: lwc1        $f4, 0x1EC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1EC);
    // 0x80802750: lwc1        $f6, 0x1F4($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X1F4);
    // 0x80802754: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80802758: swc1        $f8, 0x1C0($s0)
    MEM_W(0X1C0, ctx->r16) = ctx->f8.u32l;
    // 0x8080275C: lw          $t3, 0x1E4($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X1E4);
L_80802760:
    // 0x80802760: sll         $t6, $t3, 20
    ctx->r14 = S32(ctx->r11 << 20);
    // 0x80802764: bgezl       $t6, L_808027C4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80802768: lhu         $v0, 0x1E4($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X1E4);
            goto L_808027C4;
    }
    goto skip_30;
    // 0x80802768: lhu         $v0, 0x1E4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E4);
    skip_30:
    // 0x8080276C: lhu         $t7, 0x1E4($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X1E4);
    // 0x80802770: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3E20) << 16);
    // 0x80802774: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80802778: beql        $t8, $zero, L_808027C4
    if (ctx->r24 == 0) {
        // 0x8080277C: lhu         $v0, 0x1E4($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X1E4);
            goto L_808027C4;
    }
    goto skip_31;
    // 0x8080277C: lhu         $v0, 0x1E4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E4);
    skip_31:
    // 0x80802780: lwc1        $f10, 0x1F4($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1F4);
    // 0x80802784: lwc1        $f16, 0x3E20($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3E20));
    // 0x80802788: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x8080278C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802790: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80802794: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80802798: jal         0x800003D8
    // 0x8080279C: nop

    func_808003D8_gczoombox(rdram, ctx);
        goto after_34;
    // 0x8080279C: nop

    after_34:
    // 0x808027A0: beql        $v0, $zero, L_808027C4
    if (ctx->r2 == 0) {
        // 0x808027A4: lhu         $v0, 0x1E4($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X1E4);
            goto L_808027C4;
    }
    goto skip_32;
    // 0x808027A4: lhu         $v0, 0x1E4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E4);
    skip_32:
    // 0x808027A8: jal         0x800C710C
    // 0x808027AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800C710C(rdram, ctx);
        goto after_35;
    // 0x808027AC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_35:
    // 0x808027B0: beq         $v0, $zero, L_808027C0
    if (ctx->r2 == 0) {
        // 0x808027B4: addiu       $a0, $zero, 0x3
        ctx->r4 = ADD32(0, 0X3);
            goto L_808027C0;
    }
    // 0x808027B4: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x808027B8: jal         0x800880D8
    // 0x808027BC: lh          $a1, 0x16A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16A);
    _gcaudiolist_entrypoint_1(rdram, ctx);
        goto after_36;
    // 0x808027BC: lh          $a1, 0x16A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16A);
    after_36:
L_808027C0:
    // 0x808027C0: lhu         $v0, 0x1E4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E4);
L_808027C4:
    // 0x808027C4: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x808027C8: beq         $t5, $zero, L_80802848
    if (ctx->r13 == 0) {
        // 0x808027CC: or          $v0, $t5, $zero
        ctx->r2 = ctx->r13 | 0;
            goto L_80802848;
    }
    // 0x808027CC: or          $v0, $t5, $zero
    ctx->r2 = ctx->r13 | 0;
    // 0x808027D0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808027D4: lwc1        $f4, 0x1EC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X1EC);
    // 0x808027D8: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x808027DC: nop

    // 0x808027E0: bc1f        L_80802848
    if (!c1cs) {
        // 0x808027E4: nop
    
            goto L_80802848;
    }
    // 0x808027E4: nop

    // 0x808027E8: lw          $t9, 0x1E4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X1E4);
    // 0x808027EC: swc1        $f0, 0x1EC($s0)
    MEM_W(0X1EC, ctx->r16) = ctx->f0.u32l;
    // 0x808027F0: sll         $t1, $t9, 17
    ctx->r9 = S32(ctx->r25 << 17);
    // 0x808027F4: bgezl       $t1, L_80802808
    if (SIGNED(ctx->r9) >= 0) {
        // 0x808027F8: lbu         $t2, 0x1E6($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X1E6);
            goto L_80802808;
    }
    goto skip_33;
    // 0x808027F8: lbu         $t2, 0x1E6($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1E6);
    skip_33:
    // 0x808027FC: jal         0x800000C4
    // 0x80802800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C4_gczoombox(rdram, ctx);
        goto after_37;
    // 0x80802800: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x80802804: lbu         $t2, 0x1E6($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1E6);
L_80802808:
    // 0x80802808: andi        $t9, $t2, 0xFFDF
    ctx->r25 = ctx->r10 & 0XFFDF;
    // 0x8080280C: lbu         $t2, 0x1E5($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1E5);
    // 0x80802810: sb          $t9, 0x1E6($s0)
    MEM_B(0X1E6, ctx->r16) = ctx->r25;
    // 0x80802814: lw          $t4, 0x1E4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X1E4);
    // 0x80802818: andi        $t3, $t2, 0xFFFE
    ctx->r11 = ctx->r10 & 0XFFFE;
    // 0x8080281C: sb          $t3, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r11;
    // 0x80802820: sll         $t6, $t4, 18
    ctx->r14 = S32(ctx->r12 << 18);
    // 0x80802824: lhu         $v0, 0x1E4($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X1E4);
    // 0x80802828: srl         $t7, $t6, 31
    ctx->r15 = S32(U32(ctx->r14) >> 31);
    // 0x8080282C: sll         $t8, $t7, 6
    ctx->r24 = S32(ctx->r15 << 6);
    // 0x80802830: andi        $t5, $t8, 0x40
    ctx->r13 = ctx->r24 & 0X40;
    // 0x80802834: andi        $t0, $t9, 0xBF
    ctx->r8 = ctx->r25 & 0XBF;
    // 0x80802838: or          $t1, $t5, $t0
    ctx->r9 = ctx->r13 | ctx->r8;
    // 0x8080283C: andi        $t4, $v0, 0x1
    ctx->r12 = ctx->r2 & 0X1;
    // 0x80802840: sb          $t1, 0x1E6($s0)
    MEM_B(0X1E6, ctx->r16) = ctx->r9;
    // 0x80802844: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
L_80802848:
    // 0x80802848: bne         $v0, $zero, L_80802B80
    if (ctx->r2 != 0) {
        // 0x8080284C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80802B80;
    }
    // 0x8080284C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802850: jal         0x80001BD0
    // 0x80802854: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80801BD0_gczoombox(rdram, ctx);
        goto after_38;
    // 0x80802854: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_38:
    // 0x80802858: lbu         $v0, 0x177($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X177);
    // 0x8080285C: andi        $t6, $v0, 0x10
    ctx->r14 = ctx->r2 & 0X10;
    // 0x80802860: beq         $t6, $zero, L_80802878
    if (ctx->r14 == 0) {
        // 0x80802864: andi        $t7, $v0, 0x2
        ctx->r15 = ctx->r2 & 0X2;
            goto L_80802878;
    }
    // 0x80802864: andi        $t7, $v0, 0x2
    ctx->r15 = ctx->r2 & 0X2;
    // 0x80802868: jal         0x80001B90
    // 0x8080286C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80801B90_gczoombox(rdram, ctx);
        goto after_39;
    // 0x8080286C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_39:
    // 0x80802870: b           L_80802B84
    // 0x80802874: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80802B84;
    // 0x80802874: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80802878:
    // 0x80802878: beql        $t7, $zero, L_80802B84
    if (ctx->r15 == 0) {
        // 0x8080287C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80802B84;
    }
    goto skip_34;
    // 0x8080287C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_34:
    // 0x80802880: jal         0x80000470
    // 0x80802884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800470_gczoombox(rdram, ctx);
        goto after_40;
    // 0x80802884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_40:
    // 0x80802888: b           L_80802B84
    // 0x8080288C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80802B84;
    // 0x8080288C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80802890:
    // 0x80802890: jal         0x80000964
    // 0x80802894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800964_gczoombox(rdram, ctx);
        goto after_41;
    // 0x80802894: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
    // 0x80802898: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080289C: jal         0x80001BD0
    // 0x808028A0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80801BD0_gczoombox(rdram, ctx);
        goto after_42;
    // 0x808028A0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_42:
    // 0x808028A4: b           L_80802B84
    // 0x808028A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80802B84;
    // 0x808028A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808028AC:
    // 0x808028AC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x808028B0: lwc1        $f8, 0x1E0($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X1E0);
    // 0x808028B4: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x808028B8: nop

    // 0x808028BC: bc1fl       L_808028D4
    if (!c1cs) {
        // 0x808028C0: lw          $t0, 0x1E4($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X1E4);
            goto L_808028D4;
    }
    goto skip_35;
    // 0x808028C0: lw          $t0, 0x1E4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1E4);
    skip_35:
    // 0x808028C4: lbu         $t9, 0x1E4($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1E4);
    // 0x808028C8: ori         $t5, $t9, 0x10
    ctx->r13 = ctx->r25 | 0X10;
    // 0x808028CC: sb          $t5, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r13;
    // 0x808028D0: lw          $t0, 0x1E4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X1E4);
L_808028D4:
    // 0x808028D4: sll         $t2, $t0, 20
    ctx->r10 = S32(ctx->r8 << 20);
    // 0x808028D8: bgezl       $t2, L_80802914
    if (SIGNED(ctx->r10) >= 0) {
        // 0x808028DC: lbu         $t3, 0x1E4($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X1E4);
            goto L_80802914;
    }
    goto skip_36;
    // 0x808028DC: lbu         $t3, 0x1E4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1E4);
    skip_36:
    // 0x808028E0: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808028E4: lwc1        $f10, 0x1E0($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X1E0);
    // 0x808028E8: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x808028EC: nop

    // 0x808028F0: bc1fl       L_80802914
    if (!c1cs) {
        // 0x808028F4: lbu         $t3, 0x1E4($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X1E4);
            goto L_80802914;
    }
    goto skip_37;
    // 0x808028F4: lbu         $t3, 0x1E4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1E4);
    skip_37:
    // 0x808028F8: jal         0x800C710C
    // 0x808028FC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800C710C(rdram, ctx);
        goto after_43;
    // 0x808028FC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_43:
    // 0x80802900: beq         $v0, $zero, L_80802910
    if (ctx->r2 == 0) {
        // 0x80802904: addiu       $a0, $zero, 0x4
        ctx->r4 = ADD32(0, 0X4);
            goto L_80802910;
    }
    // 0x80802904: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80802908: jal         0x800880D8
    // 0x8080290C: lh          $a1, 0x16A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16A);
    _gcaudiolist_entrypoint_1(rdram, ctx);
        goto after_44;
    // 0x8080290C: lh          $a1, 0x16A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16A);
    after_44:
L_80802910:
    // 0x80802910: lbu         $t3, 0x1E4($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1E4);
L_80802914:
    // 0x80802914: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(688, 0X3E44) << 16);
    // 0x80802918: lwc1        $f14, 0x1E0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X1E0);
    // 0x8080291C: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80802920: beq         $t4, $zero, L_80802960
    if (ctx->r12 == 0) {
        // 0x80802924: addiu       $a1, $a1, 0x3E44
        ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(688, 0X3E44));
            goto L_80802960;
    }
    // 0x80802924: addiu       $a1, $a1, 0x3E44
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(688, 0X3E44));
    // 0x80802928: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(688, 0X3E44) << 16);
    // 0x8080292C: addiu       $a1, $a1, 0x3E44
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(688, 0X3E44));
    // 0x80802930: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x80802934: jal         0x800F3780
    // 0x80802938: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_800F3780(rdram, ctx);
        goto after_45;
    // 0x80802938: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_45:
    // 0x8080293C: lh          $v0, 0x1B2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1B2);
    // 0x80802940: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80802944: nop

    // 0x80802948: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8080294C: add.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f18.fl;
    // 0x80802950: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80802954: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x80802958: b           L_80802990
    // 0x8080295C: sh          $t7, 0x1AE($s0)
    MEM_H(0X1AE, ctx->r16) = ctx->r15;
        goto L_80802990;
    // 0x8080295C: sh          $t7, 0x1AE($s0)
    MEM_H(0X1AE, ctx->r16) = ctx->r15;
L_80802960:
    // 0x80802960: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
    // 0x80802964: jal         0x800F3780
    // 0x80802968: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    func_800F3780(rdram, ctx);
        goto after_46;
    // 0x80802968: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    after_46:
    // 0x8080296C: lh          $v0, 0x1B2($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X1B2);
    // 0x80802970: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x80802974: nop

    // 0x80802978: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8080297C: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x80802980: trunc.w.s   $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80802984: mfc1        $t9, $f18
    ctx->r25 = (int32_t)ctx->f18.u32l;
    // 0x80802988: nop

    // 0x8080298C: sh          $t9, 0x1AE($s0)
    MEM_H(0X1AE, ctx->r16) = ctx->r25;
L_80802990:
    // 0x80802990: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80802994: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80802998: lwc1        $f14, 0x1E0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X1E0);
    // 0x8080299C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808029A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808029A4: c.le.s      $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f4.fl <= ctx->f14.fl;
    // 0x808029A8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x808029AC: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808029B0: bc1fl       L_808029FC
    if (!c1cs) {
        // 0x808029B4: mtc1        $at, $f6
        ctx->f6.u32l = ctx->r1;
            goto L_808029FC;
    }
    goto skip_38;
    // 0x808029B4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    skip_38:
    // 0x808029B8: jal         0x80001BD0
    // 0x808029BC: sh          $v0, 0x1AE($s0)
    MEM_H(0X1AE, ctx->r16) = ctx->r2;
    func_80801BD0_gczoombox(rdram, ctx);
        goto after_47;
    // 0x808029BC: sh          $v0, 0x1AE($s0)
    MEM_H(0X1AE, ctx->r16) = ctx->r2;
    after_47:
    // 0x808029C0: lbu         $v0, 0x177($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X177);
    // 0x808029C4: andi        $t5, $v0, 0x2
    ctx->r13 = ctx->r2 & 0X2;
    // 0x808029C8: beq         $t5, $zero, L_808029E0
    if (ctx->r13 == 0) {
        // 0x808029CC: andi        $t0, $v0, 0x10
        ctx->r8 = ctx->r2 & 0X10;
            goto L_808029E0;
    }
    // 0x808029CC: andi        $t0, $v0, 0x10
    ctx->r8 = ctx->r2 & 0X10;
    // 0x808029D0: jal         0x80000470
    // 0x808029D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800470_gczoombox(rdram, ctx);
        goto after_48;
    // 0x808029D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_48:
    // 0x808029D8: b           L_80802B84
    // 0x808029DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80802B84;
    // 0x808029DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808029E0:
    // 0x808029E0: beql        $t0, $zero, L_80802B84
    if (ctx->r8 == 0) {
        // 0x808029E4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80802B84;
    }
    goto skip_39;
    // 0x808029E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_39:
    // 0x808029E8: jal         0x80001B90
    // 0x808029EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80801B90_gczoombox(rdram, ctx);
        goto after_49;
    // 0x808029EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_49:
    // 0x808029F0: b           L_80802B84
    // 0x808029F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80802B84;
    // 0x808029F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808029F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
L_808029FC:
    // 0x808029FC: nop

    // 0x80802A00: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80802A04: add.s       $f16, $f14, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f14.fl + ctx->f10.fl;
    // 0x80802A08: b           L_80802B80
    // 0x80802A0C: swc1        $f16, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = ctx->f16.u32l;
        goto L_80802B80;
    // 0x80802A0C: swc1        $f16, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = ctx->f16.u32l;
L_80802A10:
    // 0x80802A10: lw          $t1, 0x1E4($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X1E4);
    // 0x80802A14: sll         $t3, $t1, 20
    ctx->r11 = S32(ctx->r9 << 20);
    // 0x80802A18: bgezl       $t3, L_80802A54
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80802A1C: lbu         $t4, 0x1E4($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X1E4);
            goto L_80802A54;
    }
    goto skip_40;
    // 0x80802A1C: lbu         $t4, 0x1E4($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1E4);
    skip_40:
    // 0x80802A20: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80802A24: lwc1        $f18, 0x1E0($s0)
    ctx->f18.u32l = MEM_W(ctx->r16, 0X1E0);
    // 0x80802A28: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x80802A2C: nop

    // 0x80802A30: bc1fl       L_80802A54
    if (!c1cs) {
        // 0x80802A34: lbu         $t4, 0x1E4($s0)
        ctx->r12 = MEM_BU(ctx->r16, 0X1E4);
            goto L_80802A54;
    }
    goto skip_41;
    // 0x80802A34: lbu         $t4, 0x1E4($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1E4);
    skip_41:
    // 0x80802A38: jal         0x800C710C
    // 0x80802A3C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_800C710C(rdram, ctx);
        goto after_50;
    // 0x80802A3C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_50:
    // 0x80802A40: beq         $v0, $zero, L_80802A50
    if (ctx->r2 == 0) {
        // 0x80802A44: addiu       $a0, $zero, 0x5
        ctx->r4 = ADD32(0, 0X5);
            goto L_80802A50;
    }
    // 0x80802A44: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    // 0x80802A48: jal         0x800880D8
    // 0x80802A4C: lh          $a1, 0x16A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16A);
    _gcaudiolist_entrypoint_1(rdram, ctx);
        goto after_51;
    // 0x80802A4C: lh          $a1, 0x16A($s0)
    ctx->r5 = MEM_H(ctx->r16, 0X16A);
    after_51:
L_80802A50:
    // 0x80802A50: lbu         $t4, 0x1E4($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1E4);
L_80802A54:
    // 0x80802A54: lwc1        $f14, 0x1E0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X1E0);
    // 0x80802A58: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80802A5C: andi        $t6, $t4, 0x1
    ctx->r14 = ctx->r12 & 0X1;
    // 0x80802A60: beq         $t6, $zero, L_80802AA8
    if (ctx->r14 == 0) {
        // 0x80802A64: lui         $a1, 0x0
        ctx->r5 = S32(RELOC_HI16(688, 0X3E44) << 16);
            goto L_80802AA8;
    }
    // 0x80802A64: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(688, 0X3E44) << 16);
    // 0x80802A68: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80802A6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80802A70: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(688, 0X3E44) << 16);
    // 0x80802A74: addiu       $a1, $a1, 0x3E44
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(688, 0X3E44));
    // 0x80802A78: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80802A7C: jal         0x800F3780
    // 0x80802A80: sub.s       $f12, $f4, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f14.fl;
    func_800F3780(rdram, ctx);
        goto after_52;
    // 0x80802A80: sub.s       $f12, $f4, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f14.fl;
    after_52:
    // 0x80802A84: lh          $t7, 0x1B2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X1B2);
    // 0x80802A88: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x80802A8C: nop

    // 0x80802A90: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80802A94: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x80802A98: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x80802A9C: mfc1        $t9, $f16
    ctx->r25 = (int32_t)ctx->f16.u32l;
    // 0x80802AA0: b           L_80802AE0
    // 0x80802AA4: sh          $t9, 0x1AE($s0)
    MEM_H(0X1AE, ctx->r16) = ctx->r25;
        goto L_80802AE0;
    // 0x80802AA4: sh          $t9, 0x1AE($s0)
    MEM_H(0X1AE, ctx->r16) = ctx->r25;
L_80802AA8:
    // 0x80802AA8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80802AAC: addiu       $a1, $a1, 0x3E44
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(688, 0X3E44));
    // 0x80802AB0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80802AB4: jal         0x800F3780
    // 0x80802AB8: sub.s       $f12, $f18, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f14.fl;
    func_800F3780(rdram, ctx);
        goto after_53;
    // 0x80802AB8: sub.s       $f12, $f18, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f12.fl = ctx->f18.fl - ctx->f14.fl;
    after_53:
    // 0x80802ABC: lh          $t5, 0x1B2($s0)
    ctx->r13 = MEM_H(ctx->r16, 0X1B2);
    // 0x80802AC0: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x80802AC4: nop

    // 0x80802AC8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80802ACC: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x80802AD0: trunc.w.s   $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = TRUNC_W_S(ctx->f8.fl);
    // 0x80802AD4: mfc1        $t1, $f10
    ctx->r9 = (int32_t)ctx->f10.u32l;
    // 0x80802AD8: nop

    // 0x80802ADC: sh          $t1, 0x1AE($s0)
    MEM_H(0X1AE, ctx->r16) = ctx->r9;
L_80802AE0:
    // 0x80802AE0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80802AE4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80802AE8: lwc1        $f14, 0x1E0($s0)
    ctx->f14.u32l = MEM_W(ctx->r16, 0X1E0);
    // 0x80802AEC: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80802AF0: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80802AF4: c.le.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl <= ctx->f14.fl;
    // 0x80802AF8: nop

    // 0x80802AFC: bc1fl       L_80802B54
    if (!c1cs) {
        // 0x80802B00: mtc1        $at, $f18
        ctx->f18.u32l = ctx->r1;
            goto L_80802B54;
    }
    goto skip_42;
    // 0x80802B00: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    skip_42:
    // 0x80802B04: lbu         $t2, 0x1E4($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X1E4);
    // 0x80802B08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80802B0C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80802B10: andi        $t3, $t2, 0xFFEF
    ctx->r11 = ctx->r10 & 0XFFEF;
    // 0x80802B14: jal         0x80001BD0
    // 0x80802B18: sb          $t3, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r11;
    func_80801BD0_gczoombox(rdram, ctx);
        goto after_54;
    // 0x80802B18: sb          $t3, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r11;
    after_54:
    // 0x80802B1C: lbu         $v0, 0x177($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X177);
    // 0x80802B20: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80802B24: andi        $t4, $v0, 0x20
    ctx->r12 = ctx->r2 & 0X20;
    // 0x80802B28: beq         $t4, $zero, L_80802B38
    if (ctx->r12 == 0) {
        // 0x80802B2C: andi        $t7, $v0, 0x1
        ctx->r15 = ctx->r2 & 0X1;
            goto L_80802B38;
    }
    // 0x80802B2C: andi        $t7, $v0, 0x1
    ctx->r15 = ctx->r2 & 0X1;
    // 0x80802B30: b           L_80802B80
    // 0x80802B34: sb          $t6, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r14;
        goto L_80802B80;
    // 0x80802B34: sb          $t6, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r14;
L_80802B38:
    // 0x80802B38: beql        $t7, $zero, L_80802B84
    if (ctx->r15 == 0) {
        // 0x80802B3C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80802B84;
    }
    goto skip_43;
    // 0x80802B3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_43:
    // 0x80802B40: jal         0x80001B30
    // 0x80802B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80801B30_gczoombox(rdram, ctx);
        goto after_55;
    // 0x80802B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_55:
    // 0x80802B48: b           L_80802B84
    // 0x80802B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80802B84;
    // 0x80802B4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80802B50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
L_80802B54:
    // 0x80802B54: nop

    // 0x80802B58: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80802B5C: add.s       $f8, $f14, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f14.fl + ctx->f6.fl;
    // 0x80802B60: b           L_80802B80
    // 0x80802B64: swc1        $f8, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = ctx->f8.u32l;
        goto L_80802B80;
    // 0x80802B64: swc1        $f8, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = ctx->f8.u32l;
L_80802B68:
    // 0x80802B68: lbu         $t8, 0x177($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X177);
    // 0x80802B6C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80802B70: beql        $t9, $zero, L_80802B84
    if (ctx->r25 == 0) {
        // 0x80802B74: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80802B84;
    }
    goto skip_44;
    // 0x80802B74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_44:
    // 0x80802B78: jal         0x80001B30
    // 0x80802B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80801B30_gczoombox(rdram, ctx);
        goto after_56;
    // 0x80802B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_56:
L_80802B80:
    // 0x80802B80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80802B84:
    // 0x80802B84: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80802B88: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    // 0x80802B8C: jr          $ra
    // 0x80802B90: nop

    return;
    // 0x80802B90: nop

;}
RECOMP_FUNC void func_80802B94_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802B94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80802B98: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x80802B9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80802BA0: beq         $a1, $at, L_80802BDC
    if (ctx->r5 == ctx->r1) {
        // 0x80802BA4: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80802BDC;
    }
    // 0x80802BA4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80802BA8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80802BAC: jal         0x80088418
    // 0x80802BB0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    _gczoomboxdata_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80802BB0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80802BB4: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80802BB8: andi        $a0, $v0, 0xFFFF
    ctx->r4 = ctx->r2 & 0XFFFF;
    // 0x80802BBC: jal         0x800D674C
    // 0x80802BC0: sh          $v0, 0x140($a2)
    MEM_H(0X140, ctx->r6) = ctx->r2;
    func_800D674C(rdram, ctx);
        goto after_1;
    // 0x80802BC0: sh          $v0, 0x140($a2)
    MEM_H(0X140, ctx->r6) = ctx->r2;
    after_1:
    // 0x80802BC4: jal         0x800AF5A0
    // 0x80802BC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800AF5A0(rdram, ctx);
        goto after_2;
    // 0x80802BC8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80802BCC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80802BD0: sb          $v0, 0x1D1($a2)
    MEM_B(0X1D1, ctx->r6) = ctx->r2;
    // 0x80802BD4: b           L_80802BE4
    // 0x80802BD8: sb          $zero, 0x1CF($a2)
    MEM_B(0X1CF, ctx->r6) = 0;
        goto L_80802BE4;
    // 0x80802BD8: sb          $zero, 0x1CF($a2)
    MEM_B(0X1CF, ctx->r6) = 0;
L_80802BDC:
    // 0x80802BDC: sh          $zero, 0x140($a2)
    MEM_H(0X140, ctx->r6) = 0;
    // 0x80802BE0: sb          $zero, 0x1D1($a2)
    MEM_B(0X1D1, ctx->r6) = 0;
L_80802BE4:
    // 0x80802BE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80802BE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80802BEC: jr          $ra
    // 0x80802BF0: nop

    return;
    // 0x80802BF0: nop

;}
RECOMP_FUNC void func_80802BF4_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802BF4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80802BF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80802BFC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80802C00: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80802C04: lbu         $t6, 0x178($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X178);
    // 0x80802C08: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80802C0C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80802C10: blezl       $t6, L_80802C70
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80802C14: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80802C70;
    }
    goto skip_0;
    // 0x80802C14: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80802C18: lbu         $t7, 0x1E6($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X1E6);
L_80802C1C:
    // 0x80802C1C: addu        $t9, $s1, $s0
    ctx->r25 = ADD32(ctx->r17, ctx->r16);
    // 0x80802C20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80802C24: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80802C28: beql        $t8, $zero, L_80802C3C
    if (ctx->r24 == 0) {
        // 0x80802C2C: lw          $t0, 0x1E4($s1)
        ctx->r8 = MEM_W(ctx->r17, 0X1E4);
            goto L_80802C3C;
    }
    goto skip_1;
    // 0x80802C2C: lw          $t0, 0x1E4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X1E4);
    skip_1:
    // 0x80802C30: jal         0x800C431C
    // 0x80802C34: lbu         $a0, 0x144($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X144);
    func_800C431C(rdram, ctx);
        goto after_0;
    // 0x80802C34: lbu         $a0, 0x144($t9)
    ctx->r4 = MEM_BU(ctx->r25, 0X144);
    after_0:
    // 0x80802C38: lw          $t0, 0x1E4($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X1E4);
L_80802C3C:
    // 0x80802C3C: addu        $t2, $s1, $s0
    ctx->r10 = ADD32(ctx->r17, ctx->r16);
    // 0x80802C40: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80802C44: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80802C48: beql        $t1, $zero, L_80802C5C
    if (ctx->r9 == 0) {
        // 0x80802C4C: lbu         $t3, 0x178($s1)
        ctx->r11 = MEM_BU(ctx->r17, 0X178);
            goto L_80802C5C;
    }
    goto skip_2;
    // 0x80802C4C: lbu         $t3, 0x178($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X178);
    skip_2:
    // 0x80802C50: jal         0x800C3528
    // 0x80802C54: lbu         $a0, 0x144($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X144);
    func_800C3528(rdram, ctx);
        goto after_1;
    // 0x80802C54: lbu         $a0, 0x144($t2)
    ctx->r4 = MEM_BU(ctx->r10, 0X144);
    after_1:
    // 0x80802C58: lbu         $t3, 0x178($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0X178);
L_80802C5C:
    // 0x80802C5C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80802C60: slt         $at, $s0, $t3
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80802C64: bnel        $at, $zero, L_80802C1C
    if (ctx->r1 != 0) {
        // 0x80802C68: lbu         $t7, 0x1E6($s1)
        ctx->r15 = MEM_BU(ctx->r17, 0X1E6);
            goto L_80802C1C;
    }
    goto skip_3;
    // 0x80802C68: lbu         $t7, 0x1E6($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0X1E6);
    skip_3:
    // 0x80802C6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80802C70:
    // 0x80802C70: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80802C74: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80802C78: jr          $ra
    // 0x80802C7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80802C7C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80802C80_gczoombox(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802C80: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80802C84: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80802C88: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80802C8C: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80802C90: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80802C94: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80802C98: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80802C9C: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80802CA0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80802CA4: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80802CA8: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80802CAC: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80802CB0: or          $s5, $a0, $zero
    ctx->r21 = ctx->r4 | 0;
    // 0x80802CB4: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x80802CB8: sb          $zero, 0x178($a0)
    MEM_B(0X178, ctx->r4) = 0;
    // 0x80802CBC: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80802CC0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80802CC4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80802CC8: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80802CCC:
    // 0x80802CCC: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80802CD0: sb          $zero, 0x144($s1)
    MEM_B(0X144, ctx->r17) = 0;
    // 0x80802CD4: slti        $at, $s0, 0x5
    ctx->r1 = SIGNED(ctx->r16) < 0X5 ? 1 : 0;
    // 0x80802CD8: sh          $zero, 0x160($s2)
    MEM_H(0X160, ctx->r18) = 0;
    // 0x80802CDC: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80802CE0: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x80802CE4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80802CE8: bne         $at, $zero, L_80802CCC
    if (ctx->r1 != 0) {
        // 0x80802CEC: swc1        $f0, 0x148($v0)
        MEM_W(0X148, ctx->r2) = ctx->f0.u32l;
            goto L_80802CCC;
    }
    // 0x80802CEC: swc1        $f0, 0x148($v0)
    MEM_W(0X148, ctx->r2) = ctx->f0.u32l;
    // 0x80802CF0: lbu         $t6, 0x176($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X176);
    // 0x80802CF4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80802CF8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80802CFC: beq         $t6, $at, L_80802DD0
    if (ctx->r14 == ctx->r1) {
        // 0x80802D00: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80802DD0;
    }
    // 0x80802D00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80802D04: addiu       $t7, $s5, 0x14C
    ctx->r15 = ADD32(ctx->r21, 0X14C);
    // 0x80802D08: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80802D0C: addiu       $a2, $sp, 0x62
    ctx->r6 = ADD32(ctx->r29, 0X62);
    // 0x80802D10: jal         0x80088430
    // 0x80802D14: addiu       $a3, $s5, 0x160
    ctx->r7 = ADD32(ctx->r21, 0X160);
    _gczoomboxdata_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80802D14: addiu       $a3, $s5, 0x160
    ctx->r7 = ADD32(ctx->r21, 0X160);
    after_0:
    // 0x80802D18: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80802D1C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80802D20: lwc1        $f6, 0x14C($s5)
    ctx->f6.u32l = MEM_W(ctx->r21, 0X14C);
    // 0x80802D24: lh          $t8, 0x62($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X62);
    // 0x80802D28: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80802D2C: nop

    // 0x80802D30: bc1f        L_80802D40
    if (!c1cs) {
        // 0x80802D34: nop
    
            goto L_80802D40;
    }
    // 0x80802D34: nop

    // 0x80802D38: b           L_80802DD0
    // 0x80802D3C: sb          $t8, 0x144($s5)
    MEM_B(0X144, ctx->r21) = ctx->r24;
        goto L_80802DD0;
    // 0x80802D3C: sb          $t8, 0x144($s5)
    MEM_B(0X144, ctx->r21) = ctx->r24;
L_80802D40:
    // 0x80802D40: jal         0x80088428
    // 0x80802D44: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    _gczoomboxdata_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80802D44: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_1:
    // 0x80802D48: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x80802D4C: blez        $v0, L_80802DC0
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80802D50: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_80802DC0;
    }
    // 0x80802D50: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80802D54: or          $s2, $s5, $zero
    ctx->r18 = ctx->r21 | 0;
    // 0x80802D58: addiu       $s3, $s5, 0x160
    ctx->r19 = ADD32(ctx->r21, 0X160);
    // 0x80802D5C: addiu       $s4, $s5, 0x14C
    ctx->r20 = ADD32(ctx->r21, 0X14C);
    // 0x80802D60: addiu       $s6, $sp, 0x5A
    ctx->r22 = ADD32(ctx->r29, 0X5A);
L_80802D64:
    // 0x80802D64: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80802D68: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80802D6C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80802D70: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    // 0x80802D74: jal         0x80088430
    // 0x80802D78: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    _gczoomboxdata_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x80802D78: sw          $s4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r20;
    after_2:
    // 0x80802D7C: lh          $t9, 0x160($s2)
    ctx->r25 = MEM_H(ctx->r18, 0X160);
    // 0x80802D80: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80802D84: lh          $a1, 0x5A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X5A);
    // 0x80802D88: beq         $t9, $zero, L_80802DA8
    if (ctx->r25 == 0) {
        // 0x80802D8C: addiu       $a2, $zero, 0x3
        ctx->r6 = ADD32(0, 0X3);
            goto L_80802DA8;
    }
    // 0x80802D8C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80802D90: jal         0x800008F4
    // 0x80802D94: addu        $s1, $s5, $s0
    ctx->r17 = ADD32(ctx->r21, ctx->r16);
    func_808008F4_gczoombox(rdram, ctx);
        goto after_3;
    // 0x80802D94: addu        $s1, $s5, $s0
    ctx->r17 = ADD32(ctx->r21, ctx->r16);
    after_3:
    // 0x80802D98: sb          $v0, 0x144($s1)
    MEM_B(0X144, ctx->r17) = ctx->r2;
    // 0x80802D9C: lbu         $t0, 0x178($s5)
    ctx->r8 = MEM_BU(ctx->r21, 0X178);
    // 0x80802DA0: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80802DA4: sb          $t1, 0x178($s5)
    MEM_B(0X178, ctx->r21) = ctx->r9;
L_80802DA8:
    // 0x80802DA8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80802DAC: slt         $at, $s0, $s7
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r23) ? 1 : 0;
    // 0x80802DB0: addiu       $s2, $s2, 0x2
    ctx->r18 = ADD32(ctx->r18, 0X2);
    // 0x80802DB4: addiu       $s3, $s3, 0x2
    ctx->r19 = ADD32(ctx->r19, 0X2);
    // 0x80802DB8: bne         $at, $zero, L_80802D64
    if (ctx->r1 != 0) {
        // 0x80802DBC: addiu       $s4, $s4, 0x4
        ctx->r20 = ADD32(ctx->r20, 0X4);
            goto L_80802D64;
    }
    // 0x80802DBC: addiu       $s4, $s4, 0x4
    ctx->r20 = ADD32(ctx->r20, 0X4);
L_80802DC0:
    // 0x80802DC0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80802DC4: jal         0x800DC214
    // 0x80802DC8: lbu         $a1, 0x178($s5)
    ctx->r5 = MEM_BU(ctx->r21, 0X178);
    func_800DC214(rdram, ctx);
        goto after_4;
    // 0x80802DC8: lbu         $a1, 0x178($s5)
    ctx->r5 = MEM_BU(ctx->r21, 0X178);
    after_4:
    // 0x80802DCC: sb          $v0, 0x1D3($s5)
    MEM_B(0X1D3, ctx->r21) = ctx->r2;
L_80802DD0:
    // 0x80802DD0: jal         0x80002BF4
    // 0x80802DD4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80802BF4_gczoombox(rdram, ctx);
        goto after_5;
    // 0x80802DD4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_5:
    // 0x80802DD8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80802DDC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80802DE0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80802DE4: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80802DE8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80802DEC: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80802DF0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80802DF4: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80802DF8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80802DFC: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80802E00: jr          $ra
    // 0x80802E04: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80802E04: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void gczoombox_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80802E08: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80802E0C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80802E10: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80802E14: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80802E18: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80802E1C: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80802E20: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80802E24: jal         0x8001ACCC
    // 0x80802E28: addiu       $a0, $zero, 0x1F8
    ctx->r4 = ADD32(0, 0X1F8);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x80802E28: addiu       $a0, $zero, 0x1F8
    ctx->r4 = ADD32(0, 0X1F8);
    after_0:
    // 0x80802E2C: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80802E30: addiu       $t7, $zero, 0xB
    ctx->r15 = ADD32(0, 0XB);
    // 0x80802E34: sb          $t7, 0x171($v0)
    MEM_B(0X171, ctx->r2) = ctx->r15;
    // 0x80802E38: sw          $t6, 0x16C($v0)
    MEM_W(0X16C, ctx->r2) = ctx->r14;
    // 0x80802E3C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80802E40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80802E44: sb          $a1, 0x174($v0)
    MEM_B(0X174, ctx->r2) = ctx->r5;
    // 0x80802E48: sb          $a1, 0x170($v0)
    MEM_B(0X170, ctx->r2) = ctx->r5;
    // 0x80802E4C: sb          $zero, 0x175($v0)
    MEM_B(0X175, ctx->r2) = 0;
    // 0x80802E50: sh          $t8, 0x172($v0)
    MEM_H(0X172, ctx->r2) = ctx->r24;
    // 0x80802E54: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80802E58: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x80802E5C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80802E60: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80802E64: sb          $t1, 0x177($v0)
    MEM_B(0X177, ctx->r2) = ctx->r9;
    // 0x80802E68: sw          $zero, 0x130($v0)
    MEM_W(0X130, ctx->r2) = 0;
    // 0x80802E6C: sh          $zero, 0x13A($v0)
    MEM_H(0X13A, ctx->r2) = 0;
    // 0x80802E70: sw          $t2, 0x13C($v0)
    MEM_W(0X13C, ctx->r2) = ctx->r10;
    // 0x80802E74: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80802E78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80802E7C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80802E80: sb          $t9, 0x176($v0)
    MEM_B(0X176, ctx->r2) = ctx->r25;
L_80802E84:
    // 0x80802E84: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80802E88: sw          $zero, 0x180($v1)
    MEM_W(0X180, ctx->r3) = 0;
    // 0x80802E8C: sw          $zero, 0x184($v1)
    MEM_W(0X184, ctx->r3) = 0;
    // 0x80802E90: sw          $zero, 0x188($v1)
    MEM_W(0X188, ctx->r3) = 0;
    // 0x80802E94: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x80802E98: bne         $a0, $a1, L_80802E84
    if (ctx->r4 != ctx->r5) {
        // 0x80802E9C: sw          $zero, 0x16C($v1)
        MEM_W(0X16C, ctx->r3) = 0;
            goto L_80802E84;
    }
    // 0x80802E9C: sw          $zero, 0x16C($v1)
    MEM_W(0X16C, ctx->r3) = 0;
    // 0x80802EA0: lbu         $t3, 0x1E5($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X1E5);
    // 0x80802EA4: addiu       $v1, $zero, 0xFF
    ctx->r3 = ADD32(0, 0XFF);
    // 0x80802EA8: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80802EAC: andi        $t4, $t3, 0xFFF7
    ctx->r12 = ctx->r11 & 0XFFF7;
    // 0x80802EB0: sb          $zero, 0x19E($v0)
    MEM_B(0X19E, ctx->r2) = 0;
    // 0x80802EB4: sb          $zero, 0x19D($v0)
    MEM_B(0X19D, ctx->r2) = 0;
    // 0x80802EB8: sb          $zero, 0x19C($v0)
    MEM_B(0X19C, ctx->r2) = 0;
    // 0x80802EBC: sb          $t4, 0x1E5($v0)
    MEM_B(0X1E5, ctx->r2) = ctx->r12;
    // 0x80802EC0: sw          $zero, 0x1A0($v0)
    MEM_W(0X1A0, ctx->r2) = 0;
    // 0x80802EC4: sh          $a0, 0x1AC($v0)
    MEM_H(0X1AC, ctx->r2) = ctx->r4;
    // 0x80802EC8: sh          $a0, 0x1BC($v0)
    MEM_H(0X1BC, ctx->r2) = ctx->r4;
    // 0x80802ECC: sb          $v1, 0x1B4($v0)
    MEM_B(0X1B4, ctx->r2) = ctx->r3;
    // 0x80802ED0: sb          $v1, 0x1B5($v0)
    MEM_B(0X1B5, ctx->r2) = ctx->r3;
    // 0x80802ED4: sb          $v1, 0x1B6($v0)
    MEM_B(0X1B6, ctx->r2) = ctx->r3;
    // 0x80802ED8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80802EDC: lbu         $t8, 0x1E4($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X1E4);
    // 0x80802EE0: lbu         $t2, 0x1E6($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1E6);
    // 0x80802EE4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80802EE8: andi        $t9, $t8, 0xFFFE
    ctx->r25 = ctx->r24 & 0XFFFE;
    // 0x80802EEC: or          $t1, $t7, $t9
    ctx->r9 = ctx->r15 | ctx->r25;
    // 0x80802EF0: lbu         $t7, 0x1E7($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1E7);
    // 0x80802EF4: andi        $t5, $t2, 0xFFFD
    ctx->r13 = ctx->r10 & 0XFFFD;
    // 0x80802EF8: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x80802EFC: sb          $t5, 0x1E6($v0)
    MEM_B(0X1E6, ctx->r2) = ctx->r13;
    // 0x80802F00: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x80802F04: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80802F08: ori         $t9, $t7, 0x80
    ctx->r25 = ctx->r15 | 0X80;
    // 0x80802F0C: sb          $t1, 0x1E4($v0)
    MEM_B(0X1E4, ctx->r2) = ctx->r9;
    // 0x80802F10: sb          $zero, 0x179($v0)
    MEM_B(0X179, ctx->r2) = 0;
    // 0x80802F14: sb          $t6, 0x1E6($v0)
    MEM_B(0X1E6, ctx->r2) = ctx->r14;
    // 0x80802F18: sb          $t9, 0x1E7($v0)
    MEM_B(0X1E7, ctx->r2) = ctx->r25;
    // 0x80802F1C: beq         $t2, $zero, L_80802F38
    if (ctx->r10 == 0) {
        // 0x80802F20: swc1        $f2, 0x1E8($v0)
        MEM_W(0X1E8, ctx->r2) = ctx->f2.u32l;
            goto L_80802F38;
    }
    // 0x80802F20: swc1        $f2, 0x1E8($v0)
    MEM_W(0X1E8, ctx->r2) = ctx->f2.u32l;
    // 0x80802F24: addiu       $t3, $zero, 0x104
    ctx->r11 = ADD32(0, 0X104);
    // 0x80802F28: addiu       $t4, $zero, 0x190
    ctx->r12 = ADD32(0, 0X190);
    // 0x80802F2C: sh          $t3, 0x1B2($v0)
    MEM_H(0X1B2, ctx->r2) = ctx->r11;
    // 0x80802F30: b           L_80802F48
    // 0x80802F34: sh          $t4, 0x1AE($v0)
    MEM_H(0X1AE, ctx->r2) = ctx->r12;
        goto L_80802F48;
    // 0x80802F34: sh          $t4, 0x1AE($v0)
    MEM_H(0X1AE, ctx->r2) = ctx->r12;
L_80802F38:
    // 0x80802F38: addiu       $t5, $zero, 0x2C
    ctx->r13 = ADD32(0, 0X2C);
    // 0x80802F3C: addiu       $t6, $zero, -0x60
    ctx->r14 = ADD32(0, -0X60);
    // 0x80802F40: sh          $t5, 0x1B2($v0)
    MEM_H(0X1B2, ctx->r2) = ctx->r13;
    // 0x80802F44: sh          $t6, 0x1AE($v0)
    MEM_H(0X1AE, ctx->r2) = ctx->r14;
L_80802F48:
    // 0x80802F48: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80802F4C: sll         $t7, $v0, 24
    ctx->r15 = S32(ctx->r2 << 24);
    // 0x80802F50: sra         $t9, $t7, 24
    ctx->r25 = S32(SIGNED(ctx->r15) >> 24);
    // 0x80802F54: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80802F58: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80802F5C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80802F60: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80802F64: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80802F68: swc1        $f2, 0x1A4($s0)
    MEM_W(0X1A4, ctx->r16) = ctx->f2.u32l;
    // 0x80802F6C: swc1        $f2, 0x1A8($s0)
    MEM_W(0X1A8, ctx->r16) = ctx->f2.u32l;
    // 0x80802F70: sb          $v0, 0x1CF($s0)
    MEM_B(0X1CF, ctx->r16) = ctx->r2;
    // 0x80802F74: sb          $v0, 0x1D0($s0)
    MEM_B(0X1D0, ctx->r16) = ctx->r2;
    // 0x80802F78: trunc.w.s   $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80802F7C: swc1        $f0, 0x1C4($s0)
    MEM_W(0X1C4, ctx->r16) = ctx->f0.u32l;
    // 0x80802F80: sb          $zero, 0x1D2($s0)
    MEM_B(0X1D2, ctx->r16) = 0;
    // 0x80802F84: swc1        $f2, 0x1E0($s0)
    MEM_W(0X1E0, ctx->r16) = ctx->f2.u32l;
    // 0x80802F88: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80802F8C: swc1        $f2, 0x1D4($s0)
    MEM_W(0X1D4, ctx->r16) = ctx->f2.u32l;
    // 0x80802F90: sh          $t8, 0x1B0($s0)
    MEM_H(0X1B0, ctx->r16) = ctx->r24;
    // 0x80802F94: swc1        $f8, 0x1DC($s0)
    MEM_W(0X1DC, ctx->r16) = ctx->f8.u32l;
    // 0x80802F98: jal         0x800E6A00
    // 0x80802F9C: sb          $t2, 0x1CE($s0)
    MEM_B(0X1CE, ctx->r16) = ctx->r10;
    func_800E6A00(rdram, ctx);
        goto after_1;
    // 0x80802F9C: sb          $t2, 0x1CE($s0)
    MEM_B(0X1CE, ctx->r16) = ctx->r10;
    after_1:
    // 0x80802FA0: lbu         $t6, 0x1E7($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1E7);
    // 0x80802FA4: lbu         $t9, 0x1E6($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X1E6);
    // 0x80802FA8: sll         $t4, $v0, 1
    ctx->r12 = S32(ctx->r2 << 1);
    // 0x80802FAC: andi        $t5, $t4, 0x2
    ctx->r13 = ctx->r12 & 0X2;
    // 0x80802FB0: andi        $t8, $t6, 0xFFFD
    ctx->r24 = ctx->r14 & 0XFFFD;
    // 0x80802FB4: or          $t7, $t5, $t8
    ctx->r15 = ctx->r13 | ctx->r24;
    // 0x80802FB8: andi        $t5, $t9, 0xFFDF
    ctx->r13 = ctx->r25 & 0XFFDF;
    // 0x80802FBC: sb          $t7, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r15;
    // 0x80802FC0: sb          $t5, 0x1E6($s0)
    MEM_B(0X1E6, ctx->r16) = ctx->r13;
    // 0x80802FC4: lw          $v1, 0x1E4($s0)
    ctx->r3 = MEM_W(ctx->r16, 0X1E4);
    // 0x80802FC8: andi        $t8, $t5, 0xBF
    ctx->r24 = ctx->r13 & 0XBF;
    // 0x80802FCC: sll         $t2, $v1, 18
    ctx->r10 = S32(ctx->r3 << 18);
    // 0x80802FD0: srl         $v1, $t2, 31
    ctx->r3 = S32(U32(ctx->r10) >> 31);
    // 0x80802FD4: sll         $a0, $v1, 6
    ctx->r4 = S32(ctx->r3 << 6);
    // 0x80802FD8: andi        $t6, $a0, 0x40
    ctx->r14 = ctx->r4 & 0X40;
    // 0x80802FDC: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80802FE0: or          $t1, $t6, $t8
    ctx->r9 = ctx->r14 | ctx->r24;
    // 0x80802FE4: lbu         $t6, 0x1E5($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1E5);
    // 0x80802FE8: andi        $t2, $t1, 0x7F
    ctx->r10 = ctx->r9 & 0X7F;
    // 0x80802FEC: andi        $t4, $v1, 0x1
    ctx->r12 = ctx->r3 & 0X1;
    // 0x80802FF0: andi        $t5, $t6, 0xFFFE
    ctx->r13 = ctx->r14 & 0XFFFE;
    // 0x80802FF4: or          $t9, $t4, $t5
    ctx->r25 = ctx->r12 | ctx->r13;
    // 0x80802FF8: sb          $t1, 0x1E6($s0)
    MEM_B(0X1E6, ctx->r16) = ctx->r9;
    // 0x80802FFC: sll         $a1, $v1, 7
    ctx->r5 = S32(ctx->r3 << 7);
    // 0x80803000: sll         $a2, $v1, 1
    ctx->r6 = S32(ctx->r3 << 1);
    // 0x80803004: andi        $t7, $a2, 0x2
    ctx->r15 = ctx->r6 & 0X2;
    // 0x80803008: or          $t3, $a1, $t2
    ctx->r11 = ctx->r5 | ctx->r10;
    // 0x8080300C: andi        $t1, $t9, 0xFD
    ctx->r9 = ctx->r25 & 0XFD;
    // 0x80803010: or          $t6, $t7, $t1
    ctx->r14 = ctx->r15 | ctx->r9;
    // 0x80803014: sb          $t3, 0x1E6($s0)
    MEM_B(0X1E6, ctx->r16) = ctx->r11;
    // 0x80803018: sll         $a3, $v1, 4
    ctx->r7 = S32(ctx->r3 << 4);
    // 0x8080301C: andi        $t3, $a3, 0x10
    ctx->r11 = ctx->r7 & 0X10;
    // 0x80803020: andi        $t4, $t6, 0xEF
    ctx->r12 = ctx->r14 & 0XEF;
    // 0x80803024: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80803028: or          $t7, $t3, $t4
    ctx->r15 = ctx->r11 | ctx->r12;
    // 0x8080302C: sb          $t9, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r25;
    // 0x80803030: sll         $t0, $v1, 5
    ctx->r8 = S32(ctx->r3 << 5);
    // 0x80803034: andi        $t8, $t0, 0x20
    ctx->r24 = ctx->r8 & 0X20;
    // 0x80803038: sb          $t6, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r14;
    // 0x8080303C: andi        $t9, $t7, 0xDF
    ctx->r25 = ctx->r15 & 0XDF;
    // 0x80803040: or          $t2, $t8, $t9
    ctx->r10 = ctx->r24 | ctx->r25;
    // 0x80803044: sb          $t7, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r15;
    // 0x80803048: or          $a3, $t3, $zero
    ctx->r7 = ctx->r11 | 0;
    // 0x8080304C: lbu         $t7, 0x1E4($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1E4);
    // 0x80803050: andi        $t3, $t2, 0xBF
    ctx->r11 = ctx->r10 & 0XBF;
    // 0x80803054: or          $t4, $a0, $t3
    ctx->r12 = ctx->r4 | ctx->r11;
    // 0x80803058: sb          $t2, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r10;
    // 0x8080305C: sb          $t4, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r12;
    // 0x80803060: andi        $t5, $t4, 0x7F
    ctx->r13 = ctx->r12 & 0X7F;
    // 0x80803064: or          $t0, $t8, $zero
    ctx->r8 = ctx->r24 | 0;
    // 0x80803068: andi        $t9, $t7, 0xFFFD
    ctx->r25 = ctx->r15 & 0XFFFD;
    // 0x8080306C: or          $t6, $a2, $t9
    ctx->r14 = ctx->r6 | ctx->r25;
    // 0x80803070: or          $t8, $a1, $t5
    ctx->r24 = ctx->r5 | ctx->r13;
    // 0x80803074: sll         $t2, $v1, 2
    ctx->r10 = S32(ctx->r3 << 2);
    // 0x80803078: andi        $t3, $t2, 0x4
    ctx->r11 = ctx->r10 & 0X4;
    // 0x8080307C: sb          $t8, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r24;
    // 0x80803080: andi        $t4, $t6, 0xFB
    ctx->r12 = ctx->r14 & 0XFB;
    // 0x80803084: or          $t9, $t3, $t4
    ctx->r25 = ctx->r11 | ctx->r12;
    // 0x80803088: sll         $t8, $v1, 3
    ctx->r24 = S32(ctx->r3 << 3);
    // 0x8080308C: andi        $t7, $t8, 0x8
    ctx->r15 = ctx->r24 & 0X8;
    // 0x80803090: andi        $t1, $t9, 0xF7
    ctx->r9 = ctx->r25 & 0XF7;
    // 0x80803094: sb          $t6, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r14;
    // 0x80803098: or          $t6, $t7, $t1
    ctx->r14 = ctx->r15 | ctx->r9;
    // 0x8080309C: andi        $t3, $t6, 0xEF
    ctx->r11 = ctx->r14 & 0XEF;
    // 0x808030A0: or          $t5, $a3, $t3
    ctx->r13 = ctx->r7 | ctx->r11;
    // 0x808030A4: andi        $t8, $t5, 0xDF
    ctx->r24 = ctx->r13 & 0XDF;
    // 0x808030A8: sb          $t9, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r25;
    // 0x808030AC: sb          $t6, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r14;
    // 0x808030B0: or          $t7, $t0, $t8
    ctx->r15 = ctx->r8 | ctx->r24;
    // 0x808030B4: andi        $t1, $t7, 0xBF
    ctx->r9 = ctx->r15 & 0XBF;
    // 0x808030B8: sb          $t5, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r13;
    // 0x808030BC: sb          $t7, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r15;
    // 0x808030C0: lbu         $t5, 0x1E7($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X1E7);
    // 0x808030C4: lbu         $t7, 0x1E5($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1E5);
    // 0x808030C8: or          $t6, $a0, $t1
    ctx->r14 = ctx->r4 | ctx->r9;
    // 0x808030CC: andi        $t3, $t6, 0x7F
    ctx->r11 = ctx->r14 & 0X7F;
    // 0x808030D0: or          $t4, $a1, $t3
    ctx->r12 = ctx->r5 | ctx->r11;
    // 0x808030D4: sb          $t6, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r14;
    // 0x808030D8: andi        $t8, $t5, 0xFFFE
    ctx->r24 = ctx->r13 & 0XFFFE;
    // 0x808030DC: ori         $t1, $t7, 0x4
    ctx->r9 = ctx->r15 | 0X4;
    // 0x808030E0: sb          $t4, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r12;
    // 0x808030E4: sb          $t8, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r24;
    // 0x808030E8: sb          $t1, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r9;
    // 0x808030EC: lw          $t2, 0x1E4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X1E4);
    // 0x808030F0: lbu         $t8, 0x1E6($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1E6);
    // 0x808030F4: lbu         $t1, 0x1E7($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1E7);
    // 0x808030F8: sll         $t6, $t2, 13
    ctx->r14 = S32(ctx->r10 << 13);
    // 0x808030FC: srl         $t3, $t6, 31
    ctx->r11 = S32(U32(ctx->r14) >> 31);
    // 0x80803100: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x80803104: andi        $t5, $t4, 0x8
    ctx->r13 = ctx->r12 & 0X8;
    // 0x80803108: andi        $t9, $t8, 0xFFF7
    ctx->r25 = ctx->r24 & 0XFFF7;
    // 0x8080310C: andi        $t6, $t1, 0xFFBF
    ctx->r14 = ctx->r9 & 0XFFBF;
    // 0x80803110: or          $t7, $t5, $t9
    ctx->r15 = ctx->r13 | ctx->r25;
    // 0x80803114: andi        $t4, $t6, 0xDF
    ctx->r12 = ctx->r14 & 0XDF;
    // 0x80803118: sb          $t6, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r14;
    // 0x8080311C: andi        $t5, $t4, 0xEF
    ctx->r13 = ctx->r12 & 0XEF;
    // 0x80803120: sb          $t4, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r12;
    // 0x80803124: sb          $t5, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r13;
    // 0x80803128: andi        $t9, $t5, 0xF7
    ctx->r25 = ctx->r13 & 0XF7;
    // 0x8080312C: sb          $t7, 0x1E6($s0)
    MEM_B(0X1E6, ctx->r16) = ctx->r15;
    // 0x80803130: sb          $t9, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r25;
    // 0x80803134: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80803138: jal         0x80002B94
    // 0x8080313C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80802B94_gczoombox(rdram, ctx);
        goto after_2;
    // 0x8080313C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80803140: lbu         $t1, 0x1E7($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1E7);
    // 0x80803144: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80803148: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x8080314C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80803150: ori         $t2, $t1, 0x4
    ctx->r10 = ctx->r9 | 0X4;
    // 0x80803154: sb          $t2, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r10;
    // 0x80803158: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(688, 0X3E24) << 16);
    // 0x8080315C: swc1        $f2, 0x1EC($s0)
    MEM_W(0X1EC, ctx->r16) = ctx->f2.u32l;
    // 0x80803160: swc1        $f10, 0x1F4($s0)
    MEM_W(0X1F4, ctx->r16) = ctx->f10.u32l;
    // 0x80803164: lwc1        $f16, 0x3E24($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(688, 0X3E24));
    // 0x80803168: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x8080316C: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80803170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80803174: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    // 0x80803178: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x8080317C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x80803180: jal         0x80003460
    // 0x80803184: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    gczoombox_entrypoint_20(rdram, ctx);
        goto after_3;
    // 0x80803184: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x80803188: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8080318C: addiu       $a1, $s0, 0x1B7
    ctx->r5 = ADD32(ctx->r16, 0X1B7);
    // 0x80803190: jal         0x80088420
    // 0x80803194: addiu       $a2, $s0, 0x1B8
    ctx->r6 = ADD32(ctx->r16, 0X1B8);
    _gczoomboxdata_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x80803194: addiu       $a2, $s0, 0x1B8
    ctx->r6 = ADD32(ctx->r16, 0X1B8);
    after_4:
    // 0x80803198: sb          $zero, 0x1BA($s0)
    MEM_B(0X1BA, ctx->r16) = 0;
    // 0x8080319C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808031A0: lb          $t6, 0x1BA($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X1BA);
    // 0x808031A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x808031A8: sh          $zero, 0x142($s0)
    MEM_H(0X142, ctx->r16) = 0;
    // 0x808031AC: sb          $t6, 0x1B9($s0)
    MEM_B(0X1B9, ctx->r16) = ctx->r14;
    // 0x808031B0: swc1        $f18, 0x1C0($s0)
    MEM_W(0X1C0, ctx->r16) = ctx->f18.u32l;
    // 0x808031B4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x808031B8: jal         0x80002C80
    // 0x808031BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80802C80_gczoombox(rdram, ctx);
        goto after_5;
    // 0x808031BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808031C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808031C4: jal         0x800036C4
    // 0x808031C8: addiu       $a1, $zero, 0x4650
    ctx->r5 = ADD32(0, 0X4650);
    gczoombox_entrypoint_30(rdram, ctx);
        goto after_6;
    // 0x808031C8: addiu       $a1, $zero, 0x4650
    ctx->r5 = ADD32(0, 0X4650);
    after_6:
    // 0x808031CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808031D0: jal         0x800001D4
    // 0x808031D4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_808001D4_gczoombox(rdram, ctx);
        goto after_7;
    // 0x808031D4: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_7:
    // 0x808031D8: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x808031DC: jal         0x800001D4
    // 0x808031E0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_808001D4_gczoombox(rdram, ctx);
        goto after_8;
    // 0x808031E0: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_8:
    // 0x808031E4: addiu       $a0, $s0, 0xC0
    ctx->r4 = ADD32(ctx->r16, 0XC0);
    // 0x808031E8: jal         0x800001D4
    // 0x808031EC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_808001D4_gczoombox(rdram, ctx);
        goto after_9;
    // 0x808031EC: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_9:
    // 0x808031F0: addiu       $a0, $s0, 0xF0
    ctx->r4 = ADD32(ctx->r16, 0XF0);
    // 0x808031F4: jal         0x800001D4
    // 0x808031F8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_808001D4_gczoombox(rdram, ctx);
        goto after_10;
    // 0x808031F8: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_10:
    // 0x808031FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80803200: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80803204: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80803208: jr          $ra
    // 0x8080320C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8080320C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void gczoombox_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803210: jr          $ra
    // 0x80803214: lbu         $v0, 0x178($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X178);
    return;
    // 0x80803214: lbu         $v0, 0x178($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X178);
;}
RECOMP_FUNC void gczoombox_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803218: lbu         $t6, 0x177($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X177);
    // 0x8080321C: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x80803220: bne         $t7, $zero, L_80803238
    if (ctx->r15 != 0) {
        // 0x80803224: nop
    
            goto L_80803238;
    }
    // 0x80803224: nop

    // 0x80803228: beq         $a2, $zero, L_80803238
    if (ctx->r6 == 0) {
        // 0x8080322C: nop
    
            goto L_80803238;
    }
    // 0x8080322C: nop

    // 0x80803230: bne         $a1, $zero, L_80803240
    if (ctx->r5 != 0) {
        // 0x80803234: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80803240;
    }
    // 0x80803234: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80803238:
    // 0x80803238: jr          $ra
    // 0x8080323C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8080323C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80803240:
    // 0x80803240: sb          $zero, 0x175($a0)
    MEM_B(0X175, ctx->r4) = 0;
    // 0x80803244: blez        $a1, L_808032C0
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80803248: sb          $a1, 0x174($a0)
        MEM_B(0X174, ctx->r4) = ctx->r5;
            goto L_808032C0;
    }
    // 0x80803248: sb          $a1, 0x174($a0)
    MEM_B(0X174, ctx->r4) = ctx->r5;
    // 0x8080324C: andi        $t2, $a1, 0x3
    ctx->r10 = ctx->r5 & 0X3;
    // 0x80803250: beq         $t2, $zero, L_80803280
    if (ctx->r10 == 0) {
        // 0x80803254: or          $t1, $t2, $zero
        ctx->r9 = ctx->r10 | 0;
            goto L_80803280;
    }
    // 0x80803254: or          $t1, $t2, $zero
    ctx->r9 = ctx->r10 | 0;
    // 0x80803258: sll         $v1, $zero, 2
    ctx->r3 = S32(0 << 2);
    // 0x8080325C: addu        $a3, $a0, $v1
    ctx->r7 = ADD32(ctx->r4, ctx->r3);
    // 0x80803260: addu        $t0, $a2, $v1
    ctx->r8 = ADD32(ctx->r6, ctx->r3);
L_80803264:
    // 0x80803264: lw          $t8, 0x0($t0)
    ctx->r24 = MEM_W(ctx->r8, 0X0);
    // 0x80803268: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8080326C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80803270: addiu       $t0, $t0, 0x4
    ctx->r8 = ADD32(ctx->r8, 0X4);
    // 0x80803274: bne         $t1, $v0, L_80803264
    if (ctx->r9 != ctx->r2) {
        // 0x80803278: sw          $t8, 0x178($a3)
        MEM_W(0X178, ctx->r7) = ctx->r24;
            goto L_80803264;
    }
    // 0x80803278: sw          $t8, 0x178($a3)
    MEM_W(0X178, ctx->r7) = ctx->r24;
    // 0x8080327C: beq         $v0, $a1, L_808032C0
    if (ctx->r2 == ctx->r5) {
        // 0x80803280: sll         $v1, $v0, 2
        ctx->r3 = S32(ctx->r2 << 2);
            goto L_808032C0;
    }
L_80803280:
    // 0x80803280: sll         $v1, $v0, 2
    ctx->r3 = S32(ctx->r2 << 2);
    // 0x80803284: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x80803288: addu        $t1, $t9, $a2
    ctx->r9 = ADD32(ctx->r25, ctx->r6);
    // 0x8080328C: addu        $a3, $a0, $v1
    ctx->r7 = ADD32(ctx->r4, ctx->r3);
    // 0x80803290: addu        $t0, $a2, $v1
    ctx->r8 = ADD32(ctx->r6, ctx->r3);
L_80803294:
    // 0x80803294: lw          $t3, 0x0($t0)
    ctx->r11 = MEM_W(ctx->r8, 0X0);
    // 0x80803298: addiu       $t0, $t0, 0x10
    ctx->r8 = ADD32(ctx->r8, 0X10);
    // 0x8080329C: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x808032A0: sw          $t3, 0x16C($a3)
    MEM_W(0X16C, ctx->r7) = ctx->r11;
    // 0x808032A4: lw          $t4, -0xC($t0)
    ctx->r12 = MEM_W(ctx->r8, -0XC);
    // 0x808032A8: sw          $t4, 0x170($a3)
    MEM_W(0X170, ctx->r7) = ctx->r12;
    // 0x808032AC: lw          $t5, -0x8($t0)
    ctx->r13 = MEM_W(ctx->r8, -0X8);
    // 0x808032B0: sw          $t5, 0x174($a3)
    MEM_W(0X174, ctx->r7) = ctx->r13;
    // 0x808032B4: lw          $t6, -0x4($t0)
    ctx->r14 = MEM_W(ctx->r8, -0X4);
    // 0x808032B8: bne         $t0, $t1, L_80803294
    if (ctx->r8 != ctx->r9) {
        // 0x808032BC: sw          $t6, 0x178($a3)
        MEM_W(0X178, ctx->r7) = ctx->r14;
            goto L_80803294;
    }
    // 0x808032BC: sw          $t6, 0x178($a3)
    MEM_W(0X178, ctx->r7) = ctx->r14;
L_808032C0:
    // 0x808032C0: slti        $at, $a1, 0x8
    ctx->r1 = SIGNED(ctx->r5) < 0X8 ? 1 : 0;
    // 0x808032C4: beq         $at, $zero, L_80803320
    if (ctx->r1 == 0) {
        // 0x808032C8: or          $v0, $a1, $zero
        ctx->r2 = ctx->r5 | 0;
            goto L_80803320;
    }
    // 0x808032C8: or          $v0, $a1, $zero
    ctx->r2 = ctx->r5 | 0;
    // 0x808032CC: addiu       $t0, $zero, 0x8
    ctx->r8 = ADD32(0, 0X8);
    // 0x808032D0: subu        $a2, $t0, $a1
    ctx->r6 = SUB32(ctx->r8, ctx->r5);
    // 0x808032D4: andi        $t7, $a2, 0x3
    ctx->r15 = ctx->r6 & 0X3;
    // 0x808032D8: beq         $t7, $zero, L_808032FC
    if (ctx->r15 == 0) {
        // 0x808032DC: addu        $v1, $t7, $a1
        ctx->r3 = ADD32(ctx->r15, ctx->r5);
            goto L_808032FC;
    }
    // 0x808032DC: addu        $v1, $t7, $a1
    ctx->r3 = ADD32(ctx->r15, ctx->r5);
    // 0x808032E0: sll         $t8, $a1, 2
    ctx->r24 = S32(ctx->r5 << 2);
    // 0x808032E4: addu        $a3, $a0, $t8
    ctx->r7 = ADD32(ctx->r4, ctx->r24);
L_808032E8:
    // 0x808032E8: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x808032EC: sw          $zero, 0x17C($a3)
    MEM_W(0X17C, ctx->r7) = 0;
    // 0x808032F0: bne         $v1, $v0, L_808032E8
    if (ctx->r3 != ctx->r2) {
        // 0x808032F4: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_808032E8;
    }
    // 0x808032F4: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x808032F8: beq         $v0, $t0, L_80803320
    if (ctx->r2 == ctx->r8) {
        // 0x808032FC: sll         $t9, $v0, 2
        ctx->r25 = S32(ctx->r2 << 2);
            goto L_80803320;
    }
L_808032FC:
    // 0x808032FC: sll         $t9, $v0, 2
    ctx->r25 = S32(ctx->r2 << 2);
    // 0x80803300: addu        $a3, $a0, $t9
    ctx->r7 = ADD32(ctx->r4, ctx->r25);
L_80803304:
    // 0x80803304: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80803308: sw          $zero, 0x180($a3)
    MEM_W(0X180, ctx->r7) = 0;
    // 0x8080330C: sw          $zero, 0x184($a3)
    MEM_W(0X184, ctx->r7) = 0;
    // 0x80803310: sw          $zero, 0x188($a3)
    MEM_W(0X188, ctx->r7) = 0;
    // 0x80803314: addiu       $a3, $a3, 0x10
    ctx->r7 = ADD32(ctx->r7, 0X10);
    // 0x80803318: bne         $v0, $t0, L_80803304
    if (ctx->r2 != ctx->r8) {
        // 0x8080331C: sw          $zero, 0x16C($a3)
        MEM_W(0X16C, ctx->r7) = 0;
            goto L_80803304;
    }
    // 0x8080331C: sw          $zero, 0x16C($a3)
    MEM_W(0X16C, ctx->r7) = 0;
L_80803320:
    // 0x80803320: lbu         $t3, 0x177($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X177);
    // 0x80803324: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80803328: ori         $t4, $t3, 0x4
    ctx->r12 = ctx->r11 | 0X4;
    // 0x8080332C: sb          $t4, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r12;
    // 0x80803330: jr          $ra
    // 0x80803334: nop

    return;
    // 0x80803334: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803338: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080333C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80803340: lbu         $t6, 0x177($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X177);
    // 0x80803344: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80803348: andi        $t7, $t6, 0x4
    ctx->r15 = ctx->r14 & 0X4;
    // 0x8080334C: bne         $t7, $zero, L_8080335C
    if (ctx->r15 != 0) {
        // 0x80803350: nop
    
            goto L_8080335C;
    }
    // 0x80803350: nop

    // 0x80803354: bne         $a1, $zero, L_80803364
    if (ctx->r5 != 0) {
        // 0x80803358: addiu       $a2, $sp, 0x1C
        ctx->r6 = ADD32(ctx->r29, 0X1C);
            goto L_80803364;
    }
    // 0x80803358: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
L_8080335C:
    // 0x8080335C: b           L_80803370
    // 0x80803360: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80803370;
    // 0x80803360: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80803364:
    // 0x80803364: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x80803368: jal         0x80003218
    // 0x8080336C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    gczoombox_entrypoint_7(rdram, ctx);
        goto after_0;
    // 0x8080336C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_80803370:
    // 0x80803370: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80803374: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80803378: jr          $ra
    // 0x8080337C: nop

    return;
    // 0x8080337C: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803380: lbu         $t6, 0x177($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X177);
    // 0x80803384: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x80803388: jr          $ra
    // 0x8080338C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
    return;
    // 0x8080338C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void gczoombox_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803390: lbu         $t6, 0x177($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X177);
    // 0x80803394: ori         $t7, $t6, 0x10
    ctx->r15 = ctx->r14 | 0X10;
    // 0x80803398: jr          $ra
    // 0x8080339C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
    return;
    // 0x8080339C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void gczoombox_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808033A0: lbu         $t6, 0x177($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X177);
    // 0x808033A4: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x808033A8: jr          $ra
    // 0x808033AC: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
    return;
    // 0x808033AC: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void gczoombox_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808033B0: lbu         $t6, 0x177($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X177);
    // 0x808033B4: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x808033B8: jr          $ra
    // 0x808033BC: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
    return;
    // 0x808033BC: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void gczoombox_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808033C0: lbu         $t6, 0x177($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X177);
    // 0x808033C4: ori         $t7, $t6, 0x20
    ctx->r15 = ctx->r14 | 0X20;
    // 0x808033C8: jr          $ra
    // 0x808033CC: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
    return;
    // 0x808033CC: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void gczoombox_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808033D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808033D4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x808033D8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
L_808033DC:
    // 0x808033DC: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x808033E0: sw          $zero, 0x180($v1)
    MEM_W(0X180, ctx->r3) = 0;
    // 0x808033E4: sw          $zero, 0x184($v1)
    MEM_W(0X184, ctx->r3) = 0;
    // 0x808033E8: sw          $zero, 0x188($v1)
    MEM_W(0X188, ctx->r3) = 0;
    // 0x808033EC: addiu       $v1, $v1, 0x10
    ctx->r3 = ADD32(ctx->r3, 0X10);
    // 0x808033F0: bne         $v0, $a1, L_808033DC
    if (ctx->r2 != ctx->r5) {
        // 0x808033F4: sw          $zero, 0x16C($v1)
        MEM_W(0X16C, ctx->r3) = 0;
            goto L_808033DC;
    }
    // 0x808033F4: sw          $zero, 0x16C($v1)
    MEM_W(0X16C, ctx->r3) = 0;
    // 0x808033F8: lbu         $t6, 0x177($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X177);
    // 0x808033FC: sb          $zero, 0x174($a0)
    MEM_B(0X174, ctx->r4) = 0;
    // 0x80803400: sb          $zero, 0x175($a0)
    MEM_B(0X175, ctx->r4) = 0;
    // 0x80803404: andi        $t7, $t6, 0xFB
    ctx->r15 = ctx->r14 & 0XFB;
    // 0x80803408: jr          $ra
    // 0x8080340C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
    return;
    // 0x8080340C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void gczoombox_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803410: lbu         $t6, 0x177($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X177);
    // 0x80803414: andi        $t7, $t6, 0xFE
    ctx->r15 = ctx->r14 & 0XFE;
    // 0x80803418: jr          $ra
    // 0x8080341C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
    return;
    // 0x8080341C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void gczoombox_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803420: lbu         $t6, 0x177($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X177);
    // 0x80803424: andi        $t7, $t6, 0xEF
    ctx->r15 = ctx->r14 & 0XEF;
    // 0x80803428: jr          $ra
    // 0x8080342C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
    return;
    // 0x8080342C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void gczoombox_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803430: lbu         $t6, 0x177($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X177);
    // 0x80803434: andi        $t7, $t6, 0xFD
    ctx->r15 = ctx->r14 & 0XFD;
    // 0x80803438: jr          $ra
    // 0x8080343C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
    return;
    // 0x8080343C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void gczoombox_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803440: lbu         $t6, 0x177($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X177);
    // 0x80803444: andi        $t7, $t6, 0xF7
    ctx->r15 = ctx->r14 & 0XF7;
    // 0x80803448: jr          $ra
    // 0x8080344C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
    return;
    // 0x8080344C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void gczoombox_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803450: lbu         $t6, 0x177($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X177);
    // 0x80803454: andi        $t7, $t6, 0xDF
    ctx->r15 = ctx->r14 & 0XDF;
    // 0x80803458: jr          $ra
    // 0x8080345C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
    return;
    // 0x8080345C: sb          $t7, 0x177($a0)
    MEM_B(0X177, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void gczoombox_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80803464: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80803468: beq         $a0, $zero, L_808034E8
    if (ctx->r4 == 0) {
        // 0x8080346C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_808034E8;
    }
    // 0x8080346C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80803470: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80803474: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80803478: sb          $a2, 0x1CC($a0)
    MEM_B(0X1CC, ctx->r4) = ctx->r6;
    // 0x8080347C: sb          $a3, 0x1CD($a0)
    MEM_B(0X1CD, ctx->r4) = ctx->r7;
    // 0x80803480: div.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80803484: swc1        $f6, 0x1D8($a0)
    MEM_W(0X1D8, ctx->r4) = ctx->f6.u32l;
    // 0x80803488: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080348C: jal         0x80000358
    // 0x80803490: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80800358_gczoombox(rdram, ctx);
        goto after_0;
    // 0x80803490: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_0:
    // 0x80803494: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80803498: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080349C: beql        $t6, $zero, L_808034B8
    if (ctx->r14 == 0) {
        // 0x808034A0: lbu         $t0, 0x1E6($a0)
        ctx->r8 = MEM_BU(ctx->r4, 0X1E6);
            goto L_808034B8;
    }
    goto skip_0;
    // 0x808034A0: lbu         $t0, 0x1E6($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1E6);
    skip_0:
    // 0x808034A4: lbu         $t8, 0x1E6($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X1E6);
    // 0x808034A8: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x808034AC: b           L_808034C0
    // 0x808034B0: sb          $t9, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r25;
        goto L_808034C0;
    // 0x808034B0: sb          $t9, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r25;
    // 0x808034B4: lbu         $t0, 0x1E6($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X1E6);
L_808034B8:
    // 0x808034B8: andi        $t1, $t0, 0xFFEF
    ctx->r9 = ctx->r8 & 0XFFEF;
    // 0x808034BC: sb          $t1, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r9;
L_808034C0:
    // 0x808034C0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x808034C4: beql        $t2, $zero, L_808034E0
    if (ctx->r10 == 0) {
        // 0x808034C8: lbu         $t6, 0x1E6($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X1E6);
            goto L_808034E0;
    }
    goto skip_1;
    // 0x808034C8: lbu         $t6, 0x1E6($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1E6);
    skip_1:
    // 0x808034CC: lbu         $t4, 0x1E6($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X1E6);
    // 0x808034D0: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x808034D4: b           L_808034E8
    // 0x808034D8: sb          $t5, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r13;
        goto L_808034E8;
    // 0x808034D8: sb          $t5, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r13;
    // 0x808034DC: lbu         $t6, 0x1E6($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1E6);
L_808034E0:
    // 0x808034E0: andi        $t7, $t6, 0xFFFB
    ctx->r15 = ctx->r14 & 0XFFFB;
    // 0x808034E4: sb          $t7, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r15;
L_808034E8:
    // 0x808034E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808034EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808034F0: jr          $ra
    // 0x808034F4: nop

    return;
    // 0x808034F4: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808034F8: beql        $a1, $zero, L_80803514
    if (ctx->r5 == 0) {
        // 0x808034FC: lbu         $t9, 0x1E5($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0X1E5);
            goto L_80803514;
    }
    goto skip_0;
    // 0x808034FC: lbu         $t9, 0x1E5($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1E5);
    skip_0:
    // 0x80803500: lbu         $t7, 0x1E5($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1E5);
    // 0x80803504: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x80803508: jr          $ra
    // 0x8080350C: sb          $t8, 0x1E5($a0)
    MEM_B(0X1E5, ctx->r4) = ctx->r24;
    return;
    // 0x8080350C: sb          $t8, 0x1E5($a0)
    MEM_B(0X1E5, ctx->r4) = ctx->r24;
    // 0x80803510: lbu         $t9, 0x1E5($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1E5);
L_80803514:
    // 0x80803514: andi        $t0, $t9, 0xFFFB
    ctx->r8 = ctx->r25 & 0XFFFB;
    // 0x80803518: sb          $t0, 0x1E5($a0)
    MEM_B(0X1E5, ctx->r4) = ctx->r8;
    // 0x8080351C: jr          $ra
    // 0x80803520: nop

    return;
    // 0x80803520: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803524: lw          $v0, 0x1E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1E4);
    // 0x80803528: sll         $t6, $v0, 13
    ctx->r14 = S32(ctx->r2 << 13);
    // 0x8080352C: jr          $ra
    // 0x80803530: srl         $v0, $t6, 31
    ctx->r2 = S32(U32(ctx->r14) >> 31);
    return;
    // 0x80803530: srl         $v0, $t6, 31
    ctx->r2 = S32(U32(ctx->r14) >> 31);
;}
RECOMP_FUNC void gczoombox_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803534: beq         $a0, $zero, L_80803560
    if (ctx->r4 == 0) {
        // 0x80803538: nop
    
            goto L_80803560;
    }
    // 0x80803538: nop

    // 0x8080353C: beql        $a1, $zero, L_80803558
    if (ctx->r5 == 0) {
        // 0x80803540: lbu         $t9, 0x1E6($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0X1E6);
            goto L_80803558;
    }
    goto skip_0;
    // 0x80803540: lbu         $t9, 0x1E6($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1E6);
    skip_0:
    // 0x80803544: lbu         $t7, 0x1E6($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1E6);
    // 0x80803548: ori         $t8, $t7, 0x8
    ctx->r24 = ctx->r15 | 0X8;
    // 0x8080354C: jr          $ra
    // 0x80803550: sb          $t8, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r24;
    return;
    // 0x80803550: sb          $t8, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r24;
    // 0x80803554: lbu         $t9, 0x1E6($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1E6);
L_80803558:
    // 0x80803558: andi        $t0, $t9, 0xFFF7
    ctx->r8 = ctx->r25 & 0XFFF7;
    // 0x8080355C: sb          $t0, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r8;
L_80803560:
    // 0x80803560: jr          $ra
    // 0x80803564: nop

    return;
    // 0x80803564: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803568: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080356C: beq         $a1, $zero, L_80803584
    if (ctx->r5 == 0) {
        // 0x80803570: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80803584;
    }
    // 0x80803570: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80803574: lbu         $t7, 0x1E6($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1E6);
    // 0x80803578: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x8080357C: b           L_80803590
    // 0x80803580: sb          $t8, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r24;
        goto L_80803590;
    // 0x80803580: sb          $t8, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r24;
L_80803584:
    // 0x80803584: lbu         $t9, 0x1E6($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1E6);
    // 0x80803588: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x8080358C: sb          $t0, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r8;
L_80803590:
    // 0x80803590: jal         0x80002BF4
    // 0x80803594: nop

    func_80802BF4_gczoombox(rdram, ctx);
        goto after_0;
    // 0x80803594: nop

    after_0:
    // 0x80803598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080359C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808035A0: jr          $ra
    // 0x808035A4: nop

    return;
    // 0x808035A4: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808035A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808035AC: beq         $a1, $zero, L_808035C4
    if (ctx->r5 == 0) {
        // 0x808035B0: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_808035C4;
    }
    // 0x808035B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808035B4: lbu         $t7, 0x1E7($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1E7);
    // 0x808035B8: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x808035BC: b           L_808035D0
    // 0x808035C0: sb          $t8, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r24;
        goto L_808035D0;
    // 0x808035C0: sb          $t8, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r24;
L_808035C4:
    // 0x808035C4: lbu         $t9, 0x1E7($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1E7);
    // 0x808035C8: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x808035CC: sb          $t0, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r8;
L_808035D0:
    // 0x808035D0: jal         0x80002BF4
    // 0x808035D4: nop

    func_80802BF4_gczoombox(rdram, ctx);
        goto after_0;
    // 0x808035D4: nop

    after_0:
    // 0x808035D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808035DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808035E0: jr          $ra
    // 0x808035E4: nop

    return;
    // 0x808035E4: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808035E8: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x808035EC: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x808035F0: beq         $a0, $zero, L_8080365C
    if (ctx->r4 == 0) {
        // 0x808035F4: nop
    
            goto L_8080365C;
    }
    // 0x808035F4: nop

    // 0x808035F8: lbu         $t6, 0x1E4($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X1E4);
    // 0x808035FC: addiu       $t8, $zero, 0x130
    ctx->r24 = ADD32(0, 0X130);
    // 0x80803600: subu        $t9, $t8, $a1
    ctx->r25 = SUB32(ctx->r24, ctx->r5);
    // 0x80803604: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80803608: beq         $t7, $zero, L_80803624
    if (ctx->r15 == 0) {
        // 0x8080360C: addiu       $t2, $a1, -0x8C
        ctx->r10 = ADD32(ctx->r5, -0X8C);
            goto L_80803624;
    }
    // 0x8080360C: addiu       $t2, $a1, -0x8C
    ctx->r10 = ADD32(ctx->r5, -0X8C);
    // 0x80803610: addiu       $t0, $zero, 0x1BC
    ctx->r8 = ADD32(0, 0X1BC);
    // 0x80803614: subu        $t1, $t0, $a1
    ctx->r9 = SUB32(ctx->r8, ctx->r5);
    // 0x80803618: sh          $t9, 0x1B2($a0)
    MEM_H(0X1B2, ctx->r4) = ctx->r25;
    // 0x8080361C: b           L_8080362C
    // 0x80803620: sh          $t1, 0x1AE($a0)
    MEM_H(0X1AE, ctx->r4) = ctx->r9;
        goto L_8080362C;
    // 0x80803620: sh          $t1, 0x1AE($a0)
    MEM_H(0X1AE, ctx->r4) = ctx->r9;
L_80803624:
    // 0x80803624: sh          $a1, 0x1B2($a0)
    MEM_H(0X1B2, ctx->r4) = ctx->r5;
    // 0x80803628: sh          $t2, 0x1AE($a0)
    MEM_H(0X1AE, ctx->r4) = ctx->r10;
L_8080362C:
    // 0x8080362C: swc1        $f12, 0x1DC($a0)
    MEM_W(0X1DC, ctx->r4) = ctx->f12.u32l;
    // 0x80803630: swc1        $f14, 0x1F4($a0)
    MEM_W(0X1F4, ctx->r4) = ctx->f14.u32l;
    // 0x80803634: lw          $t3, 0x10($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X10);
    // 0x80803638: beql        $t3, $zero, L_80803654
    if (ctx->r11 == 0) {
        // 0x8080363C: lbu         $t7, 0x1E6($a0)
        ctx->r15 = MEM_BU(ctx->r4, 0X1E6);
            goto L_80803654;
    }
    goto skip_0;
    // 0x8080363C: lbu         $t7, 0x1E6($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1E6);
    skip_0:
    // 0x80803640: lbu         $t5, 0x1E6($a0)
    ctx->r13 = MEM_BU(ctx->r4, 0X1E6);
    // 0x80803644: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x80803648: jr          $ra
    // 0x8080364C: sb          $t6, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r14;
    return;
    // 0x8080364C: sb          $t6, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r14;
    // 0x80803650: lbu         $t7, 0x1E6($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1E6);
L_80803654:
    // 0x80803654: andi        $t8, $t7, 0xFF7F
    ctx->r24 = ctx->r15 & 0XFF7F;
    // 0x80803658: sb          $t8, 0x1E6($a0)
    MEM_B(0X1E6, ctx->r4) = ctx->r24;
L_8080365C:
    // 0x8080365C: jr          $ra
    // 0x80803660: nop

    return;
    // 0x80803660: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803664: beq         $a0, $zero, L_80803684
    if (ctx->r4 == 0) {
        // 0x80803668: nop
    
            goto L_80803684;
    }
    // 0x80803668: nop

    // 0x8080366C: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x80803670: sb          $t6, 0x1B4($a0)
    MEM_B(0X1B4, ctx->r4) = ctx->r14;
    // 0x80803674: lh          $t7, 0x2($a1)
    ctx->r15 = MEM_H(ctx->r5, 0X2);
    // 0x80803678: sb          $t7, 0x1B5($a0)
    MEM_B(0X1B5, ctx->r4) = ctx->r15;
    // 0x8080367C: lh          $t8, 0x4($a1)
    ctx->r24 = MEM_H(ctx->r5, 0X4);
    // 0x80803680: sb          $t8, 0x1B6($a0)
    MEM_B(0X1B6, ctx->r4) = ctx->r24;
L_80803684:
    // 0x80803684: jr          $ra
    // 0x80803688: nop

    return;
    // 0x80803688: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080368C: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80803690: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80803694: beq         $a0, $zero, L_808036A0
    if (ctx->r4 == 0) {
        // 0x80803698: sw          $a1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r5;
            goto L_808036A0;
    }
    // 0x80803698: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x8080369C: sh          $t7, 0x1BC($a0)
    MEM_H(0X1BC, ctx->r4) = ctx->r15;
L_808036A0:
    // 0x808036A0: jr          $ra
    // 0x808036A4: nop

    return;
    // 0x808036A4: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808036A8: bnel        $a0, $zero, L_808036BC
    if (ctx->r4 != 0) {
        // 0x808036AC: lh          $v0, 0x1BC($a0)
        ctx->r2 = MEM_H(ctx->r4, 0X1BC);
            goto L_808036BC;
    }
    goto skip_0;
    // 0x808036AC: lh          $v0, 0x1BC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1BC);
    skip_0:
    // 0x808036B0: jr          $ra
    // 0x808036B4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    return;
    // 0x808036B4: addiu       $v0, $zero, 0xFF
    ctx->r2 = ADD32(0, 0XFF);
    // 0x808036B8: lh          $v0, 0x1BC($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X1BC);
L_808036BC:
    // 0x808036BC: jr          $ra
    // 0x808036C0: nop

    return;
    // 0x808036C0: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808036C4: beq         $a0, $zero, L_808036D0
    if (ctx->r4 == 0) {
        // 0x808036C8: nop
    
            goto L_808036D0;
    }
    // 0x808036C8: nop

    // 0x808036CC: sh          $a1, 0x16A($a0)
    MEM_H(0X16A, ctx->r4) = ctx->r5;
L_808036D0:
    // 0x808036D0: jr          $ra
    // 0x808036D4: nop

    return;
    // 0x808036D4: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808036D8: jr          $ra
    // 0x808036DC: sb          $zero, 0x177($a0)
    MEM_B(0X177, ctx->r4) = 0;
    return;
    // 0x808036DC: sb          $zero, 0x177($a0)
    MEM_B(0X177, ctx->r4) = 0;
;}
RECOMP_FUNC void gczoombox_entrypoint_32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808036E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808036E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808036E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808036EC: beq         $a0, $zero, L_80803714
    if (ctx->r4 == 0) {
        // 0x808036F0: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80803714;
    }
    // 0x808036F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808036F4: lbu         $v1, 0x171($a0)
    ctx->r3 = MEM_BU(ctx->r4, 0X171);
    // 0x808036F8: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x808036FC: beq         $v1, $zero, L_80803714
    if (ctx->r3 == 0) {
        // 0x80803700: nop
    
            goto L_80803714;
    }
    // 0x80803700: nop

    // 0x80803704: beq         $v1, $at, L_80803714
    if (ctx->r3 == ctx->r1) {
        // 0x80803708: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80803714;
    }
    // 0x80803708: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x8080370C: bne         $v1, $at, L_8080371C
    if (ctx->r3 != ctx->r1) {
        // 0x80803710: addiu       $a0, $s0, 0xC0
        ctx->r4 = ADD32(ctx->r16, 0XC0);
            goto L_8080371C;
    }
    // 0x80803710: addiu       $a0, $s0, 0xC0
    ctx->r4 = ADD32(ctx->r16, 0XC0);
L_80803714:
    // 0x80803714: b           L_80803800
    // 0x80803718: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80803800;
    // 0x80803718: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080371C:
    // 0x8080371C: jal         0x800001D4
    // 0x80803720: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_808001D4_gczoombox(rdram, ctx);
        goto after_0;
    // 0x80803720: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_0:
    // 0x80803724: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80803728: jal         0x800001D4
    // 0x8080372C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_808001D4_gczoombox(rdram, ctx);
        goto after_1;
    // 0x8080372C: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_1:
    // 0x80803730: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x80803734: jal         0x800001D4
    // 0x80803738: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    func_808001D4_gczoombox(rdram, ctx);
        goto after_2;
    // 0x80803738: addiu       $a1, $zero, 0x30
    ctx->r5 = ADD32(0, 0X30);
    after_2:
    // 0x8080373C: lbu         $t8, 0x1E5($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1E5);
    // 0x80803740: lbu         $t1, 0x1E4($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X1E4);
    // 0x80803744: sll         $t7, $zero, 7
    ctx->r15 = S32(0 << 7);
    // 0x80803748: andi        $t9, $t8, 0xFF7F
    ctx->r25 = ctx->r24 & 0XFF7F;
    // 0x8080374C: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x80803750: andi        $t2, $t1, 0xFF7F
    ctx->r10 = ctx->r9 & 0XFF7F;
    // 0x80803754: or          $t3, $t7, $t2
    ctx->r11 = ctx->r15 | ctx->r10;
    // 0x80803758: sll         $t4, $zero, 2
    ctx->r12 = S32(0 << 2);
    // 0x8080375C: andi        $t5, $t4, 0x4
    ctx->r13 = ctx->r12 & 0X4;
    // 0x80803760: andi        $t7, $t3, 0xFB
    ctx->r15 = ctx->r11 & 0XFB;
    // 0x80803764: or          $t1, $t5, $t7
    ctx->r9 = ctx->r13 | ctx->r15;
    // 0x80803768: sb          $t0, 0x1E5($s0)
    MEM_B(0X1E5, ctx->r16) = ctx->r8;
    // 0x8080376C: sll         $t9, $zero, 3
    ctx->r25 = S32(0 << 3);
    // 0x80803770: andi        $t0, $t9, 0x8
    ctx->r8 = ctx->r25 & 0X8;
    // 0x80803774: andi        $t2, $t1, 0xF7
    ctx->r10 = ctx->r9 & 0XF7;
    // 0x80803778: or          $t5, $t0, $t2
    ctx->r13 = ctx->r8 | ctx->r10;
    // 0x8080377C: sll         $t4, $zero, 5
    ctx->r12 = S32(0 << 5);
    // 0x80803780: sb          $t3, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r11;
    // 0x80803784: sb          $t1, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r9;
    // 0x80803788: andi        $t6, $t4, 0x20
    ctx->r14 = ctx->r12 & 0X20;
    // 0x8080378C: andi        $t7, $t5, 0xDF
    ctx->r15 = ctx->r13 & 0XDF;
    // 0x80803790: lbu         $v1, 0x171($s0)
    ctx->r3 = MEM_BU(ctx->r16, 0X171);
    // 0x80803794: or          $t0, $t6, $t7
    ctx->r8 = ctx->r14 | ctx->r15;
    // 0x80803798: sll         $t9, $zero, 6
    ctx->r25 = S32(0 << 6);
    // 0x8080379C: andi        $t1, $t9, 0x40
    ctx->r9 = ctx->r25 & 0X40;
    // 0x808037A0: andi        $t2, $t0, 0xBF
    ctx->r10 = ctx->r8 & 0XBF;
    // 0x808037A4: sb          $t5, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r13;
    // 0x808037A8: sb          $t0, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r8;
    // 0x808037AC: or          $t3, $t1, $t2
    ctx->r11 = ctx->r9 | ctx->r10;
    // 0x808037B0: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x808037B4: sb          $t3, 0x1E4($s0)
    MEM_B(0X1E4, ctx->r16) = ctx->r11;
    // 0x808037B8: sb          $zero, 0x19D($s0)
    MEM_B(0X19D, ctx->r16) = 0;
    // 0x808037BC: beq         $v1, $at, L_808037E4
    if (ctx->r3 == ctx->r1) {
        // 0x808037C0: sw          $zero, 0x1A0($s0)
        MEM_W(0X1A0, ctx->r16) = 0;
            goto L_808037E4;
    }
    // 0x808037C0: sw          $zero, 0x1A0($s0)
    MEM_W(0X1A0, ctx->r16) = 0;
    // 0x808037C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808037C8: beq         $v1, $at, L_808037E4
    if (ctx->r3 == ctx->r1) {
        // 0x808037CC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808037E4;
    }
    // 0x808037CC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808037D0: beq         $v1, $at, L_808037E4
    if (ctx->r3 == ctx->r1) {
        // 0x808037D4: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_808037E4;
    }
    // 0x808037D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808037D8: beq         $v1, $at, L_808037E4
    if (ctx->r3 == ctx->r1) {
        // 0x808037DC: addiu       $at, $zero, 0x4
        ctx->r1 = ADD32(0, 0X4);
            goto L_808037E4;
    }
    // 0x808037DC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x808037E0: bne         $v1, $at, L_808037F4
    if (ctx->r3 != ctx->r1) {
        // 0x808037E4: addiu       $t4, $zero, 0xA
        ctx->r12 = ADD32(0, 0XA);
            goto L_808037F4;
    }
L_808037E4:
    // 0x808037E4: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x808037E8: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x808037EC: sb          $t4, 0x171($s0)
    MEM_B(0X171, ctx->r16) = ctx->r12;
    // 0x808037F0: sb          $t5, 0x170($s0)
    MEM_B(0X170, ctx->r16) = ctx->r13;
L_808037F4:
    // 0x808037F4: jal         0x800033D0
    // 0x808037F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    gczoombox_entrypoint_14(rdram, ctx);
        goto after_3;
    // 0x808037F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808037FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80803800:
    // 0x80803800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80803804: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80803808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080380C: jr          $ra
    // 0x80803810: nop

    return;
    // 0x80803810: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803814: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80803818: beq         $a0, $zero, L_80803840
    if (ctx->r4 == 0) {
        // 0x8080381C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80803840;
    }
    // 0x8080381C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80803820: lbu         $v0, 0x171($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X171);
    // 0x80803824: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80803828: beq         $v0, $zero, L_80803840
    if (ctx->r2 == 0) {
        // 0x8080382C: nop
    
            goto L_80803840;
    }
    // 0x8080382C: nop

    // 0x80803830: beq         $v0, $at, L_80803840
    if (ctx->r2 == ctx->r1) {
        // 0x80803834: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80803840;
    }
    // 0x80803834: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80803838: bne         $v0, $at, L_80803848
    if (ctx->r2 != ctx->r1) {
        // 0x8080383C: addiu       $v1, $zero, 0x6
        ctx->r3 = ADD32(0, 0X6);
            goto L_80803848;
    }
    // 0x8080383C: addiu       $v1, $zero, 0x6
    ctx->r3 = ADD32(0, 0X6);
L_80803840:
    // 0x80803840: b           L_808038B4
    // 0x80803844: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808038B4;
    // 0x80803844: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80803848:
    // 0x80803848: bnel        $v1, $v0, L_8080386C
    if (ctx->r3 != ctx->r2) {
        // 0x8080384C: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8080386C;
    }
    goto skip_0;
    // 0x8080384C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    skip_0:
    // 0x80803850: lbu         $t6, 0x170($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X170);
    // 0x80803854: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80803858: bnel        $t6, $at, L_8080386C
    if (ctx->r14 != ctx->r1) {
        // 0x8080385C: addiu       $at, $zero, 0x8
        ctx->r1 = ADD32(0, 0X8);
            goto L_8080386C;
    }
    goto skip_1;
    // 0x8080385C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    skip_1:
    // 0x80803860: b           L_808038B4
    // 0x80803864: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808038B4;
    // 0x80803864: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80803868: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
L_8080386C:
    // 0x8080386C: bne         $v0, $at, L_8080388C
    if (ctx->r2 != ctx->r1) {
        // 0x80803870: nop
    
            goto L_8080388C;
    }
    // 0x80803870: nop

    // 0x80803874: lbu         $t7, 0x1E5($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1E5);
    // 0x80803878: addiu       $t9, $zero, 0x6
    ctx->r25 = ADD32(0, 0X6);
    // 0x8080387C: sb          $t9, 0x171($a0)
    MEM_B(0X171, ctx->r4) = ctx->r25;
    // 0x80803880: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x80803884: b           L_808038A0
    // 0x80803888: sb          $t8, 0x1E5($a0)
    MEM_B(0X1E5, ctx->r4) = ctx->r24;
        goto L_808038A0;
    // 0x80803888: sb          $t8, 0x1E5($a0)
    MEM_B(0X1E5, ctx->r4) = ctx->r24;
L_8080388C:
    // 0x8080388C: beq         $v1, $v0, L_808038A0
    if (ctx->r3 == ctx->r2) {
        // 0x80803890: nop
    
            goto L_808038A0;
    }
    // 0x80803890: nop

    // 0x80803894: jal         0x800004D0
    // 0x80803898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808004D0_gczoombox(rdram, ctx);
        goto after_0;
    // 0x80803898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080389C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
L_808038A0:
    // 0x808038A0: jal         0x800033D0
    // 0x808038A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    gczoombox_entrypoint_14(rdram, ctx);
        goto after_1;
    // 0x808038A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x808038A8: jal         0x80003430
    // 0x808038AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    gczoombox_entrypoint_17(rdram, ctx);
        goto after_2;
    // 0x808038AC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808038B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808038B4:
    // 0x808038B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808038B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808038BC: jr          $ra
    // 0x808038C0: nop

    return;
    // 0x808038C0: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808038C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808038C8: beq         $a0, $zero, L_808038F0
    if (ctx->r4 == 0) {
        // 0x808038CC: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_808038F0;
    }
    // 0x808038CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808038D0: lbu         $v0, 0x171($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X171);
    // 0x808038D4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x808038D8: beq         $v0, $zero, L_808038F0
    if (ctx->r2 == 0) {
        // 0x808038DC: nop
    
            goto L_808038F0;
    }
    // 0x808038DC: nop

    // 0x808038E0: beq         $v0, $at, L_808038F0
    if (ctx->r2 == ctx->r1) {
        // 0x808038E4: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_808038F0;
    }
    // 0x808038E4: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x808038E8: bne         $v0, $at, L_808038F8
    if (ctx->r2 != ctx->r1) {
        // 0x808038EC: nop
    
            goto L_808038F8;
    }
    // 0x808038EC: nop

L_808038F0:
    // 0x808038F0: b           L_80803914
    // 0x808038F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80803914;
    // 0x808038F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808038F8:
    // 0x808038F8: jal         0x80003390
    // 0x808038FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    gczoombox_entrypoint_10(rdram, ctx);
        goto after_0;
    // 0x808038FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80803900: jal         0x800033C0
    // 0x80803904: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    gczoombox_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x80803904: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80803908: jal         0x800004D0
    // 0x8080390C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808004D0_gczoombox(rdram, ctx);
        goto after_2;
    // 0x8080390C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80803910: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80803914:
    // 0x80803914: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80803918: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080391C: jr          $ra
    // 0x80803920: nop

    return;
    // 0x80803920: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803924: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80803928: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080392C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80803930: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80803934: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x80803938: sw          $a1, 0x130($a0)
    MEM_W(0X130, ctx->r4) = ctx->r5;
    // 0x8080393C: or          $t9, $a0, $zero
    ctx->r25 = ctx->r4 | 0;
    // 0x80803940: sh          $a2, 0x13A($a0)
    MEM_H(0X13A, ctx->r4) = ctx->r6;
    // 0x80803944: sw          $a3, 0x13C($a0)
    MEM_W(0X13C, ctx->r4) = ctx->r7;
    // 0x80803948: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x8080394C: jal         0x800EC370
    // 0x80803950: addiu       $a1, $t9, 0x134
    ctx->r5 = ADD32(ctx->r25, 0X134);
    func_800EC370(rdram, ctx);
        goto after_0;
    // 0x80803950: addiu       $a1, $t9, 0x134
    ctx->r5 = ADD32(ctx->r25, 0X134);
    after_0:
    // 0x80803954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80803958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080395C: jr          $ra
    // 0x80803960: nop

    return;
    // 0x80803960: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803964: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80803968: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080396C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80803970: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80803974: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80803978: lh          $t7, 0x172($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X172);
    // 0x8080397C: sll         $s1, $a1, 16
    ctx->r17 = S32(ctx->r5 << 16);
    // 0x80803980: sra         $t6, $s1, 16
    ctx->r14 = S32(SIGNED(ctx->r17) >> 16);
    // 0x80803984: or          $s1, $t6, $zero
    ctx->r17 = ctx->r14 | 0;
    // 0x80803988: beq         $t6, $t7, L_808039EC
    if (ctx->r14 == ctx->r15) {
        // 0x8080398C: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_808039EC;
    }
    // 0x8080398C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80803990: jal         0x800000C4
    // 0x80803994: sh          $zero, 0x140($a0)
    MEM_H(0X140, ctx->r4) = 0;
    func_808000C4_gczoombox(rdram, ctx);
        goto after_0;
    // 0x80803994: sh          $zero, 0x140($a0)
    MEM_H(0X140, ctx->r4) = 0;
    after_0:
    // 0x80803998: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080399C: jal         0x80002B94
    // 0x808039A0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80802B94_gczoombox(rdram, ctx);
        goto after_1;
    // 0x808039A0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x808039A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808039A8: addiu       $a1, $s0, 0x1B7
    ctx->r5 = ADD32(ctx->r16, 0X1B7);
    // 0x808039AC: jal         0x80088420
    // 0x808039B0: addiu       $a2, $s0, 0x1B8
    ctx->r6 = ADD32(ctx->r16, 0X1B8);
    _gczoomboxdata_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x808039B0: addiu       $a2, $s0, 0x1B8
    ctx->r6 = ADD32(ctx->r16, 0X1B8);
    after_2:
    // 0x808039B4: jal         0x80000000
    // 0x808039B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_gczoombox(rdram, ctx);
        goto after_3;
    // 0x808039B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808039BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808039C0: jal         0x80002C80
    // 0x808039C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80802C80_gczoombox(rdram, ctx);
        goto after_4;
    // 0x808039C4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x808039C8: lbu         $t8, 0x1E6($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X1E6);
    // 0x808039CC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x808039D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808039D4: andi        $t0, $t8, 0xFFBF
    ctx->r8 = ctx->r24 & 0XFFBF;
    // 0x808039D8: sb          $t0, 0x1E6($s0)
    MEM_B(0X1E6, ctx->r16) = ctx->r8;
    // 0x808039DC: andi        $t1, $t0, 0xDF
    ctx->r9 = ctx->r8 & 0XDF;
    // 0x808039E0: sh          $s1, 0x172($s0)
    MEM_H(0X172, ctx->r16) = ctx->r17;
    // 0x808039E4: sb          $t1, 0x1E6($s0)
    MEM_B(0X1E6, ctx->r16) = ctx->r9;
    // 0x808039E8: swc1        $f4, 0x1C0($s0)
    MEM_W(0X1C0, ctx->r16) = ctx->f4.u32l;
L_808039EC:
    // 0x808039EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808039F0: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808039F4: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808039F8: jr          $ra
    // 0x808039FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808039FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void gczoombox_entrypoint_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803A00: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80803A04: sll         $t6, $a1, 16
    ctx->r14 = S32(ctx->r5 << 16);
    // 0x80803A08: sra         $t7, $t6, 16
    ctx->r15 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80803A0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80803A10: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80803A14: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80803A18: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80803A1C: beq         $a0, $zero, L_80803A58
    if (ctx->r4 == 0) {
        // 0x80803A20: sw          $ra, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r31;
            goto L_80803A58;
    }
    // 0x80803A20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80803A24: lh          $t8, 0x172($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X172);
    // 0x80803A28: beq         $t7, $t8, L_80803A58
    if (ctx->r15 == ctx->r24) {
        // 0x80803A2C: nop
    
            goto L_80803A58;
    }
    // 0x80803A2C: nop

    // 0x80803A30: lbu         $v0, 0x171($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X171);
    // 0x80803A34: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80803A38: beq         $v0, $at, L_80803A60
    if (ctx->r2 == ctx->r1) {
        // 0x80803A3C: addiu       $at, $zero, 0xA
        ctx->r1 = ADD32(0, 0XA);
            goto L_80803A60;
    }
    // 0x80803A3C: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80803A40: beq         $v0, $at, L_80803A60
    if (ctx->r2 == ctx->r1) {
        // 0x80803A44: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80803A60;
    }
    // 0x80803A44: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    // 0x80803A48: beq         $v0, $at, L_80803A60
    if (ctx->r2 == ctx->r1) {
        // 0x80803A4C: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80803A60;
    }
    // 0x80803A4C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80803A50: beql        $v0, $at, L_80803A64
    if (ctx->r2 == ctx->r1) {
        // 0x80803A54: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80803A64;
    }
    goto skip_0;
    // 0x80803A54: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    skip_0:
L_80803A58:
    // 0x80803A58: b           L_80803B10
    // 0x80803A5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80803B10;
    // 0x80803A5C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80803A60:
    // 0x80803A60: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
L_80803A64:
    // 0x80803A64: beq         $v0, $at, L_80803A74
    if (ctx->r2 == ctx->r1) {
        // 0x80803A68: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80803A74;
    }
    // 0x80803A68: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80803A6C: bnel        $v0, $at, L_80803A88
    if (ctx->r2 != ctx->r1) {
        // 0x80803A70: lhu         $t9, 0x142($s0)
        ctx->r25 = MEM_HU(ctx->r16, 0X142);
            goto L_80803A88;
    }
    goto skip_1;
    // 0x80803A70: lhu         $t9, 0x142($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X142);
    skip_1:
L_80803A74:
    // 0x80803A74: jal         0x80003964
    // 0x80803A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    gczoombox_entrypoint_36(rdram, ctx);
        goto after_0;
    // 0x80803A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80803A7C: b           L_80803B10
    // 0x80803A80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80803B10;
    // 0x80803A80: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80803A84: lhu         $t9, 0x142($s0)
    ctx->r25 = MEM_HU(ctx->r16, 0X142);
L_80803A88:
    // 0x80803A88: beql        $t9, $zero, L_80803A98
    if (ctx->r25 == 0) {
        // 0x80803A8C: lhu         $v0, 0x140($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X140);
            goto L_80803A98;
    }
    goto skip_2;
    // 0x80803A8C: lhu         $v0, 0x140($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X140);
    skip_2:
    // 0x80803A90: sh          $zero, 0x142($s0)
    MEM_H(0X142, ctx->r16) = 0;
    // 0x80803A94: lhu         $v0, 0x140($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X140);
L_80803A98:
    // 0x80803A98: beql        $v0, $zero, L_80803AA8
    if (ctx->r2 == 0) {
        // 0x80803A9C: lb          $t0, 0x1B7($s0)
        ctx->r8 = MEM_B(ctx->r16, 0X1B7);
            goto L_80803AA8;
    }
    goto skip_3;
    // 0x80803A9C: lb          $t0, 0x1B7($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X1B7);
    skip_3:
    // 0x80803AA0: sh          $v0, 0x142($s0)
    MEM_H(0X142, ctx->r16) = ctx->r2;
    // 0x80803AA4: lb          $t0, 0x1B7($s0)
    ctx->r8 = MEM_B(ctx->r16, 0X1B7);
L_80803AA8:
    // 0x80803AA8: lb          $t1, 0x1B8($s0)
    ctx->r9 = MEM_B(ctx->r16, 0X1B8);
    // 0x80803AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80803AB0: sb          $t0, 0x1B9($s0)
    MEM_B(0X1B9, ctx->r16) = ctx->r8;
    // 0x80803AB4: sb          $t1, 0x1BA($s0)
    MEM_B(0X1BA, ctx->r16) = ctx->r9;
    // 0x80803AB8: jal         0x80002B94
    // 0x80803ABC: sh          $a1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r5;
    func_80802B94_gczoombox(rdram, ctx);
        goto after_1;
    // 0x80803ABC: sh          $a1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r5;
    after_1:
    // 0x80803AC0: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x80803AC4: addiu       $a1, $s0, 0x1B7
    ctx->r5 = ADD32(ctx->r16, 0X1B7);
    // 0x80803AC8: jal         0x80088420
    // 0x80803ACC: addiu       $a2, $s0, 0x1B8
    ctx->r6 = ADD32(ctx->r16, 0X1B8);
    _gczoomboxdata_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80803ACC: addiu       $a2, $s0, 0x1B8
    ctx->r6 = ADD32(ctx->r16, 0X1B8);
    after_2:
    // 0x80803AD0: jal         0x80000000
    // 0x80803AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_gczoombox(rdram, ctx);
        goto after_3;
    // 0x80803AD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80803AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80803ADC: jal         0x80002C80
    // 0x80803AE0: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    func_80802C80_gczoombox(rdram, ctx);
        goto after_4;
    // 0x80803AE0: lh          $a1, 0x26($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X26);
    after_4:
    // 0x80803AE4: lbu         $t4, 0x1E6($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X1E6);
    // 0x80803AE8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80803AEC: lh          $t2, 0x26($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X26);
    // 0x80803AF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80803AF4: ori         $t7, $t4, 0x40
    ctx->r15 = ctx->r12 | 0X40;
    // 0x80803AF8: sb          $t7, 0x1E6($s0)
    MEM_B(0X1E6, ctx->r16) = ctx->r15;
    // 0x80803AFC: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x80803B00: sb          $t8, 0x1E6($s0)
    MEM_B(0X1E6, ctx->r16) = ctx->r24;
    // 0x80803B04: sh          $t2, 0x172($s0)
    MEM_H(0X172, ctx->r16) = ctx->r10;
    // 0x80803B08: swc1        $f4, 0x1C0($s0)
    MEM_W(0X1C0, ctx->r16) = ctx->f4.u32l;
    // 0x80803B0C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80803B10:
    // 0x80803B10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80803B14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80803B18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80803B1C: jr          $ra
    // 0x80803B20: nop

    return;
    // 0x80803B20: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803B24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80803B28: beq         $a0, $zero, L_80803B38
    if (ctx->r4 == 0) {
        // 0x80803B2C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80803B38;
    }
    // 0x80803B2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80803B30: jal         0x80000294
    // 0x80803B34: sh          $a1, 0x1B0($a0)
    MEM_H(0X1B0, ctx->r4) = ctx->r5;
    func_80800294_gczoombox(rdram, ctx);
        goto after_0;
    // 0x80803B34: sh          $a1, 0x1B0($a0)
    MEM_H(0X1B0, ctx->r4) = ctx->r5;
    after_0:
L_80803B38:
    // 0x80803B38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80803B3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80803B40: jr          $ra
    // 0x80803B44: nop

    return;
    // 0x80803B44: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803B48: sltu        $v0, $zero, $a0
    ctx->r2 = 0 < ctx->r4 ? 1 : 0;
    // 0x80803B4C: beq         $v0, $zero, L_80803B60
    if (ctx->r2 == 0) {
        // 0x80803B50: nop
    
            goto L_80803B60;
    }
    // 0x80803B50: nop

    // 0x80803B54: lbu         $v0, 0x171($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X171);
    // 0x80803B58: sltiu       $t6, $v0, 0x1
    ctx->r14 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x80803B5C: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_80803B60:
    // 0x80803B60: jr          $ra
    // 0x80803B64: nop

    return;
    // 0x80803B64: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803B68: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80803B6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80803B70: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80803B74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80803B78: beq         $a0, $zero, L_80803CDC
    if (ctx->r4 == 0) {
        // 0x80803B7C: sw          $a1, 0x8C($sp)
        MEM_W(0X8C, ctx->r29) = ctx->r5;
            goto L_80803CDC;
    }
    // 0x80803B7C: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x80803B80: lw          $v0, 0x1E4($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1E4);
    // 0x80803B84: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x80803B88: bgezl       $t7, L_80803C48
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80803B8C: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_80803C48;
    }
    goto skip_0;
    // 0x80803B8C: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    skip_0:
    // 0x80803B90: beq         $a1, $zero, L_80803C04
    if (ctx->r5 == 0) {
        // 0x80803B94: sll         $t0, $v0, 28
        ctx->r8 = S32(ctx->r2 << 28);
            goto L_80803C04;
    }
    // 0x80803B94: sll         $t0, $v0, 28
    ctx->r8 = S32(ctx->r2 << 28);
    // 0x80803B98: bltzl       $t0, L_80803C08
    if (SIGNED(ctx->r8) < 0) {
        // 0x80803B9C: lw          $t8, 0x8C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X8C);
            goto L_80803C08;
    }
    goto skip_1;
    // 0x80803B9C: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
    skip_1:
    // 0x80803BA0: lbu         $t1, 0x0($a0)
    ctx->r9 = MEM_BU(ctx->r4, 0X0);
    // 0x80803BA4: addiu       $at, $zero, 0xFD
    ctx->r1 = ADD32(0, 0XFD);
    // 0x80803BA8: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x80803BAC: bne         $t1, $at, L_80803BC0
    if (ctx->r9 != ctx->r1) {
        // 0x80803BB0: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80803BC0;
    }
    // 0x80803BB0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80803BB4: addiu       $t2, $zero, 0x68
    ctx->r10 = ADD32(0, 0X68);
    // 0x80803BB8: b           L_80803BF0
    // 0x80803BBC: sb          $t2, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r10;
        goto L_80803BF0;
    // 0x80803BBC: sb          $t2, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r10;
L_80803BC0:
    // 0x80803BC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80803BC4: jal         0x8000014C
    // 0x80803BC8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_8080014C_gczoombox(rdram, ctx);
        goto after_0;
    // 0x80803BC8: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_0:
    // 0x80803BCC: addiu       $t3, $zero, 0xFD
    ctx->r11 = ADD32(0, 0XFD);
    // 0x80803BD0: addiu       $t4, $zero, 0x68
    ctx->r12 = ADD32(0, 0X68);
    // 0x80803BD4: sb          $t3, 0x0($s0)
    MEM_B(0X0, ctx->r16) = ctx->r11;
    // 0x80803BD8: sb          $t4, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r12;
    // 0x80803BDC: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x80803BE0: addiu       $a1, $s0, 0x2
    ctx->r5 = ADD32(ctx->r16, 0X2);
    // 0x80803BE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80803BE8: jal         0x8000014C
    // 0x80803BEC: addiu       $a3, $zero, 0x2E
    ctx->r7 = ADD32(0, 0X2E);
    func_8080014C_gczoombox(rdram, ctx);
        goto after_1;
    // 0x80803BEC: addiu       $a3, $zero, 0x2E
    ctx->r7 = ADD32(0, 0X2E);
    after_1:
L_80803BF0:
    // 0x80803BF0: lbu         $t6, 0x1E7($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X1E7);
    // 0x80803BF4: ori         $t7, $t6, 0x8
    ctx->r15 = ctx->r14 | 0X8;
    // 0x80803BF8: sb          $t7, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r15;
    // 0x80803BFC: b           L_80803C44
    // 0x80803C00: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
        goto L_80803C44;
    // 0x80803C00: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
L_80803C04:
    // 0x80803C04: lw          $t8, 0x8C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8C);
L_80803C08:
    // 0x80803C08: sll         $t0, $v0, 28
    ctx->r8 = S32(ctx->r2 << 28);
    // 0x80803C0C: bnel        $t8, $zero, L_80803C48
    if (ctx->r24 != 0) {
        // 0x80803C10: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_80803C48;
    }
    goto skip_2;
    // 0x80803C10: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    skip_2:
    // 0x80803C14: bgezl       $t0, L_80803C48
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80803C18: sll         $t6, $v0, 2
        ctx->r14 = S32(ctx->r2 << 2);
            goto L_80803C48;
    }
    goto skip_3;
    // 0x80803C18: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    skip_3:
    // 0x80803C1C: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x80803C20: addiu       $at, $zero, 0xFD
    ctx->r1 = ADD32(0, 0XFD);
    // 0x80803C24: addiu       $t2, $zero, 0x6C
    ctx->r10 = ADD32(0, 0X6C);
    // 0x80803C28: bnel        $t1, $at, L_80803C38
    if (ctx->r9 != ctx->r1) {
        // 0x80803C2C: lbu         $t3, 0x1E7($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0X1E7);
            goto L_80803C38;
    }
    goto skip_4;
    // 0x80803C2C: lbu         $t3, 0x1E7($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1E7);
    skip_4:
    // 0x80803C30: sb          $t2, 0x1($s0)
    MEM_B(0X1, ctx->r16) = ctx->r10;
    // 0x80803C34: lbu         $t3, 0x1E7($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1E7);
L_80803C38:
    // 0x80803C38: andi        $t4, $t3, 0xFFF7
    ctx->r12 = ctx->r11 & 0XFFF7;
    // 0x80803C3C: sb          $t4, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r12;
    // 0x80803C40: lw          $v0, 0x1E4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X1E4);
L_80803C44:
    // 0x80803C44: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
L_80803C48:
    // 0x80803C48: bgez        $t6, L_80803CDC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80803C4C: lw          $t7, 0x8C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X8C);
            goto L_80803CDC;
    }
    // 0x80803C4C: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x80803C50: beql        $t7, $zero, L_80803CBC
    if (ctx->r15 == 0) {
        // 0x80803C54: lbu         $t5, 0x30($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X30);
            goto L_80803CBC;
    }
    goto skip_5;
    // 0x80803C54: lbu         $t5, 0x30($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X30);
    skip_5:
    // 0x80803C58: lbu         $t8, 0x30($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X30);
    // 0x80803C5C: addiu       $at, $zero, 0xFD
    ctx->r1 = ADD32(0, 0XFD);
    // 0x80803C60: addiu       $a0, $s0, 0x30
    ctx->r4 = ADD32(ctx->r16, 0X30);
    // 0x80803C64: bne         $t8, $at, L_80803C78
    if (ctx->r24 != ctx->r1) {
        // 0x80803C68: addiu       $a1, $sp, 0x28
        ctx->r5 = ADD32(ctx->r29, 0X28);
            goto L_80803C78;
    }
    // 0x80803C68: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80803C6C: addiu       $t9, $zero, 0x68
    ctx->r25 = ADD32(0, 0X68);
    // 0x80803C70: b           L_80803CA8
    // 0x80803C74: sb          $t9, 0x31($s0)
    MEM_B(0X31, ctx->r16) = ctx->r25;
        goto L_80803CA8;
    // 0x80803C74: sb          $t9, 0x31($s0)
    MEM_B(0X31, ctx->r16) = ctx->r25;
L_80803C78:
    // 0x80803C78: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80803C7C: jal         0x8000014C
    // 0x80803C80: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    func_8080014C_gczoombox(rdram, ctx);
        goto after_2;
    // 0x80803C80: addiu       $a3, $zero, 0x30
    ctx->r7 = ADD32(0, 0X30);
    after_2:
    // 0x80803C84: addiu       $t0, $zero, 0xFD
    ctx->r8 = ADD32(0, 0XFD);
    // 0x80803C88: addiu       $t1, $zero, 0x68
    ctx->r9 = ADD32(0, 0X68);
    // 0x80803C8C: sb          $t0, 0x30($s0)
    MEM_B(0X30, ctx->r16) = ctx->r8;
    // 0x80803C90: sb          $t1, 0x31($s0)
    MEM_B(0X31, ctx->r16) = ctx->r9;
    // 0x80803C94: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80803C98: addiu       $a1, $s0, 0x32
    ctx->r5 = ADD32(ctx->r16, 0X32);
    // 0x80803C9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80803CA0: jal         0x8000014C
    // 0x80803CA4: addiu       $a3, $zero, 0x2E
    ctx->r7 = ADD32(0, 0X2E);
    func_8080014C_gczoombox(rdram, ctx);
        goto after_3;
    // 0x80803CA4: addiu       $a3, $zero, 0x2E
    ctx->r7 = ADD32(0, 0X2E);
    after_3:
L_80803CA8:
    // 0x80803CA8: lbu         $t3, 0x1E7($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X1E7);
    // 0x80803CAC: ori         $t4, $t3, 0x8
    ctx->r12 = ctx->r11 | 0X8;
    // 0x80803CB0: b           L_80803CDC
    // 0x80803CB4: sb          $t4, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r12;
        goto L_80803CDC;
    // 0x80803CB4: sb          $t4, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r12;
    // 0x80803CB8: lbu         $t5, 0x30($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X30);
L_80803CBC:
    // 0x80803CBC: addiu       $at, $zero, 0xFD
    ctx->r1 = ADD32(0, 0XFD);
    // 0x80803CC0: addiu       $t6, $zero, 0x6C
    ctx->r14 = ADD32(0, 0X6C);
    // 0x80803CC4: bnel        $t5, $at, L_80803CD4
    if (ctx->r13 != ctx->r1) {
        // 0x80803CC8: lbu         $t7, 0x1E7($s0)
        ctx->r15 = MEM_BU(ctx->r16, 0X1E7);
            goto L_80803CD4;
    }
    goto skip_6;
    // 0x80803CC8: lbu         $t7, 0x1E7($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1E7);
    skip_6:
    // 0x80803CCC: sb          $t6, 0x31($s0)
    MEM_B(0X31, ctx->r16) = ctx->r14;
    // 0x80803CD0: lbu         $t7, 0x1E7($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X1E7);
L_80803CD4:
    // 0x80803CD4: andi        $t8, $t7, 0xFFF7
    ctx->r24 = ctx->r15 & 0XFFF7;
    // 0x80803CD8: sb          $t8, 0x1E7($s0)
    MEM_B(0X1E7, ctx->r16) = ctx->r24;
L_80803CDC:
    // 0x80803CDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80803CE0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80803CE4: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    // 0x80803CE8: jr          $ra
    // 0x80803CEC: nop

    return;
    // 0x80803CEC: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803CF0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80803CF4: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80803CF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80803CFC: nop

    // 0x80803D00: div.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = DIV_S(ctx->f4.fl, ctx->f12.fl);
    // 0x80803D04: jr          $ra
    // 0x80803D08: swc1        $f6, 0x1D8($a0)
    MEM_W(0X1D8, ctx->r4) = ctx->f6.u32l;
    return;
    // 0x80803D08: swc1        $f6, 0x1D8($a0)
    MEM_W(0X1D8, ctx->r4) = ctx->f6.u32l;
;}
RECOMP_FUNC void gczoombox_entrypoint_42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803D0C: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80803D10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80803D14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80803D18: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80803D1C: jal         0x80000358
    // 0x80803D20: nop

    func_80800358_gczoombox(rdram, ctx);
        goto after_0;
    // 0x80803D20: nop

    after_0:
    // 0x80803D24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80803D28: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80803D2C: jr          $ra
    // 0x80803D30: nop

    return;
    // 0x80803D30: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803D34: beql        $a1, $zero, L_80803D50
    if (ctx->r5 == 0) {
        // 0x80803D38: lbu         $t9, 0x1E7($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0X1E7);
            goto L_80803D50;
    }
    goto skip_0;
    // 0x80803D38: lbu         $t9, 0x1E7($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1E7);
    skip_0:
    // 0x80803D3C: lbu         $t7, 0x1E7($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1E7);
    // 0x80803D40: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x80803D44: jr          $ra
    // 0x80803D48: sb          $t8, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r24;
    return;
    // 0x80803D48: sb          $t8, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r24;
    // 0x80803D4C: lbu         $t9, 0x1E7($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1E7);
L_80803D50:
    // 0x80803D50: andi        $t0, $t9, 0xFFBF
    ctx->r8 = ctx->r25 & 0XFFBF;
    // 0x80803D54: sb          $t0, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r8;
    // 0x80803D58: jr          $ra
    // 0x80803D5C: nop

    return;
    // 0x80803D5C: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803D60: beql        $a1, $zero, L_80803D7C
    if (ctx->r5 == 0) {
        // 0x80803D64: lbu         $t9, 0x1E7($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0X1E7);
            goto L_80803D7C;
    }
    goto skip_0;
    // 0x80803D64: lbu         $t9, 0x1E7($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1E7);
    skip_0:
    // 0x80803D68: lbu         $t7, 0x1E7($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1E7);
    // 0x80803D6C: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x80803D70: jr          $ra
    // 0x80803D74: sb          $t8, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r24;
    return;
    // 0x80803D74: sb          $t8, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r24;
    // 0x80803D78: lbu         $t9, 0x1E7($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1E7);
L_80803D7C:
    // 0x80803D7C: andi        $t0, $t9, 0xFFDF
    ctx->r8 = ctx->r25 & 0XFFDF;
    // 0x80803D80: sb          $t0, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r8;
    // 0x80803D84: jr          $ra
    // 0x80803D88: nop

    return;
    // 0x80803D88: nop

;}
RECOMP_FUNC void gczoombox_entrypoint_45(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80803D8C: beql        $a1, $zero, L_80803DA8
    if (ctx->r5 == 0) {
        // 0x80803D90: lbu         $t9, 0x1E7($a0)
        ctx->r25 = MEM_BU(ctx->r4, 0X1E7);
            goto L_80803DA8;
    }
    goto skip_0;
    // 0x80803D90: lbu         $t9, 0x1E7($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1E7);
    skip_0:
    // 0x80803D94: lbu         $t7, 0x1E7($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X1E7);
    // 0x80803D98: ori         $t8, $t7, 0x10
    ctx->r24 = ctx->r15 | 0X10;
    // 0x80803D9C: jr          $ra
    // 0x80803DA0: sb          $t8, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r24;
    return;
    // 0x80803DA0: sb          $t8, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r24;
    // 0x80803DA4: lbu         $t9, 0x1E7($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X1E7);
L_80803DA8:
    // 0x80803DA8: andi        $t0, $t9, 0xFFEF
    ctx->r8 = ctx->r25 & 0XFFEF;
    // 0x80803DAC: sb          $t0, 0x1E7($a0)
    MEM_B(0X1E7, ctx->r4) = ctx->r8;
    // 0x80803DB0: jr          $ra
    // 0x80803DB4: nop

    return;
    // 0x80803DB4: nop

    // 0x80803DB8: nop

    // 0x80803DBC: nop

;}
RECOMP_FUNC void gczoomboxdata_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800004: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80800008: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8080000C: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(689, 0XAA8) << 16);
    // 0x80800010: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800014: addiu       $t7, $t7, 0xAA8
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(689, 0XAA8));
    // 0x80800018: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8080001C: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x80800020: lw          $v0, 0x4($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X4);
    // 0x80800024: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800028: beql        $v0, $zero, L_80800248
    if (ctx->r2 == 0) {
        // 0x8080002C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800248;
    }
    goto skip_0;
    // 0x8080002C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800030: lbu         $t8, 0x8($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X8);
    // 0x80800034: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80800038: beql        $t8, $zero, L_80800248
    if (ctx->r24 == 0) {
        // 0x8080003C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800248;
    }
    goto skip_1;
    // 0x8080003C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80800040: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800044: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800048: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8080004C: nop

    // 0x80800050: bc1fl       L_80800080
    if (!c1cs) {
        // 0x80800054: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80800080;
    }
    goto skip_2;
    // 0x80800054: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_2:
    // 0x80800058: jal         0x800FCCD4
    // 0x8080005C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    func_800FCCD4(rdram, ctx);
        goto after_0;
    // 0x8080005C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    after_0:
    // 0x80800060: bnel        $v0, $zero, L_80800248
    if (ctx->r2 != 0) {
        // 0x80800064: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800248;
    }
    goto skip_3;
    // 0x80800064: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
    // 0x80800068: lw          $t9, 0x4($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X4);
    // 0x8080006C: jal         0x800FC6B0
    // 0x80800070: lh          $a0, 0x0($t9)
    ctx->r4 = MEM_H(ctx->r25, 0X0);
    func_800FC6B0(rdram, ctx);
        goto after_1;
    // 0x80800070: lh          $a0, 0x0($t9)
    ctx->r4 = MEM_H(ctx->r25, 0X0);
    after_1:
    // 0x80800074: b           L_80800248
    // 0x80800078: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800248;
    // 0x80800078: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080007C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80800080:
    // 0x80800080: jal         0x800DC214
    // 0x80800084: lbu         $a1, 0x8($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8);
    func_800DC214(rdram, ctx);
        goto after_2;
    // 0x80800084: lbu         $a1, 0x8($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X8);
    after_2:
    // 0x80800088: lw          $t0, 0x4($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X4);
    // 0x8080008C: sll         $t1, $v0, 3
    ctx->r9 = S32(ctx->r2 << 3);
    // 0x80800090: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80800094: addu        $v1, $t0, $t1
    ctx->r3 = ADD32(ctx->r8, ctx->r9);
    // 0x80800098: lh          $a2, 0x2($v1)
    ctx->r6 = MEM_H(ctx->r3, 0X2);
    // 0x8080009C: beql        $a2, $zero, L_80800080
    if (ctx->r6 == 0) {
        // 0x808000A0: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80800080;
    }
    goto skip_4;
    // 0x808000A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    skip_4:
    // 0x808000A4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(689, 0X3B0) << 16);
    // 0x808000A8: lwc1        $f16, 0x3B0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(689, 0X3B0));
    // 0x808000AC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(689, 0X3B4) << 16);
    // 0x808000B0: lwc1        $f2, 0x4($v1)
    ctx->f2.u32l = MEM_W(ctx->r3, 0X4);
    // 0x808000B4: lwc1        $f8, 0x3B4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(689, 0X3B4));
    // 0x808000B8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x808000BC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x808000C0: sub.s       $f0, $f2, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f8.fl;
    // 0x808000C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808000C8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(689, 0X3B8) << 16);
    // 0x808000CC: c.lt.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl < ctx->f16.fl;
    // 0x808000D0: nop

    // 0x808000D4: bc1fl       L_808000E8
    if (!c1cs) {
        // 0x808000D8: swc1        $f0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
            goto L_808000E8;
    }
    goto skip_5;
    // 0x808000D8: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
    skip_5:
    // 0x808000DC: b           L_808000E8
    // 0x808000E0: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
        goto L_808000E8;
    // 0x808000E0: swc1        $f16, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f16.u32l;
    // 0x808000E4: swc1        $f0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f0.u32l;
L_808000E8:
    // 0x808000E8: lwc1        $f10, 0x40($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X40);
    // 0x808000EC: sub.s       $f0, $f2, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = ctx->f2.fl - ctx->f4.fl;
    // 0x808000F0: c.le.s      $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f12.fl <= ctx->f10.fl;
    // 0x808000F4: nop

    // 0x808000F8: bc1fl       L_8080010C
    if (!c1cs) {
        // 0x808000FC: c.lt.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
            goto L_8080010C;
    }
    goto skip_6;
    // 0x808000FC: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
    skip_6:
    // 0x80800100: lwc1        $f18, 0x3B8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(689, 0X3B8));
    // 0x80800104: swc1        $f18, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f18.u32l;
    // 0x80800108: c.lt.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl < ctx->f12.fl;
L_8080010C:
    // 0x8080010C: nop

    // 0x80800110: bc1fl       L_80800124
    if (!c1cs) {
        // 0x80800114: mov.s       $f14, $f12
        CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
            goto L_80800124;
    }
    goto skip_7;
    // 0x80800114: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
    skip_7:
    // 0x80800118: b           L_80800124
    // 0x8080011C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
        goto L_80800124;
    // 0x8080011C: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    // 0x80800120: mov.s       $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    ctx->f14.fl = ctx->f12.fl;
L_80800124:
    // 0x80800124: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x80800128: nop

    // 0x8080012C: bc1tl       L_8080013C
    if (c1cs) {
        // 0x80800130: sw          $a2, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r6;
            goto L_8080013C;
    }
    goto skip_8;
    // 0x80800130: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    skip_8:
    // 0x80800134: mov.s       $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = ctx->f16.fl;
    // 0x80800138: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
L_8080013C:
    // 0x8080013C: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80800140: jal         0x800C2E04
    // 0x80800144: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    func_800C2E04(rdram, ctx);
        goto after_3;
    // 0x80800144: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    after_3:
    // 0x80800148: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x8080014C: lw          $a3, 0x5C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X5C);
    // 0x80800150: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800154: beq         $v0, $zero, L_80800244
    if (ctx->r2 == 0) {
        // 0x80800158: andi        $a0, $v0, 0xFF
        ctx->r4 = ctx->r2 & 0XFF;
            goto L_80800244;
    }
    // 0x80800158: andi        $a0, $v0, 0xFF
    ctx->r4 = ctx->r2 & 0XFF;
    // 0x8080015C: lw          $t2, 0x4($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X4);
    // 0x80800160: sll         $v0, $a3, 3
    ctx->r2 = S32(ctx->r7 << 3);
    // 0x80800164: addu        $t3, $t2, $v0
    ctx->r11 = ADD32(ctx->r10, ctx->r2);
    // 0x80800168: lh          $a1, 0x0($t3)
    ctx->r5 = MEM_H(ctx->r11, 0X0);
    // 0x8080016C: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    // 0x80800170: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x80800174: sb          $a0, 0x3B($sp)
    MEM_B(0X3B, ctx->r29) = ctx->r4;
    // 0x80800178: jal         0x800C301C
    // 0x8080017C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_800C301C(rdram, ctx);
        goto after_4;
    // 0x8080017C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_4:
    // 0x80800180: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    // 0x80800184: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800188: addiu       $v0, $a2, -0x1770
    ctx->r2 = ADD32(ctx->r6, -0X1770);
    // 0x8080018C: bgezl       $v0, L_808001A0
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80800190: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_808001A0;
    }
    goto skip_9;
    // 0x80800190: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    skip_9:
    // 0x80800194: b           L_808001A0
    // 0x80800198: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
        goto L_808001A0;
    // 0x80800198: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8080019C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_808001A0:
    // 0x808001A0: bgez        $a2, L_808001B0
    if (SIGNED(ctx->r6) >= 0) {
        // 0x808001A4: or          $v0, $a2, $zero
        ctx->r2 = ctx->r6 | 0;
            goto L_808001B0;
    }
    // 0x808001A4: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x808001A8: b           L_808001B4
    // 0x808001AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_808001B4;
    // 0x808001AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_808001B0:
    // 0x808001B0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_808001B4:
    // 0x808001B4: jal         0x800DC214
    // 0x808001B8: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    func_800DC214(rdram, ctx);
        goto after_5;
    // 0x808001B8: swc1        $f14, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f14.u32l;
    after_5:
    // 0x808001BC: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x808001C0: jal         0x800C3058
    // 0x808001C4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800C3058(rdram, ctx);
        goto after_6;
    // 0x808001C4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x808001C8: lwc1        $f14, 0x3C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x808001CC: jal         0x800DC264
    // 0x808001D0: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    func_800DC264(rdram, ctx);
        goto after_7;
    // 0x808001D0: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    after_7:
    // 0x808001D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001D8: jal         0x800C31DC
    // 0x808001DC: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    func_800C31DC(rdram, ctx);
        goto after_8;
    // 0x808001DC: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    after_8:
    // 0x808001E0: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x808001E4: jal         0x800C330C
    // 0x808001E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800C330C(rdram, ctx);
        goto after_9;
    // 0x808001E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x808001EC: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x808001F0: jal         0x800C3418
    // 0x808001F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C3418(rdram, ctx);
        goto after_10;
    // 0x808001F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x808001F8: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x808001FC: jal         0x800C34CC
    // 0x80800200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800C34CC(rdram, ctx);
        goto after_11;
    // 0x80800200: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80800204: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x80800208: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8080020C: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x80800210: jal         0x800C42E0
    // 0x80800214: lh          $a0, 0x0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X0);
    func_800C42E0(rdram, ctx);
        goto after_12;
    // 0x80800214: lh          $a0, 0x0($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X0);
    after_12:
    // 0x80800218: beq         $v0, $zero, L_8080023C
    if (ctx->r2 == 0) {
        // 0x8080021C: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(689, 0X3BC) << 16);
            goto L_8080023C;
    }
    // 0x8080021C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(689, 0X3BC) << 16);
    // 0x80800220: lwc1        $f0, 0x3BC($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(689, 0X3BC));
    // 0x80800224: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    // 0x80800228: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x8080022C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800230: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80800234: jal         0x800C3A40
    // 0x80800238: nop

    func_800C3A40(rdram, ctx);
        goto after_13;
    // 0x80800238: nop

    after_13:
L_8080023C:
    // 0x8080023C: jal         0x800C3BDC
    // 0x80800240: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    func_800C3BDC(rdram, ctx);
        goto after_14;
    // 0x80800240: lbu         $a0, 0x3B($sp)
    ctx->r4 = MEM_BU(ctx->r29, 0X3B);
    after_14:
L_80800244:
    // 0x80800244: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800248:
    // 0x80800248: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080024C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80800250: jr          $ra
    // 0x80800254: nop

    return;
    // 0x80800254: nop

;}
RECOMP_FUNC void gczoomboxdata_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800258: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080025C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80800260: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800264: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(689, 0XAA8) << 16);
    // 0x80800268: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080026C: jr          $ra
    // 0x80800270: lhu         $v0, 0xAA8($v0)
    ctx->r2 = MEM_HU(ctx->r2, (int16_t)RELOC_LO16(689, 0XAA8));
    return;
    // 0x80800270: lhu         $v0, 0xAA8($v0)
    ctx->r2 = MEM_HU(ctx->r2, (int16_t)RELOC_LO16(689, 0XAA8));
;}
RECOMP_FUNC void gczoomboxdata_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800274: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800278: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x8080027C: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(689, 0XAA8) << 16);
    // 0x80800280: addiu       $t7, $t7, 0xAA8
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(689, 0XAA8));
    // 0x80800284: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800288: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x8080028C: lb          $t8, 0x2($v0)
    ctx->r24 = MEM_B(ctx->r2, 0X2);
    // 0x80800290: sb          $t8, 0x0($a1)
    MEM_B(0X0, ctx->r5) = ctx->r24;
    // 0x80800294: lb          $t9, 0x3($v0)
    ctx->r25 = MEM_B(ctx->r2, 0X3);
    // 0x80800298: jr          $ra
    // 0x8080029C: sb          $t9, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r25;
    return;
    // 0x8080029C: sb          $t9, 0x0($a2)
    MEM_B(0X0, ctx->r6) = ctx->r25;
;}
RECOMP_FUNC void gczoomboxdata_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808002A4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x808002A8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808002AC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(689, 0XAB0) << 16);
    // 0x808002B0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808002B4: jr          $ra
    // 0x808002B8: lbu         $v0, 0xAB0($v0)
    ctx->r2 = MEM_BU(ctx->r2, (int16_t)RELOC_LO16(689, 0XAB0));
    return;
    // 0x808002B8: lbu         $v0, 0xAB0($v0)
    ctx->r2 = MEM_BU(ctx->r2, (int16_t)RELOC_LO16(689, 0XAB0));
;}
RECOMP_FUNC void gczoomboxdata_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002BC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808002C0: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x808002C4: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(689, 0XAA8) << 16);
    // 0x808002C8: addiu       $t7, $t7, 0xAA8
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(689, 0XAA8));
    // 0x808002CC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808002D0: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    // 0x808002D4: lw          $t8, 0x4($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X4);
    // 0x808002D8: sll         $v1, $a1, 3
    ctx->r3 = S32(ctx->r5 << 3);
    // 0x808002DC: addu        $t9, $t8, $v1
    ctx->r25 = ADD32(ctx->r24, ctx->r3);
    // 0x808002E0: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x808002E4: sh          $t0, 0x0($a2)
    MEM_H(0X0, ctx->r6) = ctx->r8;
    // 0x808002E8: lw          $t1, 0x4($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X4);
    // 0x808002EC: addu        $t2, $t1, $v1
    ctx->r10 = ADD32(ctx->r9, ctx->r3);
    // 0x808002F0: lh          $t3, 0x2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X2);
    // 0x808002F4: sh          $t3, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r11;
    // 0x808002F8: lw          $t4, 0x4($v0)
    ctx->r12 = MEM_W(ctx->r2, 0X4);
    // 0x808002FC: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x80800300: addu        $t5, $t4, $v1
    ctx->r13 = ADD32(ctx->r12, ctx->r3);
    // 0x80800304: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80800308: jr          $ra
    // 0x8080030C: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
    return;
    // 0x8080030C: swc1        $f4, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f4.u32l;
;}
RECOMP_FUNC void gczoomboxdata_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800310: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800314: addiu       $at, $zero, 0x44
    ctx->r1 = ADD32(0, 0X44);
    // 0x80800318: bne         $a0, $at, L_80800328
    if (ctx->r4 != ctx->r1) {
        // 0x8080031C: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_80800328;
    }
    // 0x8080031C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800320: b           L_80800368
    // 0x80800324: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800368;
    // 0x80800324: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800328:
    // 0x80800328: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080032C: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80800330: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800334: lui         $v1, 0x0
    ctx->r3 = S32(RELOC_HI16(689, 0XAA8) << 16);
    // 0x80800338: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x8080033C: lhu         $v1, 0xAA8($v1)
    ctx->r3 = MEM_HU(ctx->r3, (int16_t)RELOC_LO16(689, 0XAA8));
    // 0x80800340: beq         $v1, $zero, L_8080035C
    if (ctx->r3 == 0) {
        // 0x80800344: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_8080035C;
    }
    // 0x80800344: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80800348: jal         0x800D58FC
    // 0x8080034C: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    func_800D58FC(rdram, ctx);
        goto after_0;
    // 0x8080034C: sh          $v1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r3;
    after_0:
    // 0x80800350: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800354: bne         $v0, $at, L_80800364
    if (ctx->r2 != ctx->r1) {
        // 0x80800358: lhu         $v1, 0x1E($sp)
        ctx->r3 = MEM_HU(ctx->r29, 0X1E);
            goto L_80800364;
    }
    // 0x80800358: lhu         $v1, 0x1E($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X1E);
L_8080035C:
    // 0x8080035C: b           L_80800368
    // 0x80800360: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800368;
    // 0x80800360: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800364:
    // 0x80800364: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80800368:
    // 0x80800368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080036C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800370: jr          $ra
    // 0x80800374: nop

    return;
    // 0x80800374: nop

;}
RECOMP_FUNC void gczoomboxdata_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080037C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800380: jal         0x80000310
    // 0x80800384: nop

    gczoomboxdata_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x80800384: nop

    after_0:
    // 0x80800388: beq         $v0, $zero, L_8080039C
    if (ctx->r2 == 0) {
        // 0x8080038C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080039C;
    }
    // 0x8080038C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800390: addiu       $at, $zero, 0xBAE
    ctx->r1 = ADD32(0, 0XBAE);
    // 0x80800394: bnel        $v0, $at, L_808003A8
    if (ctx->r2 != ctx->r1) {
        // 0x80800398: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_808003A8;
    }
    goto skip_0;
    // 0x80800398: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
L_8080039C:
    // 0x8080039C: b           L_808003A8
    // 0x808003A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808003A8;
    // 0x808003A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808003A4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808003A8:
    // 0x808003A8: jr          $ra
    // 0x808003AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x808003AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void gemarkersDll_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: slti        $at, $a0, 0xB6
    ctx->r1 = SIGNED(ctx->r4) < 0XB6 ? 1 : 0;
    // 0x80800004: bne         $at, $zero, L_80800014
    if (ctx->r1 != 0) {
        // 0x80800008: slti        $at, $a0, 0x546
        ctx->r1 = SIGNED(ctx->r4) < 0X546 ? 1 : 0;
            goto L_80800014;
    }
    // 0x80800008: slti        $at, $a0, 0x546
    ctx->r1 = SIGNED(ctx->r4) < 0X546 ? 1 : 0;
    // 0x8080000C: bne         $at, $zero, L_8080001C
    if (ctx->r1 != 0) {
        // 0x80800010: sll         $t6, $a0, 2
        ctx->r14 = S32(ctx->r4 << 2);
            goto L_8080001C;
    }
    // 0x80800010: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
L_80800014:
    // 0x80800014: jr          $ra
    // 0x80800018: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80800018: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080001C:
    // 0x8080001C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(690, 0XFFFFFDB8) << 16);
    // 0x80800020: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800024: lw          $v0, -0x248($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(690, 0XFFFFFDB8));
    // 0x80800028: jr          $ra
    // 0x8080002C: nop

    return;
    // 0x8080002C: nop

;}
RECOMP_FUNC void gemarkersDll_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800030: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800034: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800038: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8080003C: jal         0x800A9C98
    // 0x80800040: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800A9C98(rdram, ctx);
        goto after_0;
    // 0x80800040: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800044: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800048: beq         $v0, $zero, L_80800068
    if (ctx->r2 == 0) {
        // 0x8080004C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800068;
    }
    // 0x8080004C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800050: blez        $a0, L_8080007C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80800054: slti        $at, $a0, 0x9
        ctx->r1 = SIGNED(ctx->r4) < 0X9 ? 1 : 0;
            goto L_8080007C;
    }
    // 0x80800054: slti        $at, $a0, 0x9
    ctx->r1 = SIGNED(ctx->r4) < 0X9 ? 1 : 0;
    // 0x80800058: beql        $at, $zero, L_80800080
    if (ctx->r1 == 0) {
        // 0x8080005C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800080;
    }
    goto skip_0;
    // 0x8080005C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800060: b           L_8080007C
    // 0x80800064: addiu       $v1, $a0, 0x7F
    ctx->r3 = ADD32(ctx->r4, 0X7F);
        goto L_8080007C;
    // 0x80800064: addiu       $v1, $a0, 0x7F
    ctx->r3 = ADD32(ctx->r4, 0X7F);
L_80800068:
    // 0x80800068: blez        $a0, L_8080007C
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8080006C: slti        $at, $a0, 0x29
        ctx->r1 = SIGNED(ctx->r4) < 0X29 ? 1 : 0;
            goto L_8080007C;
    }
    // 0x8080006C: slti        $at, $a0, 0x29
    ctx->r1 = SIGNED(ctx->r4) < 0X29 ? 1 : 0;
    // 0x80800070: beql        $at, $zero, L_80800080
    if (ctx->r1 == 0) {
        // 0x80800074: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800080;
    }
    goto skip_1;
    // 0x80800074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80800078: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_8080007C:
    // 0x8080007C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800080:
    // 0x80800080: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800084: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800088: jr          $ra
    // 0x8080008C: nop

    return;
    // 0x8080008C: nop

;}
RECOMP_FUNC void func_80800000_glcrc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80800004: lui         $t6, 0x8F80
    ctx->r14 = S32(0X8F80 << 16);
    // 0x80800008: lui         $t7, 0x3108
    ctx->r15 = S32(0X3108 << 16);
    // 0x8080000C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80800010: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80800014: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80800018: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080001C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800020: ori         $t7, $t7, 0xB3C1
    ctx->r15 = ctx->r15 | 0XB3C1;
    // 0x80800024: ori         $t6, $t6, 0x9F47
    ctx->r14 = ctx->r14 | 0X9F47;
    // 0x80800028: sltu        $at, $a0, $a1
    ctx->r1 = ctx->r4 < ctx->r5 ? 1 : 0;
    // 0x8080002C: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x80800030: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800034: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80800038: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x8080003C: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80800040: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x80800044: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x80800048: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x8080004C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80800050: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80800054: beq         $at, $zero, L_808000B0
    if (ctx->r1 == 0) {
        // 0x80800058: or          $s0, $a0, $zero
        ctx->r16 = ctx->r4 | 0;
            goto L_808000B0;
    }
    // 0x80800058: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080005C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80800060: addiu       $s2, $sp, 0x48
    ctx->r18 = ADD32(ctx->r29, 0X48);
L_80800064:
    // 0x80800064: lbu         $t8, 0x0($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X0);
    // 0x80800068: lw          $t5, 0x4C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4C);
    // 0x8080006C: andi        $t9, $s1, 0xF
    ctx->r25 = ctx->r17 & 0XF;
    // 0x80800070: sllv        $t0, $t8, $t9
    ctx->r8 = S32(ctx->r24 << (ctx->r25 & 31));
    // 0x80800074: lw          $t4, 0x48($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X48);
    // 0x80800078: addu        $t7, $t0, $t5
    ctx->r15 = ADD32(ctx->r8, ctx->r13);
    // 0x8080007C: sra         $t2, $t0, 31
    ctx->r10 = S32(SIGNED(ctx->r8) >> 31);
    // 0x80800080: sltu        $at, $t7, $t5
    ctx->r1 = ctx->r15 < ctx->r13 ? 1 : 0;
    // 0x80800084: addu        $t6, $at, $t2
    ctx->r14 = ADD32(ctx->r1, ctx->r10);
    // 0x80800088: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x8080008C: sw          $t6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r14;
    // 0x80800090: sw          $t7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r15;
    // 0x80800094: jal         0x801168AC
    // 0x80800098: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_801168AC(rdram, ctx);
        goto after_0;
    // 0x80800098: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x8080009C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x808000A0: addiu       $s1, $s1, 0x7
    ctx->r17 = ADD32(ctx->r17, 0X7);
    // 0x808000A4: bne         $s0, $s5, L_80800064
    if (ctx->r16 != ctx->r21) {
        // 0x808000A8: xor         $s3, $s3, $v0
        ctx->r19 = ctx->r19 ^ ctx->r2;
            goto L_80800064;
    }
    // 0x808000A8: xor         $s3, $s3, $v0
    ctx->r19 = ctx->r19 ^ ctx->r2;
    // 0x808000AC: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
L_808000B0:
    // 0x808000B0: addiu       $s0, $s5, -0x1
    ctx->r16 = ADD32(ctx->r21, -0X1);
    // 0x808000B4: sltu        $at, $s0, $a3
    ctx->r1 = ctx->r16 < ctx->r7 ? 1 : 0;
    // 0x808000B8: bne         $at, $zero, L_8080010C
    if (ctx->r1 != 0) {
        // 0x808000BC: addiu       $s2, $sp, 0x48
        ctx->r18 = ADD32(ctx->r29, 0X48);
            goto L_8080010C;
    }
    // 0x808000BC: addiu       $s2, $sp, 0x48
    ctx->r18 = ADD32(ctx->r29, 0X48);
    // 0x808000C0: addiu       $s5, $a3, -0x1
    ctx->r21 = ADD32(ctx->r7, -0X1);
L_808000C4:
    // 0x808000C4: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x808000C8: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x808000CC: andi        $t8, $s1, 0xF
    ctx->r24 = ctx->r17 & 0XF;
    // 0x808000D0: sllv        $t9, $t1, $t8
    ctx->r25 = S32(ctx->r9 << (ctx->r24 & 31));
    // 0x808000D4: lw          $t2, 0x48($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X48);
    // 0x808000D8: addu        $t5, $t9, $t3
    ctx->r13 = ADD32(ctx->r25, ctx->r11);
    // 0x808000DC: sra         $t0, $t9, 31
    ctx->r8 = S32(SIGNED(ctx->r25) >> 31);
    // 0x808000E0: sltu        $at, $t5, $t3
    ctx->r1 = ctx->r13 < ctx->r11 ? 1 : 0;
    // 0x808000E4: addu        $t4, $at, $t0
    ctx->r12 = ADD32(ctx->r1, ctx->r8);
    // 0x808000E8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x808000EC: sw          $t4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r12;
    // 0x808000F0: sw          $t5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r13;
    // 0x808000F4: jal         0x801168AC
    // 0x808000F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_801168AC(rdram, ctx);
        goto after_1;
    // 0x808000F8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_1:
    // 0x808000FC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80800100: addiu       $s1, $s1, 0x3
    ctx->r17 = ADD32(ctx->r17, 0X3);
    // 0x80800104: bne         $s0, $s5, L_808000C4
    if (ctx->r16 != ctx->r21) {
        // 0x80800108: xor         $s4, $s4, $v0
        ctx->r20 = ctx->r20 ^ ctx->r2;
            goto L_808000C4;
    }
    // 0x80800108: xor         $s4, $s4, $v0
    ctx->r20 = ctx->r20 ^ ctx->r2;
L_8080010C:
    // 0x8080010C: lw          $t6, 0x60($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X60);
    // 0x80800110: sw          $s3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r19;
    // 0x80800114: sw          $s4, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r20;
    // 0x80800118: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8080011C: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80800120: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80800124: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80800128: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8080012C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800130: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800134: jr          $ra
    // 0x80800138: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80800138: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void glcrc_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080013C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800140: addu        $a1, $a0, $a1
    ctx->r5 = ADD32(ctx->r4, ctx->r5);
    // 0x80800144: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800148: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x8080014C: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80800150: jal         0x80000000
    // 0x80800154: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_80800000_glcrc(rdram, ctx);
        goto after_0;
    // 0x80800154: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800158: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x8080015C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800160: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x80800164: jr          $ra
    // 0x80800168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800168: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void glcrc_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080016C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800170: addu        $a1, $a0, $a1
    ctx->r5 = ADD32(ctx->r4, ctx->r5);
    // 0x80800174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800178: addiu       $a1, $a1, -0x8
    ctx->r5 = ADD32(ctx->r5, -0X8);
    // 0x8080017C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800180: jal         0x80000000
    // 0x80800184: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    func_80800000_glcrc(rdram, ctx);
        goto after_0;
    // 0x80800184: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x80800188: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8080018C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80800190: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800194: lw          $t6, 0x0($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X0);
    // 0x80800198: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8080019C: lui         $v1, 0x6
    ctx->r3 = S32(0X6 << 16);
    // 0x808001A0: bne         $t6, $t7, L_808001B4
    if (ctx->r14 != ctx->r15) {
        // 0x808001A4: nop
    
            goto L_808001B4;
    }
    // 0x808001A4: nop

    // 0x808001A8: lw          $t8, 0x4($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X4);
    // 0x808001AC: beql        $t8, $t9, L_808001C0
    if (ctx->r24 == ctx->r25) {
        // 0x808001B0: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_808001C0;
    }
    goto skip_0;
    // 0x808001B0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    skip_0:
L_808001B4:
    // 0x808001B4: b           L_808001C0
    // 0x808001B8: ori         $v1, $v1, 0xE382
    ctx->r3 = ctx->r3 | 0XE382;
        goto L_808001C0;
    // 0x808001B8: ori         $v1, $v1, 0xE382
    ctx->r3 = ctx->r3 | 0XE382;
    // 0x808001BC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_808001C0:
    // 0x808001C0: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x808001C4: jr          $ra
    // 0x808001C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x808001C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808001CC: nop

;}
RECOMP_FUNC void func_80800000_glcutDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80800004: jr          $ra
    // 0x80800008: sb          $a0, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r4;
    return;
    // 0x80800008: sb          $a0, 0x75EE($at)
    MEM_B(0X75EE, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_8080000C_glcutDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080000C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80800010: jr          $ra
    // 0x80800014: sb          $a0, 0x75F1($at)
    MEM_B(0X75F1, ctx->r1) = ctx->r4;
    return;
    // 0x80800014: sb          $a0, 0x75F1($at)
    MEM_B(0X75F1, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_80800018_glcutDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800018: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080001C: addiu       $t7, $a0, -0x1
    ctx->r15 = ADD32(ctx->r4, -0X1);
    // 0x80800020: sltiu       $at, $t7, 0x6
    ctx->r1 = ctx->r15 < 0X6 ? 1 : 0;
    // 0x80800024: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800028: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080002C: beq         $at, $zero, L_80800310
    if (ctx->r1 == 0) {
        // 0x80800030: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80800310;
    }
    // 0x80800030: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800034: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80800038: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(692, 0X7E0) << 16);
    // 0x8080003C: addu        $at, $at, $t7
    gpr jr_addend_80800044 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80800040: lw          $t7, 0x7E0($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(692, 0X7E0));
    // 0x80800044: jr          $t7
    // 0x80800048: nop

    switch (jr_addend_80800044 >> 2) {
        case 0: goto L_8080004C; break;
        case 1: goto L_80800078; break;
        case 2: goto L_80800128; break;
        case 3: goto L_80800194; break;
        case 4: goto L_8080020C; break;
        case 5: goto L_808002BC; break;
        default: switch_error(__func__, 0x80800044, 0x808007E0);
    }
    // 0x80800048: nop

L_8080004C:
    // 0x8080004C: jal         0x8000000C
    // 0x80800050: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8080000C_glcutDll(rdram, ctx);
        goto after_0;
    // 0x80800050: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80800054: jal         0x80000000
    // 0x80800058: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80800000_glcutDll(rdram, ctx);
        goto after_1;
    // 0x80800058: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8080005C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80800060: addiu       $s0, $s0, 0x75E8
    ctx->r16 = ADD32(ctx->r16, 0X75E8);
    // 0x80800064: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80800068: jal         0x800FE734
    // 0x8080006C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800FE734(rdram, ctx);
        goto after_2;
    // 0x8080006C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80800070: b           L_80800314
    // 0x80800074: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
        goto L_80800314;
    // 0x80800074: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
L_80800078:
    // 0x80800078: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8080007C: addiu       $s0, $s0, 0x75E8
    ctx->r16 = ADD32(ctx->r16, 0X75E8);
    // 0x80800080: lh          $t8, 0x2($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X2);
    // 0x80800084: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x80800088: bnel        $t8, $t9, L_808000A4
    if (ctx->r24 != ctx->r25) {
        // 0x8080008C: lbu         $t0, 0xA($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0XA);
            goto L_808000A4;
    }
    goto skip_0;
    // 0x8080008C: lbu         $t0, 0xA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XA);
    skip_0:
    // 0x80800090: jal         0x800DA298
    // 0x80800094: addiu       $a0, $zero, 0xA52
    ctx->r4 = ADD32(0, 0XA52);
    func_800DA298(rdram, ctx);
        goto after_3;
    // 0x80800094: addiu       $a0, $zero, 0xA52
    ctx->r4 = ADD32(0, 0XA52);
    after_3:
    // 0x80800098: beq         $v0, $zero, L_808000EC
    if (ctx->r2 == 0) {
        // 0x8080009C: nop
    
            goto L_808000EC;
    }
    // 0x8080009C: nop

    // 0x808000A0: lbu         $t0, 0xA($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0XA);
L_808000A4:
    // 0x808000A4: beq         $t0, $zero, L_808000BC
    if (ctx->r8 == 0) {
        // 0x808000A8: nop
    
            goto L_808000BC;
    }
    // 0x808000A8: nop

    // 0x808000AC: jal         0x800FE844
    // 0x808000B0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800FE844(rdram, ctx);
        goto after_4;
    // 0x808000B0: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_4:
    // 0x808000B4: jal         0x800FE734
    // 0x808000B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800FE734(rdram, ctx);
        goto after_5;
    // 0x808000B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
L_808000BC:
    // 0x808000BC: jal         0x80088268
    // 0x808000C0: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    _gcsectionDll_entrypoint_4(rdram, ctx);
        goto after_6;
    // 0x808000C0: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    after_6:
    // 0x808000C4: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x808000C8: lbu         $t1, 0x762C($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X762C);
    // 0x808000CC: beql        $v0, $t1, L_808000E0
    if (ctx->r2 == ctx->r9) {
        // 0x808000D0: lh          $a0, 0x0($s0)
        ctx->r4 = MEM_H(ctx->r16, 0X0);
            goto L_808000E0;
    }
    goto skip_1;
    // 0x808000D0: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
    skip_1:
    // 0x808000D4: jal         0x800A8230
    // 0x808000D8: nop

    func_800A8230(rdram, ctx);
        goto after_7;
    // 0x808000D8: nop

    after_7:
    // 0x808000DC: lh          $a0, 0x0($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X0);
L_808000E0:
    // 0x808000E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000E4: jal         0x800A7990
    // 0x808000E8: lbu         $a2, 0x10($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X10);
    func_800A7990(rdram, ctx);
        goto after_8;
    // 0x808000E8: lbu         $a2, 0x10($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X10);
    after_8:
L_808000EC:
    // 0x808000EC: jal         0x800DA544
    // 0x808000F0: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    func_800DA544(rdram, ctx);
        goto after_9;
    // 0x808000F0: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    after_9:
    // 0x808000F4: lbu         $t2, 0xB($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XB);
    // 0x808000F8: bnel        $t2, $zero, L_80800120
    if (ctx->r10 != 0) {
        // 0x808000FC: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_80800120;
    }
    goto skip_2;
    // 0x808000FC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    skip_2:
    // 0x80800100: lbu         $t3, 0xF($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XF);
    // 0x80800104: bnel        $t3, $zero, L_80800120
    if (ctx->r11 != 0) {
        // 0x80800108: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_80800120;
    }
    goto skip_3;
    // 0x80800108: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    skip_3:
    // 0x8080010C: jal         0x800C78CC
    // 0x80800110: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800C78CC(rdram, ctx);
        goto after_10;
    // 0x80800110: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_10:
    // 0x80800114: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80800118: sb          $t4, 0xF($s0)
    MEM_B(0XF, ctx->r16) = ctx->r12;
    // 0x8080011C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
L_80800120:
    // 0x80800120: b           L_80800310
    // 0x80800124: sb          $t5, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r13;
        goto L_80800310;
    // 0x80800124: sb          $t5, 0xC($s0)
    MEM_B(0XC, ctx->r16) = ctx->r13;
L_80800128:
    // 0x80800128: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x8080012C: addiu       $s0, $s0, 0x75E8
    ctx->r16 = ADD32(ctx->r16, 0X75E8);
    // 0x80800130: lbu         $t6, 0x8($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X8);
    // 0x80800134: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800138: bnel        $t6, $at, L_80800314
    if (ctx->r14 != ctx->r1) {
        // 0x8080013C: lw          $t3, 0x20($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X20);
            goto L_80800314;
    }
    goto skip_4;
    // 0x8080013C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    skip_4:
    // 0x80800140: lh          $t7, 0x2($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X2);
    // 0x80800144: lh          $t8, 0x0($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X0);
    // 0x80800148: bnel        $t7, $t8, L_80800164
    if (ctx->r15 != ctx->r24) {
        // 0x8080014C: lbu         $t9, 0x7($s0)
        ctx->r25 = MEM_BU(ctx->r16, 0X7);
            goto L_80800164;
    }
    goto skip_5;
    // 0x8080014C: lbu         $t9, 0x7($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X7);
    skip_5:
    // 0x80800150: jal         0x800DA298
    // 0x80800154: addiu       $a0, $zero, 0xA52
    ctx->r4 = ADD32(0, 0XA52);
    func_800DA298(rdram, ctx);
        goto after_11;
    // 0x80800154: addiu       $a0, $zero, 0xA52
    ctx->r4 = ADD32(0, 0XA52);
    after_11:
    // 0x80800158: beql        $v0, $zero, L_80800314
    if (ctx->r2 == 0) {
        // 0x8080015C: lw          $t3, 0x20($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X20);
            goto L_80800314;
    }
    goto skip_6;
    // 0x8080015C: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    skip_6:
    // 0x80800160: lbu         $t9, 0x7($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X7);
L_80800164:
    // 0x80800164: beql        $t9, $zero, L_80800314
    if (ctx->r25 == 0) {
        // 0x80800168: lw          $t3, 0x20($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X20);
            goto L_80800314;
    }
    goto skip_7;
    // 0x80800168: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    skip_7:
    // 0x8080016C: jal         0x80000000
    // 0x80800170: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80800000_glcutDll(rdram, ctx);
        goto after_12;
    // 0x80800170: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x80800174: jal         0x8000000C
    // 0x80800178: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8080000C_glcutDll(rdram, ctx);
        goto after_13;
    // 0x80800178: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x8080017C: jal         0x800D9290
    // 0x80800180: nop

    func_800D9290(rdram, ctx);
        goto after_14;
    // 0x80800180: nop

    after_14:
    // 0x80800184: jal         0x800D9330
    // 0x80800188: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800D9330(rdram, ctx);
        goto after_15;
    // 0x80800188: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
    // 0x8080018C: b           L_80800314
    // 0x80800190: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
        goto L_80800314;
    // 0x80800190: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
L_80800194:
    // 0x80800194: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80800198: addiu       $s0, $s0, 0x75E8
    ctx->r16 = ADD32(ctx->r16, 0X75E8);
    // 0x8080019C: lbu         $t0, 0x6($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X6);
    // 0x808001A0: beq         $t0, $zero, L_808001B0
    if (ctx->r8 == 0) {
        // 0x808001A4: nop
    
            goto L_808001B0;
    }
    // 0x808001A4: nop

    // 0x808001A8: jal         0x800D92F4
    // 0x808001AC: nop

    func_800D92F4(rdram, ctx);
        goto after_16;
    // 0x808001AC: nop

    after_16:
L_808001B0:
    // 0x808001B0: jal         0x800DA524
    // 0x808001B4: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    func_800DA524(rdram, ctx);
        goto after_17;
    // 0x808001B4: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    after_17:
    // 0x808001B8: lbu         $t1, 0xB($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XB);
    // 0x808001BC: bnel        $t1, $zero, L_808001E0
    if (ctx->r9 != 0) {
        // 0x808001C0: lbu         $t3, 0xE($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XE);
            goto L_808001E0;
    }
    goto skip_8;
    // 0x808001C0: lbu         $t3, 0xE($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XE);
    skip_8:
    // 0x808001C4: lbu         $t2, 0xF($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XF);
    // 0x808001C8: beql        $t2, $zero, L_808001E0
    if (ctx->r10 == 0) {
        // 0x808001CC: lbu         $t3, 0xE($s0)
        ctx->r11 = MEM_BU(ctx->r16, 0XE);
            goto L_808001E0;
    }
    goto skip_9;
    // 0x808001CC: lbu         $t3, 0xE($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XE);
    skip_9:
    // 0x808001D0: jal         0x800C78CC
    // 0x808001D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800C78CC(rdram, ctx);
        goto after_18;
    // 0x808001D4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_18:
    // 0x808001D8: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x808001DC: lbu         $t3, 0xE($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0XE);
L_808001E0:
    // 0x808001E0: beq         $t3, $zero, L_808001F0
    if (ctx->r11 == 0) {
        // 0x808001E4: nop
    
            goto L_808001F0;
    }
    // 0x808001E4: nop

    // 0x808001E8: jal         0x80090708
    // 0x808001EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80090708(rdram, ctx);
        goto after_19;
    // 0x808001EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_19:
L_808001F0:
    // 0x808001F0: jal         0x8000000C
    // 0x808001F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8080000C_glcutDll(rdram, ctx);
        goto after_20;
    // 0x808001F4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_20:
    // 0x808001F8: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x808001FC: jal         0x800DA524
    // 0x80800200: addiu       $a0, $zero, 0xA52
    ctx->r4 = ADD32(0, 0XA52);
    func_800DA524(rdram, ctx);
        goto after_21;
    // 0x80800200: addiu       $a0, $zero, 0xA52
    ctx->r4 = ADD32(0, 0XA52);
    after_21:
    // 0x80800204: b           L_80800314
    // 0x80800208: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
        goto L_80800314;
    // 0x80800208: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
L_8080020C:
    // 0x8080020C: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80800210: addiu       $s0, $s0, 0x75E8
    ctx->r16 = ADD32(ctx->r16, 0X75E8);
    // 0x80800214: lbu         $t4, 0xA($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0XA);
    // 0x80800218: beq         $t4, $zero, L_80800230
    if (ctx->r12 == 0) {
        // 0x8080021C: nop
    
            goto L_80800230;
    }
    // 0x8080021C: nop

    // 0x80800220: jal         0x800FE844
    // 0x80800224: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800FE844(rdram, ctx);
        goto after_22;
    // 0x80800224: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_22:
    // 0x80800228: jal         0x800FE734
    // 0x8080022C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800FE734(rdram, ctx);
        goto after_23;
    // 0x8080022C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_23:
L_80800230:
    // 0x80800230: jal         0x80088268
    // 0x80800234: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    _gcsectionDll_entrypoint_4(rdram, ctx);
        goto after_24;
    // 0x80800234: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    after_24:
    // 0x80800238: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x8080023C: lbu         $t5, 0x762C($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X762C);
    // 0x80800240: beql        $v0, $t5, L_80800254
    if (ctx->r2 == ctx->r13) {
        // 0x80800244: lh          $a0, 0x2($s0)
        ctx->r4 = MEM_H(ctx->r16, 0X2);
            goto L_80800254;
    }
    goto skip_10;
    // 0x80800244: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
    skip_10:
    // 0x80800248: jal         0x800A8230
    // 0x8080024C: nop

    func_800A8230(rdram, ctx);
        goto after_25;
    // 0x8080024C: nop

    after_25:
    // 0x80800250: lh          $a0, 0x2($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X2);
L_80800254:
    // 0x80800254: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800258: jal         0x800A7990
    // 0x8080025C: lbu         $a2, 0x10($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X10);
    func_800A7990(rdram, ctx);
        goto after_26;
    // 0x8080025C: lbu         $a2, 0x10($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X10);
    after_26:
    // 0x80800260: jal         0x800DA524
    // 0x80800264: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    func_800DA524(rdram, ctx);
        goto after_27;
    // 0x80800264: addiu       $a0, $zero, 0x641
    ctx->r4 = ADD32(0, 0X641);
    after_27:
    // 0x80800268: lbu         $t6, 0xB($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0XB);
    // 0x8080026C: bnel        $t6, $zero, L_80800290
    if (ctx->r14 != 0) {
        // 0x80800270: lbu         $t8, 0x6($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X6);
            goto L_80800290;
    }
    goto skip_11;
    // 0x80800270: lbu         $t8, 0x6($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X6);
    skip_11:
    // 0x80800274: lbu         $t7, 0xF($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0XF);
    // 0x80800278: beql        $t7, $zero, L_80800290
    if (ctx->r15 == 0) {
        // 0x8080027C: lbu         $t8, 0x6($s0)
        ctx->r24 = MEM_BU(ctx->r16, 0X6);
            goto L_80800290;
    }
    goto skip_12;
    // 0x8080027C: lbu         $t8, 0x6($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X6);
    skip_12:
    // 0x80800280: jal         0x800C78CC
    // 0x80800284: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800C78CC(rdram, ctx);
        goto after_28;
    // 0x80800284: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_28:
    // 0x80800288: sb          $zero, 0xF($s0)
    MEM_B(0XF, ctx->r16) = 0;
    // 0x8080028C: lbu         $t8, 0x6($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X6);
L_80800290:
    // 0x80800290: beql        $t8, $zero, L_808002A4
    if (ctx->r24 == 0) {
        // 0x80800294: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_808002A4;
    }
    goto skip_13;
    // 0x80800294: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    skip_13:
    // 0x80800298: jal         0x8000000C
    // 0x8080029C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8080000C_glcutDll(rdram, ctx);
        goto after_29;
    // 0x8080029C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_29:
    // 0x808002A0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
L_808002A4:
    // 0x808002A4: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    // 0x808002A8: sb          $t9, 0xD($s0)
    MEM_B(0XD, ctx->r16) = ctx->r25;
    // 0x808002AC: jal         0x800DA524
    // 0x808002B0: addiu       $a0, $zero, 0xA52
    ctx->r4 = ADD32(0, 0XA52);
    func_800DA524(rdram, ctx);
        goto after_30;
    // 0x808002B0: addiu       $a0, $zero, 0xA52
    ctx->r4 = ADD32(0, 0XA52);
    after_30:
    // 0x808002B4: b           L_80800314
    // 0x808002B8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
        goto L_80800314;
    // 0x808002B8: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
L_808002BC:
    // 0x808002BC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x808002C0: addiu       $s0, $s0, 0x75E8
    ctx->r16 = ADD32(ctx->r16, 0X75E8);
    // 0x808002C4: lbu         $t0, 0x9($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X9);
    // 0x808002C8: beql        $t0, $zero, L_808002F4
    if (ctx->r8 == 0) {
        // 0x808002CC: lbu         $t1, 0xC($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0XC);
            goto L_808002F4;
    }
    goto skip_14;
    // 0x808002CC: lbu         $t1, 0xC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XC);
    skip_14:
    // 0x808002D0: jal         0x800D92F4
    // 0x808002D4: nop

    func_800D92F4(rdram, ctx);
        goto after_31;
    // 0x808002D4: nop

    after_31:
    // 0x808002D8: jal         0x80000000
    // 0x808002DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80800000_glcutDll(rdram, ctx);
        goto after_32;
    // 0x808002DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_32:
    // 0x808002E0: jal         0x8000000C
    // 0x808002E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8080000C_glcutDll(rdram, ctx);
        goto after_33;
    // 0x808002E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_33:
    // 0x808002E8: jal         0x800FE734
    // 0x808002EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800FE734(rdram, ctx);
        goto after_34;
    // 0x808002EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_34:
    // 0x808002F0: lbu         $t1, 0xC($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0XC);
L_808002F4:
    // 0x808002F4: beql        $t1, $zero, L_80800304
    if (ctx->r9 == 0) {
        // 0x808002F8: lbu         $t2, 0xD($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0XD);
            goto L_80800304;
    }
    goto skip_15;
    // 0x808002F8: lbu         $t2, 0xD($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD);
    skip_15:
    // 0x808002FC: sb          $zero, 0xC($s0)
    MEM_B(0XC, ctx->r16) = 0;
    // 0x80800300: lbu         $t2, 0xD($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0XD);
L_80800304:
    // 0x80800304: beql        $t2, $zero, L_80800314
    if (ctx->r10 == 0) {
        // 0x80800308: lw          $t3, 0x20($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X20);
            goto L_80800314;
    }
    goto skip_16;
    // 0x80800308: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    skip_16:
    // 0x8080030C: sb          $zero, 0xD($s0)
    MEM_B(0XD, ctx->r16) = 0;
L_80800310:
    // 0x80800310: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
L_80800314:
    // 0x80800314: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x80800318: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080031C: addiu       $s0, $s0, 0x75E8
    ctx->r16 = ADD32(ctx->r16, 0X75E8);
    // 0x80800320: sb          $t3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r11;
    // 0x80800324: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800328: jr          $ra
    // 0x8080032C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8080032C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void glcutDll_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800330: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800334: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800338: jal         0x80000018
    // 0x8080033C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80800018_glcutDll(rdram, ctx);
        goto after_0;
    // 0x8080033C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x80800340: jal         0x800EA05C
    // 0x80800344: nop

    func_800EA05C(rdram, ctx);
        goto after_1;
    // 0x80800344: nop

    after_1:
    // 0x80800348: jal         0x800004CC
    // 0x8080034C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    glcutDll_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x8080034C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80800350: jal         0x800004D8
    // 0x80800354: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    glcutDll_entrypoint_11(rdram, ctx);
        goto after_3;
    // 0x80800354: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x80800358: jal         0x80000000
    // 0x8080035C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80800000_glcutDll(rdram, ctx);
        goto after_4;
    // 0x8080035C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_4:
    // 0x80800360: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80800364: addiu       $v0, $v0, 0x75E8
    ctx->r2 = ADD32(ctx->r2, 0X75E8);
    // 0x80800368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080036C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800370: sb          $t6, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r14;
    // 0x80800374: sb          $zero, 0xB($v0)
    MEM_B(0XB, ctx->r2) = 0;
    // 0x80800378: sb          $zero, 0xF($v0)
    MEM_B(0XF, ctx->r2) = 0;
    // 0x8080037C: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
    // 0x80800380: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x80800384: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x80800388: jr          $ra
    // 0x8080038C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8080038C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void glcutDll_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800390: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80800394: jr          $ra
    // 0x80800398: lbu         $v0, 0x75F1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X75F1);
    return;
    // 0x80800398: lbu         $v0, 0x75F1($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X75F1);
;}
RECOMP_FUNC void glcutDll_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080039C: jr          $ra
    // 0x808003A0: nop

    return;
    // 0x808003A0: nop

;}
RECOMP_FUNC void glcutDll_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003AC: jal         0x800D92EC
    // 0x808003B0: nop

    func_800D92EC(rdram, ctx);
        goto after_0;
    // 0x808003B0: nop

    after_0:
    // 0x808003B4: jal         0x8000000C
    // 0x808003B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8080000C_glcutDll(rdram, ctx);
        goto after_1;
    // 0x808003B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x808003BC: jal         0x80000000
    // 0x808003C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80800000_glcutDll(rdram, ctx);
        goto after_2;
    // 0x808003C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x808003C4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x808003C8: addiu       $v0, $v0, 0x75E8
    ctx->r2 = ADD32(ctx->r2, 0X75E8);
    // 0x808003CC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808003D0: sb          $t6, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r14;
    // 0x808003D4: sb          $zero, 0xB($v0)
    MEM_B(0XB, ctx->r2) = 0;
    // 0x808003D8: sb          $zero, 0xF($v0)
    MEM_B(0XF, ctx->r2) = 0;
    // 0x808003DC: sb          $zero, 0x10($v0)
    MEM_B(0X10, ctx->r2) = 0;
    // 0x808003E0: sb          $zero, 0xC($v0)
    MEM_B(0XC, ctx->r2) = 0;
    // 0x808003E4: sb          $zero, 0xD($v0)
    MEM_B(0XD, ctx->r2) = 0;
    // 0x808003E8: sh          $zero, 0x4($v0)
    MEM_H(0X4, ctx->r2) = 0;
    // 0x808003EC: sb          $zero, 0xE($v0)
    MEM_B(0XE, ctx->r2) = 0;
    // 0x808003F0: sb          $zero, 0x8($v0)
    MEM_B(0X8, ctx->r2) = 0;
    // 0x808003F4: jal         0x80000018
    // 0x808003F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80800018_glcutDll(rdram, ctx);
        goto after_3;
    // 0x808003F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x808003FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800400: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800404: jr          $ra
    // 0x80800408: nop

    return;
    // 0x80800408: nop

;}
RECOMP_FUNC void glcutDll_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080040C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80800410: lbu         $t6, 0x75F0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X75F0);
    // 0x80800414: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800418: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080041C: beq         $t6, $at, L_8080042C
    if (ctx->r14 == ctx->r1) {
        // 0x80800420: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8080042C;
    }
    // 0x80800420: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800424: jal         0x80000018
    // 0x80800428: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_80800018_glcutDll(rdram, ctx);
        goto after_0;
    // 0x80800428: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
L_8080042C:
    // 0x8080042C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800430: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800434: jr          $ra
    // 0x80800438: nop

    return;
    // 0x80800438: nop

;}
RECOMP_FUNC void glcutDll_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080043C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80800440: lbu         $t6, 0x75F0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X75F0);
    // 0x80800444: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800448: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8080044C: beq         $t6, $at, L_8080045C
    if (ctx->r14 == ctx->r1) {
        // 0x80800450: sw          $ra, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r31;
            goto L_8080045C;
    }
    // 0x80800450: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800454: jal         0x80000018
    // 0x80800458: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80800018_glcutDll(rdram, ctx);
        goto after_0;
    // 0x80800458: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
L_8080045C:
    // 0x8080045C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800460: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800464: jr          $ra
    // 0x80800468: nop

    return;
    // 0x80800468: nop

;}
RECOMP_FUNC void glcutDll_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080046C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800470: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800474: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800478: jal         0x80000330
    // 0x8080047C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    glcutDll_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x8080047C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800480: jal         0x800004A8
    // 0x80800484: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    glcutDll_entrypoint_7(rdram, ctx);
        goto after_1;
    // 0x80800484: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800488: jal         0x8000067C
    // 0x8080048C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    glcutDll_entrypoint_22(rdram, ctx);
        goto after_2;
    // 0x8080048C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800490: jal         0x80000544
    // 0x80800494: nop

    glcutDll_entrypoint_16(rdram, ctx);
        goto after_3;
    // 0x80800494: nop

    after_3:
    // 0x80800498: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080049C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004A0: jr          $ra
    // 0x808004A4: nop

    return;
    // 0x808004A4: nop

;}
RECOMP_FUNC void glcutDll_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004A8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x808004AC: jr          $ra
    // 0x808004B0: sh          $a0, 0x75E8($at)
    MEM_H(0X75E8, ctx->r1) = ctx->r4;
    return;
    // 0x808004B0: sh          $a0, 0x75E8($at)
    MEM_H(0X75E8, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void glcutDll_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004B4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x808004B8: jr          $ra
    // 0x808004BC: lh          $v0, 0x75E8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X75E8);
    return;
    // 0x808004BC: lh          $v0, 0x75E8($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X75E8);
;}
RECOMP_FUNC void glcutDll_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004C0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x808004C4: jr          $ra
    // 0x808004C8: lh          $v0, 0x75EA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X75EA);
    return;
    // 0x808004C8: lh          $v0, 0x75EA($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X75EA);
;}
RECOMP_FUNC void glcutDll_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x808004D0: jr          $ra
    // 0x808004D4: sh          $a0, 0x75EA($at)
    MEM_H(0X75EA, ctx->r1) = ctx->r4;
    return;
    // 0x808004D4: sh          $a0, 0x75EA($at)
    MEM_H(0X75EA, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void glcutDll_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004D8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x808004DC: jr          $ra
    // 0x808004E0: sb          $a0, 0x75EF($at)
    MEM_B(0X75EF, ctx->r1) = ctx->r4;
    return;
    // 0x808004E0: sb          $a0, 0x75EF($at)
    MEM_B(0X75EF, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void glcutDll_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004E4: beq         $a0, $zero, L_808004F8
    if (ctx->r4 == 0) {
        // 0x808004E8: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_808004F8;
    }
    // 0x808004E8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808004EC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x808004F0: jr          $ra
    // 0x808004F4: sb          $zero, 0x75F2($at)
    MEM_B(0X75F2, ctx->r1) = 0;
    return;
    // 0x808004F4: sb          $zero, 0x75F2($at)
    MEM_B(0X75F2, ctx->r1) = 0;
L_808004F8:
    // 0x808004F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x808004FC: sb          $t6, 0x75F2($at)
    MEM_B(0X75F2, ctx->r1) = ctx->r14;
    // 0x80800500: jr          $ra
    // 0x80800504: nop

    return;
    // 0x80800504: nop

;}
RECOMP_FUNC void glcutDll_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800508: beq         $a0, $zero, L_8080051C
    if (ctx->r4 == 0) {
        // 0x8080050C: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_8080051C;
    }
    // 0x8080050C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800510: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80800514: jr          $ra
    // 0x80800518: sb          $zero, 0x75F3($at)
    MEM_B(0X75F3, ctx->r1) = 0;
    return;
    // 0x80800518: sb          $zero, 0x75F3($at)
    MEM_B(0X75F3, ctx->r1) = 0;
L_8080051C:
    // 0x8080051C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80800520: sb          $t6, 0x75F3($at)
    MEM_B(0X75F3, ctx->r1) = ctx->r14;
    // 0x80800524: jr          $ra
    // 0x80800528: nop

    return;
    // 0x80800528: nop

;}
RECOMP_FUNC void glcutDll_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080052C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80800530: jr          $ra
    // 0x80800534: sb          $a0, 0x75F8($at)
    MEM_B(0X75F8, ctx->r1) = ctx->r4;
    return;
    // 0x80800534: sb          $a0, 0x75F8($at)
    MEM_B(0X75F8, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void glcutDll_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800538: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8080053C: jr          $ra
    // 0x80800540: sb          $a0, 0x75F6($at)
    MEM_B(0X75F6, ctx->r1) = ctx->r4;
    return;
    // 0x80800540: sb          $a0, 0x75F6($at)
    MEM_B(0X75F6, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void glcutDll_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080054C: jal         0x80000018
    // 0x80800550: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80800018_glcutDll(rdram, ctx);
        goto after_0;
    // 0x80800550: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x80800554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800558: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080055C: jr          $ra
    // 0x80800560: nop

    return;
    // 0x80800560: nop

;}
RECOMP_FUNC void glcutDll_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800564: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800568: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080056C: jal         0x800EA05C
    // 0x80800570: nop

    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x80800570: nop

    after_0:
    // 0x80800574: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80800578: lh          $t6, 0x75EA($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X75EA);
    // 0x8080057C: bne         $v0, $t6, L_8080059C
    if (ctx->r2 != ctx->r14) {
        // 0x80800580: nop
    
            goto L_8080059C;
    }
    // 0x80800580: nop

    // 0x80800584: jal         0x80000018
    // 0x80800588: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_80800018_glcutDll(rdram, ctx);
        goto after_1;
    // 0x80800588: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_1:
    // 0x8080058C: jal         0x80000018
    // 0x80800590: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80800018_glcutDll(rdram, ctx);
        goto after_2;
    // 0x80800590: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80800594: b           L_808005A8
    // 0x80800598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808005A8;
    // 0x80800598: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080059C:
    // 0x8080059C: jal         0x80000018
    // 0x808005A0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80800018_glcutDll(rdram, ctx);
        goto after_3;
    // 0x808005A0: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_3:
    // 0x808005A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808005A8:
    // 0x808005A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005AC: jr          $ra
    // 0x808005B0: nop

    return;
    // 0x808005B0: nop

;}
RECOMP_FUNC void glcutDll_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x808005B8: jr          $ra
    // 0x808005BC: lh          $v0, 0x75EC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X75EC);
    return;
    // 0x808005BC: lh          $v0, 0x75EC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X75EC);
;}
RECOMP_FUNC void glcutDll_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005C0: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x808005C4: lh          $t6, 0x75EC($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X75EC);
    // 0x808005C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005D0: xor         $v0, $a0, $t6
    ctx->r2 = ctx->r4 ^ ctx->r14;
    // 0x808005D4: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x808005D8: beql        $v0, $zero, L_808005F4
    if (ctx->r2 == 0) {
        // 0x808005DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808005F4;
    }
    goto skip_0;
    // 0x808005DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808005E0: jal         0x800DB9B0
    // 0x808005E4: nop

    func_800DB9B0(rdram, ctx);
        goto after_0;
    // 0x808005E4: nop

    after_0:
    // 0x808005E8: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x808005EC: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
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
RECOMP_FUNC void glcutDll_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800600: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800608: jal         0x800DB9B0
    // 0x8080060C: nop

    func_800DB9B0(rdram, ctx);
        goto after_0;
    // 0x8080060C: nop

    after_0:
    // 0x80800610: bne         $v0, $zero, L_80800620
    if (ctx->r2 != 0) {
        // 0x80800614: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800620;
    }
    // 0x80800614: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800618: b           L_80800654
    // 0x8080061C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800654;
    // 0x8080061C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800620:
    // 0x80800620: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80800624: lh          $v0, 0x75EC($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X75EC);
    // 0x80800628: addiu       $at, $zero, 0x8C
    ctx->r1 = ADD32(0, 0X8C);
    // 0x8080062C: bnel        $v0, $at, L_80800640
    if (ctx->r2 != ctx->r1) {
        // 0x80800630: addiu       $at, $zero, 0x8A
        ctx->r1 = ADD32(0, 0X8A);
            goto L_80800640;
    }
    goto skip_0;
    // 0x80800630: addiu       $at, $zero, 0x8A
    ctx->r1 = ADD32(0, 0X8A);
    skip_0:
    // 0x80800634: b           L_80800654
    // 0x80800638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800654;
    // 0x80800638: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8080063C: addiu       $at, $zero, 0x8A
    ctx->r1 = ADD32(0, 0X8A);
L_80800640:
    // 0x80800640: bnel        $v0, $at, L_80800654
    if (ctx->r2 != ctx->r1) {
        // 0x80800644: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80800654;
    }
    goto skip_1;
    // 0x80800644: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x80800648: b           L_80800654
    // 0x8080064C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800654;
    // 0x8080064C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800650: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800654:
    // 0x80800654: jr          $ra
    // 0x80800658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800658: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void glcutDll_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080065C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800660: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800664: jal         0x800DA544
    // 0x80800668: addiu       $a0, $zero, 0xA52
    ctx->r4 = ADD32(0, 0XA52);
    func_800DA544(rdram, ctx);
        goto after_0;
    // 0x80800668: addiu       $a0, $zero, 0xA52
    ctx->r4 = ADD32(0, 0XA52);
    after_0:
    // 0x8080066C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800670: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800674: jr          $ra
    // 0x80800678: nop

    return;
    // 0x80800678: nop

;}
RECOMP_FUNC void glcutDll_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080067C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80800680: jr          $ra
    // 0x80800684: sh          $a0, 0x75EC($at)
    MEM_H(0X75EC, ctx->r1) = ctx->r4;
    return;
    // 0x80800684: sh          $a0, 0x75EC($at)
    MEM_H(0X75EC, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void glcutDll_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800688: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8080068C: addiu       $v1, $v1, 0x75E8
    ctx->r3 = ADD32(ctx->r3, 0X75E8);
    // 0x80800690: lh          $t6, 0x2($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X2);
    // 0x80800694: lh          $t7, 0x0($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X0);
    // 0x80800698: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080069C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808006A0: beql        $t6, $t7, L_808006D0
    if (ctx->r14 == ctx->r15) {
        // 0x808006A4: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808006D0;
    }
    goto skip_0;
    // 0x808006A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x808006A8: jal         0x800EA05C
    // 0x808006AC: nop

    func_800EA05C(rdram, ctx);
        goto after_0;
    // 0x808006AC: nop

    after_0:
    // 0x808006B0: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x808006B4: addiu       $v1, $v1, 0x75E8
    ctx->r3 = ADD32(ctx->r3, 0X75E8);
    // 0x808006B8: lh          $t8, 0x0($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X0);
    // 0x808006BC: bnel        $v0, $t8, L_808006D0
    if (ctx->r2 != ctx->r24) {
        // 0x808006C0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_808006D0;
    }
    goto skip_1;
    // 0x808006C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_1:
    // 0x808006C4: b           L_808006D0
    // 0x808006C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808006D0;
    // 0x808006C8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808006CC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808006D0:
    // 0x808006D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006D8: jr          $ra
    // 0x808006DC: nop

    return;
    // 0x808006DC: nop

;}
RECOMP_FUNC void glcutDll_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808006E4: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x808006E8: addiu       $v0, $v0, 0x75E8
    ctx->r2 = ADD32(ctx->r2, 0X75E8);
    // 0x808006EC: lh          $t6, 0x2($v0)
    ctx->r14 = MEM_H(ctx->r2, 0X2);
    // 0x808006F0: lh          $t7, 0x4($v0)
    ctx->r15 = MEM_H(ctx->r2, 0X4);
    // 0x808006F4: lbu         $t8, 0xA($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XA);
    // 0x808006F8: lbu         $t9, 0xB($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0XB);
    // 0x808006FC: lbu         $t0, 0x10($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X10);
    // 0x80800700: lbu         $t1, 0xF($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0XF);
    // 0x80800704: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800708: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8080070C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80800710: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80800714: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x80800718: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8080071C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80800720: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x80800724: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x80800728: jal         0x80000330
    // 0x8080072C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    glcutDll_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x8080072C: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    after_0:
    // 0x80800730: jal         0x800004D8
    // 0x80800734: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    glcutDll_entrypoint_11(rdram, ctx);
        goto after_1;
    // 0x80800734: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80800738: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8080073C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800740: addiu       $v0, $v0, 0x75E8
    ctx->r2 = ADD32(ctx->r2, 0X75E8);
    // 0x80800744: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80800748: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8080074C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80800750: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80800754: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80800758: sb          $t2, 0xA($v0)
    MEM_B(0XA, ctx->r2) = ctx->r10;
    // 0x8080075C: sb          $t3, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r11;
    // 0x80800760: sb          $t4, 0x10($v0)
    MEM_B(0X10, ctx->r2) = ctx->r12;
    // 0x80800764: bne         $a0, $at, L_8080077C
    if (ctx->r4 != ctx->r1) {
        // 0x80800768: sb          $t5, 0xF($v0)
        MEM_B(0XF, ctx->r2) = ctx->r13;
            goto L_8080077C;
    }
    // 0x80800768: sb          $t5, 0xF($v0)
    MEM_B(0XF, ctx->r2) = ctx->r13;
    // 0x8080076C: jal         0x8000067C
    // 0x80800770: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    glcutDll_entrypoint_22(rdram, ctx);
        goto after_2;
    // 0x80800770: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x80800774: b           L_80800784
    // 0x80800778: nop

        goto L_80800784;
    // 0x80800778: nop

L_8080077C:
    // 0x8080077C: jal         0x8000067C
    // 0x80800780: nop

    glcutDll_entrypoint_22(rdram, ctx);
        goto after_3;
    // 0x80800780: nop

    after_3:
L_80800784:
    // 0x80800784: jal         0x800004A8
    // 0x80800788: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    glcutDll_entrypoint_7(rdram, ctx);
        goto after_4;
    // 0x80800788: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_4:
    // 0x8080078C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800790: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80800794: bne         $a0, $at, L_808007AC
    if (ctx->r4 != ctx->r1) {
        // 0x80800798: nop
    
            goto L_808007AC;
    }
    // 0x80800798: nop

    // 0x8080079C: jal         0x800004CC
    // 0x808007A0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    glcutDll_entrypoint_10(rdram, ctx);
        goto after_5;
    // 0x808007A0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_5:
    // 0x808007A4: b           L_808007B4
    // 0x808007A8: nop

        goto L_808007B4;
    // 0x808007A8: nop

L_808007AC:
    // 0x808007AC: jal         0x800004CC
    // 0x808007B0: nop

    glcutDll_entrypoint_10(rdram, ctx);
        goto after_6;
    // 0x808007B0: nop

    after_6:
L_808007B4:
    // 0x808007B4: jal         0x80000544
    // 0x808007B8: nop

    glcutDll_entrypoint_16(rdram, ctx);
        goto after_7;
    // 0x808007B8: nop

    after_7:
    // 0x808007BC: jal         0x80000000
    // 0x808007C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80800000_glcutDll(rdram, ctx);
        goto after_8;
    // 0x808007C0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_8:
    // 0x808007C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808007C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808007CC: jr          $ra
    // 0x808007D0: nop

    return;
    // 0x808007D0: nop

    // 0x808007D4: nop

    // 0x808007D8: nop

    // 0x808007DC: nop

;}
RECOMP_FUNC void func_80800000_gldbDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80800010: jal         0x80016928
    // 0x80800014: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_80016928(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800018: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    // 0x8080001C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800020: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800024: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80800028: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
L_8080002C:
    // 0x8080002C: srav        $t6, $a1, $v1
    ctx->r14 = S32(SIGNED(ctx->r5) >> (ctx->r3 & 31));
    // 0x80800030: subu        $t7, $a2, $v1
    ctx->r15 = SUB32(ctx->r6, ctx->r3);
    // 0x80800034: sllv        $t8, $a1, $t7
    ctx->r24 = S32(ctx->r5 << (ctx->r15 & 31));
    // 0x80800038: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x8080003C: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80800040: slti        $at, $v1, 0xE
    ctx->r1 = SIGNED(ctx->r3) < 0XE ? 1 : 0;
    // 0x80800044: andi        $t0, $t9, 0xFF00
    ctx->r8 = ctx->r25 & 0XFF00;
    // 0x80800048: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x8080004C: sb          $t9, -0x2($a0)
    MEM_B(-0X2, ctx->r4) = ctx->r25;
    // 0x80800050: bne         $at, $zero, L_8080002C
    if (ctx->r1 != 0) {
        // 0x80800054: sb          $t0, -0x1($a0)
        MEM_B(-0X1, ctx->r4) = ctx->r8;
            goto L_8080002C;
    }
    // 0x80800054: sb          $t0, -0x1($a0)
    MEM_B(-0X1, ctx->r4) = ctx->r8;
    // 0x80800058: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x8080005C: sb          $zero, 0x42($sp)
    MEM_B(0X42, ctx->r29) = 0;
    // 0x80800060: sb          $t1, 0x43($sp)
    MEM_B(0X43, ctx->r29) = ctx->r9;
    // 0x80800064: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800068: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
L_8080006C:
    // 0x8080006C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80800070: sb          $zero, 0x1($v0)
    MEM_B(0X1, ctx->r2) = 0;
    // 0x80800074: sb          $zero, 0x2($v0)
    MEM_B(0X2, ctx->r2) = 0;
    // 0x80800078: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8080007C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80800080: bne         $v1, $a2, L_8080006C
    if (ctx->r3 != ctx->r6) {
        // 0x80800084: sb          $zero, -0x4($v0)
        MEM_B(-0X4, ctx->r2) = 0;
            goto L_8080006C;
    }
    // 0x80800084: sb          $zero, -0x4($v0)
    MEM_B(-0X4, ctx->r2) = 0;
    // 0x80800088: jal         0x80016934
    // 0x8080008C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80016934(rdram, ctx);
        goto after_1;
    // 0x8080008C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_1:
    // 0x80800090: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x80800094: jal         0x8001E048
    // 0x80800098: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001E048(rdram, ctx);
        goto after_2;
    // 0x80800098: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8080009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000A4: jal         0x8002E1F0
    // 0x808000A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_3;
    // 0x808000A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x808000AC: jal         0x8001E11C
    // 0x808000B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001E11C(rdram, ctx);
        goto after_4;
    // 0x808000B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000BC: jal         0x8002E1F0
    // 0x808000C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x808000C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x808000C4: jal         0x8001E170
    // 0x808000C8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8001E170(rdram, ctx);
        goto after_6;
    // 0x808000C8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_6:
    // 0x808000CC: jal         0x80016934
    // 0x808000D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80016934(rdram, ctx);
        goto after_7;
    // 0x808000D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x808000D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000D8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000DC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x808000E0: jr          $ra
    // 0x808000E4: nop

    return;
    // 0x808000E4: nop

;}
RECOMP_FUNC void func_808000E8_gldbDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808000EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000F0: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x808000F4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x808000F8: jal         0x80000000
    // 0x808000FC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    func_80800000_gldbDll(rdram, ctx);
        goto after_0;
    // 0x808000FC: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800100: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    // 0x80800104: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x80800108: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x8080010C: blez        $a2, L_8080029C
    if (SIGNED(ctx->r6) <= 0) {
        // 0x80800110: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8080029C;
    }
    // 0x80800110: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800114: andi        $a0, $a2, 0x3
    ctx->r4 = ctx->r6 & 0X3;
    // 0x80800118: beq         $a0, $zero, L_8080017C
    if (ctx->r4 == 0) {
        // 0x8080011C: or          $a1, $a0, $zero
        ctx->r5 = ctx->r4 | 0;
            goto L_8080017C;
    }
    // 0x8080011C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80800120: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80800124: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80800128: addu        $v0, $t0, $v1
    ctx->r2 = ADD32(ctx->r8, ctx->r3);
L_8080012C:
    // 0x8080012C: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x80800130: mfhi        $t6
    ctx->r14 = hi;
    // 0x80800134: addu        $t7, $a3, $t6
    ctx->r15 = ADD32(ctx->r7, ctx->r14);
    // 0x80800138: lbu         $t8, 0x0($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X0);
    // 0x8080013C: lbu         $t9, 0x0($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X0);
    // 0x80800140: bne         $a0, $zero, L_8080014C
    if (ctx->r4 != 0) {
        // 0x80800144: nop
    
            goto L_8080014C;
    }
    // 0x80800144: nop

    // 0x80800148: break       7
    do_break(2155872584);
L_8080014C:
    // 0x8080014C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80800150: bne         $a0, $at, L_80800164
    if (ctx->r4 != ctx->r1) {
        // 0x80800154: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80800164;
    }
    // 0x80800154: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80800158: bne         $v1, $at, L_80800164
    if (ctx->r3 != ctx->r1) {
        // 0x8080015C: nop
    
            goto L_80800164;
    }
    // 0x8080015C: nop

    // 0x80800160: break       6
    do_break(2155872608);
L_80800164:
    // 0x80800164: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80800168: xor         $t1, $t8, $t9
    ctx->r9 = ctx->r24 ^ ctx->r25;
    // 0x8080016C: sb          $t1, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r9;
    // 0x80800170: bne         $a1, $v1, L_8080012C
    if (ctx->r5 != ctx->r3) {
        // 0x80800174: addiu       $v0, $v0, 0x1
        ctx->r2 = ADD32(ctx->r2, 0X1);
            goto L_8080012C;
    }
    // 0x80800174: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80800178: beq         $v1, $a2, L_8080029C
    if (ctx->r3 == ctx->r6) {
        // 0x8080017C: addiu       $a0, $zero, 0xE
        ctx->r4 = ADD32(0, 0XE);
            goto L_8080029C;
    }
L_8080017C:
    // 0x8080017C: addiu       $a0, $zero, 0xE
    ctx->r4 = ADD32(0, 0XE);
    // 0x80800180: addu        $v0, $t0, $v1
    ctx->r2 = ADD32(ctx->r8, ctx->r3);
L_80800184:
    // 0x80800184: div         $zero, $v1, $a0
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r4)));
    // 0x80800188: mfhi        $t2
    ctx->r10 = hi;
    // 0x8080018C: addiu       $t7, $v1, 0x1
    ctx->r15 = ADD32(ctx->r3, 0X1);
    // 0x80800190: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x80800194: div         $zero, $t7, $a0
    lo = S32(S64(S32(ctx->r15)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r15)) % S64(S32(ctx->r4)));
    // 0x80800198: mfhi        $t8
    ctx->r24 = hi;
    // 0x8080019C: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x808001A0: lbu         $t5, 0x0($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X0);
    // 0x808001A4: addu        $t9, $a3, $t8
    ctx->r25 = ADD32(ctx->r7, ctx->r24);
    // 0x808001A8: lbu         $t2, 0x1($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X1);
    // 0x808001AC: xor         $t6, $t4, $t5
    ctx->r14 = ctx->r12 ^ ctx->r13;
    // 0x808001B0: addiu       $t4, $v1, 0x2
    ctx->r12 = ADD32(ctx->r3, 0X2);
    // 0x808001B4: div         $zero, $t4, $a0
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r4)));
    // 0x808001B8: sb          $t6, 0x0($v0)
    MEM_B(0X0, ctx->r2) = ctx->r14;
    // 0x808001BC: lbu         $t1, 0x0($t9)
    ctx->r9 = MEM_BU(ctx->r25, 0X0);
    // 0x808001C0: mfhi        $t5
    ctx->r13 = hi;
    // 0x808001C4: addu        $t6, $a3, $t5
    ctx->r14 = ADD32(ctx->r7, ctx->r13);
    // 0x808001C8: xor         $t3, $t1, $t2
    ctx->r11 = ctx->r9 ^ ctx->r10;
    // 0x808001CC: addiu       $t1, $v1, 0x3
    ctx->r9 = ADD32(ctx->r3, 0X3);
    // 0x808001D0: div         $zero, $t1, $a0
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r4))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r4)));
    // 0x808001D4: bne         $a0, $zero, L_808001E0
    if (ctx->r4 != 0) {
        // 0x808001D8: nop
    
            goto L_808001E0;
    }
    // 0x808001D8: nop

    // 0x808001DC: break       7
    do_break(2155872732);
L_808001E0:
    // 0x808001E0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x808001E4: bne         $a0, $at, L_808001F8
    if (ctx->r4 != ctx->r1) {
        // 0x808001E8: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_808001F8;
    }
    // 0x808001E8: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x808001EC: bne         $v1, $at, L_808001F8
    if (ctx->r3 != ctx->r1) {
        // 0x808001F0: nop
    
            goto L_808001F8;
    }
    // 0x808001F0: nop

    // 0x808001F4: break       6
    do_break(2155872756);
L_808001F8:
    // 0x808001F8: sb          $t3, 0x1($v0)
    MEM_B(0X1, ctx->r2) = ctx->r11;
    // 0x808001FC: bne         $a0, $zero, L_80800208
    if (ctx->r4 != 0) {
        // 0x80800200: nop
    
            goto L_80800208;
    }
    // 0x80800200: nop

    // 0x80800204: break       7
    do_break(2155872772);
L_80800208:
    // 0x80800208: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8080020C: bne         $a0, $at, L_80800220
    if (ctx->r4 != ctx->r1) {
        // 0x80800210: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80800220;
    }
    // 0x80800210: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80800214: bne         $t7, $at, L_80800220
    if (ctx->r15 != ctx->r1) {
        // 0x80800218: nop
    
            goto L_80800220;
    }
    // 0x80800218: nop

    // 0x8080021C: break       6
    do_break(2155872796);
L_80800220:
    // 0x80800220: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80800224: bne         $a0, $zero, L_80800230
    if (ctx->r4 != 0) {
        // 0x80800228: nop
    
            goto L_80800230;
    }
    // 0x80800228: nop

    // 0x8080022C: break       7
    do_break(2155872812);
L_80800230:
    // 0x80800230: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80800234: bne         $a0, $at, L_80800248
    if (ctx->r4 != ctx->r1) {
        // 0x80800238: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80800248;
    }
    // 0x80800238: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8080023C: bne         $t4, $at, L_80800248
    if (ctx->r12 != ctx->r1) {
        // 0x80800240: nop
    
            goto L_80800248;
    }
    // 0x80800240: nop

    // 0x80800244: break       6
    do_break(2155872836);
L_80800248:
    // 0x80800248: lbu         $t8, 0x2($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2);
    // 0x8080024C: mfhi        $t2
    ctx->r10 = hi;
    // 0x80800250: addu        $t3, $a3, $t2
    ctx->r11 = ADD32(ctx->r7, ctx->r10);
    // 0x80800254: xor         $t9, $t7, $t8
    ctx->r25 = ctx->r15 ^ ctx->r24;
    // 0x80800258: sb          $t9, 0x2($v0)
    MEM_B(0X2, ctx->r2) = ctx->r25;
    // 0x8080025C: lbu         $t4, 0x0($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X0);
    // 0x80800260: lbu         $t5, 0x3($v0)
    ctx->r13 = MEM_BU(ctx->r2, 0X3);
    // 0x80800264: bne         $a0, $zero, L_80800270
    if (ctx->r4 != 0) {
        // 0x80800268: nop
    
            goto L_80800270;
    }
    // 0x80800268: nop

    // 0x8080026C: break       7
    do_break(2155872876);
L_80800270:
    // 0x80800270: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80800274: bne         $a0, $at, L_80800288
    if (ctx->r4 != ctx->r1) {
        // 0x80800278: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80800288;
    }
    // 0x80800278: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8080027C: bne         $t1, $at, L_80800288
    if (ctx->r9 != ctx->r1) {
        // 0x80800280: nop
    
            goto L_80800288;
    }
    // 0x80800280: nop

    // 0x80800284: break       6
    do_break(2155872900);
L_80800288:
    // 0x80800288: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8080028C: xor         $t6, $t4, $t5
    ctx->r14 = ctx->r12 ^ ctx->r13;
    // 0x80800290: sb          $t6, 0x3($v0)
    MEM_B(0X3, ctx->r2) = ctx->r14;
    // 0x80800294: bne         $v1, $a2, L_80800184
    if (ctx->r3 != ctx->r6) {
        // 0x80800298: addiu       $v0, $v0, 0x4
        ctx->r2 = ADD32(ctx->r2, 0X4);
            goto L_80800184;
    }
    // 0x80800298: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
L_8080029C:
    // 0x8080029C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002A0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808002A4: jr          $ra
    // 0x808002A8: nop

    return;
    // 0x808002A8: nop

;}
RECOMP_FUNC void gldbDll_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808002B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002B4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808002B8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808002BC: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x808002C0: jal         0x800D5DB8
    // 0x808002C4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_800D5DB8(rdram, ctx);
        goto after_0;
    // 0x808002C4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808002C8: andi        $t6, $v0, 0x1
    ctx->r14 = ctx->r2 & 0X1;
    // 0x808002CC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x808002D0: beq         $t6, $zero, L_808002DC
    if (ctx->r14 == 0) {
        // 0x808002D4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_808002DC;
    }
    // 0x808002D4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808002D8: addiu       $a2, $v0, 0x1
    ctx->r6 = ADD32(ctx->r2, 0X1);
L_808002DC:
    // 0x808002DC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x808002E0: jal         0x8001ACCC
    // 0x808002E4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_8001ACCC(rdram, ctx);
        goto after_1;
    // 0x808002E4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x808002E8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808002EC: jal         0x800D5A6C
    // 0x808002F0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800D5A6C(rdram, ctx);
        goto after_2;
    // 0x808002F0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x808002F4: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x808002F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808002FC: jal         0x80012F78
    // 0x80800300: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    rom_dma_read(rdram, ctx);
        goto after_3;
    // 0x80800300: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x80800304: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80800308: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080030C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x80800310: jal         0x800000E8
    // 0x80800314: addiu       $a1, $a1, -0x955
    ctx->r5 = ADD32(ctx->r5, -0X955);
    func_808000E8_gldbDll(rdram, ctx);
        goto after_4;
    // 0x80800314: addiu       $a1, $a1, -0x955
    ctx->r5 = ADD32(ctx->r5, -0X955);
    after_4:
    // 0x80800318: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x8080031C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80800320: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80800324: sll         $a0, $t7, 4
    ctx->r4 = S32(ctx->r15 << 4);
    // 0x80800328: jal         0x8001ACCC
    // 0x8080032C: sw          $a0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r4;
    func_8001ACCC(rdram, ctx);
        goto after_5;
    // 0x8080032C: sw          $a0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r4;
    after_5:
    // 0x80800330: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800334: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800338: jal         0x8001C2AC
    // 0x8080033C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8001C2AC(rdram, ctx);
        goto after_6;
    // 0x8080033C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x80800340: jal         0x8001B084
    // 0x80800344: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B084(rdram, ctx);
        goto after_7;
    // 0x80800344: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_7:
    // 0x80800348: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080034C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80800350: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800354: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800358: jr          $ra
    // 0x8080035C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8080035C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void gldbDll_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800360: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800364: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800368: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080036C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800370: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_80800374:
    // 0x80800374: jal         0x80088500
    // 0x80800378: nop

    _gleeprom_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800378: nop

    after_0:
    // 0x8080037C: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80800380: sllv        $t7, $t6, $s0
    ctx->r15 = S32(ctx->r14 << (ctx->r16 & 31));
    // 0x80800384: and         $t8, $v0, $t7
    ctx->r24 = ctx->r2 & ctx->r15;
    // 0x80800388: srav        $a0, $t8, $s0
    ctx->r4 = S32(SIGNED(ctx->r24) >> (ctx->r16 & 31));
    // 0x8080038C: jal         0x800DA544
    // 0x80800390: addiu       $a0, $a0, 0x9C4
    ctx->r4 = ADD32(ctx->r4, 0X9C4);
    func_800DA544(rdram, ctx);
        goto after_1;
    // 0x80800390: addiu       $a0, $a0, 0x9C4
    ctx->r4 = ADD32(ctx->r4, 0X9C4);
    after_1:
    // 0x80800394: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x80800398: slti        $at, $s0, 0x20
    ctx->r1 = SIGNED(ctx->r16) < 0X20 ? 1 : 0;
    // 0x8080039C: bne         $at, $zero, L_80800374
    if (ctx->r1 != 0) {
        // 0x808003A0: nop
    
            goto L_80800374;
    }
    // 0x808003A0: nop

    // 0x808003A4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x808003A8: addiu       $s1, $zero, 0x20
    ctx->r17 = ADD32(0, 0X20);
L_808003AC:
    // 0x808003AC: jal         0x80088458
    // 0x808003B0: nop

    _glreflight_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x808003B0: nop

    after_2:
    // 0x808003B4: addiu       $t9, $zero, 0xFF
    ctx->r25 = ADD32(0, 0XFF);
    // 0x808003B8: sllv        $t0, $t9, $s0
    ctx->r8 = S32(ctx->r25 << (ctx->r16 & 31));
    // 0x808003BC: and         $t1, $v0, $t0
    ctx->r9 = ctx->r2 & ctx->r8;
    // 0x808003C0: srav        $a0, $t1, $s0
    ctx->r4 = S32(SIGNED(ctx->r9) >> (ctx->r16 & 31));
    // 0x808003C4: jal         0x800DA544
    // 0x808003C8: addiu       $a0, $a0, 0x9C4
    ctx->r4 = ADD32(ctx->r4, 0X9C4);
    func_800DA544(rdram, ctx);
        goto after_3;
    // 0x808003C8: addiu       $a0, $a0, 0x9C4
    ctx->r4 = ADD32(ctx->r4, 0X9C4);
    after_3:
    // 0x808003CC: addiu       $s0, $s0, 0x8
    ctx->r16 = ADD32(ctx->r16, 0X8);
    // 0x808003D0: bne         $s0, $s1, L_808003AC
    if (ctx->r16 != ctx->r17) {
        // 0x808003D4: nop
    
            goto L_808003AC;
    }
    // 0x808003D4: nop

    // 0x808003D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003DC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808003E0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808003E4: jr          $ra
    // 0x808003E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808003E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void gldbDll_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808003F0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808003F4: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x808003F8: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x808003FC: jal         0x80088500
    // 0x80800400: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    _gleeprom_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800400: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800404: jal         0x80088458
    // 0x80800408: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    _glreflight_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800408: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    after_1:
    // 0x8080040C: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80800410: lw          $t6, -0x60A4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X60A4);
    // 0x80800414: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80800418: or          $t7, $v0, $t6
    ctx->r15 = ctx->r2 | ctx->r14;
    // 0x8080041C: or          $s1, $t7, $s2
    ctx->r17 = ctx->r15 | ctx->r18;
    // 0x80800420: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
L_80800424:
    // 0x80800424: sllv        $t9, $t8, $s0
    ctx->r25 = S32(ctx->r24 << (ctx->r16 & 31));
    // 0x80800428: and         $t0, $t9, $s1
    ctx->r8 = ctx->r25 & ctx->r17;
    // 0x8080042C: srlv        $a1, $t0, $s0
    ctx->r5 = S32(U32(ctx->r8) >> (ctx->r16 & 31));
    // 0x80800430: jal         0x800DA3B8
    // 0x80800434: addiu       $a0, $s0, 0x648
    ctx->r4 = ADD32(ctx->r16, 0X648);
    func_800DA3B8(rdram, ctx);
        goto after_2;
    // 0x80800434: addiu       $a0, $s0, 0x648
    ctx->r4 = ADD32(ctx->r16, 0X648);
    after_2:
    // 0x80800438: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8080043C: slti        $at, $s0, 0x8
    ctx->r1 = SIGNED(ctx->r16) < 0X8 ? 1 : 0;
    // 0x80800440: bnel        $at, $zero, L_80800424
    if (ctx->r1 != 0) {
        // 0x80800444: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80800424;
    }
    goto skip_0;
    // 0x80800444: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    skip_0:
    // 0x80800448: addiu       $s0, $zero, 0x8
    ctx->r16 = ADD32(0, 0X8);
    // 0x8080044C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
L_80800450:
    // 0x80800450: sllv        $t2, $t1, $s0
    ctx->r10 = S32(ctx->r9 << (ctx->r16 & 31));
    // 0x80800454: and         $t3, $t2, $s1
    ctx->r11 = ctx->r10 & ctx->r17;
    // 0x80800458: srlv        $a1, $t3, $s0
    ctx->r5 = S32(U32(ctx->r11) >> (ctx->r16 & 31));
    // 0x8080045C: jal         0x800DA3B8
    // 0x80800460: addiu       $a0, $s0, 0x658
    ctx->r4 = ADD32(ctx->r16, 0X658);
    func_800DA3B8(rdram, ctx);
        goto after_3;
    // 0x80800460: addiu       $a0, $s0, 0x658
    ctx->r4 = ADD32(ctx->r16, 0X658);
    after_3:
    // 0x80800464: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800468: slti        $at, $s0, 0x10
    ctx->r1 = SIGNED(ctx->r16) < 0X10 ? 1 : 0;
    // 0x8080046C: bnel        $at, $zero, L_80800450
    if (ctx->r1 != 0) {
        // 0x80800470: addiu       $t1, $zero, 0x1
        ctx->r9 = ADD32(0, 0X1);
            goto L_80800450;
    }
    goto skip_1;
    // 0x80800470: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    skip_1:
    // 0x80800474: addiu       $s0, $zero, 0x10
    ctx->r16 = ADD32(0, 0X10);
    // 0x80800478: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
L_8080047C:
    // 0x8080047C: sllv        $t5, $t4, $s0
    ctx->r13 = S32(ctx->r12 << (ctx->r16 & 31));
    // 0x80800480: and         $t6, $t5, $s1
    ctx->r14 = ctx->r13 & ctx->r17;
    // 0x80800484: srlv        $a1, $t6, $s0
    ctx->r5 = S32(U32(ctx->r14) >> (ctx->r16 & 31));
    // 0x80800488: jal         0x800DA3B8
    // 0x8080048C: addiu       $a0, $s0, 0x670
    ctx->r4 = ADD32(ctx->r16, 0X670);
    func_800DA3B8(rdram, ctx);
        goto after_4;
    // 0x8080048C: addiu       $a0, $s0, 0x670
    ctx->r4 = ADD32(ctx->r16, 0X670);
    after_4:
    // 0x80800490: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800494: slti        $at, $s0, 0x18
    ctx->r1 = SIGNED(ctx->r16) < 0X18 ? 1 : 0;
    // 0x80800498: bnel        $at, $zero, L_8080047C
    if (ctx->r1 != 0) {
        // 0x8080049C: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_8080047C;
    }
    goto skip_2;
    // 0x8080049C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    skip_2:
    // 0x808004A0: addiu       $s0, $zero, 0x18
    ctx->r16 = ADD32(0, 0X18);
    // 0x808004A4: addiu       $s2, $zero, 0x20
    ctx->r18 = ADD32(0, 0X20);
    // 0x808004A8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
L_808004AC:
    // 0x808004AC: sllv        $t8, $t7, $s0
    ctx->r24 = S32(ctx->r15 << (ctx->r16 & 31));
    // 0x808004B0: and         $t9, $t8, $s1
    ctx->r25 = ctx->r24 & ctx->r17;
    // 0x808004B4: srlv        $a1, $t9, $s0
    ctx->r5 = S32(U32(ctx->r25) >> (ctx->r16 & 31));
    // 0x808004B8: jal         0x800DA3B8
    // 0x808004BC: addiu       $a0, $s0, 0x680
    ctx->r4 = ADD32(ctx->r16, 0X680);
    func_800DA3B8(rdram, ctx);
        goto after_5;
    // 0x808004BC: addiu       $a0, $s0, 0x680
    ctx->r4 = ADD32(ctx->r16, 0X680);
    after_5:
    // 0x808004C0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x808004C4: bnel        $s0, $s2, L_808004AC
    if (ctx->r16 != ctx->r18) {
        // 0x808004C8: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_808004AC;
    }
    goto skip_3;
    // 0x808004C8: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    skip_3:
    // 0x808004CC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808004D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808004D4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x808004D8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x808004DC: jr          $ra
    // 0x808004E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808004E0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808004E4: nop

    // 0x808004E8: nop

    // 0x808004EC: nop

;}
RECOMP_FUNC void gldbstring_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: jal         0x800D674C
    // 0x80800010: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x80800010: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80800014: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80800018: jal         0x800D70D0
    // 0x8080001C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800D70D0(rdram, ctx);
        goto after_1;
    // 0x8080001C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80800020: jal         0x800D71F4
    // 0x80800024: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800D71F4(rdram, ctx);
        goto after_2;
    // 0x80800024: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80800028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080002C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80800030: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800034: jr          $ra
    // 0x80800038: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    return;
    // 0x80800038: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
;}
RECOMP_FUNC void gldbstring_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080003C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800044: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800048: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080004C: jal         0x80088730
    // 0x80800050: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    _gldialog_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800050: sh          $a1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800054: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80800058: sll         $t7, $v0, 1
    ctx->r15 = S32(ctx->r2 << 1);
    // 0x8080005C: lh          $a2, 0x1E($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X1E);
    // 0x80800060: addu        $a3, $t2, $t7
    ctx->r7 = ADD32(ctx->r10, ctx->r15);
    // 0x80800064: lbu         $t8, 0x1($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X1);
    // 0x80800068: lbu         $a0, 0x0($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X0);
    // 0x8080006C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800070: sll         $t9, $t8, 8
    ctx->r25 = S32(ctx->r24 << 8);
    // 0x80800074: addu        $a0, $a0, $t9
    ctx->r4 = ADD32(ctx->r4, ctx->r25);
    // 0x80800078: addu        $v1, $t2, $a0
    ctx->r3 = ADD32(ctx->r10, ctx->r4);
    // 0x8080007C: lbu         $t0, -0x1($v1)
    ctx->r8 = MEM_BU(ctx->r3, -0X1);
    // 0x80800080: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800084: blez        $t0, L_8080014C
    if (SIGNED(ctx->r8) <= 0) {
        // 0x80800088: andi        $v0, $t0, 0x3
        ctx->r2 = ctx->r8 & 0X3;
            goto L_8080014C;
    }
    // 0x80800088: andi        $v0, $t0, 0x3
    ctx->r2 = ctx->r8 & 0X3;
    // 0x8080008C: beq         $v0, $zero, L_808000C4
    if (ctx->r2 == 0) {
        // 0x80800090: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_808000C4;
    }
    // 0x80800090: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
L_80800094:
    // 0x80800094: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80800098: addiu       $t3, $a2, 0x80
    ctx->r11 = ADD32(ctx->r6, 0X80);
    // 0x8080009C: lbu         $a0, 0x1($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X1);
    // 0x808000A0: bne         $t3, $v0, L_808000B0
    if (ctx->r11 != ctx->r2) {
        // 0x808000A4: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_808000B0;
    }
    // 0x808000A4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x808000A8: b           L_80800150
    // 0x808000AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80800150;
    // 0x808000AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_808000B0:
    // 0x808000B0: addiu       $a1, $a1, 0x1
    ctx->r5 = ADD32(ctx->r5, 0X1);
    // 0x808000B4: bne         $a3, $a1, L_80800094
    if (ctx->r7 != ctx->r5) {
        // 0x808000B8: addu        $v1, $v1, $a0
        ctx->r3 = ADD32(ctx->r3, ctx->r4);
            goto L_80800094;
    }
    // 0x808000B8: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x808000BC: beql        $a1, $t0, L_80800150
    if (ctx->r5 == ctx->r8) {
        // 0x808000C0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80800150;
    }
    goto skip_0;
    // 0x808000C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
L_808000C4:
    // 0x808000C4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x808000C8: addiu       $t4, $a2, 0x80
    ctx->r12 = ADD32(ctx->r6, 0X80);
    // 0x808000CC: lbu         $a0, 0x1($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X1);
    // 0x808000D0: bne         $t4, $v0, L_808000E0
    if (ctx->r12 != ctx->r2) {
        // 0x808000D4: addiu       $v1, $v1, 0x2
        ctx->r3 = ADD32(ctx->r3, 0X2);
            goto L_808000E0;
    }
    // 0x808000D4: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x808000D8: b           L_80800150
    // 0x808000DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80800150;
    // 0x808000DC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_808000E0:
    // 0x808000E0: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x808000E4: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x808000E8: addiu       $t5, $a2, 0x80
    ctx->r13 = ADD32(ctx->r6, 0X80);
    // 0x808000EC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x808000F0: bne         $t5, $v0, L_80800100
    if (ctx->r13 != ctx->r2) {
        // 0x808000F4: lbu         $a0, -0x1($v1)
        ctx->r4 = MEM_BU(ctx->r3, -0X1);
            goto L_80800100;
    }
    // 0x808000F4: lbu         $a0, -0x1($v1)
    ctx->r4 = MEM_BU(ctx->r3, -0X1);
    // 0x808000F8: b           L_80800150
    // 0x808000FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80800150;
    // 0x808000FC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80800100:
    // 0x80800100: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80800104: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80800108: addiu       $t6, $a2, 0x80
    ctx->r14 = ADD32(ctx->r6, 0X80);
    // 0x8080010C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80800110: bne         $t6, $v0, L_80800120
    if (ctx->r14 != ctx->r2) {
        // 0x80800114: lbu         $a0, -0x1($v1)
        ctx->r4 = MEM_BU(ctx->r3, -0X1);
            goto L_80800120;
    }
    // 0x80800114: lbu         $a0, -0x1($v1)
    ctx->r4 = MEM_BU(ctx->r3, -0X1);
    // 0x80800118: b           L_80800150
    // 0x8080011C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80800150;
    // 0x8080011C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80800120:
    // 0x80800120: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
    // 0x80800124: lbu         $v0, 0x0($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X0);
    // 0x80800128: addiu       $t7, $a2, 0x80
    ctx->r15 = ADD32(ctx->r6, 0X80);
    // 0x8080012C: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x80800130: bne         $t7, $v0, L_80800140
    if (ctx->r15 != ctx->r2) {
        // 0x80800134: lbu         $a0, -0x1($v1)
        ctx->r4 = MEM_BU(ctx->r3, -0X1);
            goto L_80800140;
    }
    // 0x80800134: lbu         $a0, -0x1($v1)
    ctx->r4 = MEM_BU(ctx->r3, -0X1);
    // 0x80800138: b           L_80800150
    // 0x8080013C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_80800150;
    // 0x8080013C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80800140:
    // 0x80800140: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80800144: bne         $a1, $t0, L_808000C4
    if (ctx->r5 != ctx->r8) {
        // 0x80800148: addu        $v1, $v1, $a0
        ctx->r3 = ADD32(ctx->r3, ctx->r4);
            goto L_808000C4;
    }
    // 0x80800148: addu        $v1, $v1, $a0
    ctx->r3 = ADD32(ctx->r3, ctx->r4);
L_8080014C:
    // 0x8080014C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800150:
    // 0x80800150: jr          $ra
    // 0x80800154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800154: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void gldbstring_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080015C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800160: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800164: jal         0x800D721C
    // 0x80800168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800D721C(rdram, ctx);
        goto after_0;
    // 0x80800168: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8080016C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800170: jal         0x800D70F8
    // 0x80800174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800D70F8(rdram, ctx);
        goto after_1;
    // 0x80800174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800178: jal         0x800D6CEC
    // 0x8080017C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800D6CEC(rdram, ctx);
        goto after_2;
    // 0x8080017C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800184: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800188: jr          $ra
    // 0x8080018C: nop

    return;
    // 0x8080018C: nop

;}
RECOMP_FUNC void gldialog_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80800004: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void gldialog_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x8080000C: xori        $t6, $v0, 0xFD
    ctx->r14 = ctx->r2 ^ 0XFD;
    // 0x80800010: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    // 0x80800014: beq         $v0, $zero, L_80800028
    if (ctx->r2 == 0) {
        // 0x80800018: nop
    
            goto L_80800028;
    }
    // 0x80800018: nop

    // 0x8080001C: lbu         $v0, 0x1($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X1);
    // 0x80800020: xori        $t7, $v0, 0x6A
    ctx->r15 = ctx->r2 ^ 0X6A;
    // 0x80800024: sltiu       $v0, $t7, 0x1
    ctx->r2 = ctx->r15 < 0X1 ? 1 : 0;
L_80800028:
    // 0x80800028: jr          $ra
    // 0x8080002C: nop

    return;
    // 0x8080002C: nop

;}
RECOMP_FUNC void gldialog_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800030: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80800034: addiu       $v0, $v0, 0x7600
    ctx->r2 = ADD32(ctx->r2, 0X7600);
    // 0x80800038: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8080003C: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x80800040: jr          $ra
    // 0x80800044: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    return;
    // 0x80800044: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
;}
RECOMP_FUNC void gldialog_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800048: jr          $ra
    // 0x8080004C: nop

    return;
    // 0x8080004C: nop

;}
RECOMP_FUNC void gldialog_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800050: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800058: jal         0x800D674C
    // 0x8080005C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x8080005C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800060: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80800064: sw          $v0, 0x7600($at)
    MEM_W(0X7600, ctx->r1) = ctx->r2;
    // 0x80800068: jal         0x800D70D0
    // 0x8080006C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800D70D0(rdram, ctx);
        goto after_1;
    // 0x8080006C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80800070: jal         0x800D71F4
    // 0x80800074: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800D71F4(rdram, ctx);
        goto after_2;
    // 0x80800074: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80800078: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x8080007C: lw          $v1, 0x7600($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X7600);
    // 0x80800080: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80800084: jal         0x80000000
    // 0x80800088: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    gldialog_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x80800088: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_3:
    // 0x8080008C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800090: sll         $t6, $v0, 1
    ctx->r14 = S32(ctx->r2 << 1);
    // 0x80800094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800098: addu        $v1, $v1, $t6
    ctx->r3 = ADD32(ctx->r3, ctx->r14);
    // 0x8080009C: lbu         $t7, 0x1($v1)
    ctx->r15 = MEM_BU(ctx->r3, 0X1);
    // 0x808000A0: lbu         $a0, 0x0($v1)
    ctx->r4 = MEM_BU(ctx->r3, 0X0);
    // 0x808000A4: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x808000A8: lw          $t9, 0x7600($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7600);
    // 0x808000AC: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x808000B0: sll         $t8, $t7, 8
    ctx->r24 = S32(ctx->r15 << 8);
    // 0x808000B4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x808000B8: addu        $a0, $a0, $t8
    ctx->r4 = ADD32(ctx->r4, ctx->r24);
    // 0x808000BC: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x808000C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000C4: addu        $v0, $t9, $a0
    ctx->r2 = ADD32(ctx->r25, ctx->r4);
    // 0x808000C8: jr          $ra
    // 0x808000CC: sw          $t0, 0x7604($at)
    MEM_W(0X7604, ctx->r1) = ctx->r8;
    return;
    // 0x808000CC: sw          $t0, 0x7604($at)
    MEM_W(0X7604, ctx->r1) = ctx->r8;
;}
RECOMP_FUNC void gldialog_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000DC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x808000E0: lw          $a0, 0x7604($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7604);
    // 0x808000E4: jal         0x800D721C
    // 0x808000E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800D721C(rdram, ctx);
        goto after_0;
    // 0x808000E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808000EC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x808000F0: lw          $a0, 0x7604($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7604);
    // 0x808000F4: jal         0x800D70F8
    // 0x808000F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800D70F8(rdram, ctx);
        goto after_1;
    // 0x808000F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808000FC: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80800100: jal         0x800D6CEC
    // 0x80800104: lw          $a0, 0x7604($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7604);
    func_800D6CEC(rdram, ctx);
        goto after_2;
    // 0x80800104: lw          $a0, 0x7604($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7604);
    after_2:
    // 0x80800108: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080010C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80800110: addiu       $v0, $v0, 0x7600
    ctx->r2 = ADD32(ctx->r2, 0X7600);
    // 0x80800114: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80800118: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8080011C: sw          $t6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r14;
    // 0x80800120: jr          $ra
    // 0x80800124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800128: nop

    // 0x8080012C: nop

;}
RECOMP_FUNC void gleeprom_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80800004: lw          $v0, -0x24B0($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X24B0);
    // 0x80800008: lui         $at, 0xBD1F
    ctx->r1 = S32(0XBD1F << 16);
    // 0x8080000C: ori         $at, $at, 0x416
    ctx->r1 = ctx->r1 | 0X416;
    // 0x80800010: xor         $t6, $v0, $at
    ctx->r14 = ctx->r2 ^ ctx->r1;
    // 0x80800014: jr          $ra
    // 0x80800018: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x80800018: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
;}
RECOMP_FUNC void gleeprom_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080001C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800020: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800024: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800028: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8080002C: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800030: jal         0x80016934
    // 0x80800034: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80016934(rdram, ctx);
        goto after_0;
    // 0x80800034: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x80800038: jal         0x80016928
    // 0x8080003C: nop

    func_80016928(rdram, ctx);
        goto after_1;
    // 0x8080003C: nop

    after_1:
    // 0x80800040: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80800044: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800048: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8080004C: bgez        $a1, L_8080005C
    if (SIGNED(ctx->r5) >= 0) {
        // 0x80800050: sra         $t6, $a1, 3
        ctx->r14 = S32(SIGNED(ctx->r5) >> 3);
            goto L_8080005C;
    }
    // 0x80800050: sra         $t6, $a1, 3
    ctx->r14 = S32(SIGNED(ctx->r5) >> 3);
    // 0x80800054: addiu       $at, $a1, 0x7
    ctx->r1 = ADD32(ctx->r5, 0X7);
    // 0x80800058: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_8080005C:
    // 0x8080005C: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    // 0x80800060: jal         0x8002DF00
    // 0x80800064: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    osEepromLongWrite_recomp(rdram, ctx);
        goto after_2;
    // 0x80800064: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x80800068: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8080006C: jal         0x80016934
    // 0x80800070: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80016934(rdram, ctx);
        goto after_3;
    // 0x80800070: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80800074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800078: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8080007C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800080: jr          $ra
    // 0x80800084: nop

    return;
    // 0x80800084: nop

;}
RECOMP_FUNC void gleeprom_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800088: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080008C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800090: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800094: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800098: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8080009C: jal         0x80016934
    // 0x808000A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_80016934(rdram, ctx);
        goto after_0;
    // 0x808000A0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_0:
    // 0x808000A4: jal         0x80016928
    // 0x808000A8: nop

    func_80016928(rdram, ctx);
        goto after_1;
    // 0x808000A8: nop

    after_1:
    // 0x808000AC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x808000B0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808000B4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x808000B8: bgez        $a1, L_808000C8
    if (SIGNED(ctx->r5) >= 0) {
        // 0x808000BC: sra         $t6, $a1, 3
        ctx->r14 = S32(SIGNED(ctx->r5) >> 3);
            goto L_808000C8;
    }
    // 0x808000BC: sra         $t6, $a1, 3
    ctx->r14 = S32(SIGNED(ctx->r5) >> 3);
    // 0x808000C0: addiu       $at, $a1, 0x7
    ctx->r1 = ADD32(ctx->r5, 0X7);
    // 0x808000C4: sra         $t6, $at, 3
    ctx->r14 = S32(SIGNED(ctx->r1) >> 3);
L_808000C8:
    // 0x808000C8: andi        $a1, $t6, 0xFF
    ctx->r5 = ctx->r14 & 0XFF;
    // 0x808000CC: jal         0x8002DE70
    // 0x808000D0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    osEepromLongRead_recomp(rdram, ctx);
        goto after_2;
    // 0x808000D0: lw          $a3, 0x28($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x808000D4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x808000D8: jal         0x80016934
    // 0x808000DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80016934(rdram, ctx);
        goto after_3;
    // 0x808000DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x808000E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000E4: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x808000E8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000EC: jr          $ra
    // 0x808000F0: nop

    return;
    // 0x808000F0: nop

    // 0x808000F4: nop

    // 0x808000F8: nop

    // 0x808000FC: nop

;}
RECOMP_FUNC void func_80800000_glgamedata(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: jr          $ra
    // 0x80800004: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x80800004: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
;}
RECOMP_FUNC void func_80800008_glgamedata(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800008: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x8080000C: jr          $ra
    // 0x80800010: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
    return;
    // 0x80800010: sb          $t6, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r14;
;}
RECOMP_FUNC void glgamedata_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800014: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800018: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8080001C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80800020: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800024: lui         $s1, 0x0
    ctx->r17 = S32(RELOC_HI16(697, 0X4F0) << 16);
    // 0x80800028: lui         $s2, 0x0
    ctx->r18 = S32(RELOC_HI16(697, 0X544) << 16);
    // 0x8080002C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800030: addiu       $s0, $zero, 0x4
    ctx->r16 = ADD32(0, 0X4);
    // 0x80800034: addiu       $s2, $s2, 0x544
    ctx->r18 = ADD32(ctx->r18, (int16_t)RELOC_LO16(697, 0X544));
    // 0x80800038: addiu       $s1, $s1, 0x4F0
    ctx->r17 = ADD32(ctx->r17, (int16_t)RELOC_LO16(697, 0X4F0));
L_8080003C:
    // 0x8080003C: lw          $v0, 0x0($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X0);
    // 0x80800040: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800044: beq         $v0, $zero, L_8080005C
    if (ctx->r2 == 0) {
        // 0x80800048: nop
    
            goto L_8080005C;
    }
    // 0x80800048: nop

    // 0x8080004C: jalr        $v0
    // 0x80800050: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80800050: nop

    after_0:
    // 0x80800054: b           L_8080005C
    // 0x80800058: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8080005C;
    // 0x80800058: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8080005C:
    // 0x8080005C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80800060: addu        $s0, $s0, $v1
    ctx->r16 = ADD32(ctx->r16, ctx->r3);
    // 0x80800064: bne         $s1, $s2, L_8080003C
    if (ctx->r17 != ctx->r18) {
        // 0x80800068: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8080003C;
    }
    // 0x80800068: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8080006C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800070: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800074: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800078: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8080007C: jr          $ra
    // 0x80800080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800080: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80800084_glgamedata(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800084: lui         $t6, 0x4B48
    ctx->r14 = S32(0X4B48 << 16);
    // 0x80800088: ori         $t6, $t6, 0x4A43
    ctx->r14 = ctx->r14 | 0X4A43;
    // 0x8080008C: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x80800090: jr          $ra
    // 0x80800094: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x80800094: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_80800098_glgamedata(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800098: andi        $t6, $a2, 0xFF
    ctx->r14 = ctx->r6 & 0XFF;
    // 0x8080009C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x808000A0: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x808000A4: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(697, 0X4F0) << 16);
    // 0x808000A8: addiu       $t8, $t8, 0x4F0
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(697, 0X4F0));
    // 0x808000AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808000B0: addu        $v1, $t7, $t8
    ctx->r3 = ADD32(ctx->r15, ctx->r24);
    // 0x808000B4: lw          $v0, 0x0($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X0);
    // 0x808000B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000BC: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x808000C0: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x808000C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x808000CC: beq         $v0, $zero, L_808000F8
    if (ctx->r2 == 0) {
        // 0x808000D0: or          $a3, $a1, $zero
        ctx->r7 = ctx->r5 | 0;
            goto L_808000F8;
    }
    // 0x808000D0: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x808000D4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x808000D8: sb          $t6, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r14;
    // 0x808000DC: jalr        $v0
    // 0x808000E0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x808000E0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808000E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808000E8: lbu         $a2, 0x33($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0X33);
    // 0x808000EC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x808000F0: b           L_808000FC
    // 0x808000F4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
        goto L_808000FC;
    // 0x808000F4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_808000F8:
    // 0x808000F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_808000FC:
    // 0x808000FC: lw          $t9, 0x0($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X0);
    // 0x80800100: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80800104: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x80800108: sb          $a2, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r6;
    // 0x8080010C: sb          $a1, 0x1($a0)
    MEM_B(0X1, ctx->r4) = ctx->r5;
    // 0x80800110: lw          $v0, 0x8($v1)
    ctx->r2 = MEM_W(ctx->r3, 0X8);
    // 0x80800114: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x80800118: beql        $v0, $zero, L_80800138
    if (ctx->r2 == 0) {
        // 0x8080011C: lw          $t1, 0x0($a3)
        ctx->r9 = MEM_W(ctx->r7, 0X0);
            goto L_80800138;
    }
    goto skip_0;
    // 0x8080011C: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    skip_0:
    // 0x80800120: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800124: jalr        $v0
    // 0x80800128: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80800128: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_1:
    // 0x8080012C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800130: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80800134: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
L_80800138:
    // 0x80800138: addu        $t2, $t1, $a1
    ctx->r10 = ADD32(ctx->r9, ctx->r5);
    // 0x8080013C: addiu       $t3, $t2, 0x2
    ctx->r11 = ADD32(ctx->r10, 0X2);
    // 0x80800140: sw          $t3, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r11;
    // 0x80800144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800148: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080014C: jr          $ra
    // 0x80800150: nop

    return;
    // 0x80800150: nop

;}
RECOMP_FUNC void glgamedata_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800154: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800158: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080015C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80800160: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80800164: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80800168: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080016C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800170: jal         0x800004BC
    // 0x80800174: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    glgamedata_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x80800174: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    after_0:
    // 0x80800178: jal         0x80000084
    // 0x8080017C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80800084_glgamedata(rdram, ctx);
        goto after_1;
    // 0x8080017C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x80800180: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80800184: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80800188: addiu       $s2, $zero, 0x7
    ctx->r18 = ADD32(0, 0X7);
    // 0x8080018C: addiu       $s1, $sp, 0x28
    ctx->r17 = ADD32(ctx->r29, 0X28);
    // 0x80800190: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
L_80800194:
    // 0x80800194: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80800198: jal         0x80000098
    // 0x8080019C: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    func_80800098_glgamedata(rdram, ctx);
        goto after_2;
    // 0x8080019C: andi        $a2, $s0, 0xFF
    ctx->r6 = ctx->r16 & 0XFF;
    after_2:
    // 0x808001A0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x808001A4: bnel        $s0, $s2, L_80800194
    if (ctx->r16 != ctx->r18) {
        // 0x808001A8: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80800194;
    }
    goto skip_0;
    // 0x808001A8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    skip_0:
    // 0x808001AC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x808001B0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x808001B4: jal         0x80000098
    // 0x808001B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80800098_glgamedata(rdram, ctx);
        goto after_3;
    // 0x808001B8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x808001BC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x808001C0: jal         0x80088708
    // 0x808001C4: addiu       $a1, $zero, 0x1C0
    ctx->r5 = ADD32(0, 0X1C0);
    _glcrc_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x808001C4: addiu       $a1, $zero, 0x1C0
    ctx->r5 = ADD32(0, 0X1C0);
    after_4:
    // 0x808001C8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808001CC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808001D0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808001D4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x808001D8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x808001DC: jr          $ra
    // 0x808001E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x808001E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_808001E4_glgamedata(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001E4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x808001E8: jr          $ra
    // 0x808001EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x808001EC: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
;}
RECOMP_FUNC void func_808001F0_glgamedata(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001F0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808001F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001F8: lw          $v1, 0x0($a1)
    ctx->r3 = MEM_W(ctx->r5, 0X0);
    // 0x808001FC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(697, 0X4F4) << 16);
    // 0x80800200: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80800204: addu        $a2, $v1, $a0
    ctx->r6 = ADD32(ctx->r3, ctx->r4);
    // 0x80800208: lbu         $t0, 0x0($a2)
    ctx->r8 = MEM_BU(ctx->r6, 0X0);
    // 0x8080020C: lbu         $t6, 0x1($a2)
    ctx->r14 = MEM_BU(ctx->r6, 0X1);
    // 0x80800210: addiu       $a2, $a2, 0x2
    ctx->r6 = ADD32(ctx->r6, 0X2);
    // 0x80800214: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x80800218: subu        $t7, $t7, $t0
    ctx->r15 = SUB32(ctx->r15, ctx->r8);
    // 0x8080021C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80800220: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x80800224: lw          $v0, 0x4F4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(697, 0X4F4));
    // 0x80800228: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x8080022C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80800230: beq         $v0, $zero, L_80800250
    if (ctx->r2 == 0) {
        // 0x80800234: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_80800250;
    }
    // 0x80800234: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80800238: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8080023C: jalr        $v0
    // 0x80800240: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x80800240: sb          $t0, 0x1F($sp)
    MEM_B(0X1F, ctx->r29) = ctx->r8;
    after_0:
    // 0x80800244: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80800248: lbu         $t0, 0x1F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X1F);
    // 0x8080024C: lw          $v1, 0x0($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X0);
L_80800250:
    // 0x80800250: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80800254: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x80800258: addu        $t9, $v1, $t8
    ctx->r25 = ADD32(ctx->r3, ctx->r24);
    // 0x8080025C: addiu       $t1, $t9, 0x2
    ctx->r9 = ADD32(ctx->r25, 0X2);
    // 0x80800260: sw          $t1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r9;
    // 0x80800264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800268: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080026C: jr          $ra
    // 0x80800270: nop

    return;
    // 0x80800270: nop

;}
RECOMP_FUNC void glgamedata_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800274: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800278: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080027C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800280: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800284: jal         0x800001E4
    // 0x80800288: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_808001E4_glgamedata(rdram, ctx);
        goto after_0;
    // 0x80800288: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x8080028C: addiu       $s0, $sp, 0x24
    ctx->r16 = ADD32(ctx->r29, 0X24);
    // 0x80800290: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80800294: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80800298: jal         0x800001F0
    // 0x8080029C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_808001F0_glgamedata(rdram, ctx);
        goto after_1;
    // 0x8080029C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x808002A0: beq         $v0, $zero, L_808002B8
    if (ctx->r2 == 0) {
        // 0x808002A4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_808002B8;
    }
    // 0x808002A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_808002A8:
    // 0x808002A8: jal         0x800001F0
    // 0x808002AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_808001F0_glgamedata(rdram, ctx);
        goto after_2;
    // 0x808002AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x808002B0: bnel        $v0, $zero, L_808002A8
    if (ctx->r2 != 0) {
        // 0x808002B4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_808002A8;
    }
    goto skip_0;
    // 0x808002B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_808002B8:
    // 0x808002B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808002BC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808002C0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808002C4: jr          $ra
    // 0x808002C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x808002C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_808002CC_glgamedata(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002CC: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x808002D0: lui         $at, 0x4B48
    ctx->r1 = S32(0X4B48 << 16);
    // 0x808002D4: ori         $at, $at, 0x4A43
    ctx->r1 = ctx->r1 | 0X4A43;
    // 0x808002D8: bne         $t6, $at, L_808002E8
    if (ctx->r14 != ctx->r1) {
        // 0x808002DC: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_808002E8;
    }
    // 0x808002DC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x808002E0: jr          $ra
    // 0x808002E4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
    return;
    // 0x808002E4: addiu       $v0, $zero, 0x4
    ctx->r2 = ADD32(0, 0X4);
L_808002E8:
    // 0x808002E8: jr          $ra
    // 0x808002EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x808002EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void glgamedata_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808002F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808002F8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800300: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800304: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x80800308: jal         0x800002CC
    // 0x8080030C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    func_808002CC_glgamedata(rdram, ctx);
        goto after_0;
    // 0x8080030C: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    after_0:
    // 0x80800310: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80800314: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x80800318: bne         $v0, $zero, L_80800328
    if (ctx->r2 != 0) {
        // 0x8080031C: sw          $v0, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r2;
            goto L_80800328;
    }
    // 0x8080031C: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80800320: b           L_80800374
    // 0x80800324: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800374;
    // 0x80800324: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800328:
    // 0x80800328: lbu         $a1, 0x27($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X27);
L_8080032C:
    // 0x8080032C: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80800330: addu        $v0, $t6, $s0
    ctx->r2 = ADD32(ctx->r14, ctx->r16);
    // 0x80800334: lbu         $t7, 0x1($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X1);
    // 0x80800338: lbu         $a0, 0x0($v0)
    ctx->r4 = MEM_BU(ctx->r2, 0X0);
    // 0x8080033C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80800340: sw          $t7, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r15;
    // 0x80800344: lw          $t8, 0x0($a2)
    ctx->r24 = MEM_W(ctx->r6, 0X0);
    // 0x80800348: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x8080034C: bne         $a1, $a0, L_8080035C
    if (ctx->r5 != ctx->r4) {
        // 0x80800350: sw          $t9, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r25;
            goto L_8080035C;
    }
    // 0x80800350: sw          $t9, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r25;
    // 0x80800354: b           L_80800374
    // 0x80800358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800374;
    // 0x80800358: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8080035C:
    // 0x8080035C: lw          $t0, 0x0($a2)
    ctx->r8 = MEM_W(ctx->r6, 0X0);
    // 0x80800360: lw          $t1, 0x0($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X0);
    // 0x80800364: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80800368: bne         $a0, $zero, L_8080032C
    if (ctx->r4 != 0) {
        // 0x8080036C: sw          $t2, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r10;
            goto L_8080032C;
    }
    // 0x8080036C: sw          $t2, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r10;
    // 0x80800370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800374:
    // 0x80800374: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800378: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080037C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800380: jr          $ra
    // 0x80800384: nop

    return;
    // 0x80800384: nop

;}
RECOMP_FUNC void glgamedata_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800388: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080038C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800390: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800394: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x80800398: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x8080039C: jal         0x800002F0
    // 0x808003A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    glgamedata_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808003A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808003A4: beq         $v0, $zero, L_808003C8
    if (ctx->r2 == 0) {
        // 0x808003A8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808003C8;
    }
    // 0x808003A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003AC: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x808003B0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x808003B4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x808003B8: lbu         $v0, 0x0($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X0);
    // 0x808003BC: xori        $t9, $v0, 0x1E
    ctx->r25 = ctx->r2 ^ 0X1E;
    // 0x808003C0: b           L_808003CC
    // 0x808003C4: sltiu       $v0, $t9, 0x1
    ctx->r2 = ctx->r25 < 0X1 ? 1 : 0;
        goto L_808003CC;
    // 0x808003C4: sltiu       $v0, $t9, 0x1
    ctx->r2 = ctx->r25 < 0X1 ? 1 : 0;
L_808003C8:
    // 0x808003C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808003CC:
    // 0x808003CC: jr          $ra
    // 0x808003D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808003D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void glgamedata_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003D4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808003D8: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x808003DC: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x808003E0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x808003E4: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x808003E8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x808003EC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x808003F0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x808003F4: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x808003F8: jal         0x800002CC
    // 0x808003FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_808002CC_glgamedata(rdram, ctx);
        goto after_0;
    // 0x808003FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800400: bne         $v0, $zero, L_80800410
    if (ctx->r2 != 0) {
        // 0x80800404: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80800410;
    }
    // 0x80800404: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800408: b           L_80800494
    // 0x8080040C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80800494;
    // 0x8080040C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80800410:
    // 0x80800410: lui         $s4, 0x0
    ctx->r20 = S32(RELOC_HI16(697, 0X4F0) << 16);
    // 0x80800414: addiu       $s4, $s4, 0x4F0
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(697, 0X4F0));
    // 0x80800418: addiu       $s5, $zero, 0xC
    ctx->r21 = ADD32(0, 0XC);
L_8080041C:
    // 0x8080041C: addu        $v0, $s6, $s0
    ctx->r2 = ADD32(ctx->r22, ctx->r16);
    // 0x80800420: lbu         $v1, 0x0($v0)
    ctx->r3 = MEM_BU(ctx->r2, 0X0);
    // 0x80800424: addiu       $s1, $v0, 0x1
    ctx->r17 = ADD32(ctx->r2, 0X1);
    // 0x80800428: or          $s3, $s1, $zero
    ctx->r19 = ctx->r17 | 0;
    // 0x8080042C: slti        $at, $v1, 0x7
    ctx->r1 = SIGNED(ctx->r3) < 0X7 ? 1 : 0;
    // 0x80800430: bne         $at, $zero, L_80800440
    if (ctx->r1 != 0) {
        // 0x80800434: or          $s2, $v1, $zero
        ctx->r18 = ctx->r3 | 0;
            goto L_80800440;
    }
    // 0x80800434: or          $s2, $v1, $zero
    ctx->r18 = ctx->r3 | 0;
    // 0x80800438: b           L_80800494
    // 0x8080043C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_80800494;
    // 0x8080043C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80800440:
    // 0x80800440: multu       $v1, $s5
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r21)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800444: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800448: mflo        $t6
    ctx->r14 = lo;
    // 0x8080044C: addu        $t7, $s4, $t6
    ctx->r15 = ADD32(ctx->r20, ctx->r14);
    // 0x80800450: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x80800454: beq         $v0, $zero, L_8080046C
    if (ctx->r2 == 0) {
        // 0x80800458: nop
    
            goto L_8080046C;
    }
    // 0x80800458: nop

    // 0x8080045C: jalr        $v0
    // 0x80800460: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_1;
    // 0x80800460: nop

    after_1:
    // 0x80800464: b           L_8080046C
    // 0x80800468: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_8080046C;
    // 0x80800468: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8080046C:
    // 0x8080046C: lbu         $t8, 0x0($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X0);
    // 0x80800470: beql        $v1, $t8, L_80800484
    if (ctx->r3 == ctx->r24) {
        // 0x80800474: lbu         $t9, 0x0($s3)
        ctx->r25 = MEM_BU(ctx->r19, 0X0);
            goto L_80800484;
    }
    goto skip_0;
    // 0x80800474: lbu         $t9, 0x0($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X0);
    skip_0:
    // 0x80800478: b           L_80800494
    // 0x8080047C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800494;
    // 0x8080047C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800480: lbu         $t9, 0x0($s3)
    ctx->r25 = MEM_BU(ctx->r19, 0X0);
L_80800484:
    // 0x80800484: addu        $s0, $s0, $t9
    ctx->r16 = ADD32(ctx->r16, ctx->r25);
    // 0x80800488: bne         $s2, $zero, L_8080041C
    if (ctx->r18 != 0) {
        // 0x8080048C: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_8080041C;
    }
    // 0x8080048C: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x80800490: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800494:
    // 0x80800494: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80800498: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080049C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x808004A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x808004A4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x808004A8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x808004AC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x808004B0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x808004B4: jr          $ra
    // 0x808004B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x808004B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void glgamedata_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004BC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x808004C0: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
    // 0x808004C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808004C8:
    // 0x808004C8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x808004CC: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x808004D0: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x808004D4: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x808004D8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x808004DC: bne         $v0, $a0, L_808004C8
    if (ctx->r2 != ctx->r4) {
        // 0x808004E0: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_808004C8;
    }
    // 0x808004E0: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
    // 0x808004E4: jr          $ra
    // 0x808004E8: nop

    return;
    // 0x808004E8: nop

    // 0x808004EC: nop

;}
RECOMP_FUNC void func_80800000_glgamestore(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x80088710
    // 0x8080000C: nop

    _glcrc_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080000C: nop

    after_0:
    // 0x80800010: beq         $v0, $zero, L_8080001C
    if (ctx->r2 == 0) {
        // 0x80800014: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_8080001C;
    }
    // 0x80800014: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800018: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_8080001C:
    // 0x8080001C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800024: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800028: jr          $ra
    // 0x8080002C: nop

    return;
    // 0x8080002C: nop

;}
RECOMP_FUNC void func_80800030_glgamestore(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800030: jr          $ra
    // 0x80800034: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
    return;
    // 0x80800034: sll         $v0, $a0, 7
    ctx->r2 = S32(ctx->r4 << 7);
;}
RECOMP_FUNC void func_80800038_glgamestore(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800038: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080003C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800040: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800044: jal         0x80000030
    // 0x80800048: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80800030_glgamestore(rdram, ctx);
        goto after_0;
    // 0x80800048: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x8080004C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800058: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8080005C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80800060: sll         $t7, $t7, 6
    ctx->r15 = S32(ctx->r15 << 6);
    // 0x80800064: jr          $ra
    // 0x80800068: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    return;
    // 0x80800068: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
;}
RECOMP_FUNC void func_8080006C_glgamestore(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080006C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800070: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800074: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800078: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8080007C: jal         0x80088510
    // 0x80800080: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _gleeprom_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800080: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800084: beq         $v0, $zero, L_80800090
    if (ctx->r2 == 0) {
        // 0x80800088: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800090;
    }
    // 0x80800088: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8080008C: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80800090:
    // 0x80800090: bne         $v1, $zero, L_808000A4
    if (ctx->r3 != 0) {
        // 0x80800094: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_808000A4;
    }
    // 0x80800094: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800098: jal         0x80000000
    // 0x8080009C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_80800000_glgamestore(rdram, ctx);
        goto after_1;
    // 0x8080009C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x808000A0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_808000A4:
    // 0x808000A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000AC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x808000B0: jr          $ra
    // 0x808000B4: nop

    return;
    // 0x808000B4: nop

;}
RECOMP_FUNC void glgamestore_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C0: jal         0x80000038
    // 0x808000C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800038_glgamestore(rdram, ctx);
        goto after_0;
    // 0x808000C4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808000C8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808000CC: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808000D0: jal         0x8000006C
    // 0x808000D4: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    func_8080006C_glgamestore(rdram, ctx);
        goto after_1;
    // 0x808000D4: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    after_1:
    // 0x808000D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000DC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000E0: jr          $ra
    // 0x808000E4: nop

    return;
    // 0x808000E4: nop

;}
RECOMP_FUNC void glgamestore_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000F0: jal         0x80000030
    // 0x808000F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80800030_glgamestore(rdram, ctx);
        goto after_0;
    // 0x808000F4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x808000F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808000FC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800100: jal         0x8000006C
    // 0x80800104: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_8080006C_glgamestore(rdram, ctx);
        goto after_1;
    // 0x80800104: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_1:
    // 0x80800108: bne         $v0, $zero, L_80800128
    if (ctx->r2 != 0) {
        // 0x8080010C: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800128;
    }
    // 0x8080010C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800110: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800114: jal         0x800885B0
    // 0x80800118: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    _glglobaldata_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800118: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x8080011C: bne         $v0, $zero, L_80800128
    if (ctx->r2 != 0) {
        // 0x80800120: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800128;
    }
    // 0x80800120: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800124: addiu       $v1, $zero, 0x2
    ctx->r3 = ADD32(0, 0X2);
L_80800128:
    // 0x80800128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080012C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800130: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800134: jr          $ra
    // 0x80800138: nop

    return;
    // 0x80800138: nop

;}
RECOMP_FUNC void func_8080013C_glgamestore(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080013C: lui         $t6, 0x8008
    ctx->r14 = S32(0X8008 << 16);
    // 0x80800140: lw          $t6, -0x60A4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X60A4);
    // 0x80800144: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800148: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080014C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800150: bne         $t6, $at, L_8080016C
    if (ctx->r14 != ctx->r1) {
        // 0x80800154: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_8080016C;
    }
    // 0x80800154: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80800158: jal         0x80088508
    // 0x8080015C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _gleeprom_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080015C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800160: beq         $v0, $zero, L_8080016C
    if (ctx->r2 == 0) {
        // 0x80800164: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_8080016C;
    }
    // 0x80800164: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800168: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_8080016C:
    // 0x8080016C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800170: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800174: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800178: jr          $ra
    // 0x8080017C: nop

    return;
    // 0x8080017C: nop

;}
RECOMP_FUNC void glgamestore_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800180: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800184: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800188: jal         0x80000038
    // 0x8080018C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800038_glgamestore(rdram, ctx);
        goto after_0;
    // 0x8080018C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800190: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800194: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800198: jal         0x8000013C
    // 0x8080019C: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    func_8080013C_glgamestore(rdram, ctx);
        goto after_1;
    // 0x8080019C: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    after_1:
    // 0x808001A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001A8: jr          $ra
    // 0x808001AC: nop

    return;
    // 0x808001AC: nop

;}
RECOMP_FUNC void glgamestore_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001B8: jal         0x80000030
    // 0x808001BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80800030_glgamestore(rdram, ctx);
        goto after_0;
    // 0x808001BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808001C0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808001C4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808001C8: jal         0x8000013C
    // 0x808001CC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    func_8080013C_glgamestore(rdram, ctx);
        goto after_1;
    // 0x808001CC: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    after_1:
    // 0x808001D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001D8: jr          $ra
    // 0x808001DC: nop

    return;
    // 0x808001DC: nop

;}
RECOMP_FUNC void func_808001E0_glgamestore(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001E0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001E8: lui         $a1, 0x0
    ctx->r5 = S32(RELOC_HI16(698, 0X270) << 16);
    // 0x808001EC: addiu       $a1, $a1, 0x270
    ctx->r5 = ADD32(ctx->r5, (int16_t)RELOC_LO16(698, 0X270));
    // 0x808001F0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x808001F4: jal         0x80088508
    // 0x808001F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    _gleeprom_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808001F8: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    after_0:
    // 0x808001FC: beq         $v0, $zero, L_80800208
    if (ctx->r2 == 0) {
        // 0x80800200: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800208;
    }
    // 0x80800200: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800204: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80800208:
    // 0x80800208: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080020C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800210: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800214: jr          $ra
    // 0x80800218: nop

    return;
    // 0x80800218: nop

;}
RECOMP_FUNC void glgamestore_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080021C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800224: jal         0x80000038
    // 0x80800228: nop

    func_80800038_glgamestore(rdram, ctx);
        goto after_0;
    // 0x80800228: nop

    after_0:
    // 0x8080022C: jal         0x800001E0
    // 0x80800230: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_808001E0_glgamestore(rdram, ctx);
        goto after_1;
    // 0x80800230: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080023C: jr          $ra
    // 0x80800240: nop

    return;
    // 0x80800240: nop

;}
RECOMP_FUNC void glgamestore_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800244: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800248: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080024C: jal         0x80000030
    // 0x80800250: nop

    func_80800030_glgamestore(rdram, ctx);
        goto after_0;
    // 0x80800250: nop

    after_0:
    // 0x80800254: jal         0x800001E0
    // 0x80800258: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_808001E0_glgamestore(rdram, ctx);
        goto after_1;
    // 0x80800258: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080025C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800260: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800264: jr          $ra
    // 0x80800268: nop

    return;
    // 0x80800268: nop

    // 0x8080026C: nop

;}
RECOMP_FUNC void glglobaldata_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800004: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80800010: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80800014: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80800018: lui         $s0, 0x0
    ctx->r16 = S32(RELOC_HI16(699, 0X230) << 16);
    // 0x8080001C: lui         $s4, 0x0
    ctx->r20 = S32(RELOC_HI16(699, 0X238) << 16);
    // 0x80800020: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800024: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80800028: addiu       $s4, $s4, 0x238
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(699, 0X238));
    // 0x8080002C: addiu       $s0, $s0, 0x230
    ctx->r16 = ADD32(ctx->r16, (int16_t)RELOC_LO16(699, 0X230));
    // 0x80800030: addiu       $s2, $sp, 0x3C
    ctx->r18 = ADD32(ctx->r29, 0X3C);
    // 0x80800034: addiu       $s3, $sp, 0x38
    ctx->r19 = ADD32(ctx->r29, 0X38);
L_80800038:
    // 0x80800038: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x8080003C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800040: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80800044: jalr        $t9
    // 0x80800048: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80800048: nop

    after_0:
    // 0x8080004C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80800050: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80800054: bne         $s0, $s4, L_80800038
    if (ctx->r16 != ctx->r20) {
        // 0x80800058: addu        $s1, $s1, $t6
        ctx->r17 = ADD32(ctx->r17, ctx->r14);
            goto L_80800038;
    }
    // 0x80800058: addu        $s1, $s1, $t6
    ctx->r17 = ADD32(ctx->r17, ctx->r14);
    // 0x8080005C: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800060: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800064: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800068: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8080006C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80800070: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80800074: jr          $ra
    // 0x80800078: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80800078: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void glglobaldata_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080007C: lbu         $v0, 0x0($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X0);
    // 0x80800080: xori        $t6, $v0, 0x8
    ctx->r14 = ctx->r2 ^ 0X8;
    // 0x80800084: jr          $ra
    // 0x80800088: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    return;
    // 0x80800088: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void glglobaldata_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080008C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800090: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80800094: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800098: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8080009C: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x808000A0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x808000A4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808000A8: lui         $s0, 0x0
    ctx->r16 = S32(RELOC_HI16(699, 0X230) << 16);
    // 0x808000AC: lui         $s5, 0x0
    ctx->r21 = S32(RELOC_HI16(699, 0X238) << 16);
    // 0x808000B0: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x808000B4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x808000B8: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x808000BC: addiu       $s5, $s5, 0x238
    ctx->r21 = ADD32(ctx->r21, (int16_t)RELOC_LO16(699, 0X238));
    // 0x808000C0: addiu       $s0, $s0, 0x230
    ctx->r16 = ADD32(ctx->r16, (int16_t)RELOC_LO16(699, 0X230));
    // 0x808000C4: addiu       $s3, $sp, 0x3C
    ctx->r19 = ADD32(ctx->r29, 0X3C);
    // 0x808000C8: addiu       $s4, $sp, 0x38
    ctx->r20 = ADD32(ctx->r29, 0X38);
L_808000CC:
    // 0x808000CC: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x808000D0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x808000D4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x808000D8: jalr        $t9
    // 0x808000DC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x808000DC: nop

    after_0:
    // 0x808000E0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x808000E4: addu        $a1, $s2, $s1
    ctx->r5 = ADD32(ctx->r18, ctx->r17);
    // 0x808000E8: jal         0x8001BBA0
    // 0x808000EC: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    rare_memcpy(rdram, ctx);
        goto after_1;
    // 0x808000EC: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    after_1:
    // 0x808000F0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x808000F4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x808000F8: bne         $s0, $s5, L_808000CC
    if (ctx->r16 != ctx->r21) {
        // 0x808000FC: addu        $s1, $s1, $t6
        ctx->r17 = ADD32(ctx->r17, ctx->r14);
            goto L_808000CC;
    }
    // 0x808000FC: addu        $s1, $s1, $t6
    ctx->r17 = ADD32(ctx->r17, ctx->r14);
    // 0x80800100: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80800104: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800108: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8080010C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80800110: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80800114: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80800118: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8080011C: jr          $ra
    // 0x80800120: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80800120: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80800124_glglobaldata(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800124: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80800128: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8080012C: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x80800130: sb          $t6, 0x0($t8)
    MEM_B(0X0, ctx->r24) = ctx->r14;
    // 0x80800134: lw          $t9, 0x0($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X0);
    // 0x80800138: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8080013C: jr          $ra
    // 0x80800140: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    return;
    // 0x80800140: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
;}
RECOMP_FUNC void glglobaldata_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800144: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800148: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8080014C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80800150: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x80800154: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80800158: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8080015C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80800160: jal         0x800001FC
    // 0x80800164: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    glglobaldata_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800164: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800168: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x8080016C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800170: jal         0x80000124
    // 0x80800174: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_80800124_glglobaldata(rdram, ctx);
        goto after_1;
    // 0x80800174: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x80800178: lui         $s0, 0x0
    ctx->r16 = S32(RELOC_HI16(699, 0X230) << 16);
    // 0x8080017C: lui         $s3, 0x0
    ctx->r19 = S32(RELOC_HI16(699, 0X238) << 16);
    // 0x80800180: addiu       $s3, $s3, 0x238
    ctx->r19 = ADD32(ctx->r19, (int16_t)RELOC_LO16(699, 0X238));
    // 0x80800184: addiu       $s0, $s0, 0x230
    ctx->r16 = ADD32(ctx->r16, (int16_t)RELOC_LO16(699, 0X230));
    // 0x80800188: addiu       $s2, $sp, 0x38
    ctx->r18 = ADD32(ctx->r29, 0X38);
    // 0x8080018C: addiu       $s1, $sp, 0x3C
    ctx->r17 = ADD32(ctx->r29, 0X3C);
L_80800190:
    // 0x80800190: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80800194: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800198: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x8080019C: jalr        $t9
    // 0x808001A0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x808001A0: nop

    after_2:
    // 0x808001A4: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x808001A8: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    // 0x808001AC: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x808001B0: jal         0x8001BBA0
    // 0x808001B4: addu        $a0, $s4, $t6
    ctx->r4 = ADD32(ctx->r20, ctx->r14);
    rare_memcpy(rdram, ctx);
        goto after_3;
    // 0x808001B4: addu        $a0, $s4, $t6
    ctx->r4 = ADD32(ctx->r20, ctx->r14);
    after_3:
    // 0x808001B8: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x808001BC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x808001C0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x808001C4: addu        $t0, $t7, $t8
    ctx->r8 = ADD32(ctx->r15, ctx->r24);
    // 0x808001C8: bne         $s0, $s3, L_80800190
    if (ctx->r16 != ctx->r19) {
        // 0x808001CC: sw          $t0, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r8;
            goto L_80800190;
    }
    // 0x808001CC: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x808001D0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x808001D4: jal         0x80088708
    // 0x808001D8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    _glcrc_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x808001D8: addiu       $a1, $zero, 0x80
    ctx->r5 = ADD32(0, 0X80);
    after_4:
    // 0x808001DC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x808001E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001E4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x808001E8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x808001EC: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x808001F0: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x808001F4: jr          $ra
    // 0x808001F8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x808001F8: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void glglobaldata_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001FC: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80800200: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    // 0x80800204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800208:
    // 0x80800208: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8080020C: sb          $zero, 0x1($v1)
    MEM_B(0X1, ctx->r3) = 0;
    // 0x80800210: sb          $zero, 0x2($v1)
    MEM_B(0X2, ctx->r3) = 0;
    // 0x80800214: sb          $zero, 0x3($v1)
    MEM_B(0X3, ctx->r3) = 0;
    // 0x80800218: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8080021C: bne         $v0, $a0, L_80800208
    if (ctx->r2 != ctx->r4) {
        // 0x80800220: sb          $zero, -0x4($v1)
        MEM_B(-0X4, ctx->r3) = 0;
            goto L_80800208;
    }
    // 0x80800220: sb          $zero, -0x4($v1)
    MEM_B(-0X4, ctx->r3) = 0;
    // 0x80800224: jr          $ra
    // 0x80800228: nop

    return;
    // 0x80800228: nop

    // 0x8080022C: nop

;}
RECOMP_FUNC void glglobalsettings_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x800003C8
    // 0x8080000C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    glglobalsettings_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x8080000C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80800010: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80800014: jal         0x80000458
    // 0x80800018: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    glglobalsettings_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80800018: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8080001C: jal         0x800004F0
    // 0x80800020: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    glglobalsettings_entrypoint_8(rdram, ctx);
        goto after_2;
    // 0x80800020: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_2:
    // 0x80800024: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800028: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080002C: jr          $ra
    // 0x80800030: nop

    return;
    // 0x80800030: nop

;}
RECOMP_FUNC void func_80800034_glglobalsettings(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800034: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800038: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080003C: jal         0x800003A8
    // 0x80800040: nop

    glglobalsettings_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800040: nop

    after_0:
    // 0x80800044: jal         0x800003C8
    // 0x80800048: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    glglobalsettings_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800048: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080004C: jal         0x800004CC
    // 0x80800050: nop

    glglobalsettings_entrypoint_7(rdram, ctx);
        goto after_2;
    // 0x80800050: nop

    after_2:
    // 0x80800054: jal         0x800004F0
    // 0x80800058: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    glglobalsettings_entrypoint_8(rdram, ctx);
        goto after_3;
    // 0x80800058: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x8080005C: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80800060: jal         0x80000408
    // 0x80800064: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    glglobalsettings_entrypoint_5(rdram, ctx);
        goto after_4;
    // 0x80800064: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_4:
    // 0x80800068: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8080006C: jal         0x80000458
    // 0x80800070: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    glglobalsettings_entrypoint_6(rdram, ctx);
        goto after_5;
    // 0x80800070: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_5:
    // 0x80800074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800078: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080007C: jr          $ra
    // 0x80800080: nop

    return;
    // 0x80800080: nop

;}
RECOMP_FUNC void func_80800084_glglobalsettings(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800084: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080008C: jal         0x8001ACCC
    // 0x80800090: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x80800090: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_0:
    // 0x80800094: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800098: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080009C: jr          $ra
    // 0x808000A0: nop

    return;
    // 0x808000A0: nop

;}
RECOMP_FUNC void func_808000A4_glglobalsettings(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808000A8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x808000AC: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x808000B0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000B4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808000B8: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x808000BC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808000C0: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x808000C4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_808000C8:
    // 0x808000C8: jal         0x800884B0
    // 0x808000CC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    _glgamestore_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808000CC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x808000D0: beq         $v0, $zero, L_808000E4
    if (ctx->r2 == 0) {
        // 0x808000D4: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_808000E4;
    }
    // 0x808000D4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x808000D8: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x808000DC: bnel        $s0, $zero, L_808000C8
    if (ctx->r16 != 0) {
        // 0x808000E0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_808000C8;
    }
    goto skip_0;
    // 0x808000E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_808000E4:
    // 0x808000E4: beq         $v0, $zero, L_808000F8
    if (ctx->r2 == 0) {
        // 0x808000E8: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_808000F8;
    }
    // 0x808000E8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808000EC: jal         0x800885C8
    // 0x808000F0: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    _glglobaldata_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x808000F0: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_1:
    // 0x808000F4: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_808000F8:
    // 0x808000F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808000FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800100: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800104: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80800108: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080010C: jr          $ra
    // 0x80800110: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80800110: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80800114_glglobalsettings(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800114: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800118: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8080011C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80800120: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800124: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800128: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080012C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80800130: addiu       $s2, $zero, 0x2
    ctx->r18 = ADD32(0, 0X2);
L_80800134:
    // 0x80800134: beql        $s0, $s1, L_80800148
    if (ctx->r16 == ctx->r17) {
        // 0x80800138: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80800148;
    }
    goto skip_0;
    // 0x80800138: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    skip_0:
    // 0x8080013C: jal         0x800884D0
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _glgamestore_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80800144: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
L_80800148:
    // 0x80800148: bne         $s0, $s2, L_80800134
    if (ctx->r16 != ctx->r18) {
        // 0x8080014C: nop
    
            goto L_80800134;
    }
    // 0x8080014C: nop

    // 0x80800150: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800154: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800158: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8080015C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80800160: jr          $ra
    // 0x80800164: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800164: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80800168_glglobalsettings(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800168: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080016C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800170: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80800174: or          $s3, $a0, $zero
    ctx->r19 = ctx->r4 | 0;
    // 0x80800178: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8080017C: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80800180: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80800184: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800188: jal         0x80000084
    // 0x8080018C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80800084_glglobalsettings(rdram, ctx);
        goto after_0;
    // 0x8080018C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800190: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800194: addiu       $s5, $zero, -0x1
    ctx->r21 = ADD32(0, -0X1);
    // 0x80800198: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8080019C: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x808001A0: addiu       $s4, $zero, 0x2
    ctx->r20 = ADD32(0, 0X2);
    // 0x808001A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808001A8:
    // 0x808001A8: jal         0x800000A4
    // 0x808001AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_808000A4_glglobalsettings(rdram, ctx);
        goto after_1;
    // 0x808001AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x808001B0: bne         $v0, $zero, L_808001C8
    if (ctx->r2 != 0) {
        // 0x808001B4: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_808001C8;
    }
    // 0x808001B4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x808001B8: lw          $s1, 0x0($s3)
    ctx->r17 = MEM_W(ctx->r19, 0X0);
    // 0x808001BC: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x808001C0: or          $s5, $s0, $zero
    ctx->r21 = ctx->r16 | 0;
    // 0x808001C4: sw          $v0, 0x0($s3)
    MEM_W(0X0, ctx->r19) = ctx->r2;
L_808001C8:
    // 0x808001C8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x808001CC: bnel        $s0, $s4, L_808001A8
    if (ctx->r16 != ctx->r20) {
        // 0x808001D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001A8;
    }
    goto skip_0;
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808001D4: slti        $at, $s2, 0x2
    ctx->r1 = SIGNED(ctx->r18) < 0X2 ? 1 : 0;
    // 0x808001D8: bne         $at, $zero, L_808001E8
    if (ctx->r1 != 0) {
        // 0x808001DC: nop
    
            goto L_808001E8;
    }
    // 0x808001DC: nop

    // 0x808001E0: jal         0x80000114
    // 0x808001E4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80800114_glglobalsettings(rdram, ctx);
        goto after_2;
    // 0x808001E4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_2:
L_808001E8:
    // 0x808001E8: jal         0x8001B084
    // 0x808001EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8001B084(rdram, ctx);
        goto after_3;
    // 0x808001EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x808001F0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x808001F4: or          $v0, $s5, $zero
    ctx->r2 = ctx->r21 | 0;
    // 0x808001F8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x808001FC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800200: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800204: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80800208: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8080020C: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80800210: jr          $ra
    // 0x80800214: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80800214: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void glglobalsettings_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800218: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080021C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800220: jal         0x80000084
    // 0x80800224: nop

    func_80800084_glglobalsettings(rdram, ctx);
        goto after_0;
    // 0x80800224: nop

    after_0:
    // 0x80800228: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8080022C: jal         0x80000168
    // 0x80800230: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_80800168_glglobalsettings(rdram, ctx);
        goto after_1;
    // 0x80800230: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_1:
    // 0x80800234: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80800238: bne         $v0, $at, L_80800250
    if (ctx->r2 != ctx->r1) {
        // 0x8080023C: nop
    
            goto L_80800250;
    }
    // 0x8080023C: nop

    // 0x80800240: jal         0x80000000
    // 0x80800244: nop

    glglobalsettings_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x80800244: nop

    after_2:
    // 0x80800248: b           L_80800260
    // 0x8080024C: nop

        goto L_80800260;
    // 0x8080024C: nop

L_80800250:
    // 0x80800250: jal         0x800885B8
    // 0x80800254: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _glglobaldata_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x80800254: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x80800258: jal         0x80000034
    // 0x8080025C: nop

    func_80800034_glglobalsettings(rdram, ctx);
        goto after_4;
    // 0x8080025C: nop

    after_4:
L_80800260:
    // 0x80800260: jal         0x8001B084
    // 0x80800264: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001B084(rdram, ctx);
        goto after_5;
    // 0x80800264: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_5:
    // 0x80800268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080026C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800270: jr          $ra
    // 0x80800274: nop

    return;
    // 0x80800274: nop

;}
RECOMP_FUNC void func_80800278_glglobalsettings(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800278: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080027C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80800280: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80800284: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80800288: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080028C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80800290: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x80800294: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80800298: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8080029C: jal         0x80000084
    // 0x808002A0: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    func_80800084_glglobalsettings(rdram, ctx);
        goto after_0;
    // 0x808002A0: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    after_0:
    // 0x808002A4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x808002A8: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_808002AC:
    // 0x808002AC: jal         0x800884C0
    // 0x808002B0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    _glgamestore_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x808002B0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_1:
    // 0x808002B4: bne         $v0, $zero, L_808002C8
    if (ctx->r2 != 0) {
        // 0x808002B8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_808002C8;
    }
    // 0x808002B8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808002BC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808002C0: jal         0x800000A4
    // 0x808002C4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_808000A4_glglobalsettings(rdram, ctx);
        goto after_2;
    // 0x808002C4: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
L_808002C8:
    // 0x808002C8: beq         $s1, $zero, L_808002D8
    if (ctx->r17 == 0) {
        // 0x808002CC: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_808002D8;
    }
    // 0x808002CC: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x808002D0: bnel        $s0, $zero, L_808002AC
    if (ctx->r16 != 0) {
        // 0x808002D4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_808002AC;
    }
    goto skip_0;
    // 0x808002D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
L_808002D8:
    // 0x808002D8: jal         0x8001B084
    // 0x808002DC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8001B084(rdram, ctx);
        goto after_3;
    // 0x808002DC: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x808002E0: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x808002E4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x808002E8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x808002EC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002F0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x808002F4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x808002F8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x808002FC: jr          $ra
    // 0x80800300: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80800300: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void glglobalsettings_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800304: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800308: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080030C: jal         0x800DA298
    // 0x80800310: addiu       $a0, $zero, 0xD54
    ctx->r4 = ADD32(0, 0XD54);
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x80800310: addiu       $a0, $zero, 0xD54
    ctx->r4 = ADD32(0, 0XD54);
    after_0:
    // 0x80800314: bne         $v0, $zero, L_80800324
    if (ctx->r2 != 0) {
        // 0x80800318: nop
    
            goto L_80800324;
    }
    // 0x80800318: nop

    // 0x8080031C: b           L_80800398
    // 0x80800320: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800398;
    // 0x80800320: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800324:
    // 0x80800324: jal         0x80000084
    // 0x80800328: nop

    func_80800084_glglobalsettings(rdram, ctx);
        goto after_1;
    // 0x80800328: nop

    after_1:
    // 0x8080032C: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80800330: jal         0x80000168
    // 0x80800334: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    func_80800168_glglobalsettings(rdram, ctx);
        goto after_2;
    // 0x80800334: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    after_2:
    // 0x80800338: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080033C: jal         0x800885C0
    // 0x80800340: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    _glglobaldata_entrypoint_3(rdram, ctx);
        goto after_3;
    // 0x80800340: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_3:
    // 0x80800344: lw          $v1, 0x20($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X20);
    // 0x80800348: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8080034C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80800350:
    // 0x80800350: bnel        $a0, $v1, L_80800368
    if (ctx->r4 != ctx->r3) {
        // 0x80800354: lw          $a1, 0x18($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X18);
            goto L_80800368;
    }
    goto skip_0;
    // 0x80800354: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x80800358: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8080035C: bne         $a0, $v0, L_80800350
    if (ctx->r4 != ctx->r2) {
        // 0x80800360: nop
    
            goto L_80800350;
    }
    // 0x80800360: nop

    // 0x80800364: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
L_80800368:
    // 0x80800368: jal         0x80000278
    // 0x8080036C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    func_80800278_glglobalsettings(rdram, ctx);
        goto after_4;
    // 0x8080036C: sw          $a0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r4;
    after_4:
    // 0x80800370: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80800374: bne         $v0, $zero, L_8080038C
    if (ctx->r2 != 0) {
        // 0x80800378: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_8080038C;
    }
    // 0x80800378: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8080037C: jal         0x80000114
    // 0x80800380: nop

    func_80800114_glglobalsettings(rdram, ctx);
        goto after_5;
    // 0x80800380: nop

    after_5:
    // 0x80800384: jal         0x800DA524
    // 0x80800388: addiu       $a0, $zero, 0xD54
    ctx->r4 = ADD32(0, 0XD54);
    func_800DA524(rdram, ctx);
        goto after_6;
    // 0x80800388: addiu       $a0, $zero, 0xD54
    ctx->r4 = ADD32(0, 0XD54);
    after_6:
L_8080038C:
    // 0x8080038C: jal         0x8001B084
    // 0x80800390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8001B084(rdram, ctx);
        goto after_7;
    // 0x80800390: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_7:
    // 0x80800394: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_80800398:
    // 0x80800398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080039C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808003A0: jr          $ra
    // 0x808003A4: nop

    return;
    // 0x808003A4: nop

;}
RECOMP_FUNC void glglobalsettings_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003B0: jal         0x800DA298
    // 0x808003B4: addiu       $a0, $zero, 0xBB9
    ctx->r4 = ADD32(0, 0XBB9);
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x808003B4: addiu       $a0, $zero, 0xBB9
    ctx->r4 = ADD32(0, 0XBB9);
    after_0:
    // 0x808003B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003C0: jr          $ra
    // 0x808003C4: nop

    return;
    // 0x808003C4: nop

;}
RECOMP_FUNC void glglobalsettings_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003D0: jal         0x800157E0
    // 0x808003D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800157E0(rdram, ctx);
        goto after_0;
    // 0x808003D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808003D8: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x808003DC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808003E0: beq         $t6, $zero, L_808003F0
    if (ctx->r14 == 0) {
        // 0x808003E4: nop
    
            goto L_808003F0;
    }
    // 0x808003E4: nop

    // 0x808003E8: b           L_808003F0
    // 0x808003EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_808003F0;
    // 0x808003EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_808003F0:
    // 0x808003F0: jal         0x800DA3B8
    // 0x808003F4: addiu       $a0, $zero, 0xBB9
    ctx->r4 = ADD32(0, 0XBB9);
    func_800DA3B8(rdram, ctx);
        goto after_1;
    // 0x808003F4: addiu       $a0, $zero, 0xBB9
    ctx->r4 = ADD32(0, 0XBB9);
    after_1:
    // 0x808003F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800400: jr          $ra
    // 0x80800404: nop

    return;
    // 0x80800404: nop

;}
RECOMP_FUNC void glglobalsettings_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800408: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080040C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800410: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800414: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800418: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x8080041C: jal         0x800DA564
    // 0x80800420: addiu       $a0, $zero, 0xBBA
    ctx->r4 = ADD32(0, 0XBBA);
    func_800DA564(rdram, ctx);
        goto after_0;
    // 0x80800420: addiu       $a0, $zero, 0xBBA
    ctx->r4 = ADD32(0, 0XBBA);
    after_0:
    // 0x80800424: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80800428: addiu       $t6, $v0, -0x20
    ctx->r14 = ADD32(ctx->r2, -0X20);
    // 0x8080042C: addiu       $a0, $zero, 0xBC0
    ctx->r4 = ADD32(0, 0XBC0);
    // 0x80800430: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    // 0x80800434: jal         0x800DA564
    // 0x80800438: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    func_800DA564(rdram, ctx);
        goto after_1;
    // 0x80800438: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    after_1:
    // 0x8080043C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80800440: addiu       $t8, $v0, -0x28
    ctx->r24 = ADD32(ctx->r2, -0X28);
    // 0x80800444: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80800448: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080044C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800450: jr          $ra
    // 0x80800454: nop

    return;
    // 0x80800454: nop

;}
RECOMP_FUNC void glglobalsettings_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800458: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080045C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800460: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800464: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80800468: jal         0x80015670
    // 0x8080046C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80015670(rdram, ctx);
        goto after_0;
    // 0x8080046C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800470: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80800474: addiu       $s0, $s0, 0x28
    ctx->r16 = ADD32(ctx->r16, 0X28);
    // 0x80800478: addiu       $a0, $zero, 0xBBA
    ctx->r4 = ADD32(0, 0XBBA);
    // 0x8080047C: addiu       $a3, $a3, 0x20
    ctx->r7 = ADD32(ctx->r7, 0X20);
    // 0x80800480: slti        $at, $a3, 0x40
    ctx->r1 = SIGNED(ctx->r7) < 0X40 ? 1 : 0;
    // 0x80800484: bne         $at, $zero, L_80800490
    if (ctx->r1 != 0) {
        // 0x80800488: addiu       $a2, $zero, 0x6
        ctx->r6 = ADD32(0, 0X6);
            goto L_80800490;
    }
    // 0x80800488: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x8080048C: addiu       $a3, $zero, 0x3F
    ctx->r7 = ADD32(0, 0X3F);
L_80800490:
    // 0x80800490: slti        $at, $s0, 0x40
    ctx->r1 = SIGNED(ctx->r16) < 0X40 ? 1 : 0;
    // 0x80800494: bne         $at, $zero, L_808004A0
    if (ctx->r1 != 0) {
        // 0x80800498: nop
    
            goto L_808004A0;
    }
    // 0x80800498: nop

    // 0x8080049C: addiu       $s0, $zero, 0x3F
    ctx->r16 = ADD32(0, 0X3F);
L_808004A0:
    // 0x808004A0: jal         0x800DA7A8
    // 0x808004A4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_800DA7A8(rdram, ctx);
        goto after_1;
    // 0x808004A4: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_1:
    // 0x808004A8: addiu       $a0, $zero, 0xBC0
    ctx->r4 = ADD32(0, 0XBC0);
    // 0x808004AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x808004B0: jal         0x800DA7A8
    // 0x808004B4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    func_800DA7A8(rdram, ctx);
        goto after_2;
    // 0x808004B4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    after_2:
    // 0x808004B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808004BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808004C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004C4: jr          $ra
    // 0x808004C8: nop

    return;
    // 0x808004C8: nop

;}
RECOMP_FUNC void glglobalsettings_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004D4: addiu       $a0, $zero, 0xBC6
    ctx->r4 = ADD32(0, 0XBC6);
    // 0x808004D8: jal         0x800DA564
    // 0x808004DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800DA564(rdram, ctx);
        goto after_0;
    // 0x808004DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x808004E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004E8: jr          $ra
    // 0x808004EC: nop

    return;
    // 0x808004EC: nop

;}
RECOMP_FUNC void glglobalsettings_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808004F4: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(700, 0X560) << 16);
    // 0x808004F8: addiu       $t8, $t8, 0x560
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(700, 0X560));
    // 0x808004FC: sll         $t7, $a0, 2
    ctx->r15 = S32(ctx->r4 << 2);
    // 0x80800500: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800504: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800508: addu        $v0, $t7, $t8
    ctx->r2 = ADD32(ctx->r15, ctx->r24);
    // 0x8080050C: lh          $a0, 0x0($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X0);
    // 0x80800510: jal         0x80012F0C
    // 0x80800514: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80012F0C(rdram, ctx);
        goto after_0;
    // 0x80800514: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_0:
    // 0x80800518: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8080051C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80800520: jal         0x80012F34
    // 0x80800524: lh          $a1, 0x2($t9)
    ctx->r5 = MEM_H(ctx->r25, 0X2);
    func_80012F34(rdram, ctx);
        goto after_1;
    // 0x80800524: lh          $a1, 0x2($t9)
    ctx->r5 = MEM_H(ctx->r25, 0X2);
    after_1:
    // 0x80800528: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8080052C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80800530: jal         0x80012F34
    // 0x80800534: lh          $a1, 0x2($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X2);
    func_80012F34(rdram, ctx);
        goto after_2;
    // 0x80800534: lh          $a1, 0x2($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X2);
    after_2:
    // 0x80800538: addiu       $a0, $zero, 0xBC6
    ctx->r4 = ADD32(0, 0XBC6);
    // 0x8080053C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80800540: jal         0x800DA7A8
    // 0x80800544: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_800DA7A8(rdram, ctx);
        goto after_3;
    // 0x80800544: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x80800548: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080054C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800550: jr          $ra
    // 0x80800554: nop

    return;
    // 0x80800554: nop

    // 0x80800558: nop

    // 0x8080055C: nop

;}
RECOMP_FUNC void glhittableDll_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x800D8F40
    // 0x8080000C: nop

    func_800D8F40(rdram, ctx);
        goto after_0;
    // 0x8080000C: nop

    after_0:
    // 0x80800010: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800014: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80800018: addiu       $t1, $zero, 0x398
    ctx->r9 = ADD32(0, 0X398);
    // 0x8080001C: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
L_80800020:
    // 0x80800020: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(701, 0X530) << 16);
    // 0x80800024: addiu       $t7, $t7, 0x530
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(701, 0X530));
    // 0x80800028: sll         $t6, $zero, 6
    ctx->r14 = S32(0 << 6);
    // 0x8080002C: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80800030: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80800034: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800038: sh          $t0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r8;
    // 0x8080003C: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
L_80800040:
    // 0x80800040: bnel        $a2, $t8, L_80800054
    if (ctx->r6 != ctx->r24) {
        // 0x80800044: addiu       $a0, $a0, 0x1
        ctx->r4 = ADD32(ctx->r4, 0X1);
            goto L_80800054;
    }
    goto skip_0;
    // 0x80800044: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    skip_0:
    // 0x80800048: sh          $a0, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r4;
    // 0x8080004C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800050: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
L_80800054:
    // 0x80800054: slti        $at, $a0, 0x99
    ctx->r1 = SIGNED(ctx->r4) < 0X99 ? 1 : 0;
    // 0x80800058: beq         $at, $zero, L_80800068
    if (ctx->r1 == 0) {
        // 0x8080005C: addiu       $v1, $v1, 0x44
        ctx->r3 = ADD32(ctx->r3, 0X44);
            goto L_80800068;
    }
    // 0x8080005C: addiu       $v1, $v1, 0x44
    ctx->r3 = ADD32(ctx->r3, 0X44);
    // 0x80800060: beql        $a1, $zero, L_80800040
    if (ctx->r5 == 0) {
        // 0x80800064: lhu         $t8, 0x0($v1)
        ctx->r24 = MEM_HU(ctx->r3, 0X0);
            goto L_80800040;
    }
    goto skip_1;
    // 0x80800064: lhu         $t8, 0x0($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X0);
    skip_1:
L_80800068:
    // 0x80800068: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8080006C: bne         $a2, $t1, L_80800020
    if (ctx->r6 != ctx->r9) {
        // 0x80800070: addiu       $a3, $a3, 0x2
        ctx->r7 = ADD32(ctx->r7, 0X2);
            goto L_80800020;
    }
    // 0x80800070: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80800074: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800078: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080007C: jr          $ra
    // 0x80800080: nop

    return;
    // 0x80800080: nop

;}
RECOMP_FUNC void glhittableDll_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800084: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800088: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080008C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800090: jal         0x80000174
    // 0x80800094: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    glhittableDll_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800094: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800098: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8080009C: bne         $v0, $at, L_808000AC
    if (ctx->r2 != ctx->r1) {
        // 0x808000A0: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_808000AC;
    }
    // 0x808000A0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x808000A4: b           L_808000E0
    // 0x808000A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808000E0;
    // 0x808000A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_808000AC:
    // 0x808000AC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x808000B0: bne         $v0, $at, L_808000C0
    if (ctx->r2 != ctx->r1) {
        // 0x808000B4: lw          $a0, 0x24($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X24);
            goto L_808000C0;
    }
    // 0x808000B4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x808000B8: b           L_808000E0
    // 0x808000BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_808000E0;
    // 0x808000BC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808000C0:
    // 0x808000C0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x808000C4: jal         0x800EB2DC
    // 0x808000C8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    func_800EB2DC(rdram, ctx);
        goto after_1;
    // 0x808000C8: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    after_1:
    // 0x808000CC: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x808000D0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808000D4: jal         0x800EB2DC
    // 0x808000D8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_800EB2DC(rdram, ctx);
        goto after_2;
    // 0x808000D8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x808000DC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_808000E0:
    // 0x808000E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000E8: jr          $ra
    // 0x808000EC: nop

    return;
    // 0x808000EC: nop

;}
RECOMP_FUNC void glhittableDll_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F0: addiu       $v0, $a0, 0x1
    ctx->r2 = ADD32(ctx->r4, 0X1);
    // 0x808000F4: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
    // 0x808000F8: beq         $v0, $zero, L_80800108
    if (ctx->r2 == 0) {
        // 0x808000FC: nop
    
            goto L_80800108;
    }
    // 0x808000FC: nop

    // 0x80800100: addiu       $v0, $a0, 0x2
    ctx->r2 = ADD32(ctx->r4, 0X2);
    // 0x80800104: sltu        $v0, $zero, $v0
    ctx->r2 = 0 < ctx->r2 ? 1 : 0;
L_80800108:
    // 0x80800108: jr          $ra
    // 0x8080010C: nop

    return;
    // 0x8080010C: nop

;}
RECOMP_FUNC void glhittableDll_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800110: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800114: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80800118: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080011C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800120: bne         $a2, $at, L_80800130
    if (ctx->r6 != ctx->r1) {
        // 0x80800124: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_80800130;
    }
    // 0x80800124: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800128: b           L_80800164
    // 0x8080012C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80800164;
    // 0x8080012C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800130:
    // 0x80800130: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80800134: bne         $a2, $at, L_80800144
    if (ctx->r6 != ctx->r1) {
        // 0x80800138: lw          $a0, 0x1C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X1C);
            goto L_80800144;
    }
    // 0x80800138: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8080013C: b           L_80800164
    // 0x80800140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800164;
    // 0x80800140: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800144:
    // 0x80800144: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80800148: jal         0x800EB2DC
    // 0x8080014C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800EB2DC(rdram, ctx);
        goto after_0;
    // 0x8080014C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800150: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80800154: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800158: jal         0x800EB2DC
    // 0x8080015C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_800EB2DC(rdram, ctx);
        goto after_1;
    // 0x8080015C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80800160: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800164:
    // 0x80800164: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800168: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080016C: jr          $ra
    // 0x80800170: nop

    return;
    // 0x80800170: nop

;}
RECOMP_FUNC void glhittableDll_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800174: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800178: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8080017C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80800180: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80800184: or          $s6, $a1, $zero
    ctx->r22 = ctx->r5 | 0;
    // 0x80800188: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x8080018C: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80800190: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80800194: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80800198: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8080019C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808001A0: jal         0x800D8F40
    // 0x808001A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_800D8F40(rdram, ctx);
        goto after_0;
    // 0x808001A4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x808001A8: lw          $t6, 0x24($s6)
    ctx->r14 = MEM_W(ctx->r22, 0X24);
    // 0x808001AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x808001B0: lui         $t4, 0x0
    ctx->r12 = S32(RELOC_HI16(701, 0X530) << 16);
    // 0x808001B4: srl         $t7, $t6, 22
    ctx->r15 = S32(U32(ctx->r14) >> 22);
    // 0x808001B8: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x808001BC: addu        $t9, $v0, $t8
    ctx->r25 = ADD32(ctx->r2, ctx->r24);
    // 0x808001C0: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x808001C4: addiu       $t4, $t4, 0x530
    ctx->r12 = ADD32(ctx->r12, (int16_t)RELOC_LO16(701, 0X530));
    // 0x808001C8: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x808001CC: bne         $t0, $at, L_808001DC
    if (ctx->r8 != ctx->r1) {
        // 0x808001D0: sw          $t0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r8;
            goto L_808001DC;
    }
    // 0x808001D0: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
    // 0x808001D4: b           L_80800260
    // 0x808001D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80800260;
    // 0x808001D8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_808001DC:
    // 0x808001DC: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x808001E0: lui         $s4, 0x0
    ctx->r20 = S32(RELOC_HI16(701, 0X2DD4) << 16);
    // 0x808001E4: addiu       $s4, $s4, 0x2DD4
    ctx->r20 = ADD32(ctx->r20, (int16_t)RELOC_LO16(701, 0X2DD4));
    // 0x808001E8: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x808001EC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x808001F0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x808001F4: addu        $s3, $t3, $t4
    ctx->r19 = ADD32(ctx->r11, ctx->r12);
    // 0x808001F8: or          $s0, $s3, $zero
    ctx->r16 = ctx->r19 | 0;
    // 0x808001FC: addiu       $s5, $zero, 0x20
    ctx->r21 = ADD32(0, 0X20);
L_80800200:
    // 0x80800200: lhu         $t5, 0x2($s3)
    ctx->r13 = MEM_HU(ctx->r19, 0X2);
    // 0x80800204: lhu         $t6, 0x4($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X4);
    // 0x80800208: sll         $t7, $s2, 3
    ctx->r15 = S32(ctx->r18 << 3);
    // 0x8080020C: addu        $s1, $s4, $t7
    ctx->r17 = ADD32(ctx->r20, ctx->r15);
    // 0x80800210: or          $v0, $t5, $t6
    ctx->r2 = ctx->r13 | ctx->r14;
    // 0x80800214: beql        $v0, $zero, L_80800254
    if (ctx->r2 == 0) {
        // 0x80800218: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80800254;
    }
    goto skip_0;
    // 0x80800218: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_0:
    // 0x8080021C: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80800220: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80800224: or          $a1, $s6, $zero
    ctx->r5 = ctx->r22 | 0;
    // 0x80800228: jalr        $t9
    // 0x8080022C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8080022C: nop

    after_1:
    // 0x80800230: lw          $t8, 0x4($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X4);
    // 0x80800234: bnel        $v0, $t8, L_80800254
    if (ctx->r2 != ctx->r24) {
        // 0x80800238: addiu       $s2, $s2, 0x1
        ctx->r18 = ADD32(ctx->r18, 0X1);
            goto L_80800254;
    }
    goto skip_1;
    // 0x80800238: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    skip_1:
    // 0x8080023C: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80800240: andi        $t2, $s2, 0xFFFF
    ctx->r10 = ctx->r18 & 0XFFFF;
    // 0x80800244: sll         $t1, $t0, 16
    ctx->r9 = S32(ctx->r8 << 16);
    // 0x80800248: b           L_80800260
    // 0x8080024C: or          $v0, $t1, $t2
    ctx->r2 = ctx->r9 | ctx->r10;
        goto L_80800260;
    // 0x8080024C: or          $v0, $t1, $t2
    ctx->r2 = ctx->r9 | ctx->r10;
    // 0x80800250: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
L_80800254:
    // 0x80800254: bne         $s2, $s5, L_80800200
    if (ctx->r18 != ctx->r21) {
        // 0x80800258: addiu       $s0, $s0, 0x2
        ctx->r16 = ADD32(ctx->r16, 0X2);
            goto L_80800200;
    }
    // 0x80800258: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x8080025C: addiu       $v0, $zero, -0x2
    ctx->r2 = ADD32(0, -0X2);
L_80800260:
    // 0x80800260: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80800264: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800268: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8080026C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80800270: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80800274: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80800278: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x8080027C: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x80800280: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x80800284: jr          $ra
    // 0x80800288: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80800288: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void glhittableDll_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080028C: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80800290: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80800294: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80800298: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8080029C: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(701, 0X530) << 16);
    // 0x808002A0: addiu       $t9, $t9, 0x530
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(701, 0X530));
    // 0x808002A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x808002A8: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x808002AC: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x808002B0: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x808002B4: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x808002B8: lhu         $t3, 0x4($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X4);
    // 0x808002BC: lhu         $t5, 0x2($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X2);
    // 0x808002C0: srl         $t4, $t3, 12
    ctx->r12 = S32(U32(ctx->r11) >> 12);
    // 0x808002C4: srl         $t6, $t5, 12
    ctx->r14 = S32(U32(ctx->r13) >> 12);
    // 0x808002C8: jr          $ra
    // 0x808002CC: or          $v0, $t4, $t6
    ctx->r2 = ctx->r12 | ctx->r14;
    return;
    // 0x808002CC: or          $v0, $t4, $t6
    ctx->r2 = ctx->r12 | ctx->r14;
;}
RECOMP_FUNC void glhittableDll_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002D0: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x808002D4: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x808002D8: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x808002DC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x808002E0: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(701, 0X530) << 16);
    // 0x808002E4: addiu       $t9, $t9, 0x530
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(701, 0X530));
    // 0x808002E8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x808002EC: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x808002F0: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x808002F4: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x808002F8: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x808002FC: lhu         $t3, 0x4($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X4);
    // 0x80800300: lhu         $t6, 0x2($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X2);
    // 0x80800304: sll         $t4, $t3, 20
    ctx->r12 = S32(ctx->r11 << 20);
    // 0x80800308: sll         $t7, $t6, 20
    ctx->r15 = S32(ctx->r14 << 20);
    // 0x8080030C: srl         $t8, $t7, 30
    ctx->r24 = S32(U32(ctx->r15) >> 30);
    // 0x80800310: srl         $t5, $t4, 30
    ctx->r13 = S32(U32(ctx->r12) >> 30);
    // 0x80800314: jr          $ra
    // 0x80800318: or          $v0, $t5, $t8
    ctx->r2 = ctx->r13 | ctx->r24;
    return;
    // 0x80800318: or          $v0, $t5, $t8
    ctx->r2 = ctx->r13 | ctx->r24;
;}
RECOMP_FUNC void glhittableDll_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080031C: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80800320: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80800324: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80800328: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8080032C: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(701, 0X530) << 16);
    // 0x80800330: addiu       $t9, $t9, 0x530
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(701, 0X530));
    // 0x80800334: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80800338: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x8080033C: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80800340: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80800344: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x80800348: lhu         $t3, 0x4($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X4);
    // 0x8080034C: lhu         $t6, 0x2($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X2);
    // 0x80800350: sll         $t4, $t3, 22
    ctx->r12 = S32(ctx->r11 << 22);
    // 0x80800354: sll         $t7, $t6, 22
    ctx->r15 = S32(ctx->r14 << 22);
    // 0x80800358: srl         $t8, $t7, 29
    ctx->r24 = S32(U32(ctx->r15) >> 29);
    // 0x8080035C: srl         $t5, $t4, 29
    ctx->r13 = S32(U32(ctx->r12) >> 29);
    // 0x80800360: jr          $ra
    // 0x80800364: or          $v0, $t5, $t8
    ctx->r2 = ctx->r13 | ctx->r24;
    return;
    // 0x80800364: or          $v0, $t5, $t8
    ctx->r2 = ctx->r13 | ctx->r24;
;}
RECOMP_FUNC void glhittableDll_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800368: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8080036C: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80800370: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80800374: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80800378: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(701, 0X530) << 16);
    // 0x8080037C: addiu       $t9, $t9, 0x530
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(701, 0X530));
    // 0x80800380: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80800384: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x80800388: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8080038C: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80800390: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x80800394: lhu         $t3, 0x4($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X4);
    // 0x80800398: lhu         $t6, 0x2($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X2);
    // 0x8080039C: sll         $t4, $t3, 25
    ctx->r12 = S32(ctx->r11 << 25);
    // 0x808003A0: sll         $t7, $t6, 25
    ctx->r15 = S32(ctx->r14 << 25);
    // 0x808003A4: srl         $t8, $t7, 30
    ctx->r24 = S32(U32(ctx->r15) >> 30);
    // 0x808003A8: srl         $t5, $t4, 30
    ctx->r13 = S32(U32(ctx->r12) >> 30);
    // 0x808003AC: jr          $ra
    // 0x808003B0: or          $v0, $t5, $t8
    ctx->r2 = ctx->r13 | ctx->r24;
    return;
    // 0x808003B0: or          $v0, $t5, $t8
    ctx->r2 = ctx->r13 | ctx->r24;
;}
RECOMP_FUNC void glhittableDll_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003B4: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x808003B8: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x808003BC: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x808003C0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x808003C4: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(701, 0X530) << 16);
    // 0x808003C8: addiu       $t9, $t9, 0x530
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(701, 0X530));
    // 0x808003CC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x808003D0: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x808003D4: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x808003D8: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x808003DC: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x808003E0: lhu         $t3, 0x4($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X4);
    // 0x808003E4: lhu         $t6, 0x2($v1)
    ctx->r14 = MEM_HU(ctx->r3, 0X2);
    // 0x808003E8: sll         $t4, $t3, 27
    ctx->r12 = S32(ctx->r11 << 27);
    // 0x808003EC: sll         $t7, $t6, 27
    ctx->r15 = S32(ctx->r14 << 27);
    // 0x808003F0: srl         $t8, $t7, 29
    ctx->r24 = S32(U32(ctx->r15) >> 29);
    // 0x808003F4: srl         $t5, $t4, 29
    ctx->r13 = S32(U32(ctx->r12) >> 29);
    // 0x808003F8: jr          $ra
    // 0x808003FC: or          $v0, $t5, $t8
    ctx->r2 = ctx->r13 | ctx->r24;
    return;
    // 0x808003FC: or          $v0, $t5, $t8
    ctx->r2 = ctx->r13 | ctx->r24;
;}
RECOMP_FUNC void glhittableDll_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800400: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80800404: andi        $t7, $t6, 0xFFFF
    ctx->r15 = ctx->r14 & 0XFFFF;
    // 0x80800408: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8080040C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80800410: lui         $t9, 0x0
    ctx->r25 = S32(RELOC_HI16(701, 0X530) << 16);
    // 0x80800414: addiu       $t9, $t9, 0x530
    ctx->r25 = ADD32(ctx->r25, (int16_t)RELOC_LO16(701, 0X530));
    // 0x80800418: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8080041C: andi        $t0, $a0, 0xFFFF
    ctx->r8 = ctx->r4 & 0XFFFF;
    // 0x80800420: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80800424: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80800428: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x8080042C: lhu         $t3, 0x4($t2)
    ctx->r11 = MEM_HU(ctx->r10, 0X4);
    // 0x80800430: lhu         $t5, 0x2($v1)
    ctx->r13 = MEM_HU(ctx->r3, 0X2);
    // 0x80800434: andi        $t4, $t3, 0x3
    ctx->r12 = ctx->r11 & 0X3;
    // 0x80800438: andi        $t6, $t5, 0x3
    ctx->r14 = ctx->r13 & 0X3;
    // 0x8080043C: jr          $ra
    // 0x80800440: or          $v0, $t4, $t6
    ctx->r2 = ctx->r12 | ctx->r14;
    return;
    // 0x80800440: or          $v0, $t4, $t6
    ctx->r2 = ctx->r12 | ctx->r14;
;}
RECOMP_FUNC void func_80800444_glhittableDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800444: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800448: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080044C: beq         $a0, $zero, L_808004C4
    if (ctx->r4 == 0) {
        // 0x80800450: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_808004C4;
    }
    // 0x80800450: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80800454: lw          $t6, 0x24($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X24);
    // 0x80800458: srl         $t7, $t6, 22
    ctx->r15 = S32(U32(ctx->r14) >> 22);
    // 0x8080045C: bnel        $t7, $zero, L_808004B8
    if (ctx->r15 != 0) {
        // 0x80800460: lw          $v0, 0x24($a2)
        ctx->r2 = MEM_W(ctx->r6, 0X24);
            goto L_808004B8;
    }
    goto skip_0;
    // 0x80800460: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
    skip_0:
    // 0x80800464: lhu         $a0, 0x1A($a0)
    ctx->r4 = MEM_HU(ctx->r4, 0X1A);
    // 0x80800468: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8080046C: srl         $t8, $a0, 5
    ctx->r24 = S32(U32(ctx->r4) >> 5);
    // 0x80800470: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80800474: jal         0x800F52B8
    // 0x80800478: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_800F52B8(rdram, ctx);
        goto after_0;
    // 0x80800478: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_0:
    // 0x8080047C: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80800480: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80800484: bne         $v0, $at, L_80800494
    if (ctx->r2 != ctx->r1) {
        // 0x80800488: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_80800494;
    }
    // 0x80800488: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8080048C: b           L_808004C8
    // 0x80800490: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_808004C8;
    // 0x80800490: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80800494:
    // 0x80800494: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    // 0x80800498: ori         $a1, $a1, 0x2000
    ctx->r5 = ctx->r5 | 0X2000;
    // 0x8080049C: jal         0x800F64A4
    // 0x808004A0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800F64A4(rdram, ctx);
        goto after_1;
    // 0x808004A0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x808004A4: beq         $v0, $zero, L_808004B4
    if (ctx->r2 == 0) {
        // 0x808004A8: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_808004B4;
    }
    // 0x808004A8: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x808004AC: b           L_808004C8
    // 0x808004B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_808004C8;
    // 0x808004B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_808004B4:
    // 0x808004B4: lw          $v0, 0x24($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X24);
L_808004B8:
    // 0x808004B8: srl         $t9, $v0, 22
    ctx->r25 = S32(U32(ctx->r2) >> 22);
    // 0x808004BC: b           L_808004C8
    // 0x808004C0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
        goto L_808004C8;
    // 0x808004C0: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
L_808004C4:
    // 0x808004C4: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_808004C8:
    // 0x808004C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808004D0: jr          $ra
    // 0x808004D4: nop

    return;
    // 0x808004D4: nop

;}
RECOMP_FUNC void func_808004D8_glhittableDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004E0: bne         $a0, $zero, L_808004F0
    if (ctx->r4 != 0) {
        // 0x808004E4: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_808004F0;
    }
    // 0x808004E4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x808004E8: b           L_8080051C
    // 0x808004EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
        goto L_8080051C;
    // 0x808004EC: addiu       $v0, $zero, 0x6
    ctx->r2 = ADD32(0, 0X6);
L_808004F0:
    // 0x808004F0: lw          $t6, 0x24($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X24);
    // 0x808004F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x808004F8: srl         $t7, $t6, 22
    ctx->r15 = S32(U32(ctx->r14) >> 22);
    // 0x808004FC: bne         $t7, $zero, L_8080051C
    if (ctx->r15 != 0) {
        // 0x80800500: nop
    
            goto L_8080051C;
    }
    // 0x80800500: nop

    // 0x80800504: lhu         $a0, 0x1A($a2)
    ctx->r4 = MEM_HU(ctx->r6, 0X1A);
    // 0x80800508: srl         $t8, $a0, 5
    ctx->r24 = S32(U32(ctx->r4) >> 5);
    // 0x8080050C: jal         0x800F52B8
    // 0x80800510: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    func_800F52B8(rdram, ctx);
        goto after_0;
    // 0x80800510: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    after_0:
    // 0x80800514: b           L_80800520
    // 0x80800518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800520;
    // 0x80800518: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080051C:
    // 0x8080051C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800520:
    // 0x80800520: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800524: jr          $ra
    // 0x80800528: nop

    return;
    // 0x80800528: nop

    // 0x8080052C: nop

;}
RECOMP_FUNC void glid_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800004: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80800008: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8080000C: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80800010: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80800014: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80800018: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8080001C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80800020: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80800024: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800028: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8080002C: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x80800030: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x80800034: jal         0x800B2190
    // 0x80800038: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    func_800B2190(rdram, ctx);
        goto after_0;
    // 0x80800038: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    after_0:
    // 0x8080003C: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    // 0x80800040: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80800044: addiu       $s1, $s2, 0x1C
    ctx->r17 = ADD32(ctx->r18, 0X1C);
    // 0x80800048: blez        $a0, L_808000D0
    if (SIGNED(ctx->r4) <= 0) {
        // 0x8080004C: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_808000D0;
    }
    // 0x8080004C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80800050:
    // 0x80800050: lh          $t6, 0x0($s1)
    ctx->r14 = MEM_H(ctx->r17, 0X0);
    // 0x80800054: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80800058: bnel        $s0, $t6, L_808000C4
    if (ctx->r16 != ctx->r14) {
        // 0x8080005C: lw          $t3, 0x4($s1)
        ctx->r11 = MEM_W(ctx->r17, 0X4);
            goto L_808000C4;
    }
    goto skip_0;
    // 0x8080005C: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
    skip_0:
    // 0x80800060: lh          $t7, 0x2($s1)
    ctx->r15 = MEM_H(ctx->r17, 0X2);
    // 0x80800064: addiu       $s0, $s1, 0x8
    ctx->r16 = ADD32(ctx->r17, 0X8);
    // 0x80800068: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8080006C: addu        $s3, $t8, $s1
    ctx->r19 = ADD32(ctx->r24, ctx->r17);
    // 0x80800070: addiu       $s3, $s3, 0x8
    ctx->r19 = ADD32(ctx->r19, 0X8);
    // 0x80800074: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x80800078: beq         $at, $zero, L_808000D0
    if (ctx->r1 == 0) {
        // 0x8080007C: or          $s2, $s3, $zero
        ctx->r18 = ctx->r19 | 0;
            goto L_808000D0;
    }
    // 0x8080007C: or          $s2, $s3, $zero
    ctx->r18 = ctx->r19 | 0;
L_80800080:
    // 0x80800080: lh          $t9, 0x0($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X0);
    // 0x80800084: lh          $a0, 0x0($s1)
    ctx->r4 = MEM_H(ctx->r17, 0X0);
    // 0x80800088: lh          $a3, 0x2($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X2);
    // 0x8080008C: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80800090: addu        $a2, $t0, $s4
    ctx->r6 = ADD32(ctx->r8, ctx->r20);
    // 0x80800094: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x80800098: jalr        $s6
    // 0x8080009C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_1;
    // 0x8080009C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
    // 0x808000A0: lh          $t1, 0x2($s0)
    ctx->r9 = MEM_H(ctx->r16, 0X2);
    // 0x808000A4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x808000A8: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x808000AC: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x808000B0: bne         $at, $zero, L_80800080
    if (ctx->r1 != 0) {
        // 0x808000B4: addu        $s2, $s2, $t2
        ctx->r18 = ADD32(ctx->r18, ctx->r10);
            goto L_80800080;
    }
    // 0x808000B4: addu        $s2, $s2, $t2
    ctx->r18 = ADD32(ctx->r18, ctx->r10);
    // 0x808000B8: b           L_808000D4
    // 0x808000BC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_808000D4;
    // 0x808000BC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x808000C0: lw          $t3, 0x4($s1)
    ctx->r11 = MEM_W(ctx->r17, 0X4);
L_808000C4:
    // 0x808000C4: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x808000C8: bne         $at, $zero, L_80800050
    if (ctx->r1 != 0) {
        // 0x808000CC: addu        $s1, $s1, $t3
        ctx->r17 = ADD32(ctx->r17, ctx->r11);
            goto L_80800050;
    }
    // 0x808000CC: addu        $s1, $s1, $t3
    ctx->r17 = ADD32(ctx->r17, ctx->r11);
L_808000D0:
    // 0x808000D0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_808000D4:
    // 0x808000D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808000D8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x808000DC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x808000E0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x808000E4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x808000E8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x808000EC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x808000F0: jr          $ra
    // 0x808000F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x808000F4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void glid_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F8: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808000FC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80800100: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800104: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80800108: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8080010C: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80800110: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80800114: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80800118: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8080011C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800120: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80800124: or          $s5, $a3, $zero
    ctx->r21 = ctx->r7 | 0;
    // 0x80800128: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x8080012C: jal         0x800B2190
    // 0x80800130: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    func_800B2190(rdram, ctx);
        goto after_0;
    // 0x80800130: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    after_0:
    // 0x80800134: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80800138: jal         0x800B2190
    // 0x8080013C: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    func_800B2190(rdram, ctx);
        goto after_1;
    // 0x8080013C: lw          $a0, 0x18($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X18);
    after_1:
    // 0x80800140: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x80800144: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80800148: addiu       $v1, $s1, 0x1C
    ctx->r3 = ADD32(ctx->r17, 0X1C);
    // 0x8080014C: blez        $a1, L_808001D4
    if (SIGNED(ctx->r5) <= 0) {
        // 0x80800150: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_808001D4;
    }
    // 0x80800150: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80800154:
    // 0x80800154: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x80800158: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x8080015C: bnel        $s0, $t6, L_808001C8
    if (ctx->r16 != ctx->r14) {
        // 0x80800160: lw          $t2, 0x4($v1)
        ctx->r10 = MEM_W(ctx->r3, 0X4);
            goto L_808001C8;
    }
    goto skip_0;
    // 0x80800160: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
    skip_0:
    // 0x80800164: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x80800168: addiu       $s0, $v1, 0x8
    ctx->r16 = ADD32(ctx->r3, 0X8);
    // 0x8080016C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80800170: addu        $s2, $t8, $v1
    ctx->r18 = ADD32(ctx->r24, ctx->r3);
    // 0x80800174: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x80800178: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8080017C: beq         $at, $zero, L_808001D4
    if (ctx->r1 == 0) {
        // 0x80800180: or          $s1, $s2, $zero
        ctx->r17 = ctx->r18 | 0;
            goto L_808001D4;
    }
    // 0x80800180: or          $s1, $s2, $zero
    ctx->r17 = ctx->r18 | 0;
L_80800184:
    // 0x80800184: lh          $v0, 0x0($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X0);
    // 0x80800188: lh          $a3, 0x2($s0)
    ctx->r7 = MEM_H(ctx->r16, 0X2);
    // 0x8080018C: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    // 0x80800190: sll         $t9, $v0, 4
    ctx->r25 = S32(ctx->r2 << 4);
    // 0x80800194: addu        $a1, $t9, $s3
    ctx->r5 = ADD32(ctx->r25, ctx->r19);
    // 0x80800198: addu        $a2, $t9, $s4
    ctx->r6 = ADD32(ctx->r25, ctx->r20);
    // 0x8080019C: jalr        $s6
    // 0x808001A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r22)(rdram, ctx);
        goto after_2;
    // 0x808001A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x808001A4: lh          $t0, 0x2($s0)
    ctx->r8 = MEM_H(ctx->r16, 0X2);
    // 0x808001A8: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x808001AC: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x808001B0: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x808001B4: bne         $at, $zero, L_80800184
    if (ctx->r1 != 0) {
        // 0x808001B8: addu        $s1, $s1, $t1
        ctx->r17 = ADD32(ctx->r17, ctx->r9);
            goto L_80800184;
    }
    // 0x808001B8: addu        $s1, $s1, $t1
    ctx->r17 = ADD32(ctx->r17, ctx->r9);
    // 0x808001BC: b           L_808001D8
    // 0x808001C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_808001D8;
    // 0x808001C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x808001C4: lw          $t2, 0x4($v1)
    ctx->r10 = MEM_W(ctx->r3, 0X4);
L_808001C8:
    // 0x808001C8: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x808001CC: bne         $at, $zero, L_80800154
    if (ctx->r1 != 0) {
        // 0x808001D0: addu        $v1, $v1, $t2
        ctx->r3 = ADD32(ctx->r3, ctx->r10);
            goto L_80800154;
    }
    // 0x808001D0: addu        $v1, $v1, $t2
    ctx->r3 = ADD32(ctx->r3, ctx->r10);
L_808001D4:
    // 0x808001D4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_808001D8:
    // 0x808001D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808001DC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x808001E0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x808001E4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x808001E8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x808001EC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x808001F0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x808001F4: jr          $ra
    // 0x808001F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x808001F8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void glid_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001FC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800200: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80800204: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800208: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8080020C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80800210: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80800214: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80800218: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8080021C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80800220: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80800224: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80800228: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080022C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80800230: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x80800234: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80800238: jal         0x800B2190
    // 0x8080023C: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    func_800B2190(rdram, ctx);
        goto after_0;
    // 0x8080023C: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    after_0:
    // 0x80800240: lw          $a0, 0x4($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X4);
    // 0x80800244: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x80800248: addiu       $s3, $s1, 0x1C
    ctx->r19 = ADD32(ctx->r17, 0X1C);
    // 0x8080024C: blez        $a0, L_808002F4
    if (SIGNED(ctx->r4) <= 0) {
        // 0x80800250: or          $v1, $zero, $zero
        ctx->r3 = 0 | 0;
            goto L_808002F4;
    }
    // 0x80800250: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80800254:
    // 0x80800254: lh          $t6, 0x0($s3)
    ctx->r14 = MEM_H(ctx->r19, 0X0);
    // 0x80800258: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x8080025C: bnel        $s0, $t6, L_808002E8
    if (ctx->r16 != ctx->r14) {
        // 0x80800260: lw          $t3, 0x4($s3)
        ctx->r11 = MEM_W(ctx->r19, 0X4);
            goto L_808002E8;
    }
    goto skip_0;
    // 0x80800260: lw          $t3, 0x4($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X4);
    skip_0:
    // 0x80800264: lh          $t7, 0x2($s3)
    ctx->r15 = MEM_H(ctx->r19, 0X2);
    // 0x80800268: addiu       $s6, $s3, 0x8
    ctx->r22 = ADD32(ctx->r19, 0X8);
    // 0x8080026C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80800270: addu        $s7, $t8, $s3
    ctx->r23 = ADD32(ctx->r24, ctx->r19);
    // 0x80800274: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
    // 0x80800278: sltu        $at, $s6, $s7
    ctx->r1 = ctx->r22 < ctx->r23 ? 1 : 0;
    // 0x8080027C: beq         $at, $zero, L_808002F4
    if (ctx->r1 == 0) {
        // 0x80800280: or          $s1, $s7, $zero
        ctx->r17 = ctx->r23 | 0;
            goto L_808002F4;
    }
    // 0x80800280: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    // 0x80800284: lh          $t9, 0x0($s6)
    ctx->r25 = MEM_H(ctx->r22, 0X0);
L_80800288:
    // 0x80800288: lh          $t1, 0x2($s6)
    ctx->r9 = MEM_H(ctx->r22, 0X2);
    // 0x8080028C: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80800290: addu        $s0, $t0, $fp
    ctx->r16 = ADD32(ctx->r8, ctx->r30);
    // 0x80800294: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x80800298: addu        $s2, $t2, $s0
    ctx->r18 = ADD32(ctx->r10, ctx->r16);
    // 0x8080029C: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x808002A0: beql        $at, $zero, L_808002D0
    if (ctx->r1 == 0) {
        // 0x808002A4: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_808002D0;
    }
    goto skip_1;
    // 0x808002A4: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    skip_1:
L_808002A8:
    // 0x808002A8: lh          $a0, 0x0($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X0);
    // 0x808002AC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x808002B0: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x808002B4: jalr        $s5
    // 0x808002B8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_1;
    // 0x808002B8: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_1:
    // 0x808002BC: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x808002C0: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x808002C4: bne         $at, $zero, L_808002A8
    if (ctx->r1 != 0) {
        // 0x808002C8: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_808002A8;
    }
    // 0x808002C8: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x808002CC: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
L_808002D0:
    // 0x808002D0: sltu        $at, $s6, $s7
    ctx->r1 = ctx->r22 < ctx->r23 ? 1 : 0;
    // 0x808002D4: bnel        $at, $zero, L_80800288
    if (ctx->r1 != 0) {
        // 0x808002D8: lh          $t9, 0x0($s6)
        ctx->r25 = MEM_H(ctx->r22, 0X0);
            goto L_80800288;
    }
    goto skip_2;
    // 0x808002D8: lh          $t9, 0x0($s6)
    ctx->r25 = MEM_H(ctx->r22, 0X0);
    skip_2:
    // 0x808002DC: b           L_808002F8
    // 0x808002E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_808002F8;
    // 0x808002E0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x808002E4: lw          $t3, 0x4($s3)
    ctx->r11 = MEM_W(ctx->r19, 0X4);
L_808002E8:
    // 0x808002E8: slt         $at, $v1, $a0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x808002EC: bne         $at, $zero, L_80800254
    if (ctx->r1 != 0) {
        // 0x808002F0: addu        $s3, $s3, $t3
        ctx->r19 = ADD32(ctx->r19, ctx->r11);
            goto L_80800254;
    }
    // 0x808002F0: addu        $s3, $s3, $t3
    ctx->r19 = ADD32(ctx->r19, ctx->r11);
L_808002F4:
    // 0x808002F4: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_808002F8:
    // 0x808002F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002FC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800300: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80800304: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80800308: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8080030C: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80800310: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80800314: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80800318: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x8080031C: jr          $ra
    // 0x80800320: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80800320: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void glid_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800324: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800328: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8080032C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800330: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80800334: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80800338: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x8080033C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80800340: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80800344: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80800348: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8080034C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80800350: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800354: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80800358: or          $s4, $a3, $zero
    ctx->r20 = ctx->r7 | 0;
    // 0x8080035C: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x80800360: jal         0x800B2190
    // 0x80800364: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    func_800B2190(rdram, ctx);
        goto after_0;
    // 0x80800364: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    after_0:
    // 0x80800368: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x8080036C: jal         0x800D674C
    // 0x80800370: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_800D674C(rdram, ctx);
        goto after_1;
    // 0x80800370: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_1:
    // 0x80800374: jal         0x800B27A0
    // 0x80800378: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B27A0(rdram, ctx);
        goto after_2;
    // 0x80800378: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x8080037C: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x80800380: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x80800384: addiu       $v1, $s1, 0x1C
    ctx->r3 = ADD32(ctx->r17, 0X1C);
    // 0x80800388: blez        $a1, L_80800440
    if (SIGNED(ctx->r5) <= 0) {
        // 0x8080038C: or          $a0, $zero, $zero
        ctx->r4 = 0 | 0;
            goto L_80800440;
    }
    // 0x8080038C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_80800390:
    // 0x80800390: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x80800394: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80800398: bnel        $s0, $t6, L_80800434
    if (ctx->r16 != ctx->r14) {
        // 0x8080039C: lw          $t3, 0x4($v1)
        ctx->r11 = MEM_W(ctx->r3, 0X4);
            goto L_80800434;
    }
    goto skip_0;
    // 0x8080039C: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
    skip_0:
    // 0x808003A0: lh          $t7, 0x2($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X2);
    // 0x808003A4: addiu       $s6, $v1, 0x8
    ctx->r22 = ADD32(ctx->r3, 0X8);
    // 0x808003A8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x808003AC: addu        $s7, $t8, $v1
    ctx->r23 = ADD32(ctx->r24, ctx->r3);
    // 0x808003B0: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
    // 0x808003B4: sltu        $at, $s6, $s7
    ctx->r1 = ctx->r22 < ctx->r23 ? 1 : 0;
    // 0x808003B8: beq         $at, $zero, L_80800440
    if (ctx->r1 == 0) {
        // 0x808003BC: or          $s2, $s7, $zero
        ctx->r18 = ctx->r23 | 0;
            goto L_80800440;
    }
    // 0x808003BC: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x808003C0: lh          $a1, 0x0($s6)
    ctx->r5 = MEM_H(ctx->r22, 0X0);
L_808003C4:
    // 0x808003C4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x808003C8: lh          $t1, 0x2($s6)
    ctx->r9 = MEM_H(ctx->r22, 0X2);
    // 0x808003CC: sll         $t9, $a1, 4
    ctx->r25 = S32(ctx->r5 << 4);
    // 0x808003D0: addu        $s0, $t9, $t0
    ctx->r16 = ADD32(ctx->r25, ctx->r8);
    // 0x808003D4: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x808003D8: addu        $s3, $t2, $s0
    ctx->r19 = ADD32(ctx->r10, ctx->r16);
    // 0x808003DC: jal         0x800879F0
    // 0x808003E0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    _dbvtxnormal_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x808003E0: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    after_3:
    // 0x808003E4: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x808003E8: beq         $at, $zero, L_80800418
    if (ctx->r1 == 0) {
        // 0x808003EC: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80800418;
    }
    // 0x808003EC: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_808003F0:
    // 0x808003F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808003F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x808003F8: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x808003FC: jalr        $s5
    // 0x80800400: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_4;
    // 0x80800400: or          $a3, $s1, $zero
    ctx->r7 = ctx->r17 | 0;
    after_4:
    // 0x80800404: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80800408: sltu        $at, $s0, $s3
    ctx->r1 = ctx->r16 < ctx->r19 ? 1 : 0;
    // 0x8080040C: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x80800410: bne         $at, $zero, L_808003F0
    if (ctx->r1 != 0) {
        // 0x80800414: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_808003F0;
    }
    // 0x80800414: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_80800418:
    // 0x80800418: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x8080041C: sltu        $at, $s6, $s7
    ctx->r1 = ctx->r22 < ctx->r23 ? 1 : 0;
    // 0x80800420: bnel        $at, $zero, L_808003C4
    if (ctx->r1 != 0) {
        // 0x80800424: lh          $a1, 0x0($s6)
        ctx->r5 = MEM_H(ctx->r22, 0X0);
            goto L_808003C4;
    }
    goto skip_1;
    // 0x80800424: lh          $a1, 0x0($s6)
    ctx->r5 = MEM_H(ctx->r22, 0X0);
    skip_1:
    // 0x80800428: b           L_80800444
    // 0x8080042C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_80800444;
    // 0x8080042C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80800430: lw          $t3, 0x4($v1)
    ctx->r11 = MEM_W(ctx->r3, 0X4);
L_80800434:
    // 0x80800434: slt         $at, $a0, $a1
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r5) ? 1 : 0;
    // 0x80800438: bne         $at, $zero, L_80800390
    if (ctx->r1 != 0) {
        // 0x8080043C: addu        $v1, $v1, $t3
        ctx->r3 = ADD32(ctx->r3, ctx->r11);
            goto L_80800390;
    }
    // 0x8080043C: addu        $v1, $v1, $t3
    ctx->r3 = ADD32(ctx->r3, ctx->r11);
L_80800440:
    // 0x80800440: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_80800444:
    // 0x80800444: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800448: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8080044C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80800450: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80800454: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80800458: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8080045C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80800460: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80800464: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80800468: jr          $ra
    // 0x8080046C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8080046C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void glid_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800470: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80800474: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80800478: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x8080047C: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80800480: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80800484: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80800488: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8080048C: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80800490: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80800494: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80800498: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080049C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x808004A0: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x808004A4: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x808004A8: jal         0x800B2190
    // 0x808004AC: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    func_800B2190(rdram, ctx);
        goto after_0;
    // 0x808004AC: lw          $a0, 0x14($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X14);
    after_0:
    // 0x808004B0: lw          $t7, 0x58($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X58);
    // 0x808004B4: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x808004B8: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x808004BC: lw          $v1, 0x4($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X4);
    // 0x808004C0: addiu       $s3, $t7, 0x1C
    ctx->r19 = ADD32(ctx->r15, 0X1C);
    // 0x808004C4: blezl       $v1, L_8080056C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x808004C8: lw          $ra, 0x3C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X3C);
            goto L_8080056C;
    }
    goto skip_0;
    // 0x808004C8: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    skip_0:
L_808004CC:
    // 0x808004CC: lh          $t8, 0x2($s3)
    ctx->r24 = MEM_H(ctx->r19, 0X2);
    // 0x808004D0: addiu       $s6, $s3, 0x8
    ctx->r22 = ADD32(ctx->r19, 0X8);
    // 0x808004D4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x808004D8: addu        $s7, $t9, $s3
    ctx->r23 = ADD32(ctx->r25, ctx->r19);
    // 0x808004DC: addiu       $s7, $s7, 0x8
    ctx->r23 = ADD32(ctx->r23, 0X8);
    // 0x808004E0: sltu        $at, $s6, $s7
    ctx->r1 = ctx->r22 < ctx->r23 ? 1 : 0;
    // 0x808004E4: beq         $at, $zero, L_8080054C
    if (ctx->r1 == 0) {
        // 0x808004E8: or          $s1, $s7, $zero
        ctx->r17 = ctx->r23 | 0;
            goto L_8080054C;
    }
    // 0x808004E8: or          $s1, $s7, $zero
    ctx->r17 = ctx->r23 | 0;
    // 0x808004EC: lh          $t0, 0x0($s6)
    ctx->r8 = MEM_H(ctx->r22, 0X0);
L_808004F0:
    // 0x808004F0: lh          $t2, 0x2($s6)
    ctx->r10 = MEM_H(ctx->r22, 0X2);
    // 0x808004F4: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x808004F8: addu        $s0, $t1, $fp
    ctx->r16 = ADD32(ctx->r9, ctx->r30);
    // 0x808004FC: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x80800500: addu        $s2, $t3, $s0
    ctx->r18 = ADD32(ctx->r11, ctx->r16);
    // 0x80800504: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x80800508: beql        $at, $zero, L_80800538
    if (ctx->r1 == 0) {
        // 0x8080050C: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_80800538;
    }
    goto skip_1;
    // 0x8080050C: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    skip_1:
L_80800510:
    // 0x80800510: lh          $a0, 0x0($s3)
    ctx->r4 = MEM_H(ctx->r19, 0X0);
    // 0x80800514: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80800518: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    // 0x8080051C: jalr        $s5
    // 0x80800520: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r21)(rdram, ctx);
        goto after_1;
    // 0x80800520: or          $a3, $s4, $zero
    ctx->r7 = ctx->r20 | 0;
    after_1:
    // 0x80800524: addiu       $s0, $s0, 0x10
    ctx->r16 = ADD32(ctx->r16, 0X10);
    // 0x80800528: sltu        $at, $s0, $s2
    ctx->r1 = ctx->r16 < ctx->r18 ? 1 : 0;
    // 0x8080052C: bne         $at, $zero, L_80800510
    if (ctx->r1 != 0) {
        // 0x80800530: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_80800510;
    }
    // 0x80800530: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x80800534: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
L_80800538:
    // 0x80800538: sltu        $at, $s6, $s7
    ctx->r1 = ctx->r22 < ctx->r23 ? 1 : 0;
    // 0x8080053C: bnel        $at, $zero, L_808004F0
    if (ctx->r1 != 0) {
        // 0x80800540: lh          $t0, 0x0($s6)
        ctx->r8 = MEM_H(ctx->r22, 0X0);
            goto L_808004F0;
    }
    goto skip_2;
    // 0x80800540: lh          $t0, 0x0($s6)
    ctx->r8 = MEM_H(ctx->r22, 0X0);
    skip_2:
    // 0x80800544: lw          $t4, 0x58($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X58);
    // 0x80800548: lw          $v1, 0x4($t4)
    ctx->r3 = MEM_W(ctx->r12, 0X4);
L_8080054C:
    // 0x8080054C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80800550: lw          $t5, 0x4($s3)
    ctx->r13 = MEM_W(ctx->r19, 0X4);
    // 0x80800554: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80800558: slt         $at, $t7, $v1
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x8080055C: sw          $t7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r15;
    // 0x80800560: bne         $at, $zero, L_808004CC
    if (ctx->r1 != 0) {
        // 0x80800564: addu        $s3, $s3, $t5
        ctx->r19 = ADD32(ctx->r19, ctx->r13);
            goto L_808004CC;
    }
    // 0x80800564: addu        $s3, $s3, $t5
    ctx->r19 = ADD32(ctx->r19, ctx->r13);
    // 0x80800568: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8080056C:
    // 0x8080056C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800570: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800574: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80800578: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8080057C: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80800580: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80800584: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80800588: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x8080058C: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80800590: jr          $ra
    // 0x80800594: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80800594: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void glid_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800598: jr          $ra
    // 0x8080059C: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
    return;
    // 0x8080059C: sw          $a1, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void glid_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005A0: jr          $ra
    // 0x808005A4: sw          $a1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r5;
    return;
    // 0x808005A4: sw          $a1, 0x18($a0)
    MEM_W(0X18, ctx->r4) = ctx->r5;
    // 0x808005A8: nop

    // 0x808005AC: nop

;}
RECOMP_FUNC void func_80800000_glidmake(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: addiu       $a0, $a0, 0x8
    ctx->r4 = ADD32(ctx->r4, 0X8);
    // 0x8080000C: jal         0x800EEEA8
    // 0x80800010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800EEEA8(rdram, ctx);
        goto after_0;
    // 0x80800010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800014: beq         $v0, $zero, L_80800024
    if (ctx->r2 == 0) {
        // 0x80800018: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800024;
    }
    // 0x80800018: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080001C: b           L_80800028
    // 0x80800020: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80800028;
    // 0x80800020: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80800024:
    // 0x80800024: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
L_80800028:
    // 0x80800028: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080002C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800030: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800034: jr          $ra
    // 0x80800038: nop

    return;
    // 0x80800038: nop

;}
RECOMP_FUNC void glidmake_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080003C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800044: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80800048: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8080004C: jal         0x800000F0
    // 0x80800050: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    glidmake_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800050: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    after_0:
    // 0x80800054: lh          $t6, 0x18($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X18);
    // 0x80800058: lh          $t7, 0x20($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X20);
    // 0x8080005C: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80800060: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80800064: bgez        $t8, L_80800074
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80800068: sra         $t9, $t8, 1
        ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
            goto L_80800074;
    }
    // 0x80800068: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8080006C: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x80800070: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_80800074:
    // 0x80800074: sh          $t9, 0x0($v0)
    MEM_H(0X0, ctx->r2) = ctx->r25;
    // 0x80800078: lh          $t1, 0x22($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X22);
    // 0x8080007C: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x80800080: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80800084: bgez        $t2, L_80800094
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80800088: sra         $t3, $t2, 1
        ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
            goto L_80800094;
    }
    // 0x80800088: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x8080008C: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x80800090: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_80800094:
    // 0x80800094: sh          $t3, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r11;
    // 0x80800098: lh          $t5, 0x24($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X24);
    // 0x8080009C: lh          $t4, 0x1C($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X1C);
    // 0x808000A0: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x808000A4: bgez        $t6, L_808000B4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x808000A8: sra         $t7, $t6, 1
        ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
            goto L_808000B4;
    }
    // 0x808000A8: sra         $t7, $t6, 1
    ctx->r15 = S32(SIGNED(ctx->r14) >> 1);
    // 0x808000AC: addiu       $at, $t6, 0x1
    ctx->r1 = ADD32(ctx->r14, 0X1);
    // 0x808000B0: sra         $t7, $at, 1
    ctx->r15 = S32(SIGNED(ctx->r1) >> 1);
L_808000B4:
    // 0x808000B4: sh          $t7, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r15;
    // 0x808000B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808000C0: jr          $ra
    // 0x808000C4: nop

    return;
    // 0x808000C4: nop

;}
RECOMP_FUNC void glidmake_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000D0: jal         0x800D674C
    // 0x808000D4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x808000D4: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x808000D8: jal         0x800B274C
    // 0x808000DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B274C(rdram, ctx);
        goto after_1;
    // 0x808000DC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
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
RECOMP_FUNC void glidmake_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808000F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000F8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808000FC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800100: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80800104: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x80800108: or          $s1, $a3, $zero
    ctx->r17 = ctx->r7 | 0;
    // 0x8080010C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80800110: jal         0x800EFD4C
    // 0x80800114: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800EFD4C(rdram, ctx);
        goto after_0;
    // 0x80800114: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_0:
    // 0x80800118: jal         0x800EFD4C
    // 0x8080011C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EFD4C(rdram, ctx);
        goto after_1;
    // 0x8080011C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800120: lw          $t6, 0x40($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X40);
    // 0x80800124: jal         0x800D674C
    // 0x80800128: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    func_800D674C(rdram, ctx);
        goto after_2;
    // 0x80800128: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_2:
    // 0x8080012C: jal         0x800B274C
    // 0x80800130: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B274C(rdram, ctx);
        goto after_3;
    // 0x80800130: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x80800134: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800138: jal         0x800879D0
    // 0x8080013C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    _dbid_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x8080013C: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_4:
    // 0x80800140: beq         $v0, $zero, L_80800238
    if (ctx->r2 == 0) {
        // 0x80800144: lw          $t7, 0x40($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X40);
            goto L_80800238;
    }
    // 0x80800144: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80800148: lw          $a0, 0x14($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X14);
    // 0x8080014C: jal         0x800B2190
    // 0x80800150: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    func_800B2190(rdram, ctx);
        goto after_5;
    // 0x80800150: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    after_5:
    // 0x80800154: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80800158: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x8080015C: lh          $t8, 0x2($t3)
    ctx->r24 = MEM_H(ctx->r11, 0X2);
    // 0x80800160: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x80800164: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x80800168: addu        $t5, $t9, $t3
    ctx->r13 = ADD32(ctx->r25, ctx->r11);
    // 0x8080016C: addiu       $t5, $t5, 0x4
    ctx->r13 = ADD32(ctx->r13, 0X4);
    // 0x80800170: sltu        $at, $t4, $t5
    ctx->r1 = ctx->r12 < ctx->r13 ? 1 : 0;
    // 0x80800174: beq         $at, $zero, L_80800210
    if (ctx->r1 == 0) {
        // 0x80800178: nop
    
            goto L_80800210;
    }
    // 0x80800178: nop

    // 0x8080017C: lh          $t6, 0x0($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X0);
L_80800180:
    // 0x80800180: addiu       $t1, $t4, -0x4
    ctx->r9 = ADD32(ctx->r12, -0X4);
    // 0x80800184: or          $t0, $zero, $zero
    ctx->r8 = 0 | 0;
    // 0x80800188: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8080018C: addu        $a3, $t7, $v0
    ctx->r7 = ADD32(ctx->r15, ctx->r2);
    // 0x80800190: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800194: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
L_80800198:
    // 0x80800198: bne         $t3, $t1, L_808001B0
    if (ctx->r11 != ctx->r9) {
        // 0x8080019C: addiu       $t0, $t0, 0x2
        ctx->r8 = ADD32(ctx->r8, 0X2);
            goto L_808001B0;
    }
    // 0x8080019C: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x808001A0: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x808001A4: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x808001A8: b           L_808001F0
    // 0x808001AC: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
        goto L_808001F0;
    // 0x808001AC: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
L_808001B0:
    // 0x808001B0: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x808001B4: lh          $a2, 0x0($a1)
    ctx->r6 = MEM_H(ctx->r5, 0X0);
    // 0x808001B8: slt         $at, $v1, $a2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r6) ? 1 : 0;
    // 0x808001BC: beql        $at, $zero, L_808001D0
    if (ctx->r1 == 0) {
        // 0x808001C0: sh          $a2, 0x0($a1)
        MEM_H(0X0, ctx->r5) = ctx->r6;
            goto L_808001D0;
    }
    goto skip_0;
    // 0x808001C0: sh          $a2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r6;
    skip_0:
    // 0x808001C4: b           L_808001D0
    // 0x808001C8: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
        goto L_808001D0;
    // 0x808001C8: sh          $v1, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r3;
    // 0x808001CC: sh          $a2, 0x0($a1)
    MEM_H(0X0, ctx->r5) = ctx->r6;
L_808001D0:
    // 0x808001D0: lh          $a2, 0x0($a0)
    ctx->r6 = MEM_H(ctx->r4, 0X0);
    // 0x808001D4: lh          $v1, 0x0($a3)
    ctx->r3 = MEM_H(ctx->r7, 0X0);
    // 0x808001D8: slt         $at, $a2, $v1
    ctx->r1 = SIGNED(ctx->r6) < SIGNED(ctx->r3) ? 1 : 0;
    // 0x808001DC: beql        $at, $zero, L_808001F0
    if (ctx->r1 == 0) {
        // 0x808001E0: sh          $a2, 0x0($a0)
        MEM_H(0X0, ctx->r4) = ctx->r6;
            goto L_808001F0;
    }
    goto skip_1;
    // 0x808001E0: sh          $a2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r6;
    skip_1:
    // 0x808001E4: b           L_808001F0
    // 0x808001E8: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
        goto L_808001F0;
    // 0x808001E8: sh          $v1, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r3;
    // 0x808001EC: sh          $a2, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r6;
L_808001F0:
    // 0x808001F0: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x808001F4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    // 0x808001F8: bne         $t0, $t2, L_80800198
    if (ctx->r8 != ctx->r10) {
        // 0x808001FC: addiu       $a1, $a1, 0x2
        ctx->r5 = ADD32(ctx->r5, 0X2);
            goto L_80800198;
    }
    // 0x808001FC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80800200: addiu       $t4, $t4, 0x2
    ctx->r12 = ADD32(ctx->r12, 0X2);
    // 0x80800204: sltu        $at, $t4, $t5
    ctx->r1 = ctx->r12 < ctx->r13 ? 1 : 0;
    // 0x80800208: bnel        $at, $zero, L_80800180
    if (ctx->r1 != 0) {
        // 0x8080020C: lh          $t6, 0x0($t4)
        ctx->r14 = MEM_H(ctx->r12, 0X0);
            goto L_80800180;
    }
    goto skip_2;
    // 0x8080020C: lh          $t6, 0x0($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X0);
    skip_2:
L_80800210:
    // 0x80800210: jal         0x80000000
    // 0x80800214: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_80800000_glidmake(rdram, ctx);
        goto after_6;
    // 0x80800214: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_6:
    // 0x80800218: beq         $v0, $zero, L_80800238
    if (ctx->r2 == 0) {
        // 0x8080021C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80800238;
    }
    // 0x8080021C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800224: jal         0x800EF0B4
    // 0x80800228: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800EF0B4(rdram, ctx);
        goto after_7;
    // 0x80800228: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_7:
    // 0x8080022C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80800230: jal         0x800EF0B4
    // 0x80800234: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EF0B4(rdram, ctx);
        goto after_8;
    // 0x80800234: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
L_80800238:
    // 0x80800238: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080023C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800240: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800244: jr          $ra
    // 0x80800248: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80800248: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void glidmake_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080024C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800254: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800258: jal         0x800D674C
    // 0x8080025C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x8080025C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x80800260: jal         0x800B274C
    // 0x80800264: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B274C(rdram, ctx);
        goto after_1;
    // 0x80800264: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800268: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080026C: jal         0x800879D0
    // 0x80800270: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    _dbid_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800270: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800274: beq         $v0, $zero, L_80800284
    if (ctx->r2 == 0) {
        // 0x80800278: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800284;
    }
    // 0x80800278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080027C: b           L_80800288
    // 0x80800280: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
        goto L_80800288;
    // 0x80800280: lh          $v1, 0x2($v0)
    ctx->r3 = MEM_H(ctx->r2, 0X2);
L_80800284:
    // 0x80800284: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80800288:
    // 0x80800288: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8080028C: jr          $ra
    // 0x80800290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800290: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void glidmake_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080029C: jal         0x8001B084
    // 0x808002A0: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x808002A0: nop

    after_0:
    // 0x808002A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808002A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808002AC: jr          $ra
    // 0x808002B0: nop

    return;
    // 0x808002B0: nop

;}
RECOMP_FUNC void glidmake_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002B4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x808002B8: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x808002BC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x808002C0: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x808002C4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x808002C8: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x808002CC: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x808002D0: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x808002D4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x808002D8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x808002DC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x808002E0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x808002E4: jal         0x800D674C
    // 0x808002E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x808002E8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    after_0:
    // 0x808002EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808002F0: jal         0x800B274C
    // 0x808002F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B274C(rdram, ctx);
        goto after_1;
    // 0x808002F4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808002F8: bne         $v0, $zero, L_80800308
    if (ctx->r2 != 0) {
        // 0x808002FC: sw          $v0, 0x5C($sp)
        MEM_W(0X5C, ctx->r29) = ctx->r2;
            goto L_80800308;
    }
    // 0x808002FC: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80800300: b           L_808004FC
    // 0x80800304: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_808004FC;
    // 0x80800304: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800308:
    // 0x80800308: jal         0x800B2840
    // 0x8080030C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800B2840(rdram, ctx);
        goto after_2;
    // 0x8080030C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800310: or          $fp, $v0, $zero
    ctx->r30 = ctx->r2 | 0;
    // 0x80800314: jal         0x800879C8
    // 0x80800318: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    _dbid_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x80800318: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    after_3:
    // 0x8080031C: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x80800320: sll         $t6, $v0, 4
    ctx->r14 = S32(ctx->r2 << 4);
    // 0x80800324: lh          $v1, 0x0($a2)
    ctx->r3 = MEM_H(ctx->r6, 0X0);
    // 0x80800328: addiu       $s1, $a2, 0x2
    ctx->r17 = ADD32(ctx->r6, 0X2);
    // 0x8080032C: or          $s6, $s1, $zero
    ctx->r22 = ctx->r17 | 0;
    // 0x80800330: sll         $t7, $v1, 3
    ctx->r15 = S32(ctx->r3 << 3);
    // 0x80800334: addu        $s0, $t6, $t7
    ctx->r16 = ADD32(ctx->r14, ctx->r15);
    // 0x80800338: addiu       $s0, $s0, 0x1C
    ctx->r16 = ADD32(ctx->r16, 0X1C);
    // 0x8080033C: blez        $v1, L_8080038C
    if (SIGNED(ctx->r3) <= 0) {
        // 0x80800340: sw          $zero, 0x40($sp)
        MEM_W(0X40, ctx->r29) = 0;
            goto L_8080038C;
    }
    // 0x80800340: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
L_80800344:
    // 0x80800344: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80800348: jal         0x800879C0
    // 0x8080034C: lh          $a1, 0x0($s6)
    ctx->r5 = MEM_H(ctx->r22, 0X0);
    _dbid_entrypoint_0(rdram, ctx);
        goto after_4;
    // 0x8080034C: lh          $a1, 0x0($s6)
    ctx->r5 = MEM_H(ctx->r22, 0X0);
    after_4:
    // 0x80800350: lw          $v1, 0x40($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X40);
    // 0x80800354: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80800358: lh          $t9, 0x2($s6)
    ctx->r25 = MEM_H(ctx->r22, 0X2);
    // 0x8080035C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80800360: sw          $v1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r3;
    // 0x80800364: lh          $t2, 0x0($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X0);
    // 0x80800368: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x8080036C: sll         $t8, $v0, 2
    ctx->r24 = S32(ctx->r2 << 2);
    // 0x80800370: addu        $s6, $s6, $t0
    ctx->r22 = ADD32(ctx->r22, ctx->r8);
    // 0x80800374: slt         $at, $v1, $t2
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80800378: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x8080037C: bne         $at, $zero, L_80800344
    if (ctx->r1 != 0) {
        // 0x80800380: addiu       $s6, $s6, 0x4
        ctx->r22 = ADD32(ctx->r22, 0X4);
            goto L_80800344;
    }
    // 0x80800380: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x80800384: or          $s6, $s1, $zero
    ctx->r22 = ctx->r17 | 0;
    // 0x80800388: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
L_8080038C:
    // 0x8080038C: jal         0x8001ACCC
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8001ACCC(rdram, ctx);
        goto after_5;
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800394: sw          $s2, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r18;
    // 0x80800398: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x8080039C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x808003A0: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x808003A4: lh          $t4, 0x0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X0);
    // 0x808003A8: addiu       $a0, $v1, 0x8
    ctx->r4 = ADD32(ctx->r3, 0X8);
    // 0x808003AC: beq         $s3, $zero, L_808003C8
    if (ctx->r19 == 0) {
        // 0x808003B0: sw          $t4, 0x4($v0)
        MEM_W(0X4, ctx->r2) = ctx->r12;
            goto L_808003C8;
    }
    // 0x808003B0: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x808003B4: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x808003B8: jal         0x800EE7F8
    // 0x808003BC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    func_800EE7F8(rdram, ctx);
        goto after_6;
    // 0x808003BC: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    after_6:
    // 0x808003C0: b           L_808003D4
    // 0x808003C4: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
        goto L_808003D4;
    // 0x808003C4: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
L_808003C8:
    // 0x808003C8: jal         0x800EFD24
    // 0x808003CC: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    func_800EFD24(rdram, ctx);
        goto after_7;
    // 0x808003CC: sw          $v1, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r3;
    after_7:
    // 0x808003D0: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
L_808003D4:
    // 0x808003D4: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x808003D8: sw          $fp, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->r30;
    // 0x808003DC: sw          $zero, 0x18($v1)
    MEM_W(0X18, ctx->r3) = 0;
    // 0x808003E0: lh          $t5, 0x0($a0)
    ctx->r13 = MEM_H(ctx->r4, 0X0);
    // 0x808003E4: addiu       $s7, $v1, 0x1C
    ctx->r23 = ADD32(ctx->r3, 0X1C);
    // 0x808003E8: blezl       $t5, L_808004FC
    if (SIGNED(ctx->r13) <= 0) {
        // 0x808003EC: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_808004FC;
    }
    goto skip_0;
    // 0x808003EC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    skip_0:
L_808003F0:
    // 0x808003F0: lh          $t6, 0x0($s6)
    ctx->r14 = MEM_H(ctx->r22, 0X0);
    // 0x808003F4: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x808003F8: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x808003FC: sh          $t6, 0x0($s7)
    MEM_H(0X0, ctx->r23) = ctx->r14;
    // 0x80800400: lh          $a1, 0x0($s6)
    ctx->r5 = MEM_H(ctx->r22, 0X0);
    // 0x80800404: jal         0x800879C0
    // 0x80800408: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    _dbid_entrypoint_0(rdram, ctx);
        goto after_8;
    // 0x80800408: addiu       $s4, $zero, 0x1
    ctx->r20 = ADD32(0, 0X1);
    after_8:
    // 0x8080040C: sh          $v0, 0x2($s7)
    MEM_H(0X2, ctx->r23) = ctx->r2;
    // 0x80800410: lh          $t7, 0x2($s7)
    ctx->r15 = MEM_H(ctx->r23, 0X2);
    // 0x80800414: lh          $s5, 0x4($s6)
    ctx->r21 = MEM_H(ctx->r22, 0X4);
    // 0x80800418: addiu       $s1, $s7, 0x8
    ctx->r17 = ADD32(ctx->r23, 0X8);
    // 0x8080041C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80800420: addu        $s2, $t8, $s7
    ctx->r18 = ADD32(ctx->r24, ctx->r23);
    // 0x80800424: sll         $t9, $s5, 4
    ctx->r25 = S32(ctx->r21 << 4);
    // 0x80800428: addiu       $s2, $s2, 0x8
    ctx->r18 = ADD32(ctx->r18, 0X8);
    // 0x8080042C: addu        $a1, $t9, $fp
    ctx->r5 = ADD32(ctx->r25, ctx->r30);
    // 0x80800430: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    // 0x80800434: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800438: jal         0x8001BBC8
    // 0x8080043C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    aligned4_memcpy(rdram, ctx);
        goto after_9;
    // 0x8080043C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    after_9:
    // 0x80800440: lh          $t0, 0x2($s6)
    ctx->r8 = MEM_H(ctx->r22, 0X2);
    // 0x80800444: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x80800448: addiu       $s0, $s6, 0x2
    ctx->r16 = ADD32(ctx->r22, 0X2);
    // 0x8080044C: slti        $at, $t0, 0x2
    ctx->r1 = SIGNED(ctx->r8) < 0X2 ? 1 : 0;
    // 0x80800450: bnel        $at, $zero, L_808004B8
    if (ctx->r1 != 0) {
        // 0x80800454: lw          $v0, 0x40($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X40);
            goto L_808004B8;
    }
    goto skip_1;
    // 0x80800454: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    skip_1:
L_80800458:
    // 0x80800458: lh          $t2, 0x2($s0)
    ctx->r10 = MEM_H(ctx->r16, 0X2);
    // 0x8080045C: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x80800460: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800464: addiu       $t1, $t2, 0x1
    ctx->r9 = ADD32(ctx->r10, 0X1);
    // 0x80800468: beq         $v0, $t1, L_80800488
    if (ctx->r2 == ctx->r9) {
        // 0x8080046C: addiu       $a2, $zero, 0x10
        ctx->r6 = ADD32(0, 0X10);
            goto L_80800488;
    }
    // 0x8080046C: addiu       $a2, $zero, 0x10
    ctx->r6 = ADD32(0, 0X10);
    // 0x80800470: sh          $s5, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r21;
    // 0x80800474: sh          $s3, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r19;
    // 0x80800478: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8080047C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80800480: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x80800484: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
L_80800488:
    // 0x80800488: sll         $t3, $v0, 4
    ctx->r11 = S32(ctx->r2 << 4);
    // 0x8080048C: addu        $a1, $t3, $fp
    ctx->r5 = ADD32(ctx->r11, ctx->r30);
    // 0x80800490: jal         0x8001BBC8
    // 0x80800494: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    aligned4_memcpy(rdram, ctx);
        goto after_10;
    // 0x80800494: addiu       $a1, $a1, 0x18
    ctx->r5 = ADD32(ctx->r5, 0X18);
    after_10:
    // 0x80800498: lh          $t4, 0x2($s6)
    ctx->r12 = MEM_H(ctx->r22, 0X2);
    // 0x8080049C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x808004A0: addiu       $s0, $s0, 0x2
    ctx->r16 = ADD32(ctx->r16, 0X2);
    // 0x808004A4: slt         $at, $s4, $t4
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x808004A8: addiu       $s2, $s2, 0x10
    ctx->r18 = ADD32(ctx->r18, 0X10);
    // 0x808004AC: bne         $at, $zero, L_80800458
    if (ctx->r1 != 0) {
        // 0x808004B0: addiu       $s3, $s3, 0x1
        ctx->r19 = ADD32(ctx->r19, 0X1);
            goto L_80800458;
    }
    // 0x808004B0: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x808004B4: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
L_808004B8:
    // 0x808004B8: sh          $s5, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r21;
    // 0x808004BC: sh          $s3, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r19;
    // 0x808004C0: subu        $t5, $s2, $s7
    ctx->r13 = SUB32(ctx->r18, ctx->r23);
    // 0x808004C4: sw          $t5, 0x4($s7)
    MEM_W(0X4, ctx->r23) = ctx->r13;
    // 0x808004C8: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x808004CC: lh          $t6, 0x2($s6)
    ctx->r14 = MEM_H(ctx->r22, 0X2);
    // 0x808004D0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x808004D4: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x808004D8: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x808004DC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x808004E0: addu        $s6, $s6, $t7
    ctx->r22 = ADD32(ctx->r22, ctx->r15);
    // 0x808004E4: slt         $at, $v0, $t9
    ctx->r1 = SIGNED(ctx->r2) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x808004E8: addiu       $s6, $s6, 0x4
    ctx->r22 = ADD32(ctx->r22, 0X4);
    // 0x808004EC: bne         $at, $zero, L_808003F0
    if (ctx->r1 != 0) {
        // 0x808004F0: or          $s7, $s2, $zero
        ctx->r23 = ctx->r18 | 0;
            goto L_808003F0;
    }
    // 0x808004F0: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
    // 0x808004F4: lw          $v1, 0x54($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X54);
    // 0x808004F8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_808004FC:
    // 0x808004FC: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80800500: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800504: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800508: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8080050C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80800510: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80800514: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x80800518: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8080051C: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80800520: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80800524: jr          $ra
    // 0x80800528: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x80800528: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8080052C: nop

;}
RECOMP_FUNC void func_80800000_glintrosyncDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(704, 0X4A0) << 16);
    // 0x80800004: lw          $t6, 0x4A0($t6)
    ctx->r14 = MEM_W(ctx->r14, (int16_t)RELOC_LO16(704, 0X4A0));
    // 0x80800008: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(704, 0X4A8) << 16);
    // 0x8080000C: bne         $a0, $t6, L_8080001C
    if (ctx->r4 != ctx->r14) {
        // 0x80800010: nop
    
            goto L_8080001C;
    }
    // 0x80800010: nop

    // 0x80800014: jr          $ra
    // 0x80800018: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80800018: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8080001C:
    // 0x8080001C: lw          $t7, 0x4A8($t7)
    ctx->r15 = MEM_W(ctx->r15, (int16_t)RELOC_LO16(704, 0X4A8));
    // 0x80800020: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(704, 0X4B0) << 16);
    // 0x80800024: bne         $a0, $t7, L_80800034
    if (ctx->r4 != ctx->r15) {
        // 0x80800028: nop
    
            goto L_80800034;
    }
    // 0x80800028: nop

    // 0x8080002C: jr          $ra
    // 0x80800030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80800030: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800034:
    // 0x80800034: lw          $t8, 0x4B0($t8)
    ctx->r24 = MEM_W(ctx->r24, (int16_t)RELOC_LO16(704, 0X4B0));
    // 0x80800038: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(704, 0X4B8) << 16);
    // 0x8080003C: addiu       $v0, $v0, 0x4B8
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(704, 0X4B8));
    // 0x80800040: bne         $a0, $t8, L_80800050
    if (ctx->r4 != ctx->r24) {
        // 0x80800044: addiu       $v1, $zero, 0x3
        ctx->r3 = ADD32(0, 0X3);
            goto L_80800050;
    }
    // 0x80800044: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
    // 0x80800048: jr          $ra
    // 0x8080004C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    return;
    // 0x8080004C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80800050:
    // 0x80800050: addiu       $a1, $zero, 0xB
    ctx->r5 = ADD32(0, 0XB);
L_80800054:
    // 0x80800054: lw          $t9, 0x0($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X0);
    // 0x80800058: bnel        $a0, $t9, L_8080006C
    if (ctx->r4 != ctx->r25) {
        // 0x8080005C: lw          $t0, 0x8($v0)
        ctx->r8 = MEM_W(ctx->r2, 0X8);
            goto L_8080006C;
    }
    goto skip_0;
    // 0x8080005C: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
    skip_0:
    // 0x80800060: jr          $ra
    // 0x80800064: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80800064: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800068: lw          $t0, 0x8($v0)
    ctx->r8 = MEM_W(ctx->r2, 0X8);
L_8080006C:
    // 0x8080006C: bnel        $a0, $t0, L_80800080
    if (ctx->r4 != ctx->r8) {
        // 0x80800070: lw          $t1, 0x10($v0)
        ctx->r9 = MEM_W(ctx->r2, 0X10);
            goto L_80800080;
    }
    goto skip_1;
    // 0x80800070: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
    skip_1:
    // 0x80800074: jr          $ra
    // 0x80800078: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    return;
    // 0x80800078: addiu       $v0, $v1, 0x1
    ctx->r2 = ADD32(ctx->r3, 0X1);
    // 0x8080007C: lw          $t1, 0x10($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X10);
L_80800080:
    // 0x80800080: bnel        $a0, $t1, L_80800094
    if (ctx->r4 != ctx->r9) {
        // 0x80800084: lw          $t2, 0x18($v0)
        ctx->r10 = MEM_W(ctx->r2, 0X18);
            goto L_80800094;
    }
    goto skip_2;
    // 0x80800084: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
    skip_2:
    // 0x80800088: jr          $ra
    // 0x8080008C: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    return;
    // 0x8080008C: addiu       $v0, $v1, 0x2
    ctx->r2 = ADD32(ctx->r3, 0X2);
    // 0x80800090: lw          $t2, 0x18($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X18);
L_80800094:
    // 0x80800094: bnel        $a0, $t2, L_808000A8
    if (ctx->r4 != ctx->r10) {
        // 0x80800098: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_808000A8;
    }
    goto skip_3;
    // 0x80800098: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_3:
    // 0x8080009C: jr          $ra
    // 0x808000A0: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    return;
    // 0x808000A0: addiu       $v0, $v1, 0x3
    ctx->r2 = ADD32(ctx->r3, 0X3);
    // 0x808000A4: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_808000A8:
    // 0x808000A8: bne         $v1, $a1, L_80800054
    if (ctx->r3 != ctx->r5) {
        // 0x808000AC: addiu       $v0, $v0, 0x20
        ctx->r2 = ADD32(ctx->r2, 0X20);
            goto L_80800054;
    }
    // 0x808000AC: addiu       $v0, $v0, 0x20
    ctx->r2 = ADD32(ctx->r2, 0X20);
    // 0x808000B0: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x808000B4: jr          $ra
    // 0x808000B8: nop

    return;
    // 0x808000B8: nop

;}
RECOMP_FUNC void func_808000BC_glintrosyncDll(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000C4: jal         0x800343B0
    // 0x808000C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x808000C8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808000CC: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x808000D0: lw          $v1, 0x75D0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X75D0);
    // 0x808000D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000D8: sltu        $at, $v0, $v1
    ctx->r1 = ctx->r2 < ctx->r3 ? 1 : 0;
    // 0x808000DC: bne         $at, $zero, L_808000EC
    if (ctx->r1 != 0) {
        // 0x808000E0: subu        $a0, $v0, $v1
        ctx->r4 = SUB32(ctx->r2, ctx->r3);
            goto L_808000EC;
    }
    // 0x808000E0: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
    // 0x808000E4: b           L_808000EC
    // 0x808000E8: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
        goto L_808000EC;
    // 0x808000E8: subu        $a0, $v0, $v1
    ctx->r4 = SUB32(ctx->r2, ctx->r3);
L_808000EC:
    // 0x808000EC: mtc1        $a0, $f4
    ctx->f4.u32l = ctx->r4;
    // 0x808000F0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(704, 0X480) << 16);
    // 0x808000F4: lwc1        $f8, 0x480($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(704, 0X480));
    // 0x808000F8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x808000FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800100: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80800104: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80800108: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8080010C: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80800110: nop

    // 0x80800114: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80800118: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x8080011C: nop

    // 0x80800120: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80800124: beql        $v0, $zero, L_80800174
    if (ctx->r2 == 0) {
        // 0x80800128: mfc1        $v0, $f16
        ctx->r2 = (int32_t)ctx->f16.u32l;
            goto L_80800174;
    }
    goto skip_0;
    // 0x80800128: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    skip_0:
    // 0x8080012C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800130: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80800134: sub.s       $f16, $f10, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80800138: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x8080013C: nop

    // 0x80800140: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80800144: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80800148: nop

    // 0x8080014C: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x80800150: bne         $v0, $zero, L_80800168
    if (ctx->r2 != 0) {
        // 0x80800154: nop
    
            goto L_80800168;
    }
    // 0x80800154: nop

    // 0x80800158: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x8080015C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80800160: b           L_80800180
    // 0x80800164: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
        goto L_80800180;
    // 0x80800164: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
L_80800168:
    // 0x80800168: b           L_80800180
    // 0x8080016C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80800180;
    // 0x8080016C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80800170: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
L_80800174:
    // 0x80800174: nop

    // 0x80800178: bltz        $v0, L_80800168
    if (SIGNED(ctx->r2) < 0) {
        // 0x8080017C: nop
    
            goto L_80800168;
    }
    // 0x8080017C: nop

L_80800180:
    // 0x80800180: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80800184: jr          $ra
    // 0x80800188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80800188: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void glintrosyncDll_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080018C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800194: jal         0x800343B0
    // 0x80800198: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    osGetCount_recomp(rdram, ctx);
        goto after_0;
    // 0x80800198: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080019C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x808001A0: sw          $v0, 0x75D0($at)
    MEM_W(0X75D0, ctx->r1) = ctx->r2;
    // 0x808001A4: jal         0x80000000
    // 0x808001A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_glintrosyncDll(rdram, ctx);
        goto after_1;
    // 0x808001A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808001AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001B0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x808001B4: sw          $v0, 0x75D4($at)
    MEM_W(0X75D4, ctx->r1) = ctx->r2;
    // 0x808001B8: jr          $ra
    // 0x808001BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x808001BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void glintrosyncDll_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001C4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808001C8: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x808001CC: addiu       $s1, $s1, 0x75D0
    ctx->r17 = ADD32(ctx->r17, 0X75D0);
    // 0x808001D0: lw          $v0, 0x4($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X4);
    // 0x808001D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001D8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808001DC: bltz        $v0, L_8080030C
    if (SIGNED(ctx->r2) < 0) {
        // 0x808001E0: sll         $t6, $v0, 3
        ctx->r14 = S32(ctx->r2 << 3);
            goto L_8080030C;
    }
    // 0x808001E0: sll         $t6, $v0, 3
    ctx->r14 = S32(ctx->r2 << 3);
    // 0x808001E4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(704, 0X4A4) << 16);
    // 0x808001E8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808001EC: lwc1        $f4, 0x4A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(704, 0X4A4));
    // 0x808001F0: lwc1        $f6, 0x8($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X8);
    // 0x808001F4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(704, 0X484) << 16);
    // 0x808001F8: lwc1        $f8, 0x484($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(704, 0X484));
    // 0x808001FC: sub.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80800200: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80800204: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80800208: mul.s       $f0, $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x8080020C: c.lt.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl < ctx->f10.fl;
    // 0x80800210: nop

    // 0x80800214: bc1fl       L_80800228
    if (!c1cs) {
        // 0x80800218: cfc1        $t7, $FpcCsr
        ctx->r15 = get_cop1_cs();
            goto L_80800228;
    }
    goto skip_0;
    // 0x80800218: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    skip_0:
    // 0x8080021C: b           L_808002A8
    // 0x80800220: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
        goto L_808002A8;
    // 0x80800220: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80800224: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
L_80800228:
    // 0x80800228: ctc1        $s0, $FpcCsr
    set_cop1_cs(ctx->r16);
    // 0x8080022C: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x80800230: cvt.w.s     $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    ctx->f16.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80800234: cfc1        $s0, $FpcCsr
    ctx->r16 = get_cop1_cs();
    // 0x80800238: nop

    // 0x8080023C: andi        $s0, $s0, 0x78
    ctx->r16 = ctx->r16 & 0X78;
    // 0x80800240: beql        $s0, $zero, L_80800290
    if (ctx->r16 == 0) {
        // 0x80800244: mfc1        $s0, $f16
        ctx->r16 = (int32_t)ctx->f16.u32l;
            goto L_80800290;
    }
    goto skip_1;
    // 0x80800244: mfc1        $s0, $f16
    ctx->r16 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x80800248: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8080024C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80800250: sub.s       $f16, $f0, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f16.fl = ctx->f0.fl - ctx->f16.fl;
    // 0x80800254: ctc1        $s0, $FpcCsr
    set_cop1_cs(ctx->r16);
    // 0x80800258: nop

    // 0x8080025C: cvt.w.s     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_S(ctx->f16.fl);
    // 0x80800260: cfc1        $s0, $FpcCsr
    ctx->r16 = get_cop1_cs();
    // 0x80800264: nop

    // 0x80800268: andi        $s0, $s0, 0x78
    ctx->r16 = ctx->r16 & 0X78;
    // 0x8080026C: bne         $s0, $zero, L_80800284
    if (ctx->r16 != 0) {
        // 0x80800270: nop
    
            goto L_80800284;
    }
    // 0x80800270: nop

    // 0x80800274: mfc1        $s0, $f16
    ctx->r16 = (int32_t)ctx->f16.u32l;
    // 0x80800278: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8080027C: b           L_8080029C
    // 0x80800280: or          $s0, $s0, $at
    ctx->r16 = ctx->r16 | ctx->r1;
        goto L_8080029C;
    // 0x80800280: or          $s0, $s0, $at
    ctx->r16 = ctx->r16 | ctx->r1;
L_80800284:
    // 0x80800284: b           L_8080029C
    // 0x80800288: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
        goto L_8080029C;
    // 0x80800288: addiu       $s0, $zero, -0x1
    ctx->r16 = ADD32(0, -0X1);
    // 0x8080028C: mfc1        $s0, $f16
    ctx->r16 = (int32_t)ctx->f16.u32l;
L_80800290:
    // 0x80800290: nop

    // 0x80800294: bltz        $s0, L_80800284
    if (SIGNED(ctx->r16) < 0) {
        // 0x80800298: nop
    
            goto L_80800284;
    }
    // 0x80800298: nop

L_8080029C:
    // 0x8080029C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x808002A0: nop

    // 0x808002A4: nop

L_808002A8:
    // 0x808002A8: jal         0x800000BC
    // 0x808002AC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_808000BC_glintrosyncDll(rdram, ctx);
        goto after_0;
    // 0x808002AC: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_0:
    // 0x808002B0: sltu        $at, $v0, $s0
    ctx->r1 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x808002B4: beq         $at, $zero, L_808002D0
    if (ctx->r1 == 0) {
        // 0x808002B8: nop
    
            goto L_808002D0;
    }
    // 0x808002B8: nop

L_808002BC:
    // 0x808002BC: jal         0x800000BC
    // 0x808002C0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_808000BC_glintrosyncDll(rdram, ctx);
        goto after_1;
    // 0x808002C0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_1:
    // 0x808002C4: sltu        $at, $v0, $s0
    ctx->r1 = ctx->r2 < ctx->r16 ? 1 : 0;
    // 0x808002C8: bne         $at, $zero, L_808002BC
    if (ctx->r1 != 0) {
        // 0x808002CC: nop
    
            goto L_808002BC;
    }
    // 0x808002CC: nop

L_808002D0:
    // 0x808002D0: jal         0x800000BC
    // 0x808002D4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_808000BC_glintrosyncDll(rdram, ctx);
        goto after_2;
    // 0x808002D4: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_2:
    // 0x808002D8: mtc1        $v0, $f18
    ctx->f18.u32l = ctx->r2;
    // 0x808002DC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x808002E0: bgez        $v0, L_808002F4
    if (SIGNED(ctx->r2) >= 0) {
        // 0x808002E4: cvt.s.w     $f4, $f18
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
            goto L_808002F4;
    }
    // 0x808002E4: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x808002E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808002EC: nop

    // 0x808002F0: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_808002F4:
    // 0x808002F4: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(704, 0X488) << 16);
    // 0x808002F8: lwc1        $f8, 0x488($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(704, 0X488));
    // 0x808002FC: lwc1        $f16, 0x8($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X8);
    // 0x80800300: div.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80800304: add.s       $f18, $f16, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f10.fl;
    // 0x80800308: swc1        $f18, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->f18.u32l;
L_8080030C:
    // 0x8080030C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800310: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800314: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800318: jr          $ra
    // 0x8080031C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8080031C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void glintrosyncDll_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800320: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80800324: jr          $ra
    // 0x80800328: swc1        $f12, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f12.u32l;
    return;
    // 0x80800328: swc1        $f12, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f12.u32l;
;}
RECOMP_FUNC void glintrosyncDll_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080032C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80800330: jr          $ra
    // 0x80800334: lwc1        $f0, 0x75D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X75D8);
    return;
    // 0x80800334: lwc1        $f0, 0x75D8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X75D8);
;}
RECOMP_FUNC void glintrosyncDll_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800338: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8080033C: addiu       $v0, $v0, 0x75D0
    ctx->r2 = ADD32(ctx->r2, 0X75D0);
    // 0x80800340: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(704, 0X48C) << 16);
    // 0x80800344: lwc1        $f2, 0x48C($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(704, 0X48C));
    // 0x80800348: lwc1        $f0, 0x8($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X8);
    // 0x8080034C: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    // 0x80800350: add.s       $f8, $f0, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x80800354: bc1f        L_8080037C
    if (!c1cs) {
        // 0x80800358: nop
    
            goto L_8080037C;
    }
    // 0x80800358: nop

    // 0x8080035C: add.s       $f4, $f0, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f0.fl + ctx->f12.fl;
    // 0x80800360: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(704, 0X490) << 16);
    // 0x80800364: c.le.s      $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f2.fl <= ctx->f4.fl;
    // 0x80800368: nop

    // 0x8080036C: bc1f        L_8080037C
    if (!c1cs) {
        // 0x80800370: nop
    
            goto L_8080037C;
    }
    // 0x80800370: nop

    // 0x80800374: lwc1        $f6, 0x490($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(704, 0X490));
    // 0x80800378: swc1        $f6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f6.u32l;
L_8080037C:
    // 0x8080037C: jr          $ra
    // 0x80800380: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
    return;
    // 0x80800380: swc1        $f8, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f8.u32l;
;}
RECOMP_FUNC void glintrosyncDll_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800384: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800388: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080038C: jal         0x800C954C
    // 0x80800390: nop

    func_800C954C(rdram, ctx);
        goto after_0;
    // 0x80800390: nop

    after_0:
    // 0x80800394: beq         $v0, $zero, L_808003B8
    if (ctx->r2 == 0) {
        // 0x80800398: nop
    
            goto L_808003B8;
    }
    // 0x80800398: nop

    // 0x8080039C: jal         0x800D8FF8
    // 0x808003A0: nop

    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x808003A0: nop

    after_1:
    // 0x808003A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x808003A8: lwc1        $f4, 0x75DC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75DC);
    // 0x808003AC: mul.s       $f0, $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x808003B0: b           L_808003D4
    // 0x808003B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808003D4;
    // 0x808003B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808003B8:
    // 0x808003B8: jal         0x800D9004
    // 0x808003BC: nop

    func_800D9004(rdram, ctx);
        goto after_2;
    // 0x808003BC: nop

    after_2:
    // 0x808003C0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x808003C4: lwc1        $f6, 0x75DC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75DC);
    // 0x808003C8: mul.s       $f0, $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x808003CC: nop

    // 0x808003D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808003D4:
    // 0x808003D4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003D8: jr          $ra
    // 0x808003DC: nop

    return;
    // 0x808003DC: nop

;}
RECOMP_FUNC void glintrosyncDll_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003E8: jal         0x80088268
    // 0x808003EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _gcsectionDll_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x808003EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808003F0: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x808003F4: bne         $v0, $at, L_80800410
    if (ctx->r2 != ctx->r1) {
        // 0x808003F8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800410;
    }
    // 0x808003F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808003FC: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80800400: addiu       $a1, $a1, 0x75D0
    ctx->r5 = ADD32(ctx->r5, 0X75D0);
    // 0x80800404: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800408: b           L_8080041C
    // 0x8080040C: sb          $t6, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r14;
        goto L_8080041C;
    // 0x8080040C: sb          $t6, 0x10($a1)
    MEM_B(0X10, ctx->r5) = ctx->r14;
L_80800410:
    // 0x80800410: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x80800414: addiu       $a1, $a1, 0x75D0
    ctx->r5 = ADD32(ctx->r5, 0X75D0);
    // 0x80800418: sb          $zero, 0x10($a1)
    MEM_B(0X10, ctx->r5) = 0;
L_8080041C:
    // 0x8080041C: lbu         $t7, 0x10($a1)
    ctx->r15 = MEM_BU(ctx->r5, 0X10);
    // 0x80800420: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800424: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800428: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(704, 0X4F8) << 16);
    // 0x8080042C: beq         $t7, $zero, L_80800464
    if (ctx->r15 == 0) {
        // 0x80800430: swc1        $f4, 0xC($a1)
        MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
            goto L_80800464;
    }
    // 0x80800430: swc1        $f4, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f4.u32l;
    // 0x80800434: lui         $v1, 0x0
    ctx->r3 = S32(RELOC_HI16(704, 0X5D0) << 16);
    // 0x80800438: addiu       $v1, $v1, 0x5D0
    ctx->r3 = ADD32(ctx->r3, (int16_t)RELOC_LO16(704, 0X5D0));
    // 0x8080043C: addiu       $v0, $v0, 0x4F8
    ctx->r2 = ADD32(ctx->r2, (int16_t)RELOC_LO16(704, 0X4F8));
    // 0x80800440: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
L_80800444:
    // 0x80800444: bnel        $a0, $t8, L_8080045C
    if (ctx->r4 != ctx->r24) {
        // 0x80800448: addiu       $v0, $v0, 0x8
        ctx->r2 = ADD32(ctx->r2, 0X8);
            goto L_8080045C;
    }
    goto skip_0;
    // 0x80800448: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
    skip_0:
    // 0x8080044C: lwc1        $f6, 0x4($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X4);
    // 0x80800450: b           L_80800464
    // 0x80800454: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
        goto L_80800464;
    // 0x80800454: swc1        $f6, 0xC($a1)
    MEM_W(0XC, ctx->r5) = ctx->f6.u32l;
    // 0x80800458: addiu       $v0, $v0, 0x8
    ctx->r2 = ADD32(ctx->r2, 0X8);
L_8080045C:
    // 0x8080045C: bnel        $v0, $v1, L_80800444
    if (ctx->r2 != ctx->r3) {
        // 0x80800460: lw          $t8, 0x0($v0)
        ctx->r24 = MEM_W(ctx->r2, 0X0);
            goto L_80800444;
    }
    goto skip_1;
    // 0x80800460: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    skip_1:
L_80800464:
    // 0x80800464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080046C: jr          $ra
    // 0x80800470: nop

    return;
    // 0x80800470: nop

    // 0x80800474: nop

    // 0x80800478: nop

    // 0x8080047C: nop

;}
RECOMP_FUNC void glpackvtx_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80800004: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8080000C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80800010: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800014: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800018: or          $s2, $a2, $zero
    ctx->r18 = ctx->r6 | 0;
    // 0x8080001C: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x80800020: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80800024: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x80800028: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8080002C: jal         0x800B2344
    // 0x80800030: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_800B2344(rdram, ctx);
        goto after_0;
    // 0x80800030: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x80800034: addiu       $s3, $zero, 0xA
    ctx->r19 = ADD32(0, 0XA);
    // 0x80800038: multu       $v0, $s3
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x8080003C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800040: mflo        $a0
    ctx->r4 = lo;
    // 0x80800044: jal         0x8001ACCC
    // 0x80800048: nop

    func_8001ACCC(rdram, ctx);
        goto after_1;
    // 0x80800048: nop

    after_1:
    // 0x8080004C: multu       $s1, $s3
    result = U64(U32(ctx->r17)) * U64(U32(ctx->r19)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800050: sw          $v0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r2;
    // 0x80800054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800058: mflo        $t6
    ctx->r14 = lo;
    // 0x8080005C: addu        $s6, $t6, $v0
    ctx->r22 = ADD32(ctx->r14, ctx->r2);
    // 0x80800060: jal         0x800B2190
    // 0x80800064: nop

    func_800B2190(rdram, ctx);
        goto after_2;
    // 0x80800064: nop

    after_2:
    // 0x80800068: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x8080006C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800070: addiu       $s5, $sp, 0x44
    ctx->r21 = ADD32(ctx->r29, 0X44);
    // 0x80800074: sltu        $at, $s0, $s6
    ctx->r1 = ctx->r16 < ctx->r22 ? 1 : 0;
    // 0x80800078: beq         $at, $zero, L_80800190
    if (ctx->r1 == 0) {
        // 0x8080007C: addiu       $s3, $zero, 0xFF
        ctx->r19 = ADD32(0, 0XFF);
            goto L_80800190;
    }
    // 0x8080007C: addiu       $s3, $zero, 0xFF
    ctx->r19 = ADD32(0, 0XFF);
L_80800080:
    // 0x80800080: beql        $s4, $zero, L_808000F0
    if (ctx->r20 == 0) {
        // 0x80800084: lbu         $t1, 0xC($s1)
        ctx->r9 = MEM_BU(ctx->r17, 0XC);
            goto L_808000F0;
    }
    goto skip_0;
    // 0x80800084: lbu         $t1, 0xC($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0XC);
    skip_0:
    // 0x80800088: lhu         $a1, 0x6($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X6);
    // 0x8080008C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x80800090: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x80800094: andi        $t8, $a1, 0x1FF
    ctx->r24 = ctx->r5 & 0X1FF;
    // 0x80800098: jal         0x80087958
    // 0x8080009C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    _dbpalette_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x8080009C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    after_3:
    // 0x808000A0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x808000A4: lbu         $t0, 0xC($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0XC);
    // 0x808000A8: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808000AC: mflo        $t1
    ctx->r9 = lo;
    // 0x808000B0: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x808000B4: sb          $t2, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r10;
    // 0x808000B8: lbu         $t4, 0xD($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0XD);
    // 0x808000BC: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x808000C0: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808000C4: mflo        $t5
    ctx->r13 = lo;
    // 0x808000C8: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x808000CC: sb          $t6, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r14;
    // 0x808000D0: lbu         $t8, 0xE($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0XE);
    // 0x808000D4: lw          $t7, 0x4C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4C);
    // 0x808000D8: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808000DC: mflo        $t9
    ctx->r25 = lo;
    // 0x808000E0: sra         $t0, $t9, 8
    ctx->r8 = S32(SIGNED(ctx->r25) >> 8);
    // 0x808000E4: b           L_80800104
    // 0x808000E8: sb          $t0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r8;
        goto L_80800104;
    // 0x808000E8: sb          $t0, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r8;
    // 0x808000EC: lbu         $t1, 0xC($s1)
    ctx->r9 = MEM_BU(ctx->r17, 0XC);
L_808000F0:
    // 0x808000F0: sb          $t1, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r9;
    // 0x808000F4: lbu         $t2, 0xD($s1)
    ctx->r10 = MEM_BU(ctx->r17, 0XD);
    // 0x808000F8: sb          $t2, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r10;
    // 0x808000FC: lbu         $t3, 0xE($s1)
    ctx->r11 = MEM_BU(ctx->r17, 0XE);
    // 0x80800100: sb          $t3, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r11;
L_80800104:
    // 0x80800104: beq         $s2, $zero, L_80800174
    if (ctx->r18 == 0) {
        // 0x80800108: addiu       $s1, $s1, 0x10
        ctx->r17 = ADD32(ctx->r17, 0X10);
            goto L_80800174;
    }
    // 0x80800108: addiu       $s1, $s1, 0x10
    ctx->r17 = ADD32(ctx->r17, 0X10);
    // 0x8080010C: lw          $v0, 0x0($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X0);
    // 0x80800110: bnel        $s3, $v0, L_80800134
    if (ctx->r19 != ctx->r2) {
        // 0x80800114: lbu         $t6, 0x6($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X6);
            goto L_80800134;
    }
    goto skip_1;
    // 0x80800114: lbu         $t6, 0x6($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X6);
    skip_1:
    // 0x80800118: lw          $t4, 0x4($s2)
    ctx->r12 = MEM_W(ctx->r18, 0X4);
    // 0x8080011C: bnel        $s3, $t4, L_80800134
    if (ctx->r19 != ctx->r12) {
        // 0x80800120: lbu         $t6, 0x6($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X6);
            goto L_80800134;
    }
    goto skip_2;
    // 0x80800120: lbu         $t6, 0x6($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X6);
    skip_2:
    // 0x80800124: lw          $t5, 0x8($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X8);
    // 0x80800128: beql        $s3, $t5, L_80800178
    if (ctx->r19 == ctx->r13) {
        // 0x8080012C: sh          $zero, 0x4($s0)
        MEM_H(0X4, ctx->r16) = 0;
            goto L_80800178;
    }
    goto skip_3;
    // 0x8080012C: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
    skip_3:
    // 0x80800130: lbu         $t6, 0x6($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X6);
L_80800134:
    // 0x80800134: lbu         $t0, 0x7($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X7);
    // 0x80800138: lbu         $t4, 0x8($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X8);
    // 0x8080013C: multu       $v0, $t6
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r14)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800140: mflo        $t7
    ctx->r15 = lo;
    // 0x80800144: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x80800148: sb          $t8, 0x6($s0)
    MEM_B(0X6, ctx->r16) = ctx->r24;
    // 0x8080014C: lw          $t9, 0x4($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X4);
    // 0x80800150: multu       $t9, $t0
    result = U64(U32(ctx->r25)) * U64(U32(ctx->r8)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800154: mflo        $t1
    ctx->r9 = lo;
    // 0x80800158: sra         $t2, $t1, 8
    ctx->r10 = S32(SIGNED(ctx->r9) >> 8);
    // 0x8080015C: sb          $t2, 0x7($s0)
    MEM_B(0X7, ctx->r16) = ctx->r10;
    // 0x80800160: lw          $t3, 0x8($s2)
    ctx->r11 = MEM_W(ctx->r18, 0X8);
    // 0x80800164: multu       $t3, $t4
    result = U64(U32(ctx->r11)) * U64(U32(ctx->r12)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80800168: mflo        $t5
    ctx->r13 = lo;
    // 0x8080016C: sra         $t6, $t5, 8
    ctx->r14 = S32(SIGNED(ctx->r13) >> 8);
    // 0x80800170: sb          $t6, 0x8($s0)
    MEM_B(0X8, ctx->r16) = ctx->r14;
L_80800174:
    // 0x80800174: sh          $zero, 0x4($s0)
    MEM_H(0X4, ctx->r16) = 0;
L_80800178:
    // 0x80800178: lh          $v0, 0x4($s0)
    ctx->r2 = MEM_H(ctx->r16, 0X4);
    // 0x8080017C: addiu       $s0, $s0, 0xA
    ctx->r16 = ADD32(ctx->r16, 0XA);
    // 0x80800180: sltu        $at, $s0, $s6
    ctx->r1 = ctx->r16 < ctx->r22 ? 1 : 0;
    // 0x80800184: sh          $v0, -0x8($s0)
    MEM_H(-0X8, ctx->r16) = ctx->r2;
    // 0x80800188: bne         $at, $zero, L_80800080
    if (ctx->r1 != 0) {
        // 0x8080018C: sh          $v0, -0xA($s0)
        MEM_H(-0XA, ctx->r16) = ctx->r2;
            goto L_80800080;
    }
    // 0x8080018C: sh          $v0, -0xA($s0)
    MEM_H(-0XA, ctx->r16) = ctx->r2;
L_80800190:
    // 0x80800190: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80800194: lw          $v0, 0x60($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X60);
    // 0x80800198: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080019C: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x808001A0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x808001A4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x808001A8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x808001AC: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x808001B0: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x808001B4: jr          $ra
    // 0x808001B8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x808001B8: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void glpackvtx_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001C4: jal         0x8001B084
    // 0x808001C8: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x808001C8: nop

    after_0:
    // 0x808001CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001D4: jr          $ra
    // 0x808001D8: nop

    return;
    // 0x808001D8: nop

    // 0x808001DC: nop

;}
RECOMP_FUNC void glrecord_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x80800004: addiu       $a3, $a3, -0x2A50
    ctx->r7 = ADD32(ctx->r7, -0X2A50);
    // 0x80800008: lw          $v0, 0x8($a3)
    ctx->r2 = MEM_W(ctx->r7, 0X8);
    // 0x8080000C: lw          $t0, 0xC($a3)
    ctx->r8 = MEM_W(ctx->r7, 0XC);
    // 0x80800010: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x80800014: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80800018: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8080001C: addiu       $t8, $v0, 0x1
    ctx->r24 = ADD32(ctx->r2, 0X1);
    // 0x80800020: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x80800024: slt         $a2, $t8, $t0
    ctx->r6 = SIGNED(ctx->r24) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80800028: sw          $t8, 0x8($a3)
    MEM_W(0X8, ctx->r7) = ctx->r24;
    // 0x8080002C: bne         $a2, $zero, L_8080003C
    if (ctx->r6 != 0) {
        // 0x80800030: addu        $v1, $t6, $t7
        ctx->r3 = ADD32(ctx->r14, ctx->r15);
            goto L_8080003C;
    }
    // 0x80800030: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80800034: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x80800038: addiu       $v1, $v1, -0x2A40
    ctx->r3 = ADD32(ctx->r3, -0X2A40);
L_8080003C:
    // 0x8080003C: lbu         $t1, 0x0($v1)
    ctx->r9 = MEM_BU(ctx->r3, 0X0);
    // 0x80800040: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80800044: sb          $t1, 0x2($a0)
    MEM_B(0X2, ctx->r4) = ctx->r9;
    // 0x80800048: lbu         $t2, 0x1($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X1);
    // 0x8080004C: sb          $t2, 0x3($a0)
    MEM_B(0X3, ctx->r4) = ctx->r10;
    // 0x80800050: lhu         $t3, 0x2($v1)
    ctx->r11 = MEM_HU(ctx->r3, 0X2);
    // 0x80800054: sh          $t3, 0x0($a0)
    MEM_H(0X0, ctx->r4) = ctx->r11;
    // 0x80800058: lbu         $t4, 0x4($v1)
    ctx->r12 = MEM_BU(ctx->r3, 0X4);
    // 0x8080005C: jr          $ra
    // 0x80800060: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
    return;
    // 0x80800060: sw          $t4, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r12;
;}
RECOMP_FUNC void glrecord_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80800068: divu        $zero, $a1, $at
    lo = S32(U32(ctx->r5) / U32(ctx->r1)); hi = S32(U32(ctx->r5) % U32(ctx->r1));
    // 0x8080006C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80800070: addiu       $v0, $v0, -0x2A50
    ctx->r2 = ADD32(ctx->r2, -0X2A50);
    // 0x80800074: mflo        $t6
    ctx->r14 = lo;
    // 0x80800078: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x8080007C: sw          $a0, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r4;
    // 0x80800080: sw          $t6, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r14;
    // 0x80800084: jr          $ra
    // 0x80800088: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
    return;
    // 0x80800088: sw          $zero, 0x8($v0)
    MEM_W(0X8, ctx->r2) = 0;
;}
RECOMP_FUNC void glrecord_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080008C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80800090: lw          $v0, -0x2A48($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X2A48);
    // 0x80800094: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80800098: subu        $t6, $t6, $v0
    ctx->r14 = SUB32(ctx->r14, ctx->r2);
    // 0x8080009C: jr          $ra
    // 0x808000A0: sll         $v0, $t6, 1
    ctx->r2 = S32(ctx->r14 << 1);
    return;
    // 0x808000A0: sll         $v0, $t6, 1
    ctx->r2 = S32(ctx->r14 << 1);
;}
RECOMP_FUNC void glrecord_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000A4: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x808000A8: lw          $t6, -0x2A4C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X2A4C);
    // 0x808000AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000B8: beq         $t6, $zero, L_808000C8
    if (ctx->r14 == 0) {
        // 0x808000BC: sw          $a1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r5;
            goto L_808000C8;
    }
    // 0x808000BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808000C0: jal         0x80000130
    // 0x808000C4: nop

    glrecord_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x808000C4: nop

    after_0:
L_808000C8:
    // 0x808000C8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x808000CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x808000D0: jal         0x800D5B24
    // 0x808000D4: sb          $t7, -0x2A3C($at)
    MEM_B(-0X2A3C, ctx->r1) = ctx->r15;
    func_800D5B24(rdram, ctx);
        goto after_1;
    // 0x808000D4: sb          $t7, -0x2A3C($at)
    MEM_B(-0X2A3C, ctx->r1) = ctx->r15;
    after_1:
    // 0x808000D8: jal         0x80088268
    // 0x808000DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _gcsectionDll_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x808000DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808000E0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x808000E4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x808000E8: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x808000EC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x808000F0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x808000F4: addu        $a0, $v0, $t9
    ctx->r4 = ADD32(ctx->r2, ctx->r25);
    // 0x808000F8: jal         0x800D5B34
    // 0x808000FC: addiu       $a0, $a0, 0xC57
    ctx->r4 = ADD32(ctx->r4, 0XC57);
    func_800D5B34(rdram, ctx);
        goto after_3;
    // 0x808000FC: addiu       $a0, $a0, 0xC57
    ctx->r4 = ADD32(ctx->r4, 0XC57);
    after_3:
    // 0x80800100: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80800104: sw          $v0, -0x2A4C($at)
    MEM_W(-0X2A4C, ctx->r1) = ctx->r2;
    // 0x80800108: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x8080010C: lw          $v1, -0x2A4C($v1)
    ctx->r3 = MEM_W(ctx->r3, -0X2A4C);
    // 0x80800110: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800114: lw          $a1, 0x0($v1)
    ctx->r5 = MEM_W(ctx->r3, 0X0);
    // 0x80800118: jal         0x80000064
    // 0x8080011C: addiu       $a0, $v1, 0x4
    ctx->r4 = ADD32(ctx->r3, 0X4);
    glrecord_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x8080011C: addiu       $a0, $v1, 0x4
    ctx->r4 = ADD32(ctx->r3, 0X4);
    after_4:
    // 0x80800120: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800124: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800128: jr          $ra
    // 0x8080012C: nop

    return;
    // 0x8080012C: nop

;}
RECOMP_FUNC void glrecord_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800130: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80800134: lw          $a0, -0x2A4C($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2A4C);
    // 0x80800138: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080013C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800140: beql        $a0, $zero, L_8080015C
    if (ctx->r4 == 0) {
        // 0x80800144: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080015C;
    }
    goto skip_0;
    // 0x80800144: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800148: jal         0x800D56C4
    // 0x8080014C: nop

    func_800D56C4(rdram, ctx);
        goto after_0;
    // 0x8080014C: nop

    after_0:
    // 0x80800150: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80800154: sw          $zero, -0x2A4C($at)
    MEM_W(-0X2A4C, ctx->r1) = 0;
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
RECOMP_FUNC void glreflight_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x80800004: lw          $v0, -0x24AC($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X24AC);
    // 0x80800008: lui         $at, 0xACC9
    ctx->r1 = S32(0XACC9 << 16);
    // 0x8080000C: ori         $at, $at, 0x3EE
    ctx->r1 = ctx->r1 | 0X3EE;
    // 0x80800010: xor         $t6, $v0, $at
    ctx->r14 = ctx->r2 ^ ctx->r1;
    // 0x80800014: jr          $ra
    // 0x80800018: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    return;
    // 0x80800018: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x8080001C: nop

;}
RECOMP_FUNC void glrtc_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80800004: addiu       $t6, $a0, 0x3
    ctx->r14 = ADD32(ctx->r4, 0X3);
    // 0x80800008: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8080000C: sw          $fp, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r30;
    // 0x80800010: sw          $s7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r23;
    // 0x80800014: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x80800018: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8080001C: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80800020: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80800024: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80800028: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8080002C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800030: sw          $t6, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r14;
    // 0x80800034: lbu         $s1, 0x1($a0)
    ctx->r17 = MEM_BU(ctx->r4, 0X1);
    // 0x80800038: lbu         $t8, 0x2($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X2);
    // 0x8080003C: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x80800040: sll         $t7, $s1, 2
    ctx->r15 = S32(ctx->r17 << 2);
    // 0x80800044: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x80800048: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8080004C: or          $s1, $t7, $zero
    ctx->r17 = ctx->r15 | 0;
    // 0x80800050: blez        $t8, L_80800140
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80800054: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80800140;
    }
    // 0x80800054: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x80800058: addiu       $fp, $zero, 0x2
    ctx->r30 = ADD32(0, 0X2);
    // 0x8080005C: addiu       $s7, $zero, 0x1
    ctx->r23 = ADD32(0, 0X1);
    // 0x80800060: addiu       $s5, $sp, 0x68
    ctx->r21 = ADD32(ctx->r29, 0X68);
    // 0x80800064: lbu         $t9, 0x1($s6)
    ctx->r25 = MEM_BU(ctx->r22, 0X1);
L_80800068:
    // 0x80800068: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8080006C: blezl       $t9, L_80800130
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80800070: lbu         $t8, 0x2($s2)
        ctx->r24 = MEM_BU(ctx->r18, 0X2);
            goto L_80800130;
    }
    goto skip_0;
    // 0x80800070: lbu         $t8, 0x2($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X2);
    skip_0:
    // 0x80800074: lbu         $v0, 0x0($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X0);
L_80800078:
    // 0x80800078: sll         $t0, $s3, 2
    ctx->r8 = S32(ctx->r19 << 2);
    // 0x8080007C: beq         $v0, $zero, L_8080009C
    if (ctx->r2 == 0) {
        // 0x80800080: nop
    
            goto L_8080009C;
    }
    // 0x80800080: nop

    // 0x80800084: beq         $v0, $s7, L_808000C8
    if (ctx->r2 == ctx->r23) {
        // 0x80800088: sll         $t6, $s3, 2
        ctx->r14 = S32(ctx->r19 << 2);
            goto L_808000C8;
    }
    // 0x80800088: sll         $t6, $s3, 2
    ctx->r14 = S32(ctx->r19 << 2);
    // 0x8080008C: beq         $v0, $fp, L_808000F4
    if (ctx->r2 == ctx->r30) {
        // 0x80800090: sll         $t2, $s3, 2
        ctx->r10 = S32(ctx->r19 << 2);
            goto L_808000F4;
    }
    // 0x80800090: sll         $t2, $s3, 2
    ctx->r10 = S32(ctx->r19 << 2);
    // 0x80800094: b           L_8080011C
    // 0x80800098: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
        goto L_8080011C;
    // 0x80800098: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
L_8080009C:
    // 0x8080009C: multu       $t0, $s1
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808000A0: sll         $t5, $s0, 3
    ctx->r13 = S32(ctx->r16 << 3);
    // 0x808000A4: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x808000A8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x808000AC: mflo        $t1
    ctx->r9 = lo;
    // 0x808000B0: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x808000B4: addu        $t3, $s4, $t2
    ctx->r11 = ADD32(ctx->r20, ctx->r10);
    // 0x808000B8: jal         0x80000170
    // 0x808000BC: addu        $a1, $t3, $t5
    ctx->r5 = ADD32(ctx->r11, ctx->r13);
    func_80800170_glrtc(rdram, ctx);
        goto after_0;
    // 0x808000BC: addu        $a1, $t3, $t5
    ctx->r5 = ADD32(ctx->r11, ctx->r13);
    after_0:
    // 0x808000C0: b           L_8080011C
    // 0x808000C4: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
        goto L_8080011C;
    // 0x808000C4: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
L_808000C8:
    // 0x808000C8: multu       $t6, $s1
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808000CC: sll         $t1, $s0, 4
    ctx->r9 = S32(ctx->r16 << 4);
    // 0x808000D0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x808000D4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x808000D8: mflo        $t7
    ctx->r15 = lo;
    // 0x808000DC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x808000E0: addu        $t9, $s4, $t8
    ctx->r25 = ADD32(ctx->r20, ctx->r24);
    // 0x808000E4: jal         0x8000031C
    // 0x808000E8: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    func_8080031C_glrtc(rdram, ctx);
        goto after_1;
    // 0x808000E8: addu        $a1, $t9, $t1
    ctx->r5 = ADD32(ctx->r25, ctx->r9);
    after_1:
    // 0x808000EC: b           L_8080011C
    // 0x808000F0: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
        goto L_8080011C;
    // 0x808000F0: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
L_808000F4:
    // 0x808000F4: multu       $t2, $s1
    result = U64(U32(ctx->r10)) * U64(U32(ctx->r17)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x808000F8: sll         $t7, $s0, 4
    ctx->r15 = S32(ctx->r16 << 4);
    // 0x808000FC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80800100: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80800104: mflo        $t4
    ctx->r12 = lo;
    // 0x80800108: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x8080010C: addu        $t5, $s4, $t3
    ctx->r13 = ADD32(ctx->r20, ctx->r11);
    // 0x80800110: jal         0x80000474
    // 0x80800114: addu        $a1, $t5, $t7
    ctx->r5 = ADD32(ctx->r13, ctx->r15);
    func_80800474_glrtc(rdram, ctx);
        goto after_2;
    // 0x80800114: addu        $a1, $t5, $t7
    ctx->r5 = ADD32(ctx->r13, ctx->r15);
    after_2:
    // 0x80800118: lbu         $v0, 0x1($s2)
    ctx->r2 = MEM_BU(ctx->r18, 0X1);
L_8080011C:
    // 0x8080011C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800120: slt         $at, $s0, $v0
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80800124: bnel        $at, $zero, L_80800078
    if (ctx->r1 != 0) {
        // 0x80800128: lbu         $v0, 0x0($s6)
        ctx->r2 = MEM_BU(ctx->r22, 0X0);
            goto L_80800078;
    }
    goto skip_1;
    // 0x80800128: lbu         $v0, 0x0($s6)
    ctx->r2 = MEM_BU(ctx->r22, 0X0);
    skip_1:
    // 0x8080012C: lbu         $t8, 0x2($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X2);
L_80800130:
    // 0x80800130: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80800134: slt         $at, $s3, $t8
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80800138: bnel        $at, $zero, L_80800068
    if (ctx->r1 != 0) {
        // 0x8080013C: lbu         $t9, 0x1($s6)
        ctx->r25 = MEM_BU(ctx->r22, 0X1);
            goto L_80800068;
    }
    goto skip_2;
    // 0x8080013C: lbu         $t9, 0x1($s6)
    ctx->r25 = MEM_BU(ctx->r22, 0X1);
    skip_2:
L_80800140:
    // 0x80800140: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80800144: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800148: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8080014C: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80800150: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80800154: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80800158: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8080015C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x80800160: lw          $s7, 0x34($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X34);
    // 0x80800164: lw          $fp, 0x38($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X38);
    // 0x80800168: jr          $ra
    // 0x8080016C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x8080016C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80800170_glrtc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800170: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80800174: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800178: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8080017C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80800180: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800184: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80800188: sw          $a2, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r6;
    // 0x8080018C: lw          $s2, 0x0($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X0);
    // 0x80800190: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x80800194: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80800198: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x8080019C: jal         0x80031BF0
    // 0x808001A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    bcopy_recomp(rdram, ctx);
        goto after_0;
    // 0x808001A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x808001A4: lhu         $t7, 0x44($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X44);
    // 0x808001A8: lhu         $t0, 0x46($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X46);
    // 0x808001AC: addiu       $s0, $sp, 0x38
    ctx->r16 = ADD32(ctx->r29, 0X38);
    // 0x808001B0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808001B4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x808001B8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x808001BC: sh          $t8, 0x3A($sp)
    MEM_H(0X3A, ctx->r29) = ctx->r24;
    // 0x808001C0: sh          $t9, 0x3C($sp)
    MEM_H(0X3C, ctx->r29) = ctx->r25;
    // 0x808001C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C8: ori         $a1, $zero, 0xF800
    ctx->r5 = 0 | 0XF800;
    // 0x808001CC: sh          $t7, 0x38($sp)
    MEM_H(0X38, ctx->r29) = ctx->r15;
    // 0x808001D0: jal         0x800002C8
    // 0x808001D4: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
    func_808002C8_glrtc(rdram, ctx);
        goto after_1;
    // 0x808001D4: sh          $t0, 0x3E($sp)
    MEM_H(0X3E, ctx->r29) = ctx->r8;
    after_1:
    // 0x808001D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001DC: jal         0x800002C8
    // 0x808001E0: addiu       $a1, $zero, 0x7C0
    ctx->r5 = ADD32(0, 0X7C0);
    func_808002C8_glrtc(rdram, ctx);
        goto after_2;
    // 0x808001E0: addiu       $a1, $zero, 0x7C0
    ctx->r5 = ADD32(0, 0X7C0);
    after_2:
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E8: jal         0x800002C8
    // 0x808001EC: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    func_808002C8_glrtc(rdram, ctx);
        goto after_3;
    // 0x808001EC: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    after_3:
    // 0x808001F0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808001F4: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x808001F8: jal         0x80031BF0
    // 0x808001FC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    bcopy_recomp(rdram, ctx);
        goto after_4;
    // 0x808001FC: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_4:
    // 0x80800200: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80800204: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80800208: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8080020C: sll         $t1, $a0, 1
    ctx->r9 = S32(ctx->r4 << 1);
    // 0x80800210: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80800214: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
L_80800218:
    // 0x80800218: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8080021C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80800220: andi        $t3, $t2, 0x3
    ctx->r11 = ctx->r10 & 0X3;
    // 0x80800224: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x80800228: addu        $t5, $s0, $t4
    ctx->r13 = ADD32(ctx->r16, ctx->r12);
    // 0x8080022C: lhu         $t6, 0x0($t5)
    ctx->r14 = MEM_HU(ctx->r13, 0X0);
    // 0x80800230: sh          $t6, 0x0($s1)
    MEM_H(0X0, ctx->r17) = ctx->r14;
    // 0x80800234: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80800238: srl         $t8, $t7, 2
    ctx->r24 = S32(U32(ctx->r15) >> 2);
    // 0x8080023C: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80800240: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80800244: addu        $t1, $s0, $t0
    ctx->r9 = ADD32(ctx->r16, ctx->r8);
    // 0x80800248: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x8080024C: lhu         $t2, 0x0($t1)
    ctx->r10 = MEM_HU(ctx->r9, 0X0);
    // 0x80800250: sh          $t2, 0x2($s1)
    MEM_H(0X2, ctx->r17) = ctx->r10;
    // 0x80800254: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x80800258: srl         $t4, $t3, 2
    ctx->r12 = S32(U32(ctx->r11) >> 2);
    // 0x8080025C: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x80800260: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80800264: addu        $t7, $s0, $t6
    ctx->r15 = ADD32(ctx->r16, ctx->r14);
    // 0x80800268: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
    // 0x8080026C: lhu         $t8, 0x0($t7)
    ctx->r24 = MEM_HU(ctx->r15, 0X0);
    // 0x80800270: sh          $t8, 0x4($s1)
    MEM_H(0X4, ctx->r17) = ctx->r24;
    // 0x80800274: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x80800278: srl         $t0, $t9, 2
    ctx->r8 = S32(U32(ctx->r25) >> 2);
    // 0x8080027C: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x80800280: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80800284: addu        $t3, $s0, $t2
    ctx->r11 = ADD32(ctx->r16, ctx->r10);
    // 0x80800288: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x8080028C: lhu         $t4, 0x0($t3)
    ctx->r12 = MEM_HU(ctx->r11, 0X0);
    // 0x80800290: sh          $t4, 0x6($s1)
    MEM_H(0X6, ctx->r17) = ctx->r12;
    // 0x80800294: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80800298: addu        $s1, $s1, $a0
    ctx->r17 = ADD32(ctx->r17, ctx->r4);
    // 0x8080029C: srl         $t6, $t5, 2
    ctx->r14 = S32(U32(ctx->r13) >> 2);
    // 0x808002A0: bne         $v1, $a1, L_80800218
    if (ctx->r3 != ctx->r5) {
        // 0x808002A4: sw          $t6, 0x40($sp)
        MEM_W(0X40, ctx->r29) = ctx->r14;
            goto L_80800218;
    }
    // 0x808002A4: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x808002A8: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x808002AC: sw          $s2, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r18;
    // 0x808002B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808002B4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x808002B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x808002BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002C0: jr          $ra
    // 0x808002C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x808002C4: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_808002C8_glrtc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002C8: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x808002CC: lhu         $t7, 0x0($a0)
    ctx->r15 = MEM_HU(ctx->r4, 0X0);
    // 0x808002D0: lhu         $t9, 0x6($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X6);
    // 0x808002D4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808002D8: and         $v0, $t7, $a1
    ctx->r2 = ctx->r15 & ctx->r5;
    // 0x808002DC: and         $a2, $t9, $a1
    ctx->r6 = ctx->r25 & ctx->r5;
    // 0x808002E0: andi        $t8, $v0, 0xFFFF
    ctx->r24 = ctx->r2 & 0XFFFF;
    // 0x808002E4: andi        $t2, $a2, 0xFFFF
    ctx->r10 = ctx->r6 & 0XFFFF;
    // 0x808002E8: subu        $t3, $t2, $t8
    ctx->r11 = SUB32(ctx->r10, ctx->r24);
    // 0x808002EC: div         $zero, $t3, $at
    lo = S32(S64(S32(ctx->r11)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r11)) % S64(S32(ctx->r1)));
    // 0x808002F0: mflo        $t4
    ctx->r12 = lo;
    // 0x808002F4: lhu         $t6, 0x2($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X2);
    // 0x808002F8: lhu         $t9, 0x4($a0)
    ctx->r25 = MEM_HU(ctx->r4, 0X4);
    // 0x808002FC: and         $t5, $t4, $a1
    ctx->r13 = ctx->r12 & ctx->r5;
    // 0x80800300: addu        $t7, $t8, $t5
    ctx->r15 = ADD32(ctx->r24, ctx->r13);
    // 0x80800304: subu        $t2, $t2, $t5
    ctx->r10 = SUB32(ctx->r10, ctx->r13);
    // 0x80800308: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x8080030C: or          $t3, $t9, $t2
    ctx->r11 = ctx->r25 | ctx->r10;
    // 0x80800310: sh          $t8, 0x2($a0)
    MEM_H(0X2, ctx->r4) = ctx->r24;
    // 0x80800314: jr          $ra
    // 0x80800318: sh          $t3, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r11;
    return;
    // 0x80800318: sh          $t3, 0x4($a0)
    MEM_H(0X4, ctx->r4) = ctx->r11;
;}
RECOMP_FUNC void func_8080031C_glrtc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080031C: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80800320: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80800324: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80800328: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8080032C: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80800330: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80800334: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80800338: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8080033C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800340: sw          $a0, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r4;
    // 0x80800344: lw          $s2, 0x0($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X0);
    // 0x80800348: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x8080034C: or          $s6, $a2, $zero
    ctx->r22 = ctx->r6 | 0;
    // 0x80800350: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80800354: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    // 0x80800358: jal         0x80031BF0
    // 0x8080035C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    bcopy_recomp(rdram, ctx);
        goto after_0;
    // 0x8080035C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_0:
    // 0x80800360: lhu         $v0, 0x64($sp)
    ctx->r2 = MEM_HU(ctx->r29, 0X64);
    // 0x80800364: lhu         $v1, 0x66($sp)
    ctx->r3 = MEM_HU(ctx->r29, 0X66);
    // 0x80800368: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x8080036C: andi        $t7, $v0, 0xF800
    ctx->r15 = ctx->r2 & 0XF800;
    // 0x80800370: andi        $t9, $v0, 0x7C0
    ctx->r25 = ctx->r2 & 0X7C0;
    // 0x80800374: sra         $t8, $t7, 8
    ctx->r24 = S32(SIGNED(ctx->r15) >> 8);
    // 0x80800378: sra         $t0, $t9, 3
    ctx->r8 = S32(SIGNED(ctx->r25) >> 3);
    // 0x8080037C: sb          $t8, 0x54($sp)
    MEM_B(0X54, ctx->r29) = ctx->r24;
    // 0x80800380: sb          $t0, 0x58($sp)
    MEM_B(0X58, ctx->r29) = ctx->r8;
    // 0x80800384: andi        $t1, $v0, 0x3E
    ctx->r9 = ctx->r2 & 0X3E;
    // 0x80800388: andi        $t4, $v1, 0xF800
    ctx->r12 = ctx->r3 & 0XF800;
    // 0x8080038C: andi        $t6, $v1, 0x7C0
    ctx->r14 = ctx->r3 & 0X7C0;
    // 0x80800390: andi        $t8, $v1, 0x3E
    ctx->r24 = ctx->r3 & 0X3E;
    // 0x80800394: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80800398: sra         $t5, $t4, 8
    ctx->r13 = S32(SIGNED(ctx->r12) >> 8);
    // 0x8080039C: sra         $t7, $t6, 3
    ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
    // 0x808003A0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x808003A4: addiu       $t0, $zero, 0xFF
    ctx->r8 = ADD32(0, 0XFF);
    // 0x808003A8: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x808003AC: sb          $t2, 0x5C($sp)
    MEM_B(0X5C, ctx->r29) = ctx->r10;
    // 0x808003B0: sb          $t3, 0x60($sp)
    MEM_B(0X60, ctx->r29) = ctx->r11;
    // 0x808003B4: sb          $t5, 0x57($sp)
    MEM_B(0X57, ctx->r29) = ctx->r13;
    // 0x808003B8: sb          $t7, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r15;
    // 0x808003BC: sb          $t9, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r25;
    // 0x808003C0: sb          $t0, 0x63($sp)
    MEM_B(0X63, ctx->r29) = ctx->r8;
    // 0x808003C4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x808003C8: addiu       $s0, $sp, 0x54
    ctx->r16 = ADD32(ctx->r29, 0X54);
    // 0x808003CC: addiu       $s4, $sp, 0x4C
    ctx->r20 = ADD32(ctx->r29, 0X4C);
    // 0x808003D0: addiu       $s3, $zero, 0x3
    ctx->r19 = ADD32(0, 0X3);
L_808003D4:
    // 0x808003D4: lbu         $t1, 0x0($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X0);
    // 0x808003D8: lbu         $t2, 0x3($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X3);
    // 0x808003DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808003E0: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x808003E4: bne         $t1, $t2, L_808003F4
    if (ctx->r9 != ctx->r10) {
        // 0x808003E8: nop
    
            goto L_808003F4;
    }
    // 0x808003E8: nop

    // 0x808003EC: b           L_80800400
    // 0x808003F0: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
        goto L_80800400;
    // 0x808003F0: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
L_808003F4:
    // 0x808003F4: jal         0x80031BF0
    // 0x808003F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    bcopy_recomp(rdram, ctx);
        goto after_1;
    // 0x808003F8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x808003FC: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80800400:
    // 0x80800400: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80800404: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80800408: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x8080040C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80800410: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    // 0x80800414: jal         0x800005B0
    // 0x80800418: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    func_808005B0_glrtc(rdram, ctx);
        goto after_2;
    // 0x80800418: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_2:
    // 0x8080041C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80800420: bne         $s1, $s3, L_808003D4
    if (ctx->r17 != ctx->r19) {
        // 0x80800424: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_808003D4;
    }
    // 0x80800424: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80800428: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x8080042C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80800430: andi        $a1, $s1, 0xFF
    ctx->r5 = ctx->r17 & 0XFF;
    // 0x80800434: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80800438: addiu       $a3, $sp, 0x54
    ctx->r7 = ADD32(ctx->r29, 0X54);
    // 0x8080043C: jal         0x800005B0
    // 0x80800440: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_808005B0_glrtc(rdram, ctx);
        goto after_3;
    // 0x80800440: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80800444: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x80800448: sw          $s2, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r18;
    // 0x8080044C: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80800450: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80800454: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80800458: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8080045C: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80800460: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80800464: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80800468: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080046C: jr          $ra
    // 0x80800470: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80800470: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80800474_glrtc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800474: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80800478: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8080047C: sw          $s7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r23;
    // 0x80800480: sw          $s6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r22;
    // 0x80800484: sw          $s5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r21;
    // 0x80800488: sw          $s4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r20;
    // 0x8080048C: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x80800490: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x80800494: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800498: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x8080049C: sw          $a0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r4;
    // 0x808004A0: lw          $s2, 0x0($a0)
    ctx->r18 = MEM_W(ctx->r4, 0X0);
    // 0x808004A4: addiu       $s1, $sp, 0x58
    ctx->r17 = ADD32(ctx->r29, 0X58);
    // 0x808004A8: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x808004AC: lbu         $t7, 0x0($s2)
    ctx->r15 = MEM_BU(ctx->r18, 0X0);
    // 0x808004B0: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x808004B4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x808004B8: sb          $t7, 0x5B($sp)
    MEM_B(0X5B, ctx->r29) = ctx->r15;
    // 0x808004BC: lbu         $t8, 0x1($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X1);
    // 0x808004C0: addiu       $s5, $sp, 0x50
    ctx->r21 = ADD32(ctx->r29, 0X50);
    // 0x808004C4: addiu       $s6, $zero, 0x4
    ctx->r22 = ADD32(0, 0X4);
    // 0x808004C8: sb          $t8, 0x5A($sp)
    MEM_B(0X5A, ctx->r29) = ctx->r24;
    // 0x808004CC: lbu         $t9, 0x2($s2)
    ctx->r25 = MEM_BU(ctx->r18, 0X2);
    // 0x808004D0: addiu       $s7, $sp, 0x54
    ctx->r23 = ADD32(ctx->r29, 0X54);
    // 0x808004D4: addiu       $s2, $s2, 0x5
    ctx->r18 = ADD32(ctx->r18, 0X5);
    // 0x808004D8: andi        $t0, $t9, 0xF
    ctx->r8 = ctx->r25 & 0XF;
    // 0x808004DC: sb          $t0, 0x59($sp)
    MEM_B(0X59, ctx->r29) = ctx->r8;
    // 0x808004E0: lbu         $t1, -0x3($s2)
    ctx->r9 = MEM_BU(ctx->r18, -0X3);
    // 0x808004E4: sb          $t1, 0x5F($sp)
    MEM_B(0X5F, ctx->r29) = ctx->r9;
    // 0x808004E8: lbu         $t2, -0x2($s2)
    ctx->r10 = MEM_BU(ctx->r18, -0X2);
    // 0x808004EC: sb          $t2, 0x5E($sp)
    MEM_B(0X5E, ctx->r29) = ctx->r10;
    // 0x808004F0: lbu         $t3, -0x1($s2)
    ctx->r11 = MEM_BU(ctx->r18, -0X1);
    // 0x808004F4: sb          $t3, 0x5D($sp)
    MEM_B(0X5D, ctx->r29) = ctx->r11;
    // 0x808004F8: lw          $t4, 0x4($s1)
    ctx->r12 = MEM_W(ctx->r17, 0X4);
    // 0x808004FC: srl         $t5, $t4, 4
    ctx->r13 = S32(U32(ctx->r12) >> 4);
    // 0x80800500: sw          $t5, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r13;
    // 0x80800504: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
L_80800508:
    // 0x80800508: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    // 0x8080050C: or          $a2, $s6, $zero
    ctx->r6 = ctx->r22 | 0;
    // 0x80800510: sll         $t6, $a0, 3
    ctx->r14 = S32(ctx->r4 << 3);
    // 0x80800514: srl         $t8, $a0, 5
    ctx->r24 = S32(U32(ctx->r4) >> 5);
    // 0x80800518: sll         $t9, $a1, 3
    ctx->r25 = S32(ctx->r5 << 3);
    // 0x8080051C: srl         $t1, $a1, 5
    ctx->r9 = S32(U32(ctx->r5) >> 5);
    // 0x80800520: andi        $t7, $t6, 0xFF
    ctx->r15 = ctx->r14 & 0XFF;
    // 0x80800524: sw          $t8, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r24;
    // 0x80800528: andi        $t0, $t9, 0xFF
    ctx->r8 = ctx->r25 & 0XFF;
    // 0x8080052C: sw          $t1, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r9;
    // 0x80800530: sb          $t0, 0x53($sp)
    MEM_B(0X53, ctx->r29) = ctx->r8;
    // 0x80800534: bne         $t7, $t0, L_80800544
    if (ctx->r15 != ctx->r8) {
        // 0x80800538: sb          $t7, 0x50($sp)
        MEM_B(0X50, ctx->r29) = ctx->r15;
            goto L_80800544;
    }
    // 0x80800538: sb          $t7, 0x50($sp)
    MEM_B(0X50, ctx->r29) = ctx->r15;
    // 0x8080053C: b           L_80800554
    // 0x80800540: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
        goto L_80800554;
    // 0x80800540: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
L_80800544:
    // 0x80800544: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800548: jal         0x80031BF0
    // 0x8080054C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    bcopy_recomp(rdram, ctx);
        goto after_0;
    // 0x8080054C: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_0:
    // 0x80800550: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
L_80800554:
    // 0x80800554: lw          $t2, 0x54($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X54);
    // 0x80800558: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8080055C: andi        $a1, $s0, 0xFF
    ctx->r5 = ctx->r16 & 0XFF;
    // 0x80800560: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    // 0x80800564: or          $a3, $s5, $zero
    ctx->r7 = ctx->r21 | 0;
    // 0x80800568: jal         0x800005B0
    // 0x8080056C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    func_808005B0_glrtc(rdram, ctx);
        goto after_1;
    // 0x8080056C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_1:
    // 0x80800570: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800574: bnel        $s0, $s6, L_80800508
    if (ctx->r16 != ctx->r22) {
        // 0x80800578: lw          $a0, 0x0($s1)
        ctx->r4 = MEM_W(ctx->r17, 0X0);
            goto L_80800508;
    }
    goto skip_0;
    // 0x80800578: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    skip_0:
    // 0x8080057C: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x80800580: sw          $s2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r18;
    // 0x80800584: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80800588: lw          $s7, 0x38($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X38);
    // 0x8080058C: lw          $s6, 0x34($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X34);
    // 0x80800590: lw          $s5, 0x30($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X30);
    // 0x80800594: lw          $s4, 0x2C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X2C);
    // 0x80800598: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x8080059C: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x808005A0: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808005A4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808005A8: jr          $ra
    // 0x808005AC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x808005AC: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_808005B0_glrtc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B0: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x808005B4: sw          $s0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r16;
    // 0x808005B8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808005BC: sw          $s2, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r18;
    // 0x808005C0: sw          $s1, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r17;
    // 0x808005C4: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808005C8: andi        $s2, $a1, 0xFF
    ctx->r18 = ctx->r5 & 0XFF;
    // 0x808005CC: beq         $s0, $zero, L_808005FC
    if (ctx->r16 == 0) {
        // 0x808005D0: sw          $a1, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r5;
            goto L_808005FC;
    }
    // 0x808005D0: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x808005D4: lbu         $v1, 0x3($a3)
    ctx->r3 = MEM_BU(ctx->r7, 0X3);
    // 0x808005D8: lbu         $a0, 0x0($a3)
    ctx->r4 = MEM_BU(ctx->r7, 0X0);
    // 0x808005DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808005E0: subu        $v0, $v1, $a0
    ctx->r2 = SUB32(ctx->r3, ctx->r4);
    // 0x808005E4: div         $zero, $v0, $at
    lo = S32(S64(S32(ctx->r2)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r2)) % S64(S32(ctx->r1)));
    // 0x808005E8: mflo        $t7
    ctx->r15 = lo;
    // 0x808005EC: subu        $t9, $v1, $t7
    ctx->r25 = SUB32(ctx->r3, ctx->r15);
    // 0x808005F0: addu        $t8, $a0, $t7
    ctx->r24 = ADD32(ctx->r4, ctx->r15);
    // 0x808005F4: sb          $t8, 0x1($a3)
    MEM_B(0X1, ctx->r7) = ctx->r24;
    // 0x808005F8: sb          $t9, 0x2($a3)
    MEM_B(0X2, ctx->r7) = ctx->r25;
L_808005FC:
    // 0x808005FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80800600: sll         $v1, $a2, 2
    ctx->r3 = S32(ctx->r6 << 2);
    // 0x80800604: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
L_80800608:
    // 0x80800608: andi        $t0, $s0, 0x3
    ctx->r8 = ctx->r16 & 0X3;
    // 0x8080060C: addu        $t1, $t0, $a3
    ctx->r9 = ADD32(ctx->r8, ctx->r7);
    // 0x80800610: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80800614: srl         $t4, $s0, 2
    ctx->r12 = S32(U32(ctx->r16) >> 2);
    // 0x80800618: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x8080061C: addu        $t3, $s1, $s2
    ctx->r11 = ADD32(ctx->r17, ctx->r18);
    // 0x80800620: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x80800624: sb          $t2, 0x0($t3)
    MEM_B(0X0, ctx->r11) = ctx->r10;
    // 0x80800628: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x8080062C: srl         $t9, $t4, 2
    ctx->r25 = S32(U32(ctx->r12) >> 2);
    // 0x80800630: andi        $t0, $t9, 0x3
    ctx->r8 = ctx->r25 & 0X3;
    // 0x80800634: addu        $t8, $s1, $s2
    ctx->r24 = ADD32(ctx->r17, ctx->r18);
    // 0x80800638: addu        $t1, $t0, $a3
    ctx->r9 = ADD32(ctx->r8, ctx->r7);
    // 0x8080063C: sb          $t7, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r15;
    // 0x80800640: lbu         $t2, 0x0($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X0);
    // 0x80800644: srl         $t4, $t9, 2
    ctx->r12 = S32(U32(ctx->r25) >> 2);
    // 0x80800648: andi        $t5, $t4, 0x3
    ctx->r13 = ctx->r12 & 0X3;
    // 0x8080064C: addu        $t6, $t5, $a3
    ctx->r14 = ADD32(ctx->r13, ctx->r7);
    // 0x80800650: sb          $t2, 0x8($t3)
    MEM_B(0X8, ctx->r11) = ctx->r10;
    // 0x80800654: lbu         $t7, 0x0($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X0);
    // 0x80800658: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8080065C: srl         $s0, $t4, 2
    ctx->r16 = S32(U32(ctx->r12) >> 2);
    // 0x80800660: addu        $s1, $s1, $v1
    ctx->r17 = ADD32(ctx->r17, ctx->r3);
    // 0x80800664: bne         $v0, $a0, L_80800608
    if (ctx->r2 != ctx->r4) {
        // 0x80800668: sb          $t7, 0xC($t8)
        MEM_B(0XC, ctx->r24) = ctx->r15;
            goto L_80800608;
    }
    // 0x80800668: sb          $t7, 0xC($t8)
    MEM_B(0XC, ctx->r24) = ctx->r15;
    // 0x8080066C: lw          $s0, 0x4($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X4);
    // 0x80800670: lw          $s1, 0x8($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X8);
    // 0x80800674: lw          $s2, 0xC($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XC);
    // 0x80800678: jr          $ra
    // 0x8080067C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8080067C: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80800000_glsavegame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x8001ACCC
    // 0x8080000C: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
    func_8001ACCC(rdram, ctx);
        goto after_0;
    // 0x8080000C: addiu       $a0, $zero, 0x1C0
    ctx->r4 = ADD32(0, 0X1C0);
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
RECOMP_FUNC void func_80800020_glsavegame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800020: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800024: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80800028: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8080002C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800030: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800034: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80800038: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080003C: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x80800040: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80800044:
    // 0x80800044: jal         0x800884A8
    // 0x80800048: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    _glgamestore_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800048: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_0:
    // 0x8080004C: beq         $v0, $zero, L_80800060
    if (ctx->r2 == 0) {
        // 0x80800050: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800060;
    }
    // 0x80800050: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800054: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80800058: bnel        $s0, $zero, L_80800044
    if (ctx->r16 != 0) {
        // 0x8080005C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800044;
    }
    goto skip_0;
    // 0x8080005C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
L_80800060:
    // 0x80800060: bne         $v0, $zero, L_80800080
    if (ctx->r2 != 0) {
        // 0x80800064: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80800080;
    }
    // 0x80800064: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800068: jal         0x80088598
    // 0x8080006C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    _glgamedata_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x8080006C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_1:
    // 0x80800070: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800074: bne         $v0, $at, L_80800080
    if (ctx->r2 != ctx->r1) {
        // 0x80800078: lw          $v1, 0x28($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X28);
            goto L_80800080;
    }
    // 0x80800078: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x8080007C: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_80800080:
    // 0x80800080: bne         $v1, $zero, L_8080009C
    if (ctx->r3 != 0) {
        // 0x80800084: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8080009C;
    }
    // 0x80800084: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800088: jal         0x80088590
    // 0x8080008C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    _glgamedata_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x8080008C: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_2:
    // 0x80800090: bne         $v0, $zero, L_8080009C
    if (ctx->r2 != 0) {
        // 0x80800094: lw          $v1, 0x28($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X28);
            goto L_8080009C;
    }
    // 0x80800094: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
    // 0x80800098: addiu       $v1, $zero, 0x3
    ctx->r3 = ADD32(0, 0X3);
L_8080009C:
    // 0x8080009C: beq         $v1, $zero, L_808000B0
    if (ctx->r3 == 0) {
        // 0x808000A0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_808000B0;
    }
    // 0x808000A0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x808000A4: jal         0x800885A0
    // 0x808000A8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    _glgamedata_entrypoint_6(rdram, ctx);
        goto after_3;
    // 0x808000A8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    after_3:
    // 0x808000AC: lw          $v1, 0x28($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X28);
L_808000B0:
    // 0x808000B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808000B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000B8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x808000BC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x808000C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808000C4: jr          $ra
    // 0x808000C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x808000C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_808000CC_glsavegame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000CC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000D4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808000D8: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    // 0x808000DC: addiu       $a3, $sp, 0x18
    ctx->r7 = ADD32(ctx->r29, 0X18);
    // 0x808000E0: jal         0x80088588
    // 0x808000E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _glgamedata_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808000E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x808000E8: beq         $v0, $zero, L_80800108
    if (ctx->r2 == 0) {
        // 0x808000EC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800108;
    }
    // 0x808000EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000F0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x808000F4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x808000F8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x808000FC: lbu         $v0, 0x0($t8)
    ctx->r2 = MEM_BU(ctx->r24, 0X0);
    // 0x80800100: b           L_8080010C
    // 0x80800104: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_8080010C;
    // 0x80800104: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
L_80800108:
    // 0x80800108: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8080010C:
    // 0x8080010C: jr          $ra
    // 0x80800110: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800110: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void glsavegame_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800114: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80800118: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x8080011C: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x80800120: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80800124: addiu       $s3, $zero, -0x1
    ctx->r19 = ADD32(0, -0X1);
    // 0x80800128: addiu       $s5, $s5, 0x7618
    ctx->r21 = ADD32(ctx->r21, 0X7618);
    // 0x8080012C: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80800130: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800134: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80800138: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x8080013C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800140: addiu       $s2, $t6, 0x7618
    ctx->r18 = ADD32(ctx->r14, 0X7618);
    // 0x80800144: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x80800148: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8080014C: sw          $s7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r23;
    // 0x80800150: sw          $s6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r22;
    // 0x80800154: sb          $s3, 0x12($s5)
    MEM_B(0X12, ctx->r21) = ctx->r19;
    // 0x80800158: sb          $s3, 0xF($s5)
    MEM_B(0XF, ctx->r21) = ctx->r19;
    // 0x8080015C: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    // 0x80800160: addiu       $s1, $s1, 0x7624
    ctx->r17 = ADD32(ctx->r17, 0X7624);
    // 0x80800164: or          $s4, $s2, $zero
    ctx->r20 = ctx->r18 | 0;
    // 0x80800168: addiu       $s0, $sp, 0x50
    ctx->r16 = ADD32(ctx->r29, 0X50);
L_8080016C:
    // 0x8080016C: sb          $s3, 0xC($s4)
    MEM_B(0XC, ctx->r20) = ctx->r19;
    // 0x80800170: jal         0x80000000
    // 0x80800174: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    func_80800000_glsavegame(rdram, ctx);
        goto after_0;
    // 0x80800174: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    after_0:
    // 0x80800178: sw          $v0, 0x0($s2)
    MEM_W(0X0, ctx->r18) = ctx->r2;
    // 0x8080017C: jal         0x800885A0
    // 0x80800180: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    _glgamedata_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80800180: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800184: addiu       $s2, $s2, 0x4
    ctx->r18 = ADD32(ctx->r18, 0X4);
    // 0x80800188: sltu        $at, $s2, $s1
    ctx->r1 = ctx->r18 < ctx->r17 ? 1 : 0;
    // 0x8080018C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x80800190: bne         $at, $zero, L_8080016C
    if (ctx->r1 != 0) {
        // 0x80800194: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8080016C;
    }
    // 0x80800194: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80800198: jal         0x80000000
    // 0x8080019C: nop

    func_80800000_glsavegame(rdram, ctx);
        goto after_2;
    // 0x8080019C: nop

    after_2:
    // 0x808001A0: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x808001A4: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x808001A8: addiu       $s7, $zero, 0x4
    ctx->r23 = ADD32(0, 0X4);
    // 0x808001AC: addiu       $s6, $sp, 0x50
    ctx->r22 = ADD32(ctx->r29, 0X50);
    // 0x808001B0: addiu       $s2, $zero, 0x1
    ctx->r18 = ADD32(0, 0X1);
    // 0x808001B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_808001B8:
    // 0x808001B8: jal         0x80000020
    // 0x808001BC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_80800020_glsavegame(rdram, ctx);
        goto after_3;
    // 0x808001BC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_3:
    // 0x808001C0: bne         $v0, $zero, L_80800214
    if (ctx->r2 != 0) {
        // 0x808001C4: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80800214;
    }
    // 0x808001C4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808001C8: jal         0x800000CC
    // 0x808001CC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_808000CC_glsavegame(rdram, ctx);
        goto after_4;
    // 0x808001CC: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_4:
    // 0x808001D0: addu        $t7, $s5, $v0
    ctx->r15 = ADD32(ctx->r21, ctx->r2);
    // 0x808001D4: lb          $t8, 0xC($t7)
    ctx->r24 = MEM_B(ctx->r15, 0XC);
    // 0x808001D8: sll         $t0, $s1, 2
    ctx->r8 = S32(ctx->r17 << 2);
    // 0x808001DC: addu        $t9, $s5, $v0
    ctx->r25 = ADD32(ctx->r21, ctx->r2);
    // 0x808001E0: bne         $s3, $t8, L_80800210
    if (ctx->r19 != ctx->r24) {
        // 0x808001E4: addu        $t1, $s6, $t0
        ctx->r9 = ADD32(ctx->r22, ctx->r8);
            goto L_80800210;
    }
    // 0x808001E4: addu        $t1, $s6, $t0
    ctx->r9 = ADD32(ctx->r22, ctx->r8);
    // 0x808001E8: sb          $s1, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r17;
    // 0x808001EC: sll         $t2, $v0, 2
    ctx->r10 = S32(ctx->r2 << 2);
    // 0x808001F0: sw          $s2, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r18;
    // 0x808001F4: addu        $t3, $s5, $t2
    ctx->r11 = ADD32(ctx->r21, ctx->r10);
    // 0x808001F8: lw          $a0, 0x0($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X0);
    // 0x808001FC: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x80800200: jal         0x8001BBC8
    // 0x80800204: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    aligned4_memcpy(rdram, ctx);
        goto after_5;
    // 0x80800204: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    after_5:
    // 0x80800208: b           L_80800214
    // 0x8080020C: nop

        goto L_80800214;
    // 0x8080020C: nop

L_80800210:
    // 0x80800210: addiu       $s0, $zero, 0x2
    ctx->r16 = ADD32(0, 0X2);
L_80800214:
    // 0x80800214: beql        $s0, $zero, L_80800224
    if (ctx->r16 == 0) {
        // 0x80800218: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80800224;
    }
    goto skip_0;
    // 0x80800218: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_0:
    // 0x8080021C: sb          $s1, 0xF($s5)
    MEM_B(0XF, ctx->r21) = ctx->r17;
    // 0x80800220: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80800224:
    // 0x80800224: bnel        $s1, $s7, L_808001B8
    if (ctx->r17 != ctx->r23) {
        // 0x80800228: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_808001B8;
    }
    goto skip_1;
    // 0x80800228: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_1:
    // 0x8080022C: jal         0x8001B084
    // 0x80800230: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    func_8001B084(rdram, ctx);
        goto after_6;
    // 0x80800230: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_6:
    // 0x80800234: lb          $t4, 0xF($s5)
    ctx->r12 = MEM_B(ctx->r21, 0XF);
    // 0x80800238: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8080023C: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80800240: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80800244: addu        $t6, $s6, $t5
    ctx->r14 = ADD32(ctx->r22, ctx->r13);
    // 0x80800248: sw          $s2, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r18;
    // 0x8080024C: addiu       $v1, $v1, 0x761B
    ctx->r3 = ADD32(ctx->r3, 0X761B);
    // 0x80800250: addiu       $v0, $v0, 0x7618
    ctx->r2 = ADD32(ctx->r2, 0X7618);
    // 0x80800254: lb          $t7, 0xC($v0)
    ctx->r15 = MEM_B(ctx->r2, 0XC);
L_80800258:
    // 0x80800258: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x8080025C: sll         $t8, $zero, 2
    ctx->r24 = S32(0 << 2);
    // 0x80800260: bne         $s3, $t7, L_8080029C
    if (ctx->r19 != ctx->r15) {
        // 0x80800264: addiu       $t9, $sp, 0x50
        ctx->r25 = ADD32(ctx->r29, 0X50);
            goto L_8080029C;
    }
    // 0x80800264: addiu       $t9, $sp, 0x50
    ctx->r25 = ADD32(ctx->r29, 0X50);
    // 0x80800268: addu        $s0, $t8, $t9
    ctx->r16 = ADD32(ctx->r24, ctx->r25);
    // 0x8080026C: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
L_80800270:
    // 0x80800270: bnel        $t0, $zero, L_80800284
    if (ctx->r8 != 0) {
        // 0x80800274: addiu       $s1, $s1, 0x1
        ctx->r17 = ADD32(ctx->r17, 0X1);
            goto L_80800284;
    }
    goto skip_2;
    // 0x80800274: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    skip_2:
    // 0x80800278: sw          $s2, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r18;
    // 0x8080027C: sb          $s1, 0xC($v0)
    MEM_B(0XC, ctx->r2) = ctx->r17;
    // 0x80800280: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
L_80800284:
    // 0x80800284: slti        $at, $s1, 0x4
    ctx->r1 = SIGNED(ctx->r17) < 0X4 ? 1 : 0;
    // 0x80800288: beq         $at, $zero, L_8080029C
    if (ctx->r1 == 0) {
        // 0x8080028C: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_8080029C;
    }
    // 0x8080028C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80800290: lb          $t1, 0xC($v0)
    ctx->r9 = MEM_B(ctx->r2, 0XC);
    // 0x80800294: beql        $s3, $t1, L_80800270
    if (ctx->r19 == ctx->r9) {
        // 0x80800298: lw          $t0, 0x0($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X0);
            goto L_80800270;
    }
    goto skip_3;
    // 0x80800298: lw          $t0, 0x0($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X0);
    skip_3:
L_8080029C:
    // 0x8080029C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x808002A0: bnel        $v0, $v1, L_80800258
    if (ctx->r2 != ctx->r3) {
        // 0x808002A4: lb          $t7, 0xC($v0)
        ctx->r15 = MEM_B(ctx->r2, 0XC);
            goto L_80800258;
    }
    goto skip_4;
    // 0x808002A4: lb          $t7, 0xC($v0)
    ctx->r15 = MEM_B(ctx->r2, 0XC);
    skip_4:
    // 0x808002A8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x808002AC: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x808002B0: sb          $v0, 0x10($s5)
    MEM_B(0X10, ctx->r21) = ctx->r2;
    // 0x808002B4: sb          $v0, 0x11($s5)
    MEM_B(0X11, ctx->r21) = ctx->r2;
    // 0x808002B8: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x808002BC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808002C0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808002C4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x808002C8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x808002CC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x808002D0: lw          $s6, 0x2C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X2C);
    // 0x808002D4: lw          $s7, 0x30($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X30);
    // 0x808002D8: jr          $ra
    // 0x808002DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x808002DC: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_808002E0_glsavegame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808002E4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x808002E8: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x808002EC: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x808002F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808002F4: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x808002F8: or          $s4, $a1, $zero
    ctx->r20 = ctx->r5 | 0;
    // 0x808002FC: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x80800300: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80800304: jal         0x80000000
    // 0x80800308: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    func_80800000_glsavegame(rdram, ctx);
        goto after_0;
    // 0x80800308: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    after_0:
    // 0x8080030C: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x80800310: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80800314:
    // 0x80800314: jal         0x800884B8
    // 0x80800318: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    _glgamestore_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800318: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_1:
    // 0x8080031C: bne         $v0, $zero, L_80800330
    if (ctx->r2 != 0) {
        // 0x80800320: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80800330;
    }
    // 0x80800320: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80800324: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800328: jal         0x80000020
    // 0x8080032C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80800020_glsavegame(rdram, ctx);
        goto after_2;
    // 0x8080032C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_2:
L_80800330:
    // 0x80800330: beq         $s1, $zero, L_80800340
    if (ctx->r17 == 0) {
        // 0x80800334: addiu       $s0, $s0, -0x1
        ctx->r16 = ADD32(ctx->r16, -0X1);
            goto L_80800340;
    }
    // 0x80800334: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80800338: bnel        $s0, $zero, L_80800314
    if (ctx->r16 != 0) {
        // 0x8080033C: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80800314;
    }
    goto skip_0;
    // 0x8080033C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_0:
L_80800340:
    // 0x80800340: jal         0x8001B084
    // 0x80800344: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_8001B084(rdram, ctx);
        goto after_3;
    // 0x80800344: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_3:
    // 0x80800348: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8080034C: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80800350: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800354: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800358: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8080035C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x80800360: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x80800364: jr          $ra
    // 0x80800368: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80800368: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8080036C_glsavegame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080036C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800370: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800374: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800378: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8080037C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800380: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
L_80800384:
    // 0x80800384: jal         0x800884C8
    // 0x80800388: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    _glgamestore_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80800388: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x8080038C: beq         $v0, $zero, L_808003A0
    if (ctx->r2 == 0) {
        // 0x80800390: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_808003A0;
    }
    // 0x80800390: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800394: addiu       $s0, $s0, -0x1
    ctx->r16 = ADD32(ctx->r16, -0X1);
    // 0x80800398: bne         $s0, $zero, L_80800384
    if (ctx->r16 != 0) {
        // 0x8080039C: nop
    
            goto L_80800384;
    }
    // 0x8080039C: nop

L_808003A0:
    // 0x808003A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808003A8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808003AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808003B0: jr          $ra
    // 0x808003B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x808003B4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void glsavegame_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808003BC: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808003C0: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808003C4: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x808003C8: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x808003CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808003D0: addiu       $s1, $s1, 0x7624
    ctx->r17 = ADD32(ctx->r17, 0X7624);
    // 0x808003D4: addiu       $s0, $s0, 0x7618
    ctx->r16 = ADD32(ctx->r16, 0X7618);
    // 0x808003D8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
L_808003DC:
    // 0x808003DC: beql        $a0, $zero, L_808003F4
    if (ctx->r4 == 0) {
        // 0x808003E0: addiu       $s0, $s0, 0x4
        ctx->r16 = ADD32(ctx->r16, 0X4);
            goto L_808003F4;
    }
    goto skip_0;
    // 0x808003E0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    skip_0:
    // 0x808003E4: jal         0x8001B084
    // 0x808003E8: nop

    func_8001B084(rdram, ctx);
        goto after_0;
    // 0x808003E8: nop

    after_0:
    // 0x808003EC: sw          $zero, 0x0($s0)
    MEM_W(0X0, ctx->r16) = 0;
    // 0x808003F0: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
L_808003F4:
    // 0x808003F4: bnel        $s0, $s1, L_808003DC
    if (ctx->r16 != ctx->r17) {
        // 0x808003F8: lw          $a0, 0x0($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X0);
            goto L_808003DC;
    }
    goto skip_1;
    // 0x808003F8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x808003FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800400: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80800404: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800408: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8080040C: sb          $zero, 0x7628($at)
    MEM_B(0X7628, ctx->r1) = 0;
    // 0x80800410: jr          $ra
    // 0x80800414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800414: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void glsavegame_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800418: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080041C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80800420: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80800424: lw          $t7, 0x7618($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7618);
    // 0x80800428: lbu         $v0, 0x0($t7)
    ctx->r2 = MEM_BU(ctx->r15, 0X0);
    // 0x8080042C: sltu        $t8, $zero, $v0
    ctx->r24 = 0 < ctx->r2 ? 1 : 0;
    // 0x80800430: jr          $ra
    // 0x80800434: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x80800434: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void glsavegame_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800438: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080043C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80800440: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800444: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800448: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8080044C: addiu       $s1, $zero, 0x3
    ctx->r17 = ADD32(0, 0X3);
L_80800450:
    // 0x80800450: jal         0x80000418
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    glsavegame_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x80800458: beq         $v0, $zero, L_80800468
    if (ctx->r2 == 0) {
        // 0x8080045C: addiu       $s0, $s0, 0x1
        ctx->r16 = ADD32(ctx->r16, 0X1);
            goto L_80800468;
    }
    // 0x8080045C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80800460: b           L_80800474
    // 0x80800464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80800474;
    // 0x80800464: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80800468:
    // 0x80800468: bne         $s0, $s1, L_80800450
    if (ctx->r16 != ctx->r17) {
        // 0x8080046C: nop
    
            goto L_80800450;
    }
    // 0x8080046C: nop

    // 0x80800470: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80800474:
    // 0x80800474: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800478: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8080047C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800480: jr          $ra
    // 0x80800484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800484: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void glsavegame_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800488: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080048C: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80800490: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800494: jr          $ra
    // 0x80800498: lw          $v0, 0x7618($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7618);
    return;
    // 0x80800498: lw          $v0, 0x7618($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X7618);
;}
RECOMP_FUNC void glsavegame_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080049C: jr          $ra
    // 0x808004A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x808004A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void glsavegame_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004A4: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x808004A8: lb          $t6, 0x762A($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X762A);
    // 0x808004AC: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x808004B0: jr          $ra
    // 0x808004B4: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
    return;
    // 0x808004B4: sb          $t7, 0x0($a0)
    MEM_B(0X0, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_808004B8_glsavegame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004B8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x808004BC: jr          $ra
    // 0x808004C0: sb          $a0, 0x762A($at)
    MEM_B(0X762A, ctx->r1) = ctx->r4;
    return;
    // 0x808004C0: sb          $a0, 0x762A($at)
    MEM_B(0X762A, ctx->r1) = ctx->r4;
;}
RECOMP_FUNC void func_808004C4_glsavegame(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004C4: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x808004C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x808004CC: jr          $ra
    // 0x808004D0: sb          $t6, 0x762A($at)
    MEM_B(0X762A, ctx->r1) = ctx->r14;
    return;
    // 0x808004D0: sb          $t6, 0x762A($at)
    MEM_B(0X762A, ctx->r1) = ctx->r14;
;}
RECOMP_FUNC void glsavegame_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808004D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004DC: jal         0x80000000
    // 0x808004E0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_80800000_glsavegame(rdram, ctx);
        goto after_0;
    // 0x808004E0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x808004E4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808004E8: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x808004EC: addiu       $a1, $a1, 0x7618
    ctx->r5 = ADD32(ctx->r5, 0X7618);
    // 0x808004F0: addu        $v1, $a1, $a0
    ctx->r3 = ADD32(ctx->r5, ctx->r4);
    // 0x808004F4: lb          $t6, 0xC($v1)
    ctx->r14 = MEM_B(ctx->r3, 0XC);
    // 0x808004F8: lb          $t7, 0xF($a1)
    ctx->r15 = MEM_B(ctx->r5, 0XF);
    // 0x808004FC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800500: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    // 0x80800504: sw          $t6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r14;
    // 0x80800508: jal         0x800004B8
    // 0x8080050C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    func_808004B8_glsavegame(rdram, ctx);
        goto after_1;
    // 0x8080050C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
    after_1:
    // 0x80800510: jal         0x80088578
    // 0x80800514: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _glgamedata_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800514: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800518: jal         0x800004C4
    // 0x8080051C: nop

    func_808004C4_glsavegame(rdram, ctx);
        goto after_3;
    // 0x8080051C: nop

    after_3:
    // 0x80800520: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800524: jal         0x800002E0
    // 0x80800528: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    func_808002E0_glsavegame(rdram, ctx);
        goto after_4;
    // 0x80800528: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x8080052C: bne         $v0, $zero, L_80800540
    if (ctx->r2 != 0) {
        // 0x80800530: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80800540;
    }
    // 0x80800530: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80800534: jal         0x8000036C
    // 0x80800538: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8080036C_glsavegame(rdram, ctx);
        goto after_5;
    // 0x80800538: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_5:
    // 0x8080053C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80800540:
    // 0x80800540: bne         $v0, $zero, L_8080055C
    if (ctx->r2 != 0) {
        // 0x80800544: lw          $t8, 0x24($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X24);
            goto L_8080055C;
    }
    // 0x80800544: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80800548: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8080054C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80800550: sb          $t8, 0xC($t9)
    MEM_B(0XC, ctx->r25) = ctx->r24;
    // 0x80800554: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80800558: sb          $t0, 0x7627($at)
    MEM_B(0X7627, ctx->r1) = ctx->r8;
L_8080055C:
    // 0x8080055C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800560: jal         0x8001B084
    // 0x80800564: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    func_8001B084(rdram, ctx);
        goto after_6;
    // 0x80800564: sw          $v1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r3;
    after_6:
    // 0x80800568: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080056C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x80800570: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800574: jr          $ra
    // 0x80800578: nop

    return;
    // 0x80800578: nop

;}
RECOMP_FUNC void glsavegame_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080057C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800580: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800584: jal         0x80000000
    // 0x80800588: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80800000_glsavegame(rdram, ctx);
        goto after_0;
    // 0x80800588: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080058C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80800590: lui         $a0, 0x8012
    ctx->r4 = S32(0X8012 << 16);
    // 0x80800594: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80800598: addu        $a0, $a0, $t6
    ctx->r4 = ADD32(ctx->r4, ctx->r14);
    // 0x8080059C: lb          $a0, 0x7624($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X7624);
    // 0x808005A0: jal         0x80000020
    // 0x808005A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_80800020_glsavegame(rdram, ctx);
        goto after_1;
    // 0x808005A4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x808005A8: bne         $v0, $zero, L_808005B8
    if (ctx->r2 != 0) {
        // 0x808005AC: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_808005B8;
    }
    // 0x808005AC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808005B0: jal         0x80088580
    // 0x808005B4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    _glgamedata_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x808005B4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
L_808005B8:
    // 0x808005B8: jal         0x8001B084
    // 0x808005BC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_8001B084(rdram, ctx);
        goto after_3;
    // 0x808005BC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x808005C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005C4: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x808005C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808005CC: jr          $ra
    // 0x808005D0: nop

    return;
    // 0x808005D0: nop

;}
RECOMP_FUNC void glsavegame_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005D4: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x808005D8: addiu       $v1, $v1, 0x7618
    ctx->r3 = ADD32(ctx->r3, 0X7618);
    // 0x808005DC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808005E0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x808005E4: addu        $a1, $v1, $a0
    ctx->r5 = ADD32(ctx->r3, ctx->r4);
    // 0x808005E8: lb          $a0, 0xC($a1)
    ctx->r4 = MEM_B(ctx->r5, 0XC);
    // 0x808005EC: lb          $t7, 0xF($v1)
    ctx->r15 = MEM_B(ctx->r3, 0XF);
    // 0x808005F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005F4: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    // 0x808005F8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808005FC: jal         0x8000036C
    // 0x80800600: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    func_8080036C_glsavegame(rdram, ctx);
        goto after_0;
    // 0x80800600: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    after_0:
    // 0x80800604: lui         $v1, 0x8012
    ctx->r3 = S32(0X8012 << 16);
    // 0x80800608: addiu       $v1, $v1, 0x7618
    ctx->r3 = ADD32(ctx->r3, 0X7618);
    // 0x8080060C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800610: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80800614: bne         $v0, $zero, L_8080064C
    if (ctx->r2 != 0) {
        // 0x80800618: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8080064C;
    }
    // 0x80800618: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8080061C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80800620: sb          $t8, 0xC($a1)
    MEM_B(0XC, ctx->r5) = ctx->r24;
    // 0x80800624: lbu         $t9, 0x10($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X10);
    // 0x80800628: sb          $a0, 0xF($v1)
    MEM_B(0XF, ctx->r3) = ctx->r4;
    // 0x8080062C: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80800630: beq         $t9, $zero, L_8080064C
    if (ctx->r25 == 0) {
        // 0x80800634: sll         $t1, $t0, 2
        ctx->r9 = S32(ctx->r8 << 2);
            goto L_8080064C;
    }
    // 0x80800634: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80800638: addu        $t2, $v1, $t1
    ctx->r10 = ADD32(ctx->r3, ctx->r9);
    // 0x8080063C: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x80800640: jal         0x800885A0
    // 0x80800644: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    _glgamedata_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80800644: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x80800648: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
L_8080064C:
    // 0x8080064C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800650: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800654: or          $v0, $a2, $zero
    ctx->r2 = ctx->r6 | 0;
    // 0x80800658: jr          $ra
    // 0x8080065C: nop

    return;
    // 0x8080065C: nop

;}
RECOMP_FUNC void glsavegame_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800660: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800664: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800668: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8080066C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80800670: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800674: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80800678: jal         0x80000000
    // 0x8080067C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_80800000_glsavegame(rdram, ctx);
        goto after_0;
    // 0x8080067C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800680: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80800684: lw          $t8, 0x40($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X40);
    // 0x80800688: lui         $s1, 0x8012
    ctx->r17 = S32(0X8012 << 16);
    // 0x8080068C: addiu       $s1, $s1, 0x7618
    ctx->r17 = ADD32(ctx->r17, 0X7618);
    // 0x80800690: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x80800694: addu        $v1, $s1, $t8
    ctx->r3 = ADD32(ctx->r17, ctx->r24);
    // 0x80800698: lb          $t9, 0xC($v1)
    ctx->r25 = MEM_B(ctx->r3, 0XC);
    // 0x8080069C: lb          $t0, 0xF($s1)
    ctx->r8 = MEM_B(ctx->r17, 0XF);
    // 0x808006A0: lb          $a0, 0xC($t7)
    ctx->r4 = MEM_B(ctx->r15, 0XC);
    // 0x808006A4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x808006A8: sw          $v1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r3;
    // 0x808006AC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x808006B0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x808006B4: jal         0x80000020
    // 0x808006B8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    func_80800020_glsavegame(rdram, ctx);
        goto after_1;
    // 0x808006B8: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    after_1:
    // 0x808006BC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808006C0: jal         0x80088580
    // 0x808006C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    _glgamedata_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x808006C4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x808006C8: jal         0x800004B8
    // 0x808006CC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_808004B8_glsavegame(rdram, ctx);
        goto after_3;
    // 0x808006CC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_3:
    // 0x808006D0: jal         0x80088578
    // 0x808006D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    _glgamedata_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x808006D4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x808006D8: jal         0x800004C4
    // 0x808006DC: nop

    func_808004C4_glsavegame(rdram, ctx);
        goto after_5;
    // 0x808006DC: nop

    after_5:
    // 0x808006E0: bne         $s0, $zero, L_808006F4
    if (ctx->r16 != 0) {
        // 0x808006E4: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_808006F4;
    }
    // 0x808006E4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x808006E8: jal         0x800002E0
    // 0x808006EC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_808002E0_glsavegame(rdram, ctx);
        goto after_6;
    // 0x808006EC: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_6:
    // 0x808006F0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_808006F4:
    // 0x808006F4: bne         $s0, $zero, L_80800708
    if (ctx->r16 != 0) {
        // 0x808006F8: nop
    
            goto L_80800708;
    }
    // 0x808006F8: nop

    // 0x808006FC: jal         0x8000036C
    // 0x80800700: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8080036C_glsavegame(rdram, ctx);
        goto after_7;
    // 0x80800700: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x80800704: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80800708:
    // 0x80800708: bne         $s0, $zero, L_80800750
    if (ctx->r16 != 0) {
        // 0x8080070C: lw          $t1, 0x30($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X30);
            goto L_80800750;
    }
    // 0x8080070C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80800710: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80800714: sb          $t1, 0xC($t2)
    MEM_B(0XC, ctx->r10) = ctx->r9;
    // 0x80800718: lbu         $t4, 0x10($s1)
    ctx->r12 = MEM_BU(ctx->r17, 0X10);
    // 0x8080071C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80800720: beq         $t4, $zero, L_80800750
    if (ctx->r12 == 0) {
        // 0x80800724: sb          $t3, 0xF($s1)
        MEM_B(0XF, ctx->r17) = ctx->r11;
            goto L_80800750;
    }
    // 0x80800724: sb          $t3, 0xF($s1)
    MEM_B(0XF, ctx->r17) = ctx->r11;
    // 0x80800728: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8080072C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80800730: addiu       $a2, $zero, 0x1C0
    ctx->r6 = ADD32(0, 0X1C0);
    // 0x80800734: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80800738: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8080073C: addu        $t0, $s1, $t9
    ctx->r8 = ADD32(ctx->r17, ctx->r25);
    // 0x80800740: addu        $t7, $s1, $t6
    ctx->r15 = ADD32(ctx->r17, ctx->r14);
    // 0x80800744: lw          $a0, 0x0($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X0);
    // 0x80800748: jal         0x8001BBC8
    // 0x8080074C: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    aligned4_memcpy(rdram, ctx);
        goto after_8;
    // 0x8080074C: lw          $a1, 0x0($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X0);
    after_8:
L_80800750:
    // 0x80800750: jal         0x8001B084
    // 0x80800754: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_8001B084(rdram, ctx);
        goto after_9;
    // 0x80800754: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_9:
    // 0x80800758: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080075C: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80800760: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800764: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80800768: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8080076C: jr          $ra
    // 0x80800770: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80800770: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800774: nop

    // 0x80800778: nop

    // 0x8080077C: nop

;}
