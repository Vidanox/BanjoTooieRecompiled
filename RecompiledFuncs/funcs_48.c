#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void bsstand_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BAC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800BB0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800BB4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800BB8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800BBC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800BC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800BC4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800BC8: jal         0x8009FFD8
    // 0x80800BCC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_0;
    // 0x80800BCC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80800BD0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800BD4: jal         0x8009B9B0
    // 0x80800BD8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_1;
    // 0x80800BD8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x80800BDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800BE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800BE4: jr          $ra
    // 0x80800BE8: nop

    return;
    // 0x80800BE8: nop

;}
RECOMP_FUNC void bsstand_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800BF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800BF4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800BF8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800BFC: jal         0x8008CABC
    // 0x80800C00: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800C00: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800C04: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80800C08: jal         0x8008B264
    // 0x80800C0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B264(rdram, ctx);
        goto after_1;
    // 0x80800C0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800C10: addiu       $at, $zero, 0xD2
    ctx->r1 = ADD32(0, 0XD2);
    // 0x80800C14: bne         $v0, $at, L_80800C68
    if (ctx->r2 != ctx->r1) {
        // 0x80800C18: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800C68;
    }
    // 0x80800C18: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800C1C: lui         $a1, 0x3F53
    ctx->r5 = S32(0X3F53 << 16);
    // 0x80800C20: jal         0x8008B348
    // 0x80800C24: ori         $a1, $a1, 0x8EF3
    ctx->r5 = ctx->r5 | 0X8EF3;
    func_8008B348(rdram, ctx);
        goto after_2;
    // 0x80800C24: ori         $a1, $a1, 0x8EF3
    ctx->r5 = ctx->r5 | 0X8EF3;
    after_2:
    // 0x80800C28: beq         $v0, $zero, L_80800C40
    if (ctx->r2 == 0) {
        // 0x80800C2C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C40;
    }
    // 0x80800C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C30: addiu       $a1, $zero, 0x449
    ctx->r5 = ADD32(0, 0X449);
    // 0x80800C34: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800C38: jal         0x8009DF18
    // 0x80800C3C: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    func_8009DF18(rdram, ctx);
        goto after_3;
    // 0x80800C3C: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    after_3:
L_80800C40:
    // 0x80800C40: lui         $a1, 0x3F62
    ctx->r5 = S32(0X3F62 << 16);
    // 0x80800C44: ori         $a1, $a1, 0xEB1C
    ctx->r5 = ctx->r5 | 0XEB1C;
    // 0x80800C48: jal         0x8008B348
    // 0x80800C4C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B348(rdram, ctx);
        goto after_4;
    // 0x80800C4C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800C50: beq         $v0, $zero, L_80800C68
    if (ctx->r2 == 0) {
        // 0x80800C54: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C68;
    }
    // 0x80800C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C58: addiu       $a1, $zero, 0x449
    ctx->r5 = ADD32(0, 0X449);
    // 0x80800C5C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800C60: jal         0x8009DF18
    // 0x80800C64: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    func_8009DF18(rdram, ctx);
        goto after_5;
    // 0x80800C64: addiu       $a3, $zero, 0x36B0
    ctx->r7 = ADD32(0, 0X36B0);
    after_5:
L_80800C68:
    // 0x80800C68: jal         0x8008B324
    // 0x80800C6C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8008B324(rdram, ctx);
        goto after_6;
    // 0x80800C6C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_6:
    // 0x80800C70: beq         $v0, $zero, L_80800C80
    if (ctx->r2 == 0) {
        // 0x80800C74: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C80;
    }
    // 0x80800C74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C78: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800C7C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800C80:
    // 0x80800C80: jal         0x80000038
    // 0x80800C84: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80800038_bsstand(rdram, ctx);
        goto after_7;
    // 0x80800C84: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_7:
    // 0x80800C88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C8C: jal         0x8009E5C8
    // 0x80800C90: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x80800C90: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_8:
    // 0x80800C94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800C98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800C9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800CA0: jr          $ra
    // 0x80800CA4: nop

    return;
    // 0x80800CA4: nop

;}
RECOMP_FUNC void bsstand_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CA8: jr          $ra
    // 0x80800CAC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800CAC: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bsstand_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CB0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800CB4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(148, 0XDA8) << 16);
    // 0x80800CB8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800CBC: jr          $ra
    // 0x80800CC0: lw          $v0, 0xDA8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(148, 0XDA8));
    return;
    // 0x80800CC0: lw          $v0, 0xDA8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(148, 0XDA8));
;}
RECOMP_FUNC void bsstand_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CCC: jal         0x80000038
    // 0x80800CD0: nop

    func_80800038_bsstand(rdram, ctx);
        goto after_0;
    // 0x80800CD0: nop

    after_0:
    // 0x80800CD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800CD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800CDC: jr          $ra
    // 0x80800CE0: nop

    return;
    // 0x80800CE0: nop

;}
RECOMP_FUNC void bsstand_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800CE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CEC: jal         0x80082FE0
    // 0x80800CF0: nop

    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800CF0: nop

    after_0:
    // 0x80800CF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800CF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800CFC: jr          $ra
    // 0x80800D00: nop

    return;
    // 0x80800D00: nop

;}
RECOMP_FUNC void bsstand_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D0C: jal         0x80082FE8
    // 0x80800D10: nop

    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800D10: nop

    after_0:
    // 0x80800D14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D1C: jr          $ra
    // 0x80800D20: nop

    return;
    // 0x80800D20: nop

;}
RECOMP_FUNC void bsstand_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800D30: jal         0x80084CC8
    // 0x80800D34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bafpctrl_entrypoint_10(rdram, ctx);
        goto after_0;
    // 0x80800D34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800D38: jal         0x80082FF0
    // 0x80800D3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800D3C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800D40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D48: jr          $ra
    // 0x80800D4C: nop

    return;
    // 0x80800D4C: nop

;}
RECOMP_FUNC void bsstand_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D50: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800D54: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(148, 0XDB8) << 16);
    // 0x80800D58: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800D5C: jr          $ra
    // 0x80800D60: lw          $v0, 0xDB8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(148, 0XDB8));
    return;
    // 0x80800D60: lw          $v0, 0xDB8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(148, 0XDB8));
    // 0x80800D64: nop

    // 0x80800D68: nop

    // 0x80800D6C: nop

;}
RECOMP_FUNC void func_80800000_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080000C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80800010: jal         0x800CEAA8
    // 0x80800014: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800CEAA8(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800018: beq         $v0, $zero, L_80800028
    if (ctx->r2 == 0) {
        // 0x8080001C: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800028;
    }
    // 0x8080001C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800020: beq         $a1, $zero, L_80800038
    if (ctx->r5 == 0) {
        // 0x80800024: nop
    
            goto L_80800038;
    }
    // 0x80800024: nop

L_80800028:
    // 0x80800028: bnel        $v0, $zero, L_80800044
    if (ctx->r2 != 0) {
        // 0x8080002C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800044;
    }
    goto skip_0;
    // 0x8080002C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800030: beql        $a1, $zero, L_80800044
    if (ctx->r5 == 0) {
        // 0x80800034: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800044;
    }
    goto skip_1;
    // 0x80800034: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
L_80800038:
    // 0x80800038: jal         0x800CE88C
    // 0x8080003C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800CE88C(rdram, ctx);
        goto after_1;
    // 0x8080003C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
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
RECOMP_FUNC void func_80800050_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800058: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080005C: jal         0x800CEA84
    // 0x80800060: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800CEA84(rdram, ctx);
        goto after_0;
    // 0x80800060: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x80800064: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800068: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x8080006C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800070: jr          $ra
    // 0x80800074: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    return;
    // 0x80800074: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
;}
RECOMP_FUNC void func_80800078_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800078: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080007C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800080: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800084: jal         0x800CEAD0
    // 0x80800088: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800CEAD0(rdram, ctx);
        goto after_0;
    // 0x80800088: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
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
RECOMP_FUNC void func_8080009C_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080009C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000A8: jal         0x800CEAA8
    // 0x808000AC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_800CEAA8(rdram, ctx);
        goto after_0;
    // 0x808000AC: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x808000B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000B8: jr          $ra
    // 0x808000BC: nop

    return;
    // 0x808000BC: nop

;}
RECOMP_FUNC void func_808000C0_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000C0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x808000C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000CC: trunc.w.s   $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    ctx->f4.u32l = TRUNC_W_S(ctx->f12.fl);
    // 0x808000D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808000D4: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x808000D8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x808000DC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x808000E0: jal         0x800CE8D8
    // 0x808000E4: nop

    func_800CE8D8(rdram, ctx);
        goto after_0;
    // 0x808000E4: nop

    after_0:
    // 0x808000E8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x808000EC: jal         0x800CE88C
    // 0x808000F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800CE88C(rdram, ctx);
        goto after_1;
    // 0x808000F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808000F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000FC: jr          $ra
    // 0x80800100: nop

    return;
    // 0x80800100: nop

;}
RECOMP_FUNC void func_80800104_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800104: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800108: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080010C: jal         0x8001211C
    // 0x80800110: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8001211C(rdram, ctx);
        goto after_0;
    // 0x80800110: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800114: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800118: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080011C: lw          $t7, 0x168($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X168);
    // 0x80800120: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800124: xor         $v0, $v0, $t7
    ctx->r2 = ctx->r2 ^ ctx->r15;
    // 0x80800128: jr          $ra
    // 0x8080012C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
    return;
    // 0x8080012C: sltiu       $v0, $v0, 0x1
    ctx->r2 = ctx->r2 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_80800130_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800130: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800134: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800138: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080013C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800140: jal         0x8009E74C
    // 0x80800144: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x80800144: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x80800148: bne         $v0, $zero, L_808001E8
    if (ctx->r2 != 0) {
        // 0x8080014C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808001E8;
    }
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800150: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800154: jal         0x800947EC
    // 0x80800158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_1;
    // 0x80800158: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8080015C: jal         0x8009E474
    // 0x80800160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_2;
    // 0x80800160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800164: jal         0x8009EF60
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_3;
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080016C: jal         0x80095A40
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_4;
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800178: jal         0x8009590C
    // 0x8080017C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009590C(rdram, ctx);
        goto after_5;
    // 0x8080017C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800180: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800184: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800188: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080018C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800190: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800194: jal         0x800A4D6C
    // 0x80800198: nop

    func_800A4D6C(rdram, ctx);
        goto after_6;
    // 0x80800198: nop

    after_6:
    // 0x8080019C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A0: jal         0x80092864
    // 0x808001A4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80092864(rdram, ctx);
        goto after_7;
    // 0x808001A4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_7:
    // 0x808001A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001AC: jal         0x80095964
    // 0x808001B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80095964(rdram, ctx);
        goto after_8;
    // 0x808001B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x808001B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B8: jal         0x800A25DC
    // 0x808001BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A25DC(rdram, ctx);
        goto after_9;
    // 0x808001BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x808001C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001C4: jal         0x800A2018
    // 0x808001C8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    func_800A2018(rdram, ctx);
        goto after_10;
    // 0x808001C8: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    after_10:
    // 0x808001CC: jal         0x80000050
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800050_bsstatue(rdram, ctx);
        goto after_11;
    // 0x808001D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808001D4: jal         0x8009EB00
    // 0x808001D8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_8009EB00(rdram, ctx);
        goto after_12;
    // 0x808001D8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_12:
    // 0x808001DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E0: jal         0x80000000
    // 0x808001E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800000_bsstatue(rdram, ctx);
        goto after_13;
    // 0x808001E4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
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
RECOMP_FUNC void func_808001FC_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800200: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800204: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800208: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080020C: jal         0x8009E77C
    // 0x80800210: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x80800210: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    after_0:
    // 0x80800214: bne         $v0, $zero, L_8080033C
    if (ctx->r2 != 0) {
        // 0x80800218: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080033C;
    }
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080021C: jal         0x80095774
    // 0x80800220: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80095774(rdram, ctx);
        goto after_1;
    // 0x80800220: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_1:
    // 0x80800224: jal         0x8009E4AC
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_2;
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800230: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800234: jal         0x8009E55C
    // 0x80800238: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    func_8009E55C(rdram, ctx);
        goto after_3;
    // 0x80800238: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    after_3:
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800240: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800244: jal         0x8009E53C
    // 0x80800248: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    func_8009E53C(rdram, ctx);
        goto after_4;
    // 0x80800248: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_4:
    // 0x8080024C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800250: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800254: jal         0x8009E55C
    // 0x80800258: lui         $a2, 0x4320
    ctx->r6 = S32(0X4320 << 16);
    func_8009E55C(rdram, ctx);
        goto after_5;
    // 0x80800258: lui         $a2, 0x4320
    ctx->r6 = S32(0X4320 << 16);
    after_5:
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800264: jal         0x8009E53C
    // 0x80800268: lui         $a2, 0xC2B4
    ctx->r6 = S32(0XC2B4 << 16);
    func_8009E53C(rdram, ctx);
        goto after_6;
    // 0x80800268: lui         $a2, 0xC2B4
    ctx->r6 = S32(0XC2B4 << 16);
    after_6:
    // 0x8080026C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800270: lui         $a1, 0x3FC0
    ctx->r5 = S32(0X3FC0 << 16);
    // 0x80800274: jal         0x800A4D6C
    // 0x80800278: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800A4D6C(rdram, ctx);
        goto after_7;
    // 0x80800278: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_7:
    // 0x8080027C: jal         0x8009EFA8
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_8;
    // 0x80800280: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800284: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x80800288: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x8080028C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800290: jal         0x8009F1C8
    // 0x80800294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_9;
    // 0x80800294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x80800298: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080029C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808002A0: jal         0x8009F1C8
    // 0x808002A4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_10;
    // 0x808002A4: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_10:
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002AC: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    // 0x808002B0: jal         0x800959C8
    // 0x808002B4: lui         $a2, 0x42DC
    ctx->r6 = S32(0X42DC << 16);
    func_800959C8(rdram, ctx);
        goto after_11;
    // 0x808002B4: lui         $a2, 0x42DC
    ctx->r6 = S32(0X42DC << 16);
    after_11:
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002BC: jal         0x8009590C
    // 0x808002C0: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    func_8009590C(rdram, ctx);
        goto after_12;
    // 0x808002C0: lui         $a1, 0x4348
    ctx->r5 = S32(0X4348 << 16);
    after_12:
    // 0x808002C4: lui         $a1, 0x4066
    ctx->r5 = S32(0X4066 << 16);
    // 0x808002C8: ori         $a1, $a1, 0x6640
    ctx->r5 = ctx->r5 | 0X6640;
    // 0x808002CC: jal         0x80092864
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092864(rdram, ctx);
        goto after_13;
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808002D4: jal         0x8000009C
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080009C_bsstatue(rdram, ctx);
        goto after_14;
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808002DC: bnel        $v0, $zero, L_808002FC
    if (ctx->r2 != 0) {
        // 0x808002E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002FC;
    }
    goto skip_0;
    // 0x808002E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808002E4: jal         0x8009EA7C
    // 0x808002E8: nop

    func_8009EA7C(rdram, ctx);
        goto after_15;
    // 0x808002E8: nop

    after_15:
    // 0x808002EC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808002F0: jal         0x800000C0
    // 0x808002F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000C0_bsstatue(rdram, ctx);
        goto after_16;
    // 0x808002F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x808002F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808002FC:
    // 0x808002FC: jal         0x80095964
    // 0x80800300: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80095964(rdram, ctx);
        goto after_17;
    // 0x80800300: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x80800304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800308: jal         0x800A25DC
    // 0x8080030C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A25DC(rdram, ctx);
        goto after_18;
    // 0x8080030C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x80800310: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800314: jal         0x800A2018
    // 0x80800318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A2018(rdram, ctx);
        goto after_19;
    // 0x80800318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x8080031C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800320: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800324: jal         0x800947EC
    // 0x80800328: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_20;
    // 0x80800328: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_20:
    // 0x8080032C: jal         0x8001211C
    // 0x80800330: nop

    func_8001211C(rdram, ctx);
        goto after_21;
    // 0x80800330: nop

    after_21:
    // 0x80800334: addiu       $t6, $v0, -0x1
    ctx->r14 = ADD32(ctx->r2, -0X1);
    // 0x80800338: sw          $t6, 0x168($s0)
    MEM_W(0X168, ctx->r16) = ctx->r14;
L_8080033C:
    // 0x8080033C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800340: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800344: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800348: jr          $ra
    // 0x8080034C: nop

    return;
    // 0x8080034C: nop

;}
RECOMP_FUNC void bsstatue_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800358: jal         0x80000050
    // 0x8080035C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800050_bsstatue(rdram, ctx);
        goto after_0;
    // 0x8080035C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800360: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800364: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800368: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080036C: c.le.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl <= ctx->f4.fl;
    // 0x80800370: nop

    // 0x80800374: bc1fl       L_80800388
    if (!c1cs) {
        // 0x80800378: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800388;
    }
    goto skip_0;
    // 0x80800378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8080037C: jal         0x80095760
    // 0x80800380: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    func_80095760(rdram, ctx);
        goto after_1;
    // 0x80800380: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    after_1:
    // 0x80800384: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800388:
    // 0x80800388: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080038C: jr          $ra
    // 0x80800390: nop

    return;
    // 0x80800390: nop

;}
RECOMP_FUNC void bsstatue_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800394: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800398: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080039C: jal         0x800000C0
    // 0x808003A0: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    func_808000C0_bsstatue(rdram, ctx);
        goto after_0;
    // 0x808003A0: lui         $a1, 0x4296
    ctx->r5 = S32(0X4296 << 16);
    after_0:
    // 0x808003A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003AC: jr          $ra
    // 0x808003B0: nop

    return;
    // 0x808003B0: nop

;}
RECOMP_FUNC void func_808003B4_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003BC: jal         0x8009E6EC
    // 0x808003C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808003C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808003C4: slti        $at, $v0, 0x52
    ctx->r1 = SIGNED(ctx->r2) < 0X52 ? 1 : 0;
    // 0x808003C8: bne         $at, $zero, L_808003EC
    if (ctx->r1 != 0) {
        // 0x808003CC: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808003EC;
    }
    // 0x808003CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808003D0: addiu       $at, $zero, 0x52
    ctx->r1 = ADD32(0, 0X52);
    // 0x808003D4: beq         $v0, $at, L_8080042C
    if (ctx->r2 == ctx->r1) {
        // 0x808003D8: addiu       $at, $zero, 0x82
        ctx->r1 = ADD32(0, 0X82);
            goto L_8080042C;
    }
    // 0x808003D8: addiu       $at, $zero, 0x82
    ctx->r1 = ADD32(0, 0X82);
    // 0x808003DC: beq         $v0, $at, L_8080043C
    if (ctx->r2 == ctx->r1) {
        // 0x808003E0: nop
    
            goto L_8080043C;
    }
    // 0x808003E0: nop

    // 0x808003E4: b           L_8080045C
    // 0x808003E8: nop

        goto L_8080045C;
    // 0x808003E8: nop

L_808003EC:
    // 0x808003EC: slti        $at, $v0, 0x2F
    ctx->r1 = SIGNED(ctx->r2) < 0X2F ? 1 : 0;
    // 0x808003F0: bne         $at, $zero, L_8080040C
    if (ctx->r1 != 0) {
        // 0x808003F4: addiu       $t6, $v0, -0x20
        ctx->r14 = ADD32(ctx->r2, -0X20);
            goto L_8080040C;
    }
    // 0x808003F4: addiu       $t6, $v0, -0x20
    ctx->r14 = ADD32(ctx->r2, -0X20);
    // 0x808003F8: addiu       $at, $zero, 0x51
    ctx->r1 = ADD32(0, 0X51);
    // 0x808003FC: beq         $v0, $at, L_8080042C
    if (ctx->r2 == ctx->r1) {
        // 0x80800400: nop
    
            goto L_8080042C;
    }
    // 0x80800400: nop

    // 0x80800404: b           L_8080045C
    // 0x80800408: nop

        goto L_8080045C;
    // 0x80800408: nop

L_8080040C:
    // 0x8080040C: sltiu       $at, $t6, 0xF
    ctx->r1 = ctx->r14 < 0XF ? 1 : 0;
    // 0x80800410: beq         $at, $zero, L_8080045C
    if (ctx->r1 == 0) {
        // 0x80800414: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8080045C;
    }
    // 0x80800414: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800418: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(149, 0X1520) << 16);
    // 0x8080041C: addu        $at, $at, $t6
    gpr jr_addend_80800424 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800420: lw          $t6, 0x1520($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(149, 0X1520));
    // 0x80800424: jr          $t6
    // 0x80800428: nop

    switch (jr_addend_80800424 >> 2) {
        case 0: goto L_8080042C; break;
        case 1: goto L_8080042C; break;
        case 2: goto L_8080045C; break;
        case 3: goto L_8080042C; break;
        case 4: goto L_8080042C; break;
        case 5: goto L_8080045C; break;
        case 6: goto L_8080045C; break;
        case 7: goto L_8080045C; break;
        case 8: goto L_8080045C; break;
        case 9: goto L_8080045C; break;
        case 10: goto L_8080045C; break;
        case 11: goto L_8080045C; break;
        case 12: goto L_8080045C; break;
        case 13: goto L_8080042C; break;
        case 14: goto L_8080042C; break;
        default: switch_error(__func__, 0x80800424, 0x80801520);
    }
    // 0x80800428: nop

L_8080042C:
    // 0x8080042C: jal         0x8009E830
    // 0x80800430: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E830(rdram, ctx);
        goto after_1;
    // 0x80800430: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80800434: b           L_80800468
    // 0x80800438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800468;
    // 0x80800438: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080043C:
    // 0x8080043C: jal         0x8001211C
    // 0x80800440: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8001211C(rdram, ctx);
        goto after_2;
    // 0x80800440: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x80800444: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800448: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8080044C: jal         0x8009E830
    // 0x80800450: sw          $v0, 0x168($a0)
    MEM_W(0X168, ctx->r4) = ctx->r2;
    func_8009E830(rdram, ctx);
        goto after_3;
    // 0x80800450: sw          $v0, 0x168($a0)
    MEM_W(0X168, ctx->r4) = ctx->r2;
    after_3:
    // 0x80800454: b           L_80800468
    // 0x80800458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800468;
    // 0x80800458: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080045C:
    // 0x8080045C: jal         0x80099B94
    // 0x80800460: nop

    func_80099B94(rdram, ctx);
        goto after_4;
    // 0x80800460: nop

    after_4:
    // 0x80800464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800468:
    // 0x80800468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080046C: jr          $ra
    // 0x80800470: nop

    return;
    // 0x80800470: nop

;}
RECOMP_FUNC void func_80800474_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800474: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080047C: jal         0x800848E0
    // 0x80800480: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _badrone_entrypoint_31(rdram, ctx);
        goto after_0;
    // 0x80800480: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800484: beq         $v0, $zero, L_80800494
    if (ctx->r2 == 0) {
        // 0x80800488: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800494;
    }
    // 0x80800488: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080048C: jal         0x80000000
    // 0x80800490: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800000_bsstatue(rdram, ctx);
        goto after_1;
    // 0x80800490: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_80800494:
    // 0x80800494: jal         0x80082FF0
    // 0x80800498: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80800498: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8080049C: jal         0x80000130
    // 0x808004A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800130_bsstatue(rdram, ctx);
        goto after_3;
    // 0x808004A0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808004A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004AC: jr          $ra
    // 0x808004B0: nop

    return;
    // 0x808004B0: nop

;}
RECOMP_FUNC void func_808004B4_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004BC: jal         0x800001FC
    // 0x808004C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808001FC_bsstatue(rdram, ctx);
        goto after_0;
    // 0x808004C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808004C4: jal         0x80082FE0
    // 0x808004C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x808004C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808004CC: jal         0x800848E0
    // 0x808004D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _badrone_entrypoint_31(rdram, ctx);
        goto after_2;
    // 0x808004D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808004D4: beq         $v0, $zero, L_808004E4
    if (ctx->r2 == 0) {
        // 0x808004D8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808004E4;
    }
    // 0x808004D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808004DC: jal         0x80000000
    // 0x808004E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800000_bsstatue(rdram, ctx);
        goto after_3;
    // 0x808004E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_808004E4:
    // 0x808004E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808004E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808004EC: jr          $ra
    // 0x808004F0: nop

    return;
    // 0x808004F0: nop

;}
RECOMP_FUNC void func_808004F4_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004F4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808004F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004FC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800500: jal         0x80082FE8
    // 0x80800504: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800504: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800508: jal         0x80000078
    // 0x8080050C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_80800078_bsstatue(rdram, ctx);
        goto after_1;
    // 0x8080050C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800510: beq         $v0, $zero, L_8080051C
    if (ctx->r2 == 0) {
        // 0x80800514: addiu       $t6, $zero, 0xFD
        ctx->r14 = ADD32(0, 0XFD);
            goto L_8080051C;
    }
    // 0x80800514: addiu       $t6, $zero, 0xFD
    ctx->r14 = ADD32(0, 0XFD);
    // 0x80800518: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_8080051C:
    // 0x8080051C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800520: jal         0x8009E5C8
    // 0x80800524: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800524: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800528: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080052C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800530: jr          $ra
    // 0x80800534: nop

    return;
    // 0x80800534: nop

;}
RECOMP_FUNC void bsstatue_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800538: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080053C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(149, 0X15A0) << 16);
    // 0x80800540: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800544: jr          $ra
    // 0x80800548: lw          $v0, 0x15A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X15A0));
    return;
    // 0x80800548: lw          $v0, 0x15A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X15A0));
;}
RECOMP_FUNC void func_8080054C_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080054C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800550: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800554: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800558: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080055C: jal         0x8008CABC
    // 0x80800560: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800560: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800564: lw          $v1, 0x3C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X3C);
    // 0x80800568: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8080056C: sltiu       $at, $v1, 0x6
    ctx->r1 = ctx->r3 < 0X6 ? 1 : 0;
    // 0x80800570: beq         $at, $zero, L_8080077C
    if (ctx->r1 == 0) {
        // 0x80800574: sb          $v1, 0x15C($s0)
        MEM_B(0X15C, ctx->r16) = ctx->r3;
            goto L_8080077C;
    }
    // 0x80800574: sb          $v1, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r3;
    // 0x80800578: sll         $t6, $v1, 2
    ctx->r14 = S32(ctx->r3 << 2);
    // 0x8080057C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(149, 0X155C) << 16);
    // 0x80800580: addu        $at, $at, $t6
    gpr jr_addend_80800588 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800584: lw          $t6, 0x155C($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(149, 0X155C));
    // 0x80800588: jr          $t6
    // 0x8080058C: nop

    switch (jr_addend_80800588 >> 2) {
        case 0: goto L_80800768; break;
        case 1: goto L_80800590; break;
        case 2: goto L_80800640; break;
        case 3: goto L_808006BC; break;
        case 4: goto L_808006D8; break;
        case 5: goto L_80800730; break;
        default: switch_error(__func__, 0x80800588, 0x8080155C);
    }
    // 0x8080058C: nop

L_80800590:
    // 0x80800590: jal         0x8008AF24
    // 0x80800594: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800594: sw          $a0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r4;
    after_1:
    // 0x80800598: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8080059C: jal         0x8008AED4
    // 0x808005A0: addiu       $a1, $zero, 0x1EF
    ctx->r5 = ADD32(0, 0X1EF);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x808005A0: addiu       $a1, $zero, 0x1EF
    ctx->r5 = ADD32(0, 0X1EF);
    after_2:
    // 0x808005A4: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x808005A8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808005AC: jal         0x8008B1BC
    // 0x808005B0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x808005B0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_3:
    // 0x808005B4: lui         $a2, 0x3E91
    ctx->r6 = S32(0X3E91 << 16);
    // 0x808005B8: ori         $a2, $a2, 0xCB3
    ctx->r6 = ctx->r6 | 0XCB3;
    // 0x808005BC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808005C0: jal         0x8008B1D4
    // 0x808005C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_4;
    // 0x808005C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x808005C8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808005CC: jal         0x8008B134
    // 0x808005D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_5;
    // 0x808005D0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x808005D4: jal         0x8008B064
    // 0x808005D8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_6;
    // 0x808005D8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x808005DC: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x808005E0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x808005E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005E8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808005EC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808005F0: jal         0x8009FFD8
    // 0x808005F4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_7;
    // 0x808005F4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_7:
    // 0x808005F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005FC: jal         0x8009B9B0
    // 0x80800600: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_8;
    // 0x80800600: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
    // 0x80800604: jal         0x8009EF04
    // 0x80800608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_9;
    // 0x80800608: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080060C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800610: nop

    // 0x80800614: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800618: nop

    // 0x8080061C: bc1tl       L_80800780
    if (c1cs) {
        // 0x80800620: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80800780;
    }
    goto skip_0;
    // 0x80800620: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800624: jal         0x8009EEB8
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_10;
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080062C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800630: jal         0x8009C914
    // 0x80800634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_11;
    // 0x80800634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800638: b           L_80800780
    // 0x8080063C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800780;
    // 0x8080063C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800640:
    // 0x80800640: lui         $a1, 0x3EEE
    ctx->r5 = S32(0X3EEE << 16);
    // 0x80800644: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800648: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080064C: ori         $a1, $a1, 0x6320
    ctx->r5 = ctx->r5 | 0X6320;
    // 0x80800650: jal         0x8008CF1C
    // 0x80800654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CF1C(rdram, ctx);
        goto after_12;
    // 0x80800654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800658: jal         0x8009C990
    // 0x8080065C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_13;
    // 0x8080065C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800660: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800664: jal         0x8009B9C0
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_14;
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8080066C: jal         0x80000BEC
    // 0x80800670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800BEC_bsstatue(rdram, ctx);
        goto after_15;
    // 0x80800670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800674: jal         0x8009C990
    // 0x80800678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_16;
    // 0x80800678: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8080067C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800680: jal         0x8009BB00
    // 0x80800684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_17;
    // 0x80800684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800688: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080068C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800690: jal         0x8009BA68
    // 0x80800694: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_18;
    // 0x80800694: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_18:
    // 0x80800698: lui         $a1, 0x4431
    ctx->r5 = S32(0X4431 << 16);
    // 0x8080069C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x808006A0: jal         0x8009BA58
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BA58(rdram, ctx);
        goto after_19;
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x808006A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006AC: jal         0x8009BCB4
    // 0x808006B0: lui         $a1, 0xC516
    ctx->r5 = S32(0XC516 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_20;
    // 0x808006B0: lui         $a1, 0xC516
    ctx->r5 = S32(0XC516 << 16);
    after_20:
    // 0x808006B4: b           L_80800780
    // 0x808006B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800780;
    // 0x808006B8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808006BC:
    // 0x808006BC: lui         $a1, 0x3F0B
    ctx->r5 = S32(0X3F0B << 16);
    // 0x808006C0: ori         $a1, $a1, 0xAC71
    ctx->r5 = ctx->r5 | 0XAC71;
    // 0x808006C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006C8: jal         0x8008CF1C
    // 0x808006CC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_21;
    // 0x808006CC: lui         $a2, 0x4100
    ctx->r6 = S32(0X4100 << 16);
    after_21:
    // 0x808006D0: b           L_80800780
    // 0x808006D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800780;
    // 0x808006D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808006D8:
    // 0x808006D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006DC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808006E0: jal         0x8009E55C
    // 0x808006E4: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    func_8009E55C(rdram, ctx);
        goto after_22;
    // 0x808006E4: lui         $a2, 0x437A
    ctx->r6 = S32(0X437A << 16);
    after_22:
    // 0x808006E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808006F0: jal         0x8009E53C
    // 0x808006F4: lui         $a2, 0xC334
    ctx->r6 = S32(0XC334 << 16);
    func_8009E53C(rdram, ctx);
        goto after_23;
    // 0x808006F4: lui         $a2, 0xC334
    ctx->r6 = S32(0XC334 << 16);
    after_23:
    // 0x808006F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006FC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800700: jal         0x8009E5A4
    // 0x80800704: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8009E5A4(rdram, ctx);
        goto after_24;
    // 0x80800704: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_24:
    // 0x80800708: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080070C: jal         0x80095760
    // 0x80800710: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    func_80095760(rdram, ctx);
        goto after_25;
    // 0x80800710: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    after_25:
    // 0x80800714: lui         $a2, 0x3F99
    ctx->r6 = S32(0X3F99 << 16);
    // 0x80800718: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8080071C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800720: jal         0x8008CF1C
    // 0x80800724: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_26;
    // 0x80800724: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_26:
    // 0x80800728: b           L_80800780
    // 0x8080072C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800780;
    // 0x8080072C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800730:
    // 0x80800730: jal         0x800A2EAC
    // 0x80800734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2EAC(rdram, ctx);
        goto after_27;
    // 0x80800734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80800738: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080073C: jal         0x80095774
    // 0x80800740: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    func_80095774(rdram, ctx);
        goto after_28;
    // 0x80800740: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    after_28:
    // 0x80800744: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800748: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8080074C: jal         0x8009E55C
    // 0x80800750: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_29;
    // 0x80800750: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_29:
    // 0x80800754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800758: jal         0x8009B9B0
    // 0x8080075C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_30;
    // 0x8080075C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_30:
    // 0x80800760: b           L_80800780
    // 0x80800764: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800780;
    // 0x80800764: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800768:
    // 0x80800768: jal         0x8009BC6C
    // 0x8080076C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_31;
    // 0x8080076C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80800770: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800774: jal         0x80095774
    // 0x80800778: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    func_80095774(rdram, ctx);
        goto after_32;
    // 0x80800778: addiu       $a1, $zero, 0x2D
    ctx->r5 = ADD32(0, 0X2D);
    after_32:
L_8080077C:
    // 0x8080077C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800780:
    // 0x80800780: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800784: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800788: jr          $ra
    // 0x8080078C: nop

    return;
    // 0x8080078C: nop

;}
RECOMP_FUNC void func_80800790_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800798: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8080079C: jal         0x80095738
    // 0x808007A0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_80095738(rdram, ctx);
        goto after_0;
    // 0x808007A0: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x808007A4: beq         $v0, $zero, L_808007BC
    if (ctx->r2 == 0) {
        // 0x808007A8: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808007BC;
    }
    // 0x808007A8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808007AC: jal         0x8009B7C0
    // 0x808007B0: nop

    func_8009B7C0(rdram, ctx);
        goto after_1;
    // 0x808007B0: nop

    after_1:
    // 0x808007B4: b           L_808007C8
    // 0x808007B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808007C8;
    // 0x808007B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808007BC:
    // 0x808007BC: jal         0x80000BEC
    // 0x808007C0: nop

    func_80800BEC_bsstatue(rdram, ctx);
        goto after_2;
    // 0x808007C0: nop

    after_2:
    // 0x808007C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808007C8:
    // 0x808007C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808007CC: jr          $ra
    // 0x808007D0: nop

    return;
    // 0x808007D0: nop

;}
RECOMP_FUNC void func_808007D4_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808007D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808007DC: jal         0x80000130
    // 0x808007E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800130_bsstatue(rdram, ctx);
        goto after_0;
    // 0x808007E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808007E4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808007E8: jal         0x8000054C
    // 0x808007EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8080054C_bsstatue(rdram, ctx);
        goto after_1;
    // 0x808007EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808007F0: jal         0x8009E704
    // 0x808007F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8009E704(rdram, ctx);
        goto after_2;
    // 0x808007F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808007F8: addiu       $at, $zero, 0xF9
    ctx->r1 = ADD32(0, 0XF9);
    // 0x808007FC: bne         $v0, $at, L_8080080C
    if (ctx->r2 != ctx->r1) {
        // 0x80800800: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8080080C;
    }
    // 0x80800800: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800804: jal         0x8009B9B0
    // 0x80800808: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800808: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
L_8080080C:
    // 0x8080080C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800810: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800814: jr          $ra
    // 0x80800818: nop

    return;
    // 0x80800818: nop

;}
RECOMP_FUNC void func_8080081C_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080081C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800824: jal         0x800001FC
    // 0x80800828: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808001FC_bsstatue(rdram, ctx);
        goto after_0;
    // 0x80800828: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080082C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800830: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800834: jal         0x8000054C
    // 0x80800838: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    func_8080054C_bsstatue(rdram, ctx);
        goto after_1;
    // 0x80800838: sb          $zero, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = 0;
    after_1:
    // 0x8080083C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800840: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800844: jr          $ra
    // 0x80800848: nop

    return;
    // 0x80800848: nop

;}
RECOMP_FUNC void func_8080084C_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080084C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800850: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800854: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800858: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080085C: jal         0x80000350
    // 0x80800860: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    bsstatue_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800860: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x80800864: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800868: jal         0x8009BB24
    // 0x8080086C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_8009BB24(rdram, ctx);
        goto after_1;
    // 0x8080086C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_1:
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800874: jal         0x80091A30
    // 0x80800878: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_2;
    // 0x80800878: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_2:
    // 0x8080087C: beq         $v0, $zero, L_8080089C
    if (ctx->r2 == 0) {
        // 0x80800880: lwc1        $f6, 0x24($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
            goto L_8080089C;
    }
    // 0x80800880: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80800884: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800888: nop

    // 0x8080088C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800890: nop

    // 0x80800894: bc1t        L_808008AC
    if (c1cs) {
        // 0x80800898: nop
    
            goto L_808008AC;
    }
    // 0x80800898: nop

L_8080089C:
    // 0x8080089C: jal         0x8008D544
    // 0x808008A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D544(rdram, ctx);
        goto after_3;
    // 0x808008A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808008A4: bnel        $v0, $zero, L_808008B8
    if (ctx->r2 != 0) {
        // 0x808008A8: lbu         $t6, 0x15C($s0)
        ctx->r14 = MEM_BU(ctx->r16, 0X15C);
            goto L_808008B8;
    }
    goto skip_0;
    // 0x808008A8: lbu         $t6, 0x15C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X15C);
    skip_0:
L_808008AC:
    // 0x808008AC: jal         0x8009BC6C
    // 0x808008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_4;
    // 0x808008B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808008B4: lbu         $t6, 0x15C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X15C);
L_808008B8:
    // 0x808008B8: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x808008BC: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x808008C0: beq         $at, $zero, L_8080098C
    if (ctx->r1 == 0) {
        // 0x808008C4: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8080098C;
    }
    // 0x808008C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x808008C8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(149, 0X1574) << 16);
    // 0x808008CC: addu        $at, $at, $t7
    gpr jr_addend_808008D4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x808008D0: lw          $t7, 0x1574($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(149, 0X1574));
    // 0x808008D4: jr          $t7
    // 0x808008D8: nop

    switch (jr_addend_808008D4 >> 2) {
        case 0: goto L_808008DC; break;
        case 1: goto L_808008FC; break;
        case 2: goto L_80800924; break;
        case 3: goto L_80800950; break;
        case 4: goto L_80800978; break;
        default: switch_error(__func__, 0x808008D4, 0x80801574);
    }
    // 0x808008D8: nop

L_808008DC:
    // 0x808008DC: jal         0x8008CAEC
    // 0x808008E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_5;
    // 0x808008E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808008E4: beq         $v0, $zero, L_8080098C
    if (ctx->r2 == 0) {
        // 0x808008E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080098C;
    }
    // 0x808008E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008EC: jal         0x8000054C
    // 0x808008F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8080054C_bsstatue(rdram, ctx);
        goto after_6;
    // 0x808008F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x808008F4: b           L_80800990
    // 0x808008F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800990;
    // 0x808008F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808008FC:
    // 0x808008FC: jal         0x80000790
    // 0x80800900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800790_bsstatue(rdram, ctx);
        goto after_7;
    // 0x80800900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800904: jal         0x8008CAEC
    // 0x80800908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_8;
    // 0x80800908: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x8080090C: beq         $v0, $zero, L_8080098C
    if (ctx->r2 == 0) {
        // 0x80800910: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080098C;
    }
    // 0x80800910: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800914: jal         0x8000054C
    // 0x80800918: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8080054C_bsstatue(rdram, ctx);
        goto after_9;
    // 0x80800918: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x8080091C: b           L_80800990
    // 0x80800920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800990;
    // 0x80800920: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800924:
    // 0x80800924: jal         0x80000790
    // 0x80800928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800790_bsstatue(rdram, ctx);
        goto after_10;
    // 0x80800928: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x8080092C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800930: jal         0x8008DF8C
    // 0x80800934: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    func_8008DF8C(rdram, ctx);
        goto after_11;
    // 0x80800934: addiu       $a1, $zero, 0x5A
    ctx->r5 = ADD32(0, 0X5A);
    after_11:
    // 0x80800938: beq         $v0, $zero, L_8080098C
    if (ctx->r2 == 0) {
        // 0x8080093C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080098C;
    }
    // 0x8080093C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800940: jal         0x8000054C
    // 0x80800944: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8080054C_bsstatue(rdram, ctx);
        goto after_12;
    // 0x80800944: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_12:
    // 0x80800948: b           L_80800990
    // 0x8080094C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800990;
    // 0x8080094C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800950:
    // 0x80800950: jal         0x80000790
    // 0x80800954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800790_bsstatue(rdram, ctx);
        goto after_13;
    // 0x80800954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800958: jal         0x8008E078
    // 0x8080095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_14;
    // 0x8080095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800960: beq         $v0, $zero, L_8080098C
    if (ctx->r2 == 0) {
        // 0x80800964: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080098C;
    }
    // 0x80800964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800968: jal         0x8000054C
    // 0x8080096C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_8080054C_bsstatue(rdram, ctx);
        goto after_15;
    // 0x8080096C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_15:
    // 0x80800970: b           L_80800990
    // 0x80800974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800990;
    // 0x80800974: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800978:
    // 0x80800978: jal         0x8008CAEC
    // 0x8080097C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_16;
    // 0x8080097C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800980: beq         $v0, $zero, L_8080098C
    if (ctx->r2 == 0) {
        // 0x80800984: addiu       $t8, $zero, 0xF9
        ctx->r24 = ADD32(0, 0XF9);
            goto L_8080098C;
    }
    // 0x80800984: addiu       $t8, $zero, 0xF9
    ctx->r24 = ADD32(0, 0XF9);
    // 0x80800988: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_8080098C:
    // 0x8080098C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800990:
    // 0x80800990: jal         0x8009E5C8
    // 0x80800994: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_17;
    // 0x80800994: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_17:
    // 0x80800998: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080099C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808009A0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808009A4: jr          $ra
    // 0x808009A8: nop

    return;
    // 0x808009A8: nop

;}
RECOMP_FUNC void bsstatue_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009AC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808009B0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(149, 0X15B0) << 16);
    // 0x808009B4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808009B8: jr          $ra
    // 0x808009BC: lw          $v0, 0x15B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X15B0));
    return;
    // 0x808009BC: lw          $v0, 0x15B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X15B0));
;}
RECOMP_FUNC void func_808009C0_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808009C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808009C8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808009CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808009D0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808009D4: jal         0x8009E53C
    // 0x808009D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E53C(rdram, ctx);
        goto after_0;
    // 0x808009D8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_0:
    // 0x808009DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808009E4: jal         0x8009E5A4
    // 0x808009E8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8009E5A4(rdram, ctx);
        goto after_1;
    // 0x808009E8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x808009EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009F0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808009F4: jal         0x8009E55C
    // 0x808009F8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_2;
    // 0x808009F8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
    // 0x808009FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A00: jal         0x80095774
    // 0x80800A04: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    func_80095774(rdram, ctx);
        goto after_3;
    // 0x80800A04: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    after_3:
    // 0x80800A08: jal         0x80000130
    // 0x80800A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800130_bsstatue(rdram, ctx);
        goto after_4;
    // 0x80800A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800A10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800A18: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800A1C: jr          $ra
    // 0x80800A20: nop

    return;
    // 0x80800A20: nop

;}
RECOMP_FUNC void func_80800A24_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A24: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800A28: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800A2C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800A30: jal         0x800001FC
    // 0x80800A34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808001FC_bsstatue(rdram, ctx);
        goto after_0;
    // 0x80800A34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A3C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800A40: jal         0x8009E55C
    // 0x80800A44: lui         $a2, 0x42DC
    ctx->r6 = S32(0X42DC << 16);
    func_8009E55C(rdram, ctx);
        goto after_1;
    // 0x80800A44: lui         $a2, 0x42DC
    ctx->r6 = S32(0X42DC << 16);
    after_1:
    // 0x80800A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A4C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800A50: jal         0x8009E5A4
    // 0x80800A54: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8009E5A4(rdram, ctx);
        goto after_2;
    // 0x80800A54: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x80800A58: lui         $a2, 0x3FA6
    ctx->r6 = S32(0X3FA6 << 16);
    // 0x80800A5C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A64: jal         0x8008CCBC
    // 0x80800A68: addiu       $a1, $zero, 0x1F0
    ctx->r5 = ADD32(0, 0X1F0);
    func_8008CCBC(rdram, ctx);
        goto after_3;
    // 0x80800A68: addiu       $a1, $zero, 0x1F0
    ctx->r5 = ADD32(0, 0X1F0);
    after_3:
    // 0x80800A6C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800A70: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800A74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A78: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800A7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800A80: jal         0x8009FFD8
    // 0x80800A84: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_4;
    // 0x80800A84: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_4:
    // 0x80800A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A8C: jal         0x8009B9B0
    // 0x80800A90: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_5;
    // 0x80800A90: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800A94: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800A98: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800A9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800AA0: jr          $ra
    // 0x80800AA4: nop

    return;
    // 0x80800AA4: nop

;}
RECOMP_FUNC void func_80800AA8_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AA8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80800AAC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800AB0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800AB4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800AB8: jal         0x80000350
    // 0x80800ABC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    bsstatue_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80800ABC: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x80800AC0: lui         $a1, 0x3D4C
    ctx->r5 = S32(0X3D4C << 16);
    // 0x80800AC4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800AC8: jal         0x8008CB10
    // 0x80800ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_1;
    // 0x80800ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800AD0: beq         $v0, $zero, L_80800AF8
    if (ctx->r2 == 0) {
        // 0x80800AD4: lui         $a2, 0x3F61
        ctx->r6 = S32(0X3F61 << 16);
            goto L_80800AF8;
    }
    // 0x80800AD4: lui         $a2, 0x3F61
    ctx->r6 = S32(0X3F61 << 16);
    // 0x80800AD8: lui         $a3, 0x3F6B
    ctx->r7 = S32(0X3F6B << 16);
    // 0x80800ADC: addiu       $t6, $zero, 0x1B58
    ctx->r14 = ADD32(0, 0X1B58);
    // 0x80800AE0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800AE4: ori         $a3, $a3, 0x851F
    ctx->r7 = ctx->r7 | 0X851F;
    // 0x80800AE8: ori         $a2, $a2, 0x47AE
    ctx->r6 = ctx->r6 | 0X47AE;
    // 0x80800AEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AF0: jal         0x8009DBB0
    // 0x80800AF4: addiu       $a1, $zero, 0x4A1
    ctx->r5 = ADD32(0, 0X4A1);
    func_8009DBB0(rdram, ctx);
        goto after_2;
    // 0x80800AF4: addiu       $a1, $zero, 0x4A1
    ctx->r5 = ADD32(0, 0X4A1);
    after_2:
L_80800AF8:
    // 0x80800AF8: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x80800AFC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800B00: jal         0x8008CB10
    // 0x80800B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_3;
    // 0x80800B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800B08: beq         $v0, $zero, L_80800B30
    if (ctx->r2 == 0) {
        // 0x80800B0C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B30;
    }
    // 0x80800B0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B10: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x80800B14: lui         $a3, 0x3F26
    ctx->r7 = S32(0X3F26 << 16);
    // 0x80800B18: addiu       $t7, $zero, 0x2EE0
    ctx->r15 = ADD32(0, 0X2EE0);
    // 0x80800B1C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800B20: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800B24: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800B28: jal         0x8009DBB0
    // 0x80800B2C: addiu       $a1, $zero, 0x632
    ctx->r5 = ADD32(0, 0X632);
    func_8009DBB0(rdram, ctx);
        goto after_4;
    // 0x80800B2C: addiu       $a1, $zero, 0x632
    ctx->r5 = ADD32(0, 0X632);
    after_4:
L_80800B30:
    // 0x80800B30: lui         $a1, 0x3F59
    ctx->r5 = S32(0X3F59 << 16);
    // 0x80800B34: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800B38: jal         0x8008CB10
    // 0x80800B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_5;
    // 0x80800B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800B40: beq         $v0, $zero, L_80800B68
    if (ctx->r2 == 0) {
        // 0x80800B44: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B68;
    }
    // 0x80800B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B48: lui         $a2, 0x3F70
    ctx->r6 = S32(0X3F70 << 16);
    // 0x80800B4C: lui         $a3, 0x3F7A
    ctx->r7 = S32(0X3F7A << 16);
    // 0x80800B50: addiu       $t8, $zero, 0x1770
    ctx->r24 = ADD32(0, 0X1770);
    // 0x80800B54: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80800B58: ori         $a3, $a3, 0xE148
    ctx->r7 = ctx->r7 | 0XE148;
    // 0x80800B5C: ori         $a2, $a2, 0xA3D7
    ctx->r6 = ctx->r6 | 0XA3D7;
    // 0x80800B60: jal         0x8009DBB0
    // 0x80800B64: addiu       $a1, $zero, 0x4A1
    ctx->r5 = ADD32(0, 0X4A1);
    func_8009DBB0(rdram, ctx);
        goto after_6;
    // 0x80800B64: addiu       $a1, $zero, 0x4A1
    ctx->r5 = ADD32(0, 0X4A1);
    after_6:
L_80800B68:
    // 0x80800B68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B6C: jal         0x8008CB10
    // 0x80800B70: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008CB10(rdram, ctx);
        goto after_7;
    // 0x80800B70: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_7:
    // 0x80800B74: beq         $v0, $zero, L_80800B84
    if (ctx->r2 == 0) {
        // 0x80800B78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B84;
    }
    // 0x80800B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B7C: jal         0x80095774
    // 0x80800B80: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    func_80095774(rdram, ctx);
        goto after_8;
    // 0x80800B80: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    after_8:
L_80800B84:
    // 0x80800B84: lui         $a1, 0x3EB8
    ctx->r5 = S32(0X3EB8 << 16);
    // 0x80800B88: ori         $a1, $a1, 0x2A99
    ctx->r5 = ctx->r5 | 0X2A99;
    // 0x80800B8C: jal         0x8008CB10
    // 0x80800B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_9;
    // 0x80800B90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800B94: beq         $v0, $zero, L_80800BA4
    if (ctx->r2 == 0) {
        // 0x80800B98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800BA4;
    }
    // 0x80800B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B9C: jal         0x80095760
    // 0x80800BA0: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    func_80095760(rdram, ctx);
        goto after_10;
    // 0x80800BA0: addiu       $a1, $zero, 0x2B
    ctx->r5 = ADD32(0, 0X2B);
    after_10:
L_80800BA4:
    // 0x80800BA4: jal         0x8008CAEC
    // 0x80800BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_11;
    // 0x80800BA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800BAC: beq         $v0, $zero, L_80800BBC
    if (ctx->r2 == 0) {
        // 0x80800BB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800BBC;
    }
    // 0x80800BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BB4: addiu       $t9, $zero, 0xF9
    ctx->r25 = ADD32(0, 0XF9);
    // 0x80800BB8: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_80800BBC:
    // 0x80800BBC: jal         0x8009E5C8
    // 0x80800BC0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_12;
    // 0x80800BC0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_12:
    // 0x80800BC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800BC8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800BCC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800BD0: jr          $ra
    // 0x80800BD4: nop

    return;
    // 0x80800BD4: nop

;}
RECOMP_FUNC void bsstatue_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BD8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800BDC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(149, 0X15C0) << 16);
    // 0x80800BE0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800BE4: jr          $ra
    // 0x80800BE8: lw          $v0, 0x15C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X15C0));
    return;
    // 0x80800BE8: lw          $v0, 0x15C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X15C0));
;}
RECOMP_FUNC void func_80800BEC_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BEC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800BF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BF4: jal         0x8009EF1C
    // 0x80800BF8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x80800BF8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800BFC: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80800C00: jal         0x8009EF10
    // 0x80800C04: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x80800C04: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800C08: beq         $v0, $zero, L_80800C24
    if (ctx->r2 == 0) {
        // 0x80800C0C: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_80800C24;
    }
    // 0x80800C0C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800C10: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800C14: beq         $v0, $at, L_80800C34
    if (ctx->r2 == ctx->r1) {
        // 0x80800C18: lwc1        $f12, 0x1C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_80800C34;
    }
    // 0x80800C18: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800C1C: b           L_80800C58
    // 0x80800C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800C58;
    // 0x80800C20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800C24:
    // 0x80800C24: jal         0x8009B9B0
    // 0x80800C28: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800C28: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800C2C: b           L_80800C58
    // 0x80800C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800C58;
    // 0x80800C30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800C34:
    // 0x80800C34: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80800C38: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800C3C: lui         $a2, 0x4422
    ctx->r6 = S32(0X4422 << 16);
    // 0x80800C40: jal         0x800F1214
    // 0x80800C44: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x80800C44: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    after_3:
    // 0x80800C48: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800C4C: jal         0x8009B9B0
    // 0x80800C50: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800C50: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x80800C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800C58:
    // 0x80800C58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800C5C: jr          $ra
    // 0x80800C60: nop

    return;
    // 0x80800C60: nop

;}
RECOMP_FUNC void func_80800C64_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C64: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C68: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C6C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800C70: jal         0x80000000
    // 0x80800C74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800000_bsstatue(rdram, ctx);
        goto after_0;
    // 0x80800C74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800C78: jal         0x800839B8
    // 0x80800C7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_1;
    // 0x80800C7C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800C80: jal         0x80000130
    // 0x80800C84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800130_bsstatue(rdram, ctx);
        goto after_2;
    // 0x80800C84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800C88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C90: jr          $ra
    // 0x80800C94: nop

    return;
    // 0x80800C94: nop

;}
RECOMP_FUNC void func_80800C98_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CA0: jal         0x800001FC
    // 0x80800CA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808001FC_bsstatue(rdram, ctx);
        goto after_0;
    // 0x80800CA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800CA8: jal         0x800839C8
    // 0x80800CAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80800CAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800CB0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800CB4: jal         0x80000000
    // 0x80800CB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800000_bsstatue(rdram, ctx);
        goto after_2;
    // 0x80800CB8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800CBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800CC0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800CC4: jr          $ra
    // 0x80800CC8: nop

    return;
    // 0x80800CC8: nop

;}
RECOMP_FUNC void func_80800CCC_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800CCC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800CD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800CD4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800CD8: jal         0x800839E8
    // 0x80800CDC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x80800CDC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800CE0: beq         $v0, $zero, L_80800CF4
    if (ctx->r2 == 0) {
        // 0x80800CE4: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800CF4;
    }
    // 0x80800CE4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800CE8: jal         0x800839B0
    // 0x80800CEC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x80800CEC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800CF0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80800CF4:
    // 0x80800CF4: jal         0x8009E5C8
    // 0x80800CF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800CF8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800CFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D00: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800D04: jr          $ra
    // 0x80800D08: nop

    return;
    // 0x80800D08: nop

;}
RECOMP_FUNC void bsstatue_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D0C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800D10: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(149, 0X15D0) << 16);
    // 0x80800D14: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800D18: jr          $ra
    // 0x80800D1C: lw          $v0, 0x15D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X15D0));
    return;
    // 0x80800D1C: lw          $v0, 0x15D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X15D0));
;}
RECOMP_FUNC void func_80800D20_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D28: jal         0x8009E6EC
    // 0x80800D2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800D2C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D30: addiu       $at, $zero, 0x81
    ctx->r1 = ADD32(0, 0X81);
    // 0x80800D34: bne         $v0, $at, L_80800D6C
    if (ctx->r2 != ctx->r1) {
        // 0x80800D38: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800D6C;
    }
    // 0x80800D38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800D3C: jal         0x80099A58
    // 0x80800D40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80099A58(rdram, ctx);
        goto after_1;
    // 0x80800D40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80800D44: addiu       $at, $zero, 0x11E8
    ctx->r1 = ADD32(0, 0X11E8);
    // 0x80800D48: bne         $v0, $at, L_80800D5C
    if (ctx->r2 != ctx->r1) {
        // 0x80800D4C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800D5C;
    }
    // 0x80800D4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800D50: lw          $t6, 0x164($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X164);
    // 0x80800D54: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80800D58: sw          $t7, 0x164($a0)
    MEM_W(0X164, ctx->r4) = ctx->r15;
L_80800D5C:
    // 0x80800D5C: jal         0x8009E830
    // 0x80800D60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_2;
    // 0x80800D60: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x80800D64: b           L_80800D78
    // 0x80800D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800D78;
    // 0x80800D68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800D6C:
    // 0x80800D6C: jal         0x800003B4
    // 0x80800D70: nop

    func_808003B4_bsstatue(rdram, ctx);
        goto after_3;
    // 0x80800D70: nop

    after_3:
    // 0x80800D74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800D78:
    // 0x80800D78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D7C: jr          $ra
    // 0x80800D80: nop

    return;
    // 0x80800D80: nop

;}
RECOMP_FUNC void func_80800D84_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D84: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D88: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D8C: jal         0x800A05DC
    // 0x80800D90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800A05DC(rdram, ctx);
        goto after_0;
    // 0x80800D90: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D94: jal         0x8009EBD0
    // 0x80800D98: nop

    func_8009EBD0(rdram, ctx);
        goto after_1;
    // 0x80800D98: nop

    after_1:
    // 0x80800D9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800DA0: jal         0x80095760
    // 0x80800DA4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80095760(rdram, ctx);
        goto after_2;
    // 0x80800DA4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_2:
    // 0x80800DA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800DAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800DB0: jr          $ra
    // 0x80800DB4: nop

    return;
    // 0x80800DB4: nop

;}
RECOMP_FUNC void func_80800DB8_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800DB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800DBC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800DC0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800DC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800DC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800DCC: beq         $a1, $at, L_80800DF4
    if (ctx->r5 == ctx->r1) {
        // 0x80800DD0: sb          $a1, 0x15C($a0)
        MEM_B(0X15C, ctx->r4) = ctx->r5;
            goto L_80800DF4;
    }
    // 0x80800DD0: sb          $a1, 0x15C($a0)
    MEM_B(0X15C, ctx->r4) = ctx->r5;
    // 0x80800DD4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800DD8: beq         $a1, $at, L_80800E40
    if (ctx->r5 == ctx->r1) {
        // 0x80800DDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E40;
    }
    // 0x80800DDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DE0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800DE4: beq         $a1, $at, L_80800E90
    if (ctx->r5 == ctx->r1) {
        // 0x80800DE8: nop
    
            goto L_80800E90;
    }
    // 0x80800DE8: nop

    // 0x80800DEC: b           L_80800E9C
    // 0x80800DF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800E9C;
    // 0x80800DF0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800DF4:
    // 0x80800DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DF8: addiu       $a1, $zero, 0x1EE
    ctx->r5 = ADD32(0, 0X1EE);
    // 0x80800DFC: jal         0x8008CB3C
    // 0x80800E00: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x80800E00: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_0:
    // 0x80800E04: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800E08: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800E0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800E14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800E18: jal         0x8009FFD8
    // 0x80800E1C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800E1C: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_1:
    // 0x80800E20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E24: jal         0x8009B9B0
    // 0x80800E28: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800E28: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800E2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E30: jal         0x8009BA9C
    // 0x80800E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_3;
    // 0x80800E34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800E38: b           L_80800E98
    // 0x80800E3C: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
        goto L_80800E98;
    // 0x80800E3C: sw          $zero, 0x164($s0)
    MEM_W(0X164, ctx->r16) = 0;
L_80800E40:
    // 0x80800E40: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    // 0x80800E44: jal         0x8008CCBC
    // 0x80800E48: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_4;
    // 0x80800E48: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_4:
    // 0x80800E4C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80800E50: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800E54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800E5C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800E60: jal         0x8009FFD8
    // 0x80800E64: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_5;
    // 0x80800E64: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_5:
    // 0x80800E68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E6C: jal         0x8009B9B0
    // 0x80800E70: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x80800E70: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800E74: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E78: jal         0x8009BA9C
    // 0x80800E7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_7;
    // 0x80800E7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80800E80: jal         0x800FC660
    // 0x80800E84: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_800FC660(rdram, ctx);
        goto after_8;
    // 0x80800E84: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_8:
    // 0x80800E88: b           L_80800E9C
    // 0x80800E8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80800E9C;
    // 0x80800E8C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800E90:
    // 0x80800E90: jal         0x80000D84
    // 0x80800E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800D84_bsstatue(rdram, ctx);
        goto after_9;
    // 0x80800E94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
L_80800E98:
    // 0x80800E98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800E9C:
    // 0x80800E9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800EA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800EA4: jr          $ra
    // 0x80800EA8: nop

    return;
    // 0x80800EA8: nop

;}
RECOMP_FUNC void func_80800EAC_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800EB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800EB4: jal         0x8008E95C
    // 0x80800EB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E95C(rdram, ctx);
        goto after_0;
    // 0x80800EB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800EBC: jal         0x80000130
    // 0x80800EC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800130_bsstatue(rdram, ctx);
        goto after_1;
    // 0x80800EC0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800EC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800ECC: jr          $ra
    // 0x80800ED0: nop

    return;
    // 0x80800ED0: nop

;}
RECOMP_FUNC void func_80800ED4_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800ED4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800ED8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800EDC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800EE0: jal         0x800001FC
    // 0x80800EE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808001FC_bsstatue(rdram, ctx);
        goto after_0;
    // 0x80800EE4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800EE8: jal         0x8008E944
    // 0x80800EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_1;
    // 0x80800EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800EF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EF4: addiu       $a1, $zero, 0x11E8
    ctx->r5 = ADD32(0, 0X11E8);
    // 0x80800EF8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80800EFC: jal         0x800847E0
    // 0x80800F00: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    _badialog_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x80800F00: addiu       $a3, $zero, 0x51
    ctx->r7 = ADD32(0, 0X51);
    after_2:
    // 0x80800F04: beq         $v0, $zero, L_80800F20
    if (ctx->r2 == 0) {
        // 0x80800F08: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800F20;
    }
    // 0x80800F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F10: jal         0x80000DB8
    // 0x80800F14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800DB8_bsstatue(rdram, ctx);
        goto after_3;
    // 0x80800F14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800F18: b           L_80800F2C
    // 0x80800F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800F2C;
    // 0x80800F1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800F20:
    // 0x80800F20: jal         0x80000DB8
    // 0x80800F24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800DB8_bsstatue(rdram, ctx);
        goto after_4;
    // 0x80800F24: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x80800F28: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800F2C:
    // 0x80800F2C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800F30: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800F34: jr          $ra
    // 0x80800F38: nop

    return;
    // 0x80800F38: nop

;}
RECOMP_FUNC void func_80800F3C_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F44: jal         0x8000147C
    // 0x80800F48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8080147C_bsstatue(rdram, ctx);
        goto after_0;
    // 0x80800F48: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800F4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800F50: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800F54: lbu         $v0, 0x15C($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X15C);
    // 0x80800F58: beq         $v0, $at, L_80800F70
    if (ctx->r2 == ctx->r1) {
        // 0x80800F5C: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800F70;
    }
    // 0x80800F5C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800F60: beq         $v0, $at, L_80800F8C
    if (ctx->r2 == ctx->r1) {
        // 0x80800F64: lui         $a1, 0x3F66
        ctx->r5 = S32(0X3F66 << 16);
            goto L_80800F8C;
    }
    // 0x80800F64: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80800F68: b           L_80800FAC
    // 0x80800F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800FAC;
    // 0x80800F6C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800F70:
    // 0x80800F70: lw          $t6, 0x164($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X164);
    // 0x80800F74: beql        $t6, $zero, L_80800FAC
    if (ctx->r14 == 0) {
        // 0x80800F78: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800FAC;
    }
    goto skip_0;
    // 0x80800F78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80800F7C: jal         0x80000DB8
    // 0x80800F80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800DB8_bsstatue(rdram, ctx);
        goto after_1;
    // 0x80800F80: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800F84: b           L_80800FAC
    // 0x80800F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800FAC;
    // 0x80800F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800F8C:
    // 0x80800F8C: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800F90: jal         0x8008CB10
    // 0x80800F94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80800F94: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_2:
    // 0x80800F98: beq         $v0, $zero, L_80800FA8
    if (ctx->r2 == 0) {
        // 0x80800F9C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800FA8;
    }
    // 0x80800F9C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800FA0: jal         0x80000DB8
    // 0x80800FA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800DB8_bsstatue(rdram, ctx);
        goto after_3;
    // 0x80800FA4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
L_80800FA8:
    // 0x80800FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800FAC:
    // 0x80800FAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800FB0: jr          $ra
    // 0x80800FB4: nop

    return;
    // 0x80800FB4: nop

;}
RECOMP_FUNC void bsstatue_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FB8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800FBC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(149, 0X15E0) << 16);
    // 0x80800FC0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800FC4: jr          $ra
    // 0x80800FC8: lw          $v0, 0x15E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X15E0));
    return;
    // 0x80800FC8: lw          $v0, 0x15E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X15E0));
;}
RECOMP_FUNC void func_80800FCC_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FCC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800FD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800FD4: jal         0x80000130
    // 0x80800FD8: nop

    func_80800130_bsstatue(rdram, ctx);
        goto after_0;
    // 0x80800FD8: nop

    after_0:
    // 0x80800FDC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800FE0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800FE4: jr          $ra
    // 0x80800FE8: nop

    return;
    // 0x80800FE8: nop

;}
RECOMP_FUNC void func_80800FEC_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800FF0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800FF4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800FF8: jal         0x800001FC
    // 0x80800FFC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808001FC_bsstatue(rdram, ctx);
        goto after_0;
    // 0x80800FFC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801000: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801004: addiu       $a1, $zero, 0x1F1
    ctx->r5 = ADD32(0, 0X1F1);
    // 0x80801008: jal         0x8008CCBC
    // 0x8080100C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x8080100C: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_1:
    // 0x80801010: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80801014: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801018: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080101C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801020: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80801024: jal         0x8009FFD8
    // 0x80801028: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801028: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    after_2:
    // 0x8080102C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801030: jal         0x8009B9B0
    // 0x80801034: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80801034: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80801038: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080103C: jal         0x8009BA9C
    // 0x80801040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_4;
    // 0x80801040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80801044: jal         0x800FC660
    // 0x80801048: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_800FC660(rdram, ctx);
        goto after_5;
    // 0x80801048: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_5:
    // 0x8080104C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801050: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801054: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801058: jr          $ra
    // 0x8080105C: nop

    return;
    // 0x8080105C: nop

;}
RECOMP_FUNC void func_80801060_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801060: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801064: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801068: jal         0x8000147C
    // 0x8080106C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8080147C_bsstatue(rdram, ctx);
        goto after_0;
    // 0x8080106C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801070: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80801074: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80801078: jal         0x8008CB10
    // 0x8080107C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8008CB10(rdram, ctx);
        goto after_1;
    // 0x8080107C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801080: beql        $v0, $zero, L_80801094
    if (ctx->r2 == 0) {
        // 0x80801084: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80801094;
    }
    goto skip_0;
    // 0x80801084: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80801088: jal         0x80000D84
    // 0x8080108C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800D84_bsstatue(rdram, ctx);
        goto after_2;
    // 0x8080108C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80801090: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801094:
    // 0x80801094: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801098: jr          $ra
    // 0x8080109C: nop

    return;
    // 0x8080109C: nop

;}
RECOMP_FUNC void bsstatue_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010A0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808010A4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(149, 0X15F0) << 16);
    // 0x808010A8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808010AC: jr          $ra
    // 0x808010B0: lw          $v0, 0x15F0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X15F0));
    return;
    // 0x808010B0: lw          $v0, 0x15F0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X15F0));
;}
RECOMP_FUNC void func_808010B4_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808010B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808010BC: jal         0x80000130
    // 0x808010C0: nop

    func_80800130_bsstatue(rdram, ctx);
        goto after_0;
    // 0x808010C0: nop

    after_0:
    // 0x808010C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808010C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808010CC: jr          $ra
    // 0x808010D0: nop

    return;
    // 0x808010D0: nop

;}
RECOMP_FUNC void func_808010D4_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808010D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808010DC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808010E0: jal         0x800001FC
    // 0x808010E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808001FC_bsstatue(rdram, ctx);
        goto after_0;
    // 0x808010E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808010E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010EC: addiu       $a1, $zero, 0x1EE
    ctx->r5 = ADD32(0, 0X1EE);
    // 0x808010F0: jal         0x8008CB3C
    // 0x808010F4: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808010F4: lui         $a2, 0x40D0
    ctx->r6 = S32(0X40D0 << 16);
    after_1:
    // 0x808010F8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808010FC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801108: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8080110C: jal         0x8009FFD8
    // 0x80801110: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801110: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80801114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801118: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x8080111C: jal         0x8009C99C
    // 0x80801120: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80801120: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    after_3:
    // 0x80801124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801128: jal         0x8009B9B0
    // 0x8080112C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x8080112C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80801130: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801134: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801138: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080113C: jr          $ra
    // 0x80801140: nop

    return;
    // 0x80801140: nop

;}
RECOMP_FUNC void func_80801144_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801144: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801148: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080114C: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80801150: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80801154: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801158: jal         0x80000350
    // 0x8080115C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    bsstatue_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x8080115C: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x80801160: jal         0x80097AD0
    // 0x80801164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_1;
    // 0x80801164: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801168: beq         $v0, $zero, L_8080117C
    if (ctx->r2 == 0) {
        // 0x8080116C: nop
    
            goto L_8080117C;
    }
    // 0x8080116C: nop

    // 0x80801170: jal         0x800848A8
    // 0x80801174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_2;
    // 0x80801174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801178: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
L_8080117C:
    // 0x8080117C: jal         0x8009EF10
    // 0x80801180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_3;
    // 0x80801180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801184: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80801188: bne         $v0, $at, L_80801194
    if (ctx->r2 != ctx->r1) {
        // 0x8080118C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801194;
    }
    // 0x8080118C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801190: addiu       $s1, $zero, 0xFA
    ctx->r17 = ADD32(0, 0XFA);
L_80801194:
    // 0x80801194: jal         0x80091A58
    // 0x80801198: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_4;
    // 0x80801198: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x8080119C: beql        $v0, $zero, L_808011C0
    if (ctx->r2 == 0) {
        // 0x808011A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808011C0;
    }
    goto skip_0;
    // 0x808011A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808011A4: jal         0x80000104
    // 0x808011A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800104_bsstatue(rdram, ctx);
        goto after_5;
    // 0x808011A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808011AC: beq         $v0, $zero, L_808011BC
    if (ctx->r2 == 0) {
        // 0x808011B0: addiu       $s1, $zero, 0xFC
        ctx->r17 = ADD32(0, 0XFC);
            goto L_808011BC;
    }
    // 0x808011B0: addiu       $s1, $zero, 0xFC
    ctx->r17 = ADD32(0, 0XFC);
    // 0x808011B4: b           L_808011BC
    // 0x808011B8: addiu       $s1, $zero, 0xF8
    ctx->r17 = ADD32(0, 0XF8);
        goto L_808011BC;
    // 0x808011B8: addiu       $s1, $zero, 0xF8
    ctx->r17 = ADD32(0, 0XF8);
L_808011BC:
    // 0x808011BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808011C0:
    // 0x808011C0: jal         0x80091A58
    // 0x808011C4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_6;
    // 0x808011C4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_6:
    // 0x808011C8: beq         $v0, $zero, L_808011D4
    if (ctx->r2 == 0) {
        // 0x808011CC: nop
    
            goto L_808011D4;
    }
    // 0x808011CC: nop

    // 0x808011D0: addiu       $s1, $zero, 0xFB
    ctx->r17 = ADD32(0, 0XFB);
L_808011D4:
    // 0x808011D4: jal         0x80000078
    // 0x808011D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800078_bsstatue(rdram, ctx);
        goto after_7;
    // 0x808011D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808011DC: beq         $v0, $zero, L_808011E8
    if (ctx->r2 == 0) {
        // 0x808011E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808011E8;
    }
    // 0x808011E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011E4: addiu       $s1, $zero, 0xFD
    ctx->r17 = ADD32(0, 0XFD);
L_808011E8:
    // 0x808011E8: jal         0x8009E5C8
    // 0x808011EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_8;
    // 0x808011EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_8:
    // 0x808011F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808011F4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808011F8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808011FC: jr          $ra
    // 0x80801200: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80801200: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsstatue_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801204: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801208: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(149, 0X1600) << 16);
    // 0x8080120C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801210: jr          $ra
    // 0x80801214: lw          $v0, 0x1600($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X1600));
    return;
    // 0x80801214: lw          $v0, 0x1600($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X1600));
;}
RECOMP_FUNC void func_80801218_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801218: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080121C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801220: jal         0x80000130
    // 0x80801224: nop

    func_80800130_bsstatue(rdram, ctx);
        goto after_0;
    // 0x80801224: nop

    after_0:
    // 0x80801228: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080122C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801230: jr          $ra
    // 0x80801234: nop

    return;
    // 0x80801234: nop

;}
RECOMP_FUNC void func_80801238_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801238: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080123C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801240: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801244: jal         0x800001FC
    // 0x80801248: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808001FC_bsstatue(rdram, ctx);
        goto after_0;
    // 0x80801248: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x8080124C: lui         $a2, 0x3FB0
    ctx->r6 = S32(0X3FB0 << 16);
    // 0x80801250: ori         $a2, $a2, 0xA3D7
    ctx->r6 = ctx->r6 | 0XA3D7;
    // 0x80801254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801258: jal         0x8008CB3C
    // 0x8080125C: addiu       $a1, $zero, 0x1E5
    ctx->r5 = ADD32(0, 0X1E5);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x8080125C: addiu       $a1, $zero, 0x1E5
    ctx->r5 = ADD32(0, 0X1E5);
    after_1:
    // 0x80801260: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80801264: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080126C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80801270: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80801274: jal         0x8009FFD8
    // 0x80801278: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801278: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x8080127C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801280: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x80801284: jal         0x8009C99C
    // 0x80801288: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    func_8009C99C(rdram, ctx);
        goto after_3;
    // 0x80801288: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    after_3:
    // 0x8080128C: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80801290: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80801294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801298: jal         0x8008C9BC
    // 0x8080129C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_4;
    // 0x8080129C: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_4:
    // 0x808012A0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(149, 0X1588) << 16);
    // 0x808012A4: lwc1        $f4, 0x1588($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(149, 0X1588));
    // 0x808012A8: lui         $a2, 0x4422
    ctx->r6 = S32(0X4422 << 16);
    // 0x808012AC: ori         $a2, $a2, 0x8000
    ctx->r6 = ctx->r6 | 0X8000;
    // 0x808012B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012B4: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    // 0x808012B8: lui         $a3, 0x4000
    ctx->r7 = S32(0X4000 << 16);
    // 0x808012BC: jal         0x8008C9F0
    // 0x808012C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_5;
    // 0x808012C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x808012C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808012C8: jal         0x8008CA30
    // 0x808012CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_6;
    // 0x808012CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x808012D0: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x808012D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808012D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808012DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808012E0: jr          $ra
    // 0x808012E4: nop

    return;
    // 0x808012E4: nop

;}
RECOMP_FUNC void func_808012E8_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012E8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808012EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808012F0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808012F4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808012F8: jal         0x80000350
    // 0x808012FC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    bsstatue_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x808012FC: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80801300: lui         $a1, 0x3EFB
    ctx->r5 = S32(0X3EFB << 16);
    // 0x80801304: ori         $a1, $a1, 0xC01A
    ctx->r5 = ctx->r5 | 0XC01A;
    // 0x80801308: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080130C: jal         0x800A2D2C
    // 0x80801310: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2D2C(rdram, ctx);
        goto after_1;
    // 0x80801310: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
    // 0x80801314: lui         $a1, 0x3F7D
    ctx->r5 = S32(0X3F7D << 16);
    // 0x80801318: ori         $a1, $a1, 0xE00D
    ctx->r5 = ctx->r5 | 0XE00D;
    // 0x8080131C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801320: jal         0x800A2D2C
    // 0x80801324: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2D2C(rdram, ctx);
        goto after_2;
    // 0x80801324: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80801328: lui         $a1, 0x3EFB
    ctx->r5 = S32(0X3EFB << 16);
    // 0x8080132C: ori         $a1, $a1, 0xC01A
    ctx->r5 = ctx->r5 | 0XC01A;
    // 0x80801330: jal         0x8008CB10
    // 0x80801334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_3;
    // 0x80801334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801338: bne         $v0, $zero, L_80801354
    if (ctx->r2 != 0) {
        // 0x8080133C: lui         $a1, 0x3F7D
        ctx->r5 = S32(0X3F7D << 16);
            goto L_80801354;
    }
    // 0x8080133C: lui         $a1, 0x3F7D
    ctx->r5 = S32(0X3F7D << 16);
    // 0x80801340: ori         $a1, $a1, 0xE00D
    ctx->r5 = ctx->r5 | 0XE00D;
    // 0x80801344: jal         0x8008CB10
    // 0x80801348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x80801348: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080134C: beq         $v0, $zero, L_808013BC
    if (ctx->r2 == 0) {
        // 0x80801350: nop
    
            goto L_808013BC;
    }
    // 0x80801350: nop

L_80801354:
    // 0x80801354: lw          $t6, 0x160($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X160);
    // 0x80801358: bnel        $t6, $zero, L_808013BC
    if (ctx->r14 != 0) {
        // 0x8080135C: sw          $zero, 0x160($s0)
        MEM_W(0X160, ctx->r16) = 0;
            goto L_808013BC;
    }
    goto skip_0;
    // 0x8080135C: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    skip_0:
    // 0x80801360: jal         0x800DC0C0
    // 0x80801364: nop

    func_800DC0C0(rdram, ctx);
        goto after_5;
    // 0x80801364: nop

    after_5:
    // 0x80801368: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(149, 0X158C) << 16);
    // 0x8080136C: lwc1        $f4, 0x158C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(149, 0X158C));
    // 0x80801370: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80801374: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(149, 0X1590) << 16);
    // 0x80801378: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x8080137C: nop

    // 0x80801380: bc1fl       L_808013BC
    if (!c1cs) {
        // 0x80801384: sw          $zero, 0x160($s0)
        MEM_W(0X160, ctx->r16) = 0;
            goto L_808013BC;
    }
    goto skip_1;
    // 0x80801384: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    skip_1:
    // 0x80801388: sw          $t7, 0x160($s0)
    MEM_W(0X160, ctx->r16) = ctx->r15;
    // 0x8080138C: lwc1        $f12, 0x1590($at)
    ctx->f12.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(149, 0X1590));
    // 0x80801390: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(149, 0X1594) << 16);
    // 0x80801394: jal         0x800DC178
    // 0x80801398: lwc1        $f14, 0x1594($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(149, 0X1594));
    func_800DC178(rdram, ctx);
        goto after_6;
    // 0x80801398: lwc1        $f14, 0x1594($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(149, 0X1594));
    after_6:
    // 0x8080139C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808013A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013A4: addiu       $a1, $zero, 0x4A1
    ctx->r5 = ADD32(0, 0X4A1);
    // 0x808013A8: jal         0x8009DB04
    // 0x808013AC: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    func_8009DB04(rdram, ctx);
        goto after_7;
    // 0x808013AC: addiu       $a3, $zero, 0x1388
    ctx->r7 = ADD32(0, 0X1388);
    after_7:
    // 0x808013B0: b           L_808013BC
    // 0x808013B4: nop

        goto L_808013BC;
    // 0x808013B4: nop

    // 0x808013B8: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
L_808013BC:
    // 0x808013BC: jal         0x80000BEC
    // 0x808013C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800BEC_bsstatue(rdram, ctx);
        goto after_8;
    // 0x808013C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808013C4: jal         0x8009EF10
    // 0x808013C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_9;
    // 0x808013C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808013CC: bne         $v0, $zero, L_808013E8
    if (ctx->r2 != 0) {
        // 0x808013D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808013E8;
    }
    // 0x808013D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013D4: jal         0x8009BCD4
    // 0x808013D8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_10;
    // 0x808013D8: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_10:
    // 0x808013DC: beq         $v0, $zero, L_808013E8
    if (ctx->r2 == 0) {
        // 0x808013E0: addiu       $t8, $zero, 0xF9
        ctx->r24 = ADD32(0, 0XF9);
            goto L_808013E8;
    }
    // 0x808013E0: addiu       $t8, $zero, 0xF9
    ctx->r24 = ADD32(0, 0XF9);
    // 0x808013E4: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_808013E8:
    // 0x808013E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013EC: jal         0x80091A58
    // 0x808013F0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_11;
    // 0x808013F0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_11:
    // 0x808013F4: beql        $v0, $zero, L_80801420
    if (ctx->r2 == 0) {
        // 0x808013F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801420;
    }
    goto skip_2;
    // 0x808013F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x808013FC: jal         0x80000104
    // 0x80801400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800104_bsstatue(rdram, ctx);
        goto after_12;
    // 0x80801400: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80801404: beq         $v0, $zero, L_80801418
    if (ctx->r2 == 0) {
        // 0x80801408: addiu       $t0, $zero, 0xFC
        ctx->r8 = ADD32(0, 0XFC);
            goto L_80801418;
    }
    // 0x80801408: addiu       $t0, $zero, 0xFC
    ctx->r8 = ADD32(0, 0XFC);
    // 0x8080140C: addiu       $t9, $zero, 0xF8
    ctx->r25 = ADD32(0, 0XF8);
    // 0x80801410: b           L_8080141C
    // 0x80801414: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
        goto L_8080141C;
    // 0x80801414: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80801418:
    // 0x80801418: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8080141C:
    // 0x8080141C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801420:
    // 0x80801420: jal         0x80091A58
    // 0x80801424: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_13;
    // 0x80801424: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_13:
    // 0x80801428: beq         $v0, $zero, L_80801434
    if (ctx->r2 == 0) {
        // 0x8080142C: addiu       $t1, $zero, 0xFB
        ctx->r9 = ADD32(0, 0XFB);
            goto L_80801434;
    }
    // 0x8080142C: addiu       $t1, $zero, 0xFB
    ctx->r9 = ADD32(0, 0XFB);
    // 0x80801430: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
L_80801434:
    // 0x80801434: jal         0x80000078
    // 0x80801438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800078_bsstatue(rdram, ctx);
        goto after_14;
    // 0x80801438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x8080143C: beq         $v0, $zero, L_8080144C
    if (ctx->r2 == 0) {
        // 0x80801440: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080144C;
    }
    // 0x80801440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801444: addiu       $t2, $zero, 0xFD
    ctx->r10 = ADD32(0, 0XFD);
    // 0x80801448: sw          $t2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r10;
L_8080144C:
    // 0x8080144C: jal         0x8009E5C8
    // 0x80801450: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_15;
    // 0x80801450: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x80801454: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801458: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080145C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801460: jr          $ra
    // 0x80801464: nop

    return;
    // 0x80801464: nop

;}
RECOMP_FUNC void bsstatue_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801468: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080146C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(149, 0X1610) << 16);
    // 0x80801470: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801474: jr          $ra
    // 0x80801478: lw          $v0, 0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X1610));
    return;
    // 0x80801478: lw          $v0, 0x1610($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(149, 0X1610));
;}
RECOMP_FUNC void func_8080147C_bsstatue(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080147C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801480: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801484: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801488: lui         $a1, 0x3E23
    ctx->r5 = S32(0X3E23 << 16);
    // 0x8080148C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801490: jal         0x8008CB10
    // 0x80801494: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    func_8008CB10(rdram, ctx);
        goto after_0;
    // 0x80801494: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    after_0:
    // 0x80801498: beq         $v0, $zero, L_808014B4
    if (ctx->r2 == 0) {
        // 0x8080149C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808014B4;
    }
    // 0x8080149C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014A0: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808014A4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808014A8: addiu       $a1, $zero, 0x632
    ctx->r5 = ADD32(0, 0X632);
    // 0x808014AC: jal         0x8009DB04
    // 0x808014B0: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    func_8009DB04(rdram, ctx);
        goto after_1;
    // 0x808014B0: addiu       $a3, $zero, 0x2EE0
    ctx->r7 = ADD32(0, 0X2EE0);
    after_1:
L_808014B4:
    // 0x808014B4: lui         $a1, 0x3EC7
    ctx->r5 = S32(0X3EC7 << 16);
    // 0x808014B8: ori         $a1, $a1, 0xAE14
    ctx->r5 = ctx->r5 | 0XAE14;
    // 0x808014BC: jal         0x8008CB10
    // 0x808014C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x808014C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808014C4: beq         $v0, $zero, L_808014E0
    if (ctx->r2 == 0) {
        // 0x808014C8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808014E0;
    }
    // 0x808014C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014CC: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x808014D0: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808014D4: addiu       $a1, $zero, 0x632
    ctx->r5 = ADD32(0, 0X632);
    // 0x808014D8: jal         0x8009DB04
    // 0x808014DC: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    func_8009DB04(rdram, ctx);
        goto after_3;
    // 0x808014DC: addiu       $a3, $zero, 0x3E80
    ctx->r7 = ADD32(0, 0X3E80);
    after_3:
L_808014E0:
    // 0x808014E0: lui         $a1, 0x3F3D
    ctx->r5 = S32(0X3F3D << 16);
    // 0x808014E4: ori         $a1, $a1, 0x70A4
    ctx->r5 = ctx->r5 | 0X70A4;
    // 0x808014E8: jal         0x8008CB10
    // 0x808014EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x808014EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808014F0: beq         $v0, $zero, L_8080150C
    if (ctx->r2 == 0) {
        // 0x808014F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080150C;
    }
    // 0x808014F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014F8: lui         $a2, 0x3F19
    ctx->r6 = S32(0X3F19 << 16);
    // 0x808014FC: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80801500: addiu       $a1, $zero, 0x632
    ctx->r5 = ADD32(0, 0X632);
    // 0x80801504: jal         0x8009DB04
    // 0x80801508: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    func_8009DB04(rdram, ctx);
        goto after_5;
    // 0x80801508: addiu       $a3, $zero, 0x4E20
    ctx->r7 = ADD32(0, 0X4E20);
    after_5:
L_8080150C:
    // 0x8080150C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801510: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801514: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801518: jr          $ra
    // 0x8080151C: nop

    return;
    // 0x8080151C: nop

;}
RECOMP_FUNC void func_80800000_bsstonehead(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800010: jal         0x8009E74C
    // 0x80800014: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x80800014: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80800018: bne         $v0, $zero, L_8080004C
    if (ctx->r2 != 0) {
        // 0x8080001C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080004C;
    }
    // 0x8080001C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800020: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800024: jal         0x800947EC
    // 0x80800028: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_1;
    // 0x80800028: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8080002C: jal         0x80095A40
    // 0x80800030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_2;
    // 0x80800030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800034: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800038: jal         0x80092864
    // 0x8080003C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80092864(rdram, ctx);
        goto after_3;
    // 0x8080003C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x80800040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800044: jal         0x80095A74
    // 0x80800048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80095A74(rdram, ctx);
        goto after_4;
    // 0x80800048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_8080004C:
    // 0x8080004C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800050: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800054: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800058: jr          $ra
    // 0x8080005C: nop

    return;
    // 0x8080005C: nop

;}
RECOMP_FUNC void func_80800060_bsstonehead(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800060: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800064: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800068: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080006C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800070: jal         0x8009E77C
    // 0x80800074: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x80800074: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_0:
    // 0x80800078: bne         $v0, $zero, L_808000B8
    if (ctx->r2 != 0) {
        // 0x8080007C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000B8;
    }
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800080: lui         $a1, 0x4282
    ctx->r5 = S32(0X4282 << 16);
    // 0x80800084: jal         0x800959C8
    // 0x80800088: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    func_800959C8(rdram, ctx);
        goto after_1;
    // 0x80800088: lui         $a2, 0x420C
    ctx->r6 = S32(0X420C << 16);
    after_1:
    // 0x8080008C: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80800090: ori         $a1, $a1, 0x6600
    ctx->r5 = ctx->r5 | 0X6600;
    // 0x80800094: jal         0x80092864
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80092864(rdram, ctx);
        goto after_2;
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080009C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808000A4: jal         0x800947EC
    // 0x808000A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_3;
    // 0x808000A8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x808000AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B0: jal         0x80095A74
    // 0x808000B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80095A74(rdram, ctx);
        goto after_4;
    // 0x808000B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_808000B8:
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
RECOMP_FUNC void func_808000CC_bsstonehead(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000D0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000D4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000D8: jal         0x8009EF1C
    // 0x808000DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x808000DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000E0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x808000E4: jal         0x80084440
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _baattach_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808000EC: beq         $v0, $zero, L_80800100
    if (ctx->r2 == 0) {
        // 0x808000F0: lui         $at, 0x437A
        ctx->r1 = S32(0X437A << 16);
            goto L_80800100;
    }
    // 0x808000F0: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x808000F4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x808000F8: b           L_8080013C
    // 0x808000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080013C;
    // 0x808000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800100:
    // 0x80800100: jal         0x8008DE24
    // 0x80800104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DE24(rdram, ctx);
        goto after_2;
    // 0x80800104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800108: beql        $v0, $zero, L_80800130
    if (ctx->r2 == 0) {
        // 0x8080010C: lui         $at, 0x43C8
        ctx->r1 = S32(0X43C8 << 16);
            goto L_80800130;
    }
    goto skip_0;
    // 0x8080010C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    skip_0:
    // 0x80800110: jal         0x8008E078
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_3;
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800118: beq         $v0, $zero, L_8080012C
    if (ctx->r2 == 0) {
        // 0x8080011C: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_8080012C;
    }
    // 0x8080011C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80800120: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800124: b           L_8080013C
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080013C;
    // 0x80800128: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080012C:
    // 0x8080012C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
L_80800130:
    // 0x80800130: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800134: nop

    // 0x80800138: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080013C:
    // 0x8080013C: jal         0x8009EF10
    // 0x80800140: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    func_8009EF10(rdram, ctx);
        goto after_4;
    // 0x80800140: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x80800144: bne         $v0, $zero, L_80800160
    if (ctx->r2 != 0) {
        // 0x80800148: lwc1        $f0, 0x20($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
            goto L_80800160;
    }
    // 0x80800148: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8080014C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800150: jal         0x8009B9B0
    // 0x80800154: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_5;
    // 0x80800154: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800158: b           L_80800184
    // 0x8080015C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800184;
    // 0x8080015C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800160:
    // 0x80800160: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80800164: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800168: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080016C: jal         0x800F1214
    // 0x80800170: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    func_800F1214(rdram, ctx);
        goto after_6;
    // 0x80800170: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x80800174: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800178: jal         0x8009B9B0
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9B0(rdram, ctx);
        goto after_7;
    // 0x8080017C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800180: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800184:
    // 0x80800184: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800188: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080018C: jr          $ra
    // 0x80800190: nop

    return;
    // 0x80800190: nop

;}
RECOMP_FUNC void func_80800194_bsstonehead(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800194: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800198: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080019C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808001A0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001A4: jal         0x8008CABC
    // 0x808001A8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808001A8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_0:
    // 0x808001AC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x808001B0: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    // 0x808001B4: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x808001B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001BC: bne         $t6, $zero, L_808001D0
    if (ctx->r14 != 0) {
        // 0x808001C0: nop
    
            goto L_808001D0;
    }
    // 0x808001C0: nop

    // 0x808001C4: jal         0x80000060
    // 0x808001C8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    func_80800060_bsstonehead(rdram, ctx);
        goto after_1;
    // 0x808001C8: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    after_1:
    // 0x808001CC: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
L_808001D0:
    // 0x808001D0: beq         $a1, $zero, L_80800384
    if (ctx->r5 == 0) {
        // 0x808001D4: sw          $a1, 0x15C($s0)
        MEM_W(0X15C, ctx->r16) = ctx->r5;
            goto L_80800384;
    }
    // 0x808001D4: sw          $a1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r5;
    // 0x808001D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001DC: beq         $a1, $at, L_80800200
    if (ctx->r5 == ctx->r1) {
        // 0x808001E0: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800200;
    }
    // 0x808001E0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808001E4: beq         $a1, $at, L_80800330
    if (ctx->r5 == ctx->r1) {
        // 0x808001E8: lw          $a0, 0x34($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X34);
            goto L_80800330;
    }
    // 0x808001E8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808001EC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808001F0: beq         $a1, $at, L_80800350
    if (ctx->r5 == ctx->r1) {
        // 0x808001F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800350;
    }
    // 0x808001F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001F8: b           L_808003A8
    // 0x808001FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808003A8;
    // 0x808001FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800200:
    // 0x80800200: jal         0x8008DE24
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DE24(rdram, ctx);
        goto after_2;
    // 0x80800204: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800208: beql        $v0, $zero, L_80800230
    if (ctx->r2 == 0) {
        // 0x8080020C: lui         $at, 0x4416
        ctx->r1 = S32(0X4416 << 16);
            goto L_80800230;
    }
    goto skip_0;
    // 0x8080020C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    skip_0:
    // 0x80800210: jal         0x8008E078
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_3;
    // 0x80800214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800218: beq         $v0, $zero, L_8080022C
    if (ctx->r2 == 0) {
        // 0x8080021C: lui         $at, 0x4316
        ctx->r1 = S32(0X4316 << 16);
            goto L_8080022C;
    }
    // 0x8080021C: lui         $at, 0x4316
    ctx->r1 = S32(0X4316 << 16);
    // 0x80800220: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800224: b           L_8080023C
    // 0x80800228: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
        goto L_8080023C;
    // 0x80800228: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
L_8080022C:
    // 0x8080022C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
L_80800230:
    // 0x80800230: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800234: nop

    // 0x80800238: swc1        $f6, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f6.u32l;
L_8080023C:
    // 0x8080023C: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x80800240: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800248: addiu       $a1, $zero, 0x5A7
    ctx->r5 = ADD32(0, 0X5A7);
    // 0x8080024C: jal         0x8009DF94
    // 0x80800250: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    func_8009DF94(rdram, ctx);
        goto after_4;
    // 0x80800250: addiu       $a3, $zero, 0x55F0
    ctx->r7 = ADD32(0, 0X55F0);
    after_4:
    // 0x80800254: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800258: jal         0x80095760
    // 0x8080025C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80095760(rdram, ctx);
        goto after_5;
    // 0x8080025C: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_5:
    // 0x80800260: lui         $a2, 0x3C23
    ctx->r6 = S32(0X3C23 << 16);
    // 0x80800264: ori         $a2, $a2, 0xD70A
    ctx->r6 = ctx->r6 | 0XD70A;
    // 0x80800268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080026C: jal         0x80085338
    // 0x80800270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_6;
    // 0x80800270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80800274: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80800278: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800280: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800284: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800288: jal         0x8009FFD8
    // 0x8080028C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_7;
    // 0x8080028C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_7:
    // 0x80800290: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800294: jal         0x80084A28
    // 0x80800298: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _badust_entrypoint_12(rdram, ctx);
        goto after_8;
    // 0x80800298: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x8080029C: jal         0x8009C990
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_9;
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808002A4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808002A8: jal         0x8009B9C0
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_10;
    // 0x808002AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808002B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B4: jal         0x8009B9B0
    // 0x808002B8: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_11;
    // 0x808002B8: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_11:
    // 0x808002BC: jal         0x8009C990
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_12;
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808002C4: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x808002C8: jal         0x8009BB00
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_13;
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808002D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808002D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D8: jal         0x8009BA68
    // 0x808002DC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8009BA68(rdram, ctx);
        goto after_14;
    // 0x808002DC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_14:
    // 0x808002E0: jal         0x8008AF24
    // 0x808002E4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008AF24(rdram, ctx);
        goto after_15;
    // 0x808002E4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_15:
    // 0x808002E8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808002EC: jal         0x8008AED4
    // 0x808002F0: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    func_8008AED4(rdram, ctx);
        goto after_16;
    // 0x808002F0: addiu       $a1, $zero, 0x64
    ctx->r5 = ADD32(0, 0X64);
    after_16:
    // 0x808002F4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x808002F8: jal         0x8008B1BC
    // 0x808002FC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_17;
    // 0x808002FC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_17:
    // 0x80800300: lui         $a2, 0x3E85
    ctx->r6 = S32(0X3E85 << 16);
    // 0x80800304: ori         $a2, $a2, 0x1EB8
    ctx->r6 = ctx->r6 | 0X1EB8;
    // 0x80800308: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8080030C: jal         0x8008B1D4
    // 0x80800310: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_18;
    // 0x80800310: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_18:
    // 0x80800314: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800318: jal         0x8008B134
    // 0x8080031C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_19;
    // 0x8080031C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x80800320: jal         0x8008B064
    // 0x80800324: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_20;
    // 0x80800324: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_20:
    // 0x80800328: b           L_808003A8
    // 0x8080032C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808003A8;
    // 0x8080032C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800330:
    // 0x80800330: jal         0x8008B1BC
    // 0x80800334: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_21;
    // 0x80800334: lui         $a1, 0x40A0
    ctx->r5 = S32(0X40A0 << 16);
    after_21:
    // 0x80800338: lui         $a1, 0x3E9D
    ctx->r5 = S32(0X3E9D << 16);
    // 0x8080033C: ori         $a1, $a1, 0x97F6
    ctx->r5 = ctx->r5 | 0X97F6;
    // 0x80800340: jal         0x8008CED4
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CED4(rdram, ctx);
        goto after_22;
    // 0x80800344: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800348: b           L_808003A8
    // 0x8080034C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808003A8;
    // 0x8080034C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800350:
    // 0x80800350: jal         0x80084A28
    // 0x80800354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _badust_entrypoint_12(rdram, ctx);
        goto after_23;
    // 0x80800354: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_23:
    // 0x80800358: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080035C: jal         0x80095774
    // 0x80800360: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80095774(rdram, ctx);
        goto after_24;
    // 0x80800360: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_24:
    // 0x80800364: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800368: jal         0x8008B1BC
    // 0x8080036C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_25;
    // 0x8080036C: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_25:
    // 0x80800370: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800374: jal         0x8008CED4
    // 0x80800378: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CED4(rdram, ctx);
        goto after_26;
    // 0x80800378: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_26:
    // 0x8080037C: b           L_808003A8
    // 0x80800380: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_808003A8;
    // 0x80800380: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80800384:
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800388: jal         0x80084A28
    // 0x8080038C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _badust_entrypoint_12(rdram, ctx);
        goto after_27;
    // 0x8080038C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_27:
    // 0x80800390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800394: jal         0x80095774
    // 0x80800398: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80095774(rdram, ctx);
        goto after_28;
    // 0x80800398: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_28:
    // 0x8080039C: jal         0x80000000
    // 0x808003A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsstonehead(rdram, ctx);
        goto after_29;
    // 0x808003A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_29:
    // 0x808003A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808003A8:
    // 0x808003A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808003AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808003B0: jr          $ra
    // 0x808003B4: nop

    return;
    // 0x808003B4: nop

;}
RECOMP_FUNC void func_808003B8_bsstonehead(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003C0: jal         0x80091A58
    // 0x808003C4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x808003C4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x808003C8: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x808003CC: beq         $t6, $zero, L_808003E4
    if (ctx->r14 == 0) {
        // 0x808003D0: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_808003E4;
    }
    // 0x808003D0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x808003D4: jal         0x800DA298
    // 0x808003D8: addiu       $a0, $zero, 0x65A
    ctx->r4 = ADD32(0, 0X65A);
    func_800DA298(rdram, ctx);
        goto after_1;
    // 0x808003D8: addiu       $a0, $zero, 0x65A
    ctx->r4 = ADD32(0, 0X65A);
    after_1:
    // 0x808003DC: sltiu       $t7, $v0, 0x1
    ctx->r15 = ctx->r2 < 0X1 ? 1 : 0;
    // 0x808003E0: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_808003E4:
    // 0x808003E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808003E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808003EC: jr          $ra
    // 0x808003F0: nop

    return;
    // 0x808003F0: nop

;}
RECOMP_FUNC void func_808003F4_bsstonehead(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808003F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808003F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808003FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800400: jal         0x80097AD0
    // 0x80800404: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80097AD0(rdram, ctx);
        goto after_0;
    // 0x80800404: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80800408: beq         $v0, $zero, L_8080041C
    if (ctx->r2 == 0) {
        // 0x8080040C: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_8080041C;
    }
    // 0x8080040C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800410: jal         0x800848A8
    // 0x80800414: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _badrone_entrypoint_24(rdram, ctx);
        goto after_1;
    // 0x80800414: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800418: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_8080041C:
    // 0x8080041C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800420: jal         0x8009EF10
    // 0x80800424: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_8009EF10(rdram, ctx);
        goto after_2;
    // 0x80800424: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x80800428: blez        $v0, L_80800434
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8080042C: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800434;
    }
    // 0x8080042C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800430: addiu       $v1, $zero, 0xB2
    ctx->r3 = ADD32(0, 0XB2);
L_80800434:
    // 0x80800434: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800438: jal         0x800003B8
    // 0x8080043C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_808003B8_bsstonehead(rdram, ctx);
        goto after_3;
    // 0x8080043C: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_3:
    // 0x80800440: beq         $v0, $zero, L_8080044C
    if (ctx->r2 == 0) {
        // 0x80800444: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_8080044C;
    }
    // 0x80800444: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800448: addiu       $v1, $zero, 0xAE
    ctx->r3 = ADD32(0, 0XAE);
L_8080044C:
    // 0x8080044C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800454: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800458: jr          $ra
    // 0x8080045C: nop

    return;
    // 0x8080045C: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800460: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800464: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800468: jal         0x80000194
    // 0x8080046C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800194_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x8080046C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800474: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800478: jr          $ra
    // 0x8080047C: nop

    return;
    // 0x8080047C: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800480: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800484: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800488: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    // 0x8080048C: jal         0x80000194
    // 0x80800490: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800194_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x80800490: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800494: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800498: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080049C: jr          $ra
    // 0x808004A0: nop

    return;
    // 0x808004A0: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004A4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808004A8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808004AC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808004B0: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x808004B4: lw          $v0, 0x15C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X15C);
    // 0x808004B8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808004BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808004C0: beq         $v0, $at, L_808004E4
    if (ctx->r2 == ctx->r1) {
        // 0x808004C4: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_808004E4;
    }
    // 0x808004C4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808004C8: beq         $v0, $at, L_80800504
    if (ctx->r2 == ctx->r1) {
        // 0x808004CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800504;
    }
    // 0x808004CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004D0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808004D4: beq         $v0, $at, L_8080056C
    if (ctx->r2 == ctx->r1) {
        // 0x808004D8: addiu       $a0, $s0, 0x16C
        ctx->r4 = ADD32(ctx->r16, 0X16C);
            goto L_8080056C;
    }
    // 0x808004D8: addiu       $a0, $s0, 0x16C
    ctx->r4 = ADD32(ctx->r16, 0X16C);
    // 0x808004DC: b           L_808005C0
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808005C0;
    // 0x808004E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808004E4:
    // 0x808004E4: jal         0x8008CAEC
    // 0x808004E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_0;
    // 0x808004E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x808004EC: beq         $v0, $zero, L_808005BC
    if (ctx->r2 == 0) {
        // 0x808004F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005BC;
    }
    // 0x808004F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808004F4: jal         0x80000194
    // 0x808004F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800194_bsstonehead(rdram, ctx);
        goto after_1;
    // 0x808004F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x808004FC: b           L_808005C0
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808005C0;
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800504:
    // 0x80800504: jal         0x800852F0
    // 0x80800508: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_2;
    // 0x80800508: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8080050C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800510: jal         0x80085330
    // 0x80800514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_isZero(rdram, ctx);
        goto after_3;
    // 0x80800514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800518: beq         $v0, $zero, L_808005BC
    if (ctx->r2 == 0) {
        // 0x8080051C: lui         $at, 0x42A0
        ctx->r1 = S32(0X42A0 << 16);
            goto L_808005BC;
    }
    // 0x8080051C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80800520: lwc1        $f4, 0x16C($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800524: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800528: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080052C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80800530: swc1        $f8, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f8.u32l;
    // 0x80800534: jal         0x8009B9B0
    // 0x80800538: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x80800538: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_4:
    // 0x8080053C: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80800540: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800544: lwc1        $f10, 0x16C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800548: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080054C: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80800550: nop

    // 0x80800554: bc1fl       L_808005C0
    if (!c1cs) {
        // 0x80800558: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005C0;
    }
    goto skip_0;
    // 0x80800558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080055C: jal         0x80000194
    // 0x80800560: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800194_bsstonehead(rdram, ctx);
        goto after_5;
    // 0x80800560: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80800564: b           L_808005C0
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808005C0;
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080056C:
    // 0x8080056C: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x80800570: jal         0x800F1574
    // 0x80800574: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    func_800F1574(rdram, ctx);
        goto after_6;
    // 0x80800574: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    after_6:
    // 0x80800578: jal         0x8008CAEC
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_7;
    // 0x8080057C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800580: beq         $v0, $zero, L_8080058C
    if (ctx->r2 == 0) {
        // 0x80800584: addiu       $t6, $zero, 0xB3
        ctx->r14 = ADD32(0, 0XB3);
            goto L_8080058C;
    }
    // 0x80800584: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x80800588: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_8080058C:
    // 0x8080058C: jal         0x8008CAC8
    // 0x80800590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_8;
    // 0x80800590: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800594: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(150, 0X1610) << 16);
    // 0x80800598: lwc1        $f18, 0x1610($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(150, 0X1610));
    // 0x8080059C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A0: c.lt.s      $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f18.fl < ctx->f0.fl;
    // 0x808005A4: nop

    // 0x808005A8: bc1fl       L_808005C0
    if (!c1cs) {
        // 0x808005AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005C0;
    }
    goto skip_1;
    // 0x808005AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808005B0: jal         0x800003F4
    // 0x808005B4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_808003F4_bsstonehead(rdram, ctx);
        goto after_9;
    // 0x808005B4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x808005B8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_808005BC:
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808005C0:
    // 0x808005C0: jal         0x8009E5C8
    // 0x808005C4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x808005C4: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_10:
    // 0x808005C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808005CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808005D0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808005D4: jr          $ra
    // 0x808005D8: nop

    return;
    // 0x808005D8: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005DC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808005E0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(150, 0X1630) << 16);
    // 0x808005E4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808005E8: jr          $ra
    // 0x808005EC: lw          $v0, 0x1630($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1630));
    return;
    // 0x808005EC: lw          $v0, 0x1630($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1630));
;}
RECOMP_FUNC void func_808005F0_bsstonehead(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808005F4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808005F8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808005FC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800600: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800604: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80800608: beq         $a1, $at, L_80800630
    if (ctx->r5 == ctx->r1) {
        // 0x8080060C: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80800630;
    }
    // 0x8080060C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800610: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800614: beq         $a1, $at, L_808006C8
    if (ctx->r5 == ctx->r1) {
        // 0x80800618: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_808006C8;
    }
    // 0x80800618: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080061C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800620: beql        $a1, $at, L_80800704
    if (ctx->r5 == ctx->r1) {
        // 0x80800624: lw          $t7, 0x24($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X24);
            goto L_80800704;
    }
    goto skip_0;
    // 0x80800624: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800628: b           L_80800704
    // 0x8080062C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
        goto L_80800704;
    // 0x8080062C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80800630:
    // 0x80800630: jal         0x8008CABC
    // 0x80800634: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800634: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80800638: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x8080063C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80800640: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800644: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800648: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080064C: lui         $a2, 0x43D2
    ctx->r6 = S32(0X43D2 << 16);
    // 0x80800650: lui         $a3, 0xC496
    ctx->r7 = S32(0XC496 << 16);
    // 0x80800654: jal         0x80085210
    // 0x80800658: swc1        $f0, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f0.u32l;
    _basudie_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80800658: swc1        $f0, 0x16C($s1)
    MEM_W(0X16C, ctx->r17) = ctx->f0.u32l;
    after_1:
    // 0x8080065C: jal         0x8008AF24
    // 0x80800660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x80800660: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800668: jal         0x8008B1A0
    // 0x8080066C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_3;
    // 0x8080066C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800670: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800674: jal         0x8008AED4
    // 0x80800678: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_8008AED4(rdram, ctx);
        goto after_4;
    // 0x80800678: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_4:
    // 0x8080067C: lui         $a2, 0x3EEB
    ctx->r6 = S32(0X3EEB << 16);
    // 0x80800680: ori         $a2, $a2, 0x851F
    ctx->r6 = ctx->r6 | 0X851F;
    // 0x80800684: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800688: jal         0x8008B1D4
    // 0x8080068C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_5;
    // 0x8080068C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800690: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800694: jal         0x8008B1BC
    // 0x80800698: lui         $a1, 0x4020
    ctx->r5 = S32(0X4020 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x80800698: lui         $a1, 0x4020
    ctx->r5 = S32(0X4020 << 16);
    after_6:
    // 0x8080069C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808006A0: jal         0x8008B134
    // 0x808006A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x808006A4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x808006A8: jal         0x8008B064
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808006B0: lui         $a1, 0x3FE6
    ctx->r5 = S32(0X3FE6 << 16);
    // 0x808006B4: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x808006B8: jal         0x8009D820
    // 0x808006BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009D820(rdram, ctx);
        goto after_9;
    // 0x808006BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_9:
    // 0x808006C0: b           L_80800704
    // 0x808006C4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
        goto L_80800704;
    // 0x808006C4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_808006C8:
    // 0x808006C8: jal         0x8008CED4
    // 0x808006CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CED4(rdram, ctx);
        goto after_10;
    // 0x808006CC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_10:
    // 0x808006D0: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x808006D4: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808006D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808006DC: addiu       $a1, $zero, 0x417
    ctx->r5 = ADD32(0, 0X417);
    // 0x808006E0: jal         0x8009DF94
    // 0x808006E4: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF94(rdram, ctx);
        goto after_11;
    // 0x808006E4: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_11:
    // 0x808006E8: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x808006EC: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808006F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808006F4: addiu       $a1, $zero, 0x428
    ctx->r5 = ADD32(0, 0X428);
    // 0x808006F8: jal         0x8009DF18
    // 0x808006FC: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_12;
    // 0x808006FC: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_12:
    // 0x80800700: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
L_80800704:
    // 0x80800704: sw          $t7, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = ctx->r15;
    // 0x80800708: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080070C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800710: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80800714: jr          $ra
    // 0x80800718: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80800718: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsstonehead_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080071C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800720: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800724: jal         0x80000060
    // 0x80800728: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800060_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x80800728: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080072C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800730: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800734: jal         0x800005F0
    // 0x80800738: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_808005F0_bsstonehead(rdram, ctx);
        goto after_1;
    // 0x80800738: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    after_1:
    // 0x8080073C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800740: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800744: jr          $ra
    // 0x80800748: nop

    return;
    // 0x80800748: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080074C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800750: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800754: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800758: jal         0x80085228
    // 0x8080075C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    _basudie_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x8080075C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800764: jal         0x8009B9B0
    // 0x80800768: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    func_8009B9B0(rdram, ctx);
        goto after_1;
    // 0x80800768: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_1:
    // 0x8080076C: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80800770: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800774: beq         $v0, $at, L_80800798
    if (ctx->r2 == ctx->r1) {
        // 0x80800778: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800798;
    }
    // 0x80800778: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080077C: beq         $v0, $at, L_808007B8
    if (ctx->r2 == ctx->r1) {
        // 0x80800780: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007B8;
    }
    // 0x80800780: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800784: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800788: beql        $v0, $at, L_808007CC
    if (ctx->r2 == ctx->r1) {
        // 0x8080078C: mtc1        $zero, $f12
        ctx->f12.u32l = 0;
            goto L_808007CC;
    }
    goto skip_0;
    // 0x8080078C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    skip_0:
    // 0x80800790: b           L_808007F8
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808007F8;
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800798:
    // 0x80800798: jal         0x8008E078
    // 0x8080079C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_2;
    // 0x8080079C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808007A0: beq         $v0, $zero, L_808007F4
    if (ctx->r2 == 0) {
        // 0x808007A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007F4;
    }
    // 0x808007A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007A8: jal         0x800005F0
    // 0x808007AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808005F0_bsstonehead(rdram, ctx);
        goto after_3;
    // 0x808007AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x808007B0: b           L_808007F8
    // 0x808007B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808007F8;
    // 0x808007B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808007B8:
    // 0x808007B8: jal         0x800005F0
    // 0x808007BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808005F0_bsstonehead(rdram, ctx);
        goto after_4;
    // 0x808007BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x808007C0: b           L_808007F8
    // 0x808007C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_808007F8;
    // 0x808007C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007C8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
L_808007CC:
    // 0x808007CC: lwc1        $f0, 0x16C($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808007D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x808007D4: c.lt.s      $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f12.fl < ctx->f0.fl;
    // 0x808007D8: nop

    // 0x808007DC: bc1fl       L_808007F8
    if (!c1cs) {
        // 0x808007E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007F8;
    }
    goto skip_1;
    // 0x808007E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808007E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808007E8: jal         0x800F0E00
    // 0x808007EC: sub.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f4.fl;
    func_800F0E00(rdram, ctx);
        goto after_5;
    // 0x808007EC: sub.s       $f14, $f0, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f0.fl - ctx->f4.fl;
    after_5:
    // 0x808007F0: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
L_808007F4:
    // 0x808007F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808007F8:
    // 0x808007F8: jal         0x8009E5C8
    // 0x808007FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x808007FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80800800: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800804: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080080C: jr          $ra
    // 0x80800810: nop

    return;
    // 0x80800810: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800814: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080081C: jal         0x80085230
    // 0x80800820: nop

    _basudie_entrypoint_6(rdram, ctx);
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
RECOMP_FUNC void bsstonehead_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800834: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800838: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(150, 0X1640) << 16);
    // 0x8080083C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800840: jr          $ra
    // 0x80800844: lw          $v0, 0x1640($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1640));
    return;
    // 0x80800844: lw          $v0, 0x1640($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1640));
;}
RECOMP_FUNC void bsstonehead_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800848: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080084C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800850: jal         0x80000060
    // 0x80800854: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800060_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x80800854: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800858: jal         0x80082FE0
    // 0x8080085C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x8080085C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800860: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800864: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800868: jr          $ra
    // 0x8080086C: nop

    return;
    // 0x8080086C: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800870: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800874: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800878: jal         0x80082FE8
    // 0x8080087C: nop

    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x8080087C: nop

    after_0:
    // 0x80800880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800884: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800888: jr          $ra
    // 0x8080088C: nop

    return;
    // 0x8080088C: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800890: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800894: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800898: jal         0x80000000
    // 0x8080089C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800000_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x8080089C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808008A0: jal         0x80082FF0
    // 0x808008A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x808008A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808008A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808008AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808008B0: jr          $ra
    // 0x808008B4: nop

    return;
    // 0x808008B4: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008B8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808008BC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(150, 0X1650) << 16);
    // 0x808008C0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808008C4: jr          $ra
    // 0x808008C8: lw          $v0, 0x1650($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1650));
    return;
    // 0x808008C8: lw          $v0, 0x1650($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1650));
;}
RECOMP_FUNC void func_808008CC_bsstonehead(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808008D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808008D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808008D8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x808008DC: beq         $a1, $zero, L_808009C4
    if (ctx->r5 == 0) {
        // 0x808008E0: sw          $a1, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r5;
            goto L_808009C4;
    }
    // 0x808008E0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x808008E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808008E8: beq         $a1, $at, L_8080090C
    if (ctx->r5 == ctx->r1) {
        // 0x808008EC: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_8080090C;
    }
    // 0x808008EC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808008F0: beq         $a1, $at, L_80800998
    if (ctx->r5 == ctx->r1) {
        // 0x808008F4: lw          $a0, 0x28($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X28);
            goto L_80800998;
    }
    // 0x808008F4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808008F8: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808008FC: beq         $a1, $at, L_808009B0
    if (ctx->r5 == ctx->r1) {
        // 0x80800900: nop
    
            goto L_808009B0;
    }
    // 0x80800900: nop

    // 0x80800904: b           L_808009C8
    // 0x80800908: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_808009C8;
    // 0x80800908: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_8080090C:
    // 0x8080090C: jal         0x8008CABC
    // 0x80800910: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800910: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
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
    // 0x80800928: addiu       $a1, $zero, 0x122
    ctx->r5 = ADD32(0, 0X122);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x80800928: addiu       $a1, $zero, 0x122
    ctx->r5 = ADD32(0, 0X122);
    after_2:
    // 0x8080092C: lui         $a1, 0x3F22
    ctx->r5 = S32(0X3F22 << 16);
    // 0x80800930: ori         $a1, $a1, 0xEB1C
    ctx->r5 = ctx->r5 | 0XEB1C;
    // 0x80800934: jal         0x8008B24C
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_3;
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080093C: lui         $a1, 0x3F22
    ctx->r5 = S32(0X3F22 << 16);
    // 0x80800940: lui         $a2, 0x3F41
    ctx->r6 = S32(0X3F41 << 16);
    // 0x80800944: ori         $a2, $a2, 0xF213
    ctx->r6 = ctx->r6 | 0XF213;
    // 0x80800948: ori         $a1, $a1, 0xEB1C
    ctx->r5 = ctx->r5 | 0XEB1C;
    // 0x8080094C: jal         0x8008B1D4
    // 0x80800950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1D4(rdram, ctx);
        goto after_4;
    // 0x80800950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800954: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800958: jal         0x8008B1BC
    // 0x8080095C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x8080095C: lui         $a1, 0x4080
    ctx->r5 = S32(0X4080 << 16);
    after_5:
    // 0x80800960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800964: jal         0x8008B134
    // 0x80800968: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_6;
    // 0x80800968: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8080096C: jal         0x8008B064
    // 0x80800970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_7;
    // 0x80800970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800974: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80800978: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8080097C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80800980: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800984: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800988: jal         0x8009FFD8
    // 0x8080098C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_8;
    // 0x8080098C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_8:
    // 0x80800990: b           L_808009C8
    // 0x80800994: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_808009C8;
    // 0x80800994: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_80800998:
    // 0x80800998: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x8080099C: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x808009A0: jal         0x8008CF1C
    // 0x808009A4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_9;
    // 0x808009A4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_9:
    // 0x808009A8: b           L_808009C8
    // 0x808009AC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
        goto L_808009C8;
    // 0x808009AC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_808009B0:
    // 0x808009B0: jal         0x800A2E18
    // 0x808009B4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800A2E18(rdram, ctx);
        goto after_10;
    // 0x808009B4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_10:
    // 0x808009B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808009BC: jal         0x8009B9B0
    // 0x808009C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_11;
    // 0x808009C0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
L_808009C4:
    // 0x808009C4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
L_808009C8:
    // 0x808009C8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x808009CC: sw          $t8, 0x15C($t9)
    MEM_W(0X15C, ctx->r25) = ctx->r24;
    // 0x808009D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808009D4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808009D8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808009DC: jr          $ra
    // 0x808009E0: nop

    return;
    // 0x808009E0: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009EC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808009F0: jal         0x800008CC
    // 0x808009F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_808008CC_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x808009F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808009F8: jal         0x80000000
    // 0x808009FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_bsstonehead(rdram, ctx);
        goto after_1;
    // 0x808009FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A08: jr          $ra
    // 0x80800A0C: nop

    return;
    // 0x80800A0C: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A18: jal         0x80000060
    // 0x80800A1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800060_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x80800A1C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A20: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800A24: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800A28: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800A2C: jal         0x800008CC
    // 0x80800A30: sw          $t6, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->r14;
    func_808008CC_bsstonehead(rdram, ctx);
        goto after_1;
    // 0x80800A30: sw          $t6, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->r14;
    after_1:
    // 0x80800A34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A3C: jr          $ra
    // 0x80800A40: nop

    return;
    // 0x80800A40: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800A48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800A4C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800A50: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800A54: jal         0x800000CC
    // 0x80800A58: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_808000CC_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x80800A58: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A60: jal         0x8009D3A8
    // 0x80800A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x80800A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800A68: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    // 0x80800A6C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A74: beq         $v0, $at, L_80800A94
    if (ctx->r2 == ctx->r1) {
        // 0x80800A78: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800A94;
    }
    // 0x80800A78: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800A7C: beq         $v0, $at, L_80800AB4
    if (ctx->r2 == ctx->r1) {
        // 0x80800A80: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80800AB4;
    }
    // 0x80800A80: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800A84: beq         $v0, $at, L_80800AD4
    if (ctx->r2 == ctx->r1) {
        // 0x80800A88: nop
    
            goto L_80800AD4;
    }
    // 0x80800A88: nop

    // 0x80800A8C: b           L_80800AE8
    // 0x80800A90: nop

        goto L_80800AE8;
    // 0x80800A90: nop

L_80800A94:
    // 0x80800A94: jal         0x8008DF8C
    // 0x80800A98: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_2;
    // 0x80800A98: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_2:
    // 0x80800A9C: beq         $v0, $zero, L_80800AE8
    if (ctx->r2 == 0) {
        // 0x80800AA0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800AE8;
    }
    // 0x80800AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AA4: jal         0x800008CC
    // 0x80800AA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_808008CC_bsstonehead(rdram, ctx);
        goto after_3;
    // 0x80800AA8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800AAC: b           L_80800AE8
    // 0x80800AB0: nop

        goto L_80800AE8;
    // 0x80800AB0: nop

L_80800AB4:
    // 0x80800AB4: jal         0x8008E078
    // 0x80800AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_4;
    // 0x80800AB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800ABC: beq         $v0, $zero, L_80800AE8
    if (ctx->r2 == 0) {
        // 0x80800AC0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800AE8;
    }
    // 0x80800AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AC4: jal         0x800008CC
    // 0x80800AC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_808008CC_bsstonehead(rdram, ctx);
        goto after_5;
    // 0x80800AC8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80800ACC: b           L_80800AE8
    // 0x80800AD0: nop

        goto L_80800AE8;
    // 0x80800AD0: nop

L_80800AD4:
    // 0x80800AD4: jal         0x8008CAEC
    // 0x80800AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_6;
    // 0x80800AD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800ADC: beq         $v0, $zero, L_80800AE8
    if (ctx->r2 == 0) {
        // 0x80800AE0: addiu       $t6, $zero, 0xB3
        ctx->r14 = ADD32(0, 0XB3);
            goto L_80800AE8;
    }
    // 0x80800AE0: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x80800AE4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800AE8:
    // 0x80800AE8: jal         0x8008E078
    // 0x80800AEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_7;
    // 0x80800AEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800AF0: beq         $v0, $zero, L_80800B04
    if (ctx->r2 == 0) {
        // 0x80800AF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800B04;
    }
    // 0x80800AF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AF8: jal         0x800003F4
    // 0x80800AFC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_808003F4_bsstonehead(rdram, ctx);
        goto after_8;
    // 0x80800AFC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x80800B00: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80800B04:
    // 0x80800B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B08: jal         0x8009E5C8
    // 0x80800B0C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_9;
    // 0x80800B0C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_9:
    // 0x80800B10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B14: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800B18: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800B1C: jr          $ra
    // 0x80800B20: nop

    return;
    // 0x80800B20: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B24: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800B28: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(150, 0X1660) << 16);
    // 0x80800B2C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800B30: jr          $ra
    // 0x80800B34: lw          $v0, 0x1660($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1660));
    return;
    // 0x80800B34: lw          $v0, 0x1660($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1660));
;}
RECOMP_FUNC void func_80800B38_bsstonehead(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B38: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800B3C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800B40: sltiu       $at, $a1, 0x5
    ctx->r1 = ctx->r5 < 0X5 ? 1 : 0;
    // 0x80800B44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B48: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800B4C: beq         $at, $zero, L_80800CFC
    if (ctx->r1 == 0) {
        // 0x80800B50: sw          $a1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r5;
            goto L_80800CFC;
    }
    // 0x80800B50: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80800B54: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80800B58: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(150, 0X1614) << 16);
    // 0x80800B5C: addu        $at, $at, $t6
    gpr jr_addend_80800B64 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800B60: lw          $t6, 0x1614($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(150, 0X1614));
    // 0x80800B64: jr          $t6
    // 0x80800B68: nop

    switch (jr_addend_80800B64 >> 2) {
        case 0: goto L_80800B6C; break;
        case 1: goto L_80800B88; break;
        case 2: goto L_80800CBC; break;
        case 3: goto L_80800CD8; break;
        case 4: goto L_80800CF4; break;
        default: switch_error(__func__, 0x80800B64, 0x80801614);
    }
    // 0x80800B68: nop

L_80800B6C:
    // 0x80800B6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B70: jal         0x8009B9B0
    // 0x80800B74: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_0;
    // 0x80800B74: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x80800B78: jal         0x8009BC6C
    // 0x80800B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_1;
    // 0x80800B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800B80: b           L_80800D00
    // 0x80800B84: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_80800D00;
    // 0x80800B84: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_80800B88:
    // 0x80800B88: jal         0x8008CABC
    // 0x80800B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CABC(rdram, ctx);
        goto after_2;
    // 0x80800B8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800B90: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80800B94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B98: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80800B9C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80800BA0: jal         0x80084468
    // 0x80800BA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    _baattach_entrypoint_6(rdram, ctx);
        goto after_3;
    // 0x80800BA4: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_3:
    // 0x80800BA8: jal         0x8008AF24
    // 0x80800BAC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008AF24(rdram, ctx);
        goto after_4;
    // 0x80800BAC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_4:
    // 0x80800BB0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800BB4: jal         0x8008AED4
    // 0x80800BB8: addiu       $a1, $zero, 0x122
    ctx->r5 = ADD32(0, 0X122);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x80800BB8: addiu       $a1, $zero, 0x122
    ctx->r5 = ADD32(0, 0X122);
    after_5:
    // 0x80800BBC: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x80800BC0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800BC4: jal         0x8008B1BC
    // 0x80800BC8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B1BC(rdram, ctx);
        goto after_6;
    // 0x80800BC8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_6:
    // 0x80800BCC: lui         $a2, 0x3F22
    ctx->r6 = S32(0X3F22 << 16);
    // 0x80800BD0: ori         $a2, $a2, 0xEB1C
    ctx->r6 = ctx->r6 | 0XEB1C;
    // 0x80800BD4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800BD8: jal         0x8008B1D4
    // 0x80800BDC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_7;
    // 0x80800BDC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_7:
    // 0x80800BE0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80800BE4: jal         0x8008B134
    // 0x80800BE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x80800BE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800BEC: jal         0x8008B064
    // 0x80800BF0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x80800BF0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    after_9:
    // 0x80800BF4: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80800BF8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800BFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800C04: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800C08: jal         0x8009FFD8
    // 0x80800C0C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x80800C0C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_10:
    // 0x80800C10: jal         0x8009EF04
    // 0x80800C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF04(rdram, ctx);
        goto after_11;
    // 0x80800C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800C18: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800C1C: nop

    // 0x80800C20: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800C24: nop

    // 0x80800C28: bc1t        L_80800C44
    if (c1cs) {
        // 0x80800C2C: nop
    
            goto L_80800C44;
    }
    // 0x80800C2C: nop

    // 0x80800C30: jal         0x8009EEB8
    // 0x80800C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_12;
    // 0x80800C34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800C38: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800C3C: jal         0x8009C914
    // 0x80800C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C914(rdram, ctx);
        goto after_13;
    // 0x80800C40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
L_80800C44:
    // 0x80800C44: jal         0x8009C990
    // 0x80800C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_14;
    // 0x80800C48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800C4C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800C50: jal         0x8009B9C0
    // 0x80800C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_15;
    // 0x80800C54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800C58: jal         0x800000CC
    // 0x80800C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000CC_bsstonehead(rdram, ctx);
        goto after_16;
    // 0x80800C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800C60: jal         0x8009C990
    // 0x80800C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_17;
    // 0x80800C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800C68: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800C6C: jal         0x8009BB00
    // 0x80800C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB00(rdram, ctx);
        goto after_18;
    // 0x80800C70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800C74: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800C78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C7C: jal         0x8009BA68
    // 0x80800C80: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_19;
    // 0x80800C80: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x80800C84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C88: jal         0x8009BA58
    // 0x80800C8C: lui         $a1, 0x4410
    ctx->r5 = S32(0X4410 << 16);
    func_8009BA58(rdram, ctx);
        goto after_20;
    // 0x80800C8C: lui         $a1, 0x4410
    ctx->r5 = S32(0X4410 << 16);
    after_20:
    // 0x80800C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C94: jal         0x8009BCB4
    // 0x80800C98: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_21;
    // 0x80800C98: lui         $a1, 0xC496
    ctx->r5 = S32(0XC496 << 16);
    after_21:
    // 0x80800C9C: lui         $a1, 0x3FAC
    ctx->r5 = S32(0X3FAC << 16);
    // 0x80800CA0: lui         $a2, 0x3FB9
    ctx->r6 = S32(0X3FB9 << 16);
    // 0x80800CA4: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800CA8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800CAC: jal         0x8009D7A4
    // 0x80800CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009D7A4(rdram, ctx);
        goto after_22;
    // 0x80800CB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80800CB4: b           L_80800D00
    // 0x80800CB8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_80800D00;
    // 0x80800CB8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_80800CBC:
    // 0x80800CBC: lui         $a1, 0x3F41
    ctx->r5 = S32(0X3F41 << 16);
    // 0x80800CC0: ori         $a1, $a1, 0xF213
    ctx->r5 = ctx->r5 | 0XF213;
    // 0x80800CC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CC8: jal         0x8008CF1C
    // 0x80800CCC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_23;
    // 0x80800CCC: lui         $a2, 0x4080
    ctx->r6 = S32(0X4080 << 16);
    after_23:
    // 0x80800CD0: b           L_80800D00
    // 0x80800CD4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_80800D00;
    // 0x80800CD4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_80800CD8:
    // 0x80800CD8: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800CDC: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800CE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CE4: jal         0x8008CF1C
    // 0x80800CE8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_24;
    // 0x80800CE8: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_24:
    // 0x80800CEC: b           L_80800D00
    // 0x80800CF0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_80800D00;
    // 0x80800CF0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_80800CF4:
    // 0x80800CF4: jal         0x800A2E18
    // 0x80800CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A2E18(rdram, ctx);
        goto after_25;
    // 0x80800CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
L_80800CFC:
    // 0x80800CFC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_80800D00:
    // 0x80800D00: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
    // 0x80800D04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800D08: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800D0C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800D10: jr          $ra
    // 0x80800D14: nop

    return;
    // 0x80800D14: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D20: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800D24: jal         0x80000B38
    // 0x80800D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800B38_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x80800D28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800D2C: jal         0x80000000
    // 0x80800D30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_bsstonehead(rdram, ctx);
        goto after_1;
    // 0x80800D30: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800D34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D3C: jr          $ra
    // 0x80800D40: nop

    return;
    // 0x80800D40: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800D48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800D4C: jal         0x80000060
    // 0x80800D50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800060_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x80800D50: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800D54: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800D58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800D5C: jal         0x80000B38
    // 0x80800D60: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_80800B38_bsstonehead(rdram, ctx);
        goto after_1;
    // 0x80800D60: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    after_1:
    // 0x80800D64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800D68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800D6C: jr          $ra
    // 0x80800D70: nop

    return;
    // 0x80800D70: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800D74: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800D78: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800D7C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800D80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800D84: jal         0x800000CC
    // 0x80800D88: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_808000CC_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x80800D88: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80800D8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D90: jal         0x80091A30
    // 0x80800D94: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_1;
    // 0x80800D94: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_1:
    // 0x80800D98: beql        $v0, $zero, L_80800DCC
    if (ctx->r2 == 0) {
        // 0x80800D9C: lw          $v0, 0x15C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X15C);
            goto L_80800DCC;
    }
    goto skip_0;
    // 0x80800D9C: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    skip_0:
    // 0x80800DA0: jal         0x8009BB50
    // 0x80800DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_2;
    // 0x80800DA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800DA8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800DAC: nop

    // 0x80800DB0: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800DB4: nop

    // 0x80800DB8: bc1fl       L_80800DCC
    if (!c1cs) {
        // 0x80800DBC: lw          $v0, 0x15C($s0)
        ctx->r2 = MEM_W(ctx->r16, 0X15C);
            goto L_80800DCC;
    }
    goto skip_1;
    // 0x80800DBC: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
    skip_1:
    // 0x80800DC0: jal         0x8009BC6C
    // 0x80800DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_3;
    // 0x80800DC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800DC8: lw          $v0, 0x15C($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X15C);
L_80800DCC:
    // 0x80800DCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800DD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DD4: beq         $v0, $at, L_80800E04
    if (ctx->r2 == ctx->r1) {
        // 0x80800DD8: addiu       $at, $zero, 0x2
        ctx->r1 = ADD32(0, 0X2);
            goto L_80800E04;
    }
    // 0x80800DD8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800DDC: beq         $v0, $at, L_80800E44
    if (ctx->r2 == ctx->r1) {
        // 0x80800DE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E44;
    }
    // 0x80800DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DE4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800DE8: beq         $v0, $at, L_80800E64
    if (ctx->r2 == ctx->r1) {
        // 0x80800DEC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E64;
    }
    // 0x80800DEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800DF4: beq         $v0, $at, L_80800E8C
    if (ctx->r2 == ctx->r1) {
        // 0x80800DF8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E8C;
    }
    // 0x80800DF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DFC: b           L_80800EA8
    // 0x80800E00: nop

        goto L_80800EA8;
    // 0x80800E00: nop

L_80800E04:
    // 0x80800E04: jal         0x8008DF8C
    // 0x80800E08: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_4;
    // 0x80800E08: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_4:
    // 0x80800E0C: beq         $v0, $zero, L_80800E24
    if (ctx->r2 == 0) {
        // 0x80800E10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E24;
    }
    // 0x80800E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E14: jal         0x80000B38
    // 0x80800E18: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800B38_bsstonehead(rdram, ctx);
        goto after_5;
    // 0x80800E18: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80800E1C: b           L_80800EA8
    // 0x80800E20: nop

        goto L_80800EA8;
    // 0x80800E20: nop

L_80800E24:
    // 0x80800E24: jal         0x8008CAEC
    // 0x80800E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_6;
    // 0x80800E28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800E2C: beq         $v0, $zero, L_80800EA8
    if (ctx->r2 == 0) {
        // 0x80800E30: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800EA8;
    }
    // 0x80800E30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E34: jal         0x80000B38
    // 0x80800E38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800B38_bsstonehead(rdram, ctx);
        goto after_7;
    // 0x80800E38: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x80800E3C: b           L_80800EA8
    // 0x80800E40: nop

        goto L_80800EA8;
    // 0x80800E40: nop

L_80800E44:
    // 0x80800E44: jal         0x8008DF8C
    // 0x80800E48: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_8;
    // 0x80800E48: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_8:
    // 0x80800E4C: beq         $v0, $zero, L_80800EA8
    if (ctx->r2 == 0) {
        // 0x80800E50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800EA8;
    }
    // 0x80800E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E54: jal         0x80000B38
    // 0x80800E58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800B38_bsstonehead(rdram, ctx);
        goto after_9;
    // 0x80800E58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x80800E5C: b           L_80800EA8
    // 0x80800E60: nop

        goto L_80800EA8;
    // 0x80800E60: nop

L_80800E64:
    // 0x80800E64: jal         0x8009D3A8
    // 0x80800E68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_10;
    // 0x80800E68: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80800E6C: jal         0x8008E078
    // 0x80800E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_11;
    // 0x80800E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800E74: beq         $v0, $zero, L_80800EA8
    if (ctx->r2 == 0) {
        // 0x80800E78: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800EA8;
    }
    // 0x80800E78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E7C: jal         0x80000B38
    // 0x80800E80: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80800B38_bsstonehead(rdram, ctx);
        goto after_12;
    // 0x80800E80: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_12:
    // 0x80800E84: b           L_80800EA8
    // 0x80800E88: nop

        goto L_80800EA8;
    // 0x80800E88: nop

L_80800E8C:
    // 0x80800E8C: jal         0x8009D3A8
    // 0x80800E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_13;
    // 0x80800E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x80800E94: jal         0x8008CAEC
    // 0x80800E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_14;
    // 0x80800E98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x80800E9C: beq         $v0, $zero, L_80800EA8
    if (ctx->r2 == 0) {
        // 0x80800EA0: addiu       $t6, $zero, 0xB3
        ctx->r14 = ADD32(0, 0XB3);
            goto L_80800EA8;
    }
    // 0x80800EA0: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x80800EA4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800EA8:
    // 0x80800EA8: jal         0x8008E078
    // 0x80800EAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_15;
    // 0x80800EAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800EB0: beq         $v0, $zero, L_80800EC4
    if (ctx->r2 == 0) {
        // 0x80800EB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800EC4;
    }
    // 0x80800EB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EB8: jal         0x800003F4
    // 0x80800EBC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_808003F4_bsstonehead(rdram, ctx);
        goto after_16;
    // 0x80800EBC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_16:
    // 0x80800EC0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_80800EC4:
    // 0x80800EC4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EC8: jal         0x8009E5C8
    // 0x80800ECC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_17;
    // 0x80800ECC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_17:
    // 0x80800ED0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800ED4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800ED8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800EDC: jr          $ra
    // 0x80800EE0: nop

    return;
    // 0x80800EE0: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EE4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800EE8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(150, 0X1670) << 16);
    // 0x80800EEC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800EF0: jr          $ra
    // 0x80800EF4: lw          $v0, 0x1670($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1670));
    return;
    // 0x80800EF4: lw          $v0, 0x1670($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1670));
;}
RECOMP_FUNC void bsstonehead_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800EFC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800F00: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800F04: jal         0x80000060
    // 0x80800F08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800060_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x80800F08: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800F0C: lui         $a2, 0x3F4C
    ctx->r6 = S32(0X3F4C << 16);
    // 0x80800F10: lui         $a3, 0x3ECC
    ctx->r7 = S32(0X3ECC << 16);
    // 0x80800F14: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800F18: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800F1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F20: jal         0x8008CC34
    // 0x80800F24: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    func_8008CC34(rdram, ctx);
        goto after_1;
    // 0x80800F24: addiu       $a1, $zero, 0x62
    ctx->r5 = ADD32(0, 0X62);
    after_1:
    // 0x80800F28: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800F2C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800F30: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800F38: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800F3C: jal         0x8009FFD8
    // 0x80800F40: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800F40: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80800F44: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(150, 0X1628) << 16);
    // 0x80800F48: lwc1        $f4, 0x1628($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(150, 0X1628));
    // 0x80800F4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F50: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x80800F54: lui         $a2, 0x43C8
    ctx->r6 = S32(0X43C8 << 16);
    // 0x80800F58: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80800F5C: jal         0x8008C9F0
    // 0x80800F60: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_3;
    // 0x80800F60: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80800F64: jal         0x800909CC
    // 0x80800F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_4;
    // 0x80800F68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800F6C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800F70: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800F74: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800F78: jr          $ra
    // 0x80800F7C: nop

    return;
    // 0x80800F7C: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F80: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800F84: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800F88: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800F8C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800F90: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80800F94: jal         0x8009D3A8
    // 0x80800F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x80800F98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800F9C: jal         0x800000CC
    // 0x80800FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000CC_bsstonehead(rdram, ctx);
        goto after_1;
    // 0x80800FA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800FA4: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80800FA8: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800FAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FB0: jal         0x800A2CE8
    // 0x80800FB4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_2;
    // 0x80800FB4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80800FB8: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x80800FBC: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800FC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FC4: jal         0x800A2CE8
    // 0x80800FC8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_3;
    // 0x80800FC8: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_3:
    // 0x80800FCC: jal         0x8009EF10
    // 0x80800FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_4;
    // 0x80800FD0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800FD4: bne         $v0, $zero, L_80800FF0
    if (ctx->r2 != 0) {
        // 0x80800FD8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800FF0;
    }
    // 0x80800FD8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800FDC: jal         0x8009BCD4
    // 0x80800FE0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8009BCD4(rdram, ctx);
        goto after_5;
    // 0x80800FE0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_5:
    // 0x80800FE4: beq         $v0, $zero, L_80800FF0
    if (ctx->r2 == 0) {
        // 0x80800FE8: addiu       $t6, $zero, 0xB3
        ctx->r14 = ADD32(0, 0XB3);
            goto L_80800FF0;
    }
    // 0x80800FE8: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x80800FEC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80800FF0:
    // 0x80800FF0: jal         0x8008E148
    // 0x80800FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_6;
    // 0x80800FF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800FF8: beq         $v0, $zero, L_8080100C
    if (ctx->r2 == 0) {
        // 0x80800FFC: nop
    
            goto L_8080100C;
    }
    // 0x80800FFC: nop

    // 0x80801000: jal         0x800848B0
    // 0x80801004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_7;
    // 0x80801004: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80801008: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
L_8080100C:
    // 0x8080100C: jal         0x8008DD04
    // 0x80801010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008DD04(rdram, ctx);
        goto after_8;
    // 0x80801010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80801014: beq         $v0, $zero, L_80801020
    if (ctx->r2 == 0) {
        // 0x80801018: addiu       $t7, $zero, 0xAD
        ctx->r15 = ADD32(0, 0XAD);
            goto L_80801020;
    }
    // 0x80801018: addiu       $t7, $zero, 0xAD
    ctx->r15 = ADD32(0, 0XAD);
    // 0x8080101C: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80801020:
    // 0x80801020: jal         0x800003B8
    // 0x80801024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808003B8_bsstonehead(rdram, ctx);
        goto after_9;
    // 0x80801024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80801028: beq         $v0, $zero, L_80801038
    if (ctx->r2 == 0) {
        // 0x8080102C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801038;
    }
    // 0x8080102C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801030: addiu       $t8, $zero, 0xAE
    ctx->r24 = ADD32(0, 0XAE);
    // 0x80801034: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80801038:
    // 0x80801038: jal         0x80091A58
    // 0x8080103C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_10;
    // 0x8080103C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_10:
    // 0x80801040: beq         $v0, $zero, L_80801050
    if (ctx->r2 == 0) {
        // 0x80801044: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801050;
    }
    // 0x80801044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801048: addiu       $t9, $zero, 0xB4
    ctx->r25 = ADD32(0, 0XB4);
    // 0x8080104C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
L_80801050:
    // 0x80801050: jal         0x80091A94
    // 0x80801054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A94(rdram, ctx);
        goto after_11;
    // 0x80801054: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
    // 0x80801058: beq         $v0, $zero, L_80801080
    if (ctx->r2 == 0) {
        // 0x8080105C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801080;
    }
    // 0x8080105C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801060: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801064: jal         0x80091940
    // 0x80801068: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80091940(rdram, ctx);
        goto after_12;
    // 0x80801068: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x8080106C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801070: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801074: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80801078: jal         0x80084468
    // 0x8080107C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    _baattach_entrypoint_6(rdram, ctx);
        goto after_13;
    // 0x8080107C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_13:
L_80801080:
    // 0x80801080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801084: jal         0x8009E5C8
    // 0x80801088: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_14;
    // 0x80801088: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_14:
    // 0x8080108C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801090: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801094: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801098: jr          $ra
    // 0x8080109C: nop

    return;
    // 0x8080109C: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808010A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808010A8: jal         0x80000000
    // 0x808010AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800000_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x808010AC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808010B0: jal         0x80090A2C
    // 0x808010B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80090A2C(rdram, ctx);
        goto after_1;
    // 0x808010B4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808010B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808010BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808010C0: jr          $ra
    // 0x808010C4: nop

    return;
    // 0x808010C4: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010C8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808010CC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(150, 0X1680) << 16);
    // 0x808010D0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808010D4: jr          $ra
    // 0x808010D8: lw          $v0, 0x1680($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1680));
    return;
    // 0x808010D8: lw          $v0, 0x1680($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1680));
;}
RECOMP_FUNC void bsstonehead_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808010DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808010E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808010E4: jal         0x80085148
    // 0x808010E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _baspin_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808010E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808010EC: jal         0x80000000
    // 0x808010F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_bsstonehead(rdram, ctx);
        goto after_1;
    // 0x808010F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808010F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808010F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808010FC: jr          $ra
    // 0x80801100: nop

    return;
    // 0x80801100: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801104: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801108: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080110C: jal         0x80000060
    // 0x80801110: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80800060_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x80801110: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801114: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801118: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8080111C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80801120: jal         0x80084468
    // 0x80801124: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    _baattach_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x80801124: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x80801128: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x8080112C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801130: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801134: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    // 0x80801138: addiu       $a3, $zero, 0x2
    ctx->r7 = ADD32(0, 0X2);
    // 0x8080113C: jal         0x80085150
    // 0x80801140: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    _baspin_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x80801140: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80801144: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801148: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080114C: jr          $ra
    // 0x80801150: nop

    return;
    // 0x80801150: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801154: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801158: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080115C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801160: jal         0x80085158
    // 0x80801164: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _baspin_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80801164: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80801168: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8080116C: bne         $v0, $at, L_80801178
    if (ctx->r2 != ctx->r1) {
        // 0x80801170: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80801178;
    }
    // 0x80801170: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80801174: addiu       $a1, $zero, 0xB3
    ctx->r5 = ADD32(0, 0XB3);
L_80801178:
    // 0x80801178: jal         0x8009E5C8
    // 0x8080117C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_1;
    // 0x8080117C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80801180: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801184: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801188: jr          $ra
    // 0x8080118C: nop

    return;
    // 0x8080118C: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801190: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801194: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(150, 0X1690) << 16);
    // 0x80801198: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080119C: jr          $ra
    // 0x808011A0: lw          $v0, 0x1690($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1690));
    return;
    // 0x808011A0: lw          $v0, 0x1690($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X1690));
;}
RECOMP_FUNC void bsstonehead_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808011A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808011AC: jal         0x800845D0
    // 0x808011B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808011B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808011B4: jal         0x80000000
    // 0x808011B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_bsstonehead(rdram, ctx);
        goto after_1;
    // 0x808011B8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808011BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808011C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808011C4: jr          $ra
    // 0x808011C8: nop

    return;
    // 0x808011C8: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808011CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808011D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808011D4: jal         0x80000060
    // 0x808011D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800060_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x808011D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808011DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808011E0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x808011E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808011E8: jal         0x80084468
    // 0x808011EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    _baattach_entrypoint_6(rdram, ctx);
        goto after_1;
    // 0x808011EC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x808011F0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808011F4: jal         0x800845D8
    // 0x808011F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x808011F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x808011FC: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    // 0x80801200: ori         $a2, $a2, 0x75F7
    ctx->r6 = ctx->r6 | 0X75F7;
    // 0x80801204: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801208: jal         0x800845E0
    // 0x8080120C: addiu       $a1, $zero, 0x122
    ctx->r5 = ADD32(0, 0X122);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_3;
    // 0x8080120C: addiu       $a1, $zero, 0x122
    ctx->r5 = ADD32(0, 0X122);
    after_3:
    // 0x80801210: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801214: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801218: jr          $ra
    // 0x8080121C: nop

    return;
    // 0x8080121C: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801220: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801224: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801228: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8080122C: jal         0x800845C8
    // 0x80801230: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _babounce_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80801230: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80801234: beq         $v0, $zero, L_80801244
    if (ctx->r2 == 0) {
        // 0x80801238: nop
    
            goto L_80801244;
    }
    // 0x80801238: nop

    // 0x8080123C: jal         0x800000CC
    // 0x80801240: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_808000CC_bsstonehead(rdram, ctx);
        goto after_1;
    // 0x80801240: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
L_80801244:
    // 0x80801244: jal         0x80084600
    // 0x80801248: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _babounce_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x80801248: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8080124C: beq         $v0, $zero, L_80801258
    if (ctx->r2 == 0) {
        // 0x80801250: addiu       $t6, $zero, 0xB3
        ctx->r14 = ADD32(0, 0XB3);
            goto L_80801258;
    }
    // 0x80801250: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x80801254: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80801258:
    // 0x80801258: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080125C: jal         0x8009E5C8
    // 0x80801260: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80801260: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80801264: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801268: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080126C: jr          $ra
    // 0x80801270: nop

    return;
    // 0x80801270: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801274: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801278: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(150, 0X16A0) << 16);
    // 0x8080127C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801280: jr          $ra
    // 0x80801284: lw          $v0, 0x16A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X16A0));
    return;
    // 0x80801284: lw          $v0, 0x16A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X16A0));
;}
RECOMP_FUNC void bsstonehead_entrypoint_32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801288: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080128C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801290: jal         0x800839B8
    // 0x80801294: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80801294: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801298: jal         0x80000000
    // 0x8080129C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800000_bsstonehead(rdram, ctx);
        goto after_1;
    // 0x8080129C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808012A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808012A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808012A8: jr          $ra
    // 0x808012AC: nop

    return;
    // 0x808012AC: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808012B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808012B8: jal         0x80000060
    // 0x808012BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800060_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x808012BC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808012C0: jal         0x800839C8
    // 0x808012C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x808012C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808012C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808012CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808012D0: jr          $ra
    // 0x808012D4: nop

    return;
    // 0x808012D4: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808012DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808012E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x808012E4: jal         0x800839E8
    // 0x808012E8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x808012E8: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x808012EC: beq         $v0, $zero, L_80801300
    if (ctx->r2 == 0) {
        // 0x808012F0: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80801300;
    }
    // 0x808012F0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x808012F4: jal         0x800839B0
    // 0x808012F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x808012F8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x808012FC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80801300:
    // 0x80801300: jal         0x8009E5C8
    // 0x80801304: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80801304: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80801308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080130C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801310: jr          $ra
    // 0x80801314: nop

    return;
    // 0x80801314: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801318: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080131C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(150, 0X16B0) << 16);
    // 0x80801320: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801324: jr          $ra
    // 0x80801328: lw          $v0, 0x16B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X16B0));
    return;
    // 0x80801328: lw          $v0, 0x16B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X16B0));
;}
RECOMP_FUNC void bsstonehead_entrypoint_36(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080132C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801330: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801334: jal         0x80000000
    // 0x80801338: nop

    func_80800000_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x80801338: nop

    after_0:
    // 0x8080133C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801340: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801344: jr          $ra
    // 0x80801348: nop

    return;
    // 0x80801348: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_37(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080134C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801350: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801354: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801358: jal         0x80000060
    // 0x8080135C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800060_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x8080135C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801360: lui         $a2, 0x40C3
    ctx->r6 = S32(0X40C3 << 16);
    // 0x80801364: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80801368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080136C: jal         0x8008CB3C
    // 0x80801370: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80801370: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    after_1:
    // 0x80801374: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80801378: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080137C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801380: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801384: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80801388: jal         0x8009FFD8
    // 0x8080138C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x8080138C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x80801390: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801394: jal         0x8009B9B0
    // 0x80801398: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80801398: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x8080139C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808013A4: jal         0x80085338
    // 0x808013A8: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    _batimer_set(rdram, ctx);
        goto after_4;
    // 0x808013A8: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_4:
    // 0x808013AC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808013B0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808013B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808013B8: jr          $ra
    // 0x808013BC: nop

    return;
    // 0x808013BC: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013C0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808013C4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808013C8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808013CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808013D0: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x808013D4: jal         0x80085300
    // 0x808013D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_get(rdram, ctx);
        goto after_0;
    // 0x808013D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808013DC: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x808013E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x808013E4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808013E8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808013EC: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    // 0x808013F0: lui         $a3, 0x41F0
    ctx->r7 = S32(0X41F0 << 16);
    // 0x808013F4: jal         0x800F10B4
    // 0x808013F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x808013F8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x808013FC: jal         0x800D8FF8
    // 0x80801400: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_2;
    // 0x80801400: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_2:
    // 0x80801404: lwc1        $f6, 0x2C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80801408: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080140C: mul.s       $f8, $f0, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f0.fl, ctx->f6.fl);
    // 0x80801410: jal         0x8009C990
    // 0x80801414: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    func_8009C990(rdram, ctx);
        goto after_3;
    // 0x80801414: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_3:
    // 0x80801418: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8080141C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801420: add.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x80801424: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80801428: jal         0x8009C914
    // 0x8080142C: nop

    func_8009C914(rdram, ctx);
        goto after_4;
    // 0x8080142C: nop

    after_4:
    // 0x80801430: jal         0x8009C974
    // 0x80801434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C974(rdram, ctx);
        goto after_5;
    // 0x80801434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80801438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080143C: jal         0x800852F0
    // 0x80801440: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _batimer_decrement(rdram, ctx);
        goto after_6;
    // 0x80801440: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x80801444: beq         $v0, $zero, L_80801454
    if (ctx->r2 == 0) {
        // 0x80801448: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801454;
    }
    // 0x80801448: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080144C: addiu       $t6, $zero, 0xB3
    ctx->r14 = ADD32(0, 0XB3);
    // 0x80801450: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_80801454:
    // 0x80801454: jal         0x8009E5C8
    // 0x80801458: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x80801458: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_7:
    // 0x8080145C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801460: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801464: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80801468: jr          $ra
    // 0x8080146C: nop

    return;
    // 0x8080146C: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801470: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801474: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(150, 0X16C0) << 16);
    // 0x80801478: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080147C: jr          $ra
    // 0x80801480: lw          $v0, 0x16C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X16C0));
    return;
    // 0x80801480: lw          $v0, 0x16C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X16C0));
;}
RECOMP_FUNC void bsstonehead_entrypoint_40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801484: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801488: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080148C: jal         0x80000000
    // 0x80801490: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800000_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x80801490: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801494: jal         0x80090A2C
    // 0x80801498: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80090A2C(rdram, ctx);
        goto after_1;
    // 0x80801498: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080149C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808014A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808014A4: jr          $ra
    // 0x808014A8: nop

    return;
    // 0x808014A8: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_41(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808014B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808014B4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808014B8: jal         0x80000060
    // 0x808014BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80800060_bsstonehead(rdram, ctx);
        goto after_0;
    // 0x808014BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808014C0: lui         $a2, 0x40C3
    ctx->r6 = S32(0X40C3 << 16);
    // 0x808014C4: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808014C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014CC: jal         0x8008CB3C
    // 0x808014D0: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x808014D0: addiu       $a1, $zero, 0x63
    ctx->r5 = ADD32(0, 0X63);
    after_1:
    // 0x808014D4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808014D8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808014DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014E0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808014E4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808014E8: jal         0x8009FFD8
    // 0x808014EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808014EC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x808014F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014F4: jal         0x8009B9B0
    // 0x808014F8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x808014F8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x808014FC: jal         0x800909CC
    // 0x80801500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_4;
    // 0x80801500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801504: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801508: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080150C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801510: jr          $ra
    // 0x80801514: nop

    return;
    // 0x80801514: nop

;}
RECOMP_FUNC void bsstonehead_entrypoint_42(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801518: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080151C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801520: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80801524: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80801528: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080152C: jal         0x8008DD04
    // 0x80801530: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_8008DD04(rdram, ctx);
        goto after_0;
    // 0x80801530: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x80801534: beq         $v0, $zero, L_80801540
    if (ctx->r2 == 0) {
        // 0x80801538: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801540;
    }
    // 0x80801538: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080153C: addiu       $s1, $zero, 0xAD
    ctx->r17 = ADD32(0, 0XAD);
L_80801540:
    // 0x80801540: jal         0x800003F4
    // 0x80801544: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_808003F4_bsstonehead(rdram, ctx);
        goto after_1;
    // 0x80801544: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_1:
    // 0x80801548: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8080154C: jal         0x8008E148
    // 0x80801550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_2;
    // 0x80801550: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801554: beql        $v0, $zero, L_8080156C
    if (ctx->r2 == 0) {
        // 0x80801558: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080156C;
    }
    goto skip_0;
    // 0x80801558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080155C: jal         0x800848B0
    // 0x80801560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_25(rdram, ctx);
        goto after_3;
    // 0x80801560: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801564: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80801568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080156C:
    // 0x8080156C: jal         0x80091A58
    // 0x80801570: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_4;
    // 0x80801570: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x80801574: beq         $v0, $zero, L_80801580
    if (ctx->r2 == 0) {
        // 0x80801578: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801580;
    }
    // 0x80801578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080157C: addiu       $s1, $zero, 0xB4
    ctx->r17 = ADD32(0, 0XB4);
L_80801580:
    // 0x80801580: jal         0x80091A94
    // 0x80801584: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A94(rdram, ctx);
        goto after_5;
    // 0x80801584: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80801588: beq         $v0, $zero, L_808015B0
    if (ctx->r2 == 0) {
        // 0x8080158C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808015B0;
    }
    // 0x8080158C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801590: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801594: jal         0x80091940
    // 0x80801598: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80091940(rdram, ctx);
        goto after_6;
    // 0x80801598: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8080159C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808015A4: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x808015A8: jal         0x80084468
    // 0x808015AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    _baattach_entrypoint_6(rdram, ctx);
        goto after_7;
    // 0x808015AC: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_7:
L_808015B0:
    // 0x808015B0: jal         0x80097AD0
    // 0x808015B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_8;
    // 0x808015B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808015B8: beql        $v0, $zero, L_808015D0
    if (ctx->r2 == 0) {
        // 0x808015BC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808015D0;
    }
    goto skip_1;
    // 0x808015BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808015C0: jal         0x800848A8
    // 0x808015C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_9;
    // 0x808015C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808015C8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x808015CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808015D0:
    // 0x808015D0: jal         0x800A02DC
    // 0x808015D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800A02DC(rdram, ctx);
        goto after_10;
    // 0x808015D4: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
    // 0x808015D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015DC: jal         0x8009E5C8
    // 0x808015E0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_11;
    // 0x808015E0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_11:
    // 0x808015E4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808015E8: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808015EC: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808015F0: jr          $ra
    // 0x808015F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808015F4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsstonehead_entrypoint_43(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015F8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808015FC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(150, 0X16D0) << 16);
    // 0x80801600: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801604: jr          $ra
    // 0x80801608: lw          $v0, 0x16D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X16D0));
    return;
    // 0x80801608: lw          $v0, 0x16D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(150, 0X16D0));
    // 0x8080160C: nop

;}
RECOMP_FUNC void func_80800000_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x8080000C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800010: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800014: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80800018: jal         0x8009FFD8
    // 0x8080001C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_0;
    // 0x8080001C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x80800020: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800024: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800028: jr          $ra
    // 0x8080002C: nop

    return;
    // 0x8080002C: nop

;}
RECOMP_FUNC void func_80800030_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800030: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80800034: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800038: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x8080003C: mul.s       $f0, $f14, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f0.fl = MUL_S(ctx->f14.fl, ctx->f4.fl);
    // 0x80800040: jr          $ra
    // 0x80800044: nop

    return;
    // 0x80800044: nop

;}
RECOMP_FUNC void func_80800048_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800048: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(151, 0X16B0) << 16);
    // 0x8080004C: lwc1        $f6, 0x16B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(151, 0X16B0));
    // 0x80800050: neg.s       $f4, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = -ctx->f14.fl;
    // 0x80800054: swc1        $f12, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f12.u32l;
    // 0x80800058: mul.s       $f0, $f4, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8080005C: jr          $ra
    // 0x80800060: nop

    return;
    // 0x80800060: nop

;}
RECOMP_FUNC void func_80800064_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080006C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800070: jal         0x8009E6EC
    // 0x80800074: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800074: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800078: addiu       $at, $zero, 0x2D
    ctx->r1 = ADD32(0, 0X2D);
    // 0x8080007C: beq         $v0, $at, L_808000AC
    if (ctx->r2 == ctx->r1) {
        // 0x80800080: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000AC;
    }
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800084: addiu       $at, $zero, 0x85
    ctx->r1 = ADD32(0, 0X85);
    // 0x80800088: bne         $v0, $at, L_808000D4
    if (ctx->r2 != ctx->r1) {
        // 0x8080008C: nop
    
            goto L_808000D4;
    }
    // 0x8080008C: nop

    // 0x80800090: jal         0x80099A58
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A58(rdram, ctx);
        goto after_1;
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080009C: jal         0x800851F8
    // 0x808000A0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    _basub_entrypoint_15(rdram, ctx);
        goto after_2;
    // 0x808000A0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x808000A4: b           L_808000E0
    // 0x808000A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000E0;
    // 0x808000A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000AC:
    // 0x808000AC: jal         0x800995B8
    // 0x808000B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800995B8(rdram, ctx);
        goto after_3;
    // 0x808000B0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x808000B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000B8: jal         0x8009E830
    // 0x808000BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_4;
    // 0x808000BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_4:
    // 0x808000C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000C4: jal         0x8009E5C8
    // 0x808000C8: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    func_8009E5C8(rdram, ctx);
        goto after_5;
    // 0x808000C8: addiu       $a1, $zero, 0x46
    ctx->r5 = ADD32(0, 0X46);
    after_5:
    // 0x808000CC: b           L_808000E0
    // 0x808000D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808000E0;
    // 0x808000D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000D4:
    // 0x808000D4: jal         0x80099B94
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099B94(rdram, ctx);
        goto after_6;
    // 0x808000D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808000DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808000E0:
    // 0x808000E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808000E8: jr          $ra
    // 0x808000EC: nop

    return;
    // 0x808000EC: nop

;}
RECOMP_FUNC void func_808000F0_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000F0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808000F4: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x808000F8: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x808000FC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800100: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80800104: jal         0x8009BB94
    // 0x80800108: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    func_8009BB94(rdram, ctx);
        goto after_0;
    // 0x80800108: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    after_0:
    // 0x8080010C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800110: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800114: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800118: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x8080011C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800120: lui         $a2, 0x4361
    ctx->r6 = S32(0X4361 << 16);
    // 0x80800124: jal         0x800F10B4
    // 0x80800128: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_1;
    // 0x80800128: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x8080012C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80800130: jal         0x8008E35C
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_2;
    // 0x80800134: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800138: beq         $v0, $zero, L_808001C4
    if (ctx->r2 == 0) {
        // 0x8080013C: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(151, 0X16B8) << 16);
            goto L_808001C4;
    }
    // 0x8080013C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(151, 0X16B8) << 16);
    // 0x80800140: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80800144: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800148: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8080014C: jal         0x800F1214
    // 0x80800150: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x80800150: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    after_3:
    // 0x80800154: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800158: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8080015C: mov.s       $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    ctx->f22.fl = ctx->f0.fl;
    // 0x80800160: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80800164: jal         0x800F1214
    // 0x80800168: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800F1214(rdram, ctx);
        goto after_4;
    // 0x80800168: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_4:
    // 0x8080016C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800170: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800174: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    // 0x80800178: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x8080017C: jal         0x800F1214
    // 0x80800180: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    func_800F1214(rdram, ctx);
        goto after_5;
    // 0x80800180: lui         $a2, 0x4316
    ctx->r6 = S32(0X4316 << 16);
    after_5:
    // 0x80800184: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(151, 0X16B4) << 16);
    // 0x80800188: lwc1        $f14, 0x16B4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(151, 0X16B4));
    // 0x8080018C: swc1        $f0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f0.u32l;
    // 0x80800190: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80800194: jal         0x800F1214
    // 0x80800198: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_800F1214(rdram, ctx);
        goto after_6;
    // 0x80800198: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_6:
    // 0x8080019C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808001A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001A4: jal         0x8009C554
    // 0x808001A8: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_8009C554(rdram, ctx);
        goto after_7;
    // 0x808001A8: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_7:
    // 0x808001AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001B0: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    // 0x808001B4: jal         0x8009C99C
    // 0x808001B8: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_8;
    // 0x808001B8: lui         $a2, 0x41A0
    ctx->r6 = S32(0X41A0 << 16);
    after_8:
    // 0x808001BC: b           L_808001F4
    // 0x808001C0: nop

        goto L_808001F4;
    // 0x808001C0: nop

L_808001C4:
    // 0x808001C4: lwc1        $f0, 0x16B8($at)
    ctx->f0.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(151, 0X16B8));
    // 0x808001C8: lui         $at, 0x437A
    ctx->r1 = S32(0X437A << 16);
    // 0x808001CC: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x808001D0: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808001D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001D8: lui         $a1, 0x437A
    ctx->r5 = S32(0X437A << 16);
    // 0x808001DC: jal         0x8009C554
    // 0x808001E0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    func_8009C554(rdram, ctx);
        goto after_9;
    // 0x808001E0: swc1        $f0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f0.u32l;
    after_9:
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E8: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x808001EC: jal         0x8009C99C
    // 0x808001F0: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8009C99C(rdram, ctx);
        goto after_10;
    // 0x808001F0: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_10:
L_808001F4:
    // 0x808001F4: jal         0x80084C90
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_3(rdram, ctx);
        goto after_11;
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808001FC: mul.s       $f6, $f0, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f0.fl);
    // 0x80800200: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800204: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x80800208: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(151, 0X16BC) << 16);
    // 0x8080020C: lwc1        $f14, 0x16BC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(151, 0X16BC));
    // 0x80800210: mfc1        $a2, $f2
    ctx->r6 = (int32_t)ctx->f2.u32l;
    // 0x80800214: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80800218: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8080021C: jal         0x800F10B4
    // 0x80800220: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    func_800F10B4(rdram, ctx);
        goto after_12;
    // 0x80800220: swc1        $f2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f2.u32l;
    after_12:
    // 0x80800224: mul.s       $f22, $f22, $f0
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f22.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f22.fl = MUL_S(ctx->f22.fl, ctx->f0.fl);
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080022C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80800230: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80800234: jal         0x8009BFE4
    // 0x80800238: nop

    func_8009BFE4(rdram, ctx);
        goto after_13;
    // 0x80800238: nop

    after_13:
    // 0x8080023C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80800240: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80800244: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80800248: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8080024C: jr          $ra
    // 0x80800250: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80800250: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80800254_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800254: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80800258: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080025C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800260: jal         0x800A3048
    // 0x80800264: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_800A3048(rdram, ctx);
        goto after_0;
    // 0x80800264: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800268: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8080026C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800270: nop

    // 0x80800274: mul.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f0.fl, ctx->f4.fl);
    // 0x80800278: jal         0x800D8FF8
    // 0x8080027C: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x8080027C: swc1        $f6, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80800280: swc1        $f0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f0.u32l;
    // 0x80800284: jal         0x8008E35C
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_2;
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080028C: beq         $v0, $zero, L_808002D0
    if (ctx->r2 == 0) {
        // 0x80800290: sw          $v0, 0x48($sp)
        MEM_W(0X48, ctx->r29) = ctx->r2;
            goto L_808002D0;
    }
    // 0x80800290: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800298: jal         0x8009BCB4
    // 0x8080029C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BCB4(rdram, ctx);
        goto after_3;
    // 0x8080029C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002A4: jal         0x8009BCC4
    // 0x808002A8: lui         $a1, 0xC57A
    ctx->r5 = S32(0XC57A << 16);
    func_8009BCC4(rdram, ctx);
        goto after_4;
    // 0x808002A8: lui         $a1, 0xC57A
    ctx->r5 = S32(0XC57A << 16);
    after_4:
    // 0x808002AC: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x808002B0: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x808002B4: jal         0x80084EF0
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovethrust_entrypoint_4(rdram, ctx);
        goto after_5;
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808002BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C0: jal         0x80084EE8
    // 0x808002C4: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    _bamovethrust_entrypoint_3(rdram, ctx);
        goto after_6;
    // 0x808002C4: lw          $a1, 0x16C($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X16C);
    after_6:
    // 0x808002C8: b           L_8080031C
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_8080031C;
    // 0x808002CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808002D0:
    // 0x808002D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002D4: jal         0x8009BCB4
    // 0x808002D8: lui         $a1, 0xC4E1
    ctx->r5 = S32(0XC4E1 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_7;
    // 0x808002D8: lui         $a1, 0xC4E1
    ctx->r5 = S32(0XC4E1 << 16);
    after_7:
    // 0x808002DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002E0: jal         0x8009BCC4
    // 0x808002E4: lui         $a1, 0xC57A
    ctx->r5 = S32(0XC57A << 16);
    func_8009BCC4(rdram, ctx);
        goto after_8;
    // 0x808002E4: lui         $a1, 0xC57A
    ctx->r5 = S32(0XC57A << 16);
    after_8:
    // 0x808002E8: lui         $a1, 0x3F73
    ctx->r5 = S32(0X3F73 << 16);
    // 0x808002EC: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x808002F0: jal         0x80084EF0
    // 0x808002F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovethrust_entrypoint_4(rdram, ctx);
        goto after_9;
    // 0x808002F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808002F8: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x808002FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800300: lwc1        $f8, 0x16C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800304: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800308: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8080030C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80800310: jal         0x80084EE8
    // 0x80800314: nop

    _bamovethrust_entrypoint_3(rdram, ctx);
        goto after_10;
    // 0x80800314: nop

    after_10:
    // 0x80800318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_8080031C:
    // 0x8080031C: jal         0x800919F4
    // 0x80800320: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800919F4(rdram, ctx);
        goto after_11;
    // 0x80800320: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_11:
    // 0x80800324: bnel        $v0, $zero, L_80800350
    if (ctx->r2 != 0) {
        // 0x80800328: lwc1        $f12, 0x16C($s0)
        ctx->f12.u32l = MEM_W(ctx->r16, 0X16C);
            goto L_80800350;
    }
    goto skip_0;
    // 0x80800328: lwc1        $f12, 0x16C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X16C);
    skip_0:
    // 0x8080032C: jal         0x80085190
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basub_entrypoint_2(rdram, ctx);
        goto after_12;
    // 0x80800330: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800334: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80800338: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8080033C: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x80800340: nop

    // 0x80800344: bc1t        L_80800360
    if (c1cs) {
        // 0x80800348: nop
    
            goto L_80800360;
    }
    // 0x80800348: nop

    // 0x8080034C: lwc1        $f12, 0x16C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X16C);
L_80800350:
    // 0x80800350: jal         0x80000030
    // 0x80800354: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    func_80800030_bssub(rdram, ctx);
        goto after_13;
    // 0x80800354: lwc1        $f14, 0x4C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X4C);
    after_13:
    // 0x80800358: b           L_8080036C
    // 0x8080035C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_8080036C;
    // 0x8080035C: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_80800360:
    // 0x80800360: jal         0x80000048
    // 0x80800364: lwc1        $f12, 0x16C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X16C);
    func_80800048_bssub(rdram, ctx);
        goto after_14;
    // 0x80800364: lwc1        $f12, 0x16C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X16C);
    after_14:
    // 0x80800368: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_8080036C:
    // 0x8080036C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800370: jal         0x80085190
    // 0x80800374: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    _basub_entrypoint_2(rdram, ctx);
        goto after_15;
    // 0x80800374: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    after_15:
    // 0x80800378: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080037C: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80800380: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800384: nop

    // 0x80800388: bc1t        L_808003B8
    if (c1cs) {
        // 0x8080038C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003B8;
    }
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800390: jal         0x80085190
    // 0x80800394: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    _basub_entrypoint_2(rdram, ctx);
        goto after_16;
    // 0x80800394: swc1        $f2, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f2.u32l;
    after_16:
    // 0x80800398: lwc1        $f2, 0x5C($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8080039C: lwc1        $f6, 0x16C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808003A0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808003A4: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x808003A8: jal         0x800F0D50
    // 0x808003AC: add.s       $f12, $f6, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f2.fl;
    func_800F0D50(rdram, ctx);
        goto after_17;
    // 0x808003AC: add.s       $f12, $f6, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f2.fl;
    after_17:
    // 0x808003B0: b           L_808003D0
    // 0x808003B4: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
        goto L_808003D0;
    // 0x808003B4: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
L_808003B8:
    // 0x808003B8: lwc1        $f8, 0x16C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808003BC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808003C0: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x808003C4: jal         0x800F0D50
    // 0x808003C8: add.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f2.fl;
    func_800F0D50(rdram, ctx);
        goto after_18;
    // 0x808003C8: add.s       $f12, $f8, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f12.fl = ctx->f8.fl + ctx->f2.fl;
    after_18:
    // 0x808003CC: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
L_808003D0:
    // 0x808003D0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(151, 0X16C0) << 16);
    // 0x808003D4: lwc1        $f10, 0x16C0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(151, 0X16C0));
    // 0x808003D8: lwc1        $f12, 0x16C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808003DC: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808003E0: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x808003E4: lui         $a3, 0x4348
    ctx->r7 = S32(0X4348 << 16);
    // 0x808003E8: jal         0x800F10B4
    // 0x808003EC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_800F10B4(rdram, ctx);
        goto after_19;
    // 0x808003EC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_19:
    // 0x808003F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808003F4: jal         0x800851E8
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basub_entrypoint_13(rdram, ctx);
        goto after_20;
    // 0x808003F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x808003FC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(151, 0X16C4) << 16);
    // 0x80800400: lwc1        $f16, 0x16C4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(151, 0X16C4));
    // 0x80800404: lwc1        $f12, 0x16C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800408: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8080040C: lui         $a3, 0x3F4C
    ctx->r7 = S32(0X3F4C << 16);
    // 0x80800410: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800414: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x80800418: jal         0x800F10B4
    // 0x8080041C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800F10B4(rdram, ctx);
        goto after_21;
    // 0x8080041C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_21:
    // 0x80800420: swc1        $f0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f0.u32l;
    // 0x80800424: jal         0x8009C990
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C990(rdram, ctx);
        goto after_22;
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x8080042C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800430: jal         0x8009C984
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_23;
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800438: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8080043C: jal         0x800F1DCC
    // 0x80800440: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    func_800F1DCC(rdram, ctx);
        goto after_24;
    // 0x80800440: mov.s       $f14, $f0
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    ctx->f14.fl = ctx->f0.fl;
    after_24:
    // 0x80800444: jal         0x800F2100
    // 0x80800448: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    func_800F2100(rdram, ctx);
        goto after_25;
    // 0x80800448: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_25:
    // 0x8080044C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(151, 0X16C8) << 16);
    // 0x80800450: lwc1        $f4, 0x16C8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(151, 0X16C8));
    // 0x80800454: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80800458: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8080045C: lui         $a2, 0x4300
    ctx->r6 = S32(0X4300 << 16);
    // 0x80800460: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80800464: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80800468: jal         0x800F10B4
    // 0x8080046C: div.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    func_800F10B4(rdram, ctx);
        goto after_26;
    // 0x8080046C: div.s       $f12, $f0, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = DIV_S(ctx->f0.fl, ctx->f18.fl);
    after_26:
    // 0x80800470: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80800474: lwc1        $f2, 0x50($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80800478: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(151, 0X16CC) << 16);
    // 0x8080047C: bne         $t6, $zero, L_8080048C
    if (ctx->r14 != 0) {
        // 0x80800480: add.s       $f2, $f2, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
            goto L_8080048C;
    }
    // 0x80800480: add.s       $f2, $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f0.fl;
    // 0x80800484: lwc1        $f6, 0x16CC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(151, 0X16CC));
    // 0x80800488: add.s       $f2, $f2, $f6
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f2.fl = ctx->f2.fl + ctx->f6.fl;
L_8080048C:
    // 0x8080048C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80800490: jal         0x800851D8
    // 0x80800494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basub_entrypoint_11(rdram, ctx);
        goto after_27;
    // 0x80800494: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80800498: jal         0x8009BFD8
    // 0x8080049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BFD8(rdram, ctx);
        goto after_28;
    // 0x8080049C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x808004A0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x808004A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808004A8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808004AC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808004B0: c.lt.s      $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f8.fl < ctx->f0.fl;
    // 0x808004B4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x808004B8: lui         $a2, 0x42AA
    ctx->r6 = S32(0X42AA << 16);
    // 0x808004BC: bc1fl       L_808004D4
    if (!c1cs) {
        // 0x808004C0: lui         $at, 0x4270
        ctx->r1 = S32(0X4270 << 16);
            goto L_808004D4;
    }
    goto skip_1;
    // 0x808004C0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    skip_1:
    // 0x808004C4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x808004C8: nop

    // 0x808004CC: sub.s       $f12, $f0, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f0.fl - ctx->f10.fl;
    // 0x808004D0: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
L_808004D4:
    // 0x808004D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808004D8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x808004DC: jal         0x800F1344
    // 0x808004E0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800F1344(rdram, ctx);
        goto after_29;
    // 0x808004E0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_29:
    // 0x808004E4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808004E8: jal         0x800851E0
    // 0x808004EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basub_entrypoint_12(rdram, ctx);
        goto after_30;
    // 0x808004EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x808004F0: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x808004F4: beql        $t7, $zero, L_80800580
    if (ctx->r15 == 0) {
        // 0x808004F8: mtc1        $zero, $f6
        ctx->f6.u32l = 0;
            goto L_80800580;
    }
    goto skip_2;
    // 0x808004F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    skip_2:
    // 0x808004FC: jal         0x80085190
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basub_entrypoint_2(rdram, ctx);
        goto after_31;
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_31:
    // 0x80800504: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80800508: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080050C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x80800510: c.eq.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl == ctx->f18.fl;
    // 0x80800514: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800518: bc1tl       L_80800534
    if (c1cs) {
        // 0x8080051C: mtc1        $at, $f12
        ctx->f12.u32l = ctx->r1;
            goto L_80800534;
    }
    goto skip_3;
    // 0x8080051C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    skip_3:
    // 0x80800520: jal         0x800914FC
    // 0x80800524: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800914FC(rdram, ctx);
        goto after_32;
    // 0x80800524: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_32:
    // 0x80800528: b           L_80800618
    // 0x8080052C: nop

        goto L_80800618;
    // 0x8080052C: nop

    // 0x80800530: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
L_80800534:
    // 0x80800534: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80800538: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8080053C: jal         0x800DC178
    // 0x80800540: nop

    func_800DC178(rdram, ctx);
        goto after_33;
    // 0x80800540: nop

    after_33:
    // 0x80800544: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80800548: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080054C: lwc1        $f12, 0x16C($s0)
    ctx->f12.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800550: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800554: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80800558: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x8080055C: jal         0x800F10B4
    // 0x80800560: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_34;
    // 0x80800560: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_34:
    // 0x80800564: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800568: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080056C: jal         0x800914FC
    // 0x80800570: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800914FC(rdram, ctx);
        goto after_35;
    // 0x80800570: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_35:
    // 0x80800574: b           L_80800618
    // 0x80800578: nop

        goto L_80800618;
    // 0x80800578: nop

    // 0x8080057C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
L_80800580:
    // 0x80800580: lwc1        $f8, 0x16C($s0)
    ctx->f8.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80800584: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80800588: nop

    // 0x8080058C: bc1f        L_80800618
    if (!c1cs) {
        // 0x80800590: nop
    
            goto L_80800618;
    }
    // 0x80800590: nop

    // 0x80800594: jal         0x8008E078
    // 0x80800598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_36;
    // 0x80800598: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_36:
    // 0x8080059C: beq         $v0, $zero, L_80800618
    if (ctx->r2 == 0) {
        // 0x808005A0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800618;
    }
    // 0x808005A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005A4: jal         0x8009C128
    // 0x808005A8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_8009C128(rdram, ctx);
        goto after_37;
    // 0x808005A8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_37:
    // 0x808005AC: jal         0x800B5BE4
    // 0x808005B0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_800B5BE4(rdram, ctx);
        goto after_38;
    // 0x808005B0: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_38:
    // 0x808005B4: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(151, 0X16E0) << 16);
    // 0x808005B8: addiu       $t8, $t8, 0x16E0
    ctx->r24 = ADD32(ctx->r24, (int16_t)RELOC_LO16(151, 0X16E0));
    // 0x808005BC: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x808005C0: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x808005C4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808005C8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x808005CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808005D0: jal         0x800BABB8
    // 0x808005D4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_39;
    // 0x808005D4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_39:
    // 0x808005D8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x808005DC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(151, 0X16D0) << 16);
    // 0x808005E0: jal         0x800DC178
    // 0x808005E4: lwc1        $f14, 0x16D0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(151, 0X16D0));
    func_800DC178(rdram, ctx);
        goto after_40;
    // 0x808005E4: lwc1        $f14, 0x16D0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(151, 0X16D0));
    after_40:
    // 0x808005E8: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x808005EC: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x808005F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808005F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x808005F8: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x808005FC: nop

    // 0x80800600: sll         $t0, $a3, 16
    ctx->r8 = S32(ctx->r7 << 16);
    // 0x80800604: jal         0x800BA77C
    // 0x80800608: sra         $a3, $t0, 16
    ctx->r7 = S32(SIGNED(ctx->r8) >> 16);
    func_800BA77C(rdram, ctx);
        goto after_41;
    // 0x80800608: sra         $a3, $t0, 16
    ctx->r7 = S32(SIGNED(ctx->r8) >> 16);
    after_41:
    // 0x8080060C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800610: jal         0x800BA22C
    // 0x80800614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_42;
    // 0x80800614: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_42:
L_80800618:
    // 0x80800618: jal         0x800000F0
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000F0_bssub(rdram, ctx);
        goto after_43;
    // 0x8080061C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_43:
    // 0x80800620: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800624: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800628: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x8080062C: jr          $ra
    // 0x80800630: nop

    return;
    // 0x80800630: nop

;}
RECOMP_FUNC void func_80800634_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800634: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800638: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8080063C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800640: jal         0x8009EF28
    // 0x80800644: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009EF28(rdram, ctx);
        goto after_0;
    // 0x80800644: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800648: jal         0x800D8FF8
    // 0x8080064C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    func_800D8FF8(rdram, ctx);
        goto after_1;
    // 0x8080064C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    after_1:
    // 0x80800650: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80800654: jal         0x8009BB94
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB94(rdram, ctx);
        goto after_2;
    // 0x80800658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x8080065C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80800660: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800664: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800668: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8080066C: lui         $a2, 0x4361
    ctx->r6 = S32(0X4361 << 16);
    // 0x80800670: lui         $a3, 0x4134
    ctx->r7 = S32(0X4134 << 16);
    // 0x80800674: jal         0x800F10B4
    // 0x80800678: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_3;
    // 0x80800678: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x8080067C: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x80800680: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80800684: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800688: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8080068C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80800690: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800694: jal         0x800F10B4
    // 0x80800698: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    func_800F10B4(rdram, ctx);
        goto after_4;
    // 0x80800698: swc1        $f0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f0.u32l;
    after_4:
    // 0x8080069C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808006A0: jal         0x8009C4CC
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C4CC(rdram, ctx);
        goto after_5;
    // 0x808006A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808006A8: jal         0x8008E35C
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_6;
    // 0x808006AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808006B0: beq         $v0, $zero, L_808006EC
    if (ctx->r2 == 0) {
        // 0x808006B4: lui         $at, 0x4396
        ctx->r1 = S32(0X4396 << 16);
            goto L_808006EC;
    }
    // 0x808006B4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x808006B8: jal         0x8009BB94
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB94(rdram, ctx);
        goto after_7;
    // 0x808006BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808006C0: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x808006C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x808006C8: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x808006CC: lui         $a3, 0x422A
    ctx->r7 = S32(0X422A << 16);
    // 0x808006D0: ori         $a3, $a3, 0xAAAB
    ctx->r7 = ctx->r7 | 0XAAAB;
    // 0x808006D4: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808006D8: lui         $a2, 0x4361
    ctx->r6 = S32(0X4361 << 16);
    // 0x808006DC: jal         0x800F10B4
    // 0x808006E0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_8;
    // 0x808006E0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x808006E4: b           L_808006F4
    // 0x808006E8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
        goto L_808006F4;
    // 0x808006E8: mov.s       $f2, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 0);
    ctx->f2.fl = ctx->f0.fl;
L_808006EC:
    // 0x808006EC: mtc1        $at, $f2
    ctx->f2.u32l = ctx->r1;
    // 0x808006F0: nop

L_808006F4:
    // 0x808006F4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x808006F8: neg.s       $f10, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = -ctx->f2.fl;
    // 0x808006FC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800700: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x80800704: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80800708: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8080070C: jal         0x800F10B4
    // 0x80800710: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_800F10B4(rdram, ctx);
        goto after_9;
    // 0x80800710: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_9:
    // 0x80800714: lwc1        $f16, 0x30($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080071C: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80800720: jal         0x80084C90
    // 0x80800724: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    _bafpctrl_entrypoint_3(rdram, ctx);
        goto after_10;
    // 0x80800724: swc1        $f18, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x80800728: lwc1        $f4, 0x3C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8080072C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800730: mul.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f0.fl);
    // 0x80800734: jal         0x8009C990
    // 0x80800738: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    func_8009C990(rdram, ctx);
        goto after_11;
    // 0x80800738: swc1        $f6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f6.u32l;
    after_11:
    // 0x8080073C: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80800740: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800744: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x80800748: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x8080074C: jal         0x8009C914
    // 0x80800750: nop

    func_8009C914(rdram, ctx);
        goto after_12;
    // 0x80800750: nop

    after_12:
    // 0x80800754: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800758: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080075C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80800760: jr          $ra
    // 0x80800764: nop

    return;
    // 0x80800764: nop

;}
RECOMP_FUNC void func_80800768_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800768: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8080076C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800770: jal         0x8008E35C
    // 0x80800774: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    func_8008E35C(rdram, ctx);
        goto after_0;
    // 0x80800774: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800778: beq         $v0, $zero, L_80800798
    if (ctx->r2 == 0) {
        // 0x8080077C: lw          $a0, 0x30($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X30);
            goto L_80800798;
    }
    // 0x8080077C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800780: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(151, 0X16D4) << 16);
    // 0x80800784: lwc1        $f2, 0x16D4($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(151, 0X16D4));
    // 0x80800788: lui         $at, 0x42AA
    ctx->r1 = S32(0X42AA << 16);
    // 0x8080078C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80800790: b           L_808007B0
    // 0x80800794: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
        goto L_808007B0;
    // 0x80800794: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
L_80800798:
    // 0x80800798: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(151, 0X16D8) << 16);
    // 0x8080079C: lwc1        $f2, 0x16D8($at)
    ctx->f2.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(151, 0X16D8));
    // 0x808007A0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x808007A4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808007A8: nop

    // 0x808007AC: swc1        $f2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f2.u32l;
L_808007B0:
    // 0x808007B0: jal         0x8009EF34
    // 0x808007B4: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    func_8009EF34(rdram, ctx);
        goto after_1;
    // 0x808007B4: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    after_1:
    // 0x808007B8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808007BC: lwc1        $f2, 0x28($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808007C0: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x808007C4: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x808007C8: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808007CC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x808007D0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808007D4: bc1f        L_8080080C
    if (!c1cs) {
        // 0x808007D8: addiu       $a3, $zero, 0x0
        ctx->r7 = ADD32(0, 0X0);
            goto L_8080080C;
    }
    // 0x808007D8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x808007DC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808007E0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x808007E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808007E8: mfc1        $a3, $f2
    ctx->r7 = (int32_t)ctx->f2.u32l;
    // 0x808007EC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x808007F0: jal         0x800F10B4
    // 0x808007F4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_2;
    // 0x808007F4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_2:
    // 0x808007F8: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808007FC: jal         0x8009BF5C
    // 0x80800800: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8009BF5C(rdram, ctx);
        goto after_3;
    // 0x80800800: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x80800804: b           L_80800828
    // 0x80800808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800828;
    // 0x80800808: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080080C:
    // 0x8080080C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800810: jal         0x800F10B4
    // 0x80800814: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    func_800F10B4(rdram, ctx);
        goto after_4;
    // 0x80800814: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x80800818: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080081C: jal         0x8009BF5C
    // 0x80800820: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8009BF5C(rdram, ctx);
        goto after_5;
    // 0x80800820: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_5:
    // 0x80800824: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800828:
    // 0x80800828: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8080082C: jr          $ra
    // 0x80800830: nop

    return;
    // 0x80800830: nop

;}
RECOMP_FUNC void func_80800834_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800834: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800838: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080083C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800840: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800844: jal         0x80091A58
    // 0x80800848: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x80800848: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x8080084C: beql        $v0, $zero, L_80800860
    if (ctx->r2 == 0) {
        // 0x80800850: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800860;
    }
    goto skip_0;
    // 0x80800850: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800854: jal         0x80085188
    // 0x80800858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basub_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800858: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080085C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800860:
    // 0x80800860: jal         0x80091A58
    // 0x80800864: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A58(rdram, ctx);
        goto after_2;
    // 0x80800864: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800868: beql        $v0, $zero, L_80800888
    if (ctx->r2 == 0) {
        // 0x8080086C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800888;
    }
    goto skip_1;
    // 0x8080086C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80800870: jal         0x8009BB94
    // 0x80800874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB94(rdram, ctx);
        goto after_3;
    // 0x80800874: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800878: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8080087C: jal         0x800851C0
    // 0x80800880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basub_entrypoint_8(rdram, ctx);
        goto after_4;
    // 0x80800880: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800888:
    // 0x80800888: jal         0x80091A58
    // 0x8080088C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_5;
    // 0x8080088C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_5:
    // 0x80800890: beql        $v0, $zero, L_808008C8
    if (ctx->r2 == 0) {
        // 0x80800894: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808008C8;
    }
    goto skip_2;
    // 0x80800894: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80800898: jal         0x800EA068
    // 0x8080089C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_800EA068(rdram, ctx);
        goto after_6;
    // 0x8080089C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_6:
    // 0x808008A0: beq         $v0, $zero, L_808008BC
    if (ctx->r2 == 0) {
        // 0x808008A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808008BC;
    }
    // 0x808008A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008A8: lui         $a1, 0x4320
    ctx->r5 = S32(0X4320 << 16);
    // 0x808008AC: jal         0x80085198
    // 0x808008B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    _basub_entrypoint_3(rdram, ctx);
        goto after_7;
    // 0x808008B0: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_7:
    // 0x808008B4: b           L_808008C8
    // 0x808008B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808008C8;
    // 0x808008B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808008BC:
    // 0x808008BC: jal         0x800851A8
    // 0x808008C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basub_entrypoint_5(rdram, ctx);
        goto after_8;
    // 0x808008C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808008C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808008C8:
    // 0x808008C8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808008CC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808008D0: jr          $ra
    // 0x808008D4: nop

    return;
    // 0x808008D4: nop

;}
RECOMP_FUNC void func_808008D8_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808008DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808008E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808008E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808008E8: jal         0x8009E74C
    // 0x808008EC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x808008EC: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x808008F0: bne         $v0, $zero, L_8080099C
    if (ctx->r2 != 0) {
        // 0x808008F4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080099C;
    }
    // 0x808008F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808008FC: jal         0x800947EC
    // 0x80800900: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800947EC(rdram, ctx);
        goto after_1;
    // 0x80800900: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80800904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800908: jal         0x800961AC
    // 0x8080090C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_2;
    // 0x8080090C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800910: jal         0x8009BC34
    // 0x80800914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC34(rdram, ctx);
        goto after_3;
    // 0x80800914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800918: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080091C: jal         0x8009BF5C
    // 0x80800920: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_4;
    // 0x80800920: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800924: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800928: jal         0x8009C4CC
    // 0x8080092C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_5;
    // 0x8080092C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_5:
    // 0x80800930: jal         0x8009C000
    // 0x80800934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C000(rdram, ctx);
        goto after_6;
    // 0x80800934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800938: jal         0x8009C570
    // 0x8080093C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C570(rdram, ctx);
        goto after_7;
    // 0x8080093C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800940: jal         0x8009F1E0
    // 0x80800944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F1E0(rdram, ctx);
        goto after_8;
    // 0x80800944: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800948: jal         0x80095A40
    // 0x8080094C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80095A40(rdram, ctx);
        goto after_9;
    // 0x8080094C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800954: jal         0x80095964
    // 0x80800958: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80095964(rdram, ctx);
        goto after_10;
    // 0x80800958: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x8080095C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800960: jal         0x80093360
    // 0x80800964: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_80093360(rdram, ctx);
        goto after_11;
    // 0x80800964: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
    // 0x80800968: jal         0x800851C8
    // 0x8080096C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basub_entrypoint_9(rdram, ctx);
        goto after_12;
    // 0x8080096C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80800970: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800974: jal         0x800910BC
    // 0x80800978: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800910BC(rdram, ctx);
        goto after_13;
    // 0x80800978: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_13:
    // 0x8080097C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800980: jal         0x80084D08
    // 0x80800984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bafpctrl_entrypoint_18(rdram, ctx);
        goto after_14;
    // 0x80800984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x80800988: jal         0x8009E474
    // 0x8080098C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_15;
    // 0x8080098C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800994: jal         0x80092864
    // 0x80800998: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_80092864(rdram, ctx);
        goto after_16;
    // 0x80800998: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_16:
L_8080099C:
    // 0x8080099C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808009A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808009A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808009A8: jr          $ra
    // 0x808009AC: nop

    return;
    // 0x808009AC: nop

;}
RECOMP_FUNC void func_808009B0_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808009B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808009B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808009BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808009C0: jal         0x8009E77C
    // 0x808009C4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x808009C4: addiu       $a1, $zero, 0xF
    ctx->r5 = ADD32(0, 0XF);
    after_0:
    // 0x808009C8: bnel        $v0, $zero, L_80800ADC
    if (ctx->r2 != 0) {
        // 0x808009CC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800ADC;
    }
    goto skip_0;
    // 0x808009CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x808009D0: jal         0x800851D0
    // 0x808009D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basub_entrypoint_10(rdram, ctx);
        goto after_1;
    // 0x808009D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808009D8: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x808009DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009E0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x808009E4: swc1        $f0, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f0.u32l;
    // 0x808009E8: jal         0x8009BCB4
    // 0x808009EC: swc1        $f0, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f0.u32l;
    func_8009BCB4(rdram, ctx);
        goto after_2;
    // 0x808009EC: swc1        $f0, 0x170($s0)
    MEM_W(0X170, ctx->r16) = ctx->f0.u32l;
    after_2:
    // 0x808009F0: lui         $a1, 0xC3C7
    ctx->r5 = S32(0XC3C7 << 16);
    // 0x808009F4: ori         $a1, $a1, 0xFEB8
    ctx->r5 = ctx->r5 | 0XFEB8;
    // 0x808009F8: jal         0x8009BCC4
    // 0x808009FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_3;
    // 0x808009FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800A00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A04: jal         0x800961AC
    // 0x80800A08: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_800961AC(rdram, ctx);
        goto after_4;
    // 0x80800A08: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_4:
    // 0x80800A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A10: jal         0x80095964
    // 0x80800A14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80095964(rdram, ctx);
        goto after_5;
    // 0x80800A14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x80800A18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A1C: jal         0x8009BC5C
    // 0x80800A20: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8009BC5C(rdram, ctx);
        goto after_6;
    // 0x80800A20: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_6:
    // 0x80800A24: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x80800A28: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A30: jal         0x8009F1C8
    // 0x80800A34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_7;
    // 0x80800A34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
    // 0x80800A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800A40: jal         0x8009F1C8
    // 0x80800A44: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_8;
    // 0x80800A44: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_8:
    // 0x80800A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A4C: lui         $a1, 0x42B4
    ctx->r5 = S32(0X42B4 << 16);
    // 0x80800A50: jal         0x800959C8
    // 0x80800A54: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    func_800959C8(rdram, ctx);
        goto after_9;
    // 0x80800A54: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    after_9:
    // 0x80800A58: jal         0x8009E4AC
    // 0x80800A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_10;
    // 0x80800A5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800A60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800A68: jal         0x8009E55C
    // 0x80800A6C: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    func_8009E55C(rdram, ctx);
        goto after_11;
    // 0x80800A6C: lui         $a2, 0x428C
    ctx->r6 = S32(0X428C << 16);
    after_11:
    // 0x80800A70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A74: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800A78: jal         0x8009E55C
    // 0x80800A7C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_12;
    // 0x80800A7C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_12:
    // 0x80800A80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A84: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800A88: jal         0x8009E55C
    // 0x80800A8C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_13;
    // 0x80800A8C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_13:
    // 0x80800A90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A94: jal         0x80093360
    // 0x80800A98: lui         $a1, 0x425C
    ctx->r5 = S32(0X425C << 16);
    func_80093360(rdram, ctx);
        goto after_14;
    // 0x80800A98: lui         $a1, 0x425C
    ctx->r5 = S32(0X425C << 16);
    after_14:
    // 0x80800A9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AA0: jal         0x800910BC
    // 0x80800AA4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_800910BC(rdram, ctx);
        goto after_15;
    // 0x80800AA4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_15:
    // 0x80800AA8: jal         0x800000F0
    // 0x80800AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808000F0_bssub(rdram, ctx);
        goto after_16;
    // 0x80800AAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AB4: jal         0x80084D08
    // 0x80800AB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bafpctrl_entrypoint_18(rdram, ctx);
        goto after_17;
    // 0x80800AB8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_17:
    // 0x80800ABC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800AC4: jal         0x800947EC
    // 0x80800AC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800947EC(rdram, ctx);
        goto after_18;
    // 0x80800AC8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_18:
    // 0x80800ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AD0: jal         0x80092864
    // 0x80800AD4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_80092864(rdram, ctx);
        goto after_19;
    // 0x80800AD4: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_19:
    // 0x80800AD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800ADC:
    // 0x80800ADC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800AE0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800AE4: jr          $ra
    // 0x80800AE8: nop

    return;
    // 0x80800AE8: nop

;}
RECOMP_FUNC void func_80800AEC_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AEC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800AF0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AF4: jal         0x800851F0
    // 0x80800AF8: nop

    _basub_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800AF8: nop

    after_0:
    // 0x80800AFC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B04: jr          $ra
    // 0x80800B08: nop

    return;
    // 0x80800B08: nop

;}
RECOMP_FUNC void func_80800B0C_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B0C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B14: jal         0x80085148
    // 0x80800B18: nop

    _baspin_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800B18: nop

    after_0:
    // 0x80800B1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B20: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B24: jr          $ra
    // 0x80800B28: nop

    return;
    // 0x80800B28: nop

;}
RECOMP_FUNC void func_80800B2C_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800B30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800B34: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800B38: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B3C: addiu       $a1, $zero, 0x12E
    ctx->r5 = ADD32(0, 0X12E);
    // 0x80800B40: jal         0x8008CB3C
    // 0x80800B44: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_0;
    // 0x80800B44: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    after_0:
    // 0x80800B48: jal         0x80000000
    // 0x80800B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bssub(rdram, ctx);
        goto after_1;
    // 0x80800B4C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B54: jal         0x80084EE8
    // 0x80800B58: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    _bamovethrust_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80800B58: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800B5C: lui         $a1, 0x3F66
    ctx->r5 = S32(0X3F66 << 16);
    // 0x80800B60: ori         $a1, $a1, 0x6666
    ctx->r5 = ctx->r5 | 0X6666;
    // 0x80800B64: jal         0x80084EF0
    // 0x80800B68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bamovethrust_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x80800B68: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800B6C: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x80800B70: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800B74: jal         0x800851D8
    // 0x80800B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basub_entrypoint_11(rdram, ctx);
        goto after_4;
    // 0x80800B78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B80: jal         0x800851E8
    // 0x80800B84: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    _basub_entrypoint_13(rdram, ctx);
        goto after_5;
    // 0x80800B84: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_5:
    // 0x80800B88: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800B8C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800B90: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800B94: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800B98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800B9C: addiu       $a1, $zero, 0x130
    ctx->r5 = ADD32(0, 0X130);
    // 0x80800BA0: jal         0x80085150
    // 0x80800BA4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    _baspin_entrypoint_2(rdram, ctx);
        goto after_6;
    // 0x80800BA4: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_6:
    // 0x80800BA8: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800BAC: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800BB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BB4: jal         0x80085338
    // 0x80800BB8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    _batimer_set(rdram, ctx);
        goto after_7;
    // 0x80800BB8: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_7:
    // 0x80800BBC: jal         0x800FC660
    // 0x80800BC0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    func_800FC660(rdram, ctx);
        goto after_8;
    // 0x80800BC0: addiu       $a0, $zero, 0x19
    ctx->r4 = ADD32(0, 0X19);
    after_8:
    // 0x80800BC4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800BC8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800BCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800BD0: jr          $ra
    // 0x80800BD4: nop

    return;
    // 0x80800BD4: nop

;}
RECOMP_FUNC void func_80800BD8_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800BD8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800BDC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800BE0: jal         0x80085158
    // 0x80800BE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _baspin_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80800BE4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800BE8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800BEC: jal         0x800852F0
    // 0x80800BF0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    _batimer_decrement(rdram, ctx);
        goto after_1;
    // 0x80800BF0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_1:
    // 0x80800BF4: beq         $v0, $zero, L_80800C0C
    if (ctx->r2 == 0) {
        // 0x80800BF8: addiu       $a0, $zero, 0x2C4
        ctx->r4 = ADD32(0, 0X2C4);
            goto L_80800C0C;
    }
    // 0x80800BF8: addiu       $a0, $zero, 0x2C4
    ctx->r4 = ADD32(0, 0X2C4);
    // 0x80800BFC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800C00: addiu       $a1, $zero, 0x71
    ctx->r5 = ADD32(0, 0X71);
    // 0x80800C04: jal         0x80101180
    // 0x80800C08: lw          $a2, 0x184($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X184);
    func_80101180(rdram, ctx);
        goto after_2;
    // 0x80800C08: lw          $a2, 0x184($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X184);
    after_2:
L_80800C0C:
    // 0x80800C0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C14: jr          $ra
    // 0x80800C18: nop

    return;
    // 0x80800C18: nop

;}
RECOMP_FUNC void func_80800C1C_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800C20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800C24: lw          $t6, 0x15C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X15C);
    // 0x80800C28: beq         $t6, $zero, L_80800C40
    if (ctx->r14 == 0) {
        // 0x80800C2C: nop
    
            goto L_80800C40;
    }
    // 0x80800C2C: nop

    // 0x80800C30: jal         0x80000B0C
    // 0x80800C34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800B0C_bssub(rdram, ctx);
        goto after_0;
    // 0x80800C34: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800C38: b           L_80800C48
    // 0x80800C3C: nop

        goto L_80800C48;
    // 0x80800C3C: nop

L_80800C40:
    // 0x80800C40: jal         0x80085240
    // 0x80800C44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _basudie_entrypoint_8(rdram, ctx);
        goto after_1;
    // 0x80800C44: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
L_80800C48:
    // 0x80800C48: jal         0x800008D8
    // 0x80800C4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808008D8_bssub(rdram, ctx);
        goto after_2;
    // 0x80800C4C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800C50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800C54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800C58: jr          $ra
    // 0x80800C5C: nop

    return;
    // 0x80800C5C: nop

;}
RECOMP_FUNC void func_80800C60_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800C60: addiu       $sp, $sp, -0x88
    ctx->r29 = ADD32(ctx->r29, -0X88);
    // 0x80800C64: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x80800C68: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x80800C6C: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x80800C70: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x80800C74: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80800C78: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80800C7C: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80800C80: sw          $a0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r4;
    // 0x80800C84: addiu       $a1, $zero, 0x413
    ctx->r5 = ADD32(0, 0X413);
    // 0x80800C88: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800C8C: jal         0x8009DB04
    // 0x80800C90: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DB04(rdram, ctx);
        goto after_0;
    // 0x80800C90: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_0:
    // 0x80800C94: jal         0x8009D9D4
    // 0x80800C98: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    func_8009D9D4(rdram, ctx);
        goto after_1;
    // 0x80800C98: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    after_1:
    // 0x80800C9C: addiu       $s2, $sp, 0x54
    ctx->r18 = ADD32(ctx->r29, 0X54);
    // 0x80800CA0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80800CA4: jal         0x8009C128
    // 0x80800CA8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    func_8009C128(rdram, ctx);
        goto after_2;
    // 0x80800CA8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    after_2:
    // 0x80800CAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800CB0: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x80800CB4: lui         $t6, 0x0
    ctx->r14 = S32(RELOC_HI16(151, 0X17A0) << 16);
    // 0x80800CB8: addiu       $t6, $t6, 0x17A0
    ctx->r14 = ADD32(ctx->r14, (int16_t)RELOC_LO16(151, 0X17A0));
    // 0x80800CBC: mfc1        $a2, $f20
    ctx->r6 = (int32_t)ctx->f20.u32l;
    // 0x80800CC0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800CC4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800CC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800CCC: jal         0x800BBCB8
    // 0x80800CD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_800BBCB8(rdram, ctx);
        goto after_3;
    // 0x80800CD0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x80800CD4: lui         $s1, 0x0
    ctx->r17 = S32(RELOC_HI16(151, 0X1840) << 16);
    // 0x80800CD8: lui         $s3, 0x0
    ctx->r19 = S32(RELOC_HI16(151, 0X172C) << 16);
    // 0x80800CDC: addiu       $s3, $s3, 0x172C
    ctx->r19 = ADD32(ctx->r19, (int16_t)RELOC_LO16(151, 0X172C));
    // 0x80800CE0: addiu       $s1, $s1, 0x1840
    ctx->r17 = ADD32(ctx->r17, (int16_t)RELOC_LO16(151, 0X1840));
    // 0x80800CE4: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
    // 0x80800CE8: addiu       $s4, $sp, 0x88
    ctx->r20 = ADD32(ctx->r29, 0X88);
L_80800CEC:
    // 0x80800CEC: jal         0x800B53A4
    // 0x80800CF0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    func_800B53A4(rdram, ctx);
        goto after_4;
    // 0x80800CF0: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_4:
    // 0x80800CF4: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
    // 0x80800CF8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800CFC: jal         0x800BA670
    // 0x80800D00: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    func_800BA670(rdram, ctx);
        goto after_5;
    // 0x80800D00: lw          $a1, 0x4($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X4);
    after_5:
    // 0x80800D04: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80800D08: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800D0C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x80800D10: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80800D14: jal         0x800BABB8
    // 0x80800D18: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800BABB8(rdram, ctx);
        goto after_6;
    // 0x80800D18: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_6:
    // 0x80800D1C: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80800D20: sltu        $at, $s0, $s4
    ctx->r1 = ctx->r16 < ctx->r20 ? 1 : 0;
    // 0x80800D24: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80800D28: bne         $at, $zero, L_80800CEC
    if (ctx->r1 != 0) {
        // 0x80800D2C: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_80800CEC;
    }
    // 0x80800D2C: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x80800D30: jal         0x8008E35C
    // 0x80800D34: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    func_8008E35C(rdram, ctx);
        goto after_7;
    // 0x80800D34: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    after_7:
    // 0x80800D38: beq         $v0, $zero, L_80800DB8
    if (ctx->r2 == 0) {
        // 0x80800D3C: addiu       $s0, $sp, 0x60
        ctx->r16 = ADD32(ctx->r29, 0X60);
            goto L_80800DB8;
    }
    // 0x80800D3C: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
    // 0x80800D40: jal         0x800964DC
    // 0x80800D44: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    func_800964DC(rdram, ctx);
        goto after_8;
    // 0x80800D44: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    after_8:
    // 0x80800D48: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800D4C: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800D50: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80800D54: jal         0x800889D0
    // 0x80800D58: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    _fxairbub_entrypoint_1(rdram, ctx);
        goto after_9;
    // 0x80800D58: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_9:
    // 0x80800D5C: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(151, 0X17CC) << 16);
    // 0x80800D60: addiu       $t7, $t7, 0x17CC
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(151, 0X17CC));
    // 0x80800D64: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800D68: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800D6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800D70: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80800D74: jal         0x800BABB8
    // 0x80800D78: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800BABB8(rdram, ctx);
        goto after_10;
    // 0x80800D78: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_10:
    // 0x80800D7C: lui         $s1, 0x0
    ctx->r17 = S32(RELOC_HI16(151, 0X1748) << 16);
    // 0x80800D80: addiu       $s1, $s1, 0x1748
    ctx->r17 = ADD32(ctx->r17, (int16_t)RELOC_LO16(151, 0X1748));
    // 0x80800D84: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
    // 0x80800D88: addiu       $s3, $sp, 0x88
    ctx->r19 = ADD32(ctx->r29, 0X88);
L_80800D8C:
    // 0x80800D8C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80800D90: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800D94: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x80800D98: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80800D9C: jal         0x800BABB8
    // 0x80800DA0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800BABB8(rdram, ctx);
        goto after_11;
    // 0x80800DA0: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_11:
    // 0x80800DA4: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80800DA8: bne         $s0, $s3, L_80800D8C
    if (ctx->r16 != ctx->r19) {
        // 0x80800DAC: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_80800D8C;
    }
    // 0x80800DAC: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
    // 0x80800DB0: b           L_80800DE8
    // 0x80800DB4: nop

        goto L_80800DE8;
    // 0x80800DB4: nop

L_80800DB8:
    // 0x80800DB8: lui         $s1, 0x0
    ctx->r17 = S32(RELOC_HI16(151, 0X1774) << 16);
    // 0x80800DBC: addiu       $s1, $s1, 0x1774
    ctx->r17 = ADD32(ctx->r17, (int16_t)RELOC_LO16(151, 0X1774));
    // 0x80800DC0: addiu       $s3, $sp, 0x88
    ctx->r19 = ADD32(ctx->r29, 0X88);
L_80800DC4:
    // 0x80800DC4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80800DC8: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x80800DCC: sw          $s1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r17;
    // 0x80800DD0: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80800DD4: jal         0x800BABB8
    // 0x80800DD8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800BABB8(rdram, ctx);
        goto after_12;
    // 0x80800DD8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_12:
    // 0x80800DDC: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80800DE0: bne         $s0, $s3, L_80800DC4
    if (ctx->r16 != ctx->r19) {
        // 0x80800DE4: sw          $v0, -0x4($s0)
        MEM_W(-0X4, ctx->r16) = ctx->r2;
            goto L_80800DC4;
    }
    // 0x80800DE4: sw          $v0, -0x4($s0)
    MEM_W(-0X4, ctx->r16) = ctx->r2;
L_80800DE8:
    // 0x80800DE8: lui         $s1, 0x0
    ctx->r17 = S32(RELOC_HI16(151, 0X1840) << 16);
    // 0x80800DEC: addiu       $s1, $s1, 0x1840
    ctx->r17 = ADD32(ctx->r17, (int16_t)RELOC_LO16(151, 0X1840));
    // 0x80800DF0: addiu       $s0, $sp, 0x60
    ctx->r16 = ADD32(ctx->r29, 0X60);
    // 0x80800DF4: addiu       $s2, $sp, 0x88
    ctx->r18 = ADD32(ctx->r29, 0X88);
L_80800DF8:
    // 0x80800DF8: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80800DFC: jal         0x800BA22C
    // 0x80800E00: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    func_800BA22C(rdram, ctx);
        goto after_13;
    // 0x80800E00: lw          $a1, 0x0($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X0);
    after_13:
    // 0x80800E04: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x80800E08: bne         $s0, $s2, L_80800DF8
    if (ctx->r16 != ctx->r18) {
        // 0x80800E0C: addiu       $s1, $s1, 0x8
        ctx->r17 = ADD32(ctx->r17, 0X8);
            goto L_80800DF8;
    }
    // 0x80800E0C: addiu       $s1, $s1, 0x8
    ctx->r17 = ADD32(ctx->r17, 0X8);
    // 0x80800E10: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
    // 0x80800E14: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80800E18: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80800E1C: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80800E20: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80800E24: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80800E28: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80800E2C: jr          $ra
    // 0x80800E30: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
    return;
    // 0x80800E30: addiu       $sp, $sp, 0x88
    ctx->r29 = ADD32(ctx->r29, 0X88);
;}
RECOMP_FUNC void func_80800E34_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800E38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800E3C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800E40: jal         0x800009B0
    // 0x80800E44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808009B0_bssub(rdram, ctx);
        goto after_0;
    // 0x80800E44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800E48: jal         0x800EA068
    // 0x80800E4C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_800EA068(rdram, ctx);
        goto after_1;
    // 0x80800E4C: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_1:
    // 0x80800E50: beq         $v0, $zero, L_80800E68
    if (ctx->r2 == 0) {
        // 0x80800E54: sw          $v0, 0x15C($s0)
        MEM_W(0X15C, ctx->r16) = ctx->r2;
            goto L_80800E68;
    }
    // 0x80800E54: sw          $v0, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r2;
    // 0x80800E58: jal         0x80000B2C
    // 0x80800E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800B2C_bssub(rdram, ctx);
        goto after_2;
    // 0x80800E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800E60: b           L_80800E88
    // 0x80800E64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800E88;
    // 0x80800E64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800E68:
    // 0x80800E68: jal         0x80084D10
    // 0x80800E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bafpctrl_entrypoint_19(rdram, ctx);
        goto after_3;
    // 0x80800E6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E74: jal         0x80085248
    // 0x80800E78: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    _basudie_entrypoint_9(rdram, ctx);
        goto after_4;
    // 0x80800E78: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_4:
    // 0x80800E7C: jal         0x80000C60
    // 0x80800E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800C60_bssub(rdram, ctx);
        goto after_5;
    // 0x80800E80: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800E84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800E88:
    // 0x80800E88: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800E8C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800E90: jr          $ra
    // 0x80800E94: nop

    return;
    // 0x80800E94: nop

;}
RECOMP_FUNC void func_80800E98_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800E98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800E9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800EA0: jal         0x80000AEC
    // 0x80800EA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800AEC_bssub(rdram, ctx);
        goto after_0;
    // 0x80800EA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800EA8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800EAC: lw          $t6, 0x15C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X15C);
    // 0x80800EB0: beq         $t6, $zero, L_80800EC8
    if (ctx->r14 == 0) {
        // 0x80800EB4: nop
    
            goto L_80800EC8;
    }
    // 0x80800EB4: nop

    // 0x80800EB8: jal         0x80000BD8
    // 0x80800EBC: nop

    func_80800BD8_bssub(rdram, ctx);
        goto after_1;
    // 0x80800EBC: nop

    after_1:
    // 0x80800EC0: b           L_80800ED4
    // 0x80800EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800ED4;
    // 0x80800EC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800EC8:
    // 0x80800EC8: jal         0x80085250
    // 0x80800ECC: nop

    _basudie_entrypoint_10(rdram, ctx);
        goto after_2;
    // 0x80800ECC: nop

    after_2:
    // 0x80800ED0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800ED4:
    // 0x80800ED4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800ED8: jr          $ra
    // 0x80800EDC: nop

    return;
    // 0x80800EDC: nop

;}
RECOMP_FUNC void func_80800EE0_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EE0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800EE4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800EE8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800EEC: jal         0x8009E6EC
    // 0x80800EF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800EF0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800EF4: addiu       $at, $zero, 0x83
    ctx->r1 = ADD32(0, 0X83);
    // 0x80800EF8: bne         $v0, $at, L_80800F40
    if (ctx->r2 != ctx->r1) {
        // 0x80800EFC: nop
    
            goto L_80800F40;
    }
    // 0x80800EFC: nop

    // 0x80800F00: jal         0x80099A34
    // 0x80800F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80099A34(rdram, ctx);
        goto after_1;
    // 0x80800F04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800F08: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800F0C: jal         0x8009BDAC
    // 0x80800F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BDAC(rdram, ctx);
        goto after_2;
    // 0x80800F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800F14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F18: jal         0x80093370
    // 0x80800F1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80093370(rdram, ctx);
        goto after_3;
    // 0x80800F1C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800F20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F24: jal         0x8009E5C8
    // 0x80800F28: addiu       $a1, $zero, 0x131
    ctx->r5 = ADD32(0, 0X131);
    func_8009E5C8(rdram, ctx);
        goto after_4;
    // 0x80800F28: addiu       $a1, $zero, 0x131
    ctx->r5 = ADD32(0, 0X131);
    after_4:
    // 0x80800F2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F30: jal         0x8009E830
    // 0x80800F34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_5;
    // 0x80800F34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_5:
    // 0x80800F38: b           L_80800F4C
    // 0x80800F3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80800F4C;
    // 0x80800F3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800F40:
    // 0x80800F40: jal         0x80085258
    // 0x80800F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _basudie_entrypoint_11(rdram, ctx);
        goto after_6;
    // 0x80800F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800F48: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800F4C:
    // 0x80800F4C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800F50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800F54: jr          $ra
    // 0x80800F58: nop

    return;
    // 0x80800F58: nop

;}
RECOMP_FUNC void bssub_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F5C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800F60: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(151, 0X1890) << 16);
    // 0x80800F64: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800F68: jr          $ra
    // 0x80800F6C: lw          $v0, 0x1890($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X1890));
    return;
    // 0x80800F6C: lw          $v0, 0x1890($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X1890));
;}
RECOMP_FUNC void func_80800F70_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800F78: jal         0x80082FF0
    // 0x80800F7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800F7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800F80: jal         0x800008D8
    // 0x80800F84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808008D8_bssub(rdram, ctx);
        goto after_1;
    // 0x80800F84: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800F88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800F8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800F90: jr          $ra
    // 0x80800F94: nop

    return;
    // 0x80800F94: nop

;}
RECOMP_FUNC void func_80800F98_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800F98: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800F9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800FA0: jal         0x800009B0
    // 0x80800FA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808009B0_bssub(rdram, ctx);
        goto after_0;
    // 0x80800FA4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800FA8: jal         0x80082FE0
    // 0x80800FAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800FAC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800FB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800FB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800FB8: jr          $ra
    // 0x80800FBC: nop

    return;
    // 0x80800FBC: nop

;}
RECOMP_FUNC void func_80800FC0_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800FC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800FC8: jal         0x80000AEC
    // 0x80800FCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800AEC_bssub(rdram, ctx);
        goto after_0;
    // 0x80800FCC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800FD0: jal         0x80000254
    // 0x80800FD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800254_bssub(rdram, ctx);
        goto after_1;
    // 0x80800FD4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800FD8: jal         0x80082FE8
    // 0x80800FDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_2;
    // 0x80800FDC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80800FE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800FE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800FE8: jr          $ra
    // 0x80800FEC: nop

    return;
    // 0x80800FEC: nop

;}
RECOMP_FUNC void bssub_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800FF0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800FF4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(151, 0X18A0) << 16);
    // 0x80800FF8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800FFC: jr          $ra
    // 0x80801000: lw          $v0, 0x18A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X18A0));
    return;
    // 0x80801000: lw          $v0, 0x18A0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X18A0));
;}
RECOMP_FUNC void func_80801004_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801004: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080100C: jal         0x80090A2C
    // 0x80801010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80090A2C(rdram, ctx);
        goto after_0;
    // 0x80801010: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801014: jal         0x800008D8
    // 0x80801018: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808008D8_bssub(rdram, ctx);
        goto after_1;
    // 0x80801018: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8080101C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801020: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801024: jr          $ra
    // 0x80801028: nop

    return;
    // 0x80801028: nop

;}
RECOMP_FUNC void func_8080102C_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080102C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80801030: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801034: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801038: jal         0x8008CABC
    // 0x8080103C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080103C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801040: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80801044: jal         0x8008B264
    // 0x80801048: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B264(rdram, ctx);
        goto after_1;
    // 0x80801048: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x8080104C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80801050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801054: jal         0x8008CA4C
    // 0x80801058: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008CA4C(rdram, ctx);
        goto after_2;
    // 0x80801058: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_2:
    // 0x8080105C: jal         0x8009BB94
    // 0x80801060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB94(rdram, ctx);
        goto after_3;
    // 0x80801060: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801064: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80801068: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8080106C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80801070: addiu       $at, $zero, 0x12F
    ctx->r1 = ADD32(0, 0X12F);
    // 0x80801074: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80801078: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8080107C: bc1f        L_808010D4
    if (!c1cs) {
        // 0x80801080: nop
    
            goto L_808010D4;
    }
    // 0x80801080: nop

    // 0x80801084: addiu       $at, $zero, 0x12E
    ctx->r1 = ADD32(0, 0X12E);
    // 0x80801088: beq         $t6, $at, L_808010AC
    if (ctx->r14 == ctx->r1) {
        // 0x8080108C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808010AC;
    }
    // 0x8080108C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801090: addiu       $a1, $zero, 0x12E
    ctx->r5 = ADD32(0, 0X12E);
    // 0x80801094: jal         0x8008CB3C
    // 0x80801098: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_4;
    // 0x80801098: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    after_4:
    // 0x8080109C: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x808010A0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808010A4: jal         0x8008B1C8
    // 0x808010A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B1C8(rdram, ctx);
        goto after_5;
    // 0x808010A8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_5:
L_808010AC:
    // 0x808010AC: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x808010B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x808010B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010B8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x808010BC: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    // 0x808010C0: lui         $a3, 0x40C0
    ctx->r7 = S32(0X40C0 << 16);
    // 0x808010C4: jal         0x8008C9F0
    // 0x808010C8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_6;
    // 0x808010C8: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_6:
    // 0x808010CC: b           L_80801120
    // 0x808010D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80801120;
    // 0x808010D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808010D4:
    // 0x808010D4: beq         $t7, $at, L_808010FC
    if (ctx->r15 == ctx->r1) {
        // 0x808010D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808010FC;
    }
    // 0x808010D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010DC: lui         $a2, 0x3EE6
    ctx->r6 = S32(0X3EE6 << 16);
    // 0x808010E0: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808010E4: jal         0x8008CB3C
    // 0x808010E8: addiu       $a1, $zero, 0x12F
    ctx->r5 = ADD32(0, 0X12F);
    func_8008CB3C(rdram, ctx);
        goto after_7;
    // 0x808010E8: addiu       $a1, $zero, 0x12F
    ctx->r5 = ADD32(0, 0X12F);
    after_7:
    // 0x808010EC: lui         $a1, 0x3ECC
    ctx->r5 = S32(0X3ECC << 16);
    // 0x808010F0: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808010F4: jal         0x8008B1C8
    // 0x808010F8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B1C8(rdram, ctx);
        goto after_8;
    // 0x808010F8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_8:
L_808010FC:
    // 0x808010FC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(151, 0X16DC) << 16);
    // 0x80801100: lwc1        $f8, 0x16DC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(151, 0X16DC));
    // 0x80801104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801108: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8080110C: lui         $a2, 0x4461
    ctx->r6 = S32(0X4461 << 16);
    // 0x80801110: lui         $a3, 0x3FC0
    ctx->r7 = S32(0X3FC0 << 16);
    // 0x80801114: jal         0x8008C9F0
    // 0x80801118: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_9;
    // 0x80801118: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_9:
    // 0x8080111C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80801120:
    // 0x80801120: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801124: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80801128: jr          $ra
    // 0x8080112C: nop

    return;
    // 0x8080112C: nop

;}
RECOMP_FUNC void func_80801130_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801130: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801134: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801138: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080113C: jal         0x800009B0
    // 0x80801140: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808009B0_bssub(rdram, ctx);
        goto after_0;
    // 0x80801140: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801144: jal         0x8000102C
    // 0x80801148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080102C_bssub(rdram, ctx);
        goto after_1;
    // 0x80801148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080114C: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80801150: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80801154: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801158: jal         0x8008C9BC
    // 0x8080115C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_2;
    // 0x8080115C: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_2:
    // 0x80801160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801164: jal         0x8008CA30
    // 0x80801168: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_3;
    // 0x80801168: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x8080116C: jal         0x800909CC
    // 0x80801170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_4;
    // 0x80801170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801174: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801178: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080117C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801180: jr          $ra
    // 0x80801184: nop

    return;
    // 0x80801184: nop

;}
RECOMP_FUNC void func_80801188_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801188: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080118C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801190: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801194: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801198: jal         0x80000AEC
    // 0x8080119C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_80800AEC_bssub(rdram, ctx);
        goto after_0;
    // 0x8080119C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x808011A0: jal         0x8000102C
    // 0x808011A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8080102C_bssub(rdram, ctx);
        goto after_1;
    // 0x808011A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808011A8: jal         0x80000634
    // 0x808011AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800634_bssub(rdram, ctx);
        goto after_2;
    // 0x808011AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808011B0: jal         0x80000768
    // 0x808011B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800768_bssub(rdram, ctx);
        goto after_3;
    // 0x808011B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808011B8: jal         0x80000254
    // 0x808011BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800254_bssub(rdram, ctx);
        goto after_4;
    // 0x808011BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808011C0: jal         0x80000834
    // 0x808011C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800834_bssub(rdram, ctx);
        goto after_5;
    // 0x808011C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808011C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808011CC: lwc1        $f6, 0x16C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x808011D0: addiu       $t6, $zero, 0x131
    ctx->r14 = ADD32(0, 0X131);
    // 0x808011D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011D8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x808011DC: nop

    // 0x808011E0: bc1f        L_808011EC
    if (!c1cs) {
        // 0x808011E4: nop
    
            goto L_808011EC;
    }
    // 0x808011E4: nop

    // 0x808011E8: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_808011EC:
    // 0x808011EC: jal         0x8009E5C8
    // 0x808011F0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_6;
    // 0x808011F0: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_6:
    // 0x808011F4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808011F8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808011FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801200: jr          $ra
    // 0x80801204: nop

    return;
    // 0x80801204: nop

;}
RECOMP_FUNC void bssub_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801208: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080120C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(151, 0X18B0) << 16);
    // 0x80801210: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801214: jr          $ra
    // 0x80801218: lw          $v0, 0x18B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X18B0));
    return;
    // 0x80801218: lw          $v0, 0x18B0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X18B0));
;}
RECOMP_FUNC void func_8080121C_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080121C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801220: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801224: jal         0x80085148
    // 0x80801228: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _baspin_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80801228: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080122C: jal         0x800008D8
    // 0x80801230: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808008D8_bssub(rdram, ctx);
        goto after_1;
    // 0x80801230: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080123C: jr          $ra
    // 0x80801240: nop

    return;
    // 0x80801240: nop

;}
RECOMP_FUNC void func_80801244_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801244: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801248: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080124C: jal         0x800009B0
    // 0x80801250: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_808009B0_bssub(rdram, ctx);
        goto after_0;
    // 0x80801250: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801254: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80801258: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080125C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801260: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801264: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801268: addiu       $a1, $zero, 0x130
    ctx->r5 = ADD32(0, 0X130);
    // 0x8080126C: jal         0x80085150
    // 0x80801270: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    _baspin_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80801270: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80801274: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801278: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080127C: jr          $ra
    // 0x80801280: nop

    return;
    // 0x80801280: nop

;}
RECOMP_FUNC void func_80801284_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801284: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801288: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080128C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801290: jal         0x80000AEC
    // 0x80801294: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80800AEC_bssub(rdram, ctx);
        goto after_0;
    // 0x80801294: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80801298: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080129C: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x808012A0: jal         0x800914FC
    // 0x808012A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800914FC(rdram, ctx);
        goto after_1;
    // 0x808012A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x808012A8: jal         0x80085158
    // 0x808012AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _baspin_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x808012AC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x808012B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808012B4: bne         $v0, $at, L_808012C0
    if (ctx->r2 != ctx->r1) {
        // 0x808012B8: addiu       $t6, $zero, 0x131
        ctx->r14 = ADD32(0, 0X131);
            goto L_808012C0;
    }
    // 0x808012B8: addiu       $t6, $zero, 0x131
    ctx->r14 = ADD32(0, 0X131);
    // 0x808012BC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_808012C0:
    // 0x808012C0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808012C4: jal         0x8009E5C8
    // 0x808012C8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x808012C8: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x808012CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808012D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808012D4: jr          $ra
    // 0x808012D8: nop

    return;
    // 0x808012D8: nop

;}
RECOMP_FUNC void bssub_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012DC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808012E0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(151, 0X18C0) << 16);
    // 0x808012E4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808012E8: jr          $ra
    // 0x808012EC: lw          $v0, 0x18C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X18C0));
    return;
    // 0x808012EC: lw          $v0, 0x18C0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X18C0));
;}
RECOMP_FUNC void func_808012F0_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808012F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808012F8: jal         0x80085148
    // 0x808012FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _baspin_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808012FC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801300: jal         0x800008D8
    // 0x80801304: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808008D8_bssub(rdram, ctx);
        goto after_1;
    // 0x80801304: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801308: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080130C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801310: jr          $ra
    // 0x80801314: nop

    return;
    // 0x80801314: nop

;}
RECOMP_FUNC void func_80801318_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801318: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080131C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801320: jal         0x800009B0
    // 0x80801324: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_808009B0_bssub(rdram, ctx);
        goto after_0;
    // 0x80801324: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801328: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x8080132C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80801330: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801334: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801338: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080133C: addiu       $a1, $zero, 0x130
    ctx->r5 = ADD32(0, 0X130);
    // 0x80801340: jal         0x80085150
    // 0x80801344: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    _baspin_entrypoint_2(rdram, ctx);
        goto after_1;
    // 0x80801344: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80801348: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080134C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801350: jr          $ra
    // 0x80801354: nop

    return;
    // 0x80801354: nop

;}
RECOMP_FUNC void func_80801358_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801358: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080135C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801360: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801364: jal         0x80000AEC
    // 0x80801368: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80800AEC_bssub(rdram, ctx);
        goto after_0;
    // 0x80801368: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8080136C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801370: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80801374: jal         0x800914FC
    // 0x80801378: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800914FC(rdram, ctx);
        goto after_1;
    // 0x80801378: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8080137C: jal         0x80085158
    // 0x80801380: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _baspin_entrypoint_3(rdram, ctx);
        goto after_2;
    // 0x80801380: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80801384: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80801388: bne         $v0, $at, L_80801394
    if (ctx->r2 != ctx->r1) {
        // 0x8080138C: addiu       $t6, $zero, 0x131
        ctx->r14 = ADD32(0, 0X131);
            goto L_80801394;
    }
    // 0x8080138C: addiu       $t6, $zero, 0x131
    ctx->r14 = ADD32(0, 0X131);
    // 0x80801390: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80801394:
    // 0x80801394: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801398: jal         0x8009E5C8
    // 0x8080139C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x8080139C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x808013A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808013A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808013A8: jr          $ra
    // 0x808013AC: nop

    return;
    // 0x808013AC: nop

;}
RECOMP_FUNC void bssub_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013B0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808013B4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(151, 0X18D0) << 16);
    // 0x808013B8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808013BC: jr          $ra
    // 0x808013C0: lw          $v0, 0x18D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X18D0));
    return;
    // 0x808013C0: lw          $v0, 0x18D0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X18D0));
;}
RECOMP_FUNC void func_808013C4_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808013C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808013CC: jal         0x800845D0
    // 0x808013D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _babounce_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x808013D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808013D4: jal         0x800008D8
    // 0x808013D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808008D8_bssub(rdram, ctx);
        goto after_1;
    // 0x808013D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808013DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808013E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808013E4: jr          $ra
    // 0x808013E8: nop

    return;
    // 0x808013E8: nop

;}
RECOMP_FUNC void func_808013EC_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808013F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808013F4: jal         0x800009B0
    // 0x808013F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808009B0_bssub(rdram, ctx);
        goto after_0;
    // 0x808013F8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808013FC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801400: jal         0x800845D8
    // 0x80801404: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _babounce_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80801404: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80801408: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080140C: addiu       $a1, $zero, 0x12E
    ctx->r5 = ADD32(0, 0X12E);
    // 0x80801410: jal         0x800845E0
    // 0x80801414: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    _babounce_entrypoint_5(rdram, ctx);
        goto after_2;
    // 0x80801414: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    after_2:
    // 0x80801418: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8080141C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801420: jr          $ra
    // 0x80801424: nop

    return;
    // 0x80801424: nop

;}
RECOMP_FUNC void func_80801428_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801428: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080142C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801430: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801434: jal         0x80000AEC
    // 0x80801438: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80800AEC_bssub(rdram, ctx);
        goto after_0;
    // 0x80801438: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8080143C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801440: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80801444: jal         0x800914FC
    // 0x80801448: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800914FC(rdram, ctx);
        goto after_1;
    // 0x80801448: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8080144C: jal         0x80084600
    // 0x80801450: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _babounce_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x80801450: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80801454: beq         $v0, $zero, L_80801460
    if (ctx->r2 == 0) {
        // 0x80801458: addiu       $t6, $zero, 0x131
        ctx->r14 = ADD32(0, 0X131);
            goto L_80801460;
    }
    // 0x80801458: addiu       $t6, $zero, 0x131
    ctx->r14 = ADD32(0, 0X131);
    // 0x8080145C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80801460:
    // 0x80801460: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801464: jal         0x8009E5C8
    // 0x80801468: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80801468: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x8080146C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801470: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801474: jr          $ra
    // 0x80801478: nop

    return;
    // 0x80801478: nop

;}
RECOMP_FUNC void bssub_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080147C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801480: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(151, 0X18E0) << 16);
    // 0x80801484: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801488: jr          $ra
    // 0x8080148C: lw          $v0, 0x18E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X18E0));
    return;
    // 0x8080148C: lw          $v0, 0x18E0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X18E0));
;}
RECOMP_FUNC void func_80801490_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801490: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801494: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801498: jal         0x800839B8
    // 0x8080149C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x8080149C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808014A0: jal         0x800008D8
    // 0x808014A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808008D8_bssub(rdram, ctx);
        goto after_1;
    // 0x808014A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808014A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808014AC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808014B0: jr          $ra
    // 0x808014B4: nop

    return;
    // 0x808014B4: nop

;}
RECOMP_FUNC void func_808014B8_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808014BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808014C0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808014C4: jal         0x800009B0
    // 0x808014C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_808009B0_bssub(rdram, ctx);
        goto after_0;
    // 0x808014C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808014CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014D0: jal         0x8009BF5C
    // 0x808014D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x808014D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x808014D8: jal         0x800839C8
    // 0x808014DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_2;
    // 0x808014DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808014E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014E4: jal         0x8009B94C
    // 0x808014E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009B94C(rdram, ctx);
        goto after_3;
    // 0x808014E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x808014EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808014F0: jal         0x8009BA9C
    // 0x808014F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_4;
    // 0x808014F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x808014F8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x808014FC: nop

    // 0x80801500: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    // 0x80801504: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801508: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080150C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801510: jr          $ra
    // 0x80801514: nop

    return;
    // 0x80801514: nop

;}
RECOMP_FUNC void func_80801518_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801518: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080151C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801520: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80801524: jal         0x80000AEC
    // 0x80801528: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    func_80800AEC_bssub(rdram, ctx);
        goto after_0;
    // 0x80801528: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x8080152C: jal         0x800839E8
    // 0x80801530: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_1;
    // 0x80801530: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80801534: beql        $v0, $zero, L_8080154C
    if (ctx->r2 == 0) {
        // 0x80801538: lw          $a0, 0x20($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X20);
            goto L_8080154C;
    }
    goto skip_0;
    // 0x80801538: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x8080153C: jal         0x80084750
    // 0x80801540: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _badata_entrypoint_34(rdram, ctx);
        goto after_2;
    // 0x80801540: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80801544: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80801548: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
L_8080154C:
    // 0x8080154C: jal         0x8009E5C8
    // 0x80801550: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_3;
    // 0x80801550: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x80801554: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801558: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080155C: jr          $ra
    // 0x80801560: nop

    return;
    // 0x80801560: nop

;}
RECOMP_FUNC void bssub_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801564: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801568: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(151, 0X18F0) << 16);
    // 0x8080156C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801570: jr          $ra
    // 0x80801574: lw          $v0, 0x18F0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X18F0));
    return;
    // 0x80801574: lw          $v0, 0x18F0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X18F0));
;}
RECOMP_FUNC void func_80801578_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801578: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080157C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801580: jal         0x80090A2C
    // 0x80801584: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80090A2C(rdram, ctx);
        goto after_0;
    // 0x80801584: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801588: jal         0x800008D8
    // 0x8080158C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_808008D8_bssub(rdram, ctx);
        goto after_1;
    // 0x8080158C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801590: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801594: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801598: jr          $ra
    // 0x8080159C: nop

    return;
    // 0x8080159C: nop

;}
RECOMP_FUNC void func_808015A0_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808015A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808015A8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808015AC: jal         0x8008CABC
    // 0x808015B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808015B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808015B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808015B8: jal         0x800009B0
    // 0x808015BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_808009B0_bssub(rdram, ctx);
        goto after_1;
    // 0x808015BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808015C0: jal         0x8008B264
    // 0x808015C4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B264(rdram, ctx);
        goto after_2;
    // 0x808015C4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_2:
    // 0x808015C8: addiu       $at, $zero, 0x12E
    ctx->r1 = ADD32(0, 0X12E);
    // 0x808015CC: bne         $v0, $at, L_808015E8
    if (ctx->r2 != ctx->r1) {
        // 0x808015D0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808015E8;
    }
    // 0x808015D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015D4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x808015D8: jal         0x8008B1BC
    // 0x808015DC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x808015DC: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x808015E0: b           L_808015F4
    // 0x808015E4: nop

        goto L_808015F4;
    // 0x808015E4: nop

L_808015E8:
    // 0x808015E8: addiu       $a1, $zero, 0x12E
    ctx->r5 = ADD32(0, 0X12E);
    // 0x808015EC: jal         0x8008CB3C
    // 0x808015F0: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_4;
    // 0x808015F0: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    after_4:
L_808015F4:
    // 0x808015F4: jal         0x800909CC
    // 0x808015F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_5;
    // 0x808015F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808015FC: jal         0x80000000
    // 0x80801600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bssub(rdram, ctx);
        goto after_6;
    // 0x80801600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801604: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801608: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080160C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801610: jr          $ra
    // 0x80801614: nop

    return;
    // 0x80801614: nop

;}
RECOMP_FUNC void func_80801618_bssub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801618: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8080161C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801620: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801624: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801628: jal         0x80000AEC
    // 0x8080162C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    func_80800AEC_bssub(rdram, ctx);
        goto after_0;
    // 0x8080162C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    after_0:
    // 0x80801630: jal         0x80000634
    // 0x80801634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800634_bssub(rdram, ctx);
        goto after_1;
    // 0x80801634: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801638: jal         0x80000768
    // 0x8080163C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800768_bssub(rdram, ctx);
        goto after_2;
    // 0x8080163C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80801640: jal         0x80000254
    // 0x80801644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800254_bssub(rdram, ctx);
        goto after_3;
    // 0x80801644: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801648: jal         0x80000834
    // 0x8080164C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800834_bssub(rdram, ctx);
        goto after_4;
    // 0x8080164C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801650: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80801654: lwc1        $f6, 0x16C($s0)
    ctx->f6.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80801658: addiu       $t6, $zero, 0x12C
    ctx->r14 = ADD32(0, 0X12C);
    // 0x8080165C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801660: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80801664: nop

    // 0x80801668: bc1t        L_80801674
    if (c1cs) {
        // 0x8080166C: nop
    
            goto L_80801674;
    }
    // 0x8080166C: nop

    // 0x80801670: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_80801674:
    // 0x80801674: jal         0x8009E5C8
    // 0x80801678: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8009E5C8(rdram, ctx);
        goto after_5;
    // 0x80801678: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x8080167C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801680: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80801684: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801688: jr          $ra
    // 0x8080168C: nop

    return;
    // 0x8080168C: nop

;}
RECOMP_FUNC void bssub_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801690: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801694: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(151, 0X1900) << 16);
    // 0x80801698: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080169C: jr          $ra
    // 0x808016A0: lw          $v0, 0x1900($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X1900));
    return;
    // 0x808016A0: lw          $v0, 0x1900($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(151, 0X1900));
    // 0x808016A4: nop

    // 0x808016A8: nop

    // 0x808016AC: nop

;}
RECOMP_FUNC void func_80800000_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: jal         0x8008E23C
    // 0x8080000C: nop

    func_8008E23C(rdram, ctx);
        goto after_0;
    // 0x8080000C: nop

    after_0:
    // 0x80800010: beq         $v0, $zero, L_80800020
    if (ctx->r2 == 0) {
        // 0x80800014: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80800020;
    }
    // 0x80800014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800018: b           L_80800024
    // 0x8080001C: addiu       $v1, $zero, 0x6D
    ctx->r3 = ADD32(0, 0X6D);
        goto L_80800024;
    // 0x8080001C: addiu       $v1, $zero, 0x6D
    ctx->r3 = ADD32(0, 0X6D);
L_80800020:
    // 0x80800020: addiu       $v1, $zero, 0x30
    ctx->r3 = ADD32(0, 0X30);
L_80800024:
    // 0x80800024: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800028: jr          $ra
    // 0x8080002C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8080002C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80800030_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800030: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800034: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800038: jal         0x80096544
    // 0x8080003C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_80096544(rdram, ctx);
        goto after_0;
    // 0x8080003C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800040: beql        $v0, $zero, L_808000D4
    if (ctx->r2 == 0) {
        // 0x80800044: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_808000D4;
    }
    goto skip_0;
    // 0x80800044: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800048: jal         0x800DC0C0
    // 0x8080004C: nop

    func_800DC0C0(rdram, ctx);
        goto after_1;
    // 0x8080004C: nop

    after_1:
    // 0x80800050: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800054: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800058: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8080005C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800060: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800064: nop

    // 0x80800068: bc1f        L_80800080
    if (!c1cs) {
        // 0x8080006C: nop
    
            goto L_80800080;
    }
    // 0x8080006C: nop

    // 0x80800070: jal         0x80092C00
    // 0x80800074: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_80092C00(rdram, ctx);
        goto after_2;
    // 0x80800074: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x80800078: b           L_8080008C
    // 0x8080007C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
        goto L_8080008C;
    // 0x8080007C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_80800080:
    // 0x80800080: jal         0x80092C24
    // 0x80800084: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80092C24(rdram, ctx);
        goto after_3;
    // 0x80800084: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x80800088: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
L_8080008C:
    // 0x8080008C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80800090: jal         0x8009FBB0
    // 0x80800094: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009FBB0(rdram, ctx);
        goto after_4;
    // 0x80800094: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_4:
    // 0x80800098: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x8080009C: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x808000A0: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x808000A4: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x808000A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808000AC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808000B0: addiu       $a1, $zero, -0x3C
    ctx->r5 = ADD32(0, -0X3C);
    // 0x808000B4: addiu       $a2, $zero, -0x64
    ctx->r6 = ADD32(0, -0X64);
    // 0x808000B8: addiu       $a3, $zero, -0x3C
    ctx->r7 = ADD32(0, -0X3C);
    // 0x808000BC: jal         0x800BA930
    // 0x808000C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_800BA930(rdram, ctx);
        goto after_5;
    // 0x808000C0: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_5:
    // 0x808000C4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x808000C8: jal         0x800BA22C
    // 0x808000CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_6;
    // 0x808000CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x808000D0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_808000D4:
    // 0x808000D4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808000D8: jr          $ra
    // 0x808000DC: nop

    return;
    // 0x808000DC: nop

;}
RECOMP_FUNC void func_808000E0_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000E8: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808000EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808000F0: lw          $t6, 0x15C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X15C);
    // 0x808000F4: lui         $t8, 0x0
    ctx->r24 = S32(RELOC_HI16(152, 0XB90) << 16);
    // 0x808000F8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000FC: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x80800100: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80800104: lh          $t8, 0xB90($t8)
    ctx->r24 = MEM_H(ctx->r24, (int16_t)RELOC_LO16(152, 0XB90));
    // 0x80800108: or          $s1, $a1, $zero
    ctx->r17 = ctx->r5 | 0;
    // 0x8080010C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80800110: jal         0x8008B264
    // 0x80800114: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    func_8008B264(rdram, ctx);
        goto after_0;
    // 0x80800114: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    after_0:
    // 0x80800118: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8080011C: beql        $v0, $t9, L_80800150
    if (ctx->r2 == ctx->r25) {
        // 0x80800120: lw          $t0, 0x15C($s0)
        ctx->r8 = MEM_W(ctx->r16, 0X15C);
            goto L_80800150;
    }
    goto skip_0;
    // 0x80800120: lw          $t0, 0x15C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X15C);
    skip_0:
    // 0x80800124: jal         0x8008B2B4
    // 0x80800128: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B2B4(rdram, ctx);
        goto after_1;
    // 0x80800128: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x8080012C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800130: jal         0x8008B24C
    // 0x80800134: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B24C(rdram, ctx);
        goto after_2;
    // 0x80800134: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80800138: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080013C: jal         0x8008AED4
    // 0x80800140: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8008AED4(rdram, ctx);
        goto after_3;
    // 0x80800140: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x80800144: jal         0x8008B064
    // 0x80800148: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008B064(rdram, ctx);
        goto after_4;
    // 0x80800148: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x8080014C: lw          $t0, 0x15C($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X15C);
L_80800150:
    // 0x80800150: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80800154: sltiu       $at, $t1, 0xA
    ctx->r1 = ctx->r9 < 0XA ? 1 : 0;
    // 0x80800158: bne         $at, $zero, L_80800164
    if (ctx->r1 != 0) {
        // 0x8080015C: sw          $t1, 0x15C($s0)
        MEM_W(0X15C, ctx->r16) = ctx->r9;
            goto L_80800164;
    }
    // 0x8080015C: sw          $t1, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r9;
    // 0x80800160: sw          $zero, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = 0;
L_80800164:
    // 0x80800164: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800168: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8080016C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80800170: jr          $ra
    // 0x80800174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80800174: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80800178_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800178: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8080017C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800180: jal         0x8009EF1C
    // 0x80800184: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x80800184: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800188: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8080018C: jal         0x8009EF10
    // 0x80800190: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x80800190: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800194: bne         $v0, $zero, L_808001B0
    if (ctx->r2 != 0) {
        // 0x80800198: lwc1        $f12, 0x1C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_808001B0;
    }
    // 0x80800198: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8080019C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808001A0: jal         0x8009B9B0
    // 0x808001A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x808001A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x808001A8: b           L_808001D0
    // 0x808001AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808001D0;
    // 0x808001AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001B0:
    // 0x808001B0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x808001B4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808001B8: jal         0x800F1214
    // 0x808001BC: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x808001BC: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    after_3:
    // 0x808001C0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001C4: jal         0x8009B9B0
    // 0x808001C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x808001C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x808001CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001D0:
    // 0x808001D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001D4: jr          $ra
    // 0x808001D8: nop

    return;
    // 0x808001D8: nop

;}
RECOMP_FUNC void func_808001DC_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808001E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808001E4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808001E8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808001EC: jal         0x8009E6C4
    // 0x808001F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E6C4(rdram, ctx);
        goto after_0;
    // 0x808001F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x808001F4: bne         $v0, $zero, L_8080025C
    if (ctx->r2 != 0) {
        // 0x808001F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080025C;
    }
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001FC: jal         0x8009BCB4
    // 0x80800200: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    func_8009BCB4(rdram, ctx);
        goto after_1;
    // 0x80800200: lui         $a1, 0x42C8
    ctx->r5 = S32(0X42C8 << 16);
    after_1:
    // 0x80800204: lui         $a1, 0x4305
    ctx->r5 = S32(0X4305 << 16);
    // 0x80800208: ori         $a1, $a1, 0x547B
    ctx->r5 = ctx->r5 | 0X547B;
    // 0x8080020C: jal         0x8009BCC4
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BCC4(rdram, ctx);
        goto after_2;
    // 0x80800210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800214: lui         $a2, 0x3CF5
    ctx->r6 = S32(0X3CF5 << 16);
    // 0x80800218: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x8080021C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800220: jal         0x8009F1C8
    // 0x80800224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_3;
    // 0x80800224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080022C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800230: jal         0x8009F1C8
    // 0x80800234: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_4;
    // 0x80800234: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_4:
    // 0x80800238: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080023C: jal         0x800961AC
    // 0x80800240: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_800961AC(rdram, ctx);
        goto after_5;
    // 0x80800240: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80800244: jal         0x8008E0E8
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E0E8(rdram, ctx);
        goto after_6;
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8080024C: beq         $v0, $zero, L_8080025C
    if (ctx->r2 == 0) {
        // 0x80800250: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080025C;
    }
    // 0x80800250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800254: jal         0x80084788
    // 0x80800258: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_7;
    // 0x80800258: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_7:
L_8080025C:
    // 0x8080025C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800260: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800264: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800268: jr          $ra
    // 0x8080026C: nop

    return;
    // 0x8080026C: nop

;}
RECOMP_FUNC void func_80800270_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800270: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800274: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800278: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080027C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800280: jal         0x8009E69C
    // 0x80800284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E69C(rdram, ctx);
        goto after_0;
    // 0x80800284: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80800288: bnel        $v0, $zero, L_808002D0
    if (ctx->r2 != 0) {
        // 0x8080028C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_808002D0;
    }
    goto skip_0;
    // 0x8080028C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800290: jal         0x8009BC90
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC90(rdram, ctx);
        goto after_1;
    // 0x80800294: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80800298: jal         0x8009BC6C
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_2;
    // 0x8080029C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808002A0: jal         0x8009F1E0
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F1E0(rdram, ctx);
        goto after_3;
    // 0x808002A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x808002A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002AC: jal         0x800961AC
    // 0x808002B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800961AC(rdram, ctx);
        goto after_4;
    // 0x808002B0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x808002B4: jal         0x8008E0E8
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E0E8(rdram, ctx);
        goto after_5;
    // 0x808002B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808002BC: beq         $v0, $zero, L_808002CC
    if (ctx->r2 == 0) {
        // 0x808002C0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808002CC;
    }
    // 0x808002C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002C4: jal         0x80084788
    // 0x808002C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_6;
    // 0x808002C8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_6:
L_808002CC:
    // 0x808002CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808002D0:
    // 0x808002D0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808002D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808002D8: jr          $ra
    // 0x808002DC: nop

    return;
    // 0x808002DC: nop

;}
RECOMP_FUNC void func_808002E0_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808002E4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808002E8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808002EC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808002F0: jal         0x8008CABC
    // 0x808002F4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808002F4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x808002F8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808002FC: jal         0x800001DC
    // 0x80800300: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_808001DC_bsswim(rdram, ctx);
        goto after_1;
    // 0x80800300: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800304: jal         0x8009E710
    // 0x80800308: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009E710(rdram, ctx);
        goto after_2;
    // 0x80800308: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x8080030C: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x80800310: bne         $v0, $at, L_80800328
    if (ctx->r2 != ctx->r1) {
        // 0x80800314: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80800328;
    }
    // 0x80800314: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80800318: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(152, 0XB70) << 16);
    // 0x8080031C: lwc1        $f4, 0xB70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(152, 0XB70));
    // 0x80800320: b           L_80800338
    // 0x80800324: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
        goto L_80800338;
    // 0x80800324: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
L_80800328:
    // 0x80800328: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8080032C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800330: nop

    // 0x80800334: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_80800338:
    // 0x80800338: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080033C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80800340: jal         0x8009CA70
    // 0x80800344: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    func_8009CA70(rdram, ctx);
        goto after_3;
    // 0x80800344: sw          $a1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r5;
    after_3:
    // 0x80800348: beq         $v0, $zero, L_808003E0
    if (ctx->r2 == 0) {
        // 0x8080034C: lw          $t6, 0x30($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X30);
            goto L_808003E0;
    }
    // 0x8080034C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80800350: addiu       $at, $zero, 0x54
    ctx->r1 = ADD32(0, 0X54);
    // 0x80800354: bne         $t6, $at, L_80800378
    if (ctx->r14 != ctx->r1) {
        // 0x80800358: lw          $t7, 0x30($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X30);
            goto L_80800378;
    }
    // 0x80800358: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8080035C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800360: addiu       $a1, $zero, 0x461
    ctx->r5 = ADD32(0, 0X461);
    // 0x80800364: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800368: jal         0x8009DF18
    // 0x8080036C: addiu       $a3, $zero, 0x7530
    ctx->r7 = ADD32(0, 0X7530);
    func_8009DF18(rdram, ctx);
        goto after_4;
    // 0x8080036C: addiu       $a3, $zero, 0x7530
    ctx->r7 = ADD32(0, 0X7530);
    after_4:
    // 0x80800370: b           L_808003D0
    // 0x80800374: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
        goto L_808003D0;
    // 0x80800374: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
L_80800378:
    // 0x80800378: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x8080037C: beql        $t7, $at, L_808003D0
    if (ctx->r15 == ctx->r1) {
        // 0x80800380: lui         $a2, 0x3F33
        ctx->r6 = S32(0X3F33 << 16);
            goto L_808003D0;
    }
    goto skip_0;
    // 0x80800380: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    skip_0:
    // 0x80800384: jal         0x800CF67C
    // 0x80800388: nop

    func_800CF67C(rdram, ctx);
        goto after_5;
    // 0x80800388: nop

    after_5:
    // 0x8080038C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80800390: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80800394: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(152, 0XB74) << 16);
    // 0x80800398: lwc1        $f8, 0xB74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(152, 0XB74));
    // 0x8080039C: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x808003A0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x808003A4: lui         $a3, 0x45FA
    ctx->r7 = S32(0X45FA << 16);
    // 0x808003A8: jal         0x800F10B4
    // 0x808003AC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_800F10B4(rdram, ctx);
        goto after_6;
    // 0x808003AC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_6:
    // 0x808003B0: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x808003B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808003B8: addiu       $a1, $zero, 0x461
    ctx->r5 = ADD32(0, 0X461);
    // 0x808003BC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x808003C0: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x808003C4: jal         0x8009DF18
    // 0x808003C8: nop

    func_8009DF18(rdram, ctx);
        goto after_7;
    // 0x808003C8: nop

    after_7:
    // 0x808003CC: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
L_808003D0:
    // 0x808003D0: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808003D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808003D8: jal         0x80098188
    // 0x808003DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80098188(rdram, ctx);
        goto after_8;
    // 0x808003DC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
L_808003E0:
    // 0x808003E0: jal         0x8008B264
    // 0x808003E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B264(rdram, ctx);
        goto after_9;
    // 0x808003E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808003E8: addiu       $at, $zero, 0x57
    ctx->r1 = ADD32(0, 0X57);
    // 0x808003EC: bne         $v0, $at, L_80800414
    if (ctx->r2 != ctx->r1) {
        // 0x808003F0: lw          $t9, 0x30($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X30);
            goto L_80800414;
    }
    // 0x808003F0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x808003F4: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x808003F8: beq         $t9, $at, L_80800414
    if (ctx->r25 == ctx->r1) {
        // 0x808003FC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800414;
    }
    // 0x808003FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800400: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x80800404: jal         0x8008B1BC
    // 0x80800408: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    func_8008B1BC(rdram, ctx);
        goto after_10;
    // 0x80800408: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    after_10:
    // 0x8080040C: b           L_8080046C
    // 0x80800410: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
        goto L_8080046C;
    // 0x80800410: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
L_80800414:
    // 0x80800414: jal         0x8008AF24
    // 0x80800418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_11;
    // 0x80800418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080041C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800420: jal         0x8008B1C8
    // 0x80800424: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8008B1C8(rdram, ctx);
        goto after_12;
    // 0x80800424: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_12:
    // 0x80800428: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080042C: jal         0x8008AED4
    // 0x80800430: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    func_8008AED4(rdram, ctx);
        goto after_13;
    // 0x80800430: addiu       $a1, $zero, 0x57
    ctx->r5 = ADD32(0, 0X57);
    after_13:
    // 0x80800434: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800438: jal         0x8008B134
    // 0x8080043C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_14;
    // 0x8080043C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_14:
    // 0x80800440: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80800444: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800448: jal         0x8008B24C
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_15;
    // 0x8080044C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800450: lui         $a1, 0x3F99
    ctx->r5 = S32(0X3F99 << 16);
    // 0x80800454: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800458: jal         0x8008B1BC
    // 0x8080045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1BC(rdram, ctx);
        goto after_16;
    // 0x8080045C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800460: jal         0x8008B064
    // 0x80800464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_17;
    // 0x80800464: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800468: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
L_8080046C:
    // 0x8080046C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80800470: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800474: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800478: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8080047C: jal         0x8009FFD8
    // 0x80800480: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_18;
    // 0x80800480: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_18:
    // 0x80800484: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800488: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x8080048C: jal         0x8009C99C
    // 0x80800490: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_19;
    // 0x80800490: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_19:
    // 0x80800494: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800498: jal         0x8009B9B0
    // 0x8080049C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_20;
    // 0x8080049C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_20:
    // 0x808004A0: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x808004A4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808004A8: jal         0x800A4DA4
    // 0x808004AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800A4DA4(rdram, ctx);
        goto after_21;
    // 0x808004AC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_21:
    // 0x808004B0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808004B4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808004B8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808004BC: jr          $ra
    // 0x808004C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x808004C0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_808004C4_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808004C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808004CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808004D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808004D4: jal         0x8008CABC
    // 0x808004D8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808004D8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    after_0:
    // 0x808004DC: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x808004E0: jal         0x8001210C
    // 0x808004E4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001210C(rdram, ctx);
        goto after_1;
    // 0x808004E4: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_1:
    // 0x808004E8: bne         $v0, $zero, L_8080051C
    if (ctx->r2 != 0) {
        // 0x808004EC: nop
    
            goto L_8080051C;
    }
    // 0x808004EC: nop

    // 0x808004F0: jal         0x800DC0C0
    // 0x808004F4: nop

    func_800DC0C0(rdram, ctx);
        goto after_2;
    // 0x808004F4: nop

    after_2:
    // 0x808004F8: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x808004FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800500: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800504: c.lt.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl < ctx->f4.fl;
    // 0x80800508: nop

    // 0x8080050C: bc1f        L_8080051C
    if (!c1cs) {
        // 0x80800510: nop
    
            goto L_8080051C;
    }
    // 0x80800510: nop

    // 0x80800514: jal         0x8009FC34
    // 0x80800518: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009FC34(rdram, ctx);
        goto after_3;
    // 0x80800518: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_8080051C:
    // 0x8080051C: jal         0x8001210C
    // 0x80800520: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8001210C(rdram, ctx);
        goto after_4;
    // 0x80800520: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_4:
    // 0x80800524: bnel        $v0, $zero, L_8080055C
    if (ctx->r2 != 0) {
        // 0x80800528: lui         $a1, 0x3C23
        ctx->r5 = S32(0X3C23 << 16);
            goto L_8080055C;
    }
    goto skip_0;
    // 0x80800528: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
    skip_0:
    // 0x8080052C: jal         0x800DC0C0
    // 0x80800530: nop

    func_800DC0C0(rdram, ctx);
        goto after_5;
    // 0x80800530: nop

    after_5:
    // 0x80800534: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80800538: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8080053C: nop

    // 0x80800540: c.lt.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl < ctx->f6.fl;
    // 0x80800544: nop

    // 0x80800548: bc1fl       L_8080055C
    if (!c1cs) {
        // 0x8080054C: lui         $a1, 0x3C23
        ctx->r5 = S32(0X3C23 << 16);
            goto L_8080055C;
    }
    goto skip_1;
    // 0x8080054C: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
    skip_1:
    // 0x80800550: jal         0x80000030
    // 0x80800554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800030_bsswim(rdram, ctx);
        goto after_6;
    // 0x80800554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800558: lui         $a1, 0x3C23
    ctx->r5 = S32(0X3C23 << 16);
L_8080055C:
    // 0x8080055C: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x80800560: jal         0x8008B348
    // 0x80800564: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x80800564: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_7:
    // 0x80800568: beq         $v0, $zero, L_80800598
    if (ctx->r2 == 0) {
        // 0x8080056C: lui         $a2, 0x3F59
        ctx->r6 = S32(0X3F59 << 16);
            goto L_80800598;
    }
    // 0x8080056C: lui         $a2, 0x3F59
    ctx->r6 = S32(0X3F59 << 16);
    // 0x80800570: lui         $a3, 0x3F93
    ctx->r7 = S32(0X3F93 << 16);
    // 0x80800574: addiu       $t6, $zero, 0x3E80
    ctx->r14 = ADD32(0, 0X3E80);
    // 0x80800578: addiu       $t7, $zero, 0x3E80
    ctx->r15 = ADD32(0, 0X3E80);
    // 0x8080057C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80800580: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800584: ori         $a3, $a3, 0x3333
    ctx->r7 = ctx->r7 | 0X3333;
    // 0x80800588: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x8080058C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800590: jal         0x8009DEC0
    // 0x80800594: addiu       $a1, $zero, 0x46F
    ctx->r5 = ADD32(0, 0X46F);
    func_8009DEC0(rdram, ctx);
        goto after_8;
    // 0x80800594: addiu       $a1, $zero, 0x46F
    ctx->r5 = ADD32(0, 0X46F);
    after_8:
L_80800598:
    // 0x80800598: lui         $a1, 0x3EDE
    ctx->r5 = S32(0X3EDE << 16);
    // 0x8080059C: ori         $a1, $a1, 0x9E1B
    ctx->r5 = ctx->r5 | 0X9E1B;
    // 0x808005A0: jal         0x8008B348
    // 0x808005A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_8008B348(rdram, ctx);
        goto after_9;
    // 0x808005A4: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_9:
    // 0x808005A8: beq         $v0, $zero, L_808005B8
    if (ctx->r2 == 0) {
        // 0x808005AC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808005B8;
    }
    // 0x808005AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808005B0: jal         0x800000E0
    // 0x808005B4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_808000E0_bsswim(rdram, ctx);
        goto after_10;
    // 0x808005B4: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_10:
L_808005B8:
    // 0x808005B8: jal         0x8009EF10
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_11;
    // 0x808005BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808005C0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808005C4: bne         $v0, $at, L_808005D0
    if (ctx->r2 != ctx->r1) {
        // 0x808005C8: addiu       $t8, $zero, 0x2E
        ctx->r24 = ADD32(0, 0X2E);
            goto L_808005D0;
    }
    // 0x808005C8: addiu       $t8, $zero, 0x2E
    ctx->r24 = ADD32(0, 0X2E);
    // 0x808005CC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_808005D0:
    // 0x808005D0: jal         0x8008E35C
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_12;
    // 0x808005D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808005D8: bne         $v0, $zero, L_808005E4
    if (ctx->r2 != 0) {
        // 0x808005DC: addiu       $t9, $zero, 0x1
        ctx->r25 = ADD32(0, 0X1);
            goto L_808005E4;
    }
    // 0x808005DC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x808005E0: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_808005E4:
    // 0x808005E4: jal         0x80097AD0
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097AD0(rdram, ctx);
        goto after_13;
    // 0x808005E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808005EC: beq         $v0, $zero, L_80800600
    if (ctx->r2 == 0) {
        // 0x808005F0: nop
    
            goto L_80800600;
    }
    // 0x808005F0: nop

    // 0x808005F4: jal         0x800848A8
    // 0x808005F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _badrone_entrypoint_24(rdram, ctx);
        goto after_14;
    // 0x808005F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_14:
    // 0x808005FC: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_80800600:
    // 0x80800600: jal         0x80097F48
    // 0x80800604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097F48(rdram, ctx);
        goto after_15;
    // 0x80800604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800608: beq         $v0, $zero, L_8080061C
    if (ctx->r2 == 0) {
        // 0x8080060C: nop
    
            goto L_8080061C;
    }
    // 0x8080060C: nop

    // 0x80800610: jal         0x80000000
    // 0x80800614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsswim(rdram, ctx);
        goto after_16;
    // 0x80800614: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800618: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
L_8080061C:
    // 0x8080061C: jal         0x80096500
    // 0x80800620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096500(rdram, ctx);
        goto after_17;
    // 0x80800620: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800624: beq         $v0, $zero, L_80800640
    if (ctx->r2 == 0) {
        // 0x80800628: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800640;
    }
    // 0x80800628: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080062C: jal         0x80091A58
    // 0x80800630: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_18;
    // 0x80800630: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_18:
    // 0x80800634: beq         $v0, $zero, L_80800640
    if (ctx->r2 == 0) {
        // 0x80800638: addiu       $t0, $zero, 0x5
        ctx->r8 = ADD32(0, 0X5);
            goto L_80800640;
    }
    // 0x80800638: addiu       $t0, $zero, 0x5
    ctx->r8 = ADD32(0, 0X5);
    // 0x8080063C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_80800640:
    // 0x80800640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800644: jal         0x80095738
    // 0x80800648: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80095738(rdram, ctx);
        goto after_19;
    // 0x80800648: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_19:
    // 0x8080064C: bne         $v0, $zero, L_80800660
    if (ctx->r2 != 0) {
        // 0x80800650: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800660;
    }
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800654: jal         0x80095738
    // 0x80800658: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_80095738(rdram, ctx);
        goto after_20;
    // 0x80800658: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_20:
    // 0x8080065C: beq         $v0, $zero, L_80800668
    if (ctx->r2 == 0) {
        // 0x80800660: addiu       $t1, $zero, 0xD
        ctx->r9 = ADD32(0, 0XD);
            goto L_80800668;
    }
L_80800660:
    // 0x80800660: addiu       $t1, $zero, 0xD
    ctx->r9 = ADD32(0, 0XD);
    // 0x80800664: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_80800668:
    // 0x80800668: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080066C: jal         0x8009E5C8
    // 0x80800670: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_21;
    // 0x80800670: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_21:
    // 0x80800674: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800678: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080067C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80800680: jr          $ra
    // 0x80800684: nop

    return;
    // 0x80800684: nop

;}
RECOMP_FUNC void func_80800688_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800688: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080068C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800690: jal         0x80000270
    // 0x80800694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80800270_bsswim(rdram, ctx);
        goto after_0;
    // 0x80800694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800698: jal         0x800A4E30
    // 0x8080069C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4E30(rdram, ctx);
        goto after_1;
    // 0x8080069C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808006A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808006A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808006A8: jr          $ra
    // 0x808006AC: nop

    return;
    // 0x808006AC: nop

;}
RECOMP_FUNC void bsswim_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006B0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808006B4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(152, 0XBA4) << 16);
    // 0x808006B8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808006BC: jr          $ra
    // 0x808006C0: lw          $v0, 0xBA4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(152, 0XBA4));
    return;
    // 0x808006C0: lw          $v0, 0xBA4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(152, 0XBA4));
;}
RECOMP_FUNC void func_808006C4_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808006C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808006CC: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808006D0: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x808006D4: jal         0x8008CABC
    // 0x808006D8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808006D8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x808006DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x808006E0: jal         0x800001DC
    // 0x808006E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_808001DC_bsswim(rdram, ctx);
        goto after_1;
    // 0x808006E4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x808006E8: jal         0x8009E710
    // 0x808006EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009E710(rdram, ctx);
        goto after_2;
    // 0x808006EC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x808006F0: addiu       $at, $zero, 0x4C
    ctx->r1 = ADD32(0, 0X4C);
    // 0x808006F4: bne         $v0, $at, L_80800708
    if (ctx->r2 != ctx->r1) {
        // 0x808006F8: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(152, 0XB78) << 16);
            goto L_80800708;
    }
    // 0x808006F8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(152, 0XB78) << 16);
    // 0x808006FC: lwc1        $f4, 0xB78($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(152, 0XB78));
    // 0x80800700: b           L_80800714
    // 0x80800704: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
        goto L_80800714;
    // 0x80800704: swc1        $f4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f4.u32l;
L_80800708:
    // 0x80800708: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(152, 0XB7C) << 16);
    // 0x8080070C: lwc1        $f6, 0xB7C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(152, 0XB7C));
    // 0x80800710: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_80800714:
    // 0x80800714: jal         0x8008B264
    // 0x80800718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B264(rdram, ctx);
        goto after_3;
    // 0x80800718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8080071C: addiu       $at, $zero, 0x39
    ctx->r1 = ADD32(0, 0X39);
    // 0x80800720: beql        $v0, $at, L_80800770
    if (ctx->r2 == ctx->r1) {
        // 0x80800724: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80800770;
    }
    goto skip_0;
    // 0x80800724: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_0:
    // 0x80800728: jal         0x8008AF24
    // 0x8080072C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008AF24(rdram, ctx);
        goto after_4;
    // 0x8080072C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800730: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800734: jal         0x8008AED4
    // 0x80800738: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    func_8008AED4(rdram, ctx);
        goto after_5;
    // 0x80800738: addiu       $a1, $zero, 0x39
    ctx->r5 = ADD32(0, 0X39);
    after_5:
    // 0x8080073C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800740: jal         0x8008B1C8
    // 0x80800744: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    func_8008B1C8(rdram, ctx);
        goto after_6;
    // 0x80800744: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    after_6:
    // 0x80800748: lui         $a1, 0x3F4C
    ctx->r5 = S32(0X3F4C << 16);
    // 0x8080074C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80800750: jal         0x8008B24C
    // 0x80800754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_7;
    // 0x80800754: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800758: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080075C: jal         0x8008B134
    // 0x80800760: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x80800760: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x80800764: jal         0x8008B064
    // 0x80800768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x80800768: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080076C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80800770:
    // 0x80800770: jal         0x8008CA4C
    // 0x80800774: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008CA4C(rdram, ctx);
        goto after_10;
    // 0x80800774: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_10:
    // 0x80800778: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x8080077C: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80800780: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800784: jal         0x8008C9BC
    // 0x80800788: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_11;
    // 0x80800788: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_11:
    // 0x8080078C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(152, 0XB80) << 16);
    // 0x80800790: lwc1        $f8, 0xB80($at)
    ctx->f8.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(152, 0XB80));
    // 0x80800794: lui         $a3, 0x3F99
    ctx->r7 = S32(0X3F99 << 16);
    // 0x80800798: ori         $a3, $a3, 0x999A
    ctx->r7 = ctx->r7 | 0X999A;
    // 0x8080079C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808007A0: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x808007A4: lui         $a2, 0x4396
    ctx->r6 = S32(0X4396 << 16);
    // 0x808007A8: jal         0x8008C9F0
    // 0x808007AC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_12;
    // 0x808007AC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_12:
    // 0x808007B0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808007B4: jal         0x8009C908
    // 0x808007B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009C908(rdram, ctx);
        goto after_13;
    // 0x808007B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_13:
    // 0x808007BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808007C0: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    // 0x808007C4: jal         0x8009C99C
    // 0x808007C8: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8009C99C(rdram, ctx);
        goto after_14;
    // 0x808007C8: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_14:
    // 0x808007CC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808007D0: jal         0x8009D2D8
    // 0x808007D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009D2D8(rdram, ctx);
        goto after_15;
    // 0x808007D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_15:
    // 0x808007D8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808007DC: jal         0x8009B800
    // 0x808007E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009B800(rdram, ctx);
        goto after_16;
    // 0x808007E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_16:
    // 0x808007E4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808007E8: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808007EC: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808007F0: jr          $ra
    // 0x808007F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x808007F4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_808007F8_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808007F8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x808007FC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800800: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800804: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800808: jal         0x8008CABC
    // 0x8080080C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x8080080C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    after_0:
    // 0x80800810: lui         $a1, 0x3EC2
    ctx->r5 = S32(0X3EC2 << 16);
    // 0x80800814: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800818: ori         $a1, $a1, 0x8F5C
    ctx->r5 = ctx->r5 | 0X8F5C;
    // 0x8080081C: jal         0x8008B348
    // 0x80800820: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x80800820: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800824: beq         $v0, $zero, L_80800834
    if (ctx->r2 == 0) {
        // 0x80800828: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800834;
    }
    // 0x80800828: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080082C: jal         0x8009FD24
    // 0x80800830: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009FD24(rdram, ctx);
        goto after_2;
    // 0x80800830: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
L_80800834:
    // 0x80800834: lui         $a1, 0x3F61
    ctx->r5 = S32(0X3F61 << 16);
    // 0x80800838: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    // 0x8080083C: jal         0x8008B348
    // 0x80800840: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x80800840: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_3:
    // 0x80800844: beq         $v0, $zero, L_80800854
    if (ctx->r2 == 0) {
        // 0x80800848: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800854;
    }
    // 0x80800848: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080084C: jal         0x8009FD24
    // 0x80800850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009FD24(rdram, ctx);
        goto after_4;
    // 0x80800850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_80800854:
    // 0x80800854: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x80800858: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x8080085C: jal         0x8008B348
    // 0x80800860: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x80800860: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_5:
    // 0x80800864: beq         $v0, $zero, L_80800884
    if (ctx->r2 == 0) {
        // 0x80800868: lui         $a2, 0x3F66
        ctx->r6 = S32(0X3F66 << 16);
            goto L_80800884;
    }
    // 0x80800868: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x8080086C: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x80800870: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80800874: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800878: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080087C: jal         0x8009DE74
    // 0x80800880: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    func_8009DE74(rdram, ctx);
        goto after_6;
    // 0x80800880: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    after_6:
L_80800884:
    // 0x80800884: lui         $a1, 0x3F33
    ctx->r5 = S32(0X3F33 << 16);
    // 0x80800888: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x8080088C: jal         0x8008B348
    // 0x80800890: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x80800890: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    after_7:
    // 0x80800894: beq         $v0, $zero, L_808008B4
    if (ctx->r2 == 0) {
        // 0x80800898: lui         $a2, 0x3F66
        ctx->r6 = S32(0X3F66 << 16);
            goto L_808008B4;
    }
    // 0x80800898: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x8080089C: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x808008A0: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x808008A4: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x808008A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008AC: jal         0x8009DE74
    // 0x808008B0: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    func_8009DE74(rdram, ctx);
        goto after_8;
    // 0x808008B0: addiu       $a1, $zero, 0x40C
    ctx->r5 = ADD32(0, 0X40C);
    after_8:
L_808008B4:
    // 0x808008B4: jal         0x80000178
    // 0x808008B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800178_bsswim(rdram, ctx);
        goto after_9;
    // 0x808008B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808008BC: jal         0x8009EF10
    // 0x808008C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_10;
    // 0x808008C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x808008C4: bne         $v0, $zero, L_808008D0
    if (ctx->r2 != 0) {
        // 0x808008C8: addiu       $t6, $zero, 0x2D
        ctx->r14 = ADD32(0, 0X2D);
            goto L_808008D0;
    }
    // 0x808008C8: addiu       $t6, $zero, 0x2D
    ctx->r14 = ADD32(0, 0X2D);
    // 0x808008CC: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_808008D0:
    // 0x808008D0: jal         0x8008E35C
    // 0x808008D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_11;
    // 0x808008D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808008D8: bne         $v0, $zero, L_808008E4
    if (ctx->r2 != 0) {
        // 0x808008DC: addiu       $t7, $zero, 0x1
        ctx->r15 = ADD32(0, 0X1);
            goto L_808008E4;
    }
    // 0x808008DC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x808008E0: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_808008E4:
    // 0x808008E4: jal         0x8009650C
    // 0x808008E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009650C(rdram, ctx);
        goto after_12;
    // 0x808008E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x808008EC: beq         $v0, $zero, L_80800968
    if (ctx->r2 == 0) {
        // 0x808008F0: nop
    
            goto L_80800968;
    }
    // 0x808008F0: nop

    // 0x808008F4: jal         0x8008D214
    // 0x808008F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008D214(rdram, ctx);
        goto after_13;
    // 0x808008F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x808008FC: beq         $v0, $zero, L_80800968
    if (ctx->r2 == 0) {
        // 0x80800900: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800968;
    }
    // 0x80800900: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800904: jal         0x80096440
    // 0x80800908: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80096440(rdram, ctx);
        goto after_14;
    // 0x80800908: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_14:
    // 0x8080090C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(152, 0XB84) << 16);
    // 0x80800910: lwc1        $f6, 0xB84($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(152, 0XB84));
    // 0x80800914: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80800918: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8080091C: nop

    // 0x80800920: bc1f        L_80800968
    if (!c1cs) {
        // 0x80800924: nop
    
            goto L_80800968;
    }
    // 0x80800924: nop

    // 0x80800928: jal         0x800964DC
    // 0x8080092C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800964DC(rdram, ctx);
        goto after_15;
    // 0x8080092C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80800930: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80800934: jal         0x8009C150
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C150(rdram, ctx);
        goto after_16;
    // 0x80800938: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x8080093C: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80800940: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80800944: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80800948: sub.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl - ctx->f0.fl;
    // 0x8080094C: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x80800950: nop

    // 0x80800954: bc1f        L_80800968
    if (!c1cs) {
        // 0x80800958: nop
    
            goto L_80800968;
    }
    // 0x80800958: nop

    // 0x8080095C: jal         0x80000000
    // 0x80800960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsswim(rdram, ctx);
        goto after_17;
    // 0x80800960: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80800964: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_80800968:
    // 0x80800968: jal         0x80097F48
    // 0x8080096C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80097F48(rdram, ctx);
        goto after_18;
    // 0x8080096C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800970: beq         $v0, $zero, L_80800984
    if (ctx->r2 == 0) {
        // 0x80800974: nop
    
            goto L_80800984;
    }
    // 0x80800974: nop

    // 0x80800978: jal         0x80000000
    // 0x8080097C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bsswim(rdram, ctx);
        goto after_19;
    // 0x8080097C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x80800980: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
L_80800984:
    // 0x80800984: jal         0x80096500
    // 0x80800988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80096500(rdram, ctx);
        goto after_20;
    // 0x80800988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x8080098C: beq         $v0, $zero, L_808009A8
    if (ctx->r2 == 0) {
        // 0x80800990: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009A8;
    }
    // 0x80800990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800994: jal         0x80091A58
    // 0x80800998: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_21;
    // 0x80800998: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_21:
    // 0x8080099C: beq         $v0, $zero, L_808009A8
    if (ctx->r2 == 0) {
        // 0x808009A0: addiu       $t8, $zero, 0x5
        ctx->r24 = ADD32(0, 0X5);
            goto L_808009A8;
    }
    // 0x808009A0: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x808009A4: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_808009A8:
    // 0x808009A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009AC: jal         0x80095738
    // 0x808009B0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    func_80095738(rdram, ctx);
        goto after_22;
    // 0x808009B0: addiu       $a1, $zero, 0x6
    ctx->r5 = ADD32(0, 0X6);
    after_22:
    // 0x808009B4: bne         $v0, $zero, L_808009C8
    if (ctx->r2 != 0) {
        // 0x808009B8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009C8;
    }
    // 0x808009B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009BC: jal         0x80095738
    // 0x808009C0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    func_80095738(rdram, ctx);
        goto after_23;
    // 0x808009C0: addiu       $a1, $zero, 0x14
    ctx->r5 = ADD32(0, 0X14);
    after_23:
    // 0x808009C4: beq         $v0, $zero, L_808009D0
    if (ctx->r2 == 0) {
        // 0x808009C8: addiu       $t9, $zero, 0xD
        ctx->r25 = ADD32(0, 0XD);
            goto L_808009D0;
    }
L_808009C8:
    // 0x808009C8: addiu       $t9, $zero, 0xD
    ctx->r25 = ADD32(0, 0XD);
    // 0x808009CC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_808009D0:
    // 0x808009D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009D4: jal         0x8009E5C8
    // 0x808009D8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_24;
    // 0x808009D8: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_24:
    // 0x808009DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808009E0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808009E4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808009E8: jr          $ra
    // 0x808009EC: nop

    return;
    // 0x808009EC: nop

;}
RECOMP_FUNC void func_808009F0_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808009F0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808009F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808009F8: jal         0x80000270
    // 0x808009FC: nop

    func_80800270_bsswim(rdram, ctx);
        goto after_0;
    // 0x808009FC: nop

    after_0:
    // 0x80800A00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A08: jr          $ra
    // 0x80800A0C: nop

    return;
    // 0x80800A0C: nop

;}
RECOMP_FUNC void bsswim_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A10: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800A14: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(152, 0XBB4) << 16);
    // 0x80800A18: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800A1C: jr          $ra
    // 0x80800A20: lw          $v0, 0xBB4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(152, 0XBB4));
    return;
    // 0x80800A20: lw          $v0, 0xBB4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(152, 0XBB4));
;}
RECOMP_FUNC void func_80800A24_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A2C: jal         0x800839B8
    // 0x80800A30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsrest_entrypoint_14(rdram, ctx);
        goto after_0;
    // 0x80800A30: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A34: jal         0x80000270
    // 0x80800A38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800270_bsswim(rdram, ctx);
        goto after_1;
    // 0x80800A38: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A44: jr          $ra
    // 0x80800A48: nop

    return;
    // 0x80800A48: nop

;}
RECOMP_FUNC void func_80800A4C_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A4C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800A50: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A54: jal         0x800001DC
    // 0x80800A58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808001DC_bsswim(rdram, ctx);
        goto after_0;
    // 0x80800A58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800A5C: jal         0x800839C8
    // 0x80800A60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsrest_entrypoint_16(rdram, ctx);
        goto after_1;
    // 0x80800A60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800A64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800A68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800A6C: jr          $ra
    // 0x80800A70: nop

    return;
    // 0x80800A70: nop

;}
RECOMP_FUNC void func_80800A74_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A74: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800A78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800A7C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800A80: jal         0x800839E8
    // 0x80800A84: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _bsrest_entrypoint_20(rdram, ctx);
        goto after_0;
    // 0x80800A84: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800A88: beq         $v0, $zero, L_80800A9C
    if (ctx->r2 == 0) {
        // 0x80800A8C: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80800A9C;
    }
    // 0x80800A8C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80800A90: jal         0x800839B0
    // 0x80800A94: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsrest_entrypoint_13(rdram, ctx);
        goto after_1;
    // 0x80800A94: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800A98: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80800A9C:
    // 0x80800A9C: jal         0x8009E5C8
    // 0x80800AA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800AA0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x80800AA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800AA8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800AAC: jr          $ra
    // 0x80800AB0: nop

    return;
    // 0x80800AB0: nop

;}
RECOMP_FUNC void bsswim_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AB4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800AB8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(152, 0XBC4) << 16);
    // 0x80800ABC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800AC0: jr          $ra
    // 0x80800AC4: lw          $v0, 0xBC4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(152, 0XBC4));
    return;
    // 0x80800AC4: lw          $v0, 0xBC4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(152, 0XBC4));
;}
RECOMP_FUNC void func_80800AC8_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800ACC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AD0: jal         0x800001DC
    // 0x80800AD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_808001DC_bsswim(rdram, ctx);
        goto after_0;
    // 0x80800AD4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800AD8: jal         0x80082FE0
    // 0x80800ADC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _bsdrone_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800ADC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800AE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800AE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800AE8: jr          $ra
    // 0x80800AEC: nop

    return;
    // 0x80800AEC: nop

;}
RECOMP_FUNC void func_80800AF0_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800AF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800AF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800AF8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80800AFC: jal         0x800848D8
    // 0x80800B00: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    _badrone_entrypoint_30(rdram, ctx);
        goto after_0;
    // 0x80800B00: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    after_0:
    // 0x80800B04: beq         $v0, $zero, L_80800B10
    if (ctx->r2 == 0) {
        // 0x80800B08: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_80800B10;
    }
    // 0x80800B08: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800B0C: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80800B10:
    // 0x80800B10: jal         0x80082FE8
    // 0x80800B14: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _bsdrone_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800B14: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800B18: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800B1C: jal         0x8009E5C8
    // 0x80800B20: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_8009E5C8(rdram, ctx);
        goto after_2;
    // 0x80800B20: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x80800B24: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800B2C: jr          $ra
    // 0x80800B30: nop

    return;
    // 0x80800B30: nop

;}
RECOMP_FUNC void func_80800B34_bsswim(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B3C: jal         0x80082FF0
    // 0x80800B40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    _bsdrone_entrypoint_2(rdram, ctx);
        goto after_0;
    // 0x80800B40: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800B44: jal         0x80000270
    // 0x80800B48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800270_bsswim(rdram, ctx);
        goto after_1;
    // 0x80800B48: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B50: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B54: jr          $ra
    // 0x80800B58: nop

    return;
    // 0x80800B58: nop

;}
RECOMP_FUNC void bsswim_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B5C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800B60: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(152, 0XBD4) << 16);
    // 0x80800B64: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800B68: jr          $ra
    // 0x80800B6C: lw          $v0, 0xBD4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(152, 0XBD4));
    return;
    // 0x80800B6C: lw          $v0, 0xBD4($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(152, 0XBD4));
;}
RECOMP_FUNC void bstalk_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080000C: jal         0x8008CABC
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800014: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80800018: jal         0x8008AF24
    // 0x8080001C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x8080001C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800020: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800024: jal         0x800A0110
    // 0x80800028: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_800A0110(rdram, ctx);
        goto after_2;
    // 0x80800028: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_2:
    // 0x8080002C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80800030: jal         0x8008B134
    // 0x80800034: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_3;
    // 0x80800034: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x80800038: jal         0x8008B064
    // 0x8080003C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    func_8008B064(rdram, ctx);
        goto after_4;
    // 0x8080003C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    after_4:
    // 0x80800040: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800044: jal         0x8009C128
    // 0x80800048: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_5;
    // 0x80800048: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_5:
    // 0x8080004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800050: jal         0x800A33A0
    // 0x80800054: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800A33A0(rdram, ctx);
        goto after_6;
    // 0x80800054: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_6:
    // 0x80800058: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8080005C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80800060: jal         0x800F1E6C
    // 0x80800064: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_800F1E6C(rdram, ctx);
        goto after_7;
    // 0x80800064: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_7:
    // 0x80800068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080006C: jal         0x8009C914
    // 0x80800070: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_8009C914(rdram, ctx);
        goto after_8;
    // 0x80800070: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_8:
    // 0x80800074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800078: jal         0x8008CA4C
    // 0x8080007C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_9;
    // 0x8080007C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x80800080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800084: jal         0x8009C908
    // 0x80800088: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009C908(rdram, ctx);
        goto after_10;
    // 0x80800088: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x8080008C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800090: jal         0x8009D2D8
    // 0x80800094: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009D2D8(rdram, ctx);
        goto after_11;
    // 0x80800094: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_11:
    // 0x80800098: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080009C: jal         0x8009B800
    // 0x808000A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009B800(rdram, ctx);
        goto after_12;
    // 0x808000A0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_12:
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000A8: jal         0x8009B9B0
    // 0x808000AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_13;
    // 0x808000AC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_13:
    // 0x808000B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808000B4: sw          $t6, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r14;
    // 0x808000B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000BC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808000C0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808000C4: jr          $ra
    // 0x808000C8: nop

    return;
    // 0x808000C8: nop

;}
RECOMP_FUNC void bstalk_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000D4: lw          $t6, 0x15C($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X15C);
    // 0x808000D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808000DC: bne         $t6, $zero, L_808000E8
    if (ctx->r14 != 0) {
        // 0x808000E0: nop
    
            goto L_808000E8;
    }
    // 0x808000E0: nop

    // 0x808000E4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_808000E8:
    // 0x808000E8: jal         0x8009E5C8
    // 0x808000EC: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    func_8009E5C8(rdram, ctx);
        goto after_0;
    // 0x808000EC: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
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
RECOMP_FUNC void bstalk_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800100: jr          $ra
    // 0x80800104: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800104: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void bstalk_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800108: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8080010C: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(153, 0X170) << 16);
    // 0x80800110: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800114: jr          $ra
    // 0x80800118: lw          $v0, 0x170($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(153, 0X170));
    return;
    // 0x80800118: lw          $v0, 0x170($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(153, 0X170));
;}
RECOMP_FUNC void bstalk_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080011C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800124: jal         0x8009E6EC
    // 0x80800128: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800128: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080012C: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80800130: bne         $v0, $at, L_80800150
    if (ctx->r2 != ctx->r1) {
        // 0x80800134: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80800150;
    }
    // 0x80800134: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80800138: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8080013C: sw          $t6, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = ctx->r14;
    // 0x80800140: jal         0x8009E830
    // 0x80800144: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_1;
    // 0x80800144: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_1:
    // 0x80800148: b           L_8080015C
    // 0x8080014C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080015C;
    // 0x8080014C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800150:
    // 0x80800150: jal         0x80099B94
    // 0x80800154: nop

    func_80099B94(rdram, ctx);
        goto after_2;
    // 0x80800154: nop

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
RECOMP_FUNC void func_80800000_bstaxi(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80800044: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x80800044: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
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
RECOMP_FUNC void func_80800064_bstaxi(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080006C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80800070: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800074: jal         0x80091A30
    // 0x80800078: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A30(rdram, ctx);
        goto after_0;
    // 0x80800078: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8080007C: beq         $v0, $zero, L_80800088
    if (ctx->r2 == 0) {
        // 0x80800080: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800088;
    }
    // 0x80800080: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800084: addiu       $v1, $zero, 0x127
    ctx->r3 = ADD32(0, 0X127);
L_80800088:
    // 0x80800088: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080008C: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80800090: jal         0x80091A58
    // 0x80800094: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80091A58(rdram, ctx);
        goto after_1;
    // 0x80800094: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x80800098: beq         $v0, $zero, L_808000A4
    if (ctx->r2 == 0) {
        // 0x8080009C: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_808000A4;
    }
    // 0x8080009C: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808000A0: addiu       $v1, $zero, 0x124
    ctx->r3 = ADD32(0, 0X124);
L_808000A4:
    // 0x808000A4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808000A8: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x808000AC: jal         0x80091A58
    // 0x808000B0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    func_80091A58(rdram, ctx);
        goto after_2;
    // 0x808000B0: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_2:
    // 0x808000B4: beq         $v0, $zero, L_808000C0
    if (ctx->r2 == 0) {
        // 0x808000B8: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_808000C0;
    }
    // 0x808000B8: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808000BC: addiu       $v1, $zero, 0x126
    ctx->r3 = ADD32(0, 0X126);
L_808000C0:
    // 0x808000C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000C8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x808000CC: jr          $ra
    // 0x808000D0: nop

    return;
    // 0x808000D0: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000D4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808000D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000E0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000E4: jal         0x8009E74C
    // 0x808000E8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8009E74C(rdram, ctx);
        goto after_0;
    // 0x808000E8: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x808000EC: bne         $v0, $zero, L_80800130
    if (ctx->r2 != 0) {
        // 0x808000F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800130;
    }
    // 0x808000F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F4: jal         0x800A0CD0
    // 0x808000F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_1;
    // 0x808000F8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x808000FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800100: jal         0x80084538
    // 0x80800104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_2;
    // 0x80800104: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080010C: jal         0x8009BF5C
    // 0x80800110: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_3;
    // 0x80800110: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800114: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800118: jal         0x8009C4CC
    // 0x8080011C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_4;
    // 0x8080011C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
    // 0x80800120: jal         0x8009EF60
    // 0x80800124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF60(rdram, ctx);
        goto after_5;
    // 0x80800124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800128: jal         0x8009E474
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E474(rdram, ctx);
        goto after_6;
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
L_80800130:
    // 0x80800130: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800134: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800138: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8080013C: jr          $ra
    // 0x80800140: nop

    return;
    // 0x80800140: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800144: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800148: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080014C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800150: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800154: jal         0x8009E77C
    // 0x80800158: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    func_8009E77C(rdram, ctx);
        goto after_0;
    // 0x80800158: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    after_0:
    // 0x8080015C: bnel        $v0, $zero, L_8080019C
    if (ctx->r2 != 0) {
        // 0x80800160: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8080019C;
    }
    goto skip_0;
    // 0x80800160: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80800164: jal         0x8009EFA8
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EFA8(rdram, ctx);
        goto after_1;
    // 0x80800168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8080016C: lui         $a2, 0x3DF5
    ctx->r6 = S32(0X3DF5 << 16);
    // 0x80800170: ori         $a2, $a2, 0xC28F
    ctx->r6 = ctx->r6 | 0XC28F;
    // 0x80800174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800178: jal         0x8009F1C8
    // 0x8080017C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009F1C8(rdram, ctx);
        goto after_2;
    // 0x8080017C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800184: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800188: jal         0x8009F1C8
    // 0x8080018C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8009F1C8(rdram, ctx);
        goto after_3;
    // 0x8080018C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_3:
    // 0x80800190: jal         0x8009E4AC
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009E4AC(rdram, ctx);
        goto after_4;
    // 0x80800194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800198: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8080019C:
    // 0x8080019C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808001A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001A4: jr          $ra
    // 0x808001A8: nop

    return;
    // 0x808001A8: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001B4: jal         0x800000D4
    // 0x808001B8: sw          $zero, 0x160($a0)
    MEM_W(0X160, ctx->r4) = 0;
    bstaxi_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x808001B8: sw          $zero, 0x160($a0)
    MEM_W(0X160, ctx->r4) = 0;
    after_0:
    // 0x808001BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808001C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808001C4: jr          $ra
    // 0x808001C8: nop

    return;
    // 0x808001C8: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001CC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808001D0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808001D4: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808001D8: jal         0x80000144
    // 0x808001DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstaxi_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808001DC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808001E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E4: addiu       $a1, $zero, 0x129
    ctx->r5 = ADD32(0, 0X129);
    // 0x808001E8: jal         0x8008CCBC
    // 0x808001EC: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x808001EC: lui         $a2, 0x40A0
    ctx->r6 = S32(0X40A0 << 16);
    after_1:
    // 0x808001F0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808001F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808001F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800200: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800204: jal         0x8009FFD8
    // 0x80800208: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800208: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800210: jal         0x8009B9B0
    // 0x80800214: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80800214: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080021C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800220: jal         0x80098140
    // 0x80800224: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098140(rdram, ctx);
        goto after_4;
    // 0x80800224: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x80800228: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8080022C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800230: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800234: jr          $ra
    // 0x80800238: nop

    return;
    // 0x80800238: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080023C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800240: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800244: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800248: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080024C: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
    // 0x80800250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800254: jal         0x80098140
    // 0x80800258: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098140(rdram, ctx);
        goto after_0;
    // 0x80800258: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8080025C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800260: jal         0x8009D3A8
    // 0x80800264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x80800264: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800268: lui         $a1, 0x3C83
    ctx->r5 = S32(0X3C83 << 16);
    // 0x8080026C: ori         $a1, $a1, 0xE426
    ctx->r5 = ctx->r5 | 0XE426;
    // 0x80800270: jal         0x8008CB10
    // 0x80800274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_2;
    // 0x80800274: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80800278: beq         $v0, $zero, L_80800294
    if (ctx->r2 == 0) {
        // 0x8080027C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800294;
    }
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800280: jal         0x80084538
    // 0x80800284: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _babackpack_set_state(rdram, ctx);
        goto after_3;
    // 0x80800284: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080028C: jal         0x800A0CD0
    // 0x80800290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CD0(rdram, ctx);
        goto after_4;
    // 0x80800290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_80800294:
    // 0x80800294: lui         $a1, 0x3EA8
    ctx->r5 = S32(0X3EA8 << 16);
    // 0x80800298: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    // 0x8080029C: jal         0x8008CB10
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_5;
    // 0x808002A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x808002A4: beq         $v0, $zero, L_808002BC
    if (ctx->r2 == 0) {
        // 0x808002A8: lui         $a2, 0x0
        ctx->r6 = S32(RELOC_HI16(154, 0X20D0) << 16);
            goto L_808002BC;
    }
    // 0x808002A8: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(154, 0X20D0) << 16);
    // 0x808002AC: addiu       $a2, $a2, 0x20D0
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(154, 0X20D0));
    // 0x808002B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002B4: jal         0x8009D454
    // 0x808002B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D454(rdram, ctx);
        goto after_6;
    // 0x808002B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_808002BC:
    // 0x808002BC: lui         $a1, 0x3EDE
    ctx->r5 = S32(0X3EDE << 16);
    // 0x808002C0: ori         $a1, $a1, 0xB852
    ctx->r5 = ctx->r5 | 0XB852;
    // 0x808002C4: jal         0x8008CB10
    // 0x808002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_7;
    // 0x808002C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x808002CC: beq         $v0, $zero, L_808002E4
    if (ctx->r2 == 0) {
        // 0x808002D0: lui         $a2, 0x0
        ctx->r6 = S32(RELOC_HI16(154, 0X20F0) << 16);
            goto L_808002E4;
    }
    // 0x808002D0: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(154, 0X20F0) << 16);
    // 0x808002D4: addiu       $a2, $a2, 0x20F0
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(154, 0X20F0));
    // 0x808002D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002DC: jal         0x8009D454
    // 0x808002E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D454(rdram, ctx);
        goto after_8;
    // 0x808002E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
L_808002E4:
    // 0x808002E4: lui         $a1, 0x3F0B
    ctx->r5 = S32(0X3F0B << 16);
    // 0x808002E8: ori         $a1, $a1, 0x851F
    ctx->r5 = ctx->r5 | 0X851F;
    // 0x808002EC: jal         0x8008CB10
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_9;
    // 0x808002F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x808002F4: beq         $v0, $zero, L_8080030C
    if (ctx->r2 == 0) {
        // 0x808002F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080030C;
    }
    // 0x808002F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808002FC: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(154, 0X2110) << 16);
    // 0x80800300: addiu       $a2, $a2, 0x2110
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(154, 0X2110));
    // 0x80800304: jal         0x8009D454
    // 0x80800308: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D454(rdram, ctx);
        goto after_10;
    // 0x80800308: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
L_8080030C:
    // 0x8080030C: lui         $a1, 0x3F10
    ctx->r5 = S32(0X3F10 << 16);
    // 0x80800310: ori         $a1, $a1, 0xF27C
    ctx->r5 = ctx->r5 | 0XF27C;
    // 0x80800314: jal         0x8008CB10
    // 0x80800318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_11;
    // 0x80800318: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x8080031C: beq         $v0, $zero, L_80800378
    if (ctx->r2 == 0) {
        // 0x80800320: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800378;
    }
    // 0x80800320: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800324: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80800328: jal         0x80084518
    // 0x8080032C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    _babackpack_entrypoint_6(rdram, ctx);
        goto after_12;
    // 0x8080032C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80800330: jal         0x80084768
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bapackctrl_entrypoint_1(rdram, ctx);
        goto after_13;
    // 0x80800334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800338: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8080033C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800340: jal         0x80084780
    // 0x80800344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bapackctrl_entrypoint_4(rdram, ctx);
        goto after_14;
    // 0x80800344: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x80800348: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x8080034C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80800350: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800354: addiu       $a1, $zero, 0x5C2
    ctx->r5 = ADD32(0, 0X5C2);
    // 0x80800358: jal         0x8009DB04
    // 0x8080035C: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DB04(rdram, ctx);
        goto after_15;
    // 0x8080035C: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_15:
    // 0x80800360: jal         0x8009C984
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_16;
    // 0x80800364: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_16:
    // 0x80800368: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x8080036C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80800370: jal         0x800CB598
    // 0x80800374: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800CB598(rdram, ctx);
        goto after_17;
    // 0x80800374: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_17:
L_80800378:
    // 0x80800378: lui         $a1, 0x3F50
    ctx->r5 = S32(0X3F50 << 16);
    // 0x8080037C: ori         $a1, $a1, 0xB780
    ctx->r5 = ctx->r5 | 0XB780;
    // 0x80800380: jal         0x8008CB10
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_18;
    // 0x80800384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80800388: beq         $v0, $zero, L_808003A4
    if (ctx->r2 == 0) {
        // 0x8080038C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003A4;
    }
    // 0x8080038C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800390: jal         0x80084538
    // 0x80800394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_19;
    // 0x80800394: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_19:
    // 0x80800398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080039C: jal         0x800A0CD0
    // 0x808003A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_20;
    // 0x808003A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_20:
L_808003A4:
    // 0x808003A4: jal         0x8008CAEC
    // 0x808003A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_21;
    // 0x808003A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x808003AC: beq         $v0, $zero, L_808003B8
    if (ctx->r2 == 0) {
        // 0x808003B0: addiu       $t6, $zero, 0x1
        ctx->r14 = ADD32(0, 0X1);
            goto L_808003B8;
    }
    // 0x808003B0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x808003B4: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_808003B8:
    // 0x808003B8: jal         0x8008CAC8
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_22;
    // 0x808003BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x808003C0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X1DE0) << 16);
    // 0x808003C4: lwc1        $f4, 0x1DE0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(154, 0X1DE0));
    // 0x808003C8: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808003CC: nop

    // 0x808003D0: bc1fl       L_808003F0
    if (!c1cs) {
        // 0x808003D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808003F0;
    }
    goto skip_0;
    // 0x808003D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808003D8: jal         0x8009EF10
    // 0x808003DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_23;
    // 0x808003DC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x808003E0: blez        $v0, L_808003EC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x808003E4: addiu       $t7, $zero, 0x2
        ctx->r15 = ADD32(0, 0X2);
            goto L_808003EC;
    }
    // 0x808003E4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x808003E8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_808003EC:
    // 0x808003EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808003F0:
    // 0x808003F0: jal         0x8009E5C8
    // 0x808003F4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    func_8009E5C8(rdram, ctx);
        goto after_24;
    // 0x808003F4: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    after_24:
    // 0x808003F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808003FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800400: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80800404: jr          $ra
    // 0x80800408: nop

    return;
    // 0x80800408: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080040C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800410: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(154, 0X2130) << 16);
    // 0x80800414: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800418: jr          $ra
    // 0x8080041C: lw          $v0, 0x2130($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X2130));
    return;
    // 0x8080041C: lw          $v0, 0x2130($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X2130));
;}
RECOMP_FUNC void func_80800420_bstaxi(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800420: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800424: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800428: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8080042C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800430: jal         0x8009C128
    // 0x80800434: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_0;
    // 0x80800434: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80800438: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x8080043C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80800440: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80800444: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800448: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8080044C: jal         0x80084768
    // 0x80800450: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    _bapackctrl_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80800450: swc1        $f8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f8.u32l;
    after_1:
    // 0x80800454: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80800458: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080045C: jal         0x80084780
    // 0x80800460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bapackctrl_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x80800460: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80800464: lui         $a2, 0x3FE6
    ctx->r6 = S32(0X3FE6 << 16);
    // 0x80800468: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x8080046C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800470: addiu       $a1, $zero, 0x5C2
    ctx->r5 = ADD32(0, 0X5C2);
    // 0x80800474: jal         0x8009DB04
    // 0x80800478: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DB04(rdram, ctx);
        goto after_3;
    // 0x80800478: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    after_3:
    // 0x8080047C: jal         0x8009C984
    // 0x80800480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_4;
    // 0x80800480: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800484: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800488: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8080048C: jal         0x800CB598
    // 0x80800490: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800CB598(rdram, ctx);
        goto after_5;
    // 0x80800490: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_5:
    // 0x80800494: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800498: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080049C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808004A0: jr          $ra
    // 0x808004A4: nop

    return;
    // 0x808004A4: nop

;}
RECOMP_FUNC void func_808004A8_bstaxi(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808004A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808004AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808004B0: jal         0x8009E6EC
    // 0x808004B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x808004B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808004B8: addiu       $t6, $v0, -0x15
    ctx->r14 = ADD32(ctx->r2, -0X15);
    // 0x808004BC: sltiu       $at, $t6, 0x48
    ctx->r1 = ctx->r14 < 0X48 ? 1 : 0;
    // 0x808004C0: beq         $at, $zero, L_8080050C
    if (ctx->r1 == 0) {
        // 0x808004C4: sll         $t6, $t6, 2
        ctx->r14 = S32(ctx->r14 << 2);
            goto L_8080050C;
    }
    // 0x808004C4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x808004C8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X1DE4) << 16);
    // 0x808004CC: addu        $at, $at, $t6
    gpr jr_addend_808004D4 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x808004D0: lw          $t6, 0x1DE4($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(154, 0X1DE4));
    // 0x808004D4: jr          $t6
    // 0x808004D8: nop

    switch (jr_addend_808004D4 >> 2) {
        case 0: goto L_808004F4; break;
        case 1: goto L_8080050C; break;
        case 2: goto L_8080050C; break;
        case 3: goto L_8080050C; break;
        case 4: goto L_8080050C; break;
        case 5: goto L_8080050C; break;
        case 6: goto L_8080050C; break;
        case 7: goto L_808004F4; break;
        case 8: goto L_808004F4; break;
        case 9: goto L_808004F4; break;
        case 10: goto L_808004DC; break;
        case 11: goto L_808004DC; break;
        case 12: goto L_808004DC; break;
        case 13: goto L_8080050C; break;
        case 14: goto L_8080050C; break;
        case 15: goto L_808004DC; break;
        case 16: goto L_808004F4; break;
        case 17: goto L_8080050C; break;
        case 18: goto L_8080050C; break;
        case 19: goto L_8080050C; break;
        case 20: goto L_8080050C; break;
        case 21: goto L_8080050C; break;
        case 22: goto L_8080050C; break;
        case 23: goto L_8080050C; break;
        case 24: goto L_808004DC; break;
        case 25: goto L_808004DC; break;
        case 26: goto L_8080050C; break;
        case 27: goto L_8080050C; break;
        case 28: goto L_8080050C; break;
        case 29: goto L_8080050C; break;
        case 30: goto L_8080050C; break;
        case 31: goto L_8080050C; break;
        case 32: goto L_8080050C; break;
        case 33: goto L_8080050C; break;
        case 34: goto L_8080050C; break;
        case 35: goto L_8080050C; break;
        case 36: goto L_8080050C; break;
        case 37: goto L_8080050C; break;
        case 38: goto L_8080050C; break;
        case 39: goto L_8080050C; break;
        case 40: goto L_8080050C; break;
        case 41: goto L_8080050C; break;
        case 42: goto L_8080050C; break;
        case 43: goto L_8080050C; break;
        case 44: goto L_8080050C; break;
        case 45: goto L_8080050C; break;
        case 46: goto L_808004F4; break;
        case 47: goto L_8080050C; break;
        case 48: goto L_808004DC; break;
        case 49: goto L_8080050C; break;
        case 50: goto L_8080050C; break;
        case 51: goto L_8080050C; break;
        case 52: goto L_8080050C; break;
        case 53: goto L_8080050C; break;
        case 54: goto L_8080050C; break;
        case 55: goto L_8080050C; break;
        case 56: goto L_8080050C; break;
        case 57: goto L_808004DC; break;
        case 58: goto L_8080050C; break;
        case 59: goto L_8080050C; break;
        case 60: goto L_808004DC; break;
        case 61: goto L_808004DC; break;
        case 62: goto L_8080050C; break;
        case 63: goto L_8080050C; break;
        case 64: goto L_8080050C; break;
        case 65: goto L_8080050C; break;
        case 66: goto L_8080050C; break;
        case 67: goto L_8080050C; break;
        case 68: goto L_808004DC; break;
        case 69: goto L_808004DC; break;
        case 70: goto L_808004DC; break;
        case 71: goto L_808004DC; break;
        default: switch_error(__func__, 0x808004D4, 0x80801DE4);
    }
    // 0x808004D8: nop

L_808004DC:
    // 0x808004DC: jal         0x80000420
    // 0x808004E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800420_bstaxi(rdram, ctx);
        goto after_1;
    // 0x808004E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808004E4: jal         0x80099B94
    // 0x808004E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_2;
    // 0x808004E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808004EC: b           L_80800518
    // 0x808004F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800518;
    // 0x808004F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808004F4:
    // 0x808004F4: jal         0x80000420
    // 0x808004F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80800420_bstaxi(rdram, ctx);
        goto after_3;
    // 0x808004F8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808004FC: jal         0x80099B94
    // 0x80800500: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_4;
    // 0x80800500: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_4:
    // 0x80800504: b           L_80800518
    // 0x80800508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800518;
    // 0x80800508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080050C:
    // 0x8080050C: jal         0x80099B94
    // 0x80800510: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80099B94(rdram, ctx);
        goto after_5;
    // 0x80800510: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_5:
    // 0x80800514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800518:
    // 0x80800518: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080051C: jr          $ra
    // 0x80800520: nop

    return;
    // 0x80800520: nop

;}
RECOMP_FUNC void func_80800524_bstaxi(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800524: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800528: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080052C: jal         0x8009EF04
    // 0x80800530: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    func_8009EF04(rdram, ctx);
        goto after_0;
    // 0x80800530: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800534: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80800538: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x8080053C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800540: c.eq.s      $f0, $f14
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f0.fl == ctx->f14.fl;
    // 0x80800544: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80800548: bc1f        L_80800560
    if (!c1cs) {
        // 0x8080054C: nop
    
            goto L_80800560;
    }
    // 0x8080054C: nop

    // 0x80800550: jal         0x80084E50
    // 0x80800554: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    _bamovehover_entrypoint_4(rdram, ctx);
        goto after_1;
    // 0x80800554: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_1:
    // 0x80800558: b           L_808005AC
    // 0x8080055C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_808005AC;
    // 0x8080055C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800560:
    // 0x80800560: jal         0x8009EEB8
    // 0x80800564: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    func_8009EEB8(rdram, ctx);
        goto after_2;
    // 0x80800564: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_2:
    // 0x80800568: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8080056C: lui         $at, 0x43C8
    ctx->r1 = S32(0X43C8 << 16);
    // 0x80800570: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800574: mfc1        $a3, $f14
    ctx->r7 = (int32_t)ctx->f14.u32l;
    // 0x80800578: lwc1        $f12, 0x34($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8080057C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800580: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800584: jal         0x800F10B4
    // 0x80800588: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_3;
    // 0x80800588: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x8080058C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800590: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80800594: jal         0x800EEB9C
    // 0x80800598: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EEB9C(rdram, ctx);
        goto after_4;
    // 0x80800598: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x8080059C: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x808005A0: jal         0x80084E50
    // 0x808005A4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    _bamovehover_entrypoint_4(rdram, ctx);
        goto after_5;
    // 0x808005A4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x808005A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_808005AC:
    // 0x808005AC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x808005B0: jr          $ra
    // 0x808005B4: nop

    return;
    // 0x808005B4: nop

;}
RECOMP_FUNC void func_808005B8_bstaxi(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808005BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808005C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808005C4: jal         0x8009C4CC
    // 0x808005C8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_0;
    // 0x808005C8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_0:
    // 0x808005CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808005D0: jal         0x8009BF5C
    // 0x808005D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x808005D4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x808005D8: jal         0x800000D4
    // 0x808005DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstaxi_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x808005DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x808005E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808005E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808005E8: jr          $ra
    // 0x808005EC: nop

    return;
    // 0x808005EC: nop

;}
RECOMP_FUNC void func_808005F0_bstaxi(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808005F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x808005F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808005F8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x808005FC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800600: jal         0x80000144
    // 0x80800604: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    bstaxi_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800604: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800608: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080060C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800610: jal         0x80085338
    // 0x80800614: lw          $a2, 0x16C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X16C);
    _batimer_set(rdram, ctx);
        goto after_1;
    // 0x80800614: lw          $a2, 0x16C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X16C);
    after_1:
    // 0x80800618: jal         0x8008CABC
    // 0x8080061C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008CABC(rdram, ctx);
        goto after_2;
    // 0x8080061C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_2:
    // 0x80800620: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800624: jal         0x8008AF24
    // 0x80800628: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_3;
    // 0x80800628: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_3:
    // 0x8080062C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800630: jal         0x8008AED4
    // 0x80800634: addiu       $a1, $zero, 0x24A
    ctx->r5 = ADD32(0, 0X24A);
    func_8008AED4(rdram, ctx);
        goto after_4;
    // 0x80800634: addiu       $a1, $zero, 0x24A
    ctx->r5 = ADD32(0, 0X24A);
    after_4:
    // 0x80800638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080063C: jal         0x8008B1BC
    // 0x80800640: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_5;
    // 0x80800640: lui         $a1, 0x4040
    ctx->r5 = S32(0X4040 << 16);
    after_5:
    // 0x80800644: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x80800648: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x8080064C: jal         0x8008B1C8
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B1C8(rdram, ctx);
        goto after_6;
    // 0x80800650: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800654: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800658: jal         0x8008B134
    // 0x8080065C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_7;
    // 0x8080065C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_7:
    // 0x80800660: jal         0x8008B064
    // 0x80800664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_8;
    // 0x80800664: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800668: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x8080066C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800670: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800674: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800678: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8080067C: jal         0x8009FFD8
    // 0x80800680: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_9;
    // 0x80800680: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_9:
    // 0x80800684: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800688: lui         $a1, 0x4396
    ctx->r5 = S32(0X4396 << 16);
    // 0x8080068C: jal         0x8009C99C
    // 0x80800690: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    func_8009C99C(rdram, ctx);
        goto after_10;
    // 0x80800690: lui         $a2, 0x4060
    ctx->r6 = S32(0X4060 << 16);
    after_10:
    // 0x80800694: addiu       $s0, $sp, 0x30
    ctx->r16 = ADD32(ctx->r29, 0X30);
    // 0x80800698: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8080069C: jal         0x8009C128
    // 0x808006A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C128(rdram, ctx);
        goto after_11;
    // 0x808006A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x808006A4: jal         0x80096364
    // 0x808006A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80096364(rdram, ctx);
        goto after_12;
    // 0x808006A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x808006AC: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x808006B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x808006B4: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x808006B8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x808006BC: add.s       $f12, $f0, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x808006C0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x808006C4: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x808006C8: nop

    // 0x808006CC: bc1f        L_808006D8
    if (!c1cs) {
        // 0x808006D0: nop
    
            goto L_808006D8;
    }
    // 0x808006D0: nop

    // 0x808006D4: add.s       $f12, $f14, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f14.fl + ctx->f16.fl;
L_808006D8:
    // 0x808006D8: jal         0x80084E48
    // 0x808006DC: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    _bamovehover_entrypoint_3(rdram, ctx);
        goto after_13;
    // 0x808006DC: swc1        $f12, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f12.u32l;
    after_13:
    // 0x808006E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808006E4: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x808006E8: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x808006EC: jr          $ra
    // 0x808006F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x808006F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_808006F4_bstaxi(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808006F4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x808006F8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808006FC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800700: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800704: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x80800708: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x8080070C: jal         0x800852F0
    // 0x80800710: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_0;
    // 0x80800710: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800714: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800718: jal         0x80085300
    // 0x8080071C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_get(rdram, ctx);
        goto after_1;
    // 0x8080071C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800720: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80800724: addiu       $a0, $zero, 0x100
    ctx->r4 = ADD32(0, 0X100);
    // 0x80800728: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8080072C: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x80800730: jal         0x800D2498
    // 0x80800734: nop

    func_800D2498(rdram, ctx);
        goto after_2;
    // 0x80800734: nop

    after_2:
    // 0x80800738: jal         0x80000524
    // 0x8080073C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800524_bstaxi(rdram, ctx);
        goto after_3;
    // 0x8080073C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800740: jal         0x8001210C
    // 0x80800744: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001210C(rdram, ctx);
        goto after_4;
    // 0x80800744: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
    // 0x80800748: beql        $v0, $zero, L_80800798
    if (ctx->r2 == 0) {
        // 0x8080074C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800798;
    }
    goto skip_0;
    // 0x8080074C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80800750: jal         0x800B5BE4
    // 0x80800754: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    func_800B5BE4(rdram, ctx);
        goto after_5;
    // 0x80800754: addiu       $a0, $zero, 0x1C
    ctx->r4 = ADD32(0, 0X1C);
    after_5:
    // 0x80800758: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x8080075C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800760: jal         0x800F3BB0
    // 0x80800764: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_800F3BB0(rdram, ctx);
        goto after_6;
    // 0x80800764: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_6:
    // 0x80800768: lui         $t7, 0x0
    ctx->r15 = S32(RELOC_HI16(154, 0X2140) << 16);
    // 0x8080076C: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    // 0x80800770: addiu       $t7, $t7, 0x2140
    ctx->r15 = ADD32(ctx->r15, (int16_t)RELOC_LO16(154, 0X2140));
    // 0x80800774: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80800778: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x8080077C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80800780: jal         0x800BABB8
    // 0x80800784: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800BABB8(rdram, ctx);
        goto after_7;
    // 0x80800784: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_7:
    // 0x80800788: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8080078C: jal         0x800BA22C
    // 0x80800790: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800BA22C(rdram, ctx);
        goto after_8;
    // 0x80800790: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800794: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800798:
    // 0x80800798: jal         0x80085330
    // 0x8080079C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_isZero(rdram, ctx);
        goto after_9;
    // 0x8080079C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x808007A0: beq         $v0, $zero, L_808007BC
    if (ctx->r2 == 0) {
        // 0x808007A4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007BC;
    }
    // 0x808007A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808007A8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x808007AC: addiu       $t9, $zero, 0x2F
    ctx->r25 = ADD32(0, 0X2F);
    // 0x808007B0: sw          $t8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r24;
    // 0x808007B4: b           L_808007D8
    // 0x808007B8: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
        goto L_808007D8;
    // 0x808007B8: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
L_808007BC:
    // 0x808007BC: jal         0x80091A58
    // 0x808007C0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_10;
    // 0x808007C0: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_10:
    // 0x808007C4: beq         $v0, $zero, L_808007D8
    if (ctx->r2 == 0) {
        // 0x808007C8: addiu       $t0, $zero, 0x1
        ctx->r8 = ADD32(0, 0X1);
            goto L_808007D8;
    }
    // 0x808007C8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x808007CC: addiu       $t1, $zero, 0x2F
    ctx->r9 = ADD32(0, 0X2F);
    // 0x808007D0: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x808007D4: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
L_808007D8:
    // 0x808007D8: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x808007DC: beql        $t2, $zero, L_808007F0
    if (ctx->r10 == 0) {
        // 0x808007E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808007F0;
    }
    goto skip_1;
    // 0x808007E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x808007E4: jal         0x80000420
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800420_bstaxi(rdram, ctx);
        goto after_11;
    // 0x808007E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x808007EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808007F0:
    // 0x808007F0: jal         0x8009E5C8
    // 0x808007F4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8009E5C8(rdram, ctx);
        goto after_12;
    // 0x808007F4: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_12:
    // 0x808007F8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808007FC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800800: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80800804: jr          $ra
    // 0x80800808: nop

    return;
    // 0x80800808: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080080C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800810: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(154, 0X2188) << 16);
    // 0x80800814: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800818: jr          $ra
    // 0x8080081C: lw          $v0, 0x2188($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X2188));
    return;
    // 0x8080081C: lw          $v0, 0x2188($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X2188));
;}
RECOMP_FUNC void bstaxi_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800820: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800824: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800828: jal         0x800000D4
    // 0x8080082C: nop

    bstaxi_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x8080082C: nop

    after_0:
    // 0x80800830: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800834: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800838: jr          $ra
    // 0x8080083C: nop

    return;
    // 0x8080083C: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800840: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800844: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800848: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080084C: jal         0x80000144
    // 0x80800850: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstaxi_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800850: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80800854: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x80800858: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x8080085C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800860: jal         0x8008CCBC
    // 0x80800864: addiu       $a1, $zero, 0xF3
    ctx->r5 = ADD32(0, 0XF3);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x80800864: addiu       $a1, $zero, 0xF3
    ctx->r5 = ADD32(0, 0XF3);
    after_1:
    // 0x80800868: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x8080086C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800870: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800874: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800878: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8080087C: jal         0x8009FFD8
    // 0x80800880: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80800880: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x80800884: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800888: jal         0x8009B9B0
    // 0x8080088C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x8080088C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80800890: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800894: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800898: jal         0x80098140
    // 0x8080089C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098140(rdram, ctx);
        goto after_4;
    // 0x8080089C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
    // 0x808008A0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808008A4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808008A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808008AC: jr          $ra
    // 0x808008B0: nop

    return;
    // 0x808008B0: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_9(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808008B4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808008B8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808008BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808008C0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808008C4: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x808008C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808008CC: jal         0x80098140
    // 0x808008D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098140(rdram, ctx);
        goto after_0;
    // 0x808008D0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x808008D4: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x808008D8: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808008DC: jal         0x8008CB10
    // 0x808008E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_1;
    // 0x808008E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808008E4: beq         $v0, $zero, L_80800914
    if (ctx->r2 == 0) {
        // 0x808008E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800914;
    }
    // 0x808008E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808008EC: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x808008F0: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x808008F4: addiu       $t6, $zero, 0x4E20
    ctx->r14 = ADD32(0, 0X4E20);
    // 0x808008F8: addiu       $t7, $zero, 0x55F0
    ctx->r15 = ADD32(0, 0X55F0);
    // 0x808008FC: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80800900: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800904: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800908: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080090C: jal         0x8009DEC0
    // 0x80800910: addiu       $a1, $zero, 0x588
    ctx->r5 = ADD32(0, 0X588);
    func_8009DEC0(rdram, ctx);
        goto after_2;
    // 0x80800910: addiu       $a1, $zero, 0x588
    ctx->r5 = ADD32(0, 0X588);
    after_2:
L_80800914:
    // 0x80800914: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800918: jal         0x8009D3A8
    // 0x8080091C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_3;
    // 0x8080091C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800920: lui         $a1, 0x3DAC
    ctx->r5 = S32(0X3DAC << 16);
    // 0x80800924: ori         $a1, $a1, 0x831
    ctx->r5 = ctx->r5 | 0X831;
    // 0x80800928: jal         0x8008CB10
    // 0x8080092C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x8080092C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80800930: beq         $v0, $zero, L_8080094C
    if (ctx->r2 == 0) {
        // 0x80800934: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080094C;
    }
    // 0x80800934: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800938: jal         0x80084538
    // 0x8080093C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _babackpack_set_state(rdram, ctx);
        goto after_5;
    // 0x8080093C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_5:
    // 0x80800940: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800944: jal         0x800A0CD0
    // 0x80800948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CD0(rdram, ctx);
        goto after_6;
    // 0x80800948: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_8080094C:
    // 0x8080094C: jal         0x8008CAEC
    // 0x80800950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_7;
    // 0x80800950: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800954: beq         $v0, $zero, L_80800960
    if (ctx->r2 == 0) {
        // 0x80800958: addiu       $t8, $zero, 0x125
        ctx->r24 = ADD32(0, 0X125);
            goto L_80800960;
    }
    // 0x80800958: addiu       $t8, $zero, 0x125
    ctx->r24 = ADD32(0, 0X125);
    // 0x8080095C: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_80800960:
    // 0x80800960: jal         0x8008CAC8
    // 0x80800964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_8;
    // 0x80800964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800968: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X1F04) << 16);
    // 0x8080096C: lwc1        $f4, 0x1F04($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(154, 0X1F04));
    // 0x80800970: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80800974: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x80800978: nop

    // 0x8080097C: bc1f        L_808009B0
    if (!c1cs) {
        // 0x80800980: nop
    
            goto L_808009B0;
    }
    // 0x80800980: nop

    // 0x80800984: jal         0x8009EF10
    // 0x80800988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_9;
    // 0x80800988: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x8080098C: blez        $v0, L_8080099C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80800990: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080099C;
    }
    // 0x80800990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800994: addiu       $t9, $zero, 0x123
    ctx->r25 = ADD32(0, 0X123);
    // 0x80800998: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
L_8080099C:
    // 0x8080099C: jal         0x80091A30
    // 0x808009A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A30(rdram, ctx);
        goto after_10;
    // 0x808009A0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x808009A4: beq         $v0, $zero, L_808009B0
    if (ctx->r2 == 0) {
        // 0x808009A8: addiu       $t0, $zero, 0x127
        ctx->r8 = ADD32(0, 0X127);
            goto L_808009B0;
    }
    // 0x808009A8: addiu       $t0, $zero, 0x127
    ctx->r8 = ADD32(0, 0X127);
    // 0x808009AC: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
L_808009B0:
    // 0x808009B0: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X1F08) << 16);
    // 0x808009B4: lwc1        $f6, 0x1F08($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(154, 0X1F08));
    // 0x808009B8: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x808009BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808009C0: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x808009C4: nop

    // 0x808009C8: bc1fl       L_808009E8
    if (!c1cs) {
        // 0x808009CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808009E8;
    }
    goto skip_0;
    // 0x808009CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808009D0: jal         0x80091A58
    // 0x808009D4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_11;
    // 0x808009D4: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_11:
    // 0x808009D8: beq         $v0, $zero, L_808009E4
    if (ctx->r2 == 0) {
        // 0x808009DC: addiu       $t1, $zero, 0x124
        ctx->r9 = ADD32(0, 0X124);
            goto L_808009E4;
    }
    // 0x808009DC: addiu       $t1, $zero, 0x124
    ctx->r9 = ADD32(0, 0X124);
    // 0x808009E0: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_808009E4:
    // 0x808009E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808009E8:
    // 0x808009E8: jal         0x8009E5C8
    // 0x808009EC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_12;
    // 0x808009EC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_12:
    // 0x808009F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808009F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808009F8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808009FC: jr          $ra
    // 0x80800A00: nop

    return;
    // 0x80800A00: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A04: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800A08: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(154, 0X2198) << 16);
    // 0x80800A0C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800A10: jr          $ra
    // 0x80800A14: lw          $v0, 0x2198($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X2198));
    return;
    // 0x80800A14: lw          $v0, 0x2198($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X2198));
;}
RECOMP_FUNC void func_80800A18_bstaxi(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800A18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800A1C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80800A20: sltiu       $at, $a1, 0x5
    ctx->r1 = ctx->r5 < 0X5 ? 1 : 0;
    // 0x80800A24: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800A28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800A2C: beq         $at, $zero, L_80800AE8
    if (ctx->r1 == 0) {
        // 0x80800A30: sw          $a1, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r5;
            goto L_80800AE8;
    }
    // 0x80800A30: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80800A34: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80800A38: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X1F0C) << 16);
    // 0x80800A3C: addu        $at, $at, $t6
    gpr jr_addend_80800A44 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800A40: lw          $t6, 0x1F0C($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(154, 0X1F0C));
    // 0x80800A44: jr          $t6
    // 0x80800A48: nop

    switch (jr_addend_80800A44 >> 2) {
        case 0: goto L_80800A4C; break;
        case 1: goto L_80800A70; break;
        case 2: goto L_80800AA0; break;
        case 3: goto L_80800AB8; break;
        case 4: goto L_80800AD4; break;
        default: switch_error(__func__, 0x80800A44, 0x80801F0C);
    }
    // 0x80800A48: nop

L_80800A4C:
    // 0x80800A4C: lbu         $t7, 0x15C($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X15C);
    // 0x80800A50: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800A54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A58: bnel        $t7, $at, L_80800AEC
    if (ctx->r15 != ctx->r1) {
        // 0x80800A5C: lw          $t8, 0x24($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X24);
            goto L_80800AEC;
    }
    goto skip_0;
    // 0x80800A5C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80800A60: jal         0x80084788
    // 0x80800A64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x80800A64: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x80800A68: b           L_80800AEC
    // 0x80800A6C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
        goto L_80800AEC;
    // 0x80800A6C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_80800A70:
    // 0x80800A70: lui         $a2, 0x3F8C
    ctx->r6 = S32(0X3F8C << 16);
    // 0x80800A74: sb          $zero, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = 0;
    // 0x80800A78: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A80: jal         0x8008CCBC
    // 0x80800A84: addiu       $a1, $zero, 0x121
    ctx->r5 = ADD32(0, 0X121);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x80800A84: addiu       $a1, $zero, 0x121
    ctx->r5 = ADD32(0, 0X121);
    after_1:
    // 0x80800A88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800A8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800A90: jal         0x80098140
    // 0x80800A94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098140(rdram, ctx);
        goto after_2;
    // 0x80800A94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80800A98: b           L_80800AEC
    // 0x80800A9C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
        goto L_80800AEC;
    // 0x80800A9C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_80800AA0:
    // 0x80800AA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AA4: addiu       $a1, $zero, 0x12B
    ctx->r5 = ADD32(0, 0X12B);
    // 0x80800AA8: jal         0x8008CB3C
    // 0x80800AAC: lui         $a2, 0x4090
    ctx->r6 = S32(0X4090 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_3;
    // 0x80800AAC: lui         $a2, 0x4090
    ctx->r6 = S32(0X4090 << 16);
    after_3:
    // 0x80800AB0: b           L_80800AEC
    // 0x80800AB4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
        goto L_80800AEC;
    // 0x80800AB4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_80800AB8:
    // 0x80800AB8: lui         $a2, 0x4033
    ctx->r6 = S32(0X4033 << 16);
    // 0x80800ABC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800AC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AC4: jal         0x8008CCBC
    // 0x80800AC8: addiu       $a1, $zero, 0x12D
    ctx->r5 = ADD32(0, 0X12D);
    func_8008CCBC(rdram, ctx);
        goto after_4;
    // 0x80800AC8: addiu       $a1, $zero, 0x12D
    ctx->r5 = ADD32(0, 0X12D);
    after_4:
    // 0x80800ACC: b           L_80800AEC
    // 0x80800AD0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
        goto L_80800AEC;
    // 0x80800AD0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_80800AD4:
    // 0x80800AD4: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x80800AD8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800ADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800AE0: jal         0x8008CCBC
    // 0x80800AE4: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    func_8008CCBC(rdram, ctx);
        goto after_5;
    // 0x80800AE4: addiu       $a1, $zero, 0x12C
    ctx->r5 = ADD32(0, 0X12C);
    after_5:
L_80800AE8:
    // 0x80800AE8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
L_80800AEC:
    // 0x80800AEC: sb          $t8, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r24;
    // 0x80800AF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800AF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800AF8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800AFC: jr          $ra
    // 0x80800B00: nop

    return;
    // 0x80800B00: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_11(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800B08: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800B0C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800B10: jal         0x80000A18
    // 0x80800B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80800A18_bstaxi(rdram, ctx);
        goto after_0;
    // 0x80800B14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800B18: jal         0x800000D4
    // 0x80800B1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstaxi_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80800B1C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80800B20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800B24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800B28: jr          $ra
    // 0x80800B2C: nop

    return;
    // 0x80800B2C: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_12(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B30: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800B34: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800B38: jal         0x80000144
    // 0x80800B3C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    bstaxi_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800B3C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800B40: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800B44: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800B48: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800B4C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800B50: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800B54: jal         0x8009FFD8
    // 0x80800B58: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800B58: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x80800B5C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800B60: jal         0x8009B9B0
    // 0x80800B64: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800B64: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800B68: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80800B6C: jal         0x80000A18
    // 0x80800B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80800A18_bstaxi(rdram, ctx);
        goto after_3;
    // 0x80800B70: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800B74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800B78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80800B7C: jr          $ra
    // 0x80800B80: nop

    return;
    // 0x80800B80: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_13(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800B84: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x80800B88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800B8C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80800B90: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800B94: jal         0x8008CAC8
    // 0x80800B98: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    func_8008CAC8(rdram, ctx);
        goto after_0;
    // 0x80800B98: sw          $zero, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = 0;
    after_0:
    // 0x80800B9C: swc1        $f0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->f0.u32l;
    // 0x80800BA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BA4: jal         0x8009D3A8
    // 0x80800BA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_1;
    // 0x80800BA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80800BAC: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    // 0x80800BB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80800BB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BB8: beq         $v0, $at, L_80800BEC
    if (ctx->r2 == ctx->r1) {
        // 0x80800BBC: or          $a1, $zero, $zero
        ctx->r5 = 0 | 0;
            goto L_80800BEC;
    }
    // 0x80800BBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80800BC0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80800BC4: beq         $v0, $at, L_80800C80
    if (ctx->r2 == ctx->r1) {
        // 0x80800BC8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C80;
    }
    // 0x80800BC8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BCC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80800BD0: beq         $v0, $at, L_80800D30
    if (ctx->r2 == ctx->r1) {
        // 0x80800BD4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D30;
    }
    // 0x80800BD4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BD8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80800BDC: beq         $v0, $at, L_80800E00
    if (ctx->r2 == ctx->r1) {
        // 0x80800BE0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E00;
    }
    // 0x80800BE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800BE4: b           L_80800E90
    // 0x80800BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800E90;
    // 0x80800BE8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800BEC:
    // 0x80800BEC: jal         0x80098140
    // 0x80800BF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80098140(rdram, ctx);
        goto after_2;
    // 0x80800BF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80800BF4: lui         $a1, 0x3DAC
    ctx->r5 = S32(0X3DAC << 16);
    // 0x80800BF8: ori         $a1, $a1, 0x831
    ctx->r5 = ctx->r5 | 0X831;
    // 0x80800BFC: jal         0x8008CB10
    // 0x80800C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_3;
    // 0x80800C00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80800C04: beq         $v0, $zero, L_80800C20
    if (ctx->r2 == 0) {
        // 0x80800C08: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C20;
    }
    // 0x80800C08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C0C: jal         0x80084538
    // 0x80800C10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    _babackpack_set_state(rdram, ctx);
        goto after_4;
    // 0x80800C10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80800C14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C18: jal         0x800A0CD0
    // 0x80800C1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CD0(rdram, ctx);
        goto after_5;
    // 0x80800C1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_80800C20:
    // 0x80800C20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C24: jal         0x80091A58
    // 0x80800C28: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_6;
    // 0x80800C28: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_6:
    // 0x80800C2C: beq         $v0, $zero, L_80800C3C
    if (ctx->r2 == 0) {
        // 0x80800C30: lui         $at, 0x0
        ctx->r1 = S32(RELOC_HI16(154, 0X1F20) << 16);
            goto L_80800C3C;
    }
    // 0x80800C30: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X1F20) << 16);
    // 0x80800C34: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80800C38: sb          $t6, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = ctx->r14;
L_80800C3C:
    // 0x80800C3C: lwc1        $f4, 0x1F20($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(154, 0X1F20));
    // 0x80800C40: lwc1        $f6, 0x58($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80800C44: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80800C48: nop

    // 0x80800C4C: bc1f        L_80800C60
    if (!c1cs) {
        // 0x80800C50: nop
    
            goto L_80800C60;
    }
    // 0x80800C50: nop

    // 0x80800C54: lbu         $t7, 0x15D($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X15D);
    // 0x80800C58: bnel        $t7, $zero, L_80800C70
    if (ctx->r15 != 0) {
        // 0x80800C5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C70;
    }
    goto skip_0;
    // 0x80800C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
L_80800C60:
    // 0x80800C60: jal         0x8008CAEC
    // 0x80800C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_7;
    // 0x80800C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80800C68: beq         $v0, $zero, L_80800E8C
    if (ctx->r2 == 0) {
        // 0x80800C6C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E8C;
    }
    // 0x80800C6C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800C70:
    // 0x80800C70: jal         0x80000A18
    // 0x80800C74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_80800A18_bstaxi(rdram, ctx);
        goto after_8;
    // 0x80800C74: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x80800C78: b           L_80800E90
    // 0x80800C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800E90;
    // 0x80800C7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800C80:
    // 0x80800C80: jal         0x80091A58
    // 0x80800C84: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_9;
    // 0x80800C84: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_9:
    // 0x80800C88: bne         $v0, $zero, L_80800C9C
    if (ctx->r2 != 0) {
        // 0x80800C8C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800C9C;
    }
    // 0x80800C8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800C90: lbu         $t8, 0x15D($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X15D);
    // 0x80800C94: beql        $t8, $zero, L_80800D10
    if (ctx->r24 == 0) {
        // 0x80800C98: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D10;
    }
    goto skip_1;
    // 0x80800C98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
L_80800C9C:
    // 0x80800C9C: sb          $zero, 0x15D($s0)
    MEM_B(0X15D, ctx->r16) = 0;
    // 0x80800CA0: jal         0x8009C128
    // 0x80800CA4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_8009C128(rdram, ctx);
        goto after_10;
    // 0x80800CA4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_10:
    // 0x80800CA8: jal         0x8009C984
    // 0x80800CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_11;
    // 0x80800CAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80800CB0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800CB4: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80800CB8: jal         0x800EF1B8
    // 0x80800CBC: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    func_800EF1B8(rdram, ctx);
        goto after_12;
    // 0x80800CBC: lui         $a2, 0x4234
    ctx->r6 = S32(0X4234 << 16);
    after_12:
    // 0x80800CC0: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x80800CC4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80800CC8: lwc1        $f8, 0x50($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80800CCC: lui         $a3, 0x42
    ctx->r7 = S32(0X42 << 16);
    // 0x80800CD0: ori         $a3, $a3, 0x20
    ctx->r7 = ctx->r7 | 0X20;
    // 0x80800CD4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80800CD8: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80800CDC: lui         $a1, 0x4220
    ctx->r5 = S32(0X4220 << 16);
    // 0x80800CE0: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x80800CE4: jal         0x800C6C94
    // 0x80800CE8: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    func_800C6C94(rdram, ctx);
        goto after_13;
    // 0x80800CE8: swc1        $f16, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f16.u32l;
    after_13:
    // 0x80800CEC: beq         $v0, $zero, L_80800D04
    if (ctx->r2 == 0) {
        // 0x80800CF0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800D04;
    }
    // 0x80800CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800CF4: jal         0x800FC6B0
    // 0x80800CF8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    func_800FC6B0(rdram, ctx);
        goto after_14;
    // 0x80800CF8: addiu       $a0, $zero, 0xF
    ctx->r4 = ADD32(0, 0XF);
    after_14:
    // 0x80800CFC: b           L_80800D10
    // 0x80800D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800D10;
    // 0x80800D00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800D04:
    // 0x80800D04: jal         0x80000A18
    // 0x80800D08: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80800A18_bstaxi(rdram, ctx);
        goto after_15;
    // 0x80800D08: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_15:
    // 0x80800D0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800D10:
    // 0x80800D10: jal         0x80091A30
    // 0x80800D14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80091A30(rdram, ctx);
        goto after_16;
    // 0x80800D14: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_16:
    // 0x80800D18: beq         $v0, $zero, L_80800E8C
    if (ctx->r2 == 0) {
        // 0x80800D1C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E8C;
    }
    // 0x80800D1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D20: jal         0x80000A18
    // 0x80800D24: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80800A18_bstaxi(rdram, ctx);
        goto after_17;
    // 0x80800D24: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_17:
    // 0x80800D28: b           L_80800E90
    // 0x80800D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80800E90;
    // 0x80800D2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800D30:
    // 0x80800D30: lui         $a1, 0x3E23
    ctx->r5 = S32(0X3E23 << 16);
    // 0x80800D34: jal         0x8008CB10
    // 0x80800D38: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    func_8008CB10(rdram, ctx);
        goto after_18;
    // 0x80800D38: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    after_18:
    // 0x80800D3C: beq         $v0, $zero, L_80800DAC
    if (ctx->r2 == 0) {
        // 0x80800D40: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800DAC;
    }
    // 0x80800D40: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D44: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80800D48: jal         0x80084518
    // 0x80800D4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    _babackpack_entrypoint_6(rdram, ctx);
        goto after_19;
    // 0x80800D4C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_19:
    // 0x80800D50: jal         0x80084768
    // 0x80800D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bapackctrl_entrypoint_1(rdram, ctx);
        goto after_20;
    // 0x80800D54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_20:
    // 0x80800D58: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80800D5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D60: jal         0x80084780
    // 0x80800D64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _bapackctrl_entrypoint_4(rdram, ctx);
        goto after_21;
    // 0x80800D64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_21:
    // 0x80800D68: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x80800D6C: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x80800D70: addiu       $t9, $zero, 0x6978
    ctx->r25 = ADD32(0, 0X6978);
    // 0x80800D74: addiu       $t0, $zero, 0x6D60
    ctx->r8 = ADD32(0, 0X6D60);
    // 0x80800D78: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80800D7C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80800D80: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800D84: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800D88: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800D8C: jal         0x8009DEC0
    // 0x80800D90: addiu       $a1, $zero, 0x53C
    ctx->r5 = ADD32(0, 0X53C);
    func_8009DEC0(rdram, ctx);
        goto after_22;
    // 0x80800D90: addiu       $a1, $zero, 0x53C
    ctx->r5 = ADD32(0, 0X53C);
    after_22:
    // 0x80800D94: jal         0x8009C984
    // 0x80800D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009C984(rdram, ctx);
        goto after_23;
    // 0x80800D98: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80800D9C: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800DA0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80800DA4: jal         0x800CB5D4
    // 0x80800DA8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_800CB5D4(rdram, ctx);
        goto after_24;
    // 0x80800DA8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_24:
L_80800DAC:
    // 0x80800DAC: lui         $a1, 0x3F26
    ctx->r5 = S32(0X3F26 << 16);
    // 0x80800DB0: ori         $a1, $a1, 0xAE7D
    ctx->r5 = ctx->r5 | 0XAE7D;
    // 0x80800DB4: jal         0x8008CB10
    // 0x80800DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_25;
    // 0x80800DB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_25:
    // 0x80800DBC: beq         $v0, $zero, L_80800DD8
    if (ctx->r2 == 0) {
        // 0x80800DC0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800DD8;
    }
    // 0x80800DC0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DC4: jal         0x80084538
    // 0x80800DC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_26;
    // 0x80800DC8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_26:
    // 0x80800DCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800DD0: jal         0x800A0CD0
    // 0x80800DD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_27;
    // 0x80800DD4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_27:
L_80800DD8:
    // 0x80800DD8: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X1F24) << 16);
    // 0x80800DDC: lwc1        $f18, 0x1F24($at)
    ctx->f18.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(154, 0X1F24));
    // 0x80800DE0: lwc1        $f4, 0x58($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80800DE4: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x80800DE8: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80800DEC: nop

    // 0x80800DF0: bc1fl       L_80800E90
    if (!c1cs) {
        // 0x80800DF4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E90;
    }
    goto skip_2;
    // 0x80800DF4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_2:
    // 0x80800DF8: b           L_80800E8C
    // 0x80800DFC: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
        goto L_80800E8C;
    // 0x80800DFC: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
L_80800E00:
    // 0x80800E00: lui         $a1, 0x3EF5
    ctx->r5 = S32(0X3EF5 << 16);
    // 0x80800E04: jal         0x8008CB10
    // 0x80800E08: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    func_8008CB10(rdram, ctx);
        goto after_28;
    // 0x80800E08: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    after_28:
    // 0x80800E0C: beq         $v0, $zero, L_80800E3C
    if (ctx->r2 == 0) {
        // 0x80800E10: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E3C;
    }
    // 0x80800E10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E14: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x80800E18: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x80800E1C: addiu       $t2, $zero, 0x55F0
    ctx->r10 = ADD32(0, 0X55F0);
    // 0x80800E20: addiu       $t3, $zero, 0x55F0
    ctx->r11 = ADD32(0, 0X55F0);
    // 0x80800E24: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x80800E28: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80800E2C: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80800E30: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80800E34: jal         0x8009DEC0
    // 0x80800E38: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    func_8009DEC0(rdram, ctx);
        goto after_29;
    // 0x80800E38: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    after_29:
L_80800E3C:
    // 0x80800E3C: lui         $a1, 0x3F01
    ctx->r5 = S32(0X3F01 << 16);
    // 0x80800E40: ori         $a1, $a1, 0x5B57
    ctx->r5 = ctx->r5 | 0X5B57;
    // 0x80800E44: jal         0x8008CB10
    // 0x80800E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_30;
    // 0x80800E48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_30:
    // 0x80800E4C: beq         $v0, $zero, L_80800E68
    if (ctx->r2 == 0) {
        // 0x80800E50: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E68;
    }
    // 0x80800E50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E54: jal         0x80084538
    // 0x80800E58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_31;
    // 0x80800E58: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_31:
    // 0x80800E5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800E60: jal         0x800A0CD0
    // 0x80800E64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_32;
    // 0x80800E64: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_32:
L_80800E68:
    // 0x80800E68: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X1F28) << 16);
    // 0x80800E6C: lwc1        $f6, 0x1F28($at)
    ctx->f6.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(154, 0X1F28));
    // 0x80800E70: lwc1        $f8, 0x58($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X58);
    // 0x80800E74: addiu       $t4, $zero, 0x20
    ctx->r12 = ADD32(0, 0X20);
    // 0x80800E78: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80800E7C: nop

    // 0x80800E80: bc1fl       L_80800E90
    if (!c1cs) {
        // 0x80800E84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800E90;
    }
    goto skip_3;
    // 0x80800E84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_3:
    // 0x80800E88: sw          $t4, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r12;
L_80800E8C:
    // 0x80800E8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800E90:
    // 0x80800E90: jal         0x8009E5C8
    // 0x80800E94: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    func_8009E5C8(rdram, ctx);
        goto after_33;
    // 0x80800E94: lw          $a1, 0x5C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X5C);
    after_33:
    // 0x80800E98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800E9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800EA0: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80800EA4: jr          $ra
    // 0x80800EA8: nop

    return;
    // 0x80800EA8: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EAC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800EB0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(154, 0X21A8) << 16);
    // 0x80800EB4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80800EB8: jr          $ra
    // 0x80800EBC: lw          $v0, 0x21A8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X21A8));
    return;
    // 0x80800EBC: lw          $v0, 0x21A8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X21A8));
;}
RECOMP_FUNC void bstaxi_entrypoint_15(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800EC0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80800EC4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800EC8: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80800ECC: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800ED0: jal         0x80000144
    // 0x80800ED4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    bstaxi_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80800ED4: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800ED8: jal         0x8008CABC
    // 0x80800EDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008CABC(rdram, ctx);
        goto after_1;
    // 0x80800EDC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80800EE0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80800EE4: jal         0x8008AF24
    // 0x80800EE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_2;
    // 0x80800EE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80800EEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EF0: jal         0x8008B1A0
    // 0x80800EF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B1A0(rdram, ctx);
        goto after_3;
    // 0x80800EF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80800EF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800EFC: jal         0x8008AED4
    // 0x80800F00: addiu       $a1, $zero, 0x125
    ctx->r5 = ADD32(0, 0X125);
    func_8008AED4(rdram, ctx);
        goto after_4;
    // 0x80800F00: addiu       $a1, $zero, 0x125
    ctx->r5 = ADD32(0, 0X125);
    after_4:
    // 0x80800F04: lui         $a1, 0x3E1B
    ctx->r5 = S32(0X3E1B << 16);
    // 0x80800F08: ori         $a1, $a1, 0xDA51
    ctx->r5 = ctx->r5 | 0XDA51;
    // 0x80800F0C: jal         0x8008B24C
    // 0x80800F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B24C(rdram, ctx);
        goto after_5;
    // 0x80800F10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800F14: lui         $a2, 0x3EC3
    ctx->r6 = S32(0X3EC3 << 16);
    // 0x80800F18: ori         $a2, $a2, 0xC9EF
    ctx->r6 = ctx->r6 | 0XC9EF;
    // 0x80800F1C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F20: jal         0x8008B1D4
    // 0x80800F24: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8008B1D4(rdram, ctx);
        goto after_6;
    // 0x80800F24: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x80800F28: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F2C: jal         0x8008B1BC
    // 0x80800F30: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_7;
    // 0x80800F30: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_7:
    // 0x80800F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800F38: jal         0x8008B134
    // 0x80800F3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_8;
    // 0x80800F3C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_8:
    // 0x80800F40: jal         0x8008B064
    // 0x80800F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_9;
    // 0x80800F44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800F48: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80800F4C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800F50: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800F54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800F58: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800F5C: jal         0x8009FFD8
    // 0x80800F60: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_10;
    // 0x80800F60: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_10:
    // 0x80800F64: jal         0x8009EF04
    // 0x80800F68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF04(rdram, ctx);
        goto after_11;
    // 0x80800F68: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_11:
    // 0x80800F6C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80800F70: nop

    // 0x80800F74: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80800F78: nop

    // 0x80800F7C: bc1t        L_80800F98
    if (c1cs) {
        // 0x80800F80: nop
    
            goto L_80800F98;
    }
    // 0x80800F80: nop

    // 0x80800F84: jal         0x8009EEB8
    // 0x80800F88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EEB8(rdram, ctx);
        goto after_12;
    // 0x80800F88: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_12:
    // 0x80800F8C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800F90: jal         0x8009C914
    // 0x80800F94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C914(rdram, ctx);
        goto after_13;
    // 0x80800F94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_13:
L_80800F98:
    // 0x80800F98: jal         0x8009C990
    // 0x80800F9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_14;
    // 0x80800F9C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_14:
    // 0x80800FA0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80800FA4: jal         0x8009B9C0
    // 0x80800FA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009B9C0(rdram, ctx);
        goto after_15;
    // 0x80800FA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_15:
    // 0x80800FAC: jal         0x80000000
    // 0x80800FB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80800000_bstaxi(rdram, ctx);
        goto after_16;
    // 0x80800FB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_16:
    // 0x80800FB4: jal         0x8009C990
    // 0x80800FB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009C990(rdram, ctx);
        goto after_17;
    // 0x80800FB8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x80800FBC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80800FC0: jal         0x8009BB00
    // 0x80800FC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BB00(rdram, ctx);
        goto after_18;
    // 0x80800FC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_18:
    // 0x80800FC8: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80800FCC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800FD0: jal         0x8009BA68
    // 0x80800FD4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009BA68(rdram, ctx);
        goto after_19;
    // 0x80800FD4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_19:
    // 0x80800FD8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800FDC: jal         0x8009BA58
    // 0x80800FE0: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    func_8009BA58(rdram, ctx);
        goto after_20;
    // 0x80800FE0: lui         $a1, 0x43FA
    ctx->r5 = S32(0X43FA << 16);
    after_20:
    // 0x80800FE4: lui         $a1, 0xC4ED
    ctx->r5 = S32(0XC4ED << 16);
    // 0x80800FE8: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    // 0x80800FEC: jal         0x8009BCB4
    // 0x80800FF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009BCB4(rdram, ctx);
        goto after_21;
    // 0x80800FF0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_21:
    // 0x80800FF4: lui         $a1, 0x3F68
    ctx->r5 = S32(0X3F68 << 16);
    // 0x80800FF8: lui         $a2, 0x3F8B
    ctx->r6 = S32(0X3F8B << 16);
    // 0x80800FFC: ori         $a2, $a2, 0x851F
    ctx->r6 = ctx->r6 | 0X851F;
    // 0x80801000: ori         $a1, $a1, 0xF5C3
    ctx->r5 = ctx->r5 | 0XF5C3;
    // 0x80801004: jal         0x8009D7A4
    // 0x80801008: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009D7A4(rdram, ctx);
        goto after_22;
    // 0x80801008: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_22:
    // 0x8080100C: sb          $zero, 0x15C($s1)
    MEM_B(0X15C, ctx->r17) = 0;
    // 0x80801010: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801014: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80801018: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x8080101C: jr          $ra
    // 0x80801020: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80801020: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void bstaxi_entrypoint_16(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801024: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80801028: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8080102C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80801030: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801034: jal         0x8008CABC
    // 0x80801038: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80801038: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    after_0:
    // 0x8080103C: sw          $v0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r2;
    // 0x80801040: jal         0x80000000
    // 0x80801044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bstaxi(rdram, ctx);
        goto after_1;
    // 0x80801044: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080104C: jal         0x8009BB24
    // 0x80801050: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009BB24(rdram, ctx);
        goto after_2;
    // 0x80801050: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_2:
    // 0x80801054: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801058: jal         0x80091A30
    // 0x8080105C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A30(rdram, ctx);
        goto after_3;
    // 0x8080105C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_3:
    // 0x80801060: beql        $v0, $zero, L_8080108C
    if (ctx->r2 == 0) {
        // 0x80801064: lbu         $v0, 0x15C($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X15C);
            goto L_8080108C;
    }
    goto skip_0;
    // 0x80801064: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    skip_0:
    // 0x80801068: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8080106C: lwc1        $f6, 0x30($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80801070: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80801074: nop

    // 0x80801078: bc1fl       L_8080108C
    if (!c1cs) {
        // 0x8080107C: lbu         $v0, 0x15C($s0)
        ctx->r2 = MEM_BU(ctx->r16, 0X15C);
            goto L_8080108C;
    }
    goto skip_1;
    // 0x8080107C: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
    skip_1:
    // 0x80801080: jal         0x8009BC6C
    // 0x80801084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BC6C(rdram, ctx);
        goto after_4;
    // 0x80801084: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801088: lbu         $v0, 0x15C($s0)
    ctx->r2 = MEM_BU(ctx->r16, 0X15C);
L_8080108C:
    // 0x8080108C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801090: beq         $v0, $zero, L_808010C0
    if (ctx->r2 == 0) {
        // 0x80801094: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_808010C0;
    }
    // 0x80801094: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80801098: beq         $v0, $at, L_80801118
    if (ctx->r2 == ctx->r1) {
        // 0x8080109C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801118;
    }
    // 0x8080109C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010A0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x808010A4: beq         $v0, $at, L_80801140
    if (ctx->r2 == ctx->r1) {
        // 0x808010A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801140;
    }
    // 0x808010A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010AC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x808010B0: beq         $v0, $at, L_8080117C
    if (ctx->r2 == ctx->r1) {
        // 0x808010B4: nop
    
            goto L_8080117C;
    }
    // 0x808010B4: nop

    // 0x808010B8: b           L_8080120C
    // 0x808010BC: nop

        goto L_8080120C;
    // 0x808010BC: nop

L_808010C0:
    // 0x808010C0: jal         0x8008DF8C
    // 0x808010C4: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_5;
    // 0x808010C4: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_5:
    // 0x808010C8: beq         $v0, $zero, L_808010EC
    if (ctx->r2 == 0) {
        // 0x808010CC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808010EC;
    }
    // 0x808010CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010D0: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x808010D4: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808010D8: jal         0x8008CF1C
    // 0x808010DC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_6;
    // 0x808010DC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_6:
    // 0x808010E0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808010E4: b           L_8080120C
    // 0x808010E8: sb          $t6, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r14;
        goto L_8080120C;
    // 0x808010E8: sb          $t6, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r14;
L_808010EC:
    // 0x808010EC: jal         0x8008B324
    // 0x808010F0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8008B324(rdram, ctx);
        goto after_7;
    // 0x808010F0: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_7:
    // 0x808010F4: beq         $v0, $zero, L_8080120C
    if (ctx->r2 == 0) {
        // 0x808010F8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080120C;
    }
    // 0x808010F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808010FC: lui         $a1, 0x3EF1
    ctx->r5 = S32(0X3EF1 << 16);
    // 0x80801100: ori         $a1, $a1, 0xA9FC
    ctx->r5 = ctx->r5 | 0XA9FC;
    // 0x80801104: jal         0x8008CF1C
    // 0x80801108: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_8;
    // 0x80801108: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_8:
    // 0x8080110C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80801110: b           L_8080120C
    // 0x80801114: sb          $t7, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r15;
        goto L_8080120C;
    // 0x80801114: sb          $t7, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r15;
L_80801118:
    // 0x80801118: jal         0x8008DF8C
    // 0x8080111C: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    func_8008DF8C(rdram, ctx);
        goto after_9;
    // 0x8080111C: addiu       $a1, $zero, 0x82
    ctx->r5 = ADD32(0, 0X82);
    after_9:
    // 0x80801120: beq         $v0, $zero, L_8080120C
    if (ctx->r2 == 0) {
        // 0x80801124: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080120C;
    }
    // 0x80801124: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801128: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x8080112C: jal         0x8008CF1C
    // 0x80801130: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_10;
    // 0x80801130: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_10:
    // 0x80801134: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80801138: b           L_8080120C
    // 0x8080113C: sb          $t8, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r24;
        goto L_8080120C;
    // 0x8080113C: sb          $t8, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r24;
L_80801140:
    // 0x80801140: jal         0x8009D3A8
    // 0x80801144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_11;
    // 0x80801144: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80801148: jal         0x8008E078
    // 0x8080114C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_12;
    // 0x8080114C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_12:
    // 0x80801150: beq         $v0, $zero, L_8080120C
    if (ctx->r2 == 0) {
        // 0x80801154: nop
    
            goto L_8080120C;
    }
    // 0x80801154: nop

    // 0x80801158: jal         0x8009FE58
    // 0x8080115C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009FE58(rdram, ctx);
        goto after_13;
    // 0x8080115C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80801160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801164: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x80801168: jal         0x8008CF1C
    // 0x8080116C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CF1C(rdram, ctx);
        goto after_14;
    // 0x8080116C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_14:
    // 0x80801170: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80801174: b           L_8080120C
    // 0x80801178: sb          $t9, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r25;
        goto L_8080120C;
    // 0x80801178: sb          $t9, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r25;
L_8080117C:
    // 0x8080117C: jal         0x8009BB5C
    // 0x80801180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_15;
    // 0x80801180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_15:
    // 0x80801184: lui         $at, 0x3E80
    ctx->r1 = S32(0X3E80 << 16);
    // 0x80801188: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8080118C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801190: mul.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f0.fl, ctx->f8.fl);
    // 0x80801194: mfc1        $a1, $f10
    ctx->r5 = (int32_t)ctx->f10.u32l;
    // 0x80801198: jal         0x8009B9B0
    // 0x8080119C: nop

    func_8009B9B0(rdram, ctx);
        goto after_16;
    // 0x8080119C: nop

    after_16:
    // 0x808011A0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011A4: jal         0x8009D2D8
    // 0x808011A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009D2D8(rdram, ctx);
        goto after_17;
    // 0x808011A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_17:
    // 0x808011AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011B0: jal         0x8009D3A8
    // 0x808011B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_18;
    // 0x808011B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_18:
    // 0x808011B8: jal         0x8009BB5C
    // 0x808011BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB5C(rdram, ctx);
        goto after_19;
    // 0x808011BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_19:
    // 0x808011C0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x808011C4: addiu       $t0, $zero, 0x123
    ctx->r8 = ADD32(0, 0X123);
    // 0x808011C8: c.lt.s      $f16, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f16.fl < ctx->f0.fl;
    // 0x808011CC: nop

    // 0x808011D0: bc1f        L_808011E0
    if (!c1cs) {
        // 0x808011D4: nop
    
            goto L_808011E0;
    }
    // 0x808011D4: nop

    // 0x808011D8: b           L_808011F4
    // 0x808011DC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
        goto L_808011F4;
    // 0x808011DC: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
L_808011E0:
    // 0x808011E0: jal         0x8008B324
    // 0x808011E4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    func_8008B324(rdram, ctx);
        goto after_20;
    // 0x808011E4: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    after_20:
    // 0x808011E8: beq         $v0, $zero, L_808011F4
    if (ctx->r2 == 0) {
        // 0x808011EC: addiu       $t1, $zero, 0x125
        ctx->r9 = ADD32(0, 0X125);
            goto L_808011F4;
    }
    // 0x808011EC: addiu       $t1, $zero, 0x125
    ctx->r9 = ADD32(0, 0X125);
    // 0x808011F0: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
L_808011F4:
    // 0x808011F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808011F8: jal         0x80091A58
    // 0x808011FC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    func_80091A58(rdram, ctx);
        goto after_21;
    // 0x808011FC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    after_21:
    // 0x80801200: beq         $v0, $zero, L_8080120C
    if (ctx->r2 == 0) {
        // 0x80801204: addiu       $t2, $zero, 0x124
        ctx->r10 = ADD32(0, 0X124);
            goto L_8080120C;
    }
    // 0x80801204: addiu       $t2, $zero, 0x124
    ctx->r10 = ADD32(0, 0X124);
    // 0x80801208: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
L_8080120C:
    // 0x8080120C: jal         0x8009BB50
    // 0x80801210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009BB50(rdram, ctx);
        goto after_22;
    // 0x80801210: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_22:
    // 0x80801214: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80801218: nop

    // 0x8080121C: c.lt.s      $f0, $f18
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f0.fl < ctx->f18.fl;
    // 0x80801220: nop

    // 0x80801224: bc1f        L_80801240
    if (!c1cs) {
        // 0x80801228: nop
    
            goto L_80801240;
    }
    // 0x80801228: nop

    // 0x8080122C: jal         0x8008E35C
    // 0x80801230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_23;
    // 0x80801230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80801234: beq         $v0, $zero, L_80801240
    if (ctx->r2 == 0) {
        // 0x80801238: addiu       $t3, $zero, 0x4C
        ctx->r11 = ADD32(0, 0X4C);
            goto L_80801240;
    }
    // 0x80801238: addiu       $t3, $zero, 0x4C
    ctx->r11 = ADD32(0, 0X4C);
    // 0x8080123C: sw          $t3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r11;
L_80801240:
    // 0x80801240: jal         0x8008E078
    // 0x80801244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E078(rdram, ctx);
        goto after_24;
    // 0x80801244: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80801248: beq         $v0, $zero, L_80801264
    if (ctx->r2 == 0) {
        // 0x8080124C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801264;
    }
    // 0x8080124C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801250: jal         0x80091A58
    // 0x80801254: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_25;
    // 0x80801254: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_25:
    // 0x80801258: beq         $v0, $zero, L_80801264
    if (ctx->r2 == 0) {
        // 0x8080125C: addiu       $t4, $zero, 0x126
        ctx->r12 = ADD32(0, 0X126);
            goto L_80801264;
    }
    // 0x8080125C: addiu       $t4, $zero, 0x126
    ctx->r12 = ADD32(0, 0X126);
    // 0x80801260: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
L_80801264:
    // 0x80801264: jal         0x8008E148
    // 0x80801268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_26;
    // 0x80801268: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x8080126C: beq         $v0, $zero, L_80801278
    if (ctx->r2 == 0) {
        // 0x80801270: addiu       $t5, $zero, 0x1
        ctx->r13 = ADD32(0, 0X1);
            goto L_80801278;
    }
    // 0x80801270: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80801274: sw          $t5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r13;
L_80801278:
    // 0x80801278: jal         0x8008E260
    // 0x8080127C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_27;
    // 0x8080127C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_27:
    // 0x80801280: beq         $v0, $zero, L_80801290
    if (ctx->r2 == 0) {
        // 0x80801284: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801290;
    }
    // 0x80801284: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801288: addiu       $t6, $zero, 0x3D
    ctx->r14 = ADD32(0, 0X3D);
    // 0x8080128C: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
L_80801290:
    // 0x80801290: jal         0x8009E5C8
    // 0x80801294: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_8009E5C8(rdram, ctx);
        goto after_28;
    // 0x80801294: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_28:
    // 0x80801298: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080129C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x808012A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x808012A4: jr          $ra
    // 0x808012A8: nop

    return;
    // 0x808012A8: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_17(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808012B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808012B4: jal         0x8009BC6C
    // 0x808012B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009BC6C(rdram, ctx);
        goto after_0;
    // 0x808012B8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808012BC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808012C0: jal         0x8009BF5C
    // 0x808012C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009BF5C(rdram, ctx);
        goto after_1;
    // 0x808012C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_1:
    // 0x808012C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808012CC: jal         0x8009C4CC
    // 0x808012D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009C4CC(rdram, ctx);
        goto after_2;
    // 0x808012D0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x808012D4: jal         0x800000D4
    // 0x808012D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstaxi_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x808012D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_3:
    // 0x808012DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808012E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808012E4: jr          $ra
    // 0x808012E8: nop

    return;
    // 0x808012E8: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808012EC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808012F0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(154, 0X21B8) << 16);
    // 0x808012F4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808012F8: jr          $ra
    // 0x808012FC: lw          $v0, 0x21B8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X21B8));
    return;
    // 0x808012FC: lw          $v0, 0x21B8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X21B8));
;}
RECOMP_FUNC void bstaxi_entrypoint_19(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801300: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801304: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801308: jal         0x800000D4
    // 0x8080130C: nop

    bstaxi_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x8080130C: nop

    after_0:
    // 0x80801310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801318: jr          $ra
    // 0x8080131C: nop

    return;
    // 0x8080131C: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801320: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801324: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801328: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080132C: jal         0x80000144
    // 0x80801330: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstaxi_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80801330: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801334: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801338: addiu       $a1, $zero, 0xF4
    ctx->r5 = ADD32(0, 0XF4);
    // 0x8080133C: jal         0x8008CB3C
    // 0x80801340: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80801340: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x80801344: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80801348: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080134C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801350: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80801354: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80801358: jal         0x8009FFD8
    // 0x8080135C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x8080135C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80801360: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80801364: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80801368: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080136C: jal         0x8008C9BC
    // 0x80801370: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    func_8008C9BC(rdram, ctx);
        goto after_3;
    // 0x80801370: lui         $a2, 0x3FC0
    ctx->r6 = S32(0X3FC0 << 16);
    after_3:
    // 0x80801374: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X1F2C) << 16);
    // 0x80801378: lwc1        $f4, 0x1F2C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(154, 0X1F2C));
    // 0x8080137C: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x80801380: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80801384: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801388: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    // 0x8080138C: lui         $a2, 0x4348
    ctx->r6 = S32(0X4348 << 16);
    // 0x80801390: jal         0x8008C9F0
    // 0x80801394: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_8008C9F0(rdram, ctx);
        goto after_4;
    // 0x80801394: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_4:
    // 0x80801398: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080139C: jal         0x8008CA30
    // 0x808013A0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008CA30(rdram, ctx);
        goto after_5;
    // 0x808013A0: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_5:
    // 0x808013A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808013A8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808013AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x808013B0: jr          $ra
    // 0x808013B4: nop

    return;
    // 0x808013B4: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_21(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808013B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808013BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808013C0: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x808013C4: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x808013C8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808013CC: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    // 0x808013D0: jal         0x8009D3A8
    // 0x808013D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x808013D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808013D8: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x808013DC: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808013E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013E4: jal         0x800A2CE8
    // 0x808013E8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_800A2CE8(rdram, ctx);
        goto after_1;
    // 0x808013E8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_1:
    // 0x808013EC: lui         $a1, 0x3F19
    ctx->r5 = S32(0X3F19 << 16);
    // 0x808013F0: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x808013F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808013F8: jal         0x800A2CE8
    // 0x808013FC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_800A2CE8(rdram, ctx);
        goto after_2;
    // 0x808013FC: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x80801400: jal         0x80000000
    // 0x80801404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bstaxi(rdram, ctx);
        goto after_3;
    // 0x80801404: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80801408: jal         0x8009EF10
    // 0x8080140C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009EF10(rdram, ctx);
        goto after_4;
    // 0x8080140C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801410: bne         $v0, $zero, L_8080141C
    if (ctx->r2 != 0) {
        // 0x80801414: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080141C;
    }
    // 0x80801414: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801418: addiu       $s1, $zero, 0x125
    ctx->r17 = ADD32(0, 0X125);
L_8080141C:
    // 0x8080141C: jal         0x80000064
    // 0x80801420: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80800064_bstaxi(rdram, ctx);
        goto after_5;
    // 0x80801420: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x80801424: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80801428: jal         0x8008E148
    // 0x8080142C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E148(rdram, ctx);
        goto after_6;
    // 0x8080142C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80801430: beq         $v0, $zero, L_8080143C
    if (ctx->r2 == 0) {
        // 0x80801434: nop
    
            goto L_8080143C;
    }
    // 0x80801434: nop

    // 0x80801438: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8080143C:
    // 0x8080143C: jal         0x8008E260
    // 0x80801440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E260(rdram, ctx);
        goto after_7;
    // 0x80801440: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80801444: beq         $v0, $zero, L_80801450
    if (ctx->r2 == 0) {
        // 0x80801448: nop
    
            goto L_80801450;
    }
    // 0x80801448: nop

    // 0x8080144C: addiu       $s1, $zero, 0x3D
    ctx->r17 = ADD32(0, 0X3D);
L_80801450:
    // 0x80801450: jal         0x8008E35C
    // 0x80801454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E35C(rdram, ctx);
        goto after_8;
    // 0x80801454: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80801458: beq         $v0, $zero, L_80801464
    if (ctx->r2 == 0) {
        // 0x8080145C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801464;
    }
    // 0x8080145C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801460: addiu       $s1, $zero, 0x4C
    ctx->r17 = ADD32(0, 0X4C);
L_80801464:
    // 0x80801464: jal         0x800A02DC
    // 0x80801468: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800A02DC(rdram, ctx);
        goto after_9;
    // 0x80801468: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_9:
    // 0x8080146C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801470: jal         0x8009E5C8
    // 0x80801474: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x80801474: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_10:
    // 0x80801478: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8080147C: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80801480: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80801484: jr          $ra
    // 0x80801488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80801488: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bstaxi_entrypoint_22(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080148C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801490: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(154, 0X21C8) << 16);
    // 0x80801494: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801498: jr          $ra
    // 0x8080149C: lw          $v0, 0x21C8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X21C8));
    return;
    // 0x8080149C: lw          $v0, 0x21C8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X21C8));
;}
RECOMP_FUNC void bstaxi_entrypoint_23(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808014A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808014A8: jal         0x800000D4
    // 0x808014AC: nop

    bstaxi_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x808014AC: nop

    after_0:
    // 0x808014B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808014B4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808014B8: jr          $ra
    // 0x808014BC: nop

    return;
    // 0x808014BC: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808014C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x808014C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808014C8: jal         0x80000144
    // 0x808014CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    bstaxi_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808014CC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x808014D0: lui         $a2, 0x3FB3
    ctx->r6 = S32(0X3FB3 << 16);
    // 0x808014D4: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808014D8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808014DC: jal         0x8008CCBC
    // 0x808014E0: addiu       $a1, $zero, 0x128
    ctx->r5 = ADD32(0, 0X128);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x808014E0: addiu       $a1, $zero, 0x128
    ctx->r5 = ADD32(0, 0X128);
    after_1:
    // 0x808014E4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808014E8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808014EC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x808014F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808014F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808014F8: jal         0x8009FFD8
    // 0x808014FC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808014FC: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x80801500: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80801504: jal         0x8009B9B0
    // 0x80801508: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80801508: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x8080150C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801510: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80801514: jr          $ra
    // 0x80801518: nop

    return;
    // 0x80801518: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_25(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080151C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80801520: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801524: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801528: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8080152C: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80801530: jal         0x8009D3A8
    // 0x80801534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x80801534: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80801538: lui         $a1, 0x3F01
    ctx->r5 = S32(0X3F01 << 16);
    // 0x8080153C: ori         $a1, $a1, 0x5B57
    ctx->r5 = ctx->r5 | 0X5B57;
    // 0x80801540: jal         0x8008CB10
    // 0x80801544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_1;
    // 0x80801544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801548: beq         $v0, $zero, L_80801564
    if (ctx->r2 == 0) {
        // 0x8080154C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801564;
    }
    // 0x8080154C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801550: jal         0x80084538
    // 0x80801554: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_2;
    // 0x80801554: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80801558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080155C: jal         0x800A0CD0
    // 0x80801560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_3;
    // 0x80801560: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_80801564:
    // 0x80801564: lui         $a1, 0x3EF5
    ctx->r5 = S32(0X3EF5 << 16);
    // 0x80801568: ori         $a1, $a1, 0xC28F
    ctx->r5 = ctx->r5 | 0XC28F;
    // 0x8080156C: jal         0x8008CB10
    // 0x80801570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x80801570: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801574: beq         $v0, $zero, L_808015A4
    if (ctx->r2 == 0) {
        // 0x80801578: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808015A4;
    }
    // 0x80801578: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080157C: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x80801580: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x80801584: addiu       $t6, $zero, 0x55F0
    ctx->r14 = ADD32(0, 0X55F0);
    // 0x80801588: addiu       $t7, $zero, 0x55F0
    ctx->r15 = ADD32(0, 0X55F0);
    // 0x8080158C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x80801590: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801594: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80801598: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x8080159C: jal         0x8009DEC0
    // 0x808015A0: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    func_8009DEC0(rdram, ctx);
        goto after_5;
    // 0x808015A0: addiu       $a1, $zero, 0x584
    ctx->r5 = ADD32(0, 0X584);
    after_5:
L_808015A4:
    // 0x808015A4: jal         0x8008CAC8
    // 0x808015A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAC8(rdram, ctx);
        goto after_6;
    // 0x808015A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808015AC: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X1F30) << 16);
    // 0x808015B0: lwc1        $f4, 0x1F30($at)
    ctx->f4.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(154, 0X1F30));
    // 0x808015B4: addiu       $t8, $zero, 0x20
    ctx->r24 = ADD32(0, 0X20);
    // 0x808015B8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808015BC: c.lt.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl < ctx->f0.fl;
    // 0x808015C0: nop

    // 0x808015C4: bc1f        L_808015D0
    if (!c1cs) {
        // 0x808015C8: nop
    
            goto L_808015D0;
    }
    // 0x808015C8: nop

    // 0x808015CC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_808015D0:
    // 0x808015D0: jal         0x8009E5C8
    // 0x808015D4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x808015D4: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_7:
    // 0x808015D8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808015DC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808015E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808015E4: jr          $ra
    // 0x808015E8: nop

    return;
    // 0x808015E8: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_26(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808015EC: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808015F0: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(154, 0X21D8) << 16);
    // 0x808015F4: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808015F8: jr          $ra
    // 0x808015FC: lw          $v0, 0x21D8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X21D8));
    return;
    // 0x808015FC: lw          $v0, 0x21D8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X21D8));
;}
RECOMP_FUNC void func_80801600_bstaxi(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801600: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80801604: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801608: sltiu       $at, $a1, 0x6
    ctx->r1 = ctx->r5 < 0X6 ? 1 : 0;
    // 0x8080160C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801610: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801614: beq         $at, $zero, L_80801758
    if (ctx->r1 == 0) {
        // 0x80801618: sw          $a1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r5;
            goto L_80801758;
    }
    // 0x80801618: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x8080161C: sll         $t6, $a1, 2
    ctx->r14 = S32(ctx->r5 << 2);
    // 0x80801620: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X1F34) << 16);
    // 0x80801624: addu        $at, $at, $t6
    gpr jr_addend_8080162C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80801628: lw          $t6, 0x1F34($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(154, 0X1F34));
    // 0x8080162C: jr          $t6
    // 0x80801630: nop

    switch (jr_addend_8080162C >> 2) {
        case 0: goto L_80801634; break;
        case 1: goto L_80801684; break;
        case 2: goto L_808016BC; break;
        case 3: goto L_80801700; break;
        case 4: goto L_8080172C; break;
        case 5: goto L_80801748; break;
        default: switch_error(__func__, 0x8080162C, 0x80801F34);
    }
    // 0x80801630: nop

L_80801634:
    // 0x80801634: jal         0x8008E0C8
    // 0x80801638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E0C8(rdram, ctx);
        goto after_0;
    // 0x80801638: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8080163C: beq         $v0, $zero, L_8080164C
    if (ctx->r2 == 0) {
        // 0x80801640: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8080164C;
    }
    // 0x80801640: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801644: jal         0x80084788
    // 0x80801648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80801648: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_8080164C:
    // 0x8080164C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801650: jal         0x80095774
    // 0x80801654: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_80095774(rdram, ctx);
        goto after_2;
    // 0x80801654: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_2:
    // 0x80801658: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080165C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80801660: jal         0x8009E55C
    // 0x80801664: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_3;
    // 0x80801664: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_3:
    // 0x80801668: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    // 0x8080166C: beql        $a0, $zero, L_8080175C
    if (ctx->r4 == 0) {
        // 0x80801670: lw          $t8, 0x3C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X3C);
            goto L_8080175C;
    }
    goto skip_0;
    // 0x80801670: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    skip_0:
    // 0x80801674: jal         0x800FFA88
    // 0x80801678: nop

    func_800FFA88(rdram, ctx);
        goto after_4;
    // 0x80801678: nop

    after_4:
    // 0x8080167C: b           L_80801758
    // 0x80801680: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
        goto L_80801758;
    // 0x80801680: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
L_80801684:
    // 0x80801684: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80801688: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
    // 0x8080168C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801690: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80801694: lui         $a2, 0x4248
    ctx->r6 = S32(0X4248 << 16);
    // 0x80801698: jal         0x8009E55C
    // 0x8080169C: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    func_8009E55C(rdram, ctx);
        goto after_5;
    // 0x8080169C: swc1        $f4, 0x16C($s0)
    MEM_W(0X16C, ctx->r16) = ctx->f4.u32l;
    after_5:
    // 0x808016A0: lui         $a2, 0x8008
    ctx->r6 = S32(0X8008 << 16);
    // 0x808016A4: addiu       $a2, $a2, 0x4518
    ctx->r6 = ADD32(ctx->r6, 0X4518);
    // 0x808016A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016AC: jal         0x8009E4E0
    // 0x808016B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E4E0(rdram, ctx);
        goto after_6;
    // 0x808016B0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_6:
    // 0x808016B4: b           L_8080175C
    // 0x808016B8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_8080175C;
    // 0x808016B8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_808016BC:
    // 0x808016BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016C0: jal         0x80084780
    // 0x808016C4: lbu         $a1, 0x164($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X164);
    _bapackctrl_entrypoint_4(rdram, ctx);
        goto after_7;
    // 0x808016C4: lbu         $a1, 0x164($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X164);
    after_7:
    // 0x808016C8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016CC: jal         0x80095774
    // 0x808016D0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_80095774(rdram, ctx);
        goto after_8;
    // 0x808016D0: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_8:
    // 0x808016D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x808016DC: jal         0x80085338
    // 0x808016E0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    _batimer_set(rdram, ctx);
        goto after_9;
    // 0x808016E0: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    after_9:
    // 0x808016E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808016E8: jal         0x8009C128
    // 0x808016EC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_8009C128(rdram, ctx);
        goto after_10;
    // 0x808016EC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_10:
    // 0x808016F0: jal         0x8008A530
    // 0x808016F4: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    _subaddietaxi_entrypoint_7(rdram, ctx);
        goto after_11;
    // 0x808016F4: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    after_11:
    // 0x808016F8: b           L_8080175C
    // 0x808016FC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_8080175C;
    // 0x808016FC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_80801700:
    // 0x80801700: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80801704: lui         $a3, 0x3F8C
    ctx->r7 = S32(0X3F8C << 16);
    // 0x80801708: addiu       $t7, $zero, 0x3E80
    ctx->r15 = ADD32(0, 0X3E80);
    // 0x8080170C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80801710: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x80801714: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801718: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080171C: jal         0x8009DBB0
    // 0x80801720: addiu       $a1, $zero, 0x5AD
    ctx->r5 = ADD32(0, 0X5AD);
    func_8009DBB0(rdram, ctx);
        goto after_12;
    // 0x80801720: addiu       $a1, $zero, 0x5AD
    ctx->r5 = ADD32(0, 0X5AD);
    after_12:
    // 0x80801724: b           L_8080175C
    // 0x80801728: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
        goto L_8080175C;
    // 0x80801728: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_8080172C:
    // 0x8080172C: lbu         $a0, 0x164($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X164);
    // 0x80801730: jal         0x800CB698
    // 0x80801734: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800CB698(rdram, ctx);
        goto after_13;
    // 0x80801734: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_13:
    // 0x80801738: jal         0x800FFA88
    // 0x8080173C: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    func_800FFA88(rdram, ctx);
        goto after_14;
    // 0x8080173C: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    after_14:
    // 0x80801740: b           L_80801758
    // 0x80801744: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
        goto L_80801758;
    // 0x80801744: sw          $zero, 0x160($s0)
    MEM_W(0X160, ctx->r16) = 0;
L_80801748:
    // 0x80801748: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080174C: addiu       $a1, $zero, 0x126
    ctx->r5 = ADD32(0, 0X126);
    // 0x80801750: jal         0x8008CCBC
    // 0x80801754: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    func_8008CCBC(rdram, ctx);
        goto after_15;
    // 0x80801754: lui         $a2, 0x4020
    ctx->r6 = S32(0X4020 << 16);
    after_15:
L_80801758:
    // 0x80801758: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
L_8080175C:
    // 0x8080175C: sb          $t8, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = ctx->r24;
    // 0x80801760: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801764: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801768: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8080176C: jr          $ra
    // 0x80801770: nop

    return;
    // 0x80801770: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_27(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801774: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801778: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080177C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80801780: jal         0x80001600
    // 0x80801784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80801600_bstaxi(rdram, ctx);
        goto after_0;
    // 0x80801784: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80801788: jal         0x800000D4
    // 0x8080178C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstaxi_entrypoint_0(rdram, ctx);
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
RECOMP_FUNC void bstaxi_entrypoint_28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808017A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808017A4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808017A8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808017AC: jal         0x80000144
    // 0x808017B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstaxi_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x808017B0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808017B4: lui         $a2, 0x3F33
    ctx->r6 = S32(0X3F33 << 16);
    // 0x808017B8: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x808017BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017C0: jal         0x8008CCBC
    // 0x808017C4: addiu       $a1, $zero, 0xF5
    ctx->r5 = ADD32(0, 0XF5);
    func_8008CCBC(rdram, ctx);
        goto after_1;
    // 0x808017C4: addiu       $a1, $zero, 0xF5
    ctx->r5 = ADD32(0, 0XF5);
    after_1:
    // 0x808017C8: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x808017CC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x808017D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x808017D8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x808017DC: jal         0x8009FFD8
    // 0x808017E0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x808017E0: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_2:
    // 0x808017E4: sb          $zero, 0x15C($s0)
    MEM_B(0X15C, ctx->r16) = 0;
    // 0x808017E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808017EC: jal         0x80001600
    // 0x808017F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80801600_bstaxi(rdram, ctx);
        goto after_3;
    // 0x808017F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x808017F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x808017F8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x808017FC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801800: jr          $ra
    // 0x80801804: nop

    return;
    // 0x80801804: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_29(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801808: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080180C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801810: jal         0x8009E6EC
    // 0x80801814: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80801814: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801818: addiu       $t6, $v0, -0x15
    ctx->r14 = ADD32(ctx->r2, -0X15);
    // 0x8080181C: sltiu       $at, $t6, 0x5A
    ctx->r1 = ctx->r14 < 0X5A ? 1 : 0;
    // 0x80801820: beq         $at, $zero, L_80801920
    if (ctx->r1 == 0) {
        // 0x80801824: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80801920;
    }
    // 0x80801824: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80801828: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8080182C: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X1F4C) << 16);
    // 0x80801830: addu        $at, $at, $t6
    gpr jr_addend_80801838 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80801834: lw          $t6, 0x1F4C($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(154, 0X1F4C));
    // 0x80801838: jr          $t6
    // 0x8080183C: nop

    switch (jr_addend_80801838 >> 2) {
        case 0: goto L_80801884; break;
        case 1: goto L_80801920; break;
        case 2: goto L_80801920; break;
        case 3: goto L_80801920; break;
        case 4: goto L_80801920; break;
        case 5: goto L_80801920; break;
        case 6: goto L_80801920; break;
        case 7: goto L_80801884; break;
        case 8: goto L_80801884; break;
        case 9: goto L_80801884; break;
        case 10: goto L_80801840; break;
        case 11: goto L_80801840; break;
        case 12: goto L_80801840; break;
        case 13: goto L_80801920; break;
        case 14: goto L_80801920; break;
        case 15: goto L_80801840; break;
        case 16: goto L_80801884; break;
        case 17: goto L_80801920; break;
        case 18: goto L_80801920; break;
        case 19: goto L_80801920; break;
        case 20: goto L_80801920; break;
        case 21: goto L_80801920; break;
        case 22: goto L_80801920; break;
        case 23: goto L_80801920; break;
        case 24: goto L_80801840; break;
        case 25: goto L_80801840; break;
        case 26: goto L_80801920; break;
        case 27: goto L_80801920; break;
        case 28: goto L_80801920; break;
        case 29: goto L_80801920; break;
        case 30: goto L_80801920; break;
        case 31: goto L_80801920; break;
        case 32: goto L_80801920; break;
        case 33: goto L_80801920; break;
        case 34: goto L_80801920; break;
        case 35: goto L_80801920; break;
        case 36: goto L_80801920; break;
        case 37: goto L_80801920; break;
        case 38: goto L_80801920; break;
        case 39: goto L_80801920; break;
        case 40: goto L_80801920; break;
        case 41: goto L_80801920; break;
        case 42: goto L_80801920; break;
        case 43: goto L_80801920; break;
        case 44: goto L_80801920; break;
        case 45: goto L_80801920; break;
        case 46: goto L_80801884; break;
        case 47: goto L_80801920; break;
        case 48: goto L_80801840; break;
        case 49: goto L_80801920; break;
        case 50: goto L_80801920; break;
        case 51: goto L_808018AC; break;
        case 52: goto L_80801920; break;
        case 53: goto L_80801920; break;
        case 54: goto L_80801920; break;
        case 55: goto L_80801920; break;
        case 56: goto L_80801920; break;
        case 57: goto L_80801840; break;
        case 58: goto L_80801920; break;
        case 59: goto L_80801920; break;
        case 60: goto L_80801840; break;
        case 61: goto L_80801840; break;
        case 62: goto L_80801920; break;
        case 63: goto L_80801920; break;
        case 64: goto L_80801920; break;
        case 65: goto L_80801920; break;
        case 66: goto L_80801920; break;
        case 67: goto L_80801920; break;
        case 68: goto L_80801840; break;
        case 69: goto L_80801840; break;
        case 70: goto L_80801840; break;
        case 71: goto L_80801840; break;
        case 72: goto L_80801920; break;
        case 73: goto L_80801920; break;
        case 74: goto L_80801920; break;
        case 75: goto L_80801920; break;
        case 76: goto L_80801920; break;
        case 77: goto L_80801920; break;
        case 78: goto L_80801920; break;
        case 79: goto L_80801920; break;
        case 80: goto L_80801920; break;
        case 81: goto L_80801920; break;
        case 82: goto L_80801920; break;
        case 83: goto L_80801920; break;
        case 84: goto L_80801920; break;
        case 85: goto L_80801920; break;
        case 86: goto L_80801920; break;
        case 87: goto L_80801920; break;
        case 88: goto L_80801920; break;
        case 89: goto L_80801900; break;
        default: switch_error(__func__, 0x80801838, 0x80801F4C);
    }
    // 0x8080183C: nop

L_80801840:
    // 0x80801840: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80801844: lwc1        $f6, 0x16C($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X16C);
    // 0x80801848: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8080184C: nop

    // 0x80801850: bc1fl       L_8080186C
    if (!c1cs) {
        // 0x80801854: lw          $t7, 0x160($a0)
        ctx->r15 = MEM_W(ctx->r4, 0X160);
            goto L_8080186C;
    }
    goto skip_0;
    // 0x80801854: lw          $t7, 0x160($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X160);
    skip_0:
    // 0x80801858: jal         0x800004A8
    // 0x8080185C: nop

    func_808004A8_bstaxi(rdram, ctx);
        goto after_1;
    // 0x8080185C: nop

    after_1:
    // 0x80801860: b           L_8080192C
    // 0x80801864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080192C;
    // 0x80801864: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801868: lw          $t7, 0x160($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X160);
L_8080186C:
    // 0x8080186C: bnel        $t7, $zero, L_8080192C
    if (ctx->r15 != 0) {
        // 0x80801870: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080192C;
    }
    goto skip_1;
    // 0x80801870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80801874: jal         0x80099B94
    // 0x80801878: nop

    func_80099B94(rdram, ctx);
        goto after_2;
    // 0x80801878: nop

    after_2:
    // 0x8080187C: b           L_8080192C
    // 0x80801880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080192C;
    // 0x80801880: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801884:
    // 0x80801884: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80801888: lwc1        $f10, 0x16C($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X16C);
    // 0x8080188C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80801890: nop

    // 0x80801894: bc1fl       L_8080192C
    if (!c1cs) {
        // 0x80801898: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8080192C;
    }
    goto skip_2;
    // 0x80801898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8080189C: jal         0x800004A8
    // 0x808018A0: nop

    func_808004A8_bstaxi(rdram, ctx);
        goto after_3;
    // 0x808018A0: nop

    after_3:
    // 0x808018A4: b           L_8080192C
    // 0x808018A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080192C;
    // 0x808018A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808018AC:
    // 0x808018AC: lw          $t8, 0x160($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X160);
    // 0x808018B0: beq         $t8, $zero, L_808018C8
    if (ctx->r24 == 0) {
        // 0x808018B4: nop
    
            goto L_808018C8;
    }
    // 0x808018B4: nop

    // 0x808018B8: jal         0x8009E830
    // 0x808018BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E830(rdram, ctx);
        goto after_4;
    // 0x808018BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x808018C0: b           L_8080192C
    // 0x808018C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080192C;
    // 0x808018C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808018C8:
    // 0x808018C8: jal         0x80099A4C
    // 0x808018CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80099A4C(rdram, ctx);
        goto after_5;
    // 0x808018CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_5:
    // 0x808018D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808018D4: jal         0x80099A58
    // 0x808018D8: sw          $v0, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->r2;
    func_80099A58(rdram, ctx);
        goto after_6;
    // 0x808018D8: sw          $v0, 0x160($a0)
    MEM_W(0X160, ctx->r4) = ctx->r2;
    after_6:
    // 0x808018DC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808018E0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x808018E4: jal         0x80001600
    // 0x808018E8: sb          $v0, 0x164($a0)
    MEM_B(0X164, ctx->r4) = ctx->r2;
    func_80801600_bstaxi(rdram, ctx);
        goto after_7;
    // 0x808018E8: sb          $v0, 0x164($a0)
    MEM_B(0X164, ctx->r4) = ctx->r2;
    after_7:
    // 0x808018EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808018F0: jal         0x8009E830
    // 0x808018F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8009E830(rdram, ctx);
        goto after_8;
    // 0x808018F4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_8:
    // 0x808018F8: b           L_8080192C
    // 0x808018FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080192C;
    // 0x808018FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801900:
    // 0x80801900: jal         0x80099A34
    // 0x80801904: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80099A34(rdram, ctx);
        goto after_9;
    // 0x80801904: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_9:
    // 0x80801908: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080190C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80801910: jal         0x8009E830
    // 0x80801914: swc1        $f0, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f0.u32l;
    func_8009E830(rdram, ctx);
        goto after_10;
    // 0x80801914: swc1        $f0, 0x16C($a0)
    MEM_W(0X16C, ctx->r4) = ctx->f0.u32l;
    after_10:
    // 0x80801918: b           L_8080192C
    // 0x8080191C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8080192C;
    // 0x8080191C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80801920:
    // 0x80801920: jal         0x80099B94
    // 0x80801924: nop

    func_80099B94(rdram, ctx);
        goto after_11;
    // 0x80801924: nop

    after_11:
    // 0x80801928: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080192C:
    // 0x8080192C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801930: jr          $ra
    // 0x80801934: nop

    return;
    // 0x80801934: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801938: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8080193C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801940: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801944: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80801948: sw          $zero, 0x44($sp)
    MEM_W(0X44, ctx->r29) = 0;
    // 0x8080194C: jal         0x8009D3A8
    // 0x80801950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x80801950: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80801954: lbu         $t6, 0x15C($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X15C);
    // 0x80801958: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8080195C: sltiu       $at, $t7, 0x5
    ctx->r1 = ctx->r15 < 0X5 ? 1 : 0;
    // 0x80801960: beq         $at, $zero, L_80801C5C
    if (ctx->r1 == 0) {
        // 0x80801964: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80801C5C;
    }
    // 0x80801964: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80801968: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X20B4) << 16);
    // 0x8080196C: addu        $at, $at, $t7
    gpr jr_addend_80801974 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80801970: lw          $t7, 0x20B4($at)
    ctx->r15 = ADD32(ctx->r1, (int16_t)RELOC_LO16(154, 0X20B4));
    // 0x80801974: jr          $t7
    // 0x80801978: nop

    switch (jr_addend_80801974 >> 2) {
        case 0: goto L_8080197C; break;
        case 1: goto L_808019E8; break;
        case 2: goto L_80801AF0; break;
        case 3: goto L_80801B28; break;
        case 4: goto L_80801B48; break;
        default: switch_error(__func__, 0x80801974, 0x808020B4);
    }
    // 0x80801978: nop

L_8080197C:
    // 0x8080197C: jal         0x80000000
    // 0x80801980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80800000_bstaxi(rdram, ctx);
        goto after_1;
    // 0x80801980: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80801984: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801988: jal         0x80095738
    // 0x8080198C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_80095738(rdram, ctx);
        goto after_2;
    // 0x8080198C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_2:
    // 0x80801990: beq         $v0, $zero, L_808019A0
    if (ctx->r2 == 0) {
        // 0x80801994: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808019A0;
    }
    // 0x80801994: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801998: jal         0x80095774
    // 0x8080199C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_80095774(rdram, ctx);
        goto after_3;
    // 0x8080199C: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_3:
L_808019A0:
    // 0x808019A0: lui         $a1, 0x3E4C
    ctx->r5 = S32(0X3E4C << 16);
    // 0x808019A4: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x808019A8: jal         0x8008CB10
    // 0x808019AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_4;
    // 0x808019AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x808019B0: beq         $v0, $zero, L_808019C0
    if (ctx->r2 == 0) {
        // 0x808019B4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808019C0;
    }
    // 0x808019B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019B8: jal         0x80095760
    // 0x808019BC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    func_80095760(rdram, ctx);
        goto after_5;
    // 0x808019BC: addiu       $a1, $zero, 0x33
    ctx->r5 = ADD32(0, 0X33);
    after_5:
L_808019C0:
    // 0x808019C0: lui         $a1, 0x3EB3
    ctx->r5 = S32(0X3EB3 << 16);
    // 0x808019C4: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x808019C8: jal         0x8008CB10
    // 0x808019CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_6;
    // 0x808019CC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x808019D0: beq         $v0, $zero, L_80801C5C
    if (ctx->r2 == 0) {
        // 0x808019D4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801C5C;
    }
    // 0x808019D4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808019D8: jal         0x80001600
    // 0x808019DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80801600_bstaxi(rdram, ctx);
        goto after_7;
    // 0x808019DC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_7:
    // 0x808019E0: b           L_80801C60
    // 0x808019E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801C60;
    // 0x808019E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808019E8:
    // 0x808019E8: lui         $a1, 0x3EE1
    ctx->r5 = S32(0X3EE1 << 16);
    // 0x808019EC: ori         $a1, $a1, 0x47AE
    ctx->r5 = ctx->r5 | 0X47AE;
    // 0x808019F0: jal         0x8008CB10
    // 0x808019F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_8;
    // 0x808019F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x808019F8: beq         $v0, $zero, L_80801A18
    if (ctx->r2 == 0) {
        // 0x808019FC: lui         $a2, 0x3F73
        ctx->r6 = S32(0X3F73 << 16);
            goto L_80801A18;
    }
    // 0x808019FC: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x80801A00: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x80801A04: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80801A08: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80801A0C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A10: jal         0x8009DC98
    // 0x80801A14: addiu       $a1, $zero, 0x5AC
    ctx->r5 = ADD32(0, 0X5AC);
    func_8009DC98(rdram, ctx);
        goto after_9;
    // 0x80801A14: addiu       $a1, $zero, 0x5AC
    ctx->r5 = ADD32(0, 0X5AC);
    after_9:
L_80801A18:
    // 0x80801A18: lui         $a1, 0x3F23
    ctx->r5 = S32(0X3F23 << 16);
    // 0x80801A1C: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x80801A20: jal         0x8008CB10
    // 0x80801A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_10;
    // 0x80801A24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80801A28: beq         $v0, $zero, L_80801A38
    if (ctx->r2 == 0) {
        // 0x80801A2C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801A38;
    }
    // 0x80801A2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A30: jal         0x8009B9B0
    // 0x80801A34: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_11;
    // 0x80801A34: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_11:
L_80801A38:
    // 0x80801A38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A3C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80801A40: jal         0x80084518
    // 0x80801A44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    _babackpack_entrypoint_6(rdram, ctx);
        goto after_12;
    // 0x80801A44: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_12:
    // 0x80801A48: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A4C: jal         0x80085300
    // 0x80801A50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_get(rdram, ctx);
        goto after_13;
    // 0x80801A50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x80801A54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80801A58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80801A5C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80801A60: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80801A64: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x80801A68: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80801A6C: jal         0x800F10B4
    // 0x80801A70: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    func_800F10B4(rdram, ctx);
        goto after_14;
    // 0x80801A70: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_14:
    // 0x80801A74: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80801A78: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801A7C: jal         0x80085300
    // 0x80801A80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_get(rdram, ctx);
        goto after_15;
    // 0x80801A80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_15:
    // 0x80801A84: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(154, 0X20C8) << 16);
    // 0x80801A88: lwc1        $f14, 0x20C8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, (int16_t)RELOC_LO16(154, 0X20C8));
    // 0x80801A8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80801A90: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80801A94: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80801A98: lui         $a2, 0x3F00
    ctx->r6 = S32(0X3F00 << 16);
    // 0x80801A9C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80801AA0: jal         0x800F10B4
    // 0x80801AA4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_800F10B4(rdram, ctx);
        goto after_16;
    // 0x80801AA4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_16:
    // 0x80801AA8: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80801AAC: jal         0x80084768
    // 0x80801AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bapackctrl_entrypoint_1(rdram, ctx);
        goto after_17;
    // 0x80801AB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80801AB4: lw          $a0, 0x160($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X160);
    // 0x80801AB8: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    // 0x80801ABC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80801AC0: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80801AC4: jal         0x8008A538
    // 0x80801AC8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    _subaddietaxi_entrypoint_8(rdram, ctx);
        goto after_18;
    // 0x80801AC8: lw          $a3, 0x30($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X30);
    after_18:
    // 0x80801ACC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801AD0: jal         0x800852F0
    // 0x80801AD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_19;
    // 0x80801AD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_19:
    // 0x80801AD8: beq         $v0, $zero, L_80801C5C
    if (ctx->r2 == 0) {
        // 0x80801ADC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801C5C;
    }
    // 0x80801ADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801AE0: jal         0x80001600
    // 0x80801AE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80801600_bstaxi(rdram, ctx);
        goto after_20;
    // 0x80801AE4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_20:
    // 0x80801AE8: b           L_80801C60
    // 0x80801AEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801C60;
    // 0x80801AEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801AF0:
    // 0x80801AF0: lui         $a1, 0x3F23
    ctx->r5 = S32(0X3F23 << 16);
    // 0x80801AF4: ori         $a1, $a1, 0xD70A
    ctx->r5 = ctx->r5 | 0XD70A;
    // 0x80801AF8: jal         0x8008CB10
    // 0x80801AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_21;
    // 0x80801AFC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_21:
    // 0x80801B00: beq         $v0, $zero, L_80801B10
    if (ctx->r2 == 0) {
        // 0x80801B04: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801B10;
    }
    // 0x80801B04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B08: jal         0x8009B9B0
    // 0x80801B0C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_22;
    // 0x80801B0C: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_22:
L_80801B10:
    // 0x80801B10: jal         0x8008CAEC
    // 0x80801B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_23;
    // 0x80801B14: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_23:
    // 0x80801B18: beq         $v0, $zero, L_80801C5C
    if (ctx->r2 == 0) {
        // 0x80801B1C: addiu       $t8, $zero, 0x125
        ctx->r24 = ADD32(0, 0X125);
            goto L_80801C5C;
    }
    // 0x80801B1C: addiu       $t8, $zero, 0x125
    ctx->r24 = ADD32(0, 0X125);
    // 0x80801B20: b           L_80801C5C
    // 0x80801B24: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
        goto L_80801C5C;
    // 0x80801B24: sw          $t8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r24;
L_80801B28:
    // 0x80801B28: jal         0x8008CAEC
    // 0x80801B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_24;
    // 0x80801B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x80801B30: beq         $v0, $zero, L_80801C5C
    if (ctx->r2 == 0) {
        // 0x80801B34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801C5C;
    }
    // 0x80801B34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B38: jal         0x80001600
    // 0x80801B3C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    func_80801600_bstaxi(rdram, ctx);
        goto after_25;
    // 0x80801B3C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_25:
    // 0x80801B40: b           L_80801C60
    // 0x80801B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
        goto L_80801C60;
    // 0x80801B44: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801B48:
    // 0x80801B48: lui         $a1, 0x3DCC
    ctx->r5 = S32(0X3DCC << 16);
    // 0x80801B4C: ori         $a1, $a1, 0xCCCD
    ctx->r5 = ctx->r5 | 0XCCCD;
    // 0x80801B50: jal         0x8008CB10
    // 0x80801B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_26;
    // 0x80801B54: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_26:
    // 0x80801B58: beq         $v0, $zero, L_80801B70
    if (ctx->r2 == 0) {
        // 0x80801B5C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801B70;
    }
    // 0x80801B5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B60: addiu       $a1, $zero, 0x5AF
    ctx->r5 = ADD32(0, 0X5AF);
    // 0x80801B64: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80801B68: jal         0x8009DF18
    // 0x80801B6C: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DF18(rdram, ctx);
        goto after_27;
    // 0x80801B6C: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_27:
L_80801B70:
    // 0x80801B70: lui         $a1, 0x3E99
    ctx->r5 = S32(0X3E99 << 16);
    // 0x80801B74: ori         $a1, $a1, 0x999A
    ctx->r5 = ctx->r5 | 0X999A;
    // 0x80801B78: jal         0x8008CB10
    // 0x80801B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_28;
    // 0x80801B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_28:
    // 0x80801B80: beq         $v0, $zero, L_80801B9C
    if (ctx->r2 == 0) {
        // 0x80801B84: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801B9C;
    }
    // 0x80801B84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801B88: lui         $a2, 0x3F66
    ctx->r6 = S32(0X3F66 << 16);
    // 0x80801B8C: ori         $a2, $a2, 0x6666
    ctx->r6 = ctx->r6 | 0X6666;
    // 0x80801B90: addiu       $a1, $zero, 0x5AF
    ctx->r5 = ADD32(0, 0X5AF);
    // 0x80801B94: jal         0x8009DF18
    // 0x80801B98: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    func_8009DF18(rdram, ctx);
        goto after_29;
    // 0x80801B98: addiu       $a3, $zero, 0x6D60
    ctx->r7 = ADD32(0, 0X6D60);
    after_29:
L_80801B9C:
    // 0x80801B9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BA0: jal         0x8008CB10
    // 0x80801BA4: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    func_8008CB10(rdram, ctx);
        goto after_30;
    // 0x80801BA4: lui         $a1, 0x3F00
    ctx->r5 = S32(0X3F00 << 16);
    after_30:
    // 0x80801BA8: beq         $v0, $zero, L_80801BD8
    if (ctx->r2 == 0) {
        // 0x80801BAC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801BD8;
    }
    // 0x80801BAC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BB0: lui         $a2, 0x3F73
    ctx->r6 = S32(0X3F73 << 16);
    // 0x80801BB4: lui         $a3, 0x3F86
    ctx->r7 = S32(0X3F86 << 16);
    // 0x80801BB8: addiu       $t9, $zero, 0x4E20
    ctx->r25 = ADD32(0, 0X4E20);
    // 0x80801BBC: addiu       $t0, $zero, 0x55F0
    ctx->r8 = ADD32(0, 0X55F0);
    // 0x80801BC0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x80801BC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80801BC8: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80801BCC: ori         $a2, $a2, 0x3333
    ctx->r6 = ctx->r6 | 0X3333;
    // 0x80801BD0: jal         0x8009DFD4
    // 0x80801BD4: addiu       $a1, $zero, 0x5AE
    ctx->r5 = ADD32(0, 0X5AE);
    func_8009DFD4(rdram, ctx);
        goto after_31;
    // 0x80801BD4: addiu       $a1, $zero, 0x5AE
    ctx->r5 = ADD32(0, 0X5AE);
    after_31:
L_80801BD8:
    // 0x80801BD8: lui         $a1, 0x3F34
    ctx->r5 = S32(0X3F34 << 16);
    // 0x80801BDC: ori         $a1, $a1, 0xFDF4
    ctx->r5 = ctx->r5 | 0XFDF4;
    // 0x80801BE0: jal         0x8008CB10
    // 0x80801BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CB10(rdram, ctx);
        goto after_32;
    // 0x80801BE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_32:
    // 0x80801BE8: beq         $v0, $zero, L_80801C20
    if (ctx->r2 == 0) {
        // 0x80801BEC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801C20;
    }
    // 0x80801BEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BF0: jal         0x80084538
    // 0x80801BF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    _babackpack_set_state(rdram, ctx);
        goto after_33;
    // 0x80801BF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_33:
    // 0x80801BF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801BFC: jal         0x800A0CD0
    // 0x80801C00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CD0(rdram, ctx);
        goto after_34;
    // 0x80801C00: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_34:
    // 0x80801C04: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C08: jal         0x80084788
    // 0x80801C0C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    _bapackctrl_entrypoint_5(rdram, ctx);
        goto after_35;
    // 0x80801C0C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    after_35:
    // 0x80801C10: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801C14: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80801C18: jal         0x8009E55C
    // 0x80801C1C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8009E55C(rdram, ctx);
        goto after_36;
    // 0x80801C1C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_36:
L_80801C20:
    // 0x80801C20: jal         0x8008CAEC
    // 0x80801C24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008CAEC(rdram, ctx);
        goto after_37;
    // 0x80801C24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_37:
    // 0x80801C28: beql        $v0, $zero, L_80801C60
    if (ctx->r2 == 0) {
        // 0x80801C2C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80801C60;
    }
    goto skip_0;
    // 0x80801C2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x80801C30: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80801C34: lwc1        $f10, 0x16C($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X16C);
    // 0x80801C38: addiu       $t1, $zero, 0x6F
    ctx->r9 = ADD32(0, 0X6F);
    // 0x80801C3C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80801C40: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80801C44: nop

    // 0x80801C48: bc1tl       L_80801C5C
    if (c1cs) {
        // 0x80801C4C: sw          $t2, 0x44($sp)
        MEM_W(0X44, ctx->r29) = ctx->r10;
            goto L_80801C5C;
    }
    goto skip_1;
    // 0x80801C4C: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
    skip_1:
    // 0x80801C50: b           L_80801C5C
    // 0x80801C54: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
        goto L_80801C5C;
    // 0x80801C54: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x80801C58: sw          $t2, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r10;
L_80801C5C:
    // 0x80801C5C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80801C60:
    // 0x80801C60: jal         0x8009E5C8
    // 0x80801C64: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8009E5C8(rdram, ctx);
        goto after_38;
    // 0x80801C64: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_38:
    // 0x80801C68: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801C6C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801C70: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80801C74: jr          $ra
    // 0x80801C78: nop

    return;
    // 0x80801C78: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_31(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801C7C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801C80: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(154, 0X21E8) << 16);
    // 0x80801C84: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801C88: jr          $ra
    // 0x80801C8C: lw          $v0, 0x21E8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X21E8));
    return;
    // 0x80801C8C: lw          $v0, 0x21E8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X21E8));
;}
RECOMP_FUNC void bstaxi_entrypoint_32(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801C90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80801C94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80801C98: jal         0x80090A2C
    // 0x80801C9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80090A2C(rdram, ctx);
        goto after_0;
    // 0x80801C9C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80801CA0: jal         0x800000D4
    // 0x80801CA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    bstaxi_entrypoint_0(rdram, ctx);
        goto after_1;
    // 0x80801CA4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x80801CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80801CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80801CB0: jr          $ra
    // 0x80801CB4: nop

    return;
    // 0x80801CB4: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_33(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801CB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80801CBC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80801CC0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80801CC4: jal         0x80000144
    // 0x80801CC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    bstaxi_entrypoint_1(rdram, ctx);
        goto after_0;
    // 0x80801CC8: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80801CCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801CD0: addiu       $a1, $zero, 0x124
    ctx->r5 = ADD32(0, 0X124);
    // 0x80801CD4: jal         0x8008CB3C
    // 0x80801CD8: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    func_8008CB3C(rdram, ctx);
        goto after_1;
    // 0x80801CD8: lui         $a2, 0x40C0
    ctx->r6 = S32(0X40C0 << 16);
    after_1:
    // 0x80801CDC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80801CE0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80801CE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801CE8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80801CEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80801CF0: jal         0x8009FFD8
    // 0x80801CF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8009FFD8(rdram, ctx);
        goto after_2;
    // 0x80801CF4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80801CF8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80801CFC: jal         0x8009B9B0
    // 0x80801D00: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_3;
    // 0x80801D00: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_3:
    // 0x80801D04: jal         0x800909CC
    // 0x80801D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800909CC(rdram, ctx);
        goto after_4;
    // 0x80801D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80801D0C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80801D10: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80801D14: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80801D18: jr          $ra
    // 0x80801D1C: nop

    return;
    // 0x80801D1C: nop

;}
RECOMP_FUNC void bstaxi_entrypoint_34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801D20: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80801D24: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80801D28: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80801D2C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80801D30: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80801D34: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80801D38: jal         0x8009D3A8
    // 0x80801D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D3A8(rdram, ctx);
        goto after_0;
    // 0x80801D3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80801D40: jal         0x8009EF10
    // 0x80801D44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x80801D44: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80801D48: blez        $v0, L_80801D54
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80801D4C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80801D54;
    }
    // 0x80801D4C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801D50: addiu       $s0, $zero, 0x123
    ctx->r16 = ADD32(0, 0X123);
L_80801D54:
    // 0x80801D54: jal         0x80000064
    // 0x80801D58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80800064_bstaxi(rdram, ctx);
        goto after_2;
    // 0x80801D58: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80801D5C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80801D60: jal         0x8008E148
    // 0x80801D64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E148(rdram, ctx);
        goto after_3;
    // 0x80801D64: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_3:
    // 0x80801D68: beq         $v0, $zero, L_80801D74
    if (ctx->r2 == 0) {
        // 0x80801D6C: nop
    
            goto L_80801D74;
    }
    // 0x80801D6C: nop

    // 0x80801D70: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_80801D74:
    // 0x80801D74: jal         0x8008E260
    // 0x80801D78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E260(rdram, ctx);
        goto after_4;
    // 0x80801D78: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x80801D7C: beq         $v0, $zero, L_80801D88
    if (ctx->r2 == 0) {
        // 0x80801D80: nop
    
            goto L_80801D88;
    }
    // 0x80801D80: nop

    // 0x80801D84: addiu       $s0, $zero, 0x3D
    ctx->r16 = ADD32(0, 0X3D);
L_80801D88:
    // 0x80801D88: jal         0x8008E35C
    // 0x80801D8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8008E35C(rdram, ctx);
        goto after_5;
    // 0x80801D8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80801D90: beq         $v0, $zero, L_80801D9C
    if (ctx->r2 == 0) {
        // 0x80801D94: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80801D9C;
    }
    // 0x80801D94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801D98: addiu       $s0, $zero, 0x4C
    ctx->r16 = ADD32(0, 0X4C);
L_80801D9C:
    // 0x80801D9C: jal         0x800A02DC
    // 0x80801DA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800A02DC(rdram, ctx);
        goto after_6;
    // 0x80801DA0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
    // 0x80801DA4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80801DA8: jal         0x8009E5C8
    // 0x80801DAC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8009E5C8(rdram, ctx);
        goto after_7;
    // 0x80801DAC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_7:
    // 0x80801DB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80801DB4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80801DB8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80801DBC: jr          $ra
    // 0x80801DC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80801DC0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bstaxi_entrypoint_35(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80801DC4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80801DC8: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(154, 0X21F8) << 16);
    // 0x80801DCC: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80801DD0: jr          $ra
    // 0x80801DD4: lw          $v0, 0x21F8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X21F8));
    return;
    // 0x80801DD4: lw          $v0, 0x21F8($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(154, 0X21F8));
    // 0x80801DD8: nop

    // 0x80801DDC: nop

;}
RECOMP_FUNC void bsthrow_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800004: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8080000C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80800010: jal         0x8008CABC
    // 0x80800014: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x80800014: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80800018: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8080001C: jal         0x8008AF24
    // 0x80800020: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x80800020: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80800024: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800028: jal         0x8008AED4
    // 0x8080002C: addiu       $a1, $zero, 0x11B
    ctx->r5 = ADD32(0, 0X11B);
    func_8008AED4(rdram, ctx);
        goto after_2;
    // 0x8080002C: addiu       $a1, $zero, 0x11B
    ctx->r5 = ADD32(0, 0X11B);
    after_2:
    // 0x80800030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800034: jal         0x8008B1BC
    // 0x80800038: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8008B1BC(rdram, ctx);
        goto after_3;
    // 0x80800038: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_3:
    // 0x8080003C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800040: jal         0x8008B134
    // 0x80800044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008B134(rdram, ctx);
        goto after_4;
    // 0x80800044: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800048: jal         0x8008B064
    // 0x8080004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008B064(rdram, ctx);
        goto after_5;
    // 0x8080004C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80800050: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800054: jal         0x8008CA4C
    // 0x80800058: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8008CA4C(rdram, ctx);
        goto after_6;
    // 0x80800058: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x8080005C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800060: jal         0x8009C908
    // 0x80800064: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009C908(rdram, ctx);
        goto after_7;
    // 0x80800064: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
    // 0x80800068: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8080006C: jal         0x8009D2D8
    // 0x80800070: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009D2D8(rdram, ctx);
        goto after_8;
    // 0x80800070: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_8:
    // 0x80800074: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800078: jal         0x8009B800
    // 0x8080007C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8009B800(rdram, ctx);
        goto after_9;
    // 0x8080007C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_9:
    // 0x80800080: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800084: jal         0x8009B9B0
    // 0x80800088: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_10;
    // 0x80800088: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_10:
    // 0x8080008C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80800090: jal         0x8009BA9C
    // 0x80800094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009BA9C(rdram, ctx);
        goto after_11;
    // 0x80800094: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x80800098: sw          $zero, 0x15C($s1)
    MEM_W(0X15C, ctx->r17) = 0;
    // 0x8080009C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x808000A0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x808000A4: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x808000A8: jr          $ra
    // 0x808000AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x808000AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void bsthrow_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000B0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x808000B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000B8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000BC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000C0: jal         0x8008CABC
    // 0x808000C4: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808000C4: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    after_0:
    // 0x808000C8: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x808000CC: jal         0x80084D40
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _bahold_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x808000D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x808000D4: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x808000D8: lw          $t6, 0x15C($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X15C);
    // 0x808000DC: bnel        $t6, $zero, L_808000F8
    if (ctx->r14 != 0) {
        // 0x808000E0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000F8;
    }
    goto skip_0;
    // 0x808000E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x808000E4: beq         $v0, $zero, L_808000F4
    if (ctx->r2 == 0) {
        // 0x808000E8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_808000F4;
    }
    // 0x808000E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000EC: jal         0x80084D48
    // 0x808000F0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    _bahold_entrypoint_6(rdram, ctx);
        goto after_2;
    // 0x808000F0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
L_808000F4:
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_808000F8:
    // 0x808000F8: jal         0x8009C128
    // 0x808000FC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    func_8009C128(rdram, ctx);
        goto after_3;
    // 0x808000FC: addiu       $a1, $sp, 0x30
    ctx->r5 = ADD32(ctx->r29, 0X30);
    after_3:
    // 0x80800100: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800104: jal         0x800A33CC
    // 0x80800108: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    func_800A33CC(rdram, ctx);
        goto after_4;
    // 0x80800108: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    after_4:
    // 0x8080010C: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80800110: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80800114: jal         0x800F1E6C
    // 0x80800118: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    func_800F1E6C(rdram, ctx);
        goto after_5;
    // 0x80800118: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    after_5:
    // 0x8080011C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800120: jal         0x8009C914
    // 0x80800124: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_8009C914(rdram, ctx);
        goto after_6;
    // 0x80800124: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_6:
    // 0x80800128: lui         $a1, 0x3EB3
    ctx->r5 = S32(0X3EB3 << 16);
    // 0x8080012C: ori         $a1, $a1, 0x3333
    ctx->r5 = ctx->r5 | 0X3333;
    // 0x80800130: jal         0x8008B348
    // 0x80800134: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B348(rdram, ctx);
        goto after_7;
    // 0x80800134: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_7:
    // 0x80800138: beq         $v0, $zero, L_80800160
    if (ctx->r2 == 0) {
        // 0x8080013C: lw          $t7, 0x28($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X28);
            goto L_80800160;
    }
    // 0x8080013C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80800140: beq         $t7, $zero, L_80800160
    if (ctx->r15 == 0) {
        // 0x80800144: addiu       $t8, $zero, 0x1
        ctx->r24 = ADD32(0, 0X1);
            goto L_80800160;
    }
    // 0x80800144: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80800148: sw          $t8, 0x15C($s0)
    MEM_W(0X15C, ctx->r16) = ctx->r24;
    // 0x8080014C: jal         0x80106790
    // 0x80800150: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80106790(rdram, ctx);
        goto after_8;
    // 0x80800150: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_8:
    // 0x80800154: lbu         $t0, 0x65($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X65);
    // 0x80800158: ori         $t1, $t0, 0x40
    ctx->r9 = ctx->r8 | 0X40;
    // 0x8080015C: sb          $t1, 0x65($v0)
    MEM_B(0X65, ctx->r2) = ctx->r9;
L_80800160:
    // 0x80800160: jal         0x8008B324
    // 0x80800164: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    func_8008B324(rdram, ctx);
        goto after_9;
    // 0x80800164: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    after_9:
    // 0x80800168: beq         $v0, $zero, L_80800178
    if (ctx->r2 == 0) {
        // 0x8080016C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800178;
    }
    // 0x8080016C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800170: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80800174: sw          $t2, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r10;
L_80800178:
    // 0x80800178: jal         0x8009E5C8
    // 0x8080017C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_8009E5C8(rdram, ctx);
        goto after_10;
    // 0x8080017C: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_10:
    // 0x80800180: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80800184: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80800188: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x8080018C: jr          $ra
    // 0x80800190: nop

    return;
    // 0x80800190: nop

;}
RECOMP_FUNC void bsthrow_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800194: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080019C: sw          $zero, 0x15C($a0)
    MEM_W(0X15C, ctx->r4) = 0;
    // 0x808001A0: jal         0x8009E704
    // 0x808001A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E704(rdram, ctx);
        goto after_0;
    // 0x808001A4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x808001A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x808001AC: bne         $v0, $at, L_808001D8
    if (ctx->r2 != ctx->r1) {
        // 0x808001B0: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_808001D8;
    }
    // 0x808001B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001B4: lui         $a2, 0x3E0F
    ctx->r6 = S32(0X3E0F << 16);
    // 0x808001B8: ori         $a2, $a2, 0x5C29
    ctx->r6 = ctx->r6 | 0X5C29;
    // 0x808001BC: jal         0x800917A8
    // 0x808001C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800917A8(rdram, ctx);
        goto after_1;
    // 0x808001C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x808001C4: lui         $a2, 0x3E8F
    ctx->r6 = S32(0X3E8F << 16);
    // 0x808001C8: ori         $a2, $a2, 0x5C29
    ctx->r6 = ctx->r6 | 0X5C29;
    // 0x808001CC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001D0: jal         0x800917A8
    // 0x808001D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800917A8(rdram, ctx);
        goto after_2;
    // 0x808001D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
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
RECOMP_FUNC void bsthrow_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001E8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808001EC: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(155, 0X2F0) << 16);
    // 0x808001F0: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808001F4: jr          $ra
    // 0x808001F8: lw          $v0, 0x2F0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(155, 0X2F0));
    return;
    // 0x808001F8: lw          $v0, 0x2F0($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(155, 0X2F0));
;}
RECOMP_FUNC void bsthrow_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800200: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800204: jal         0x8009E6EC
    // 0x80800208: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8009E6EC(rdram, ctx);
        goto after_0;
    // 0x80800208: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8080020C: addiu       $t6, $v0, -0x12
    ctx->r14 = ADD32(ctx->r2, -0X12);
    // 0x80800210: sltiu       $at, $t6, 0x14
    ctx->r1 = ctx->r14 < 0X14 ? 1 : 0;
    // 0x80800214: beq         $at, $zero, L_8080027C
    if (ctx->r1 == 0) {
        // 0x80800218: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_8080027C;
    }
    // 0x80800218: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080021C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80800220: lui         $at, 0x0
    ctx->r1 = S32(RELOC_HI16(155, 0X2A0) << 16);
    // 0x80800224: addu        $at, $at, $t6
    gpr jr_addend_8080022C = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80800228: lw          $t6, 0x2A0($at)
    ctx->r14 = ADD32(ctx->r1, (int16_t)RELOC_LO16(155, 0X2A0));
    // 0x8080022C: jr          $t6
    // 0x80800230: nop

    switch (jr_addend_8080022C >> 2) {
        case 0: goto L_80800234; break;
        case 1: goto L_8080027C; break;
        case 2: goto L_8080027C; break;
        case 3: goto L_8080026C; break;
        case 4: goto L_8080027C; break;
        case 5: goto L_8080027C; break;
        case 6: goto L_8080027C; break;
        case 7: goto L_8080027C; break;
        case 8: goto L_8080027C; break;
        case 9: goto L_8080027C; break;
        case 10: goto L_8080026C; break;
        case 11: goto L_8080026C; break;
        case 12: goto L_8080026C; break;
        case 13: goto L_8080027C; break;
        case 14: goto L_8080027C; break;
        case 15: goto L_8080027C; break;
        case 16: goto L_8080027C; break;
        case 17: goto L_8080027C; break;
        case 18: goto L_8080027C; break;
        case 19: goto L_8080026C; break;
        default: switch_error(__func__, 0x8080022C, 0x808002A0);
    }
    // 0x80800230: nop

L_80800234:
    // 0x80800234: lw          $t7, 0x15C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X15C);
    // 0x80800238: bne         $t7, $zero, L_8080025C
    if (ctx->r15 != 0) {
        // 0x8080023C: nop
    
            goto L_8080025C;
    }
    // 0x8080023C: nop

    // 0x80800240: jal         0x8008E9AC
    // 0x80800244: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8008E9AC(rdram, ctx);
        goto after_1;
    // 0x80800244: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_1:
    // 0x80800248: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8080024C: jal         0x8008F6B8
    // 0x80800250: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_8008F6B8(rdram, ctx);
        goto after_2;
    // 0x80800250: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_2:
    // 0x80800254: b           L_80800288
    // 0x80800258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800288;
    // 0x80800258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080025C:
    // 0x8080025C: jal         0x8009E830
    // 0x80800260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E830(rdram, ctx);
        goto after_3;
    // 0x80800260: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80800264: b           L_80800288
    // 0x80800268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800288;
    // 0x80800268: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080026C:
    // 0x8080026C: jal         0x8009E830
    // 0x80800270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009E830(rdram, ctx);
        goto after_4;
    // 0x80800270: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80800274: b           L_80800288
    // 0x80800278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80800288;
    // 0x80800278: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080027C:
    // 0x8080027C: jal         0x80099B94
    // 0x80800280: nop

    func_80099B94(rdram, ctx);
        goto after_5;
    // 0x80800280: nop

    after_5:
    // 0x80800284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80800288:
    // 0x80800288: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080028C: jr          $ra
    // 0x80800290: nop

    return;
    // 0x80800290: nop

    // 0x80800294: nop

    // 0x80800298: nop

    // 0x8080029C: nop

;}
RECOMP_FUNC void bstimeout_entrypoint_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80800004: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80800008: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8080000C: lui         $a2, 0x404C
    ctx->r6 = S32(0X404C << 16);
    // 0x80800010: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80800014: ori         $a2, $a2, 0xCCCD
    ctx->r6 = ctx->r6 | 0XCCCD;
    // 0x80800018: jal         0x8008CCBC
    // 0x8080001C: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    func_8008CCBC(rdram, ctx);
        goto after_0;
    // 0x8080001C: addiu       $a1, $zero, 0x77
    ctx->r5 = ADD32(0, 0X77);
    after_0:
    // 0x80800020: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80800024: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80800028: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080002C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800030: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800034: jal         0x8009FFD8
    // 0x80800038: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_1;
    // 0x80800038: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_1:
    // 0x8080003C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800040: jal         0x8009B9B0
    // 0x80800044: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800044: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800048: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080004C: jal         0x800A4DA4
    // 0x80800050: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800A4DA4(rdram, ctx);
        goto after_3;
    // 0x80800050: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_3:
    // 0x80800054: jal         0x8009F308
    // 0x80800058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F308(rdram, ctx);
        goto after_4;
    // 0x80800058: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x8080005C: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x80800060: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800064: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800068: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x8080006C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80800070: jal         0x8009C914
    // 0x80800074: nop

    func_8009C914(rdram, ctx);
        goto after_5;
    // 0x80800074: nop

    after_5:
    // 0x80800078: jal         0x800A4CA8
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_6;
    // 0x8080007C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80800080: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800084: jal         0x80089288
    // 0x80800088: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    _ncbadie_entrypoint_3(rdram, ctx);
        goto after_7;
    // 0x80800088: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_7:
    // 0x8080008C: jal         0x800FC6B0
    // 0x80800090: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_800FC6B0(rdram, ctx);
        goto after_8;
    // 0x80800090: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_8:
    // 0x80800094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800098: jal         0x800A0CF4
    // 0x8080009C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800A0CF4(rdram, ctx);
        goto after_9;
    // 0x8080009C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_9:
    // 0x808000A0: jal         0x8008E944
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_10;
    // 0x808000A4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
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
RECOMP_FUNC void bstimeout_entrypoint_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x808000C4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x808000C8: jal         0x8008CABC
    // 0x808000CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808000CC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808000D0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x808000D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x808000D8: jal         0x8008B348
    // 0x808000DC: lui         $a1, 0x3D80
    ctx->r5 = S32(0X3D80 << 16);
    func_8008B348(rdram, ctx);
        goto after_1;
    // 0x808000DC: lui         $a1, 0x3D80
    ctx->r5 = S32(0X3D80 << 16);
    after_1:
    // 0x808000E0: beql        $v0, $zero, L_808000F4
    if (ctx->r2 == 0) {
        // 0x808000E4: lui         $a1, 0x3E38
        ctx->r5 = S32(0X3E38 << 16);
            goto L_808000F4;
    }
    goto skip_0;
    // 0x808000E4: lui         $a1, 0x3E38
    ctx->r5 = S32(0X3E38 << 16);
    skip_0:
    // 0x808000E8: jal         0x8009514C
    // 0x808000EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009514C(rdram, ctx);
        goto after_2;
    // 0x808000EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x808000F0: lui         $a1, 0x3E38
    ctx->r5 = S32(0X3E38 << 16);
L_808000F4:
    // 0x808000F4: ori         $a1, $a1, 0x51EC
    ctx->r5 = ctx->r5 | 0X51EC;
    // 0x808000F8: jal         0x8008B348
    // 0x808000FC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_3;
    // 0x808000FC: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x80800100: beq         $v0, $zero, L_80800118
    if (ctx->r2 == 0) {
        // 0x80800104: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800118;
    }
    // 0x80800104: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800108: addiu       $a1, $zero, 0x3EB
    ctx->r5 = ADD32(0, 0X3EB);
    // 0x8080010C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800110: jal         0x8009DF18
    // 0x80800114: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    func_8009DF18(rdram, ctx);
        goto after_4;
    // 0x80800114: addiu       $a3, $zero, 0x4650
    ctx->r7 = ADD32(0, 0X4650);
    after_4:
L_80800118:
    // 0x80800118: lui         $a1, 0x3F57
    ctx->r5 = S32(0X3F57 << 16);
    // 0x8080011C: ori         $a1, $a1, 0x93DE
    ctx->r5 = ctx->r5 | 0X93DE;
    // 0x80800120: jal         0x8008B348
    // 0x80800124: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_5;
    // 0x80800124: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x80800128: beq         $v0, $zero, L_80800154
    if (ctx->r2 == 0) {
        // 0x8080012C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800154;
    }
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800130: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x80800134: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800138: jal         0x8009518C
    // 0x8080013C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009518C(rdram, ctx);
        goto after_6;
    // 0x8080013C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80800140: lui         $a2, 0x3E99
    ctx->r6 = S32(0X3E99 << 16);
    // 0x80800144: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800148: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080014C: jal         0x8009518C
    // 0x80800150: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8009518C(rdram, ctx);
        goto after_7;
    // 0x80800150: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_80800154:
    // 0x80800154: lui         $a1, 0x3F57
    ctx->r5 = S32(0X3F57 << 16);
    // 0x80800158: ori         $a1, $a1, 0xA3D
    ctx->r5 = ctx->r5 | 0XA3D;
    // 0x8080015C: jal         0x8008B348
    // 0x80800160: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_8008B348(rdram, ctx);
        goto after_8;
    // 0x80800160: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x80800164: beql        $v0, $zero, L_80800178
    if (ctx->r2 == 0) {
        // 0x80800168: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80800178;
    }
    goto skip_1;
    // 0x80800168: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x8080016C: jal         0x800A05DC
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A05DC(rdram, ctx);
        goto after_9;
    // 0x80800170: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_9:
    // 0x80800174: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80800178:
    // 0x80800178: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8080017C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80800180: jr          $ra
    // 0x80800184: nop

    return;
    // 0x80800184: nop

;}
RECOMP_FUNC void bstimeout_entrypoint_2(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800188: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080018C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800190: jal         0x800951B4
    // 0x80800194: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800951B4(rdram, ctx);
        goto after_0;
    // 0x80800194: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800198: jal         0x800A4E30
    // 0x8080019C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4E30(rdram, ctx);
        goto after_1;
    // 0x8080019C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
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
RECOMP_FUNC void bstimeout_entrypoint_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001B0: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x808001B4: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(156, 0X330) << 16);
    // 0x808001B8: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x808001BC: jr          $ra
    // 0x808001C0: lw          $v0, 0x330($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(156, 0X330));
    return;
    // 0x808001C0: lw          $v0, 0x330($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(156, 0X330));
;}
RECOMP_FUNC void bstimeout_entrypoint_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x808001C8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808001CC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808001D0: jal         0x8008CABC
    // 0x808001D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_8008CABC(rdram, ctx);
        goto after_0;
    // 0x808001D4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x808001D8: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x808001DC: jal         0x8008AF24
    // 0x808001E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_8008AF24(rdram, ctx);
        goto after_1;
    // 0x808001E0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x808001E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808001E8: jal         0x800A0110
    // 0x808001EC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800A0110(rdram, ctx);
        goto after_2;
    // 0x808001EC: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x808001F0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x808001F4: jal         0x8008B134
    // 0x808001F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8008B134(rdram, ctx);
        goto after_3;
    // 0x808001F8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_3:
    // 0x808001FC: jal         0x8008B064
    // 0x80800200: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    func_8008B064(rdram, ctx);
        goto after_4;
    // 0x80800200: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x80800204: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80800208: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080020C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800210: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80800214: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80800218: jal         0x8009FFD8
    // 0x8080021C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_8009FFD8(rdram, ctx);
        goto after_5;
    // 0x8080021C: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_5:
    // 0x80800220: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800224: jal         0x8009B9B0
    // 0x80800228: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_6;
    // 0x80800228: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_6:
    // 0x8080022C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800230: jal         0x800A4DA4
    // 0x80800234: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    func_800A4DA4(rdram, ctx);
        goto after_7;
    // 0x80800234: addiu       $a1, $zero, 0xA
    ctx->r5 = ADD32(0, 0XA);
    after_7:
    // 0x80800238: jal         0x8009F308
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8009F308(rdram, ctx);
        goto after_8;
    // 0x8080023C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80800240: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x80800244: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80800248: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080024C: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80800250: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80800254: jal         0x8009C914
    // 0x80800258: nop

    func_8009C914(rdram, ctx);
        goto after_9;
    // 0x80800258: nop

    after_9:
    // 0x8080025C: jal         0x800A4CA8
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800A4CA8(rdram, ctx);
        goto after_10;
    // 0x80800260: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80800264: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80800268: jal         0x80089288
    // 0x8080026C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    _ncbadie_entrypoint_3(rdram, ctx);
        goto after_11;
    // 0x8080026C: lui         $a1, 0x42A0
    ctx->r5 = S32(0X42A0 << 16);
    after_11:
    // 0x80800270: jal         0x800FC6B0
    // 0x80800274: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    func_800FC6B0(rdram, ctx);
        goto after_12;
    // 0x80800274: addiu       $a0, $zero, 0x17
    ctx->r4 = ADD32(0, 0X17);
    after_12:
    // 0x80800278: jal         0x8008E944
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8008E944(rdram, ctx);
        goto after_13;
    // 0x8080027C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_13:
    // 0x80800280: lui         $a2, 0x4039
    ctx->r6 = S32(0X4039 << 16);
    // 0x80800284: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    // 0x80800288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080028C: jal         0x80085338
    // 0x80800290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_set(rdram, ctx);
        goto after_14;
    // 0x80800290: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_14:
    // 0x80800294: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800298: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8080029C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x808002A0: jr          $ra
    // 0x808002A4: nop

    return;
    // 0x808002A4: nop

;}
RECOMP_FUNC void bstimeout_entrypoint_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002B0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808002B4: jal         0x800852F0
    // 0x808002B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _batimer_decrement(rdram, ctx);
        goto after_0;
    // 0x808002B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808002BC: beql        $v0, $zero, L_808002D0
    if (ctx->r2 == 0) {
        // 0x808002C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_808002D0;
    }
    goto skip_0;
    // 0x808002C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x808002C4: jal         0x800A05DC
    // 0x808002C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A05DC(rdram, ctx);
        goto after_1;
    // 0x808002C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
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
RECOMP_FUNC void bstimeout_entrypoint_6(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808002DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808002E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808002E4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808002E8: jal         0x800A0CF4
    // 0x808002EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800A0CF4(rdram, ctx);
        goto after_0;
    // 0x808002EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x808002F0: jal         0x800A4E30
    // 0x808002F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800A4E30(rdram, ctx);
        goto after_1;
    // 0x808002F4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x808002F8: jal         0x800FC7C4
    // 0x808002FC: nop

    func_800FC7C4(rdram, ctx);
        goto after_2;
    // 0x808002FC: nop

    after_2:
    // 0x80800300: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800304: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800308: jr          $ra
    // 0x8080030C: nop

    return;
    // 0x8080030C: nop

;}
RECOMP_FUNC void bstimeout_entrypoint_7(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800310: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80800314: lui         $v0, 0x0
    ctx->r2 = S32(RELOC_HI16(156, 0X340) << 16);
    // 0x80800318: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8080031C: jr          $ra
    // 0x80800320: lw          $v0, 0x340($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(156, 0X340));
    return;
    // 0x80800320: lw          $v0, 0x340($v0)
    ctx->r2 = MEM_W(ctx->r2, (int16_t)RELOC_LO16(156, 0X340));
    // 0x80800324: nop

    // 0x80800328: nop

    // 0x8080032C: nop

;}
RECOMP_FUNC void func_80800000_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80800004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800008: addiu       $a1, $zero, 0x504
    ctx->r5 = ADD32(0, 0X504);
    // 0x8080000C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80800010: jal         0x8009DF94
    // 0x80800014: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
    func_8009DF94(rdram, ctx);
        goto after_0;
    // 0x80800014: addiu       $a3, $zero, 0x7FFF
    ctx->r7 = ADD32(0, 0X7FFF);
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
RECOMP_FUNC void func_80800028_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800028: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080002C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800030: lbu         $a1, 0x160($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X160);
    // 0x80800034: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80800038: beq         $a1, $zero, L_8080004C
    if (ctx->r5 == 0) {
        // 0x8080003C: andi        $a0, $a1, 0xFF
        ctx->r4 = ctx->r5 & 0XFF;
            goto L_8080004C;
    }
    // 0x8080003C: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    // 0x80800040: jal         0x800C2FDC
    // 0x80800044: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x80800044: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80800048: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_8080004C:
    // 0x8080004C: sb          $zero, 0x160($a2)
    MEM_B(0X160, ctx->r6) = 0;
    // 0x80800050: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800054: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800058: jr          $ra
    // 0x8080005C: nop

    return;
    // 0x8080005C: nop

;}
RECOMP_FUNC void func_80800060_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800060: jr          $ra
    // 0x80800064: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80800064: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80800068_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800068: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8080006C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80800070: lui         $a2, 0x0
    ctx->r6 = S32(RELOC_HI16(157, 0X2230) << 16);
    // 0x80800074: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80800078: addiu       $a2, $a2, 0x2230
    ctx->r6 = ADD32(ctx->r6, (int16_t)RELOC_LO16(157, 0X2230));
    // 0x8080007C: jal         0x8009D454
    // 0x80800080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8009D454(rdram, ctx);
        goto after_0;
    // 0x80800080: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80800084: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80800088: sb          $v0, 0x160($t6)
    MEM_B(0X160, ctx->r14) = ctx->r2;
    // 0x8080008C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80800094: jr          $ra
    // 0x80800098: nop

    return;
    // 0x80800098: nop

;}
RECOMP_FUNC void func_8080009C_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8080009C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808000A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808000A4: lbu         $a1, 0x160($a0)
    ctx->r5 = MEM_BU(ctx->r4, 0X160);
    // 0x808000A8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x808000AC: beq         $a1, $zero, L_808000C0
    if (ctx->r5 == 0) {
        // 0x808000B0: andi        $a0, $a1, 0xFF
        ctx->r4 = ctx->r5 & 0XFF;
            goto L_808000C0;
    }
    // 0x808000B0: andi        $a0, $a1, 0xFF
    ctx->r4 = ctx->r5 & 0XFF;
    // 0x808000B4: jal         0x800C2FDC
    // 0x808000B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800C2FDC(rdram, ctx);
        goto after_0;
    // 0x808000B8: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x808000BC: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
L_808000C0:
    // 0x808000C0: sb          $zero, 0x160($a2)
    MEM_B(0X160, ctx->r6) = 0;
    // 0x808000C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x808000C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x808000CC: jr          $ra
    // 0x808000D0: nop

    return;
    // 0x808000D0: nop

;}
RECOMP_FUNC void func_808000D4_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808000D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x808000D8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x808000DC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x808000E0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x808000E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x808000E8: jal         0x80085300
    // 0x808000EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    _batimer_get(rdram, ctx);
        goto after_0;
    // 0x808000EC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_0:
    // 0x808000F0: mtc1        $zero, $f2
    ctx->f2.u32l = 0;
    // 0x808000F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x808000F8: lui         $a2, 0x3E19
    ctx->r6 = S32(0X3E19 << 16);
    // 0x808000FC: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x80800100: nop

    // 0x80800104: bc1fl       L_80800144
    if (!c1cs) {
        // 0x80800108: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80800144;
    }
    goto skip_0;
    // 0x80800108: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x8080010C: mfc1        $a1, $f2
    ctx->r5 = (int32_t)ctx->f2.u32l;
    // 0x80800110: jal         0x80084F60
    // 0x80800114: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    _bapulse_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80800114: ori         $a2, $a2, 0x999A
    ctx->r6 = ctx->r6 | 0X999A;
    after_1:
    // 0x80800118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8080011C: jal         0x80092744
    // 0x80800120: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80092744(rdram, ctx);
        goto after_2;
    // 0x80800120: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x80800124: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80800128: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x8080012C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80800130: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80800134: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80800138: jal         0x80092750
    // 0x8080013C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_80092750(rdram, ctx);
        goto after_3;
    // 0x8080013C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_3:
    // 0x80800140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80800144:
    // 0x80800144: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80800148: jal         0x80085338
    // 0x8080014C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    _batimer_set(rdram, ctx);
        goto after_4;
    // 0x8080014C: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    after_4:
    // 0x80800150: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80800154: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80800158: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8080015C: jr          $ra
    // 0x80800160: nop

    return;
    // 0x80800160: nop

;}
RECOMP_FUNC void func_80800164_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80800164: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80800168: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8080016C: jal         0x8009EF1C
    // 0x80800170: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_8009EF1C(rdram, ctx);
        goto after_0;
    // 0x80800170: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80800174: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80800178: jal         0x8009EF10
    // 0x8080017C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009EF10(rdram, ctx);
        goto after_1;
    // 0x8080017C: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80800180: bne         $v0, $zero, L_8080019C
    if (ctx->r2 != 0) {
        // 0x80800184: lwc1        $f12, 0x1C($sp)
        ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
            goto L_8080019C;
    }
    // 0x80800184: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80800188: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8080018C: jal         0x8009B9B0
    // 0x80800190: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_8009B9B0(rdram, ctx);
        goto after_2;
    // 0x80800190: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_2:
    // 0x80800194: b           L_808001BC
    // 0x80800198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_808001BC;
    // 0x80800198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8080019C:
    // 0x8080019C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x808001A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x808001A4: jal         0x800F1214
    // 0x808001A8: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    func_800F1214(rdram, ctx);
        goto after_3;
    // 0x808001A8: lui         $a2, 0x4416
    ctx->r6 = S32(0X4416 << 16);
    after_3:
    // 0x808001AC: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x808001B0: jal         0x8009B9B0
    // 0x808001B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_8009B9B0(rdram, ctx);
        goto after_4;
    // 0x808001B4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_4:
    // 0x808001B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_808001BC:
    // 0x808001BC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x808001C0: jr          $ra
    // 0x808001C4: nop

    return;
    // 0x808001C4: nop

;}
RECOMP_FUNC void func_808001C8_bstnt(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x808001C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x808001CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x808001D0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x808001D4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x808001D8: jal         0x80091A58
    // 0x808001DC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80091A58(rdram, ctx);
        goto after_0;
    // 0x808001DC: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x808001E0: beq         $v0, $zero, L_808001EC
    if (ctx->r2 == 0) {
        // 0x808001E4: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_808001EC;
    }
    // 0x808001E4: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x808001E8: addiu       $v1, $zero, 0x107
    ctx->r3 = ADD32(0, 0X107);
L_808001EC:
    // 0x808001EC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x808001F0: jal         0x800014B0
    // 0x808001F4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    bstnt_entrypoint_8(rdram, ctx);
        goto after_1;
    // 0x808001F4: sw          $v1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r3;
    after_1:
    // 0x808001F8: beq         $v0, $zero, L_80800204
    if (ctx->r2 == 0) {
        // 0x808001FC: lw          $v1, 0x1C($sp)
        ctx->r3 = MEM_W(ctx->r29, 0X1C);
            goto L_80800204;
    }
    // 0x808001FC: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80800200: addiu       $v1, $zero, 0x10E
    ctx->r3 = ADD32(0, 0X10E);
L_80800204:
    // 0x80800204: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80800208: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8080020C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80800210: jr          $ra
    // 0x80800214: nop

    return;
    // 0x80800214: nop

;}
