#include "tooie_recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80102E08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102E08: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80102E0C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80102E10: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80102E14: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80102E18: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80102E1C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80102E20: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80102E24: jal         0x800EE7F8
    // 0x80102E28: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80102E28: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x80102E2C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80102E30: jal         0x800EE7F8
    // 0x80102E34: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80102E34: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x80102E38: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80102E3C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80102E40: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80102E44: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80102E48: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80102E4C: add.s       $f6, $f4, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = ctx->f4.fl + ctx->f0.fl;
    // 0x80102E50: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    // 0x80102E54: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80102E58: sub.s       $f10, $f8, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f0.fl;
    // 0x80102E5C: swc1        $f6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f6.u32l;
    // 0x80102E60: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
    // 0x80102E64: jal         0x800BEF00
    // 0x80102E68: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    func_800BEF00(rdram, ctx);
        goto after_2;
    // 0x80102E68: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_2:
    // 0x80102E6C: beq         $v0, $zero, L_80102EA8
    if (ctx->r2 == 0) {
        // 0x80102E70: lwc1        $f16, 0x44($sp)
        ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
            goto L_80102EA8;
    }
    // 0x80102E70: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80102E74: swc1        $f16, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f16.u32l;
    // 0x80102E78: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80102E7C: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80102E80: lw          $a2, 0x48($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X48);
    // 0x80102E84: jal         0x800F1B78
    // 0x80102E88: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800F1B78(rdram, ctx);
        goto after_3;
    // 0x80102E88: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_3:
    // 0x80102E8C: beq         $v0, $zero, L_80102EA8
    if (ctx->r2 == 0) {
        // 0x80102E90: lwc1        $f18, 0x24($sp)
        ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
            goto L_80102EA8;
    }
    // 0x80102E90: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80102E94: swc1        $f18, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f18.u32l;
    // 0x80102E98: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80102E9C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80102EA0: swc1        $f4, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f4.u32l;
    // 0x80102EA4: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
L_80102EA8:
    // 0x80102EA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80102EAC: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x80102EB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80102EB4: jr          $ra
    // 0x80102EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x80102EB8: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_80102EC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102EC0: jr          $ra
    // 0x80102EC4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80102EC4: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80102EC8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102EC8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102ECC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102ED0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80102ED4: lw          $v1, 0x70($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X70);
    // 0x80102ED8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80102EDC: srl         $a3, $v1, 25
    ctx->r7 = S32(U32(ctx->r3) >> 25);
    // 0x80102EE0: sltiu       $v0, $a3, 0x1
    ctx->r2 = ctx->r7 < 0X1 ? 1 : 0;
    // 0x80102EE4: bne         $v0, $zero, L_80102F04
    if (ctx->r2 != 0) {
        // 0x80102EE8: addiu       $a1, $a3, -0x1
        ctx->r5 = ADD32(ctx->r7, -0X1);
            goto L_80102F04;
    }
    // 0x80102EE8: addiu       $a1, $a3, -0x1
    ctx->r5 = ADD32(ctx->r7, -0X1);
    // 0x80102EEC: sll         $a2, $v1, 22
    ctx->r6 = S32(ctx->r3 << 22);
    // 0x80102EF0: srl         $t6, $a2, 26
    ctx->r14 = S32(U32(ctx->r6) >> 26);
    // 0x80102EF4: jal         0x800CC338
    // 0x80102EF8: addiu       $a2, $t6, -0x1
    ctx->r6 = ADD32(ctx->r14, -0X1);
    func_800CC338(rdram, ctx);
        goto after_0;
    // 0x80102EF8: addiu       $a2, $t6, -0x1
    ctx->r6 = ADD32(ctx->r14, -0X1);
    after_0:
    // 0x80102EFC: addiu       $t7, $v0, 0x1
    ctx->r15 = ADD32(ctx->r2, 0X1);
    // 0x80102F00: sltu        $v0, $zero, $t7
    ctx->r2 = 0 < ctx->r15 ? 1 : 0;
L_80102F04:
    // 0x80102F04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102F08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102F0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102F14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102F14: lw          $t6, 0x74($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X74);
    // 0x80102F18: sll         $t8, $t6, 13
    ctx->r24 = S32(ctx->r14 << 13);
    // 0x80102F1C: bgezl       $t8, L_80102F30
    if (SIGNED(ctx->r24) >= 0) {
            // 0x80102F20: lbu         $t0, 0x75($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X75);
    static_3_80102F30(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80102F20: lbu         $t0, 0x75($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X75);
    skip_0:
    // 0x80102F24: jr          $ra
    // 0x80102F28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80102F28: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80102F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102F2C: lbu         $t0, 0x75($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X75);
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
RECOMP_FUNC void func_80102F44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102F44: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x80102F48: sll         $t8, $t6, 13
    ctx->r24 = S32(ctx->r14 << 13);
    // 0x80102F4C: bgezl       $t8, L_80102F60
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80102F50: lbu         $t0, 0x79($a0)
        ctx->r8 = MEM_BU(ctx->r4, 0X79);
            goto L_80102F60;
    }
    goto skip_0;
    // 0x80102F50: lbu         $t0, 0x79($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X79);
    skip_0:
    // 0x80102F54: jr          $ra
    // 0x80102F58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80102F58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80102F5C: lbu         $t0, 0x79($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X79);
L_80102F60:
    // 0x80102F60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80102F64: ori         $t1, $t0, 0x4
    ctx->r9 = ctx->r8 | 0X4;
    // 0x80102F68: sb          $t1, 0x79($a0)
    MEM_B(0X79, ctx->r4) = ctx->r9;
    // 0x80102F6C: jr          $ra
    // 0x80102F70: nop

    return;
    // 0x80102F70: nop

;}
RECOMP_FUNC void func_80102F74(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102F74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80102F78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80102F7C: jal         0x80100368
    // 0x80102F80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80100368(rdram, ctx);
        goto after_0;
    // 0x80102F80: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80102F84: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80102F88: jal         0x80102FA0
    // 0x80102F8C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_80102FA0(rdram, ctx);
        goto after_1;
    // 0x80102F8C: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80102F90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80102F94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80102F98: jr          $ra
    return;
;}
RECOMP_FUNC void func_80102FA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102FA0: sll         $t6, $a1, 0
    ctx->r14 = S32(ctx->r5 << 0);
    // 0x80102FA4: bgez        $t6, L_80102FB4
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80102FA8: lui         $at, 0x7FFF
        ctx->r1 = S32(0X7FFF << 16);
            goto L_80102FB4;
    }
    // 0x80102FA8: lui         $at, 0x7FFF
    ctx->r1 = S32(0X7FFF << 16);
    // 0x80102FAC: b           L_80102FB8
    // 0x80102FB0: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
        goto L_80102FB8;
    // 0x80102FB0: lw          $v0, 0x3C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X3C);
L_80102FB4:
    // 0x80102FB4: lw          $v0, 0x24($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X24);
L_80102FB8:
    // 0x80102FB8: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80102FBC: and         $t7, $v0, $at
    ctx->r15 = ctx->r2 & ctx->r1;
    // 0x80102FC0: and         $t8, $t7, $a1
    ctx->r24 = ctx->r15 & ctx->r5;
    // 0x80102FC4: beq         $t8, $zero, L_80102FD4
    if (ctx->r24 == 0) {
            // 0x80102FC8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    func_80102FD4(rdram, ctx);
    return;
    }
    // 0x80102FC8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80102FCC: jr          $ra
    // 0x80102FD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    return;
    // 0x80102FD0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
;}
RECOMP_FUNC void func_80102FD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102FD4: jr          $ra
    // 0x80102FD8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80102FD8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80102FDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102FDC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80102FE0: jr          $ra
    // 0x80102FE4: swc1        $f12, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f12.u32l;
    return;
    // 0x80102FE4: swc1        $f12, 0x38($a0)
    MEM_W(0X38, ctx->r4) = ctx->f12.u32l;
;}
RECOMP_FUNC void func_80102FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80102FE8: beql        $a1, $zero, L_80103004
    if (ctx->r5 == 0) {
            // 0x80102FEC: lbu         $t9, 0x77($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X77);
    static_3_80103004(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80102FEC: lbu         $t9, 0x77($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X77);
    skip_0:
    // 0x80102FF0: lbu         $t7, 0x77($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X77);
    // 0x80102FF4: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x80102FF8: jr          $ra
    // 0x80102FFC: sb          $t8, 0x77($a0)
    MEM_B(0X77, ctx->r4) = ctx->r24;
    return;
    // 0x80102FFC: sb          $t8, 0x77($a0)
    MEM_B(0X77, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_80103000(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103000: lbu         $t9, 0x77($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X77);
    // 0x80103004: andi        $t0, $t9, 0xFFDF
    ctx->r8 = ctx->r25 & 0XFFDF;
    // 0x80103008: sb          $t0, 0x77($a0)
    MEM_B(0X77, ctx->r4) = ctx->r8;
    // 0x8010300C: jr          $ra
    // 0x80103010: nop

    return;
    // 0x80103010: nop

;}
RECOMP_FUNC void func_80103014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103014: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103018: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x8010301C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103020: lw          $a1, 0x0($a3)
    ctx->r5 = MEM_W(ctx->r7, 0X0);
    // 0x80103024: addiu       $a2, $a3, 0x44
    ctx->r6 = ADD32(ctx->r7, 0X44);
    // 0x80103028: jal         0x800EC124
    // 0x8010302C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EC124(rdram, ctx);
        goto after_0;
    // 0x8010302C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x80103030: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103034: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103038: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103040: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80103044: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80103048: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010304C: lw          $t6, 0x74($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X74);
    // 0x80103050: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80103054: sll         $t8, $t6, 11
    ctx->r24 = S32(ctx->r14 << 11);
    // 0x80103058: bgezl       $t8, L_80103100
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8010305C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80103100;
    }
    goto skip_0;
    // 0x8010305C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80103060: lw          $t9, 0x7C($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X7C);
    // 0x80103064: sll         $t1, $t9, 19
    ctx->r9 = S32(ctx->r25 << 19);
    // 0x80103068: bgezl       $t1, L_801030A4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8010306C: lw          $a0, 0x40($s0)
        ctx->r4 = MEM_W(ctx->r16, 0X40);
            goto L_801030A4;
    }
    goto skip_1;
    // 0x8010306C: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
    skip_1:
    // 0x80103070: jal         0x80100368
    // 0x80103074: nop

    func_80100368(rdram, ctx);
        goto after_0;
    // 0x80103074: nop

    after_0:
    // 0x80103078: lwc1        $f4, 0x38($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0X38);
    // 0x8010307C: lwc1        $f6, 0x1C($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x80103080: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80103084: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80103088: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8010308C: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80103090: jal         0x80085770
    // 0x80103094: nop

    _chbadshad_entrypoint_1(rdram, ctx);
        goto after_1;
    // 0x80103094: nop

    after_1:
    // 0x80103098: b           L_80103100
    // 0x8010309C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80103100;
    // 0x8010309C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801030A0: lw          $a0, 0x40($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X40);
L_801030A4:
    // 0x801030A4: beql        $a0, $zero, L_80103100
    if (ctx->r4 == 0) {
        // 0x801030A8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80103100;
    }
    goto skip_2;
    // 0x801030A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801030AC: jal         0x80106790
    // 0x801030B0: nop

    func_80106790(rdram, ctx);
        goto after_2;
    // 0x801030B0: nop

    after_2:
    // 0x801030B4: lw          $t2, 0x7C($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X7C);
    // 0x801030B8: sll         $t4, $t2, 19
    ctx->r12 = S32(ctx->r10 << 19);
    // 0x801030BC: bltz        $t4, L_801030D4
    if (SIGNED(ctx->r12) < 0) {
        // 0x801030C0: nop
    
            goto L_801030D4;
    }
    // 0x801030C0: nop

    // 0x801030C4: lhu         $t5, 0x64($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X64);
    // 0x801030C8: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x801030CC: bnel        $t6, $zero, L_80103100
    if (ctx->r14 != 0) {
        // 0x801030D0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80103100;
    }
    goto skip_3;
    // 0x801030D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_3:
L_801030D4:
    // 0x801030D4: jal         0x80100368
    // 0x801030D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80100368(rdram, ctx);
        goto after_3;
    // 0x801030D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801030DC: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x801030E0: lwc1        $f16, 0x1C($v0)
    ctx->f16.u32l = MEM_W(ctx->r2, 0X1C);
    // 0x801030E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801030E8: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x801030EC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x801030F0: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x801030F4: jal         0x80085770
    // 0x801030F8: nop

    _chbadshad_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x801030F8: nop

    after_4:
    // 0x801030FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80103100:
    // 0x80103100: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80103104: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80103108: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103110(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103110: beql        $a1, $zero, L_8010312C
    if (ctx->r5 == 0) {
            // 0x80103114: lbu         $t9, 0x7E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X7E);
    static_3_8010312C(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80103114: lbu         $t9, 0x7E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X7E);
    skip_0:
    // 0x80103118: lbu         $t7, 0x7E($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X7E);
    // 0x8010311C: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x80103120: jr          $ra
    // 0x80103124: sb          $t8, 0x7E($a0)
    MEM_B(0X7E, ctx->r4) = ctx->r24;
    return;
    // 0x80103124: sb          $t8, 0x7E($a0)
    MEM_B(0X7E, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_80103128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103128: lbu         $t9, 0x7E($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X7E);
    // 0x8010312C: andi        $t0, $t9, 0xFFBF
    ctx->r8 = ctx->r25 & 0XFFBF;
    // 0x80103130: sb          $t0, 0x7E($a0)
    MEM_B(0X7E, ctx->r4) = ctx->r8;
    // 0x80103134: jr          $ra
    // 0x80103138: nop

    return;
    // 0x80103138: nop

;}
RECOMP_FUNC void func_80103140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103140: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80103144: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80103148: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010314C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80103150: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80103154: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80103158: lhu         $t0, 0x46($sp)
    ctx->r8 = MEM_HU(ctx->r29, 0X46);
    // 0x8010315C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80103160: lhu         $v1, 0x14($v0)
    ctx->r3 = MEM_HU(ctx->r2, 0X14);
    // 0x80103164: lhu         $t7, 0x4A($sp)
    ctx->r15 = MEM_HU(ctx->r29, 0X4A);
    // 0x80103168: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010316C: bne         $v1, $t0, L_80103188
    if (ctx->r3 != ctx->r8) {
        // 0x80103170: or          $a3, $v1, $zero
        ctx->r7 = ctx->r3 | 0;
            goto L_80103188;
    }
    // 0x80103170: or          $a3, $v1, $zero
    ctx->r7 = ctx->r3 | 0;
    // 0x80103174: lhu         $t6, 0x16($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X16);
    // 0x80103178: bnel        $t6, $t7, L_8010318C
    if (ctx->r14 != ctx->r15) {
        // 0x8010317C: lw          $t8, 0x70($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X70);
            goto L_8010318C;
    }
    goto skip_0;
    // 0x8010317C: lw          $t8, 0x70($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X70);
    skip_0:
    // 0x80103180: b           L_8010329C
    // 0x80103184: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
        goto L_8010329C;
    // 0x80103184: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80103188:
    // 0x80103188: lw          $t8, 0x70($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X70);
L_8010318C:
    // 0x8010318C: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x80103190: sw          $a3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r7;
    // 0x80103194: sll         $t9, $t8, 28
    ctx->r25 = S32(ctx->r24 << 28);
    // 0x80103198: srl         $t1, $t9, 31
    ctx->r9 = S32(U32(ctx->r25) >> 31);
    // 0x8010319C: jal         0x8010381C
    // 0x801031A0: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    func_8010381C(rdram, ctx);
        goto after_0;
    // 0x801031A0: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    after_0:
    // 0x801031A4: jal         0x80103938
    // 0x801031A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103938(rdram, ctx);
        goto after_1;
    // 0x801031A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801031AC: lbu         $t2, 0x74($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X74);
    // 0x801031B0: lw          $t4, 0x0($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X0);
    // 0x801031B4: andi        $t3, $t2, 0xFF7F
    ctx->r11 = ctx->r10 & 0XFF7F;
    // 0x801031B8: sb          $t3, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r11;
    // 0x801031BC: sw          $zero, 0xC($t4)
    MEM_W(0XC, ctx->r12) = 0;
    // 0x801031C0: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801031C4: sh          $zero, 0x68($s0)
    MEM_H(0X68, ctx->r16) = 0;
    // 0x801031C8: sh          $zero, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = 0;
    // 0x801031CC: sh          $zero, 0x62($s0)
    MEM_H(0X62, ctx->r16) = 0;
    // 0x801031D0: lhu         $t5, 0x18($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X18);
    // 0x801031D4: andi        $t6, $t5, 0x1F
    ctx->r14 = ctx->r13 & 0X1F;
    // 0x801031D8: sh          $t6, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r14;
    // 0x801031DC: lh          $t7, 0x8C($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X8C);
    // 0x801031E0: beq         $t7, $zero, L_801031F0
    if (ctx->r15 == 0) {
        // 0x801031E4: nop
    
            goto L_801031F0;
    }
    // 0x801031E4: nop

    // 0x801031E8: jal         0x80104328
    // 0x801031EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80104328(rdram, ctx);
        goto after_2;
    // 0x801031EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
L_801031F0:
    // 0x801031F0: jal         0x800D58FC
    // 0x801031F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800D58FC(rdram, ctx);
        goto after_3;
    // 0x801031F4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x801031F8: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x801031FC: lw          $t9, 0x0($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X0);
    // 0x80103200: lhu         $t8, 0x46($sp)
    ctx->r24 = MEM_HU(ctx->r29, 0X46);
    // 0x80103204: sh          $t8, 0x14($t9)
    MEM_H(0X14, ctx->r25) = ctx->r24;
    // 0x80103208: lw          $t2, 0x0($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X0);
    // 0x8010320C: lhu         $t1, 0x4A($sp)
    ctx->r9 = MEM_HU(ctx->r29, 0X4A);
    // 0x80103210: bne         $v0, $zero, L_80103230
    if (ctx->r2 != 0) {
        // 0x80103214: sh          $t1, 0x16($t2)
        MEM_H(0X16, ctx->r10) = ctx->r9;
            goto L_80103230;
    }
    // 0x80103214: sh          $t1, 0x16($t2)
    MEM_H(0X16, ctx->r10) = ctx->r9;
    // 0x80103218: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x8010321C: lw          $v1, 0x0($t3)
    ctx->r3 = MEM_W(ctx->r11, 0X0);
    // 0x80103220: lbu         $t5, 0xB($v1)
    ctx->r13 = MEM_BU(ctx->r3, 0XB);
    // 0x80103224: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x80103228: b           L_80103244
    // 0x8010322C: sb          $t6, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r14;
        goto L_80103244;
    // 0x8010322C: sb          $t6, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r14;
L_80103230:
    // 0x80103230: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80103234: lw          $v1, 0x0($t7)
    ctx->r3 = MEM_W(ctx->r15, 0X0);
    // 0x80103238: lbu         $t8, 0xB($v1)
    ctx->r24 = MEM_BU(ctx->r3, 0XB);
    // 0x8010323C: andi        $t9, $t8, 0xFFFD
    ctx->r25 = ctx->r24 & 0XFFFD;
    // 0x80103240: sb          $t9, 0xB($v1)
    MEM_B(0XB, ctx->r3) = ctx->r25;
L_80103244:
    // 0x80103244: bne         $v0, $zero, L_80103254
    if (ctx->r2 != 0) {
        // 0x80103248: nop
    
            goto L_80103254;
    }
    // 0x80103248: nop

    // 0x8010324C: jal         0x80103328
    // 0x80103250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103328(rdram, ctx);
        goto after_4;
    // 0x80103250: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
L_80103254:
    // 0x80103254: jal         0x80103930
    // 0x80103258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103930(rdram, ctx);
        goto after_5;
    // 0x80103258: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8010325C: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80103260: beql        $t1, $zero, L_8010329C
    if (ctx->r9 == 0) {
        // 0x80103264: lw          $v0, 0x28($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X28);
            goto L_8010329C;
    }
    goto skip_1;
    // 0x80103264: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    skip_1:
    // 0x80103268: lw          $t2, 0x70($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X70);
    // 0x8010326C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80103270: sll         $t4, $t2, 28
    ctx->r12 = S32(ctx->r10 << 28);
    // 0x80103274: bltzl       $t4, L_8010329C
    if (SIGNED(ctx->r12) < 0) {
        // 0x80103278: lw          $v0, 0x28($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X28);
            goto L_8010329C;
    }
    goto skip_2;
    // 0x80103278: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    skip_2:
    // 0x8010327C: bnel        $t5, $zero, L_8010329C
    if (ctx->r13 != 0) {
        // 0x80103280: lw          $v0, 0x28($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X28);
            goto L_8010329C;
    }
    goto skip_3;
    // 0x80103280: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    skip_3:
    // 0x80103284: jal         0x801039E4
    // 0x80103288: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_801039E4(rdram, ctx);
        goto after_6;
    // 0x80103288: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_6:
    // 0x8010328C: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x80103290: jal         0x800D62E4
    // 0x80103294: lhu         $a0, 0x14($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X14);
    func_800D62E4(rdram, ctx);
        goto after_7;
    // 0x80103294: lhu         $a0, 0x14($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X14);
    after_7:
    // 0x80103298: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
L_8010329C:
    // 0x8010329C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801032A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801032A4: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x801032A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801032B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801032B0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801032B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801032B8: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x801032BC: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x801032C0: lh          $t8, 0x8C($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X8C);
    // 0x801032C4: andi        $t6, $a1, 0xFFFF
    ctx->r14 = ctx->r5 & 0XFFFF;
    // 0x801032C8: andi        $t7, $a2, 0xFFFF
    ctx->r15 = ctx->r6 & 0XFFFF;
    // 0x801032CC: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x801032D0: sh          $zero, 0x8C($a0)
    MEM_H(0X8C, ctx->r4) = 0;
    // 0x801032D4: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x801032D8: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x801032DC: jal         0x80103140
    // 0x801032E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80103140(rdram, ctx);
        goto after_0;
    // 0x801032E0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x801032E4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x801032E8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801032EC: lh          $t9, 0x8C($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X8C);
    // 0x801032F0: beql        $t9, $zero, L_80103310
    if (ctx->r25 == 0) {
        // 0x801032F4: lw          $t0, 0x18($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X18);
            goto L_80103310;
    }
    goto skip_0;
    // 0x801032F4: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    skip_0:
    // 0x801032F8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x801032FC: jal         0x80104328
    // 0x80103300: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80104328(rdram, ctx);
        goto after_1;
    // 0x80103300: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_1:
    // 0x80103304: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80103308: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8010330C: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
L_80103310:
    // 0x80103310: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80103314: sh          $t0, 0x8C($a0)
    MEM_H(0X8C, ctx->r4) = ctx->r8;
    // 0x80103318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010331C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80103320: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103328: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x8010332C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80103330: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80103334: lhu         $t6, 0x68($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X68);
    // 0x80103338: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010333C: bnel        $t6, $zero, L_8010346C
    if (ctx->r14 != 0) {
        // 0x80103340: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8010346C;
    }
    goto skip_0;
    // 0x80103340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80103344: jal         0x80103964
    // 0x80103348: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_80103964(rdram, ctx);
        goto after_0;
    // 0x80103348: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x8010334C: beql        $v0, $zero, L_8010346C
    if (ctx->r2 == 0) {
        // 0x80103350: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8010346C;
    }
    goto skip_1;
    // 0x80103350: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80103354: lw          $t7, 0x0($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X0);
    // 0x80103358: lhu         $a0, 0x14($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X14);
    // 0x8010335C: jal         0x800D62E4
    // 0x80103360: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_800D62E4(rdram, ctx);
        goto after_1;
    // 0x80103360: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_1:
    // 0x80103364: jal         0x800B2840
    // 0x80103368: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_800B2840(rdram, ctx);
        goto after_2;
    // 0x80103368: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_2:
    // 0x8010336C: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80103370: lhu         $t8, 0x12($v0)
    ctx->r24 = MEM_HU(ctx->r2, 0X12);
    // 0x80103374: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80103378: sh          $t8, 0x68($s0)
    MEM_H(0X68, ctx->r16) = ctx->r24;
    // 0x8010337C: lhu         $t9, 0x14($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X14);
    // 0x80103380: jal         0x800B2248
    // 0x80103384: sh          $t9, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r25;
    func_800B2248(rdram, ctx);
        goto after_3;
    // 0x80103384: sh          $t9, 0x6A($s0)
    MEM_H(0X6A, ctx->r16) = ctx->r25;
    after_3:
    // 0x80103388: sh          $v0, 0x62($s0)
    MEM_H(0X62, ctx->r16) = ctx->r2;
    // 0x8010338C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80103390: addiu       $a1, $sp, 0x44
    ctx->r5 = ADD32(ctx->r29, 0X44);
    // 0x80103394: jal         0x800B2198
    // 0x80103398: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    func_800B2198(rdram, ctx);
        goto after_4;
    // 0x80103398: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    after_4:
    // 0x8010339C: lw          $t0, 0x48($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X48);
    // 0x801033A0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x801033A4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x801033A8: sh          $t0, 0x88($s0)
    MEM_H(0X88, ctx->r16) = ctx->r8;
    // 0x801033AC: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x801033B0: sh          $t1, 0x8A($s0)
    MEM_H(0X8A, ctx->r16) = ctx->r9;
    // 0x801033B4: jal         0x800B237C
    // 0x801033B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_800B237C(rdram, ctx);
        goto after_5;
    // 0x801033B8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_5:
    // 0x801033BC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x801033C0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x801033C4: jal         0x800EE940
    // 0x801033C8: addiu       $a0, $a0, 0x1E
    ctx->r4 = ADD32(ctx->r4, 0X1E);
    func_800EE940(rdram, ctx);
        goto after_6;
    // 0x801033C8: addiu       $a0, $a0, 0x1E
    ctx->r4 = ADD32(ctx->r4, 0X1E);
    after_6:
    // 0x801033CC: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x801033D0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x801033D4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x801033D8: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x801033DC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x801033E0: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x801033E4: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x801033E8: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x801033EC: nop

    // 0x801033F0: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x801033F4: beql        $t3, $zero, L_80103444
    if (ctx->r11 == 0) {
        // 0x801033F8: mfc1        $t3, $f6
        ctx->r11 = (int32_t)ctx->f6.u32l;
            goto L_80103444;
    }
    goto skip_2;
    // 0x801033F8: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    skip_2:
    // 0x801033FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80103400: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80103404: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80103408: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8010340C: nop

    // 0x80103410: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80103414: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80103418: nop

    // 0x8010341C: andi        $t3, $t3, 0x78
    ctx->r11 = ctx->r11 & 0X78;
    // 0x80103420: bne         $t3, $zero, L_80103438
    if (ctx->r11 != 0) {
        // 0x80103424: nop
    
            goto L_80103438;
    }
    // 0x80103424: nop

    // 0x80103428: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8010342C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80103430: b           L_80103450
    // 0x80103434: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
        goto L_80103450;
    // 0x80103434: or          $t3, $t3, $at
    ctx->r11 = ctx->r11 | ctx->r1;
L_80103438:
    // 0x80103438: b           L_80103450
    // 0x8010343C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
        goto L_80103450;
    // 0x8010343C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x80103440: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
L_80103444:
    // 0x80103444: nop

    // 0x80103448: bltz        $t3, L_80103438
    if (SIGNED(ctx->r11) < 0) {
        // 0x8010344C: nop
    
            goto L_80103438;
    }
    // 0x8010344C: nop

L_80103450:
    // 0x80103450: lhu         $t7, 0x18($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X18);
    // 0x80103454: sll         $t6, $t3, 5
    ctx->r14 = S32(ctx->r11 << 5);
    // 0x80103458: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8010345C: andi        $t8, $t7, 0x1F
    ctx->r24 = ctx->r15 & 0X1F;
    // 0x80103460: or          $t9, $t6, $t8
    ctx->r25 = ctx->r14 | ctx->r24;
    // 0x80103464: sh          $t9, 0x18($v0)
    MEM_H(0X18, ctx->r2) = ctx->r25;
    // 0x80103468: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8010346C:
    // 0x8010346C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80103470: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x80103474: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010347C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010347C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80103480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103484: jal         0x80106790
    // 0x80103488: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x80103488: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010348C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80103490: jal         0x80103328
    // 0x80103494: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_80103328(rdram, ctx);
        goto after_1;
    // 0x80103494: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80103498: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x8010349C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x801034A0: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801034A4: lhu         $t7, 0x68($v1)
    ctx->r15 = MEM_HU(ctx->r3, 0X68);
    // 0x801034A8: lhu         $a0, 0x14($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X14);
    // 0x801034AC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x801034B0: bgez        $t7, L_801034C4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801034B4: cvt.s.w     $f4, $f4
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
            goto L_801034C4;
    }
    // 0x801034B4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801034B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x801034BC: nop

    // 0x801034C0: add.s       $f4, $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f4.fl + ctx->f6.fl;
L_801034C4:
    // 0x801034C4: lhu         $t8, 0x6A($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0X6A);
    // 0x801034C8: mfc1        $a1, $f4
    ctx->r5 = (int32_t)ctx->f4.u32l;
    // 0x801034CC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x801034D0: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x801034D4: bgez        $t8, L_801034E8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801034D8: cvt.s.w     $f8, $f8
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
            goto L_801034E8;
    }
    // 0x801034D8: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x801034DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x801034E0: nop

    // 0x801034E4: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_801034E8:
    // 0x801034E8: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x801034EC: jal         0x800DF7F8
    // 0x801034F0: nop

    func_800DF7F8(rdram, ctx);
        goto after_2;
    // 0x801034F0: nop

    after_2:
    // 0x801034F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801034F8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801034FC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80103500: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103508(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103508: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8010350C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80103510: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80103514: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x80103518: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010351C: sll         $t8, $t6, 28
    ctx->r24 = S32(ctx->r14 << 28);
    // 0x80103520: bltzl       $t8, L_8010380C
    if (SIGNED(ctx->r24) < 0) {
        // 0x80103524: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_8010380C;
    }
    goto skip_0;
    // 0x80103524: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80103528: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8010352C: jal         0x80100368
    // 0x80103530: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    func_80100368(rdram, ctx);
        goto after_0;
    // 0x80103530: sw          $t9, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r25;
    after_0:
    // 0x80103534: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80103538: jal         0x801039A4
    // 0x8010353C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_801039A4(rdram, ctx);
        goto after_1;
    // 0x8010353C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_1:
    // 0x80103540: bne         $v0, $zero, L_80103554
    if (ctx->r2 != 0) {
        // 0x80103544: sw          $v0, 0x50($sp)
        MEM_W(0X50, ctx->r29) = ctx->r2;
            goto L_80103554;
    }
    // 0x80103544: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x80103548: jal         0x801039E4
    // 0x8010354C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    func_801039E4(rdram, ctx);
        goto after_2;
    // 0x8010354C: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    after_2:
    // 0x80103550: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
L_80103554:
    // 0x80103554: jal         0x80103328
    // 0x80103558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103328(rdram, ctx);
        goto after_3;
    // 0x80103558: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x8010355C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x80103560: lhu         $v1, 0x16($t0)
    ctx->r3 = MEM_HU(ctx->r8, 0X16);
    // 0x80103564: beql        $v1, $zero, L_80103580
    if (ctx->r3 == 0) {
        // 0x80103568: sw          $zero, 0x54($sp)
        MEM_W(0X54, ctx->r29) = 0;
            goto L_80103580;
    }
    goto skip_1;
    // 0x80103568: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
    skip_1:
    // 0x8010356C: jal         0x800D674C
    // 0x80103570: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    func_800D674C(rdram, ctx);
        goto after_4;
    // 0x80103570: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    after_4:
    // 0x80103574: b           L_80103580
    // 0x80103578: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
        goto L_80103580;
    // 0x80103578: sw          $v0, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r2;
    // 0x8010357C: sw          $zero, 0x54($sp)
    MEM_W(0X54, ctx->r29) = 0;
L_80103580:
    // 0x80103580: lbu         $t1, 0x7B($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X7B);
    // 0x80103584: srl         $t2, $t1, 6
    ctx->r10 = S32(U32(ctx->r9) >> 6);
    // 0x80103588: beql        $t2, $zero, L_8010359C
    if (ctx->r10 == 0) {
        // 0x8010358C: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_8010359C;
    }
    goto skip_2;
    // 0x8010358C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    skip_2:
    // 0x80103590: b           L_8010359C
    // 0x80103594: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_8010359C;
    // 0x80103594: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80103598: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
L_8010359C:
    // 0x8010359C: lbu         $t3, 0x70($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X70);
    // 0x801035A0: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x801035A4: beql        $t4, $zero, L_801035B8
    if (ctx->r12 == 0) {
        // 0x801035A8: lw          $t5, 0x70($s0)
        ctx->r13 = MEM_W(ctx->r16, 0X70);
            goto L_801035B8;
    }
    goto skip_3;
    // 0x801035A8: lw          $t5, 0x70($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X70);
    skip_3:
    // 0x801035AC: b           L_801035D4
    // 0x801035B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
        goto L_801035D4;
    // 0x801035B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x801035B4: lw          $t5, 0x70($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X70);
L_801035B8:
    // 0x801035B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801035BC: sll         $t7, $t5, 10
    ctx->r15 = S32(ctx->r13 << 10);
    // 0x801035C0: bgez        $t7, L_801035D0
    if (SIGNED(ctx->r15) >= 0) {
        // 0x801035C4: nop
    
            goto L_801035D0;
    }
    // 0x801035C4: nop

    // 0x801035C8: b           L_801035D0
    // 0x801035CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801035D0;
    // 0x801035CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801035D0:
    // 0x801035D0: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_801035D4:
    // 0x801035D4: bnel        $a3, $zero, L_801035E8
    if (ctx->r7 != 0) {
        // 0x801035D8: lh          $t8, 0x60($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X60);
            goto L_801035E8;
    }
    goto skip_4;
    // 0x801035D8: lh          $t8, 0x60($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X60);
    skip_4:
    // 0x801035DC: beql        $a2, $zero, L_80103668
    if (ctx->r6 == 0) {
        // 0x801035E0: lw          $t3, 0x54($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X54);
            goto L_80103668;
    }
    goto skip_5;
    // 0x801035E0: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    skip_5:
    // 0x801035E4: lh          $t8, 0x60($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X60);
L_801035E8:
    // 0x801035E8: bnel        $t8, $zero, L_80103668
    if (ctx->r24 != 0) {
        // 0x801035EC: lw          $t3, 0x54($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X54);
            goto L_80103668;
    }
    goto skip_6;
    // 0x801035EC: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
    skip_6:
    // 0x801035F0: lhu         $v0, 0x96($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X96);
    // 0x801035F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801035F8: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x801035FC: srl         $t9, $v0, 15
    ctx->r25 = S32(U32(ctx->r2) >> 15);
    // 0x80103600: beq         $t9, $zero, L_80103628
    if (ctx->r25 == 0) {
        // 0x80103604: or          $v0, $t9, $zero
        ctx->r2 = ctx->r25 | 0;
            goto L_80103628;
    }
    // 0x80103604: or          $v0, $t9, $zero
    ctx->r2 = ctx->r25 | 0;
    // 0x80103608: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8010360C: jal         0x80089CD8
    // 0x80103610: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    _subaddiefade_entrypoint_9(rdram, ctx);
        goto after_5;
    // 0x80103610: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    after_5:
    // 0x80103614: lhu         $v0, 0x96($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X96);
    // 0x80103618: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x8010361C: lw          $a3, 0x4C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X4C);
    // 0x80103620: srl         $t0, $v0, 15
    ctx->r8 = S32(U32(ctx->r2) >> 15);
    // 0x80103624: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
L_80103628:
    // 0x80103628: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x8010362C: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80103630: beq         $v0, $zero, L_80103640
    if (ctx->r2 == 0) {
        // 0x80103634: lhu         $v1, 0x16($t1)
        ctx->r3 = MEM_HU(ctx->r9, 0X16);
            goto L_80103640;
    }
    // 0x80103634: lhu         $v1, 0x16($t1)
    ctx->r3 = MEM_HU(ctx->r9, 0X16);
    // 0x80103638: b           L_80103644
    // 0x8010363C: addiu       $v0, $sp, 0x3C
    ctx->r2 = ADD32(ctx->r29, 0X3C);
        goto L_80103644;
    // 0x8010363C: addiu       $v0, $sp, 0x3C
    ctx->r2 = ADD32(ctx->r29, 0X3C);
L_80103640:
    // 0x80103640: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80103644:
    // 0x80103644: lhu         $a1, 0x14($t2)
    ctx->r5 = MEM_HU(ctx->r10, 0X14);
    // 0x80103648: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8010364C: sw          $v0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r2;
    // 0x80103650: sw          $v1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r3;
    // 0x80103654: jal         0x80100D24
    // 0x80103658: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_80100D24(rdram, ctx);
        goto after_6;
    // 0x80103658: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_6:
    // 0x8010365C: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80103660: sh          $v0, 0x60($s0)
    MEM_H(0X60, ctx->r16) = ctx->r2;
    // 0x80103664: lw          $t3, 0x54($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X54);
L_80103668:
    // 0x80103668: slti        $at, $a2, 0x2
    ctx->r1 = SIGNED(ctx->r6) < 0X2 ? 1 : 0;
    // 0x8010366C: beql        $t3, $zero, L_801036A4
    if (ctx->r11 == 0) {
        // 0x80103670: lw          $t4, 0x54($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X54);
            goto L_801036A4;
    }
    goto skip_7;
    // 0x80103670: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    skip_7:
    // 0x80103674: bnel        $at, $zero, L_801036A4
    if (ctx->r1 != 0) {
        // 0x80103678: lw          $t4, 0x54($sp)
        ctx->r12 = MEM_W(ctx->r29, 0X54);
            goto L_801036A4;
    }
    goto skip_8;
    // 0x80103678: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
    skip_8:
    // 0x8010367C: jal         0x80103D24
    // 0x80103680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103D24(rdram, ctx);
        goto after_7;
    // 0x80103680: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80103684: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80103688: jal         0x800B2840
    // 0x8010368C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_800B2840(rdram, ctx);
        goto after_8;
    // 0x8010368C: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_8:
    // 0x80103690: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80103694: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80103698: jal         0x800B25D8
    // 0x8010369C: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    func_800B25D8(rdram, ctx);
        goto after_9;
    // 0x8010369C: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    after_9:
    // 0x801036A0: lw          $t4, 0x54($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X54);
L_801036A4:
    // 0x801036A4: beql        $t4, $zero, L_801036E0
    if (ctx->r12 == 0) {
        // 0x801036A8: lw          $t6, 0x58($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X58);
            goto L_801036E0;
    }
    goto skip_9;
    // 0x801036A8: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
    skip_9:
    // 0x801036AC: jal         0x80103C94
    // 0x801036B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103C94(rdram, ctx);
        goto after_10;
    // 0x801036B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x801036B4: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x801036B8: jal         0x800B2840
    // 0x801036BC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_800B2840(rdram, ctx);
        goto after_11;
    // 0x801036BC: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_11:
    // 0x801036C0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x801036C4: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801036C8: jal         0x800B25D8
    // 0x801036CC: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    func_800B25D8(rdram, ctx);
        goto after_12;
    // 0x801036CC: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    after_12:
    // 0x801036D0: lw          $t5, 0x58($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X58);
    // 0x801036D4: jal         0x800D6CEC
    // 0x801036D8: lhu         $a0, 0x16($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X16);
    func_800D6CEC(rdram, ctx);
        goto after_13;
    // 0x801036D8: lhu         $a0, 0x16($t5)
    ctx->r4 = MEM_HU(ctx->r13, 0X16);
    after_13:
    // 0x801036DC: lw          $t6, 0x58($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X58);
L_801036E0:
    // 0x801036E0: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x801036E4: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x801036E8: bnel        $t7, $zero, L_80103714
    if (ctx->r15 != 0) {
        // 0x801036EC: lh          $t9, 0x90($s0)
        ctx->r25 = MEM_H(ctx->r16, 0X90);
            goto L_80103714;
    }
    goto skip_10;
    // 0x801036EC: lh          $t9, 0x90($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X90);
    skip_10:
    // 0x801036F0: jal         0x80102FA0
    // 0x801036F4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_80102FA0(rdram, ctx);
        goto after_14;
    // 0x801036F4: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_14:
    // 0x801036F8: beql        $v0, $zero, L_80103714
    if (ctx->r2 == 0) {
        // 0x801036FC: lh          $t9, 0x90($s0)
        ctx->r25 = MEM_H(ctx->r16, 0X90);
            goto L_80103714;
    }
    goto skip_11;
    // 0x801036FC: lh          $t9, 0x90($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X90);
    skip_11:
    // 0x80103700: jal         0x800DBFF8
    // 0x80103704: nop

    func_800DBFF8(rdram, ctx);
        goto after_15;
    // 0x80103704: nop

    after_15:
    // 0x80103708: lw          $t8, 0x58($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X58);
    // 0x8010370C: sw          $v0, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r2;
    // 0x80103710: lh          $t9, 0x90($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X90);
L_80103714:
    // 0x80103714: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80103718: bnel        $t9, $zero, L_8010373C
    if (ctx->r25 != 0) {
        // 0x8010371C: lw          $t0, 0x58($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X58);
            goto L_8010373C;
    }
    goto skip_12;
    // 0x8010371C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    skip_12:
    // 0x80103720: jal         0x80102FA0
    // 0x80103724: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    func_80102FA0(rdram, ctx);
        goto after_16;
    // 0x80103724: addiu       $a1, $zero, 0x1000
    ctx->r5 = ADD32(0, 0X1000);
    after_16:
    // 0x80103728: beql        $v0, $zero, L_8010373C
    if (ctx->r2 == 0) {
        // 0x8010372C: lw          $t0, 0x58($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X58);
            goto L_8010373C;
    }
    goto skip_13;
    // 0x8010372C: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    skip_13:
    // 0x80103730: jal         0x80105DFC
    // 0x80103734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80105DFC(rdram, ctx);
        goto after_17;
    // 0x80103734: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_17:
    // 0x80103738: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
L_8010373C:
    // 0x8010373C: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80103740: lh          $t1, 0x10($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X10);
    // 0x80103744: bnel        $t1, $zero, L_80103770
    if (ctx->r9 != 0) {
        // 0x80103748: lhu         $t3, 0x80($s0)
        ctx->r11 = MEM_HU(ctx->r16, 0X80);
            goto L_80103770;
    }
    goto skip_14;
    // 0x80103748: lhu         $t3, 0x80($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X80);
    skip_14:
    // 0x8010374C: jal         0x80102FA0
    // 0x80103750: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_80102FA0(rdram, ctx);
        goto after_18;
    // 0x80103750: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_18:
    // 0x80103754: beql        $v0, $zero, L_80103770
    if (ctx->r2 == 0) {
        // 0x80103758: lhu         $t3, 0x80($s0)
        ctx->r11 = MEM_HU(ctx->r16, 0X80);
            goto L_80103770;
    }
    goto skip_15;
    // 0x80103758: lhu         $t3, 0x80($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X80);
    skip_15:
    // 0x8010375C: jal         0x800AE020
    // 0x80103760: nop

    func_800AE020(rdram, ctx);
        goto after_19;
    // 0x80103760: nop

    after_19:
    // 0x80103764: lw          $t2, 0x58($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X58);
    // 0x80103768: sh          $v0, 0x10($t2)
    MEM_H(0X10, ctx->r10) = ctx->r2;
    // 0x8010376C: lhu         $t3, 0x80($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X80);
L_80103770:
    // 0x80103770: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x80103774: bnel        $t3, $zero, L_8010379C
    if (ctx->r11 != 0) {
        // 0x80103778: lh          $t4, 0x8C($s0)
        ctx->r12 = MEM_H(ctx->r16, 0X8C);
            goto L_8010379C;
    }
    goto skip_16;
    // 0x80103778: lh          $t4, 0x8C($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X8C);
    skip_16:
    // 0x8010377C: jal         0x80102FA0
    // 0x80103780: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    func_80102FA0(rdram, ctx);
        goto after_20;
    // 0x80103780: addiu       $a1, $zero, 0x4000
    ctx->r5 = ADD32(0, 0X4000);
    after_20:
    // 0x80103784: beql        $v0, $zero, L_8010379C
    if (ctx->r2 == 0) {
        // 0x80103788: lh          $t4, 0x8C($s0)
        ctx->r12 = MEM_H(ctx->r16, 0X8C);
            goto L_8010379C;
    }
    goto skip_17;
    // 0x80103788: lh          $t4, 0x8C($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X8C);
    skip_17:
    // 0x8010378C: jal         0x800D88F8
    // 0x80103790: nop

    func_800D88F8(rdram, ctx);
        goto after_21;
    // 0x80103790: nop

    after_21:
    // 0x80103794: sh          $v0, 0x80($s0)
    MEM_H(0X80, ctx->r16) = ctx->r2;
    // 0x80103798: lh          $t4, 0x8C($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X8C);
L_8010379C:
    // 0x8010379C: bnel        $t4, $zero, L_801037C8
    if (ctx->r12 != 0) {
        // 0x801037A0: lh          $t8, 0x8E($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X8E);
            goto L_801037C8;
    }
    goto skip_18;
    // 0x801037A0: lh          $t8, 0x8E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X8E);
    skip_18:
    // 0x801037A4: lb          $t6, 0x75($s0)
    ctx->r14 = MEM_B(ctx->r16, 0X75);
    // 0x801037A8: bgezl       $t6, L_801037C8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801037AC: lh          $t8, 0x8E($s0)
        ctx->r24 = MEM_H(ctx->r16, 0X8E);
            goto L_801037C8;
    }
    goto skip_19;
    // 0x801037AC: lh          $t8, 0x8E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X8E);
    skip_19:
    // 0x801037B0: lhu         $a1, 0x72($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X72);
    // 0x801037B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801037B8: srl         $t7, $a1, 10
    ctx->r15 = S32(U32(ctx->r5) >> 10);
    // 0x801037BC: jal         0x80102424
    // 0x801037C0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    func_80102424(rdram, ctx);
        goto after_22;
    // 0x801037C0: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    after_22:
    // 0x801037C4: lh          $t8, 0x8E($s0)
    ctx->r24 = MEM_H(ctx->r16, 0X8E);
L_801037C8:
    // 0x801037C8: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x801037CC: bnel        $t8, $zero, L_801037F0
    if (ctx->r24 != 0) {
        // 0x801037D0: lbu         $t0, 0x73($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X73);
            goto L_801037F0;
    }
    goto skip_20;
    // 0x801037D0: lbu         $t0, 0x73($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X73);
    skip_20:
    // 0x801037D4: jal         0x80102FA0
    // 0x801037D8: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    func_80102FA0(rdram, ctx);
        goto after_23;
    // 0x801037D8: lui         $a1, 0x4
    ctx->r5 = S32(0X4 << 16);
    after_23:
    // 0x801037DC: beql        $v0, $zero, L_801037F0
    if (ctx->r2 == 0) {
        // 0x801037E0: lbu         $t0, 0x73($s0)
        ctx->r8 = MEM_BU(ctx->r16, 0X73);
            goto L_801037F0;
    }
    goto skip_21;
    // 0x801037E0: lbu         $t0, 0x73($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X73);
    skip_21:
    // 0x801037E4: jal         0x80104460
    // 0x801037E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80104460(rdram, ctx);
        goto after_24;
    // 0x801037E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_24:
    // 0x801037EC: lbu         $t0, 0x73($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X73);
L_801037F0:
    // 0x801037F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801037F4: addiu       $a1, $zero, 0x29
    ctx->r5 = ADD32(0, 0X29);
    // 0x801037F8: ori         $t1, $t0, 0x8
    ctx->r9 = ctx->r8 | 0X8;
    // 0x801037FC: sb          $t1, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r9;
    // 0x80103800: jal         0x8010108C
    // 0x80103804: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    func_8010108C(rdram, ctx);
        goto after_25;
    // 0x80103804: lw          $a2, 0x50($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X50);
    after_25:
    // 0x80103808: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_8010380C:
    // 0x8010380C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80103810: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    // 0x80103814: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010381C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010381C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80103820: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80103824: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80103828: lw          $t6, 0x70($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X70);
    // 0x8010382C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80103830: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80103834: sll         $t8, $t6, 28
    ctx->r24 = S32(ctx->r14 << 28);
    // 0x80103838: bgezl       $t8, L_80103920
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8010383C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80103920;
    }
    goto skip_0;
    // 0x8010383C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80103840: lh          $a0, 0x60($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X60);
    // 0x80103844: beql        $a0, $zero, L_80103860
    if (ctx->r4 == 0) {
        // 0x80103848: lw          $a0, 0x4($v0)
        ctx->r4 = MEM_W(ctx->r2, 0X4);
            goto L_80103860;
    }
    goto skip_1;
    // 0x80103848: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    skip_1:
    // 0x8010384C: jal         0x80100E18
    // 0x80103850: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_80100E18(rdram, ctx);
        goto after_0;
    // 0x80103850: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_0:
    // 0x80103854: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80103858: sh          $zero, 0x60($s0)
    MEM_H(0X60, ctx->r16) = 0;
    // 0x8010385C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
L_80103860:
    // 0x80103860: beql        $a0, $zero, L_8010387C
    if (ctx->r4 == 0) {
        // 0x80103864: lh          $t9, 0x90($s0)
        ctx->r25 = MEM_H(ctx->r16, 0X90);
            goto L_8010387C;
    }
    goto skip_2;
    // 0x80103864: lh          $t9, 0x90($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X90);
    skip_2:
    // 0x80103868: jal         0x800DBFD8
    // 0x8010386C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800DBFD8(rdram, ctx);
        goto after_1;
    // 0x8010386C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x80103870: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80103874: sw          $zero, 0x4($v0)
    MEM_W(0X4, ctx->r2) = 0;
    // 0x80103878: lh          $t9, 0x90($s0)
    ctx->r25 = MEM_H(ctx->r16, 0X90);
L_8010387C:
    // 0x8010387C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80103880: beql        $t9, $zero, L_80103898
    if (ctx->r25 == 0) {
        // 0x80103884: lh          $a0, 0x10($v0)
        ctx->r4 = MEM_H(ctx->r2, 0X10);
            goto L_80103898;
    }
    goto skip_3;
    // 0x80103884: lh          $a0, 0x10($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X10);
    skip_3:
    // 0x80103888: jal         0x80106138
    // 0x8010388C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_80106138(rdram, ctx);
        goto after_2;
    // 0x8010388C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_2:
    // 0x80103890: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x80103894: lh          $a0, 0x10($v0)
    ctx->r4 = MEM_H(ctx->r2, 0X10);
L_80103898:
    // 0x80103898: beql        $a0, $zero, L_801038B4
    if (ctx->r4 == 0) {
        // 0x8010389C: lhu         $v0, 0x80($s0)
        ctx->r2 = MEM_HU(ctx->r16, 0X80);
            goto L_801038B4;
    }
    goto skip_4;
    // 0x8010389C: lhu         $v0, 0x80($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X80);
    skip_4:
    // 0x801038A0: jal         0x800ADFE0
    // 0x801038A4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800ADFE0(rdram, ctx);
        goto after_3;
    // 0x801038A4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x801038A8: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x801038AC: sh          $zero, 0x10($v0)
    MEM_H(0X10, ctx->r2) = 0;
    // 0x801038B0: lhu         $v0, 0x80($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X80);
L_801038B4:
    // 0x801038B4: beq         $v0, $zero, L_801038CC
    if (ctx->r2 == 0) {
        // 0x801038B8: sll         $a0, $v0, 16
        ctx->r4 = S32(ctx->r2 << 16);
            goto L_801038CC;
    }
    // 0x801038B8: sll         $a0, $v0, 16
    ctx->r4 = S32(ctx->r2 << 16);
    // 0x801038BC: sra         $t0, $a0, 16
    ctx->r8 = S32(SIGNED(ctx->r4) >> 16);
    // 0x801038C0: jal         0x800D8954
    // 0x801038C4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    func_800D8954(rdram, ctx);
        goto after_4;
    // 0x801038C4: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    after_4:
    // 0x801038C8: sh          $zero, 0x80($s0)
    MEM_H(0X80, ctx->r16) = 0;
L_801038CC:
    // 0x801038CC: lb          $t2, 0x75($s0)
    ctx->r10 = MEM_B(ctx->r16, 0X75);
    // 0x801038D0: bgezl       $t2, L_801038F0
    if (SIGNED(ctx->r10) >= 0) {
        // 0x801038D4: lh          $t4, 0x8E($s0)
        ctx->r12 = MEM_H(ctx->r16, 0X8E);
            goto L_801038F0;
    }
    goto skip_5;
    // 0x801038D4: lh          $t4, 0x8E($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X8E);
    skip_5:
    // 0x801038D8: lh          $t3, 0x8C($s0)
    ctx->r11 = MEM_H(ctx->r16, 0X8C);
    // 0x801038DC: beql        $t3, $zero, L_801038F0
    if (ctx->r11 == 0) {
        // 0x801038E0: lh          $t4, 0x8E($s0)
        ctx->r12 = MEM_H(ctx->r16, 0X8E);
            goto L_801038F0;
    }
    goto skip_6;
    // 0x801038E0: lh          $t4, 0x8E($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X8E);
    skip_6:
    // 0x801038E4: jal         0x80104328
    // 0x801038E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80104328(rdram, ctx);
        goto after_5;
    // 0x801038E8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x801038EC: lh          $t4, 0x8E($s0)
    ctx->r12 = MEM_H(ctx->r16, 0X8E);
L_801038F0:
    // 0x801038F0: beql        $t4, $zero, L_80103904
    if (ctx->r12 == 0) {
        // 0x801038F4: lbu         $t5, 0x73($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X73);
            goto L_80103904;
    }
    goto skip_7;
    // 0x801038F4: lbu         $t5, 0x73($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X73);
    skip_7:
    // 0x801038F8: jal         0x80104504
    // 0x801038FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80104504(rdram, ctx);
        goto after_6;
    // 0x801038FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80103900: lbu         $t5, 0x73($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X73);
L_80103904:
    // 0x80103904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80103908: addiu       $a1, $zero, 0x2A
    ctx->r5 = ADD32(0, 0X2A);
    // 0x8010390C: andi        $t6, $t5, 0xFFF7
    ctx->r14 = ctx->r13 & 0XFFF7;
    // 0x80103910: sb          $t6, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r14;
    // 0x80103914: jal         0x8010108C
    // 0x80103918: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8010108C(rdram, ctx);
        goto after_7;
    // 0x80103918: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x8010391C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80103920:
    // 0x80103920: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80103924: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80103928: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103930(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103930: jr          $ra
    // 0x80103934: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    return;
    // 0x80103934: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
;}
RECOMP_FUNC void func_80103938(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103938: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010393C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103940: lh          $t6, 0x8E($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8E);
    // 0x80103944: beql        $t6, $zero, L_80103958
    if (ctx->r14 == 0) {
        // 0x80103948: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80103958;
    }
    goto skip_0;
    // 0x80103948: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8010394C: jal         0x80104504
    // 0x80103950: nop

    func_80104504(rdram, ctx);
        goto after_0;
    // 0x80103950: nop

    after_0:
    // 0x80103954: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80103958:
    // 0x80103958: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010395C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103964(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103964: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103968: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010396C: lhu         $a1, 0x14($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X14);
    // 0x80103970: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80103974: beq         $a1, $zero, L_80103984
    if (ctx->r5 == 0) {
        // 0x80103978: nop
    
            goto L_80103984;
    }
    // 0x80103978: nop

    // 0x8010397C: bne         $a1, $at, L_8010398C
    if (ctx->r5 != ctx->r1) {
        // 0x80103980: nop
    
            goto L_8010398C;
    }
    // 0x80103980: nop

L_80103984:
    // 0x80103984: b           L_80103994
    // 0x80103988: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80103994;
    // 0x80103988: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010398C:
    // 0x8010398C: jal         0x800D674C
    // 0x80103990: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x80103990: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
L_80103994:
    // 0x80103994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010399C: jr          $ra
    return;
;}
RECOMP_FUNC void func_801039A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801039A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801039A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801039AC: lhu         $a1, 0x14($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X14);
    // 0x801039B0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x801039B4: beq         $a1, $zero, L_801039C4
    if (ctx->r5 == 0) {
        // 0x801039B8: nop
    
            goto L_801039C4;
    }
    // 0x801039B8: nop

    // 0x801039BC: bne         $a1, $at, L_801039CC
    if (ctx->r5 != ctx->r1) {
        // 0x801039C0: nop
    
            goto L_801039CC;
    }
    // 0x801039C0: nop

L_801039C4:
    // 0x801039C4: b           L_801039D4
    // 0x801039C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801039D4;
    // 0x801039C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801039CC:
    // 0x801039CC: jal         0x800D6B0C
    // 0x801039D0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D6B0C(rdram, ctx);
        goto after_0;
    // 0x801039D0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
L_801039D4:
    // 0x801039D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801039D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801039DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801039E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801039E4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801039E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801039EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801039F0: jal         0x80103964
    // 0x801039F4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_80103964(rdram, ctx);
        goto after_0;
    // 0x801039F4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x801039F8: bne         $v0, $zero, L_80103A08
    if (ctx->r2 != 0) {
        // 0x801039FC: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_80103A08;
    }
    // 0x801039FC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80103A00: b           L_80103A8C
    // 0x80103A04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80103A8C;
    // 0x80103A04: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80103A08:
    // 0x80103A08: jal         0x80106790
    // 0x80103A0C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80106790(rdram, ctx);
        goto after_1;
    // 0x80103A0C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x80103A10: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80103A14: jal         0x80103D48
    // 0x80103A18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80103D48(rdram, ctx);
        goto after_2;
    // 0x80103A18: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80103A1C: jal         0x80103508
    // 0x80103A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103508(rdram, ctx);
        goto after_3;
    // 0x80103A20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80103A24: lw          $t6, 0x74($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X74);
    // 0x80103A28: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80103A2C: srl         $t7, $t6, 31
    ctx->r15 = S32(U32(ctx->r14) >> 31);
    // 0x80103A30: bne         $t7, $zero, L_80103A80
    if (ctx->r15 != 0) {
        // 0x80103A34: nop
    
            goto L_80103A80;
    }
    // 0x80103A34: nop

    // 0x80103A38: lw          $t9, 0xC($t8)
    ctx->r25 = MEM_W(ctx->r24, 0XC);
    // 0x80103A3C: bne         $t9, $zero, L_80103A80
    if (ctx->r25 != 0) {
        // 0x80103A40: nop
    
            goto L_80103A80;
    }
    // 0x80103A40: nop

    // 0x80103A44: lw          $t0, 0x0($t8)
    ctx->r8 = MEM_W(ctx->r24, 0X0);
    // 0x80103A48: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x80103A4C: sll         $t3, $t1, 30
    ctx->r11 = S32(ctx->r9 << 30);
    // 0x80103A50: bgezl       $t3, L_80103A78
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80103A54: lbu         $t5, 0x74($s0)
        ctx->r13 = MEM_BU(ctx->r16, 0X74);
            goto L_80103A78;
    }
    goto skip_0;
    // 0x80103A54: lbu         $t5, 0x74($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X74);
    skip_0:
    // 0x80103A58: jal         0x800B2824
    // 0x80103A5C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800B2824(rdram, ctx);
        goto after_4;
    // 0x80103A5C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80103A60: beq         $v0, $zero, L_80103A74
    if (ctx->r2 == 0) {
        // 0x80103A64: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80103A74;
    }
    // 0x80103A64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80103A68: lui         $a1, 0x8009
    ctx->r5 = S32(0X8009 << 16);
    // 0x80103A6C: jal         0x80089FF0
    // 0x80103A70: addiu       $a1, $a1, -0x6008
    ctx->r5 = ADD32(ctx->r5, -0X6008);
    _subaddiecustomhits_entrypoint_0(rdram, ctx);
        goto after_5;
    // 0x80103A70: addiu       $a1, $a1, -0x6008
    ctx->r5 = ADD32(ctx->r5, -0X6008);
    after_5:
L_80103A74:
    // 0x80103A74: lbu         $t5, 0x74($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X74);
L_80103A78:
    // 0x80103A78: ori         $t6, $t5, 0x80
    ctx->r14 = ctx->r13 | 0X80;
    // 0x80103A7C: sb          $t6, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r14;
L_80103A80:
    // 0x80103A80: jal         0x80103D70
    // 0x80103A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103D70(rdram, ctx);
        goto after_6;
    // 0x80103A84: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80103A88: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
L_80103A8C:
    // 0x80103A8C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80103A90: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80103A94: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80103A98: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103AA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103AA0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103AA4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103AA8: jal         0x801039A4
    // 0x80103AAC: nop

    func_801039A4(rdram, ctx);
        goto after_0;
    // 0x80103AAC: nop

    after_0:
    // 0x80103AB0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103AB4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103AB8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103AC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103AC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103AC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103AC8: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80103ACC: jal         0x800D6C34
    // 0x80103AD0: lhu         $a0, 0x14($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X14);
    func_800D6C34(rdram, ctx);
        goto after_0;
    // 0x80103AD0: lhu         $a0, 0x14($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X14);
    after_0:
    // 0x80103AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103AD8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103ADC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103AE4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103AE4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103AE8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103AEC: lhu         $a1, 0x14($a0)
    ctx->r5 = MEM_HU(ctx->r4, 0X14);
    // 0x80103AF0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80103AF4: beq         $a1, $zero, L_80103B04
    if (ctx->r5 == 0) {
        // 0x80103AF8: nop
    
            goto L_80103B04;
    }
    // 0x80103AF8: nop

    // 0x80103AFC: bne         $a1, $at, L_80103B0C
    if (ctx->r5 != ctx->r1) {
        // 0x80103B00: nop
    
            goto L_80103B0C;
    }
    // 0x80103B00: nop

L_80103B04:
    // 0x80103B04: b           L_80103B14
    // 0x80103B08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80103B14;
    // 0x80103B08: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80103B0C:
    // 0x80103B0C: jal         0x800D674C
    // 0x80103B10: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D674C(rdram, ctx);
        goto after_0;
    // 0x80103B10: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
L_80103B14:
    // 0x80103B14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103B18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103B1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103B24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103B24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103B28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103B2C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80103B30: bne         $a2, $zero, L_80103B40
    if (ctx->r6 != 0) {
        // 0x80103B34: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80103B40;
    }
    // 0x80103B34: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80103B38: b           L_80103BAC
    // 0x80103B3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80103BAC;
    // 0x80103B3C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80103B40:
    // 0x80103B40: lbu         $t6, 0x70($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X70);
    // 0x80103B44: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80103B48: beql        $t7, $zero, L_80103B7C
    if (ctx->r15 == 0) {
        // 0x80103B4C: lw          $t1, 0x70($a3)
        ctx->r9 = MEM_W(ctx->r7, 0X70);
            goto L_80103B7C;
    }
    goto skip_0;
    // 0x80103B4C: lw          $t1, 0x70($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X70);
    skip_0:
    // 0x80103B50: lh          $a0, 0x60($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X60);
    // 0x80103B54: beql        $a0, $zero, L_80103B7C
    if (ctx->r4 == 0) {
        // 0x80103B58: lw          $t1, 0x70($a3)
        ctx->r9 = MEM_W(ctx->r7, 0X70);
            goto L_80103B7C;
    }
    goto skip_1;
    // 0x80103B58: lw          $t1, 0x70($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X70);
    skip_1:
    // 0x80103B5C: lbu         $t8, 0x71($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X71);
    // 0x80103B60: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80103B64: srl         $t9, $t8, 7
    ctx->r25 = S32(U32(ctx->r24) >> 7);
    // 0x80103B68: jal         0x80100A74
    // 0x80103B6C: xor         $a1, $t9, $t0
    ctx->r5 = ctx->r25 ^ ctx->r8;
    func_80100A74(rdram, ctx);
        goto after_0;
    // 0x80103B6C: xor         $a1, $t9, $t0
    ctx->r5 = ctx->r25 ^ ctx->r8;
    after_0:
    // 0x80103B70: b           L_80103BB0
    // 0x80103B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80103BB0;
    // 0x80103B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103B78: lw          $t1, 0x70($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X70);
L_80103B7C:
    // 0x80103B7C: sll         $t3, $t1, 10
    ctx->r11 = S32(ctx->r9 << 10);
    // 0x80103B80: bgez        $t3, L_80103BA4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80103B84: nop
    
            goto L_80103BA4;
    }
    // 0x80103B84: nop

    // 0x80103B88: lh          $a0, 0x60($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X60);
    // 0x80103B8C: beq         $a0, $zero, L_80103BA4
    if (ctx->r4 == 0) {
        // 0x80103B90: nop
    
            goto L_80103BA4;
    }
    // 0x80103B90: nop

    // 0x80103B94: jal         0x80100A74
    // 0x80103B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80100A74(rdram, ctx);
        goto after_1;
    // 0x80103B98: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80103B9C: b           L_80103BB0
    // 0x80103BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80103BB0;
    // 0x80103BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80103BA4:
    // 0x80103BA4: jal         0x800B2840
    // 0x80103BA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800B2840(rdram, ctx);
        goto after_2;
    // 0x80103BA8: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_2:
L_80103BAC:
    // 0x80103BAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80103BB0:
    // 0x80103BB0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103BB4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103BBC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103BBC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103BC0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103BC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80103BC8: jal         0x801039A4
    // 0x80103BCC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_801039A4(rdram, ctx);
        goto after_0;
    // 0x80103BCC: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x80103BD0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80103BD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80103BD8: jal         0x80103B24
    // 0x80103BDC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_80103B24(rdram, ctx);
        goto after_1;
    // 0x80103BDC: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_1:
    // 0x80103BE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103BE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103BE8: jr          $ra
    // 0x80103BEC: nop

    return;
    // 0x80103BEC: nop

;}
RECOMP_FUNC void func_80103BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103BF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103BF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103BF8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80103BFC: bne         $a2, $zero, L_80103C18
    if (ctx->r6 != 0) {
        // 0x80103C00: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80103C18;
    }
    // 0x80103C00: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80103C04: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    // 0x80103C08: jal         0x80103964
    // 0x80103C0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    func_80103964(rdram, ctx);
        goto after_0;
    // 0x80103C0C: sw          $a3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r7;
    after_0:
    // 0x80103C10: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x80103C14: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
L_80103C18:
    // 0x80103C18: bnel        $a2, $zero, L_80103C2C
    if (ctx->r6 != 0) {
        // 0x80103C1C: lbu         $t6, 0x70($a3)
        ctx->r14 = MEM_BU(ctx->r7, 0X70);
            goto L_80103C2C;
    }
    goto skip_0;
    // 0x80103C1C: lbu         $t6, 0x70($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X70);
    skip_0:
    // 0x80103C20: b           L_80103C84
    // 0x80103C24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80103C84;
    // 0x80103C24: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80103C28: lbu         $t6, 0x70($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0X70);
L_80103C2C:
    // 0x80103C2C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80103C30: beql        $t7, $zero, L_80103C5C
    if (ctx->r15 == 0) {
        // 0x80103C34: lw          $t1, 0x70($a3)
        ctx->r9 = MEM_W(ctx->r7, 0X70);
            goto L_80103C5C;
    }
    goto skip_1;
    // 0x80103C34: lw          $t1, 0x70($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X70);
    skip_1:
    // 0x80103C38: lbu         $t8, 0x71($a3)
    ctx->r24 = MEM_BU(ctx->r7, 0X71);
    // 0x80103C3C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80103C40: lh          $a0, 0x60($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X60);
    // 0x80103C44: srl         $t9, $t8, 7
    ctx->r25 = S32(U32(ctx->r24) >> 7);
    // 0x80103C48: jal         0x80100A74
    // 0x80103C4C: xor         $a1, $t9, $t0
    ctx->r5 = ctx->r25 ^ ctx->r8;
    func_80100A74(rdram, ctx);
        goto after_1;
    // 0x80103C4C: xor         $a1, $t9, $t0
    ctx->r5 = ctx->r25 ^ ctx->r8;
    after_1:
    // 0x80103C50: b           L_80103C88
    // 0x80103C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80103C88;
    // 0x80103C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103C58: lw          $t1, 0x70($a3)
    ctx->r9 = MEM_W(ctx->r7, 0X70);
L_80103C5C:
    // 0x80103C5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80103C60: sll         $t3, $t1, 10
    ctx->r11 = S32(ctx->r9 << 10);
    // 0x80103C64: bgez        $t3, L_80103C7C
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80103C68: nop
    
            goto L_80103C7C;
    }
    // 0x80103C68: nop

    // 0x80103C6C: jal         0x80100A74
    // 0x80103C70: lh          $a0, 0x60($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X60);
    func_80100A74(rdram, ctx);
        goto after_2;
    // 0x80103C70: lh          $a0, 0x60($a3)
    ctx->r4 = MEM_H(ctx->r7, 0X60);
    after_2:
    // 0x80103C74: b           L_80103C88
    // 0x80103C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80103C88;
    // 0x80103C78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80103C7C:
    // 0x80103C7C: jal         0x800B2840
    // 0x80103C80: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    func_800B2840(rdram, ctx);
        goto after_3;
    // 0x80103C80: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    after_3:
L_80103C84:
    // 0x80103C84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80103C88:
    // 0x80103C88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103C8C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103C94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103C9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80103CA0: jal         0x80103BF0
    // 0x80103CA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80103BF0(rdram, ctx);
        goto after_0;
    // 0x80103CA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80103CA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103CAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103CB0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103CB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103CBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103CC0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80103CC4: jal         0x80103BF0
    // 0x80103CC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80103BF0(rdram, ctx);
        goto after_0;
    // 0x80103CC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80103CCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103CD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103CD4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103CDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103CDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103CE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103CE4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80103CE8: jal         0x80103B24
    // 0x80103CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80103B24(rdram, ctx);
        goto after_0;
    // 0x80103CEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80103CF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103CF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103CF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103D00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103D00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103D04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103D08: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80103D0C: jal         0x80103B24
    // 0x80103D10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80103B24(rdram, ctx);
        goto after_0;
    // 0x80103D10: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x80103D14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103D18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103D1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103D24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103D24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103D28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103D2C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80103D30: jal         0x80103BF0
    // 0x80103D34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80103BF0(rdram, ctx);
        goto after_0;
    // 0x80103D34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80103D38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103D3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103D40: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103D48: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103D4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103D50: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80103D54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80103D58: jal         0x800D70F8
    // 0x80103D5C: lhu         $a0, 0x14($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X14);
    func_800D70F8(rdram, ctx);
        goto after_0;
    // 0x80103D5C: lhu         $a0, 0x14($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X14);
    after_0:
    // 0x80103D60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103D64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103D68: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103D70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103D70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103D74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103D78: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80103D7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80103D80: jal         0x800D70F8
    // 0x80103D84: lhu         $a0, 0x14($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X14);
    func_800D70F8(rdram, ctx);
        goto after_0;
    // 0x80103D84: lhu         $a0, 0x14($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X14);
    after_0:
    // 0x80103D88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103D8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103D90: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103D98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103D98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80103D9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103DA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80103DA4: jal         0x800AE0E8
    // 0x80103DA8: lh          $a0, 0x10($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X10);
    func_800AE0E8(rdram, ctx);
        goto after_0;
    // 0x80103DA8: lh          $a0, 0x10($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X10);
    after_0:
    // 0x80103DAC: bne         $v0, $zero, L_80103DBC
    if (ctx->r2 != 0) {
        // 0x80103DB0: nop
    
            goto L_80103DBC;
    }
    // 0x80103DB0: nop

    // 0x80103DB4: b           L_80103DEC
    // 0x80103DB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80103DEC;
    // 0x80103DB8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80103DBC:
    // 0x80103DBC: jal         0x801039A4
    // 0x80103DC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    func_801039A4(rdram, ctx);
        goto after_1;
    // 0x80103DC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80103DC4: bne         $v0, $zero, L_80103DD4
    if (ctx->r2 != 0) {
        // 0x80103DC8: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80103DD4;
    }
    // 0x80103DC8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80103DCC: b           L_80103DEC
    // 0x80103DD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80103DEC;
    // 0x80103DD0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80103DD4:
    // 0x80103DD4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80103DD8: lhu         $a0, 0x14($t7)
    ctx->r4 = MEM_HU(ctx->r15, 0X14);
    // 0x80103DDC: jal         0x800D62E4
    // 0x80103DE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800D62E4(rdram, ctx);
        goto after_2;
    // 0x80103DE0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_2:
    // 0x80103DE4: jal         0x800B2824
    // 0x80103DE8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_800B2824(rdram, ctx);
        goto after_3;
    // 0x80103DE8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_3:
L_80103DEC:
    // 0x80103DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103DF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80103DF4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103DFC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103E00: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103E04: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x80103E08: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80103E0C: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80103E10: lhu         $t7, 0x14($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X14);
    // 0x80103E14: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80103E18: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x80103E1C: bnel        $t7, $at, L_80103E3C
    if (ctx->r15 != ctx->r1) {
        // 0x80103E20: sw          $a2, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r6;
            goto L_80103E3C;
    }
    goto skip_0;
    // 0x80103E20: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    skip_0:
    // 0x80103E24: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80103E28: jal         0x800EE7F8
    // 0x80103E2C: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80103E2C: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    after_0:
    // 0x80103E30: b           L_80103EA0
    // 0x80103E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80103EA0;
    // 0x80103E34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103E38: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
L_80103E3C:
    // 0x80103E3C: jal         0x80103328
    // 0x80103E40: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    func_80103328(rdram, ctx);
        goto after_1;
    // 0x80103E40: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    after_1:
    // 0x80103E44: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80103E48: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80103E4C: jal         0x800EE7F8
    // 0x80103E50: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x80103E50: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    after_2:
    // 0x80103E54: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80103E58: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x80103E5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80103E60: lh          $v0, 0x88($a2)
    ctx->r2 = MEM_H(ctx->r6, 0X88);
    // 0x80103E64: lh          $t8, 0x8A($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X8A);
    // 0x80103E68: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80103E6C: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80103E70: subu        $t9, $t8, $v0
    ctx->r25 = SUB32(ctx->r24, ctx->r2);
    // 0x80103E74: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80103E78: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80103E7C: lwc1        $f16, 0x4($a3)
    ctx->f16.u32l = MEM_W(ctx->r7, 0X4);
    // 0x80103E80: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80103E84: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80103E88: lwc1        $f6, 0x38($a2)
    ctx->f6.u32l = MEM_W(ctx->r6, 0X38);
    // 0x80103E8C: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x80103E90: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80103E94: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x80103E98: swc1        $f18, 0x4($a3)
    MEM_W(0X4, ctx->r7) = ctx->f18.u32l;
    // 0x80103E9C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80103EA0:
    // 0x80103EA0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103EA4: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103EAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103EB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103EB4: jal         0x80103328
    // 0x80103EB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80103328(rdram, ctx);
        goto after_0;
    // 0x80103EB8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80103EBC: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80103EC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103EC4: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80103EC8: lhu         $t6, 0x62($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X62);
    // 0x80103ECC: lwc1        $f4, 0x38($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X38);
    // 0x80103ED0: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80103ED4: bgez        $t6, L_80103EE8
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80103ED8: cvt.s.w     $f8, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80103EE8;
    }
    // 0x80103ED8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80103EDC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80103EE0: nop

    // 0x80103EE4: add.s       $f8, $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f8.fl + ctx->f10.fl;
L_80103EE8:
    // 0x80103EE8: mul.s       $f0, $f4, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80103EEC: jr          $ra
    // 0x80103EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80103EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80103EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103EF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103EF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103EFC: jal         0x80103328
    // 0x80103F00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80103328(rdram, ctx);
        goto after_0;
    // 0x80103F00: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80103F04: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80103F08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103F0C: lh          $t6, 0x8A($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X8A);
    // 0x80103F10: lh          $t7, 0x88($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X88);
    // 0x80103F14: lwc1        $f8, 0x38($a0)
    ctx->f8.u32l = MEM_W(ctx->r4, 0X38);
    // 0x80103F18: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103F1C: subu        $t8, $t6, $t7
    ctx->r24 = SUB32(ctx->r14, ctx->r15);
    // 0x80103F20: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80103F24: nop

    // 0x80103F28: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80103F2C: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80103F30: jr          $ra
    return;
;}
RECOMP_FUNC void func_80103F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103F38: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80103F3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80103F40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80103F44: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80103F48: jal         0x80103328
    // 0x80103F4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80103328(rdram, ctx);
        goto after_0;
    // 0x80103F4C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80103F50: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80103F54: beql        $a0, $zero, L_80103F84
    if (ctx->r4 == 0) {
        // 0x80103F58: lhu         $t6, 0x68($s0)
        ctx->r14 = MEM_HU(ctx->r16, 0X68);
            goto L_80103F84;
    }
    goto skip_0;
    // 0x80103F58: lhu         $t6, 0x68($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X68);
    skip_0:
    // 0x80103F5C: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x80103F60: jal         0x800EE88C
    // 0x80103F64: addiu       $a1, $a1, 0x1E
    ctx->r5 = ADD32(ctx->r5, 0X1E);
    func_800EE88C(rdram, ctx);
        goto after_1;
    // 0x80103F64: addiu       $a1, $a1, 0x1E
    ctx->r5 = ADD32(ctx->r5, 0X1E);
    after_1:
    // 0x80103F68: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80103F6C: jal         0x800EF334
    // 0x80103F70: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    func_800EF334(rdram, ctx);
        goto after_2;
    // 0x80103F70: lw          $a1, 0x38($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X38);
    after_2:
    // 0x80103F74: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80103F78: jal         0x800EF04C
    // 0x80103F7C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    func_800EF04C(rdram, ctx);
        goto after_3;
    // 0x80103F7C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_3:
    // 0x80103F80: lhu         $t6, 0x68($s0)
    ctx->r14 = MEM_HU(ctx->r16, 0X68);
L_80103F84:
    // 0x80103F84: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80103F88: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80103F8C: bgez        $t6, L_80103FA0
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80103F90: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80103FA0;
    }
    // 0x80103F90: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80103F94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80103F98: nop

    // 0x80103F9C: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80103FA0:
    // 0x80103FA0: lwc1        $f10, 0x38($s0)
    ctx->f10.u32l = MEM_W(ctx->r16, 0X38);
    // 0x80103FA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80103FA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80103FAC: mul.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80103FB0: jr          $ra
    // 0x80103FB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x80103FB4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80103FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80103FB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80103FBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80103FC0: jal         0x80103328
    // 0x80103FC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80103328(rdram, ctx);
        goto after_0;
    // 0x80103FC4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80103FC8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80103FCC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80103FD0: lhu         $t6, 0x6A($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X6A);
    // 0x80103FD4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80103FD8: bgez        $t6, L_80103FEC
    if (SIGNED(ctx->r14) >= 0) {
        // 0x80103FDC: cvt.s.w     $f6, $f4
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
            goto L_80103FEC;
    }
    // 0x80103FDC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80103FE0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80103FE4: nop

    // 0x80103FE8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80103FEC:
    // 0x80103FEC: lwc1        $f10, 0x38($a0)
    ctx->f10.u32l = MEM_W(ctx->r4, 0X38);
    // 0x80103FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80103FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80103FF8: mul.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x80103FFC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104004: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80104008: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010400C: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80104010: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80104014: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80104018: jal         0x801039E4
    // 0x8010401C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_801039E4(rdram, ctx);
        goto after_0;
    // 0x8010401C: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x80104020: bne         $v0, $zero, L_80104030
    if (ctx->r2 != 0) {
        // 0x80104024: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80104030;
    }
    // 0x80104024: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80104028: b           L_80104098
    // 0x8010402C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80104098;
    // 0x8010402C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80104030:
    // 0x80104030: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80104034: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80104038: lhu         $a0, 0x14($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X14);
    // 0x8010403C: jal         0x800D62E4
    // 0x80104040: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    func_800D62E4(rdram, ctx);
        goto after_1;
    // 0x80104040: sw          $a1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r5;
    after_1:
    // 0x80104044: jal         0x800B2840
    // 0x80104048: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800B2840(rdram, ctx);
        goto after_2;
    // 0x80104048: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8010404C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80104050: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80104054: jal         0x800B2198
    // 0x80104058: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    func_800B2198(rdram, ctx);
        goto after_3;
    // 0x80104058: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    after_3:
    // 0x8010405C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x80104060: jal         0x800EE84C
    // 0x80104064: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800EE84C(rdram, ctx);
        goto after_4;
    // 0x80104064: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x80104068: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8010406C: jal         0x800EE84C
    // 0x80104070: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    func_800EE84C(rdram, ctx);
        goto after_5;
    // 0x80104070: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    after_5:
    // 0x80104074: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80104078: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8010407C: jal         0x800EF334
    // 0x80104080: lw          $a1, 0x38($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X38);
    func_800EF334(rdram, ctx);
        goto after_6;
    // 0x80104080: lw          $a1, 0x38($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X38);
    after_6:
    // 0x80104084: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80104088: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8010408C: jal         0x800EF334
    // 0x80104090: lw          $a1, 0x38($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X38);
    func_800EF334(rdram, ctx);
        goto after_7;
    // 0x80104090: lw          $a1, 0x38($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X38);
    after_7:
    // 0x80104094: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80104098:
    // 0x80104098: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010409C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801040A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801040A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801040A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801040AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801040B0: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x801040B4: jal         0x800AE080
    // 0x801040B8: lh          $a0, 0x10($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X10);
    func_800AE080(rdram, ctx);
        goto after_0;
    // 0x801040B8: lh          $a0, 0x10($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X10);
    after_0:
    // 0x801040BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801040C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801040C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_801040D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801040D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801040D4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801040D8: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x801040DC: addiu       $a0, $a0, 0x5AB0
    ctx->r4 = ADD32(ctx->r4, 0X5AB0);
    // 0x801040E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801040E4: addiu       $t6, $t6, 0x5AB8
    ctx->r14 = ADD32(ctx->r14, 0X5AB8);
    // 0x801040E8: addiu       $t7, $zero, 0x6D
    ctx->r15 = ADD32(0, 0X6D);
    // 0x801040EC: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x801040F0: jal         0x800DFAD0
    // 0x801040F4: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    func_800DFAD0(rdram, ctx);
        goto after_0;
    // 0x801040F4: sw          $t7, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r15;
    after_0:
    // 0x801040F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801040FC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80104100: addiu       $v0, $a0, 0x5AB0
    ctx->r2 = ADD32(ctx->r4, 0X5AB0);
    // 0x80104104: jr          $ra
    // 0x80104108: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80104108: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_8010410C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010410C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80104110: jr          $ra
    // 0x80104114: addiu       $v0, $v0, 0x6BC0
    ctx->r2 = ADD32(ctx->r2, 0X6BC0);
    return;
    // 0x80104114: addiu       $v0, $v0, 0x6BC0
    ctx->r2 = ADD32(ctx->r2, 0X6BC0);
;}
RECOMP_FUNC void func_80104118(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104118: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x8010411C: jr          $ra
    // 0x80104120: addiu       $v0, $v0, 0x6BE8
    ctx->r2 = ADD32(ctx->r2, 0X6BE8);
    return;
    // 0x80104120: addiu       $v0, $v0, 0x6BE8
    ctx->r2 = ADD32(ctx->r2, 0X6BE8);
;}
RECOMP_FUNC void func_80104124(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104124: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80104128: jr          $ra
    // 0x8010412C: addiu       $v0, $v0, 0x4400
    ctx->r2 = ADD32(ctx->r2, 0X4400);
    return;
    // 0x8010412C: addiu       $v0, $v0, 0x4400
    ctx->r2 = ADD32(ctx->r2, 0X4400);
;}
RECOMP_FUNC void func_80104130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104130: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80104134: jr          $ra
    // 0x80104138: addiu       $v0, $v0, 0x6BF8
    ctx->r2 = ADD32(ctx->r2, 0X6BF8);
    return;
    // 0x80104138: addiu       $v0, $v0, 0x6BF8
    ctx->r2 = ADD32(ctx->r2, 0X6BF8);
;}
RECOMP_FUNC void func_8010413C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010413C: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80104140: jr          $ra
    // 0x80104144: addiu       $v0, $v0, 0x6D10
    ctx->r2 = ADD32(ctx->r2, 0X6D10);
    return;
    // 0x80104144: addiu       $v0, $v0, 0x6D10
    ctx->r2 = ADD32(ctx->r2, 0X6D10);
;}
RECOMP_FUNC void func_80104148(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104148: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8010414C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80104150: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80104154: addiu       $t7, $t7, 0x6D88
    ctx->r15 = ADD32(ctx->r15, 0X6D88);
    // 0x80104158: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8010415C: jr          $ra
    // 0x80104160: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
    return;
    // 0x80104160: addu        $v0, $t6, $t7
    ctx->r2 = ADD32(ctx->r14, ctx->r15);
;}
RECOMP_FUNC void func_80104170(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104170: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80104174: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80104178: jal         0x8008B4F4
    // 0x8010417C: nop

    func_8008B4F4(rdram, ctx);
        goto after_0;
    // 0x8010417C: nop

    after_0:
    // 0x80104180: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80104184: jal         0x800B3268
    // 0x80104188: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    func_800B3268(rdram, ctx);
        goto after_1;
    // 0x80104188: addiu       $a1, $zero, 0x20
    ctx->r5 = ADD32(0, 0X20);
    after_1:
    // 0x8010418C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80104190: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80104194: sw          $v0, 0x6E70($at)
    MEM_W(0X6E70, ctx->r1) = ctx->r2;
    // 0x80104198: jr          $ra
    // 0x8010419C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8010419C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801041A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801041A0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801041A4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801041A8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801041AC: jal         0x800B3248
    // 0x801041B0: lw          $a0, 0x6E70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E70);
    func_800B3248(rdram, ctx);
        goto after_0;
    // 0x801041B0: lw          $a0, 0x6E70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E70);
    after_0:
    // 0x801041B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801041B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x801041BC: sw          $zero, 0x6E70($at)
    MEM_W(0X6E70, ctx->r1) = 0;
    // 0x801041C0: jr          $ra
    // 0x801041C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x801041C4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801041C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801041C8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801041CC: lw          $a0, 0x6E70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E70);
    // 0x801041D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801041D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801041D8: beql        $a0, $zero, L_801041F4
    if (ctx->r4 == 0) {
        // 0x801041DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801041F4;
    }
    goto skip_0;
    // 0x801041DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801041E0: jal         0x800B32E4
    // 0x801041E4: nop

    func_800B32E4(rdram, ctx);
        goto after_0;
    // 0x801041E4: nop

    after_0:
    // 0x801041E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x801041EC: sw          $v0, 0x6E70($at)
    MEM_W(0X6E70, ctx->r1) = ctx->r2;
    // 0x801041F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801041F4:
    // 0x801041F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801041F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104200: sll         $a1, $a0, 16
    ctx->r5 = S32(ctx->r4 << 16);
    // 0x80104204: sra         $t6, $a1, 16
    ctx->r14 = S32(SIGNED(ctx->r5) >> 16);
    // 0x80104208: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010420C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80104210: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80104214: beq         $t6, $zero, L_80104230
    if (ctx->r14 == 0) {
        // 0x80104218: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_80104230;
    }
    // 0x80104218: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x8010421C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80104220: jal         0x800B301C
    // 0x80104224: lw          $a0, 0x6E70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E70);
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x80104224: lw          $a0, 0x6E70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E70);
    after_0:
    // 0x80104228: b           L_80104234
    // 0x8010422C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
        goto L_80104234;
    // 0x8010422C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80104230:
    // 0x80104230: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80104234:
    // 0x80104234: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80104238: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010423C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80104240: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104248: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010424C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80104250: jal         0x80104200
    // 0x80104254: lh          $a0, 0x8C($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X8C);
    func_80104200(rdram, ctx);
        goto after_0;
    // 0x80104254: lh          $a0, 0x8C($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X8C);
    after_0:
    // 0x80104258: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010425C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80104260: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104268(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104268: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010426C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80104270: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80104274: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80104278: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x8010427C: addiu       $a0, $a0, 0x6E70
    ctx->r4 = ADD32(ctx->r4, 0X6E70);
    // 0x80104280: jal         0x800B3044
    // 0x80104284: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800B3044(rdram, ctx);
        goto after_0;
    // 0x80104284: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80104288: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8010428C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80104290: jal         0x8008B518
    // 0x80104294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8008B518(rdram, ctx);
        goto after_1;
    // 0x80104294: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80104298: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8010429C: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x801042A0: sh          $t6, 0x0($t7)
    MEM_H(0X0, ctx->r15) = ctx->r14;
    // 0x801042A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801042A8: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x801042AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801042B0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801042B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801042B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801042BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801042C0: jal         0x80104268
    // 0x801042C4: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
    func_80104268(rdram, ctx);
        goto after_0;
    // 0x801042C4: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
    after_0:
    // 0x801042C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801042CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801042D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801042D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801042D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801042DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801042E0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801042E4: jal         0x80104200
    // 0x801042E8: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    func_80104200(rdram, ctx);
        goto after_0;
    // 0x801042E8: lh          $a0, 0x0($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X0);
    after_0:
    // 0x801042EC: beq         $v0, $zero, L_80104318
    if (ctx->r2 == 0) {
        // 0x801042F0: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80104318;
    }
    // 0x801042F0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801042F4: jal         0x8008B5E8
    // 0x801042F8: nop

    func_8008B5E8(rdram, ctx);
        goto after_1;
    // 0x801042F8: nop

    after_1:
    // 0x801042FC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80104300: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80104304: lw          $a0, 0x6E70($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E70);
    // 0x80104308: jal         0x800B32C0
    // 0x8010430C: lh          $a1, 0x0($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X0);
    func_800B32C0(rdram, ctx);
        goto after_2;
    // 0x8010430C: lh          $a1, 0x0($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X0);
    after_2:
    // 0x80104310: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80104314: sh          $zero, 0x0($t8)
    MEM_H(0X0, ctx->r24) = 0;
L_80104318:
    // 0x80104318: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010431C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80104320: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104328(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104328: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010432C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80104330: jal         0x801042D8
    // 0x80104334: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
    func_801042D8(rdram, ctx);
        goto after_0;
    // 0x80104334: addiu       $a0, $a0, 0x8C
    ctx->r4 = ADD32(ctx->r4, 0X8C);
    after_0:
    // 0x80104338: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010433C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80104340: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104350(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104350: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80104354: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80104358: addiu       $a0, $zero, 0x2C
    ctx->r4 = ADD32(0, 0X2C);
    // 0x8010435C: jal         0x800B3268
    // 0x80104360: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800B3268(rdram, ctx);
        goto after_0;
    // 0x80104360: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80104364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80104368: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010436C: sw          $v0, 0x6E80($at)
    MEM_W(0X6E80, ctx->r1) = ctx->r2;
    // 0x80104370: jr          $ra
    // 0x80104374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80104374: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80104378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010437C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80104380: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80104384: jal         0x800B3248
    // 0x80104388: lw          $a0, 0x6E80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E80);
    func_800B3248(rdram, ctx);
        goto after_0;
    // 0x80104388: lw          $a0, 0x6E80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E80);
    after_0:
    // 0x8010438C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80104390: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80104394: sw          $zero, 0x6E80($at)
    MEM_W(0X6E80, ctx->r1) = 0;
    // 0x80104398: jr          $ra
    // 0x8010439C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8010439C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801043A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801043A0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801043A4: lw          $a0, 0x6E80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E80);
    // 0x801043A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801043AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801043B0: beql        $a0, $zero, L_801043CC
    if (ctx->r4 == 0) {
        // 0x801043B4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801043CC;
    }
    goto skip_0;
    // 0x801043B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801043B8: jal         0x800B32E4
    // 0x801043BC: nop

    func_800B32E4(rdram, ctx);
        goto after_0;
    // 0x801043BC: nop

    after_0:
    // 0x801043C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x801043C4: sw          $v0, 0x6E80($at)
    MEM_W(0X6E80, ctx->r1) = ctx->r2;
    // 0x801043C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801043CC:
    // 0x801043CC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801043D0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801043D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801043D8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801043DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801043E0: lh          $a1, 0x8E($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X8E);
    // 0x801043E4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801043E8: bne         $a1, $zero, L_801043F8
    if (ctx->r5 != 0) {
        // 0x801043EC: nop
    
            goto L_801043F8;
    }
    // 0x801043EC: nop

    // 0x801043F0: b           L_80104400
    // 0x801043F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80104400;
    // 0x801043F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801043F8:
    // 0x801043F8: jal         0x800B301C
    // 0x801043FC: lw          $a0, 0x6E80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E80);
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x801043FC: lw          $a0, 0x6E80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E80);
    after_0:
L_80104400:
    // 0x80104400: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80104404: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80104408: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80104414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80104418: lh          $a1, 0x8E($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X8E);
    // 0x8010441C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80104420: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80104424: bne         $a1, $zero, L_80104448
    if (ctx->r5 != 0) {
        // 0x80104428: lui         $a0, 0x8013
        ctx->r4 = S32(0X8013 << 16);
            goto L_80104448;
    }
    // 0x80104428: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010442C: sb          $zero, 0x6E8B($at)
    MEM_B(0X6E8B, ctx->r1) = 0;
    // 0x80104430: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80104434: sw          $zero, 0x6EAC($at)
    MEM_W(0X6EAC, ctx->r1) = 0;
    // 0x80104438: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010443C: sb          $zero, 0x6EB0($at)
    MEM_B(0X6EB0, ctx->r1) = 0;
    // 0x80104440: b           L_80104450
    // 0x80104444: addiu       $v0, $v0, 0x6E88
    ctx->r2 = ADD32(ctx->r2, 0X6E88);
        goto L_80104450;
    // 0x80104444: addiu       $v0, $v0, 0x6E88
    ctx->r2 = ADD32(ctx->r2, 0X6E88);
L_80104448:
    // 0x80104448: jal         0x800B301C
    // 0x8010444C: lw          $a0, 0x6E80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E80);
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x8010444C: lw          $a0, 0x6E80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E80);
    after_0:
L_80104450:
    // 0x80104450: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80104454: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80104458: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104460(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104460: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80104464: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80104468: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010446C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80104470: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80104474: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x80104478: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8010447C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80104480: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80104484: sw          $zero, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = 0;
    // 0x80104488: addiu       $a0, $a0, 0x6E80
    ctx->r4 = ADD32(ctx->r4, 0X6E80);
    // 0x8010448C: jal         0x800B3044
    // 0x80104490: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_800B3044(rdram, ctx);
        goto after_0;
    // 0x80104490: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x80104494: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80104498: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x8010449C: addiu       $s3, $v0, 0x4
    ctx->r19 = ADD32(ctx->r2, 0X4);
    // 0x801044A0: sh          $t6, 0x8E($s0)
    MEM_H(0X8E, ctx->r16) = ctx->r14;
    // 0x801044A4: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x801044A8: sw          $zero, 0x24($v0)
    MEM_W(0X24, ctx->r2) = 0;
    // 0x801044AC: sb          $zero, 0x28($v0)
    MEM_B(0X28, ctx->r2) = 0;
    // 0x801044B0: addiu       $s0, $zero, 0xFF
    ctx->r16 = ADD32(0, 0XFF);
    // 0x801044B4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x801044B8: addiu       $s4, $zero, 0x12
    ctx->r20 = ADD32(0, 0X12);
L_801044BC:
    // 0x801044BC: jal         0x800EFD4C
    // 0x801044C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_800EFD4C(rdram, ctx);
        goto after_1;
    // 0x801044C0: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_1:
    // 0x801044C4: addiu       $s2, $s2, 0x6
    ctx->r18 = ADD32(ctx->r18, 0X6);
    // 0x801044C8: addiu       $s3, $s3, 0x6
    ctx->r19 = ADD32(ctx->r19, 0X6);
    // 0x801044CC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x801044D0: sb          $s0, 0x15($s1)
    MEM_B(0X15, ctx->r17) = ctx->r16;
    // 0x801044D4: sb          $s0, 0x16($s1)
    MEM_B(0X16, ctx->r17) = ctx->r16;
    // 0x801044D8: sb          $s0, 0x17($s1)
    MEM_B(0X17, ctx->r17) = ctx->r16;
    // 0x801044DC: bne         $s2, $s4, L_801044BC
    if (ctx->r18 != ctx->r20) {
        // 0x801044E0: sb          $s0, 0x14($s1)
        MEM_B(0X14, ctx->r17) = ctx->r16;
            goto L_801044BC;
    }
    // 0x801044E0: sb          $s0, 0x14($s1)
    MEM_B(0X14, ctx->r17) = ctx->r16;
    // 0x801044E4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x801044E8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801044EC: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801044F0: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801044F4: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x801044F8: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x801044FC: jr          $ra
    // 0x80104500: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80104500: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80104504(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104504: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80104508: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010450C: lh          $a1, 0x8E($a0)
    ctx->r5 = MEM_H(ctx->r4, 0X8E);
    // 0x80104510: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80104514: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80104518: beql        $a1, $zero, L_80104538
    if (ctx->r5 == 0) {
        // 0x8010451C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80104538;
    }
    goto skip_0;
    // 0x8010451C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80104520: lw          $a0, 0x6E80($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6E80);
    // 0x80104524: jal         0x800B32C0
    // 0x80104528: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800B32C0(rdram, ctx);
        goto after_0;
    // 0x80104528: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8010452C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80104530: sh          $zero, 0x8E($a2)
    MEM_H(0X8E, ctx->r6) = 0;
    // 0x80104534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80104538:
    // 0x80104538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010453C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104544(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104544: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80104548: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010454C: jal         0x801043D8
    // 0x80104550: nop

    func_801043D8(rdram, ctx);
        goto after_0;
    // 0x80104550: nop

    after_0:
    // 0x80104554: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80104558: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x8010455C: beq         $t6, $zero, L_80104570
    if (ctx->r14 == 0) {
        // 0x80104560: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80104570;
    }
    // 0x80104560: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80104564: lbu         $v0, 0x3($v1)
    ctx->r2 = MEM_BU(ctx->r3, 0X3);
    // 0x80104568: sltu        $t7, $zero, $v0
    ctx->r15 = 0 < ctx->r2 ? 1 : 0;
    // 0x8010456C: or          $v0, $t7, $zero
    ctx->r2 = ctx->r15 | 0;
L_80104570:
    // 0x80104570: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80104574: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80104578: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104580: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80104584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80104588: jal         0x801043D8
    // 0x8010458C: nop

    func_801043D8(rdram, ctx);
        goto after_0;
    // 0x8010458C: nop

    after_0:
    // 0x80104590: beql        $v0, $zero, L_801045A0
    if (ctx->r2 == 0) {
        // 0x80104594: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801045A0;
    }
    goto skip_0;
    // 0x80104594: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80104598: sb          $zero, 0x3($v0)
    MEM_B(0X3, ctx->r2) = 0;
    // 0x8010459C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_801045A0:
    // 0x801045A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801045A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_801045AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801045AC: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x801045B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801045B4: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801045B8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x801045BC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x801045C0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x801045C4: jal         0x80104410
    // 0x801045C8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    func_80104410(rdram, ctx);
        goto after_0;
    // 0x801045C8: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    after_0:
    // 0x801045CC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801045D0: jal         0x80104958
    // 0x801045D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_80104958(rdram, ctx);
        goto after_1;
    // 0x801045D4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x801045D8: jal         0x800AAAE0
    // 0x801045DC: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_800AAAE0(rdram, ctx);
        goto after_2;
    // 0x801045DC: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_2:
    // 0x801045E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801045E4: jal         0x8010486C
    // 0x801045E8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    func_8010486C(rdram, ctx);
        goto after_3;
    // 0x801045E8: lw          $a1, 0x44($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X44);
    after_3:
    // 0x801045EC: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x801045F0: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801045F4: lbu         $t0, 0x28($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X28);
    // 0x801045F8: lwc1        $f4, 0x4($a1)
    ctx->f4.u32l = MEM_W(ctx->r5, 0X4);
    // 0x801045FC: sb          $t8, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r24;
    // 0x80104600: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80104604: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80104608: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8010460C: nop

    // 0x80104610: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
    // 0x80104614: lw          $t9, 0x4C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4C);
    // 0x80104618: bne         $t0, $zero, L_80104654
    if (ctx->r8 != 0) {
        // 0x8010461C: sw          $t9, 0x24($s0)
        MEM_W(0X24, ctx->r16) = ctx->r25;
            goto L_80104654;
    }
    // 0x8010461C: sw          $t9, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r25;
    // 0x80104620: jal         0x801049B4
    // 0x80104624: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    func_801049B4(rdram, ctx);
        goto after_4;
    // 0x80104624: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x80104628: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x8010462C: jal         0x80104D80
    // 0x80104630: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80104D80(rdram, ctx);
        goto after_5;
    // 0x80104630: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_5:
    // 0x80104634: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80104638: jal         0x80104E24
    // 0x8010463C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80104E24(rdram, ctx);
        goto after_6;
    // 0x8010463C: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_6:
    // 0x80104640: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80104644: jal         0x80089CE8
    // 0x80104648: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    _subaddiefade_entrypoint_11(rdram, ctx);
        goto after_7;
    // 0x80104648: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_7:
    // 0x8010464C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80104650: sb          $t1, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r9;
L_80104654:
    // 0x80104654: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80104658: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010465C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80104660: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104668: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8010466C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80104670: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80104674: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80104678: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x8010467C: jal         0x80104544
    // 0x80104680: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_80104544(rdram, ctx);
        goto after_0;
    // 0x80104680: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x80104684: bne         $v0, $zero, L_80104694
    if (ctx->r2 != 0) {
        // 0x80104688: nop
    
            goto L_80104694;
    }
    // 0x80104688: nop

    // 0x8010468C: b           L_8010472C
    // 0x80104690: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010472C;
    // 0x80104690: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80104694:
    // 0x80104694: jal         0x801043D8
    // 0x80104698: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_801043D8(rdram, ctx);
        goto after_1;
    // 0x80104698: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_1:
    // 0x8010469C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801046A0: lw          $t6, 0x24($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X24);
    // 0x801046A4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801046A8: andi        $t7, $t6, 0x8000
    ctx->r15 = ctx->r14 & 0X8000;
    // 0x801046AC: beq         $t7, $zero, L_801046BC
    if (ctx->r15 == 0) {
        // 0x801046B0: nop
    
            goto L_801046BC;
    }
    // 0x801046B0: nop

    // 0x801046B4: b           L_8010472C
    // 0x801046B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010472C;
    // 0x801046B8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801046BC:
    // 0x801046BC: jal         0x800EE7F8
    // 0x801046C0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x801046C0: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    after_2:
    // 0x801046C4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x801046C8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x801046CC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x801046D0: lh          $t9, 0x16($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X16);
    // 0x801046D4: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x801046D8: nop

    // 0x801046DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801046E0: swc1        $f6, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f6.u32l;
    // 0x801046E4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x801046E8: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x801046EC: lwc1        $f8, 0x4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X4);
    // 0x801046F0: jal         0x800F0E00
    // 0x801046F4: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    func_800F0E00(rdram, ctx);
        goto after_3;
    // 0x801046F4: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_3:
    // 0x801046F8: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x801046FC: addiu       $a1, $sp, 0x18
    ctx->r5 = ADD32(ctx->r29, 0X18);
    // 0x80104700: swc1        $f0, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f0.u32l;
    // 0x80104704: jal         0x801048E4
    // 0x80104708: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_801048E4(rdram, ctx);
        goto after_4;
    // 0x80104708: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x8010470C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80104710: addiu       $a0, $sp, 0x18
    ctx->r4 = ADD32(ctx->r29, 0X18);
    // 0x80104714: jal         0x800F1988
    // 0x80104718: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    func_800F1988(rdram, ctx);
        goto after_5;
    // 0x80104718: addiu       $a2, $a1, 0x4
    ctx->r6 = ADD32(ctx->r5, 0X4);
    after_5:
    // 0x8010471C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80104720: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80104724: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80104728: swc1        $f16, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f16.u32l;
L_8010472C:
    // 0x8010472C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80104730: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80104734: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010473C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010473C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80104740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80104744: jal         0x801043D8
    // 0x80104748: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_801043D8(rdram, ctx);
        goto after_0;
    // 0x80104748: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x8010474C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80104750: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80104754: beql        $a1, $zero, L_8010476C
    if (ctx->r5 == 0) {
        // 0x80104758: lh          $t6, 0x16($a0)
        ctx->r14 = MEM_H(ctx->r4, 0X16);
            goto L_8010476C;
    }
    goto skip_0;
    // 0x80104758: lh          $t6, 0x16($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X16);
    skip_0:
    // 0x8010475C: jal         0x801048E4
    // 0x80104760: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_801048E4(rdram, ctx);
        goto after_1;
    // 0x80104760: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_1:
    // 0x80104764: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80104768: lh          $t6, 0x16($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X16);
L_8010476C:
    // 0x8010476C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80104770: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80104774: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80104778: jr          $ra
    // 0x8010477C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    return;
    // 0x8010477C: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
;}
RECOMP_FUNC void func_80104780(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104780: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80104784: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80104788: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010478C: jal         0x801043D8
    // 0x80104790: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_801043D8(rdram, ctx);
        goto after_0;
    // 0x80104790: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80104794: lw          $t6, 0x78($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X78);
    // 0x80104798: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8010479C: sll         $t8, $t6, 30
    ctx->r24 = S32(ctx->r14 << 30);
    // 0x801047A0: bgezl       $t8, L_8010485C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801047A4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8010485C;
    }
    goto skip_0;
    // 0x801047A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x801047A8: lw          $t9, 0x74($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X74);
    // 0x801047AC: sll         $t1, $t9, 26
    ctx->r9 = S32(ctx->r25 << 26);
    // 0x801047B0: bltzl       $t1, L_8010485C
    if (SIGNED(ctx->r9) < 0) {
        // 0x801047B4: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8010485C;
    }
    goto skip_1;
    // 0x801047B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x801047B8: lbu         $t2, 0x3($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0X3);
    // 0x801047BC: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x801047C0: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x801047C4: beql        $t2, $zero, L_8010485C
    if (ctx->r10 == 0) {
        // 0x801047C8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8010485C;
    }
    goto skip_2;
    // 0x801047C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x801047CC: jal         0x801049B4
    // 0x801047D0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    func_801049B4(rdram, ctx);
        goto after_1;
    // 0x801047D0: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    after_1:
    // 0x801047D4: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x801047D8: jal         0x80104D80
    // 0x801047DC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80104D80(rdram, ctx);
        goto after_2;
    // 0x801047DC: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_2:
    // 0x801047E0: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x801047E4: jal         0x80104E24
    // 0x801047E8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_80104E24(rdram, ctx);
        goto after_3;
    // 0x801047E8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_3:
    // 0x801047EC: lw          $t3, 0x70($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X70);
    // 0x801047F0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x801047F4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x801047F8: sll         $t5, $t3, 29
    ctx->r13 = S32(ctx->r11 << 29);
    // 0x801047FC: bgezl       $t5, L_80104824
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80104800: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80104824;
    }
    goto skip_3;
    // 0x80104800: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_3:
    // 0x80104804: lw          $t7, 0x24($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X24);
    // 0x80104808: lui         $at, 0x420
    ctx->r1 = S32(0X420 << 16);
    // 0x8010480C: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x80104810: bnel        $t8, $zero, L_80104824
    if (ctx->r24 != 0) {
        // 0x80104814: or          $v0, $s0, $zero
        ctx->r2 = ctx->r16 | 0;
            goto L_80104824;
    }
    goto skip_4;
    // 0x80104814: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    skip_4:
    // 0x80104818: jal         0x80105390
    // 0x8010481C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    func_80105390(rdram, ctx);
        goto after_4;
    // 0x8010481C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    after_4:
    // 0x80104820: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
L_80104824:
    // 0x80104824: addiu       $v1, $sp, 0x2C
    ctx->r3 = ADD32(ctx->r29, 0X2C);
    // 0x80104828: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x8010482C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
L_80104830:
    // 0x80104830: lbu         $t0, 0x98($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X98);
    // 0x80104834: lw          $t9, 0x0($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X0);
    // 0x80104838: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8010483C: multu       $t0, $a0
    result = U64(U32(ctx->r8)) * U64(U32(ctx->r4)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80104840: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80104844: mflo        $t1
    ctx->r9 = lo;
    // 0x80104848: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8010484C: sra         $t3, $t2, 2
    ctx->r11 = S32(SIGNED(ctx->r10) >> 2);
    // 0x80104850: bne         $v1, $a1, L_80104830
    if (ctx->r3 != ctx->r5) {
        // 0x80104854: sb          $t3, 0x97($v0)
        MEM_B(0X97, ctx->r2) = ctx->r11;
            goto L_80104830;
    }
    // 0x80104854: sb          $t3, 0x97($v0)
    MEM_B(0X97, ctx->r2) = ctx->r11;
    // 0x80104858: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8010485C:
    // 0x8010485C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80104860: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80104864: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010486C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010486C: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80104870: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80104874: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80104878: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x8010487C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80104880: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80104884: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x80104888: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8010488C: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80104890: beql        $v0, $a0, L_801048C8
    if (ctx->r2 == ctx->r4) {
        // 0x80104894: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_801048C8;
    }
    goto skip_0;
    // 0x80104894: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_0:
    // 0x80104898: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_8010489C:
    // 0x8010489C: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x801048A0: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801048A4: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x801048A8: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x801048AC: nop

    // 0x801048B0: sb          $t7, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r15;
    // 0x801048B4: lwc1        $f16, 0x0($a2)
    ctx->f16.u32l = MEM_W(ctx->r6, 0X0);
    // 0x801048B8: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x801048BC: bnel        $v0, $a0, L_8010489C
    if (ctx->r2 != ctx->r4) {
        // 0x801048C0: trunc.w.s   $f16, $f18
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
            goto L_8010489C;
    }
    goto skip_1;
    // 0x801048C0: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
    skip_1:
    // 0x801048C4: trunc.w.s   $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    ctx->f16.u32l = TRUNC_W_S(ctx->f18.fl);
L_801048C8:
    // 0x801048C8: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x801048CC: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x801048D0: mfc1        $t7, $f16
    ctx->r15 = (int32_t)ctx->f16.u32l;
    // 0x801048D4: nop

    // 0x801048D8: sb          $t7, -0x1($v1)
    MEM_B(-0X1, ctx->r3) = ctx->r15;
    // 0x801048DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801048E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801048E4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801048E8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x801048EC: lwc1        $f0, 0x6440($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6440);
    // 0x801048F0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x801048F4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801048F8: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x801048FC: lb          $t6, 0x0($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X0);
    // 0x80104900: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80104904: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80104908: nop

    // 0x8010490C: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80104910: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x80104914: beql        $v0, $a0, L_80104948
    if (ctx->r2 == ctx->r4) {
        // 0x80104918: addiu       $v1, $v1, 0x4
        ctx->r3 = ADD32(ctx->r3, 0X4);
            goto L_80104948;
    }
    goto skip_0;
    // 0x80104918: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    skip_0:
    // 0x8010491C: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
L_80104920:
    // 0x80104920: lb          $t6, 0x1($a2)
    ctx->r14 = MEM_B(ctx->r6, 0X1);
    // 0x80104924: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80104928: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x8010492C: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80104930: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x80104934: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80104938: mul.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f0.fl);
    // 0x8010493C: bnel        $v0, $a0, L_80104920
    if (ctx->r2 != ctx->r4) {
        // 0x80104940: swc1        $f18, 0x0($v1)
        MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
            goto L_80104920;
    }
    goto skip_1;
    // 0x80104940: swc1        $f18, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f18.u32l;
    skip_1:
    // 0x80104944: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
L_80104948:
    // 0x80104948: addiu       $a2, $a2, 0x1
    ctx->r6 = ADD32(ctx->r6, 0X1);
    // 0x8010494C: swc1        $f18, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->f18.u32l;
    // 0x80104950: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104958(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104958: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8010495C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80104960: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80104964: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80104968: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8010496C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80104970: jal         0x800AAD28
    // 0x80104974: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    func_800AAD28(rdram, ctx);
        goto after_0;
    // 0x80104974: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    after_0:
    // 0x80104978: addiu       $s1, $s2, 0x4
    ctx->r17 = ADD32(ctx->r18, 0X4);
    // 0x8010497C: addiu       $s2, $sp, 0x58
    ctx->r18 = ADD32(ctx->r29, 0X58);
    // 0x80104980: addiu       $s0, $sp, 0x34
    ctx->r16 = ADD32(ctx->r29, 0X34);
L_80104984:
    // 0x80104984: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80104988: jal         0x800EE940
    // 0x8010498C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE940(rdram, ctx);
        goto after_1;
    // 0x8010498C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80104990: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x80104994: bne         $s0, $s2, L_80104984
    if (ctx->r16 != ctx->r18) {
        // 0x80104998: addiu       $s1, $s1, 0x6
        ctx->r17 = ADD32(ctx->r17, 0X6);
            goto L_80104984;
    }
    // 0x80104998: addiu       $s1, $s1, 0x6
    ctx->r17 = ADD32(ctx->r17, 0X6);
    // 0x8010499C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801049A0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801049A4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801049A8: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801049AC: jr          $ra
    // 0x801049B0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x801049B0: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
RECOMP_FUNC void func_801049B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801049B4: addiu       $sp, $sp, -0x120
    ctx->r29 = ADD32(ctx->r29, -0X120);
    // 0x801049B8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x801049BC: sw          $s3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r19;
    // 0x801049C0: sw          $s2, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r18;
    // 0x801049C4: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x801049C8: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x801049CC: sdc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X10, ctx->r29);
    // 0x801049D0: sw          $a0, 0x120($sp)
    MEM_W(0X120, ctx->r29) = ctx->r4;
    // 0x801049D4: lw          $t7, 0x24($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X24);
    // 0x801049D8: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x801049DC: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801049E0: sll         $t8, $t7, 10
    ctx->r24 = S32(ctx->r15 << 10);
    // 0x801049E4: bgez        $t8, L_80104A00
    if (SIGNED(ctx->r24) >= 0) {
        // 0x801049E8: addiu       $a2, $zero, 0xFF
        ctx->r6 = ADD32(0, 0XFF);
            goto L_80104A00;
    }
    // 0x801049E8: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x801049EC: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x801049F0: jal         0x800EFA88
    // 0x801049F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_800EFA88(rdram, ctx);
        goto after_0;
    // 0x801049F4: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_0:
    // 0x801049F8: b           L_80104D64
    // 0x801049FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80104D64;
    // 0x801049FC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80104A00:
    // 0x80104A00: jal         0x800EE7F8
    // 0x80104A04: addiu       $a0, $sp, 0x114
    ctx->r4 = ADD32(ctx->r29, 0X114);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80104A04: addiu       $a0, $sp, 0x114
    ctx->r4 = ADD32(ctx->r29, 0X114);
    after_1:
    // 0x80104A08: lw          $a3, 0x120($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X120);
    // 0x80104A0C: addiu       $s1, $sp, 0x7C
    ctx->r17 = ADD32(ctx->r29, 0X7C);
    // 0x80104A10: addiu       $a2, $sp, 0xA4
    ctx->r6 = ADD32(ctx->r29, 0XA4);
    // 0x80104A14: addiu       $s0, $zero, 0x3
    ctx->r16 = ADD32(0, 0X3);
    // 0x80104A18: addiu       $s2, $a3, 0x4
    ctx->r18 = ADD32(ctx->r7, 0X4);
L_80104A1C:
    // 0x80104A1C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80104A20: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80104A24: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    // 0x80104A28: jal         0x800EE88C
    // 0x80104A2C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_800EE88C(rdram, ctx);
        goto after_2;
    // 0x80104A2C: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_2:
    // 0x80104A30: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x80104A34: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x80104A38: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80104A3C: or          $v1, $a2, $zero
    ctx->r3 = ctx->r6 | 0;
    // 0x80104A40: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
L_80104A44:
    // 0x80104A44: lbu         $t9, 0x18($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X18);
    // 0x80104A48: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80104A4C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80104A50: addiu       $a0, $a0, 0x1
    ctx->r4 = ADD32(ctx->r4, 0X1);
    // 0x80104A54: bne         $v0, $s0, L_80104A44
    if (ctx->r2 != ctx->r16) {
        // 0x80104A58: sw          $t9, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r25;
            goto L_80104A44;
    }
    // 0x80104A58: sw          $t9, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r25;
    // 0x80104A5C: addiu       $a2, $a2, 0xC
    ctx->r6 = ADD32(ctx->r6, 0XC);
    // 0x80104A60: addiu       $t0, $sp, 0xC8
    ctx->r8 = ADD32(ctx->r29, 0XC8);
    // 0x80104A64: sltu        $at, $a2, $t0
    ctx->r1 = ctx->r6 < ctx->r8 ? 1 : 0;
    // 0x80104A68: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    // 0x80104A6C: addiu       $s2, $s2, 0x6
    ctx->r18 = ADD32(ctx->r18, 0X6);
    // 0x80104A70: bne         $at, $zero, L_80104A1C
    if (ctx->r1 != 0) {
        // 0x80104A74: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_80104A1C;
    }
    // 0x80104A74: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80104A78: addiu       $s0, $sp, 0xA4
    ctx->r16 = ADD32(ctx->r29, 0XA4);
    // 0x80104A7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80104A80: jal         0x800F36D4
    // 0x80104A84: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    func_800F36D4(rdram, ctx);
        goto after_3;
    // 0x80104A84: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    after_3:
    // 0x80104A88: beq         $v0, $zero, L_80104AB0
    if (ctx->r2 == 0) {
        // 0x80104A8C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80104AB0;
    }
    // 0x80104A8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80104A90: jal         0x800F36D4
    // 0x80104A94: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    func_800F36D4(rdram, ctx);
        goto after_4;
    // 0x80104A94: addiu       $a1, $sp, 0xBC
    ctx->r5 = ADD32(ctx->r29, 0XBC);
    after_4:
    // 0x80104A98: beq         $v0, $zero, L_80104AB0
    if (ctx->r2 == 0) {
        // 0x80104A9C: or          $a0, $s3, $zero
        ctx->r4 = ctx->r19 | 0;
            goto L_80104AB0;
    }
    // 0x80104A9C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80104AA0: jal         0x800EE830
    // 0x80104AA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE830(rdram, ctx);
        goto after_5;
    // 0x80104AA4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_5:
    // 0x80104AA8: b           L_80104D64
    // 0x80104AAC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
        goto L_80104D64;
    // 0x80104AAC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80104AB0:
    // 0x80104AB0: addiu       $s2, $sp, 0x7C
    ctx->r18 = ADD32(ctx->r29, 0X7C);
    // 0x80104AB4: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    // 0x80104AB8: addiu       $a0, $sp, 0x108
    ctx->r4 = ADD32(ctx->r29, 0X108);
    // 0x80104ABC: jal         0x800EFB24
    // 0x80104AC0: addiu       $a1, $sp, 0x114
    ctx->r5 = ADD32(ctx->r29, 0X114);
    func_800EFB24(rdram, ctx);
        goto after_6;
    // 0x80104AC0: addiu       $a1, $sp, 0x114
    ctx->r5 = ADD32(ctx->r29, 0X114);
    after_6:
    // 0x80104AC4: addiu       $s1, $sp, 0x88
    ctx->r17 = ADD32(ctx->r29, 0X88);
    // 0x80104AC8: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    // 0x80104ACC: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x80104AD0: jal         0x800EFB24
    // 0x80104AD4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    func_800EFB24(rdram, ctx);
        goto after_7;
    // 0x80104AD4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_7:
    // 0x80104AD8: addiu       $s0, $sp, 0x64
    ctx->r16 = ADD32(ctx->r29, 0X64);
    // 0x80104ADC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80104AE0: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    // 0x80104AE4: jal         0x800EFB24
    // 0x80104AE8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800EFB24(rdram, ctx);
        goto after_8;
    // 0x80104AE8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_8:
    // 0x80104AEC: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x80104AF0: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x80104AF4: jal         0x800EFB24
    // 0x80104AF8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800EFB24(rdram, ctx);
        goto after_9;
    // 0x80104AF8: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_9:
    // 0x80104AFC: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x80104B00: addiu       $a1, $sp, 0x94
    ctx->r5 = ADD32(ctx->r29, 0X94);
    // 0x80104B04: jal         0x800EFB24
    // 0x80104B08: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800EFB24(rdram, ctx);
        goto after_10;
    // 0x80104B08: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_10:
    // 0x80104B0C: addiu       $a0, $sp, 0x70
    ctx->r4 = ADD32(ctx->r29, 0X70);
    // 0x80104B10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80104B14: jal         0x800EE97C
    // 0x80104B18: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    func_800EE97C(rdram, ctx);
        goto after_11;
    // 0x80104B18: addiu       $a2, $sp, 0x58
    ctx->r6 = ADD32(ctx->r29, 0X58);
    after_11:
    // 0x80104B1C: addiu       $s0, $sp, 0xE0
    ctx->r16 = ADD32(ctx->r29, 0XE0);
    // 0x80104B20: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80104B24: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80104B28: jal         0x800EE97C
    // 0x80104B2C: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    func_800EE97C(rdram, ctx);
        goto after_12;
    // 0x80104B2C: addiu       $a2, $sp, 0x70
    ctx->r6 = ADD32(ctx->r29, 0X70);
    after_12:
    // 0x80104B30: addiu       $a0, $sp, 0x108
    ctx->r4 = ADD32(ctx->r29, 0X108);
    // 0x80104B34: jal         0x800EEAA4
    // 0x80104B38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EEAA4(rdram, ctx);
        goto after_13;
    // 0x80104B38: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_13:
    // 0x80104B3C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80104B40: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    // 0x80104B44: addiu       $a0, $sp, 0xD4
    ctx->r4 = ADD32(ctx->r29, 0XD4);
    // 0x80104B48: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80104B4C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80104B50: bc1f        L_80104B5C
    if (!c1cs) {
        // 0x80104B54: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_80104B5C;
    }
    // 0x80104B54: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80104B58: lwc1        $f12, 0x6444($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6444);
L_80104B5C:
    // 0x80104B5C: jal         0x800EEAA4
    // 0x80104B60: swc1        $f12, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f12.u32l;
    func_800EEAA4(rdram, ctx);
        goto after_14;
    // 0x80104B60: swc1        $f12, 0xF8($sp)
    MEM_W(0XF8, ctx->r29) = ctx->f12.u32l;
    after_14:
    // 0x80104B64: lwc1        $f12, 0xF8($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XF8);
    // 0x80104B68: neg.s       $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = -ctx->f0.fl;
    // 0x80104B6C: lwc1        $f8, 0x108($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X108);
    // 0x80104B70: div.s       $f2, $f6, $f12
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f2.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80104B74: lwc1        $f4, 0x110($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X110);
    // 0x80104B78: lwc1        $f16, 0x7C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X7C);
    // 0x80104B7C: addiu       $a0, $sp, 0xC8
    ctx->r4 = ADD32(ctx->r29, 0XC8);
    // 0x80104B80: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80104B84: mul.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80104B88: lwc1        $f8, 0x84($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X84);
    // 0x80104B8C: mul.s       $f6, $f4, $f2
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f2.fl);
    // 0x80104B90: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80104B94: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80104B98: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x80104B9C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80104BA0: jal         0x800EFA4C
    // 0x80104BA4: nop

    func_800EFA4C(rdram, ctx);
        goto after_15;
    // 0x80104BA4: nop

    after_15:
    // 0x80104BA8: addiu       $a0, $sp, 0xFC
    ctx->r4 = ADD32(ctx->r29, 0XFC);
    // 0x80104BAC: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    // 0x80104BB0: jal         0x800EFB24
    // 0x80104BB4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800EFB24(rdram, ctx);
        goto after_16;
    // 0x80104BB4: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_16:
    // 0x80104BB8: addiu       $s1, $sp, 0xFC
    ctx->r17 = ADD32(ctx->r29, 0XFC);
    // 0x80104BBC: jal         0x800EEF94
    // 0x80104BC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EEF94(rdram, ctx);
        goto after_17;
    // 0x80104BC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_17:
    // 0x80104BC4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80104BC8: jal         0x800EEF94
    // 0x80104BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EEF94(rdram, ctx);
        goto after_18;
    // 0x80104BCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_18:
    // 0x80104BD0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80104BD4: lwc1        $f16, 0x6448($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6448);
    // 0x80104BD8: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x80104BDC: addiu       $v0, $sp, 0xA4
    ctx->r2 = ADD32(ctx->r29, 0XA4);
    // 0x80104BE0: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x80104BE4: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x80104BE8: div.s       $f2, $f20, $f18
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f2.fl = DIV_S(ctx->f20.fl, ctx->f18.fl);
    // 0x80104BEC: lw          $a0, 0xC($v0)
    ctx->r4 = MEM_W(ctx->r2, 0XC);
    // 0x80104BF0: lw          $t1, 0x18($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X18);
    // 0x80104BF4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80104BF8: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x80104BFC: beq         $at, $zero, L_80104C48
    if (ctx->r1 == 0) {
        // 0x80104C00: subu        $t2, $t1, $a0
        ctx->r10 = SUB32(ctx->r9, ctx->r4);
            goto L_80104C48;
    }
    // 0x80104C00: subu        $t2, $t1, $a0
    ctx->r10 = SUB32(ctx->r9, ctx->r4);
L_80104C04:
    // 0x80104C04: mtc1        $t2, $f20
    ctx->f20.u32l = ctx->r10;
    // 0x80104C08: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    // 0x80104C0C: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80104C10: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x80104C14: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x80104C18: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80104C1C: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80104C20: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80104C24: add.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x80104C28: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80104C2C: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x80104C30: nop

    // 0x80104C34: sw          $t4, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r12;
    // 0x80104C38: lw          $a0, 0x8($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X8);
    // 0x80104C3C: lw          $t1, 0x14($v0)
    ctx->r9 = MEM_W(ctx->r2, 0X14);
    // 0x80104C40: bne         $at, $zero, L_80104C04
    if (ctx->r1 != 0) {
        // 0x80104C44: subu        $t2, $t1, $a0
        ctx->r10 = SUB32(ctx->r9, ctx->r4);
            goto L_80104C04;
    }
    // 0x80104C44: subu        $t2, $t1, $a0
    ctx->r10 = SUB32(ctx->r9, ctx->r4);
L_80104C48:
    // 0x80104C48: mtc1        $t2, $f20
    ctx->f20.u32l = ctx->r10;
    // 0x80104C4C: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    // 0x80104C50: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80104C54: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x80104C58: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80104C5C: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80104C60: add.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x80104C64: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80104C68: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x80104C6C: nop

    // 0x80104C70: sw          $t4, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r12;
    // 0x80104C74: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80104C78: addiu       $a1, $sp, 0xC8
    ctx->r5 = ADD32(ctx->r29, 0XC8);
    // 0x80104C7C: jal         0x800EFB24
    // 0x80104C80: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    func_800EFB24(rdram, ctx);
        goto after_19;
    // 0x80104C80: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_19:
    // 0x80104C84: jal         0x800EEF94
    // 0x80104C88: addiu       $a0, $sp, 0x108
    ctx->r4 = ADD32(ctx->r29, 0X108);
    func_800EEF94(rdram, ctx);
        goto after_20;
    // 0x80104C88: addiu       $a0, $sp, 0x108
    ctx->r4 = ADD32(ctx->r29, 0X108);
    after_20:
    // 0x80104C8C: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80104C90: jal         0x800EEF94
    // 0x80104C94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EEF94(rdram, ctx);
        goto after_21;
    // 0x80104C94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_21:
    // 0x80104C98: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80104C9C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80104CA0: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80104CA4: lwc1        $f10, 0x644C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X644C);
    // 0x80104CA8: or          $v1, $s3, $zero
    ctx->r3 = ctx->r19 | 0;
    // 0x80104CAC: addiu       $v0, $sp, 0xA4
    ctx->r2 = ADD32(ctx->r29, 0XA4);
    // 0x80104CB0: add.s       $f8, $f0, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f0.fl + ctx->f10.fl;
    // 0x80104CB4: addiu       $a1, $sp, 0xB0
    ctx->r5 = ADD32(ctx->r29, 0XB0);
    // 0x80104CB8: div.s       $f16, $f20, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = DIV_S(ctx->f20.fl, ctx->f8.fl);
    // 0x80104CBC: sub.s       $f2, $f6, $f16
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f2.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80104CC0: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80104CC4: lw          $t5, 0x0($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X0);
    // 0x80104CC8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80104CCC: beq         $v0, $a1, L_80104D14
    if (ctx->r2 == ctx->r5) {
        // 0x80104CD0: subu        $t6, $t5, $a0
        ctx->r14 = SUB32(ctx->r13, ctx->r4);
            goto L_80104D14;
    }
    // 0x80104CD0: subu        $t6, $t5, $a0
    ctx->r14 = SUB32(ctx->r13, ctx->r4);
L_80104CD4:
    // 0x80104CD4: mtc1        $t6, $f20
    ctx->f20.u32l = ctx->r14;
    // 0x80104CD8: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    // 0x80104CDC: lw          $a0, 0x4($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X4);
    // 0x80104CE0: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x80104CE4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80104CE8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80104CEC: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80104CF0: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80104CF4: add.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x80104CF8: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80104CFC: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80104D00: nop

    // 0x80104D04: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x80104D08: lw          $t5, -0x4($v0)
    ctx->r13 = MEM_W(ctx->r2, -0X4);
    // 0x80104D0C: bne         $v0, $a1, L_80104CD4
    if (ctx->r2 != ctx->r5) {
        // 0x80104D10: subu        $t6, $t5, $a0
        ctx->r14 = SUB32(ctx->r13, ctx->r4);
            goto L_80104CD4;
    }
    // 0x80104D10: subu        $t6, $t5, $a0
    ctx->r14 = SUB32(ctx->r13, ctx->r4);
L_80104D14:
    // 0x80104D14: mtc1        $t6, $f20
    ctx->f20.u32l = ctx->r14;
    // 0x80104D18: mtc1        $a0, $f18
    ctx->f18.u32l = ctx->r4;
    // 0x80104D1C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80104D20: cvt.s.w     $f20, $f20
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    ctx->f20.fl = CVT_S_W(ctx->f20.u32l);
    // 0x80104D24: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80104D28: mul.s       $f20, $f20, $f2
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f20.fl = MUL_S(ctx->f20.fl, ctx->f2.fl);
    // 0x80104D2C: add.s       $f18, $f20, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f18.fl = ctx->f20.fl + ctx->f18.fl;
    // 0x80104D30: trunc.w.s   $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.u32l = TRUNC_W_S(ctx->f18.fl);
    // 0x80104D34: mfc1        $t8, $f18
    ctx->r24 = (int32_t)ctx->f18.u32l;
    // 0x80104D38: nop

    // 0x80104D3C: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x80104D40: lw          $t9, 0x120($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X120);
    // 0x80104D44: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80104D48: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x80104D4C: sll         $t1, $t0, 5
    ctx->r9 = S32(ctx->r8 << 5);
    // 0x80104D50: bgezl       $t1, L_80104D64
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80104D54: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_80104D64;
    }
    goto skip_0;
    // 0x80104D54: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x80104D58: jal         0x80105390
    // 0x80104D5C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_80105390(rdram, ctx);
        goto after_22;
    // 0x80104D5C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_22:
    // 0x80104D60: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_80104D64:
    // 0x80104D64: ldc1        $f20, 0x10($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X10);
    // 0x80104D68: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80104D6C: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80104D70: lw          $s2, 0x24($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X24);
    // 0x80104D74: lw          $s3, 0x28($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X28);
    // 0x80104D78: jr          $ra
    // 0x80104D7C: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
    return;
    // 0x80104D7C: addiu       $sp, $sp, 0x120
    ctx->r29 = ADD32(ctx->r29, 0X120);
;}
RECOMP_FUNC void func_80104D80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104D80: mtc1        $a1, $f4
    ctx->f4.u32l = ctx->r5;
    // 0x80104D84: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80104D88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80104D8C: cvt.s.w     $f2, $f4
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 4);
    ctx->f2.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80104D90: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x80104D94: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80104D98: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80104D9C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80104DA0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80104DA4: mul.s       $f10, $f2, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f2.fl, ctx->f8.fl);
    // 0x80104DA8: sub.s       $f0, $f6, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f0.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x80104DAC: lw          $t6, 0x0($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X0);
    // 0x80104DB0: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80104DB4: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x80104DB8: nop

    // 0x80104DBC: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x80104DC0: mul.s       $f18, $f14, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80104DC4: beql        $v0, $a0, L_80104E08
    if (ctx->r2 == ctx->r4) {
        // 0x80104DC8: add.s       $f16, $f18, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f2.fl;
            goto L_80104E08;
    }
    goto skip_0;
    // 0x80104DC8: add.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f2.fl;
    skip_0:
    // 0x80104DCC: add.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f2.fl;
L_80104DD0:
    // 0x80104DD0: lw          $t6, 0x4($v1)
    ctx->r14 = MEM_W(ctx->r3, 0X4);
    // 0x80104DD4: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80104DD8: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80104DDC: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80104DE0: mtc1        $t6, $f14
    ctx->f14.u32l = ctx->r14;
    // 0x80104DE4: nop

    // 0x80104DE8: cvt.s.w     $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    ctx->f14.fl = CVT_S_W(ctx->f14.u32l);
    // 0x80104DEC: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x80104DF0: nop

    // 0x80104DF4: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x80104DF8: mul.s       $f18, $f14, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = MUL_S(ctx->f14.fl, ctx->f0.fl);
    // 0x80104DFC: bnel        $v0, $a0, L_80104DD0
    if (ctx->r2 != ctx->r4) {
        // 0x80104E00: add.s       $f16, $f18, $f2
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f2.fl;
            goto L_80104DD0;
    }
    goto skip_1;
    // 0x80104E00: add.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f2.fl;
    skip_1:
    // 0x80104E04: add.s       $f16, $f18, $f2
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f16.fl = ctx->f18.fl + ctx->f2.fl;
L_80104E08:
    // 0x80104E08: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80104E0C: trunc.w.s   $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = TRUNC_W_S(ctx->f16.fl);
    // 0x80104E10: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x80104E14: nop

    // 0x80104E18: sw          $t8, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r24;
    // 0x80104E1C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104E24(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104E24: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80104E28: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80104E2C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80104E30: addiu       $a0, $zero, 0xC
    ctx->r4 = ADD32(0, 0XC);
    // 0x80104E34: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80104E38:
    // 0x80104E38: lw          $v0, 0x0($a2)
    ctx->r2 = MEM_W(ctx->r6, 0X0);
    // 0x80104E3C: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80104E40: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80104E44: bgez        $v0, L_80104E54
    if (SIGNED(ctx->r2) >= 0) {
        // 0x80104E48: slti        $at, $v0, 0x100
        ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
            goto L_80104E54;
    }
    // 0x80104E48: slti        $at, $v0, 0x100
    ctx->r1 = SIGNED(ctx->r2) < 0X100 ? 1 : 0;
    // 0x80104E4C: b           L_80104E68
    // 0x80104E50: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
        goto L_80104E68;
    // 0x80104E50: sw          $zero, 0x0($a3)
    MEM_W(0X0, ctx->r7) = 0;
L_80104E54:
    // 0x80104E54: bnel        $at, $zero, L_80104E68
    if (ctx->r1 != 0) {
        // 0x80104E58: sw          $v0, 0x0($a3)
        MEM_W(0X0, ctx->r7) = ctx->r2;
            goto L_80104E68;
    }
    goto skip_0;
    // 0x80104E58: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
    skip_0:
    // 0x80104E5C: b           L_80104E68
    // 0x80104E60: sw          $a1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r5;
        goto L_80104E68;
    // 0x80104E60: sw          $a1, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r5;
    // 0x80104E64: sw          $v0, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r2;
L_80104E68:
    // 0x80104E68: bne         $v1, $a0, L_80104E38
    if (ctx->r3 != ctx->r4) {
        // 0x80104E6C: addiu       $a3, $a3, 0x4
        ctx->r7 = ADD32(ctx->r7, 0X4);
            goto L_80104E38;
    }
    // 0x80104E6C: addiu       $a3, $a3, 0x4
    ctx->r7 = ADD32(ctx->r7, 0X4);
    // 0x80104E70: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104E78(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104E78: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80104E7C: sw          $a0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r4;
    // 0x80104E80: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80104E84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80104E88: addiu       $a0, $sp, 0x3C
    ctx->r4 = ADD32(ctx->r29, 0X3C);
    // 0x80104E8C: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80104E90: jal         0x800EE7F8
    // 0x80104E94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80104E94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80104E98: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80104E9C: jal         0x800EE7F8
    // 0x80104EA0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80104EA0: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    after_1:
    // 0x80104EA4: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80104EA8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80104EAC: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80104EB0: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80104EB4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80104EB8: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80104EBC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80104EC0: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80104EC4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x80104EC8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80104ECC: swc1        $f8, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f8.u32l;
    // 0x80104ED0: addiu       $a1, $sp, 0x3C
    ctx->r5 = ADD32(ctx->r29, 0X3C);
    // 0x80104ED4: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80104ED8: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    // 0x80104EDC: jal         0x800BEF00
    // 0x80104EE0: lw          $a3, 0x14($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X14);
    func_800BEF00(rdram, ctx);
        goto after_2;
    // 0x80104EE0: lw          $a3, 0x14($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X14);
    after_2:
    // 0x80104EE4: beq         $v0, $zero, L_80104F08
    if (ctx->r2 == 0) {
        // 0x80104EE8: lw          $a0, 0x48($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X48);
            goto L_80104F08;
    }
    // 0x80104EE8: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80104EEC: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80104EF0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80104EF4: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x80104EF8: jal         0x801045AC
    // 0x80104EFC: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    func_801045AC(rdram, ctx);
        goto after_3;
    // 0x80104EFC: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    after_3:
    // 0x80104F00: b           L_80104F1C
    // 0x80104F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80104F1C;
    // 0x80104F04: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80104F08:
    // 0x80104F08: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80104F0C: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80104F10: jal         0x80089CF0
    // 0x80104F14: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    _subaddiefade_entrypoint_12(rdram, ctx);
        goto after_4;
    // 0x80104F14: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_4:
    // 0x80104F18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80104F1C:
    // 0x80104F1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80104F20: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x80104F24: jr          $ra
    return;
;}
RECOMP_FUNC void func_80104F2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80104F2C: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80104F30: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80104F34: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80104F38: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80104F3C: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80104F40: bne         $a1, $zero, L_80104F4C
    if (ctx->r5 != 0) {
        // 0x80104F44: sw          $a2, 0x60($sp)
        MEM_W(0X60, ctx->r29) = ctx->r6;
            goto L_80104F4C;
    }
    // 0x80104F44: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x80104F48: beq         $a2, $zero, L_80104FFC
    if (ctx->r6 == 0) {
        // 0x80104F4C: addiu       $a1, $s0, 0x4
        ctx->r5 = ADD32(ctx->r16, 0X4);
            goto L_80104FFC;
    }
L_80104F4C:
    // 0x80104F4C: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80104F50: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80104F54: jal         0x800EE7F8
    // 0x80104F58: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    func_800EE7F8(rdram, ctx);
        goto after_0;
    // 0x80104F58: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_0:
    // 0x80104F5C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80104F60: jal         0x800EE7F8
    // 0x80104F64: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80104F64: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    after_1:
    // 0x80104F68: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80104F6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80104F70: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80104F74: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80104F78: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80104F7C: lwc1        $f10, 0x44($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80104F80: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80104F84: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80104F88: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80104F8C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80104F90: swc1        $f8, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->f8.u32l;
    // 0x80104F94: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80104F98: swc1        $f18, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f18.u32l;
    // 0x80104F9C: jal         0x800BEF00
    // 0x80104FA0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    func_800BEF00(rdram, ctx);
        goto after_2;
    // 0x80104FA0: lw          $a3, 0x14($s0)
    ctx->r7 = MEM_W(ctx->r16, 0X14);
    after_2:
    // 0x80104FA4: beq         $v0, $zero, L_80104FFC
    if (ctx->r2 == 0) {
        // 0x80104FA8: lw          $t8, 0x5C($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X5C);
            goto L_80104FFC;
    }
    // 0x80104FA8: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80104FAC: beq         $t8, $zero, L_80104FC4
    if (ctx->r24 == 0) {
        // 0x80104FB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80104FC4;
    }
    // 0x80104FB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80104FB4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80104FB8: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x80104FBC: jal         0x801045AC
    // 0x80104FC0: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    func_801045AC(rdram, ctx);
        goto after_3;
    // 0x80104FC0: lw          $a3, 0x8($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X8);
    after_3:
L_80104FC4:
    // 0x80104FC4: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x80104FC8: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x80104FCC: addiu       $a0, $sp, 0x24
    ctx->r4 = ADD32(ctx->r29, 0X24);
    // 0x80104FD0: beq         $t9, $zero, L_80104FFC
    if (ctx->r25 == 0) {
        // 0x80104FD4: addiu       $a1, $sp, 0x34
        ctx->r5 = ADD32(ctx->r29, 0X34);
            goto L_80104FFC;
    }
    // 0x80104FD4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80104FD8: swc1        $f4, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->f4.u32l;
    // 0x80104FDC: lw          $a2, 0x48($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X48);
    // 0x80104FE0: jal         0x800F1B78
    // 0x80104FE4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    func_800F1B78(rdram, ctx);
        goto after_4;
    // 0x80104FE4: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    after_4:
    // 0x80104FE8: beq         $v0, $zero, L_80104FFC
    if (ctx->r2 == 0) {
        // 0x80104FEC: lwc1        $f6, 0x24($sp)
        ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
            goto L_80104FFC;
    }
    // 0x80104FEC: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80104FF0: swc1        $f6, 0x44($s0)
    MEM_W(0X44, ctx->r16) = ctx->f6.u32l;
    // 0x80104FF4: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80104FF8: swc1        $f8, 0x4C($s0)
    MEM_W(0X4C, ctx->r16) = ctx->f8.u32l;
L_80104FFC:
    // 0x80104FFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80105000: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80105004: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80105008: jr          $ra
    return;
;}
RECOMP_FUNC void func_80105010(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105010: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80105014: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80105018: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8010501C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80105020: jal         0x80104410
    // 0x80105024: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    func_80104410(rdram, ctx);
        goto after_0;
    // 0x80105024: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    after_0:
    // 0x80105028: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x8010502C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80105030: sw          $a1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r5;
    // 0x80105034: jal         0x800EE7F8
    // 0x80105038: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80105038: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    after_1:
    // 0x8010503C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x80105040: jal         0x800EE7F8
    // 0x80105044: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x80105044: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    after_2:
    // 0x80105048: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x8010504C: lw          $a1, 0x48($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X48);
    // 0x80105050: jal         0x800EF1B8
    // 0x80105054: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    func_800EF1B8(rdram, ctx);
        goto after_3;
    // 0x80105054: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    after_3:
    // 0x80105058: addiu       $a0, $sp, 0x4C
    ctx->r4 = ADD32(ctx->r29, 0X4C);
    // 0x8010505C: lw          $a1, 0x48($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X48);
    // 0x80105060: jal         0x800EF1B8
    // 0x80105064: lui         $a2, 0xC2A0
    ctx->r6 = S32(0XC2A0 << 16);
    func_800EF1B8(rdram, ctx);
        goto after_4;
    // 0x80105064: lui         $a2, 0xC2A0
    ctx->r6 = S32(0XC2A0 << 16);
    after_4:
    // 0x80105068: addiu       $a0, $sp, 0x58
    ctx->r4 = ADD32(ctx->r29, 0X58);
    // 0x8010506C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80105070: addiu       $a2, $sp, 0x40
    ctx->r6 = ADD32(ctx->r29, 0X40);
    // 0x80105074: jal         0x800BEF00
    // 0x80105078: lw          $a3, 0x14($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X14);
    func_800BEF00(rdram, ctx);
        goto after_5;
    // 0x80105078: lw          $a3, 0x14($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X14);
    after_5:
    // 0x8010507C: beq         $v0, $zero, L_8010510C
    if (ctx->r2 == 0) {
        // 0x80105080: sw          $v0, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r2;
            goto L_8010510C;
    }
    // 0x80105080: sw          $v0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r2;
    // 0x80105084: jal         0x80104958
    // 0x80105088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80104958(rdram, ctx);
        goto after_6;
    // 0x80105088: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8010508C: jal         0x800AAAE0
    // 0x80105090: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    func_800AAAE0(rdram, ctx);
        goto after_7;
    // 0x80105090: addiu       $a0, $s0, 0x18
    ctx->r4 = ADD32(ctx->r16, 0X18);
    after_7:
    // 0x80105094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80105098: jal         0x8010486C
    // 0x8010509C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    func_8010486C(rdram, ctx);
        goto after_8;
    // 0x8010509C: addiu       $a1, $sp, 0x40
    ctx->r5 = ADD32(ctx->r29, 0X40);
    after_8:
    // 0x801050A0: lwc1        $f4, 0x50($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X50);
    // 0x801050A4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x801050A8: sb          $t8, 0x3($s0)
    MEM_B(0X3, ctx->r16) = ctx->r24;
    // 0x801050AC: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801050B0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801050B4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x801050B8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x801050BC: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x801050C0: nop

    // 0x801050C4: sh          $t7, 0x16($s0)
    MEM_H(0X16, ctx->r16) = ctx->r15;
    // 0x801050C8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x801050CC: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x801050D0: jal         0x801049B4
    // 0x801050D4: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    func_801049B4(rdram, ctx);
        goto after_9;
    // 0x801050D4: sw          $t0, 0x24($s0)
    MEM_W(0X24, ctx->r16) = ctx->r8;
    after_9:
    // 0x801050D8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x801050DC: jal         0x80104D80
    // 0x801050E0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    func_80104D80(rdram, ctx);
        goto after_10;
    // 0x801050E0: addiu       $a1, $zero, 0x28
    ctx->r5 = ADD32(0, 0X28);
    after_10:
    // 0x801050E4: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x801050E8: jal         0x80104E24
    // 0x801050EC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    func_80104E24(rdram, ctx);
        goto after_11;
    // 0x801050EC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_11:
    // 0x801050F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801050F4: jal         0x80089CE8
    // 0x801050F8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    _subaddiefade_entrypoint_11(rdram, ctx);
        goto after_12;
    // 0x801050F8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_12:
    // 0x801050FC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80105100: sb          $t1, 0x28($s0)
    MEM_B(0X28, ctx->r16) = ctx->r9;
    // 0x80105104: b           L_80105124
    // 0x80105108: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80105124;
    // 0x80105108: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010510C:
    // 0x8010510C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80105110: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80105114: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80105118: jal         0x80089CF0
    // 0x8010511C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    _subaddiefade_entrypoint_12(rdram, ctx);
        goto after_13;
    // 0x8010511C: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_13:
    // 0x80105120: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80105124:
    // 0x80105124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80105128: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8010512C: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80105130: jr          $ra
    // 0x80105134: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x80105134: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80105138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105138: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010513C: mtc1        $a2, $f12
    ctx->f12.u32l = ctx->r6;
    // 0x80105140: mtc1        $a3, $f14
    ctx->f14.u32l = ctx->r7;
    // 0x80105144: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80105148: beq         $a1, $zero, L_80105158
    if (ctx->r5 == 0) {
        // 0x8010514C: sw          $a0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r4;
            goto L_80105158;
    }
    // 0x8010514C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80105150: b           L_80105160
    // 0x80105154: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
        goto L_80105160;
    // 0x80105154: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
L_80105158:
    // 0x80105158: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8010515C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
L_80105160:
    // 0x80105160: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80105164: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80105168: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x8010516C: mfc1        $a2, $f14
    ctx->r6 = (int32_t)ctx->f14.u32l;
    // 0x80105170: lw          $a3, 0x14($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X14);
    // 0x80105174: jal         0x800C696C
    // 0x80105178: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    func_800C696C(rdram, ctx);
        goto after_0;
    // 0x80105178: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x8010517C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80105180: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80105184: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010518C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010518C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105190: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105194: jal         0x80104544
    // 0x80105198: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80104544(rdram, ctx);
        goto after_0;
    // 0x80105198: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010519C: bne         $v0, $zero, L_801051AC
    if (ctx->r2 != 0) {
        // 0x801051A0: nop
    
            goto L_801051AC;
    }
    // 0x801051A0: nop

    // 0x801051A4: b           L_801051B8
    // 0x801051A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801051B8;
    // 0x801051A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801051AC:
    // 0x801051AC: jal         0x801043D8
    // 0x801051B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801043D8(rdram, ctx);
        goto after_1;
    // 0x801051B0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x801051B4: lw          $v0, 0x24($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X24);
L_801051B8:
    // 0x801051B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801051BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801051C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801051C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801051C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801051CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801051D0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801051D4: jal         0x80104544
    // 0x801051D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80104544(rdram, ctx);
        goto after_0;
    // 0x801051D8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801051DC: bne         $v0, $zero, L_80105208
    if (ctx->r2 != 0) {
        // 0x801051E0: nop
    
            goto L_80105208;
    }
    // 0x801051E0: nop

    // 0x801051E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801051E8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x801051EC: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x801051F0: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x801051F4: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x801051F8: jal         0x800EFA4C
    // 0x801051FC: nop

    func_800EFA4C(rdram, ctx);
        goto after_1;
    // 0x801051FC: nop

    after_1:
    // 0x80105200: b           L_80105220
    // 0x80105204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80105220;
    // 0x80105204: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80105208:
    // 0x80105208: jal         0x801043D8
    // 0x8010520C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_801043D8(rdram, ctx);
        goto after_2;
    // 0x8010520C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80105210: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80105214: jal         0x801048E4
    // 0x80105218: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    func_801048E4(rdram, ctx);
        goto after_3;
    // 0x80105218: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    after_3:
    // 0x8010521C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80105220:
    // 0x80105220: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105224: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80105228: jr          $ra
    return;
;}
RECOMP_FUNC void func_80105230(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105230: addiu       $sp, $sp, -0x68
    ctx->r29 = ADD32(ctx->r29, -0X68);
    // 0x80105234: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80105238: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8010523C: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x80105240: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x80105244: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x80105248: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x8010524C: sw          $a1, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r5;
    // 0x80105250: jal         0x800D3948
    // 0x80105254: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    func_800D3948(rdram, ctx);
        goto after_0;
    // 0x80105254: or          $s1, $zero, $zero
    ctx->r17 = 0 | 0;
    after_0:
    // 0x80105258: beq         $v0, $zero, L_80105268
    if (ctx->r2 == 0) {
        // 0x8010525C: addiu       $s0, $sp, 0x58
        ctx->r16 = ADD32(ctx->r29, 0X58);
            goto L_80105268;
    }
    // 0x8010525C: addiu       $s0, $sp, 0x58
    ctx->r16 = ADD32(ctx->r29, 0X58);
    // 0x80105260: b           L_80105374
    // 0x80105264: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80105374;
    // 0x80105264: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80105268:
    // 0x80105268: jal         0x8010D640
    // 0x8010526C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010D640(rdram, ctx);
        goto after_1;
    // 0x8010526C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80105270: addiu       $a1, $s2, 0x4
    ctx->r5 = ADD32(ctx->r18, 0X4);
    // 0x80105274: sw          $a1, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r5;
    // 0x80105278: jal         0x800EEB40
    // 0x8010527C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EEB40(rdram, ctx);
        goto after_2;
    // 0x8010527C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x80105280: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80105284: lwc1        $f4, 0x6450($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x80105288: lw          $v0, 0x6C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X6C);
    // 0x8010528C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80105290: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x80105294: nop

    // 0x80105298: bc1f        L_801052A8
    if (!c1cs) {
        // 0x8010529C: nop
    
            goto L_801052A8;
    }
    // 0x8010529C: nop

    // 0x801052A0: b           L_80105374
    // 0x801052A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80105374;
    // 0x801052A4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801052A8:
    // 0x801052A8: beq         $v0, $zero, L_801052B8
    if (ctx->r2 == 0) {
        // 0x801052AC: lui         $s0, 0x8012
        ctx->r16 = S32(0X8012 << 16);
            goto L_801052B8;
    }
    // 0x801052AC: lui         $s0, 0x8012
    ctx->r16 = S32(0X8012 << 16);
    // 0x801052B0: b           L_801052BC
    // 0x801052B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_801052BC;
    // 0x801052B4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_801052B8:
    // 0x801052B8: addiu       $s0, $s0, 0x4420
    ctx->r16 = ADD32(ctx->r16, 0X4420);
L_801052BC:
    // 0x801052BC: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801052C0: lwc1        $f0, 0x0($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X0);
    // 0x801052C4: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x801052C8: nop

    // 0x801052CC: bc1tl       L_80105374
    if (c1cs) {
        // 0x801052D0: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80105374;
    }
    goto skip_0;
    // 0x801052D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801052D4: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
L_801052D8:
    // 0x801052D8: jal         0x80101E14
    // 0x801052DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_80101E14(rdram, ctx);
        goto after_3;
    // 0x801052DC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_3:
    // 0x801052E0: beql        $v0, $zero, L_80105358
    if (ctx->r2 == 0) {
        // 0x801052E4: lwc1        $f0, 0x4($s0)
        ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
            goto L_80105358;
    }
    goto skip_1;
    // 0x801052E4: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
    skip_1:
    // 0x801052E8: jal         0x801053D4
    // 0x801052EC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_801053D4(rdram, ctx);
        goto after_4;
    // 0x801052EC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x801052F0: addiu       $t6, $sp, 0x48
    ctx->r14 = ADD32(ctx->r29, 0X48);
    // 0x801052F4: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801052F8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801052FC: andi        $a1, $s1, 0x1
    ctx->r5 = ctx->r17 & 0X1;
    // 0x80105300: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    // 0x80105304: jal         0x80088A58
    // 0x80105308: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    _fxstep_entrypoint_15(rdram, ctx);
        goto after_5;
    // 0x80105308: addiu       $a3, $sp, 0x4C
    ctx->r7 = ADD32(ctx->r29, 0X4C);
    after_5:
    // 0x8010530C: beq         $v0, $zero, L_8010534C
    if (ctx->r2 == 0) {
        // 0x80105310: nop
    
            goto L_8010534C;
    }
    // 0x80105310: nop

    // 0x80105314: jal         0x800C4B64
    // 0x80105318: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    func_800C4B64(rdram, ctx);
        goto after_6;
    // 0x80105318: lwc1        $f12, 0x48($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X48);
    after_6:
    // 0x8010531C: jal         0x800C4B70
    // 0x80105320: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    func_800C4B70(rdram, ctx);
        goto after_7;
    // 0x80105320: lw          $a0, 0x4C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X4C);
    after_7:
    // 0x80105324: jal         0x800C4B7C
    // 0x80105328: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    func_800C4B7C(rdram, ctx);
        goto after_8;
    // 0x80105328: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    after_8:
    // 0x8010532C: lw          $a1, 0x70($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X70);
    // 0x80105330: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80105334: addiu       $a3, $a3, 0x442C
    ctx->r7 = ADD32(ctx->r7, 0X442C);
    // 0x80105338: andi        $t7, $a1, 0x1
    ctx->r15 = ctx->r5 & 0X1;
    // 0x8010533C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80105340: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80105344: jal         0x8010D930
    // 0x80105348: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    func_8010D930(rdram, ctx);
        goto after_9;
    // 0x80105348: lw          $a2, 0x40($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X40);
    after_9:
L_8010534C:
    // 0x8010534C: b           L_80105374
    // 0x80105350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80105374;
    // 0x80105350: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80105354: lwc1        $f0, 0x4($s0)
    ctx->f0.u32l = MEM_W(ctx->r16, 0X4);
L_80105358:
    // 0x80105358: addiu       $s0, $s0, 0x4
    ctx->r16 = ADD32(ctx->r16, 0X4);
    // 0x8010535C: addiu       $s1, $s1, 0x1
    ctx->r17 = ADD32(ctx->r17, 0X1);
    // 0x80105360: c.eq.s      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.fl == ctx->f0.fl;
    // 0x80105364: nop

    // 0x80105368: bc1fl       L_801052D8
    if (!c1cs) {
        // 0x8010536C: mfc1        $a1, $f0
        ctx->r5 = (int32_t)ctx->f0.u32l;
            goto L_801052D8;
    }
    goto skip_2;
    // 0x8010536C: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    skip_2:
    // 0x80105370: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80105374:
    // 0x80105374: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80105378: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x8010537C: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80105380: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80105384: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x80105388: jr          $ra
    // 0x8010538C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
    return;
    // 0x8010538C: addiu       $sp, $sp, 0x68
    ctx->r29 = ADD32(ctx->r29, 0X68);
;}
RECOMP_FUNC void func_80105390(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105390: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x80105394: lw          $t7, 0x0($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X0);
    // 0x80105398: lw          $t9, 0x4($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X4);
    // 0x8010539C: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x801053A0: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x801053A4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x801053A8: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x801053AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x801053B0: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801053B4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x801053B8: trunc.w.s   $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = TRUNC_W_S(ctx->f10.fl);
    // 0x801053BC: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x801053C0: nop

    // 0x801053C4: sw          $v0, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r2;
    // 0x801053C8: sw          $v0, 0x4($a0)
    MEM_W(0X4, ctx->r4) = ctx->r2;
    // 0x801053CC: jr          $ra
    // 0x801053D0: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
    return;
    // 0x801053D0: sw          $v0, 0x8($a0)
    MEM_W(0X8, ctx->r4) = ctx->r2;
;}
RECOMP_FUNC void func_801053D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801053D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801053D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801053DC: jal         0x8010518C
    // 0x801053E0: nop

    func_8010518C(rdram, ctx);
        goto after_0;
    // 0x801053E0: nop

    after_0:
    // 0x801053E4: jal         0x800C84B0
    // 0x801053E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800C84B0(rdram, ctx);
        goto after_1;
    // 0x801053E8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x801053EC: bne         $v0, $zero, L_801053F8
    if (ctx->r2 != 0) {
        // 0x801053F0: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801053F8;
    }
    // 0x801053F0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801053F4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_801053F8:
    // 0x801053F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801053FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80105400: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80105404: jr          $ra
    return;
;}
RECOMP_FUNC void func_80105410(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105410: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105414: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105418: addiu       $a0, $zero, 0x48
    ctx->r4 = ADD32(0, 0X48);
    // 0x8010541C: jal         0x800B3268
    // 0x80105420: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_800B3268(rdram, ctx);
        goto after_0;
    // 0x80105420: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_0:
    // 0x80105424: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105428: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8010542C: sw          $v0, 0x6EC0($at)
    MEM_W(0X6EC0, ctx->r1) = ctx->r2;
    // 0x80105430: jr          $ra
    // 0x80105434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80105434: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80105438(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105438: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010543C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105440: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80105444: jal         0x800B3248
    // 0x80105448: lw          $a0, 0x6EC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EC0);
    func_800B3248(rdram, ctx);
        goto after_0;
    // 0x80105448: lw          $a0, 0x6EC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EC0);
    after_0:
    // 0x8010544C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105450: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80105454: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010545C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010545C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80105460: lw          $a0, 0x6EC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EC0);
    // 0x80105464: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105468: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010546C: beql        $a0, $zero, L_80105488
    if (ctx->r4 == 0) {
        // 0x80105470: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80105488;
    }
    goto skip_0;
    // 0x80105470: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80105474: jal         0x800B32E4
    // 0x80105478: nop

    func_800B32E4(rdram, ctx);
        goto after_0;
    // 0x80105478: nop

    after_0:
    // 0x8010547C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80105480: sw          $v0, 0x6EC0($at)
    MEM_W(0X6EC0, ctx->r1) = ctx->r2;
    // 0x80105484: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80105488:
    // 0x80105488: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010548C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80105494(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105494: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105498: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010549C: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x801054A0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801054A4: andi        $t6, $v0, 0xFFF
    ctx->r14 = ctx->r2 & 0XFFF;
    // 0x801054A8: bne         $t6, $zero, L_801054B8
    if (ctx->r14 != 0) {
        // 0x801054AC: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_801054B8;
    }
    // 0x801054AC: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x801054B0: b           L_801054C4
    // 0x801054B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801054C4;
    // 0x801054B4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801054B8:
    // 0x801054B8: lw          $a0, 0x6EC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EC0);
    // 0x801054BC: jal         0x800B301C
    // 0x801054C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x801054C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_0:
L_801054C4:
    // 0x801054C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801054C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801054CC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801054D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801054D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801054D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801054DC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801054E0: jal         0x80105494
    // 0x801054E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80105494(rdram, ctx);
        goto after_0;
    // 0x801054E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x801054E8: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x801054EC: jal         0x800D7DE8
    // 0x801054F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800D7DE8(rdram, ctx);
        goto after_1;
    // 0x801054F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801054F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801054F8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x801054FC: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x80105500: jal         0x800D8588
    // 0x80105504: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    func_800D8588(rdram, ctx);
        goto after_2;
    // 0x80105504: addiu       $a3, $zero, 0x19
    ctx->r7 = ADD32(0, 0X19);
    after_2:
    // 0x80105508: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8010550C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80105510: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80105514: lw          $t7, 0x18($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X18);
    // 0x80105518: srl         $t8, $t7, 31
    ctx->r24 = S32(U32(ctx->r15) >> 31);
    // 0x8010551C: beql        $t8, $zero, L_80105530
    if (ctx->r24 == 0) {
        // 0x80105520: lw          $t9, 0x24($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X24);
            goto L_80105530;
    }
    goto skip_0;
    // 0x80105520: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    skip_0:
    // 0x80105524: jal         0x8010B990
    // 0x80105528: addiu       $a1, $zero, 0x6000
    ctx->r5 = ADD32(0, 0X6000);
    func_8010B990(rdram, ctx);
        goto after_3;
    // 0x80105528: addiu       $a1, $zero, 0x6000
    ctx->r5 = ADD32(0, 0X6000);
    after_3:
    // 0x8010552C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
L_80105530:
    // 0x80105530: lw          $t0, 0x24($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X24);
    // 0x80105534: sll         $t2, $t0, 26
    ctx->r10 = S32(ctx->r8 << 26);
    // 0x80105538: bgezl       $t2, L_8010555C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8010553C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8010555C;
    }
    goto skip_1;
    // 0x8010553C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80105540: jal         0x80105A5C
    // 0x80105544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80105A5C(rdram, ctx);
        goto after_4;
    // 0x80105544: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80105548: beql        $v0, $zero, L_8010555C
    if (ctx->r2 == 0) {
        // 0x8010554C: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_8010555C;
    }
    goto skip_2;
    // 0x8010554C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80105550: jal         0x800FFAB0
    // 0x80105554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FFAB0(rdram, ctx);
        goto after_5;
    // 0x80105554: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80105558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_8010555C:
    // 0x8010555C: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x80105560: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80105564: jr          $ra
    // 0x80105568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80105568: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8010556C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010556C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80105570: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80105574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105578: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010557C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80105580: addiu       $a0, $a0, 0x6EC0
    ctx->r4 = ADD32(ctx->r4, 0X6EC0);
    // 0x80105584: jal         0x800B3044
    // 0x80105588: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800B3044(rdram, ctx);
        goto after_0;
    // 0x80105588: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8010558C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80105590: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80105594: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80105598: lhu         $t9, 0x7E($a3)
    ctx->r25 = MEM_HU(ctx->r7, 0X7E);
    // 0x8010559C: andi        $t8, $t7, 0xFFF
    ctx->r24 = ctx->r15 & 0XFFF;
    // 0x801055A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x801055A4: andi        $t0, $t9, 0xF000
    ctx->r8 = ctx->r25 & 0XF000;
    // 0x801055A8: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x801055AC: sh          $t1, 0x7E($a3)
    MEM_H(0X7E, ctx->r7) = ctx->r9;
    // 0x801055B0: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x801055B4: jal         0x8001BCF8
    // 0x801055B8: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    rare_memset(rdram, ctx);
        goto after_1;
    // 0x801055B8: addiu       $a2, $zero, 0x48
    ctx->r6 = ADD32(0, 0X48);
    after_1:
    // 0x801055BC: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801055C0: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x801055C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x801055C8: lh          $t3, 0x2($v1)
    ctx->r11 = MEM_H(ctx->r3, 0X2);
    // 0x801055CC: lbu         $t6, 0x28($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X28);
    // 0x801055D0: lbu         $t9, 0x18($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X18);
    // 0x801055D4: ori         $t4, $t3, 0x7FE
    ctx->r12 = ctx->r11 | 0X7FE;
    // 0x801055D8: ori         $t7, $t6, 0xE0
    ctx->r15 = ctx->r14 | 0XE0;
    // 0x801055DC: andi        $t8, $t9, 0xFF7F
    ctx->r24 = ctx->r25 & 0XFF7F;
    // 0x801055E0: sh          $t4, 0x2($v1)
    MEM_H(0X2, ctx->r3) = ctx->r12;
    // 0x801055E4: sb          $t7, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r15;
    // 0x801055E8: sb          $t8, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r24;
    // 0x801055EC: jal         0x800E6A00
    // 0x801055F0: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    func_800E6A00(rdram, ctx);
        goto after_2;
    // 0x801055F0: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    after_2:
    // 0x801055F4: lw          $v1, 0x18($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X18);
    // 0x801055F8: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x801055FC: sll         $t1, $t0, 6
    ctx->r9 = S32(ctx->r8 << 6);
    // 0x80105600: lbu         $t3, 0x18($v1)
    ctx->r11 = MEM_BU(ctx->r3, 0X18);
    // 0x80105604: lbu         $t6, 0x27($v1)
    ctx->r14 = MEM_BU(ctx->r3, 0X27);
    // 0x80105608: andi        $t2, $t1, 0x40
    ctx->r10 = ctx->r9 & 0X40;
    // 0x8010560C: andi        $t4, $t3, 0xFFBF
    ctx->r12 = ctx->r11 & 0XFFBF;
    // 0x80105610: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x80105614: andi        $t7, $t6, 0xFFDF
    ctx->r15 = ctx->r14 & 0XFFDF;
    // 0x80105618: sb          $t5, 0x18($v1)
    MEM_B(0X18, ctx->r3) = ctx->r13;
    // 0x8010561C: sb          $t7, 0x27($v1)
    MEM_B(0X27, ctx->r3) = ctx->r15;
    // 0x80105620: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105624: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80105628: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8010562C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80105634(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105634: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105638: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010563C: lw          $v0, 0x7C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X7C);
    // 0x80105640: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80105644: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80105648: andi        $t6, $v0, 0xFFF
    ctx->r14 = ctx->r2 & 0XFFF;
    // 0x8010564C: beq         $t6, $zero, L_8010567C
    if (ctx->r14 == 0) {
        // 0x80105650: or          $a1, $t6, $zero
        ctx->r5 = ctx->r14 | 0;
            goto L_8010567C;
    }
    // 0x80105650: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80105654: lw          $a0, 0x6EC0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EC0);
    // 0x80105658: jal         0x800B32C0
    // 0x8010565C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800B32C0(rdram, ctx);
        goto after_0;
    // 0x8010565C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80105660: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80105664: lhu         $t7, 0x7E($a2)
    ctx->r15 = MEM_HU(ctx->r6, 0X7E);
    // 0x80105668: lbu         $t9, 0x77($a2)
    ctx->r25 = MEM_BU(ctx->r6, 0X77);
    // 0x8010566C: andi        $t8, $t7, 0xF000
    ctx->r24 = ctx->r15 & 0XF000;
    // 0x80105670: andi        $t0, $t9, 0xFFEF
    ctx->r8 = ctx->r25 & 0XFFEF;
    // 0x80105674: sh          $t8, 0x7E($a2)
    MEM_H(0X7E, ctx->r6) = ctx->r24;
    // 0x80105678: sb          $t0, 0x77($a2)
    MEM_B(0X77, ctx->r6) = ctx->r8;
L_8010567C:
    // 0x8010567C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105680: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80105684: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010568C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010568C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105690: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105694: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80105698: jal         0x80105494
    // 0x8010569C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80105494(rdram, ctx);
        goto after_0;
    // 0x8010569C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801056A0: beq         $v0, $zero, L_801056C4
    if (ctx->r2 == 0) {
        // 0x801056A4: lw          $t9, 0x1C($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X1C);
            goto L_801056C4;
    }
    // 0x801056A4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x801056A8: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x801056AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x801056B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801056B4: sll         $t7, $t6, 21
    ctx->r15 = S32(ctx->r14 << 21);
    // 0x801056B8: sra         $t8, $t7, 22
    ctx->r24 = S32(SIGNED(ctx->r15) >> 22);
    // 0x801056BC: bne         $t8, $at, L_801056DC
    if (ctx->r24 != ctx->r1) {
        // 0x801056C0: nop
    
            goto L_801056DC;
    }
    // 0x801056C0: nop

L_801056C4:
    // 0x801056C4: beq         $t9, $zero, L_801056D4
    if (ctx->r25 == 0) {
        // 0x801056C8: nop
    
            goto L_801056D4;
    }
    // 0x801056C8: nop

    // 0x801056CC: jal         0x800FFAB0
    // 0x801056D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800FFAB0(rdram, ctx);
        goto after_1;
    // 0x801056D0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
L_801056D4:
    // 0x801056D4: b           L_801056DC
    // 0x801056D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801056DC;
    // 0x801056D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801056DC:
    // 0x801056DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801056E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801056E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_801056EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801056EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801056F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801056F4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801056F8: jal         0x80105494
    // 0x801056FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80105494(rdram, ctx);
        goto after_0;
    // 0x801056FC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80105700: lwc1        $f0, 0x1C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80105704: lwc1        $f4, 0xC($v0)
    ctx->f4.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80105708: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    // 0x8010570C: swc1        $f0, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f0.u32l;
    // 0x80105710: swc1        $f4, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->f4.u32l;
    // 0x80105714: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80105718: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x8010571C: sll         $t6, $a0, 21
    ctx->r14 = S32(ctx->r4 << 21);
    // 0x80105720: sra         $a0, $t6, 22
    ctx->r4 = S32(SIGNED(ctx->r14) >> 22);
    // 0x80105724: jal         0x800D86F0
    // 0x80105728: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    func_800D86F0(rdram, ctx);
        goto after_1;
    // 0x80105728: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    after_1:
    // 0x8010572C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105730: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80105734: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010573C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010573C: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80105740: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80105744: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80105748: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x8010574C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80105750: jal         0x80105494
    // 0x80105754: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    func_80105494(rdram, ctx);
        goto after_0;
    // 0x80105754: sw          $a1, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80105758: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8010575C: jal         0x800D7DE8
    // 0x80105760: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800D7DE8(rdram, ctx);
        goto after_1;
    // 0x80105760: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80105764: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80105768: lwc1        $f0, 0x4C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8010576C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80105770: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x80105774: mfc1        $a1, $f0
    ctx->r5 = (int32_t)ctx->f0.u32l;
    // 0x80105778: sll         $t6, $a0, 21
    ctx->r14 = S32(ctx->r4 << 21);
    // 0x8010577C: sra         $a0, $t6, 22
    ctx->r4 = S32(SIGNED(ctx->r14) >> 22);
    // 0x80105780: addiu       $a2, $s1, 0x4
    ctx->r6 = ADD32(ctx->r17, 0X4);
    // 0x80105784: swc1        $f0, 0xC($s0)
    MEM_W(0XC, ctx->r16) = ctx->f0.u32l;
    // 0x80105788: jal         0x800D86F0
    // 0x8010578C: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    func_800D86F0(rdram, ctx);
        goto after_2;
    // 0x8010578C: swc1        $f4, 0x10($s0)
    MEM_W(0X10, ctx->r16) = ctx->f4.u32l;
    after_2:
    // 0x80105790: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80105794: sll         $t8, $a0, 21
    ctx->r24 = S32(ctx->r4 << 21);
    // 0x80105798: jal         0x800D7520
    // 0x8010579C: sra         $a0, $t8, 22
    ctx->r4 = S32(SIGNED(ctx->r24) >> 22);
    func_800D7520(rdram, ctx);
        goto after_3;
    // 0x8010579C: sra         $a0, $t8, 22
    ctx->r4 = S32(SIGNED(ctx->r24) >> 22);
    after_3:
    // 0x801057A0: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x801057A4: lw          $a1, 0xC($s0)
    ctx->r5 = MEM_W(ctx->r16, 0XC);
    // 0x801057A8: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x801057AC: jal         0x800C810C
    // 0x801057B0: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    func_800C810C(rdram, ctx);
        goto after_4;
    // 0x801057B0: addiu       $a3, $sp, 0x30
    ctx->r7 = ADD32(ctx->r29, 0X30);
    after_4:
    // 0x801057B4: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x801057B8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x801057BC: lwc1        $f6, 0x34($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801057C0: andi        $t0, $v0, 0x100
    ctx->r8 = ctx->r2 & 0X100;
    // 0x801057C4: beq         $t0, $zero, L_801057F8
    if (ctx->r8 == 0) {
        // 0x801057C8: andi        $t1, $v0, 0x200
        ctx->r9 = ctx->r2 & 0X200;
            goto L_801057F8;
    }
    // 0x801057C8: andi        $t1, $v0, 0x200
    ctx->r9 = ctx->r2 & 0X200;
    // 0x801057CC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x801057D0: lwc1        $f10, 0x34($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X34);
    // 0x801057D4: c.le.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl <= ctx->f6.fl;
    // 0x801057D8: nop

    // 0x801057DC: bc1fl       L_801057F4
    if (!c1cs) {
        // 0x801057E0: add.s       $f16, $f10, $f0
        CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
            goto L_801057F4;
    }
    goto skip_0;
    // 0x801057E0: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
    skip_0:
    // 0x801057E4: sub.s       $f8, $f6, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f8.fl = ctx->f6.fl - ctx->f0.fl;
    // 0x801057E8: b           L_801057F8
    // 0x801057EC: swc1        $f8, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->f8.u32l;
        goto L_801057F8;
    // 0x801057EC: swc1        $f8, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->f8.u32l;
    // 0x801057F0: add.s       $f16, $f10, $f0
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f0.fl;
L_801057F4:
    // 0x801057F4: swc1        $f16, 0x54($s1)
    MEM_W(0X54, ctx->r17) = ctx->f16.u32l;
L_801057F8:
    // 0x801057F8: beq         $t1, $zero, L_80105810
    if (ctx->r9 == 0) {
        // 0x801057FC: lui         $at, 0x43B4
        ctx->r1 = S32(0X43B4 << 16);
            goto L_80105810;
    }
    // 0x801057FC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80105800: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80105804: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80105808: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8010580C: swc1        $f6, 0x50($s1)
    MEM_W(0X50, ctx->r17) = ctx->f6.u32l;
L_80105810:
    // 0x80105810: lwc1        $f8, 0x54($s1)
    ctx->f8.u32l = MEM_W(ctx->r17, 0X54);
    // 0x80105814: lwc1        $f10, 0x50($s1)
    ctx->f10.u32l = MEM_W(ctx->r17, 0X50);
    // 0x80105818: swc1        $f8, 0x48($s1)
    MEM_W(0X48, ctx->r17) = ctx->f8.u32l;
    // 0x8010581C: swc1        $f10, 0x44($s1)
    MEM_W(0X44, ctx->r17) = ctx->f10.u32l;
    // 0x80105820: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80105824: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80105828: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8010582C: jr          $ra
    // 0x80105830: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80105830: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80105834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010583C: jal         0x801054D4
    // 0x80105840: nop

    func_801054D4(rdram, ctx);
        goto after_0;
    // 0x80105840: nop

    after_0:
    // 0x80105844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010584C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80105854(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105854: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105858: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010585C: jal         0x801054D4
    // 0x80105860: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801054D4(rdram, ctx);
        goto after_0;
    // 0x80105860: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80105864: jal         0x80105A5C
    // 0x80105868: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_80105A5C(rdram, ctx);
        goto after_1;
    // 0x80105868: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8010586C: beql        $v0, $zero, L_80105880
    if (ctx->r2 == 0) {
        // 0x80105870: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80105880;
    }
    goto skip_0;
    // 0x80105870: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80105874: jal         0x800FFAB0
    // 0x80105878: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800FFAB0(rdram, ctx);
        goto after_2;
    // 0x80105878: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x8010587C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80105880:
    // 0x80105880: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80105884: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010588C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010588C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105894: jal         0x8010A570
    // 0x80105898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8010A570(rdram, ctx);
        goto after_0;
    // 0x80105898: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010589C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801058A0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x801058A4: lbu         $t7, 0x2A($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X2A);
    // 0x801058A8: ori         $t8, $t7, 0x4
    ctx->r24 = ctx->r15 | 0X4;
    // 0x801058AC: jal         0x801054D4
    // 0x801058B0: sb          $t8, 0x2A($v0)
    MEM_B(0X2A, ctx->r2) = ctx->r24;
    func_801054D4(rdram, ctx);
        goto after_1;
    // 0x801058B0: sb          $t8, 0x2A($v0)
    MEM_B(0X2A, ctx->r2) = ctx->r24;
    after_1:
    // 0x801058B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801058B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801058BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801058C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801058C4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801058C8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801058CC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801058D0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801058D4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801058D8: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x801058DC: jal         0x80105494
    // 0x801058E0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_80105494(rdram, ctx);
        goto after_0;
    // 0x801058E0: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x801058E4: bne         $v0, $zero, L_801058F8
    if (ctx->r2 != 0) {
        // 0x801058E8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801058F8;
    }
    // 0x801058E8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801058EC: jal         0x8010556C
    // 0x801058F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010556C(rdram, ctx);
        goto after_1;
    // 0x801058F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x801058F4: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_801058F8:
    // 0x801058F8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x801058FC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80105900: beql        $a0, $at, L_80105924
    if (ctx->r4 == ctx->r1) {
        // 0x80105904: lw          $t3, 0x34($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X34);
            goto L_80105924;
    }
    goto skip_0;
    // 0x80105904: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    skip_0:
    // 0x80105908: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x8010590C: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x80105910: andi        $t9, $t8, 0x7FE
    ctx->r25 = ctx->r24 & 0X7FE;
    // 0x80105914: andi        $t1, $t0, 0xF801
    ctx->r9 = ctx->r8 & 0XF801;
    // 0x80105918: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x8010591C: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
    // 0x80105920: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
L_80105924:
    // 0x80105924: beql        $t3, $zero, L_8010594C
    if (ctx->r11 == 0) {
        // 0x80105928: mtc1        $zero, $f0
        ctx->f0.u32l = 0;
            goto L_8010594C;
    }
    goto skip_1;
    // 0x80105928: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    skip_1:
    // 0x8010592C: lw          $a0, 0x0($v1)
    ctx->r4 = MEM_W(ctx->r3, 0X0);
    // 0x80105930: sw          $v1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r3;
    // 0x80105934: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    // 0x80105938: sll         $t4, $a0, 21
    ctx->r12 = S32(ctx->r4 << 21);
    // 0x8010593C: jal         0x800D8648
    // 0x80105940: sra         $a0, $t4, 22
    ctx->r4 = S32(SIGNED(ctx->r12) >> 22);
    func_800D8648(rdram, ctx);
        goto after_2;
    // 0x80105940: sra         $a0, $t4, 22
    ctx->r4 = S32(SIGNED(ctx->r12) >> 22);
    after_2:
    // 0x80105944: lw          $v1, 0x24($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X24);
    // 0x80105948: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
L_8010594C:
    // 0x8010594C: nop

    // 0x80105950: swc1        $f0, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->f0.u32l;
    // 0x80105954: swc1        $f0, 0x10($v1)
    MEM_W(0X10, ctx->r3) = ctx->f0.u32l;
    // 0x80105958: lwc1        $f4, 0x30($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X30);
    // 0x8010595C: swc1        $f4, 0x14($v1)
    MEM_W(0X14, ctx->r3) = ctx->f4.u32l;
    // 0x80105960: lbu         $t7, 0x77($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X77);
    // 0x80105964: ori         $t8, $t7, 0x10
    ctx->r24 = ctx->r15 | 0X10;
    // 0x80105968: sb          $t8, 0x77($s0)
    MEM_B(0X77, ctx->r16) = ctx->r24;
    // 0x8010596C: lbu         $t9, 0x3($v1)
    ctx->r25 = MEM_BU(ctx->r3, 0X3);
    // 0x80105970: lbu         $t2, 0x28($v1)
    ctx->r10 = MEM_BU(ctx->r3, 0X28);
    // 0x80105974: ori         $t1, $t9, 0x1
    ctx->r9 = ctx->r25 | 0X1;
    // 0x80105978: andi        $t3, $t2, 0xFF1F
    ctx->r11 = ctx->r10 & 0XFF1F;
    // 0x8010597C: sb          $t1, 0x3($v1)
    MEM_B(0X3, ctx->r3) = ctx->r9;
    // 0x80105980: sb          $t3, 0x28($v1)
    MEM_B(0X28, ctx->r3) = ctx->r11;
    // 0x80105984: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80105988: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010598C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80105990: jr          $ra
    return;
;}
RECOMP_FUNC void func_80105998(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105998: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8010599C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801059A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801059A4: jal         0x80105494
    // 0x801059A8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    func_80105494(rdram, ctx);
        goto after_0;
    // 0x801059A8: swc1        $f12, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f12.u32l;
    after_0:
    // 0x801059AC: lwc1        $f2, 0xC($v0)
    ctx->f2.u32l = MEM_W(ctx->r2, 0XC);
    // 0x801059B0: lwc1        $f0, 0x10($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X10);
    // 0x801059B4: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x801059B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801059BC: c.eq.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl == ctx->f2.fl;
    // 0x801059C0: nop

    // 0x801059C4: bc1fl       L_801059D8
    if (!c1cs) {
        // 0x801059C8: c.lt.s      $f0, $f2
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
            goto L_801059D8;
    }
    goto skip_0;
    // 0x801059C8: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
    skip_0:
    // 0x801059CC: b           L_80105A54
    // 0x801059D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80105A54;
    // 0x801059D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801059D4: c.lt.s      $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f0.fl < ctx->f2.fl;
L_801059D8:
    // 0x801059D8: nop

    // 0x801059DC: bc1fl       L_80105A20
    if (!c1cs) {
        // 0x801059E0: c.le.s      $f0, $f12
        CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
            goto L_80105A20;
    }
    goto skip_1;
    // 0x801059E0: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    skip_1:
    // 0x801059E4: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x801059E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801059EC: bc1f        L_801059F8
    if (!c1cs) {
        // 0x801059F0: nop
    
            goto L_801059F8;
    }
    // 0x801059F0: nop

    // 0x801059F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801059F8:
    // 0x801059F8: beq         $v0, $zero, L_80105A14
    if (ctx->r2 == 0) {
        // 0x801059FC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80105A14;
    }
    // 0x801059FC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80105A00: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80105A04: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80105A08: bc1f        L_80105A14
    if (!c1cs) {
        // 0x80105A0C: nop
    
            goto L_80105A14;
    }
    // 0x80105A0C: nop

    // 0x80105A10: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80105A14:
    // 0x80105A14: b           L_80105A50
    // 0x80105A18: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
        goto L_80105A50;
    // 0x80105A18: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    // 0x80105A1C: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
L_80105A20:
    // 0x80105A20: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80105A24: bc1f        L_80105A30
    if (!c1cs) {
        // 0x80105A28: nop
    
            goto L_80105A30;
    }
    // 0x80105A28: nop

    // 0x80105A2C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80105A30:
    // 0x80105A30: bne         $v0, $zero, L_80105A4C
    if (ctx->r2 != 0) {
        // 0x80105A34: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80105A4C;
    }
    // 0x80105A34: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80105A38: c.lt.s      $f12, $f2
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 2);
    c1cs = ctx->f12.fl < ctx->f2.fl;
    // 0x80105A3C: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80105A40: bc1fl       L_80105A50
    if (!c1cs) {
        // 0x80105A44: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_80105A50;
    }
    goto skip_2;
    // 0x80105A44: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    skip_2:
    // 0x80105A48: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80105A4C:
    // 0x80105A4C: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_80105A50:
    // 0x80105A50: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
L_80105A54:
    // 0x80105A54: jr          $ra
    // 0x80105A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80105A58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80105A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105A5C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105A60: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105A64: jal         0x80105494
    // 0x80105A68: nop

    func_80105494(rdram, ctx);
        goto after_0;
    // 0x80105A68: nop

    after_0:
    // 0x80105A6C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80105A70: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80105A74: lwc1        $f6, 0xC($v0)
    ctx->f6.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80105A78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80105A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105A80: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80105A84: nop

    // 0x80105A88: bc1f        L_80105A94
    if (!c1cs) {
        // 0x80105A8C: nop
    
            goto L_80105A94;
    }
    // 0x80105A8C: nop

    // 0x80105A90: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80105A94:
    // 0x80105A94: jr          $ra
    // 0x80105A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80105A98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80105A9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105A9C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105AA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105AA4: jal         0x80105494
    // 0x80105AA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80105494(rdram, ctx);
        goto after_0;
    // 0x80105AA8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80105AAC: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80105AB0: swc1        $f4, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->f4.u32l;
    // 0x80105AB4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105AB8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80105ABC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80105AC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105AC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105AC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105ACC: jal         0x80105494
    // 0x80105AD0: nop

    func_80105494(rdram, ctx);
        goto after_0;
    // 0x80105AD0: nop

    after_0:
    // 0x80105AD4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105AD8: lwc1        $f0, 0x14($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0X14);
    // 0x80105ADC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80105AE0: jr          $ra
    return;
;}
RECOMP_FUNC void func_80105AE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105AE8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105AEC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105AF0: jal         0x80105494
    // 0x80105AF4: nop

    func_80105494(rdram, ctx);
        goto after_0;
    // 0x80105AF4: nop

    after_0:
    // 0x80105AF8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105AFC: lwc1        $f0, 0xC($v0)
    ctx->f0.u32l = MEM_W(ctx->r2, 0XC);
    // 0x80105B00: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80105B04: jr          $ra
    return;
;}
RECOMP_FUNC void func_80105B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105B0C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80105B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105B14: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80105B18: jal         0x80105494
    // 0x80105B1C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    func_80105494(rdram, ctx);
        goto after_0;
    // 0x80105B1C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    after_0:
    // 0x80105B20: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80105B24: jal         0x800D7DE8
    // 0x80105B28: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    func_800D7DE8(rdram, ctx);
        goto after_1;
    // 0x80105B28: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    after_1:
    // 0x80105B2C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80105B30: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80105B34: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x80105B38: sll         $t7, $a0, 21
    ctx->r15 = S32(ctx->r4 << 21);
    // 0x80105B3C: jal         0x800D7520
    // 0x80105B40: sra         $a0, $t7, 22
    ctx->r4 = S32(SIGNED(ctx->r15) >> 22);
    func_800D7520(rdram, ctx);
        goto after_2;
    // 0x80105B40: sra         $a0, $t7, 22
    ctx->r4 = S32(SIGNED(ctx->r15) >> 22);
    after_2:
    // 0x80105B44: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80105B48: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80105B4C: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x80105B50: addiu       $a3, $sp, 0x28
    ctx->r7 = ADD32(ctx->r29, 0X28);
    // 0x80105B54: jal         0x800C810C
    // 0x80105B58: lw          $a1, 0xC($t9)
    ctx->r5 = MEM_W(ctx->r25, 0XC);
    func_800C810C(rdram, ctx);
        goto after_3;
    // 0x80105B58: lw          $a1, 0xC($t9)
    ctx->r5 = MEM_W(ctx->r25, 0XC);
    after_3:
    // 0x80105B5C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80105B60: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80105B64: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80105B68: andi        $t1, $t0, 0x100
    ctx->r9 = ctx->r8 & 0X100;
    // 0x80105B6C: beq         $t1, $zero, L_80105BA4
    if (ctx->r9 == 0) {
        // 0x80105B70: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80105BA4;
    }
    // 0x80105B70: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105B74: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80105B78: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80105B7C: c.le.s      $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f0.fl <= ctx->f12.fl;
    // 0x80105B80: nop

    // 0x80105B84: bc1fl       L_80105B9C
    if (!c1cs) {
        // 0x80105B88: add.s       $f2, $f12, $f0
        CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl + ctx->f0.fl;
            goto L_80105B9C;
    }
    goto skip_0;
    // 0x80105B88: add.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl + ctx->f0.fl;
    skip_0:
    // 0x80105B8C: sub.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl - ctx->f0.fl;
    // 0x80105B90: b           L_80105BA4
    // 0x80105B94: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_80105BA4;
    // 0x80105B94: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
    // 0x80105B98: add.s       $f2, $f12, $f0
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f2.fl = ctx->f12.fl + ctx->f0.fl;
L_80105B9C:
    // 0x80105B9C: b           L_80105BA4
    // 0x80105BA0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
        goto L_80105BA4;
    // 0x80105BA0: mov.s       $f0, $f2
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 2);
    ctx->f0.fl = ctx->f2.fl;
L_80105BA4:
    // 0x80105BA4: jr          $ra
    // 0x80105BA8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80105BA8: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80105BAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105BAC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105BB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105BB4: jal         0x80105494
    // 0x80105BB8: nop

    func_80105494(rdram, ctx);
        goto after_0;
    // 0x80105BB8: nop

    after_0:
    // 0x80105BBC: beql        $v0, $zero, L_80105BD4
    if (ctx->r2 == 0) {
        // 0x80105BC0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80105BD4;
    }
    goto skip_0;
    // 0x80105BC0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80105BC4: lbu         $t7, 0x18($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0X18);
    // 0x80105BC8: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x80105BCC: sb          $t8, 0x18($v0)
    MEM_B(0X18, ctx->r2) = ctx->r24;
    // 0x80105BD0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80105BD4:
    // 0x80105BD4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80105BD8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80105BE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105BE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105BE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105BE8: jal         0x80105494
    // 0x80105BEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80105494(rdram, ctx);
        goto after_0;
    // 0x80105BEC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80105BF0: beq         $v0, $zero, L_80105C10
    if (ctx->r2 == 0) {
        // 0x80105BF4: lw          $t7, 0x1C($sp)
        ctx->r15 = MEM_W(ctx->r29, 0X1C);
            goto L_80105C10;
    }
    // 0x80105BF4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80105BF8: lbu         $t0, 0x27($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X27);
    // 0x80105BFC: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x80105C00: andi        $t9, $t8, 0x20
    ctx->r25 = ctx->r24 & 0X20;
    // 0x80105C04: andi        $t1, $t0, 0xFFDF
    ctx->r9 = ctx->r8 & 0XFFDF;
    // 0x80105C08: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x80105C0C: sb          $t2, 0x27($v0)
    MEM_B(0X27, ctx->r2) = ctx->r10;
L_80105C10:
    // 0x80105C10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105C14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80105C18: jr          $ra
    return;
;}
RECOMP_FUNC void func_80105C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105C20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80105C24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80105C28: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    // 0x80105C2C: jal         0x800B3268
    // 0x80105C30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800B3268(rdram, ctx);
        goto after_0;
    // 0x80105C30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80105C34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80105C38: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80105C3C: sw          $v0, 0x6ED0($at)
    MEM_W(0X6ED0, ctx->r1) = ctx->r2;
    // 0x80105C40: jr          $ra
    // 0x80105C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80105C44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80105C48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105C48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80105C4C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80105C50: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x80105C54: addiu       $s2, $s2, 0x6ED0
    ctx->r18 = ADD32(ctx->r18, 0X6ED0);
    // 0x80105C58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80105C5C: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80105C60: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80105C64: jal         0x800B3034
    // 0x80105C68: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_800B3034(rdram, ctx);
        goto after_0;
    // 0x80105C68: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_0:
    // 0x80105C6C: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80105C70: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80105C74: bne         $at, $zero, L_80105CAC
    if (ctx->r1 != 0) {
        // 0x80105C78: addiu       $s0, $zero, 0x1
        ctx->r16 = ADD32(0, 0X1);
            goto L_80105CAC;
    }
    // 0x80105C78: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80105C7C: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
L_80105C80:
    // 0x80105C80: jal         0x800B31B8
    // 0x80105C84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800B31B8(rdram, ctx);
        goto after_1;
    // 0x80105C84: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x80105C88: beq         $v0, $zero, L_80105C9C
    if (ctx->r2 == 0) {
        // 0x80105C8C: sll         $a0, $s0, 16
        ctx->r4 = S32(ctx->r16 << 16);
            goto L_80105C9C;
    }
    // 0x80105C8C: sll         $a0, $s0, 16
    ctx->r4 = S32(ctx->r16 << 16);
    // 0x80105C90: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80105C94: jal         0x801060E4
    // 0x80105C98: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    func_801060E4(rdram, ctx);
        goto after_2;
    // 0x80105C98: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    after_2:
L_80105C9C:
    // 0x80105C9C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80105CA0: slt         $at, $s0, $s1
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r17) ? 1 : 0;
    // 0x80105CA4: bnel        $at, $zero, L_80105C80
    if (ctx->r1 != 0) {
        // 0x80105CA8: lw          $a0, 0x0($s2)
        ctx->r4 = MEM_W(ctx->r18, 0X0);
            goto L_80105C80;
    }
    goto skip_0;
    // 0x80105CA8: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    skip_0:
L_80105CAC:
    // 0x80105CAC: jal         0x800B3248
    // 0x80105CB0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    func_800B3248(rdram, ctx);
        goto after_3;
    // 0x80105CB0: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    after_3:
    // 0x80105CB4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80105CB8: sw          $zero, 0x0($s2)
    MEM_W(0X0, ctx->r18) = 0;
    // 0x80105CBC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x80105CC0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80105CC4: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80105CC8: jr          $ra
    // 0x80105CCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80105CCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80105CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105CD0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80105CD4: sw          $s4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r20;
    // 0x80105CD8: lui         $s4, 0x8013
    ctx->r20 = S32(0X8013 << 16);
    // 0x80105CDC: addiu       $s4, $s4, 0x6ED0
    ctx->r20 = ADD32(ctx->r20, 0X6ED0);
    // 0x80105CE0: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    // 0x80105CE4: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80105CE8: sw          $s5, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r21;
    // 0x80105CEC: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x80105CF0: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x80105CF4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80105CF8: beq         $a0, $zero, L_80105DD8
    if (ctx->r4 == 0) {
        // 0x80105CFC: sw          $s0, 0x14($sp)
        MEM_W(0X14, ctx->r29) = ctx->r16;
            goto L_80105DD8;
    }
    // 0x80105CFC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80105D00: jal         0x800B3034
    // 0x80105D04: nop

    func_800B3034(rdram, ctx);
        goto after_0;
    // 0x80105D04: nop

    after_0:
    // 0x80105D08: slti        $at, $v0, 0x2
    ctx->r1 = SIGNED(ctx->r2) < 0X2 ? 1 : 0;
    // 0x80105D0C: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x80105D10: bne         $at, $zero, L_80105DC8
    if (ctx->r1 != 0) {
        // 0x80105D14: addiu       $s3, $zero, 0x1
        ctx->r19 = ADD32(0, 0X1);
            goto L_80105DC8;
    }
    // 0x80105D14: addiu       $s3, $zero, 0x1
    ctx->r19 = ADD32(0, 0X1);
    // 0x80105D18: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x80105D1C: addiu       $s2, $s2, 0x4440
    ctx->r18 = ADD32(ctx->r18, 0X4440);
    // 0x80105D20: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
L_80105D24:
    // 0x80105D24: jal         0x800B31B8
    // 0x80105D28: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800B31B8(rdram, ctx);
        goto after_1;
    // 0x80105D28: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_1:
    // 0x80105D2C: beq         $v0, $zero, L_80105DB8
    if (ctx->r2 == 0) {
        // 0x80105D30: or          $a1, $s3, $zero
        ctx->r5 = ctx->r19 | 0;
            goto L_80105DB8;
    }
    // 0x80105D30: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80105D34: jal         0x800B301C
    // 0x80105D38: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    func_800B301C(rdram, ctx);
        goto after_2;
    // 0x80105D38: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    after_2:
    // 0x80105D3C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80105D40: jal         0x8001BAFC
    // 0x80105D44: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    defrag(rdram, ctx);
        goto after_3;
    // 0x80105D44: lw          $a0, 0x0($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X0);
    after_3:
    // 0x80105D48: sll         $a0, $s3, 16
    ctx->r4 = S32(ctx->r19 << 16);
    // 0x80105D4C: sra         $t6, $a0, 16
    ctx->r14 = S32(SIGNED(ctx->r4) >> 16);
    // 0x80105D50: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80105D54: jal         0x801063EC
    // 0x80105D58: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_801063EC(rdram, ctx);
        goto after_4;
    // 0x80105D58: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x80105D5C: jal         0x800B2F58
    // 0x80105D60: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_800B2F58(rdram, ctx);
        goto after_5;
    // 0x80105D60: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_5:
    // 0x80105D64: sw          $v0, 0x4($s0)
    MEM_W(0X4, ctx->r16) = ctx->r2;
    // 0x80105D68: jal         0x800B296C
    // 0x80105D6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800B296C(rdram, ctx);
        goto after_6;
    // 0x80105D6C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_6:
    // 0x80105D70: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80105D74: jal         0x800B28C4
    // 0x80105D78: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_800B28C4(rdram, ctx);
        goto after_7;
    // 0x80105D78: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_7:
    // 0x80105D7C: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x80105D80: beq         $at, $zero, L_80105DB8
    if (ctx->r1 == 0) {
        // 0x80105D84: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80105DB8;
    }
    // 0x80105D84: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80105D88: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
L_80105D8C:
    // 0x80105D8C: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80105D90: addu        $t9, $s2, $t8
    ctx->r25 = ADD32(ctx->r18, ctx->r24);
    // 0x80105D94: lw          $v0, 0xC($t9)
    ctx->r2 = MEM_W(ctx->r25, 0XC);
    // 0x80105D98: beql        $v0, $zero, L_80105DAC
    if (ctx->r2 == 0) {
        // 0x80105D9C: addiu       $s0, $s0, 0xA8
        ctx->r16 = ADD32(ctx->r16, 0XA8);
            goto L_80105DAC;
    }
    goto skip_0;
    // 0x80105D9C: addiu       $s0, $s0, 0xA8
    ctx->r16 = ADD32(ctx->r16, 0XA8);
    skip_0:
    // 0x80105DA0: jalr        $v0
    // 0x80105DA4: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_8;
    // 0x80105DA4: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    after_8:
    // 0x80105DA8: addiu       $s0, $s0, 0xA8
    ctx->r16 = ADD32(ctx->r16, 0XA8);
L_80105DAC:
    // 0x80105DAC: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x80105DB0: bnel        $at, $zero, L_80105D8C
    if (ctx->r1 != 0) {
        // 0x80105DB4: lh          $t7, 0x4($s0)
        ctx->r15 = MEM_H(ctx->r16, 0X4);
            goto L_80105D8C;
    }
    goto skip_1;
    // 0x80105DB4: lh          $t7, 0x4($s0)
    ctx->r15 = MEM_H(ctx->r16, 0X4);
    skip_1:
L_80105DB8:
    // 0x80105DB8: addiu       $s3, $s3, 0x1
    ctx->r19 = ADD32(ctx->r19, 0X1);
    // 0x80105DBC: slt         $at, $s3, $s5
    ctx->r1 = SIGNED(ctx->r19) < SIGNED(ctx->r21) ? 1 : 0;
    // 0x80105DC0: bnel        $at, $zero, L_80105D24
    if (ctx->r1 != 0) {
        // 0x80105DC4: lw          $a0, 0x0($s4)
        ctx->r4 = MEM_W(ctx->r20, 0X0);
            goto L_80105D24;
    }
    goto skip_2;
    // 0x80105DC4: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    skip_2:
L_80105DC8:
    // 0x80105DC8: jal         0x800B32E4
    // 0x80105DCC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    func_800B32E4(rdram, ctx);
        goto after_9;
    // 0x80105DCC: lw          $a0, 0x0($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X0);
    after_9:
    // 0x80105DD0: sw          $v0, 0x0($s4)
    MEM_W(0X0, ctx->r20) = ctx->r2;
    // 0x80105DD4: sw          $zero, 0x4($s4)
    MEM_W(0X4, ctx->r20) = 0;
L_80105DD8:
    // 0x80105DD8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80105DDC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80105DE0: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80105DE4: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x80105DE8: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x80105DEC: lw          $s4, 0x24($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X24);
    // 0x80105DF0: lw          $s5, 0x28($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X28);
    // 0x80105DF4: jr          $ra
    // 0x80105DF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80105DF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80105DFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80105DFC: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80105E00: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80105E04: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80105E08: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80105E0C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80105E10: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80105E14: lh          $t6, 0x90($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X90);
    // 0x80105E18: lui         $s2, 0x8013
    ctx->r18 = S32(0X8013 << 16);
    // 0x80105E1C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80105E20: bne         $t6, $zero, L_801060CC
    if (ctx->r14 != 0) {
        // 0x80105E24: addiu       $s2, $s2, 0x6ED0
        ctx->r18 = ADD32(ctx->r18, 0X6ED0);
            goto L_801060CC;
    }
    // 0x80105E24: addiu       $s2, $s2, 0x6ED0
    ctx->r18 = ADD32(ctx->r18, 0X6ED0);
    // 0x80105E28: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80105E2C: jal         0x800B3044
    // 0x80105E30: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800B3044(rdram, ctx);
        goto after_0;
    // 0x80105E30: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x80105E34: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80105E38: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    // 0x80105E3C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80105E40: sh          $t7, 0x90($s0)
    MEM_H(0X90, ctx->r16) = ctx->r15;
    // 0x80105E44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80105E48: jal         0x800888A0
    // 0x80105E4C: lhu         $a0, 0x14($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X14);
    _glidmake_entrypoint_5(rdram, ctx);
        goto after_1;
    // 0x80105E4C: lhu         $a0, 0x14($t8)
    ctx->r4 = MEM_HU(ctx->r24, 0X14);
    after_1:
    // 0x80105E50: bne         $v0, $zero, L_80105E6C
    if (ctx->r2 != 0) {
        // 0x80105E54: sw          $v0, 0x0($s1)
        MEM_W(0X0, ctx->r17) = ctx->r2;
            goto L_80105E6C;
    }
    // 0x80105E54: sw          $v0, 0x0($s1)
    MEM_W(0X0, ctx->r17) = ctx->r2;
    // 0x80105E58: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80105E5C: jal         0x800B32C0
    // 0x80105E60: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_800B32C0(rdram, ctx);
        goto after_2;
    // 0x80105E60: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_2:
    // 0x80105E64: b           L_801060CC
    // 0x80105E68: sh          $zero, 0x90($s0)
    MEM_H(0X90, ctx->r16) = 0;
        goto L_801060CC;
    // 0x80105E68: sh          $zero, 0x90($s0)
    MEM_H(0X90, ctx->r16) = 0;
L_80105E6C:
    // 0x80105E6C: addiu       $a0, $zero, 0xA8
    ctx->r4 = ADD32(0, 0XA8);
    // 0x80105E70: jal         0x800B2D70
    // 0x80105E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800B2D70(rdram, ctx);
        goto after_3;
    // 0x80105E74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80105E78: sw          $v0, 0x4($s1)
    MEM_W(0X4, ctx->r17) = ctx->r2;
    // 0x80105E7C: jal         0x80088880
    // 0x80105E80: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    _glidmake_entrypoint_1(rdram, ctx);
        goto after_4;
    // 0x80105E80: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    after_4:
    // 0x80105E84: sw          $v0, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r2;
    // 0x80105E88: lh          $t9, 0x0($v0)
    ctx->r25 = MEM_H(ctx->r2, 0X0);
    // 0x80105E8C: addiu       $s1, $v0, 0x2
    ctx->r17 = ADD32(ctx->r2, 0X2);
    // 0x80105E90: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x80105E94: blezl       $t9, L_801060D0
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80105E98: lw          $ra, 0x2C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X2C);
            goto L_801060D0;
    }
    goto skip_0;
    // 0x80105E98: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    skip_0:
L_80105E9C:
    // 0x80105E9C: lh          $a1, 0x0($s1)
    ctx->r5 = MEM_H(ctx->r17, 0X0);
    // 0x80105EA0: slti        $at, $a1, 0x65
    ctx->r1 = SIGNED(ctx->r5) < 0X65 ? 1 : 0;
    // 0x80105EA4: bne         $at, $zero, L_80105ECC
    if (ctx->r1 != 0) {
        // 0x80105EA8: slti        $at, $a1, 0xC8
        ctx->r1 = SIGNED(ctx->r5) < 0XC8 ? 1 : 0;
            goto L_80105ECC;
    }
    // 0x80105EA8: slti        $at, $a1, 0xC8
    ctx->r1 = SIGNED(ctx->r5) < 0XC8 ? 1 : 0;
    // 0x80105EAC: beq         $at, $zero, L_80105ECC
    if (ctx->r1 == 0) {
        // 0x80105EB0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80105ECC;
    }
    // 0x80105EB0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80105EB4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80105EB8: addiu       $a3, $a1, -0x64
    ctx->r7 = ADD32(ctx->r5, -0X64);
    // 0x80105EBC: jal         0x80106320
    // 0x80105EC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80106320(rdram, ctx);
        goto after_5;
    // 0x80105EC0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80105EC4: b           L_801060AC
    // 0x80105EC8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
        goto L_801060AC;
    // 0x80105EC8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_80105ECC:
    // 0x80105ECC: slti        $at, $a1, 0xC8
    ctx->r1 = SIGNED(ctx->r5) < 0XC8 ? 1 : 0;
    // 0x80105ED0: bne         $at, $zero, L_80105EF8
    if (ctx->r1 != 0) {
        // 0x80105ED4: slti        $at, $a1, 0x12C
        ctx->r1 = SIGNED(ctx->r5) < 0X12C ? 1 : 0;
            goto L_80105EF8;
    }
    // 0x80105ED4: slti        $at, $a1, 0x12C
    ctx->r1 = SIGNED(ctx->r5) < 0X12C ? 1 : 0;
    // 0x80105ED8: beq         $at, $zero, L_80105EF8
    if (ctx->r1 == 0) {
        // 0x80105EDC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80105EF8;
    }
    // 0x80105EDC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80105EE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80105EE4: addiu       $a3, $a1, -0xC8
    ctx->r7 = ADD32(ctx->r5, -0XC8);
    // 0x80105EE8: jal         0x80106320
    // 0x80105EEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80106320(rdram, ctx);
        goto after_6;
    // 0x80105EEC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x80105EF0: b           L_801060AC
    // 0x80105EF4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
        goto L_801060AC;
    // 0x80105EF4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_80105EF8:
    // 0x80105EF8: slti        $at, $a1, 0x12C
    ctx->r1 = SIGNED(ctx->r5) < 0X12C ? 1 : 0;
    // 0x80105EFC: bne         $at, $zero, L_80105F24
    if (ctx->r1 != 0) {
        // 0x80105F00: slti        $at, $a1, 0x190
        ctx->r1 = SIGNED(ctx->r5) < 0X190 ? 1 : 0;
            goto L_80105F24;
    }
    // 0x80105F00: slti        $at, $a1, 0x190
    ctx->r1 = SIGNED(ctx->r5) < 0X190 ? 1 : 0;
    // 0x80105F04: beq         $at, $zero, L_80105F24
    if (ctx->r1 == 0) {
        // 0x80105F08: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80105F24;
    }
    // 0x80105F08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80105F0C: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x80105F10: addiu       $a3, $a1, -0x12C
    ctx->r7 = ADD32(ctx->r5, -0X12C);
    // 0x80105F14: jal         0x80106320
    // 0x80105F18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80106320(rdram, ctx);
        goto after_7;
    // 0x80105F18: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x80105F1C: b           L_801060AC
    // 0x80105F20: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
        goto L_801060AC;
    // 0x80105F20: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_80105F24:
    // 0x80105F24: slti        $at, $a1, 0x190
    ctx->r1 = SIGNED(ctx->r5) < 0X190 ? 1 : 0;
    // 0x80105F28: bne         $at, $zero, L_80105F50
    if (ctx->r1 != 0) {
        // 0x80105F2C: slti        $at, $a1, 0x1F4
        ctx->r1 = SIGNED(ctx->r5) < 0X1F4 ? 1 : 0;
            goto L_80105F50;
    }
    // 0x80105F2C: slti        $at, $a1, 0x1F4
    ctx->r1 = SIGNED(ctx->r5) < 0X1F4 ? 1 : 0;
    // 0x80105F30: beq         $at, $zero, L_80105F50
    if (ctx->r1 == 0) {
        // 0x80105F34: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80105F50;
    }
    // 0x80105F34: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80105F38: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80105F3C: addiu       $a3, $a1, -0x190
    ctx->r7 = ADD32(ctx->r5, -0X190);
    // 0x80105F40: jal         0x80106320
    // 0x80105F44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80106320(rdram, ctx);
        goto after_8;
    // 0x80105F44: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_8:
    // 0x80105F48: b           L_801060AC
    // 0x80105F4C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
        goto L_801060AC;
    // 0x80105F4C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_80105F50:
    // 0x80105F50: slti        $at, $a1, 0x1F4
    ctx->r1 = SIGNED(ctx->r5) < 0X1F4 ? 1 : 0;
    // 0x80105F54: bne         $at, $zero, L_80105F7C
    if (ctx->r1 != 0) {
        // 0x80105F58: slti        $at, $a1, 0x258
        ctx->r1 = SIGNED(ctx->r5) < 0X258 ? 1 : 0;
            goto L_80105F7C;
    }
    // 0x80105F58: slti        $at, $a1, 0x258
    ctx->r1 = SIGNED(ctx->r5) < 0X258 ? 1 : 0;
    // 0x80105F5C: beq         $at, $zero, L_80105F7C
    if (ctx->r1 == 0) {
        // 0x80105F60: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80105F7C;
    }
    // 0x80105F60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80105F64: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80105F68: addiu       $a3, $a1, -0x1F4
    ctx->r7 = ADD32(ctx->r5, -0X1F4);
    // 0x80105F6C: jal         0x80106320
    // 0x80105F70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80106320(rdram, ctx);
        goto after_9;
    // 0x80105F70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
    // 0x80105F74: b           L_801060AC
    // 0x80105F78: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
        goto L_801060AC;
    // 0x80105F78: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_80105F7C:
    // 0x80105F7C: slti        $at, $a1, 0x258
    ctx->r1 = SIGNED(ctx->r5) < 0X258 ? 1 : 0;
    // 0x80105F80: bne         $at, $zero, L_80105FA8
    if (ctx->r1 != 0) {
        // 0x80105F84: slti        $at, $a1, 0x2BC
        ctx->r1 = SIGNED(ctx->r5) < 0X2BC ? 1 : 0;
            goto L_80105FA8;
    }
    // 0x80105F84: slti        $at, $a1, 0x2BC
    ctx->r1 = SIGNED(ctx->r5) < 0X2BC ? 1 : 0;
    // 0x80105F88: beq         $at, $zero, L_80105FA8
    if (ctx->r1 == 0) {
        // 0x80105F8C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80105FA8;
    }
    // 0x80105F8C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80105F90: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x80105F94: addiu       $a3, $a1, -0x258
    ctx->r7 = ADD32(ctx->r5, -0X258);
    // 0x80105F98: jal         0x80106320
    // 0x80105F9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80106320(rdram, ctx);
        goto after_10;
    // 0x80105F9C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x80105FA0: b           L_801060AC
    // 0x80105FA4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
        goto L_801060AC;
    // 0x80105FA4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_80105FA8:
    // 0x80105FA8: slti        $at, $a1, 0x2BC
    ctx->r1 = SIGNED(ctx->r5) < 0X2BC ? 1 : 0;
    // 0x80105FAC: bne         $at, $zero, L_80105FD4
    if (ctx->r1 != 0) {
        // 0x80105FB0: slti        $at, $a1, 0x320
        ctx->r1 = SIGNED(ctx->r5) < 0X320 ? 1 : 0;
            goto L_80105FD4;
    }
    // 0x80105FB0: slti        $at, $a1, 0x320
    ctx->r1 = SIGNED(ctx->r5) < 0X320 ? 1 : 0;
    // 0x80105FB4: beq         $at, $zero, L_80105FD4
    if (ctx->r1 == 0) {
        // 0x80105FB8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80105FD4;
    }
    // 0x80105FB8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80105FBC: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80105FC0: addiu       $a3, $a1, -0x2BC
    ctx->r7 = ADD32(ctx->r5, -0X2BC);
    // 0x80105FC4: jal         0x80106320
    // 0x80105FC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80106320(rdram, ctx);
        goto after_11;
    // 0x80105FC8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x80105FCC: b           L_801060AC
    // 0x80105FD0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
        goto L_801060AC;
    // 0x80105FD0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_80105FD4:
    // 0x80105FD4: slti        $at, $a1, 0x320
    ctx->r1 = SIGNED(ctx->r5) < 0X320 ? 1 : 0;
    // 0x80105FD8: bne         $at, $zero, L_80106000
    if (ctx->r1 != 0) {
        // 0x80105FDC: slti        $at, $a1, 0x384
        ctx->r1 = SIGNED(ctx->r5) < 0X384 ? 1 : 0;
            goto L_80106000;
    }
    // 0x80105FDC: slti        $at, $a1, 0x384
    ctx->r1 = SIGNED(ctx->r5) < 0X384 ? 1 : 0;
    // 0x80105FE0: beq         $at, $zero, L_80106000
    if (ctx->r1 == 0) {
        // 0x80105FE4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80106000;
    }
    // 0x80105FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80105FE8: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80105FEC: addiu       $a3, $a1, -0x320
    ctx->r7 = ADD32(ctx->r5, -0X320);
    // 0x80105FF0: jal         0x80106320
    // 0x80105FF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80106320(rdram, ctx);
        goto after_12;
    // 0x80105FF4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x80105FF8: b           L_801060AC
    // 0x80105FFC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
        goto L_801060AC;
    // 0x80105FFC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_80106000:
    // 0x80106000: slti        $at, $a1, 0x384
    ctx->r1 = SIGNED(ctx->r5) < 0X384 ? 1 : 0;
    // 0x80106004: bne         $at, $zero, L_8010602C
    if (ctx->r1 != 0) {
        // 0x80106008: slti        $at, $a1, 0x3E8
        ctx->r1 = SIGNED(ctx->r5) < 0X3E8 ? 1 : 0;
            goto L_8010602C;
    }
    // 0x80106008: slti        $at, $a1, 0x3E8
    ctx->r1 = SIGNED(ctx->r5) < 0X3E8 ? 1 : 0;
    // 0x8010600C: beq         $at, $zero, L_8010602C
    if (ctx->r1 == 0) {
        // 0x80106010: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010602C;
    }
    // 0x80106010: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106014: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80106018: addiu       $a3, $a1, -0x384
    ctx->r7 = ADD32(ctx->r5, -0X384);
    // 0x8010601C: jal         0x80106320
    // 0x80106020: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80106320(rdram, ctx);
        goto after_13;
    // 0x80106020: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x80106024: b           L_801060AC
    // 0x80106028: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
        goto L_801060AC;
    // 0x80106028: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_8010602C:
    // 0x8010602C: slti        $at, $a1, 0x4B0
    ctx->r1 = SIGNED(ctx->r5) < 0X4B0 ? 1 : 0;
    // 0x80106030: bne         $at, $zero, L_80106058
    if (ctx->r1 != 0) {
        // 0x80106034: slti        $at, $a1, 0x6A4
        ctx->r1 = SIGNED(ctx->r5) < 0X6A4 ? 1 : 0;
            goto L_80106058;
    }
    // 0x80106034: slti        $at, $a1, 0x6A4
    ctx->r1 = SIGNED(ctx->r5) < 0X6A4 ? 1 : 0;
    // 0x80106038: beq         $at, $zero, L_80106058
    if (ctx->r1 == 0) {
        // 0x8010603C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80106058;
    }
    // 0x8010603C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106040: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x80106044: addiu       $a3, $a1, -0x4B0
    ctx->r7 = ADD32(ctx->r5, -0X4B0);
    // 0x80106048: jal         0x80106320
    // 0x8010604C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80106320(rdram, ctx);
        goto after_14;
    // 0x8010604C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_14:
    // 0x80106050: b           L_801060AC
    // 0x80106054: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
        goto L_801060AC;
    // 0x80106054: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_80106058:
    // 0x80106058: slti        $at, $a1, 0x6A4
    ctx->r1 = SIGNED(ctx->r5) < 0X6A4 ? 1 : 0;
    // 0x8010605C: bne         $at, $zero, L_80106084
    if (ctx->r1 != 0) {
        // 0x80106060: slti        $at, $a1, 0x708
        ctx->r1 = SIGNED(ctx->r5) < 0X708 ? 1 : 0;
            goto L_80106084;
    }
    // 0x80106060: slti        $at, $a1, 0x708
    ctx->r1 = SIGNED(ctx->r5) < 0X708 ? 1 : 0;
    // 0x80106064: beq         $at, $zero, L_80106084
    if (ctx->r1 == 0) {
        // 0x80106068: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80106084;
    }
    // 0x80106068: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010606C: addiu       $a2, $zero, 0xA
    ctx->r6 = ADD32(0, 0XA);
    // 0x80106070: addiu       $a3, $a1, -0x6A4
    ctx->r7 = ADD32(ctx->r5, -0X6A4);
    // 0x80106074: jal         0x80106320
    // 0x80106078: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80106320(rdram, ctx);
        goto after_15;
    // 0x80106078: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_15:
    // 0x8010607C: b           L_801060AC
    // 0x80106080: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
        goto L_801060AC;
    // 0x80106080: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_80106084:
    // 0x80106084: slti        $at, $a1, 0x76C
    ctx->r1 = SIGNED(ctx->r5) < 0X76C ? 1 : 0;
    // 0x80106088: bne         $at, $zero, L_801060A8
    if (ctx->r1 != 0) {
        // 0x8010608C: slti        $at, $a1, 0x7D0
        ctx->r1 = SIGNED(ctx->r5) < 0X7D0 ? 1 : 0;
            goto L_801060A8;
    }
    // 0x8010608C: slti        $at, $a1, 0x7D0
    ctx->r1 = SIGNED(ctx->r5) < 0X7D0 ? 1 : 0;
    // 0x80106090: beq         $at, $zero, L_801060A8
    if (ctx->r1 == 0) {
        // 0x80106094: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801060A8;
    }
    // 0x80106094: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106098: addiu       $a2, $zero, 0x9
    ctx->r6 = ADD32(0, 0X9);
    // 0x8010609C: addiu       $a3, $a1, -0x76C
    ctx->r7 = ADD32(ctx->r5, -0X76C);
    // 0x801060A0: jal         0x80106320
    // 0x801060A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_80106320(rdram, ctx);
        goto after_16;
    // 0x801060A4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_16:
L_801060A8:
    // 0x801060A8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
L_801060AC:
    // 0x801060AC: lh          $t0, 0x2($s1)
    ctx->r8 = MEM_H(ctx->r17, 0X2);
    // 0x801060B0: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x801060B4: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x801060B8: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x801060BC: addu        $s1, $s1, $t1
    ctx->r17 = ADD32(ctx->r17, ctx->r9);
    // 0x801060C0: slt         $at, $s2, $t3
    ctx->r1 = SIGNED(ctx->r18) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x801060C4: bne         $at, $zero, L_80105E9C
    if (ctx->r1 != 0) {
        // 0x801060C8: addiu       $s1, $s1, 0x4
        ctx->r17 = ADD32(ctx->r17, 0X4);
            goto L_80105E9C;
    }
    // 0x801060C8: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
L_801060CC:
    // 0x801060CC: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
L_801060D0:
    // 0x801060D0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801060D4: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x801060D8: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x801060DC: jr          $ra
    // 0x801060E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x801060E0: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_801060E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801060E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801060E8: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x801060EC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801060F0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801060F4: lw          $a0, 0x6ED0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6ED0);
    // 0x801060F8: jal         0x800B301C
    // 0x801060FC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x801060FC: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_0:
    // 0x80106100: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80106104: jal         0x800B2D28
    // 0x80106108: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    func_800B2D28(rdram, ctx);
        goto after_1;
    // 0x80106108: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    after_1:
    // 0x8010610C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80106110: jal         0x80088898
    // 0x80106114: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    _glidmake_entrypoint_4(rdram, ctx);
        goto after_2;
    // 0x80106114: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    after_2:
    // 0x80106118: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010611C: lw          $a0, 0x6ED0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6ED0);
    // 0x80106120: jal         0x800B32C0
    // 0x80106124: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    func_800B32C0(rdram, ctx);
        goto after_3;
    // 0x80106124: lh          $a1, 0x22($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X22);
    after_3:
    // 0x80106128: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010612C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80106130: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106138(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106138: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8010613C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80106140: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x80106144: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x80106148: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010614C: jal         0x801063C0
    // 0x80106150: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    func_801063C0(rdram, ctx);
        goto after_0;
    // 0x80106150: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_0:
    // 0x80106154: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80106158: jal         0x800B296C
    // 0x8010615C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    func_800B296C(rdram, ctx);
        goto after_1;
    // 0x8010615C: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    after_1:
    // 0x80106160: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80106164: jal         0x800B28C4
    // 0x80106168: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    func_800B28C4(rdram, ctx);
        goto after_2;
    // 0x80106168: lw          $a0, 0x4($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X4);
    after_2:
    // 0x8010616C: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x80106170: beq         $at, $zero, L_801061AC
    if (ctx->r1 == 0) {
        // 0x80106174: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801061AC;
    }
    // 0x80106174: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80106178: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x8010617C: addiu       $s2, $s2, 0x4440
    ctx->r18 = ADD32(ctx->r18, 0X4440);
    // 0x80106180: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
L_80106184:
    // 0x80106184: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x80106188: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8010618C: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x80106190: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80106194: jalr        $t9
    // 0x80106198: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80106198: nop

    after_3:
    // 0x8010619C: addiu       $s0, $s0, 0xA8
    ctx->r16 = ADD32(ctx->r16, 0XA8);
    // 0x801061A0: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x801061A4: bnel        $at, $zero, L_80106184
    if (ctx->r1 != 0) {
        // 0x801061A8: lh          $t6, 0x4($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X4);
            goto L_80106184;
    }
    goto skip_0;
    // 0x801061A8: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    skip_0:
L_801061AC:
    // 0x801061AC: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x801061B0: jal         0x801060E4
    // 0x801061B4: lh          $a0, 0x90($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X90);
    func_801060E4(rdram, ctx);
        goto after_4;
    // 0x801061B4: lh          $a0, 0x90($t0)
    ctx->r4 = MEM_H(ctx->r8, 0X90);
    after_4:
    // 0x801061B8: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x801061BC: sh          $zero, 0x90($t1)
    MEM_H(0X90, ctx->r9) = 0;
    // 0x801061C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801061C4: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x801061C8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x801061CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801061D0: jr          $ra
    // 0x801061D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x801061D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_801061D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801061D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801061DC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801061E0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x801061E4: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801061E8: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x801061EC: jal         0x801063C0
    // 0x801061F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    func_801063C0(rdram, ctx);
        goto after_0;
    // 0x801061F0: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    after_0:
    // 0x801061F4: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x801061F8: jal         0x80103AA0
    // 0x801061FC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    func_80103AA0(rdram, ctx);
        goto after_1;
    // 0x801061FC: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    after_1:
    // 0x80106200: beq         $v0, $zero, L_801062E4
    if (ctx->r2 == 0) {
        // 0x80106204: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_801062E4;
    }
    // 0x80106204: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80106208: lw          $t6, 0x0($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X0);
    // 0x8010620C: jal         0x800D62E4
    // 0x80106210: lhu         $a0, 0x14($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X14);
    func_800D62E4(rdram, ctx);
        goto after_2;
    // 0x80106210: lhu         $a0, 0x14($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X14);
    after_2:
    // 0x80106214: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106218: jal         0x80103CDC
    // 0x8010621C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80103CDC(rdram, ctx);
        goto after_3;
    // 0x8010621C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_3:
    // 0x80106220: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x80106224: jal         0x80088688
    // 0x80106228: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    _glid_entrypoint_5(rdram, ctx);
        goto after_4;
    // 0x80106228: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x8010622C: lbu         $t7, 0x70($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X70);
    // 0x80106230: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106234: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80106238: beql        $t8, $zero, L_80106258
    if (ctx->r24 == 0) {
        // 0x8010623C: lw          $t9, 0x7C($s0)
        ctx->r25 = MEM_W(ctx->r16, 0X7C);
            goto L_80106258;
    }
    goto skip_0;
    // 0x8010623C: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
    skip_0:
    // 0x80106240: jal         0x80103D00
    // 0x80106244: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_80103D00(rdram, ctx);
        goto after_5;
    // 0x80106244: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_5:
    // 0x80106248: lw          $a0, 0x0($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X0);
    // 0x8010624C: jal         0x80088690
    // 0x80106250: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    _glid_entrypoint_6(rdram, ctx);
        goto after_6;
    // 0x80106250: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_6:
    // 0x80106254: lw          $t9, 0x7C($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X7C);
L_80106258:
    // 0x80106258: sll         $t1, $t9, 19
    ctx->r9 = S32(ctx->r25 << 19);
    // 0x8010625C: bgezl       $t1, L_80106300
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80106260: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80106300;
    }
    goto skip_1;
    // 0x80106260: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_1:
    // 0x80106264: lw          $t2, 0x74($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X74);
    // 0x80106268: sll         $t4, $t2, 9
    ctx->r12 = S32(ctx->r10 << 9);
    // 0x8010626C: bltzl       $t4, L_80106300
    if (SIGNED(ctx->r12) < 0) {
        // 0x80106270: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80106300;
    }
    goto skip_2;
    // 0x80106270: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_2:
    // 0x80106274: jal         0x800B296C
    // 0x80106278: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    func_800B296C(rdram, ctx);
        goto after_7;
    // 0x80106278: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_7:
    // 0x8010627C: lw          $t5, 0x4($s2)
    ctx->r13 = MEM_W(ctx->r18, 0X4);
    // 0x80106280: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80106284: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80106288: sw          $t5, 0x6ED4($at)
    MEM_W(0X6ED4, ctx->r1) = ctx->r13;
    // 0x8010628C: jal         0x800B28C4
    // 0x80106290: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    func_800B28C4(rdram, ctx);
        goto after_8;
    // 0x80106290: lw          $a0, 0x4($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X4);
    after_8:
    // 0x80106294: sltu        $at, $v0, $s1
    ctx->r1 = ctx->r2 < ctx->r17 ? 1 : 0;
    // 0x80106298: beq         $at, $zero, L_801062FC
    if (ctx->r1 == 0) {
        // 0x8010629C: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_801062FC;
    }
    // 0x8010629C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x801062A0: lui         $s2, 0x8012
    ctx->r18 = S32(0X8012 << 16);
    // 0x801062A4: addiu       $s2, $s2, 0x4440
    ctx->r18 = ADD32(ctx->r18, 0X4440);
    // 0x801062A8: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
L_801062AC:
    // 0x801062AC: addiu       $a0, $s0, 0x8
    ctx->r4 = ADD32(ctx->r16, 0X8);
    // 0x801062B0: lw          $a1, 0x0($s0)
    ctx->r5 = MEM_W(ctx->r16, 0X0);
    // 0x801062B4: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x801062B8: addu        $t8, $s2, $t7
    ctx->r24 = ADD32(ctx->r18, ctx->r15);
    // 0x801062BC: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x801062C0: lh          $a2, 0x6($s0)
    ctx->r6 = MEM_H(ctx->r16, 0X6);
    // 0x801062C4: jalr        $t9
    // 0x801062C8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x801062C8: nop

    after_9:
    // 0x801062CC: addiu       $s0, $s0, 0xA8
    ctx->r16 = ADD32(ctx->r16, 0XA8);
    // 0x801062D0: sltu        $at, $s0, $s1
    ctx->r1 = ctx->r16 < ctx->r17 ? 1 : 0;
    // 0x801062D4: bnel        $at, $zero, L_801062AC
    if (ctx->r1 != 0) {
        // 0x801062D8: lh          $t6, 0x4($s0)
        ctx->r14 = MEM_H(ctx->r16, 0X4);
            goto L_801062AC;
    }
    goto skip_3;
    // 0x801062D8: lh          $t6, 0x4($s0)
    ctx->r14 = MEM_H(ctx->r16, 0X4);
    skip_3:
    // 0x801062DC: b           L_80106300
    // 0x801062E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
        goto L_80106300;
    // 0x801062E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_801062E4:
    // 0x801062E4: lw          $t0, 0x70($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X70);
    // 0x801062E8: sll         $t2, $t0, 28
    ctx->r10 = S32(ctx->r8 << 28);
    // 0x801062EC: bgezl       $t2, L_80106300
    if (SIGNED(ctx->r10) >= 0) {
        // 0x801062F0: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80106300;
    }
    goto skip_4;
    // 0x801062F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_4:
    // 0x801062F4: jal         0x8010381C
    // 0x801062F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010381C(rdram, ctx);
        goto after_10;
    // 0x801062F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
L_801062FC:
    // 0x801062FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80106300:
    // 0x80106300: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80106304: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x80106308: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8010630C: jr          $ra
    // 0x80106310: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80106310: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80106314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106314: lui         $v0, 0x8013
    ctx->r2 = S32(0X8013 << 16);
    // 0x80106318: jr          $ra
    // 0x8010631C: lw          $v0, 0x6ED8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6ED8);
    return;
    // 0x8010631C: lw          $v0, 0x6ED8($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X6ED8);
;}
RECOMP_FUNC void func_80106320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106320: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80106324: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80106328: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8010632C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80106330: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80106334: jal         0x801063C0
    // 0x80106338: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    func_801063C0(rdram, ctx);
        goto after_0;
    // 0x80106338: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x8010633C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80106340: jal         0x800B2974
    // 0x80106344: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    func_800B2974(rdram, ctx);
        goto after_1;
    // 0x80106344: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    after_1:
    // 0x80106348: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8010634C: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80106350: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80106354: sh          $t6, 0x4($v0)
    MEM_H(0X4, ctx->r2) = ctx->r14;
    // 0x80106358: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8010635C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80106360: addiu       $a0, $v0, 0x8
    ctx->r4 = ADD32(ctx->r2, 0X8);
    // 0x80106364: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80106368: sw          $t8, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r24;
    // 0x8010636C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80106370: sh          $t9, 0x6($v0)
    MEM_H(0X6, ctx->r2) = ctx->r25;
    // 0x80106374: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80106378: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8010637C: lw          $a1, 0x34($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X34);
    // 0x80106380: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80106384: sw          $t1, 0x6ED8($at)
    MEM_W(0X6ED8, ctx->r1) = ctx->r9;
    // 0x80106388: lh          $a3, 0x6($v0)
    ctx->r7 = MEM_H(ctx->r2, 0X6);
    // 0x8010638C: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x80106390: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80106394: lh          $t3, 0x4($v0)
    ctx->r11 = MEM_H(ctx->r2, 0X4);
    // 0x80106398: sll         $t4, $t3, 4
    ctx->r12 = S32(ctx->r11 << 4);
    // 0x8010639C: addu        $t9, $t9, $t4
    ctx->r25 = ADD32(ctx->r25, ctx->r12);
    // 0x801063A0: lw          $t9, 0x4440($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4440);
    // 0x801063A4: jalr        $t9
    // 0x801063A8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x801063A8: nop

    after_2:
    // 0x801063AC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801063B0: lw          $v0, 0x20($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X20);
    // 0x801063B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801063B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801063C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801063C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801063C4: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801063C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801063CC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801063D0: lw          $a0, 0x6ED0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6ED0);
    // 0x801063D4: jal         0x800B301C
    // 0x801063D8: lh          $a1, 0x90($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X90);
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x801063D8: lh          $a1, 0x90($a2)
    ctx->r5 = MEM_H(ctx->r6, 0X90);
    after_0:
    // 0x801063DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801063E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801063E4: jr          $ra
    return;
;}
RECOMP_FUNC void func_801063EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801063EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801063F0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801063F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801063F8: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801063FC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106400: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x80106404: lw          $a0, 0x6ED0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6ED0);
    // 0x80106408: jal         0x800B301C
    // 0x8010640C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x8010640C: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    after_0:
    // 0x80106410: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80106414: lw          $t6, 0x0($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X0);
    // 0x80106418: beql        $a2, $t6, L_80106470
    if (ctx->r6 == ctx->r14) {
        // 0x8010641C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80106470;
    }
    goto skip_0;
    // 0x8010641C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80106420: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x80106424: sw          $a2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r6;
    // 0x80106428: jal         0x800B296C
    // 0x8010642C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800B296C(rdram, ctx);
        goto after_1;
    // 0x8010642C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_1:
    // 0x80106430: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80106434: lw          $a0, 0x4($t7)
    ctx->r4 = MEM_W(ctx->r15, 0X4);
    // 0x80106438: jal         0x800B28C4
    // 0x8010643C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    func_800B28C4(rdram, ctx);
        goto after_2;
    // 0x8010643C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    after_2:
    // 0x80106440: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80106444: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80106448: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8010644C: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x80106450: beq         $at, $zero, L_80106464
    if (ctx->r1 == 0) {
        // 0x80106454: addiu       $v1, $v1, 0xA8
        ctx->r3 = ADD32(ctx->r3, 0XA8);
            goto L_80106464;
    }
L_80106454:
    // 0x80106454: addiu       $v1, $v1, 0xA8
    ctx->r3 = ADD32(ctx->r3, 0XA8);
    // 0x80106458: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8010645C: bne         $at, $zero, L_80106454
    if (ctx->r1 != 0) {
        // 0x80106460: sw          $a2, -0xA8($v1)
        MEM_W(-0XA8, ctx->r3) = ctx->r6;
            goto L_80106454;
    }
    // 0x80106460: sw          $a2, -0xA8($v1)
    MEM_W(-0XA8, ctx->r3) = ctx->r6;
L_80106464:
    // 0x80106464: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80106468: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x8010646C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106470:
    // 0x80106470: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80106474: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010647C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010647C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80106480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106484: jal         0x801063EC
    // 0x80106488: lh          $a0, 0x90($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X90);
    func_801063EC(rdram, ctx);
        goto after_0;
    // 0x80106488: lh          $a0, 0x90($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X90);
    after_0:
    // 0x8010648C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80106490: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106494: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010649C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010649C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801064A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801064A4: jal         0x801063C0
    // 0x801064A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_801063C0(rdram, ctx);
        goto after_0;
    // 0x801064A8: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801064AC: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x801064B0: jal         0x800B296C
    // 0x801064B4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    func_800B296C(rdram, ctx);
        goto after_1;
    // 0x801064B4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    after_1:
    // 0x801064B8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801064BC: lw          $a0, 0x4($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X4);
    // 0x801064C0: jal         0x800B28C4
    // 0x801064C4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    func_800B28C4(rdram, ctx);
        goto after_2;
    // 0x801064C4: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    after_2:
    // 0x801064C8: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x801064CC: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801064D0: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801064D4: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x801064D8: beq         $at, $zero, L_80106514
    if (ctx->r1 == 0) {
        // 0x801064DC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80106514;
    }
    // 0x801064DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801064E0: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
    // 0x801064E4: lh          $t7, 0x4($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X4);
L_801064E8:
    // 0x801064E8: bnel        $v0, $t7, L_80106508
    if (ctx->r2 != ctx->r15) {
        // 0x801064EC: addiu       $v1, $v1, 0xA8
        ctx->r3 = ADD32(ctx->r3, 0XA8);
            goto L_80106508;
    }
    goto skip_0;
    // 0x801064EC: addiu       $v1, $v1, 0xA8
    ctx->r3 = ADD32(ctx->r3, 0XA8);
    skip_0:
    // 0x801064F0: lh          $t8, 0x6($v1)
    ctx->r24 = MEM_H(ctx->r3, 0X6);
    // 0x801064F4: bnel        $a2, $t8, L_80106508
    if (ctx->r6 != ctx->r24) {
        // 0x801064F8: addiu       $v1, $v1, 0xA8
        ctx->r3 = ADD32(ctx->r3, 0XA8);
            goto L_80106508;
    }
    goto skip_1;
    // 0x801064F8: addiu       $v1, $v1, 0xA8
    ctx->r3 = ADD32(ctx->r3, 0XA8);
    skip_1:
    // 0x801064FC: b           L_80106518
    // 0x80106500: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
        goto L_80106518;
    // 0x80106500: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80106504: addiu       $v1, $v1, 0xA8
    ctx->r3 = ADD32(ctx->r3, 0XA8);
L_80106508:
    // 0x80106508: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x8010650C: bnel        $at, $zero, L_801064E8
    if (ctx->r1 != 0) {
        // 0x80106510: lh          $t7, 0x4($v1)
        ctx->r15 = MEM_H(ctx->r3, 0X4);
            goto L_801064E8;
    }
    goto skip_2;
    // 0x80106510: lh          $t7, 0x4($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X4);
    skip_2:
L_80106514:
    // 0x80106514: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80106518:
    // 0x80106518: jr          $ra
    // 0x8010651C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8010651C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80106520(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106520: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80106524: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80106528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010652C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106530: lw          $a0, 0x6ED4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6ED4);
    // 0x80106534: jal         0x800B296C
    // 0x80106538: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800B296C(rdram, ctx);
        goto after_0;
    // 0x80106538: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x8010653C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106540: lw          $a0, 0x6ED4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6ED4);
    // 0x80106544: jal         0x800B28C4
    // 0x80106548: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    func_800B28C4(rdram, ctx);
        goto after_1;
    // 0x80106548: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    after_1:
    // 0x8010654C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80106550: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80106554: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80106558: sltu        $at, $v0, $a1
    ctx->r1 = ctx->r2 < ctx->r5 ? 1 : 0;
    // 0x8010655C: beq         $at, $zero, L_80106598
    if (ctx->r1 == 0) {
        // 0x80106560: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80106598;
    }
    // 0x80106560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80106564: addiu       $v0, $zero, 0x7
    ctx->r2 = ADD32(0, 0X7);
    // 0x80106568: lh          $t6, 0x4($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X4);
L_8010656C:
    // 0x8010656C: bnel        $v0, $t6, L_8010658C
    if (ctx->r2 != ctx->r14) {
        // 0x80106570: addiu       $v1, $v1, 0xA8
        ctx->r3 = ADD32(ctx->r3, 0XA8);
            goto L_8010658C;
    }
    goto skip_0;
    // 0x80106570: addiu       $v1, $v1, 0xA8
    ctx->r3 = ADD32(ctx->r3, 0XA8);
    skip_0:
    // 0x80106574: lh          $t7, 0x6($v1)
    ctx->r15 = MEM_H(ctx->r3, 0X6);
    // 0x80106578: bnel        $a2, $t7, L_8010658C
    if (ctx->r6 != ctx->r15) {
        // 0x8010657C: addiu       $v1, $v1, 0xA8
        ctx->r3 = ADD32(ctx->r3, 0XA8);
            goto L_8010658C;
    }
    goto skip_1;
    // 0x8010657C: addiu       $v1, $v1, 0xA8
    ctx->r3 = ADD32(ctx->r3, 0XA8);
    skip_1:
    // 0x80106580: b           L_8010659C
    // 0x80106584: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
        goto L_8010659C;
    // 0x80106584: addiu       $v0, $v1, 0x8
    ctx->r2 = ADD32(ctx->r3, 0X8);
    // 0x80106588: addiu       $v1, $v1, 0xA8
    ctx->r3 = ADD32(ctx->r3, 0XA8);
L_8010658C:
    // 0x8010658C: sltu        $at, $v1, $a1
    ctx->r1 = ctx->r3 < ctx->r5 ? 1 : 0;
    // 0x80106590: bnel        $at, $zero, L_8010656C
    if (ctx->r1 != 0) {
        // 0x80106594: lh          $t6, 0x4($v1)
        ctx->r14 = MEM_H(ctx->r3, 0X4);
            goto L_8010656C;
    }
    goto skip_2;
    // 0x80106594: lh          $t6, 0x4($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X4);
    skip_2:
L_80106598:
    // 0x80106598: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010659C:
    // 0x8010659C: jr          $ra
    // 0x801065A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x801065A0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_801065A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801065A4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801065A8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801065AC: lh          $t6, 0x90($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X90);
    // 0x801065B0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x801065B4: beq         $t6, $zero, L_801065CC
    if (ctx->r14 == 0) {
        // 0x801065B8: nop
    
            goto L_801065CC;
    }
    // 0x801065B8: nop

    // 0x801065BC: jal         0x801063C0
    // 0x801065C0: nop

    func_801063C0(rdram, ctx);
        goto after_0;
    // 0x801065C0: nop

    after_0:
    // 0x801065C4: b           L_801065CC
    // 0x801065C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
        goto L_801065CC;
    // 0x801065C8: lw          $v0, 0x0($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X0);
L_801065CC:
    // 0x801065CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801065D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801065D4: jr          $ra
    return;
;}
RECOMP_FUNC void func_801065E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801065E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801065E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801065E8: addiu       $a0, $zero, 0x9C
    ctx->r4 = ADD32(0, 0X9C);
    // 0x801065EC: jal         0x800B2D70
    // 0x801065F0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    func_800B2D70(rdram, ctx);
        goto after_0;
    // 0x801065F0: addiu       $a1, $zero, 0x1E
    ctx->r5 = ADD32(0, 0X1E);
    after_0:
    // 0x801065F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801065F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x801065FC: sw          $v0, 0x6EE0($at)
    MEM_W(0X6EE0, ctx->r1) = ctx->r2;
    // 0x80106600: jr          $ra
    // 0x80106604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80106604: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80106608(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106608: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010660C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106610: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106614: jal         0x800B2D28
    // 0x80106618: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    func_800B2D28(rdram, ctx);
        goto after_0;
    // 0x80106618: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    after_0:
    // 0x8010661C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80106620: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80106624: sw          $zero, 0x6EE0($at)
    MEM_W(0X6EE0, ctx->r1) = 0;
    // 0x80106628: jr          $ra
    // 0x8010662C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x8010662C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80106630(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106630: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106634: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    // 0x80106638: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010663C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106640: beql        $a0, $zero, L_8010665C
    if (ctx->r4 == 0) {
        // 0x80106644: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010665C;
    }
    goto skip_0;
    // 0x80106644: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80106648: jal         0x800B2F58
    // 0x8010664C: nop

    func_800B2F58(rdram, ctx);
        goto after_0;
    // 0x8010664C: nop

    after_0:
    // 0x80106650: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80106654: sw          $v0, 0x6EE0($at)
    MEM_W(0X6EE0, ctx->r1) = ctx->r2;
    // 0x80106658: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010665C:
    // 0x8010665C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106660: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106668(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106668: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010666C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106670: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80106674: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80106678: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8010667C: jal         0x800B2974
    // 0x80106680: addiu       $a0, $a0, 0x6EE0
    ctx->r4 = ADD32(ctx->r4, 0X6EE0);
    func_800B2974(rdram, ctx);
        goto after_0;
    // 0x80106680: addiu       $a0, $a0, 0x6EE0
    ctx->r4 = ADD32(ctx->r4, 0X6EE0);
    after_0:
    // 0x80106684: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106688: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8010668C: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    // 0x80106690: jal         0x800B28E8
    // 0x80106694: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800B28E8(rdram, ctx);
        goto after_1;
    // 0x80106694: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_1:
    // 0x80106698: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x8010669C: addiu       $a1, $zero, 0x9C
    ctx->r5 = ADD32(0, 0X9C);
    // 0x801066A0: sw          $v0, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r2;
    // 0x801066A4: jal         0x8002D6E0
    // 0x801066A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    bzero_recomp(rdram, ctx);
        goto after_2;
    // 0x801066A8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x801066AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801066B0: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x801066B4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801066B8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801066C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801066C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801066C4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801066C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801066CC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801066D0: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    // 0x801066D4: jal         0x800B2EA0
    // 0x801066D8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    func_800B2EA0(rdram, ctx);
        goto after_0;
    // 0x801066D8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    after_0:
    // 0x801066DC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801066E0: jal         0x800B2928
    // 0x801066E4: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    func_800B2928(rdram, ctx);
        goto after_1;
    // 0x801066E4: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    after_1:
    // 0x801066E8: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x801066EC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801066F0: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801066F4: beql        $at, $zero, L_80106724
    if (ctx->r1 == 0) {
        // 0x801066F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80106724;
    }
    goto skip_0;
    // 0x801066F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x801066FC: jal         0x800B28CC
    // 0x80106700: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    func_800B28CC(rdram, ctx);
        goto after_2;
    // 0x80106700: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    after_2:
    // 0x80106704: lw          $v1, 0x0($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X0);
    // 0x80106708: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8010670C: lhu         $t0, 0x1A($v1)
    ctx->r8 = MEM_HU(ctx->r3, 0X1A);
    // 0x80106710: sll         $t9, $t7, 5
    ctx->r25 = S32(ctx->r15 << 5);
    // 0x80106714: andi        $t1, $t0, 0x1F
    ctx->r9 = ctx->r8 & 0X1F;
    // 0x80106718: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x8010671C: sh          $t2, 0x1A($v1)
    MEM_H(0X1A, ctx->r3) = ctx->r10;
    // 0x80106720: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106724:
    // 0x80106724: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106728: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106730: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106734: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    // 0x80106738: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010673C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106740: bne         $a0, $zero, L_80106750
    if (ctx->r4 != 0) {
        // 0x80106744: nop
    
            goto L_80106750;
    }
    // 0x80106744: nop

    // 0x80106748: b           L_80106758
    // 0x8010674C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80106758;
    // 0x8010674C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80106750:
    // 0x80106750: jal         0x800B2928
    // 0x80106754: nop

    func_800B2928(rdram, ctx);
        goto after_0;
    // 0x80106754: nop

    after_0:
L_80106758:
    // 0x80106758: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010675C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106760: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106768(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106768: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010676C: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80106770: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106774: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106778: jal         0x800B28CC
    // 0x8010677C: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x8010677C: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    after_0:
    // 0x80106780: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80106784: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106788: jr          $ra
    // 0x8010678C: nop

    return;
    // 0x8010678C: nop

;}
RECOMP_FUNC void func_80106790(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106790: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80106794: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106798: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x8010679C: lhu         $a1, 0x1A($a2)
    ctx->r5 = MEM_HU(ctx->r6, 0X1A);
    // 0x801067A0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801067A4: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    // 0x801067A8: srl         $t6, $a1, 5
    ctx->r14 = S32(U32(ctx->r5) >> 5);
    // 0x801067AC: jal         0x800B28CC
    // 0x801067B0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    func_800B28CC(rdram, ctx);
        goto after_0;
    // 0x801067B0: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    after_0:
    // 0x801067B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801067B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801067BC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801067C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801067C4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x801067C8: lw          $a1, 0x6EE0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6EE0);
    // 0x801067CC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801067D0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801067D4: bne         $a1, $zero, L_801067E4
    if (ctx->r5 != 0) {
        // 0x801067D8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_801067E4;
    }
    // 0x801067D8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801067DC: b           L_8010681C
    // 0x801067E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010681C;
    // 0x801067E0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801067E4:
    // 0x801067E4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801067E8: jal         0x800B2928
    // 0x801067EC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800B2928(rdram, ctx);
        goto after_0;
    // 0x801067EC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801067F0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801067F4: addiu       $v1, $v0, -0x1
    ctx->r3 = ADD32(ctx->r2, -0X1);
    // 0x801067F8: bltz        $v1, L_80106818
    if (SIGNED(ctx->r3) < 0) {
        // 0x801067FC: sw          $v1, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r3;
            goto L_80106818;
    }
    // 0x801067FC: sw          $v1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r3;
    // 0x80106800: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106804: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    // 0x80106808: jal         0x800B28CC
    // 0x8010680C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    func_800B28CC(rdram, ctx);
        goto after_1;
    // 0x8010680C: or          $a1, $v1, $zero
    ctx->r5 = ctx->r3 | 0;
    after_1:
    // 0x80106810: b           L_80106820
    // 0x80106814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80106820;
    // 0x80106814: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106818:
    // 0x80106818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010681C:
    // 0x8010681C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106820:
    // 0x80106820: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106824: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010682C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010682C: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80106830: lw          $a1, 0x6EE0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6EE0);
    // 0x80106834: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80106838: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010683C: bne         $a1, $zero, L_8010684C
    if (ctx->r5 != 0) {
        // 0x80106840: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_8010684C;
    }
    // 0x80106840: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80106844: b           L_80106898
    // 0x80106848: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80106898;
    // 0x80106848: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010684C:
    // 0x8010684C: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80106850: jal         0x800B2928
    // 0x80106854: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800B2928(rdram, ctx);
        goto after_0;
    // 0x80106854: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80106858: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8010685C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106860: lw          $v1, 0x0($a2)
    ctx->r3 = MEM_W(ctx->r6, 0X0);
    // 0x80106864: slt         $at, $v1, $v0
    ctx->r1 = SIGNED(ctx->r3) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80106868: bne         $at, $zero, L_80106878
    if (ctx->r1 != 0) {
        // 0x8010686C: nop
    
            goto L_80106878;
    }
    // 0x8010686C: nop

    // 0x80106870: sw          $v0, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r2;
    // 0x80106874: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
L_80106878:
    // 0x80106878: blez        $v1, L_80106898
    if (SIGNED(ctx->r3) <= 0) {
        // 0x8010687C: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80106898;
    }
    // 0x8010687C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80106880: addiu       $a1, $v1, -0x1
    ctx->r5 = ADD32(ctx->r3, -0X1);
    // 0x80106884: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
    // 0x80106888: jal         0x800B28CC
    // 0x8010688C: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    func_800B28CC(rdram, ctx);
        goto after_1;
    // 0x8010688C: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    after_1:
    // 0x80106890: b           L_8010689C
    // 0x80106894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010689C;
    // 0x80106894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106898:
    // 0x80106898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010689C:
    // 0x8010689C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801068A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801068A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801068A8: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x801068AC: lw          $a1, 0x6EE0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6EE0);
    // 0x801068B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801068B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801068B8: bne         $a1, $zero, L_801068C8
    if (ctx->r5 != 0) {
        // 0x801068BC: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_801068C8;
    }
    // 0x801068BC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801068C0: b           L_80106910
    // 0x801068C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80106910;
    // 0x801068C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801068C8:
    // 0x801068C8: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801068CC: jal         0x800B2928
    // 0x801068D0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800B2928(rdram, ctx);
        goto after_0;
    // 0x801068D0: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801068D4: blez        $v0, L_8010690C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x801068D8: lw          $a2, 0x18($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X18);
            goto L_8010690C;
    }
    // 0x801068D8: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801068DC: lw          $a1, 0x0($a2)
    ctx->r5 = MEM_W(ctx->r6, 0X0);
    // 0x801068E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x801068E4: bltz        $a1, L_801068F4
    if (SIGNED(ctx->r5) < 0) {
        // 0x801068E8: slt         $at, $a1, $v0
        ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
            goto L_801068F4;
    }
    // 0x801068E8: slt         $at, $a1, $v0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x801068EC: bne         $at, $zero, L_801068FC
    if (ctx->r1 != 0) {
        // 0x801068F0: nop
    
            goto L_801068FC;
    }
    // 0x801068F0: nop

L_801068F4:
    // 0x801068F4: sw          $zero, 0x0($a2)
    MEM_W(0X0, ctx->r6) = 0;
    // 0x801068F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_801068FC:
    // 0x801068FC: jal         0x800B28CC
    // 0x80106900: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    func_800B28CC(rdram, ctx);
        goto after_1;
    // 0x80106900: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    after_1:
    // 0x80106904: b           L_80106914
    // 0x80106908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80106914;
    // 0x80106908: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010690C:
    // 0x8010690C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80106910:
    // 0x80106910: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106914:
    // 0x80106914: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106918: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106920(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106920: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x80106924: lw          $a1, 0x6EE0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6EE0);
    // 0x80106928: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010692C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106930: bne         $a1, $zero, L_80106940
    if (ctx->r5 != 0) {
        // 0x80106934: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_80106940;
    }
    // 0x80106934: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80106938: b           L_80106994
    // 0x8010693C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80106994;
    // 0x8010693C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80106940:
    // 0x80106940: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x80106944: jal         0x800B2928
    // 0x80106948: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800B2928(rdram, ctx);
        goto after_0;
    // 0x80106948: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x8010694C: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80106950: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106954: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80106958: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8010695C: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80106960: bltz        $t7, L_80106974
    if (SIGNED(ctx->r15) < 0) {
        // 0x80106964: sw          $t7, 0x0($a2)
        MEM_W(0X0, ctx->r6) = ctx->r15;
            goto L_80106974;
    }
    // 0x80106964: sw          $t7, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r15;
    // 0x80106968: slt         $at, $t7, $v0
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x8010696C: bne         $at, $zero, L_8010697C
    if (ctx->r1 != 0) {
        // 0x80106970: nop
    
            goto L_8010697C;
    }
    // 0x80106970: nop

L_80106974:
    // 0x80106974: addiu       $a1, $v0, -0x1
    ctx->r5 = ADD32(ctx->r2, -0X1);
    // 0x80106978: sw          $a1, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->r5;
L_8010697C:
    // 0x8010697C: bltz        $a1, L_80106994
    if (SIGNED(ctx->r5) < 0) {
        // 0x80106980: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80106994;
    }
    // 0x80106980: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80106984: jal         0x800B28CC
    // 0x80106988: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    func_800B28CC(rdram, ctx);
        goto after_1;
    // 0x80106988: lw          $a0, 0x6EE0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EE0);
    after_1:
    // 0x8010698C: b           L_80106998
    // 0x80106990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_80106998;
    // 0x80106990: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106994:
    // 0x80106994: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106998:
    // 0x80106998: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010699C: jr          $ra
    return;
;}
RECOMP_FUNC void func_801069A4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801069A4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x801069A8: lw          $a1, 0x6EE0($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X6EE0);
    // 0x801069AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801069B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801069B4: bne         $a1, $zero, L_801069C4
    if (ctx->r5 != 0) {
        // 0x801069B8: or          $a2, $a0, $zero
        ctx->r6 = ctx->r4 | 0;
            goto L_801069C4;
    }
    // 0x801069B8: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x801069BC: b           L_80106A04
    // 0x801069C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80106A04;
    // 0x801069C0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801069C4:
    // 0x801069C4: beq         $a2, $zero, L_801069E0
    if (ctx->r6 == 0) {
        // 0x801069C8: nop
    
            goto L_801069E0;
    }
    // 0x801069C8: nop

    // 0x801069CC: lhu         $t6, 0x18($a2)
    ctx->r14 = MEM_HU(ctx->r6, 0X18);
    // 0x801069D0: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    // 0x801069D4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x801069D8: bne         $t7, $zero, L_801069E8
    if (ctx->r15 != 0) {
        // 0x801069DC: nop
    
            goto L_801069E8;
    }
    // 0x801069DC: nop

L_801069E0:
    // 0x801069E0: b           L_80106A04
    // 0x801069E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80106A04;
    // 0x801069E4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801069E8:
    // 0x801069E8: jal         0x800B2928
    // 0x801069EC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800B2928(rdram, ctx);
        goto after_0;
    // 0x801069EC: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x801069F0: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x801069F4: lhu         $t8, 0x1A($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X1A);
    // 0x801069F8: srl         $t9, $t8, 5
    ctx->r25 = S32(U32(ctx->r24) >> 5);
    // 0x801069FC: slt         $v1, $t9, $v0
    ctx->r3 = SIGNED(ctx->r25) < SIGNED(ctx->r2) ? 1 : 0;
    // 0x80106A00: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80106A04:
    // 0x80106A04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80106A08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106A0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106A20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106A20: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106A28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106A28: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106A2C: lw          $a0, 0x6EF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EF0);
    // 0x80106A30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80106A34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106A38: beql        $a0, $zero, L_80106A54
    if (ctx->r4 == 0) {
        // 0x80106A3C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80106A54;
    }
    goto skip_0;
    // 0x80106A3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80106A40: jal         0x800B3370
    // 0x80106A44: nop

    func_800B3370(rdram, ctx);
        goto after_0;
    // 0x80106A44: nop

    after_0:
    // 0x80106A48: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80106A4C: sw          $zero, 0x6EF0($at)
    MEM_W(0X6EF0, ctx->r1) = 0;
    // 0x80106A50: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106A54:
    // 0x80106A54: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106A58: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106A60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106A60: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106A64: lw          $a0, 0x6EF0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6EF0);
    // 0x80106A68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80106A6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106A70: beql        $a0, $zero, L_80106A8C
    if (ctx->r4 == 0) {
        // 0x80106A74: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80106A8C;
    }
    goto skip_0;
    // 0x80106A74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80106A78: jal         0x800B38E8
    // 0x80106A7C: nop

    func_800B38E8(rdram, ctx);
        goto after_0;
    // 0x80106A7C: nop

    after_0:
    // 0x80106A80: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80106A84: sw          $v0, 0x6EF0($at)
    MEM_W(0X6EF0, ctx->r1) = ctx->r2;
    // 0x80106A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106A8C:
    // 0x80106A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106A90: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106A98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106A98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80106A9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80106AA0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80106AA4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80106AA8: lbu         $v0, 0x7B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7B);
    // 0x80106AAC: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80106AB0: srl         $t6, $v0, 6
    ctx->r14 = S32(U32(ctx->r2) >> 6);
    // 0x80106AB4: beq         $t6, $zero, L_80106BD0
    if (ctx->r14 == 0) {
        // 0x80106AB8: or          $v0, $t6, $zero
        ctx->r2 = ctx->r14 | 0;
            goto L_80106BD0;
    }
    // 0x80106AB8: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
    // 0x80106ABC: lh          $t8, 0x96($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X96);
    // 0x80106AC0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80106AC4: or          $a1, $t6, $zero
    ctx->r5 = ctx->r14 | 0;
    // 0x80106AC8: bgez        $t8, L_80106AF0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80106ACC: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80106AF0;
    }
    // 0x80106ACC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80106AD0: jal         0x800DF660
    // 0x80106AD4: lbu         $a3, 0x9B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X9B);
    func_800DF660(rdram, ctx);
        goto after_0;
    // 0x80106AD4: lbu         $a3, 0x9B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X9B);
    after_0:
    // 0x80106AD8: jal         0x80100AC4
    // 0x80106ADC: lh          $a0, 0x60($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X60);
    func_80100AC4(rdram, ctx);
        goto after_1;
    // 0x80106ADC: lh          $a0, 0x60($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X60);
    after_1:
    // 0x80106AE0: jal         0x800DF720
    // 0x80106AE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF720(rdram, ctx);
        goto after_2;
    // 0x80106AE4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_2:
    // 0x80106AE8: b           L_80106BF8
    // 0x80106AEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80106BF8;
    // 0x80106AEC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80106AF0:
    // 0x80106AF0: lw          $t9, 0x74($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X74);
    // 0x80106AF4: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80106AF8: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80106AFC: sll         $t1, $t9, 6
    ctx->r9 = S32(ctx->r25 << 6);
    // 0x80106B00: bgez        $t1, L_80106B28
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80106B04: or          $a2, $zero, $zero
        ctx->r6 = 0 | 0;
            goto L_80106B28;
    }
    // 0x80106B04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80106B08: jal         0x800DF660
    // 0x80106B0C: lbu         $a3, 0x9B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X9B);
    func_800DF660(rdram, ctx);
        goto after_3;
    // 0x80106B0C: lbu         $a3, 0x9B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X9B);
    after_3:
    // 0x80106B10: jal         0x80100AC4
    // 0x80106B14: lh          $a0, 0x60($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X60);
    func_80100AC4(rdram, ctx);
        goto after_4;
    // 0x80106B14: lh          $a0, 0x60($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X60);
    after_4:
    // 0x80106B18: jal         0x800DF720
    // 0x80106B1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF720(rdram, ctx);
        goto after_5;
    // 0x80106B1C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_5:
    // 0x80106B20: b           L_80106BF8
    // 0x80106B24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80106BF8;
    // 0x80106B24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80106B28:
    // 0x80106B28: jal         0x80106C4C
    // 0x80106B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80106C4C(rdram, ctx);
        goto after_6;
    // 0x80106B2C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x80106B30: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80106B34: jal         0x800B27A0
    // 0x80106B38: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_800B27A0(rdram, ctx);
        goto after_7;
    // 0x80106B38: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_7:
    // 0x80106B3C: bne         $v0, $zero, L_80106B60
    if (ctx->r2 != 0) {
        // 0x80106B40: lw          $a2, 0x24($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X24);
            goto L_80106B60;
    }
    // 0x80106B40: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80106B44: lbu         $t2, 0x7B($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X7B);
    // 0x80106B48: lbu         $t4, 0x77($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X77);
    // 0x80106B4C: andi        $t3, $t2, 0xFF3F
    ctx->r11 = ctx->r10 & 0XFF3F;
    // 0x80106B50: andi        $t5, $t4, 0xFFBF
    ctx->r13 = ctx->r12 & 0XFFBF;
    // 0x80106B54: sb          $t3, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r11;
    // 0x80106B58: b           L_80106BF4
    // 0x80106B5C: sb          $t5, 0x77($s0)
    MEM_B(0X77, ctx->r16) = ctx->r13;
        goto L_80106BF4;
    // 0x80106B5C: sb          $t5, 0x77($s0)
    MEM_B(0X77, ctx->r16) = ctx->r13;
L_80106B60:
    // 0x80106B60: beq         $a2, $zero, L_80106B80
    if (ctx->r6 == 0) {
        // 0x80106B64: addiu       $a0, $zero, 0x1
        ctx->r4 = ADD32(0, 0X1);
            goto L_80106B80;
    }
    // 0x80106B64: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80106B68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80106B6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80106B70: jal         0x800DF660
    // 0x80106B74: lbu         $a3, 0x9B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X9B);
    func_800DF660(rdram, ctx);
        goto after_8;
    // 0x80106B74: lbu         $a3, 0x9B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X9B);
    after_8:
    // 0x80106B78: b           L_80106BB8
    // 0x80106B7C: nop

        goto L_80106BB8;
    // 0x80106B7C: nop

L_80106B80:
    // 0x80106B80: lw          $t6, 0x74($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X74);
    // 0x80106B84: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80106B88: sll         $t8, $t6, 25
    ctx->r24 = S32(ctx->r14 << 25);
    // 0x80106B8C: bgezl       $t8, L_80106BA8
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80106B90: lbu         $a1, 0x7B($s0)
        ctx->r5 = MEM_BU(ctx->r16, 0X7B);
            goto L_80106BA8;
    }
    goto skip_0;
    // 0x80106B90: lbu         $a1, 0x7B($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X7B);
    skip_0:
    // 0x80106B94: lbu         $a1, 0x7B($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X7B);
    // 0x80106B98: srl         $t9, $a1, 6
    ctx->r25 = S32(U32(ctx->r5) >> 6);
    // 0x80106B9C: b           L_80106BB0
    // 0x80106BA0: negu        $a1, $t9
    ctx->r5 = SUB32(0, ctx->r25);
        goto L_80106BB0;
    // 0x80106BA0: negu        $a1, $t9
    ctx->r5 = SUB32(0, ctx->r25);
    // 0x80106BA4: lbu         $a1, 0x7B($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X7B);
L_80106BA8:
    // 0x80106BA8: srl         $t0, $a1, 6
    ctx->r8 = S32(U32(ctx->r5) >> 6);
    // 0x80106BAC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_80106BB0:
    // 0x80106BB0: jal         0x800DF660
    // 0x80106BB4: lbu         $a3, 0x9B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X9B);
    func_800DF660(rdram, ctx);
        goto after_9;
    // 0x80106BB4: lbu         $a3, 0x9B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X9B);
    after_9:
L_80106BB8:
    // 0x80106BB8: jal         0x80100AC4
    // 0x80106BBC: lh          $a0, 0x60($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X60);
    func_80100AC4(rdram, ctx);
        goto after_10;
    // 0x80106BBC: lh          $a0, 0x60($s0)
    ctx->r4 = MEM_H(ctx->r16, 0X60);
    after_10:
    // 0x80106BC0: jal         0x800DF720
    // 0x80106BC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    func_800DF720(rdram, ctx);
        goto after_11;
    // 0x80106BC4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_11:
    // 0x80106BC8: b           L_80106BF8
    // 0x80106BCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80106BF8;
    // 0x80106BCC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80106BD0:
    // 0x80106BD0: lw          $t1, 0x78($s0)
    ctx->r9 = MEM_W(ctx->r16, 0X78);
    // 0x80106BD4: sll         $t3, $t1, 30
    ctx->r11 = S32(ctx->r9 << 30);
    // 0x80106BD8: bgezl       $t3, L_80106BF8
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80106BDC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_80106BF8;
    }
    goto skip_1;
    // 0x80106BDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_1:
    // 0x80106BE0: lbu         $a0, 0x98($s0)
    ctx->r4 = MEM_BU(ctx->r16, 0X98);
    // 0x80106BE4: lbu         $a1, 0x99($s0)
    ctx->r5 = MEM_BU(ctx->r16, 0X99);
    // 0x80106BE8: lbu         $a2, 0x9A($s0)
    ctx->r6 = MEM_BU(ctx->r16, 0X9A);
    // 0x80106BEC: jal         0x800DF5D8
    // 0x80106BF0: lbu         $a3, 0x9B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X9B);
    func_800DF5D8(rdram, ctx);
        goto after_12;
    // 0x80106BF0: lbu         $a3, 0x9B($s0)
    ctx->r7 = MEM_BU(ctx->r16, 0X9B);
    after_12:
L_80106BF4:
    // 0x80106BF4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80106BF8:
    // 0x80106BF8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80106BFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80106C00: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106C08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106C08: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x80106C0C: lw          $v1, 0x6EF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6EF0);
    // 0x80106C10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80106C14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106C18: bnel        $v1, $zero, L_80106C3C
    if (ctx->r3 != 0) {
        // 0x80106C1C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80106C3C;
    }
    goto skip_0;
    // 0x80106C1C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80106C20: jal         0x800B3310
    // 0x80106C24: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_800B3310(rdram, ctx);
        goto after_0;
    // 0x80106C24: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_0:
    // 0x80106C28: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80106C2C: sw          $v0, 0x6EF0($at)
    MEM_W(0X6EF0, ctx->r1) = ctx->r2;
    // 0x80106C30: lui         $v1, 0x8013
    ctx->r3 = S32(0X8013 << 16);
    // 0x80106C34: lw          $v1, 0x6EF0($v1)
    ctx->r3 = MEM_W(ctx->r3, 0X6EF0);
    // 0x80106C38: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106C3C:
    // 0x80106C3C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106C40: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80106C44: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106C4C: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80106C50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80106C54: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80106C58: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80106C5C: lw          $t6, 0x78($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X78);
    // 0x80106C60: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80106C64: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106C68: sll         $t8, $t6, 30
    ctx->r24 = S32(ctx->r14 << 30);
    // 0x80106C6C: bltz        $t8, L_80106C7C
    if (SIGNED(ctx->r24) < 0) {
        // 0x80106C70: nop
    
            goto L_80106C7C;
    }
    // 0x80106C70: nop

    // 0x80106C74: b           L_80106D4C
    // 0x80106C78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80106D4C;
    // 0x80106C78: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80106C7C:
    // 0x80106C7C: jal         0x80089CD8
    // 0x80106C80: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    _subaddiefade_entrypoint_9(rdram, ctx);
        goto after_0;
    // 0x80106C80: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_0:
    // 0x80106C84: jal         0x80106C08
    // 0x80106C88: nop

    func_80106C08(rdram, ctx);
        goto after_1;
    // 0x80106C88: nop

    after_1:
    // 0x80106C8C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80106C90: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106C94: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80106C98: jal         0x80106D60
    // 0x80106C9C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    func_80106D60(rdram, ctx);
        goto after_2;
    // 0x80106C9C: addiu       $a2, $sp, 0x50
    ctx->r6 = ADD32(ctx->r29, 0X50);
    after_2:
    // 0x80106CA0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106CA4: jal         0x80103F38
    // 0x80106CA8: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_80103F38(rdram, ctx);
        goto after_3;
    // 0x80106CA8: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_3:
    // 0x80106CAC: mfc1        $a2, $f0
    ctx->r6 = (int32_t)ctx->f0.u32l;
    // 0x80106CB0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80106CB4: jal         0x800B3494
    // 0x80106CB8: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_800B3494(rdram, ctx);
        goto after_4;
    // 0x80106CB8: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_4:
    // 0x80106CBC: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80106CC0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80106CC4: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    // 0x80106CC8: jal         0x800B37A4
    // 0x80106CCC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    func_800B37A4(rdram, ctx);
        goto after_5;
    // 0x80106CCC: addiu       $a2, $sp, 0x48
    ctx->r6 = ADD32(ctx->r29, 0X48);
    after_5:
    // 0x80106CD0: lbu         $t0, 0x7B($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X7B);
    // 0x80106CD4: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80106CD8: srl         $t1, $t0, 6
    ctx->r9 = S32(U32(ctx->r8) >> 6);
    // 0x80106CDC: slt         $at, $t9, $t1
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80106CE0: beql        $at, $zero, L_80106D4C
    if (ctx->r1 == 0) {
        // 0x80106CE4: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_80106D4C;
    }
    goto skip_0;
    // 0x80106CE4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    skip_0:
    // 0x80106CE8: lw          $t2, 0x74($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X74);
    // 0x80106CEC: addiu       $s0, $sp, 0x2C
    ctx->r16 = ADD32(ctx->r29, 0X2C);
    // 0x80106CF0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106CF4: sll         $t4, $t2, 25
    ctx->r12 = S32(ctx->r10 << 25);
    // 0x80106CF8: bgezl       $t4, L_80106D4C
    if (SIGNED(ctx->r12) >= 0) {
        // 0x80106CFC: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_80106D4C;
    }
    goto skip_1;
    // 0x80106CFC: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    skip_1:
    // 0x80106D00: jal         0x800C8960
    // 0x80106D04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    func_800C8960(rdram, ctx);
        goto after_6;
    // 0x80106D04: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_6:
    // 0x80106D08: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106D0C: jal         0x80106DA4
    // 0x80106D10: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    func_80106DA4(rdram, ctx);
        goto after_7;
    // 0x80106D10: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    after_7:
    // 0x80106D14: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x80106D18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80106D1C: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80106D20: beq         $t5, $zero, L_80106D34
    if (ctx->r13 == 0) {
        // 0x80106D24: lui         $at, 0x43FA
        ctx->r1 = S32(0X43FA << 16);
            goto L_80106D34;
    }
    // 0x80106D24: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80106D28: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80106D2C: b           L_80106D3C
    // 0x80106D30: lwc1        $f0, 0x18($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X18);
        goto L_80106D3C;
    // 0x80106D30: lwc1        $f0, 0x18($t6)
    ctx->f0.u32l = MEM_W(ctx->r14, 0X18);
L_80106D34:
    // 0x80106D34: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80106D38: nop

L_80106D3C:
    // 0x80106D3C: mfc1        $a3, $f0
    ctx->r7 = (int32_t)ctx->f0.u32l;
    // 0x80106D40: jal         0x800B36C0
    // 0x80106D44: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800B36C0(rdram, ctx);
        goto after_8;
    // 0x80106D44: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_8:
    // 0x80106D48: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_80106D4C:
    // 0x80106D4C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80106D50: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80106D54: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80106D58: jr          $ra
    // 0x80106D5C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    return;
    // 0x80106D5C: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
;}
RECOMP_FUNC void func_80106D60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106D60: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80106D64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106D68: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80106D6C: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80106D70: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80106D74: jal         0x800C87B8
    // 0x80106D78: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_800C87B8(rdram, ctx);
        goto after_0;
    // 0x80106D78: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80106D7C: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x80106D80: jal         0x80106DA4
    // 0x80106D84: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    func_80106DA4(rdram, ctx);
        goto after_1;
    // 0x80106D84: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    after_1:
    // 0x80106D88: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80106D8C: jal         0x800B38A8
    // 0x80106D90: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800B38A8(rdram, ctx);
        goto after_2;
    // 0x80106D90: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_2:
    // 0x80106D94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80106D98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80106D9C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106DA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106DA4: or          $v1, $a0, $zero
    ctx->r3 = ctx->r4 | 0;
    // 0x80106DA8: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x80106DAC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80106DB0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
L_80106DB4:
    // 0x80106DB4: lw          $t6, 0x0($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X0);
    // 0x80106DB8: lw          $t7, 0x0($v1)
    ctx->r15 = MEM_W(ctx->r3, 0X0);
    // 0x80106DBC: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x80106DC0: addiu       $v1, $v1, 0x4
    ctx->r3 = ADD32(ctx->r3, 0X4);
    // 0x80106DC4: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80106DC8: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80106DCC: mflo        $t8
    ctx->r24 = lo;
    // 0x80106DD0: sra         $t9, $t8, 8
    ctx->r25 = S32(SIGNED(ctx->r24) >> 8);
    // 0x80106DD4: bne         $v0, $a0, L_80106DB4
    if (ctx->r2 != ctx->r4) {
        // 0x80106DD8: sw          $t9, -0x4($v1)
        MEM_W(-0X4, ctx->r3) = ctx->r25;
            goto L_80106DB4;
    }
    // 0x80106DD8: sw          $t9, -0x4($v1)
    MEM_W(-0X4, ctx->r3) = ctx->r25;
    // 0x80106DDC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106DF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106DF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80106DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106DF8: addiu       $a0, $zero, 0x18
    ctx->r4 = ADD32(0, 0X18);
    // 0x80106DFC: jal         0x800B3268
    // 0x80106E00: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    func_800B3268(rdram, ctx);
        goto after_0;
    // 0x80106E00: addiu       $a1, $zero, 0xC
    ctx->r5 = ADD32(0, 0XC);
    after_0:
    // 0x80106E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80106E08: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80106E0C: sw          $v0, 0x6F00($at)
    MEM_W(0X6F00, ctx->r1) = ctx->r2;
    // 0x80106E10: jr          $ra
    // 0x80106E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x80106E14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80106E18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106E18: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106E1C: lw          $a0, 0x6F00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6F00);
    // 0x80106E20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80106E24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106E28: beql        $a0, $zero, L_80106E44
    if (ctx->r4 == 0) {
        // 0x80106E2C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80106E44;
    }
    goto skip_0;
    // 0x80106E2C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80106E30: jal         0x800B3248
    // 0x80106E34: nop

    func_800B3248(rdram, ctx);
        goto after_0;
    // 0x80106E34: nop

    after_0:
    // 0x80106E38: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80106E3C: sw          $zero, 0x6F00($at)
    MEM_W(0X6F00, ctx->r1) = 0;
    // 0x80106E40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106E44:
    // 0x80106E44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106E48: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106E50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106E50: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106E54: lw          $a0, 0x6F00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6F00);
    // 0x80106E58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80106E5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106E60: beql        $a0, $zero, L_80106E7C
    if (ctx->r4 == 0) {
        // 0x80106E64: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80106E7C;
    }
    goto skip_0;
    // 0x80106E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80106E68: jal         0x800B32E4
    // 0x80106E6C: nop

    func_800B32E4(rdram, ctx);
        goto after_0;
    // 0x80106E6C: nop

    after_0:
    // 0x80106E70: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80106E74: sw          $v0, 0x6F00($at)
    MEM_W(0X6F00, ctx->r1) = ctx->r2;
    // 0x80106E78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106E7C:
    // 0x80106E7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106E80: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106E88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106E88: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80106E8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106E90: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80106E94: jal         0x80100368
    // 0x80106E98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80100368(rdram, ctx);
        goto after_0;
    // 0x80106E98: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80106E9C: lw          $t6, 0x44($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X44);
    // 0x80106EA0: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80106EA4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80106EA8: beql        $t6, $zero, L_80106ED0
    if (ctx->r14 == 0) {
        // 0x80106EAC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80106ED0;
    }
    goto skip_0;
    // 0x80106EAC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80106EB0: lw          $t7, 0x6C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X6C);
    // 0x80106EB4: srl         $t8, $t7, 21
    ctx->r24 = S32(U32(ctx->r15) >> 21);
    // 0x80106EB8: beql        $t8, $zero, L_80106ED0
    if (ctx->r24 == 0) {
        // 0x80106EBC: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80106ED0;
    }
    goto skip_1;
    // 0x80106EBC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x80106EC0: jal         0x80107320
    // 0x80106EC4: nop

    func_80107320(rdram, ctx);
        goto after_1;
    // 0x80106EC4: nop

    after_1:
    // 0x80106EC8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80106ECC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80106ED0:
    // 0x80106ED0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80106ED4: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80106ED8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106EE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80106EE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106EE8: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x80106EEC: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80106EF0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106EF4: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80106EF8: srl         $t7, $t6, 22
    ctx->r15 = S32(U32(ctx->r14) >> 22);
    // 0x80106EFC: beq         $t7, $zero, L_80106F20
    if (ctx->r15 == 0) {
        // 0x80106F00: or          $a1, $t7, $zero
        ctx->r5 = ctx->r15 | 0;
            goto L_80106F20;
    }
    // 0x80106F00: or          $a1, $t7, $zero
    ctx->r5 = ctx->r15 | 0;
    // 0x80106F04: lw          $a0, 0x6F00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6F00);
    // 0x80106F08: jal         0x800B32C0
    // 0x80106F0C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    func_800B32C0(rdram, ctx);
        goto after_0;
    // 0x80106F0C: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    after_0:
    // 0x80106F10: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x80106F14: lhu         $t8, 0x94($a2)
    ctx->r24 = MEM_HU(ctx->r6, 0X94);
    // 0x80106F18: andi        $t9, $t8, 0xC00F
    ctx->r25 = ctx->r24 & 0XC00F;
    // 0x80106F1C: sh          $t9, 0x94($a2)
    MEM_H(0X94, ctx->r6) = ctx->r25;
L_80106F20:
    // 0x80106F20: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80106F24: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106F28: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106F30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106F30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80106F34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80106F38: lw          $v0, 0x94($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X94);
    // 0x80106F3C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80106F40: sll         $t6, $v0, 2
    ctx->r14 = S32(ctx->r2 << 2);
    // 0x80106F44: srl         $v0, $t6, 22
    ctx->r2 = S32(U32(ctx->r14) >> 22);
    // 0x80106F48: bne         $v0, $zero, L_80106F58
    if (ctx->r2 != 0) {
        // 0x80106F4C: or          $a1, $v0, $zero
        ctx->r5 = ctx->r2 | 0;
            goto L_80106F58;
    }
    // 0x80106F4C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80106F50: b           L_80106F60
    // 0x80106F54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80106F60;
    // 0x80106F54: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80106F58:
    // 0x80106F58: jal         0x800B301C
    // 0x80106F5C: lw          $a0, 0x6F00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6F00);
    func_800B301C(rdram, ctx);
        goto after_0;
    // 0x80106F5C: lw          $a0, 0x6F00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X6F00);
    after_0:
L_80106F60:
    // 0x80106F60: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80106F64: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80106F68: jr          $ra
    return;
;}
RECOMP_FUNC void func_80106F70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80106F70: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80106F74: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80106F78: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80106F7C: jal         0x80106F30
    // 0x80106F80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    func_80106F30(rdram, ctx);
        goto after_0;
    // 0x80106F80: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    after_0:
    // 0x80106F84: lh          $v1, 0xA($v0)
    ctx->r3 = MEM_H(ctx->r2, 0XA);
    // 0x80106F88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80106F8C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80106F90: beq         $v1, $at, L_80106FC0
    if (ctx->r3 == ctx->r1) {
        // 0x80106F94: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80106FC0;
    }
    // 0x80106F94: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106F98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80106F9C: beq         $v1, $at, L_80106FE0
    if (ctx->r3 == ctx->r1) {
        // 0x80106FA0: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80106FE0;
    }
    // 0x80106FA0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80106FA4: beq         $v1, $at, L_80107000
    if (ctx->r3 == ctx->r1) {
        // 0x80106FA8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80107000;
    }
    // 0x80106FA8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106FAC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80106FB0: beq         $v1, $at, L_80107044
    if (ctx->r3 == ctx->r1) {
        // 0x80106FB4: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80107044;
    }
    // 0x80106FB4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106FB8: b           L_80107060
    // 0x80106FBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80107060;
    // 0x80106FBC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80106FC0:
    // 0x80106FC0: jal         0x80107858
    // 0x80106FC4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80107858(rdram, ctx);
        goto after_1;
    // 0x80106FC4: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_1:
    // 0x80106FC8: beq         $v0, $zero, L_8010705C
    if (ctx->r2 == 0) {
        // 0x80106FCC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010705C;
    }
    // 0x80106FCC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106FD0: jal         0x80107070
    // 0x80106FD4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80107070(rdram, ctx);
        goto after_2;
    // 0x80106FD4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_2:
    // 0x80106FD8: b           L_80107060
    // 0x80106FDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80107060;
    // 0x80106FDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80106FE0:
    // 0x80106FE0: jal         0x80089C90
    // 0x80106FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _subaddiefade_entrypoint_0(rdram, ctx);
        goto after_3;
    // 0x80106FE4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80106FE8: bne         $v0, $zero, L_8010705C
    if (ctx->r2 != 0) {
        // 0x80106FEC: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010705C;
    }
    // 0x80106FEC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80106FF0: jal         0x80107070
    // 0x80106FF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_80107070(rdram, ctx);
        goto after_4;
    // 0x80106FF4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_4:
    // 0x80106FF8: b           L_80107060
    // 0x80106FFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80107060;
    // 0x80106FFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80107000:
    // 0x80107000: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    // 0x80107004: jal         0x801078AC
    // 0x80107008: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    func_801078AC(rdram, ctx);
        goto after_5;
    // 0x80107008: sw          $a2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r6;
    after_5:
    // 0x8010700C: beq         $v0, $zero, L_8010705C
    if (ctx->r2 == 0) {
        // 0x80107010: lw          $a2, 0x34($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X34);
            goto L_8010705C;
    }
    // 0x80107010: lw          $a2, 0x34($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X34);
    // 0x80107014: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80107018: jal         0x800EE88C
    // 0x8010701C: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    func_800EE88C(rdram, ctx);
        goto after_6;
    // 0x8010701C: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    after_6:
    // 0x80107020: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80107024: jal         0x8010CAC0
    // 0x80107028: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    func_8010CAC0(rdram, ctx);
        goto after_7;
    // 0x80107028: addiu       $a1, $zero, 0xC8
    ctx->r5 = ADD32(0, 0XC8);
    after_7:
    // 0x8010702C: bne         $v0, $zero, L_8010705C
    if (ctx->r2 != 0) {
        // 0x80107030: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010705C;
    }
    // 0x80107030: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107034: jal         0x80107070
    // 0x80107038: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80107070(rdram, ctx);
        goto after_8;
    // 0x80107038: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_8:
    // 0x8010703C: b           L_80107060
    // 0x80107040: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
        goto L_80107060;
    // 0x80107040: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80107044:
    // 0x80107044: jal         0x80107784
    // 0x80107048: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    func_80107784(rdram, ctx);
        goto after_9;
    // 0x80107048: or          $a1, $a2, $zero
    ctx->r5 = ctx->r6 | 0;
    after_9:
    // 0x8010704C: beq         $v0, $zero, L_8010705C
    if (ctx->r2 == 0) {
        // 0x80107050: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010705C;
    }
    // 0x80107050: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107054: jal         0x80107070
    // 0x80107058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80107070(rdram, ctx);
        goto after_10;
    // 0x80107058: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
L_8010705C:
    // 0x8010705C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_80107060:
    // 0x80107060: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80107064: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80107068: jr          $ra
    return;
;}
RECOMP_FUNC void func_80107070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107070: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80107074: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80107078: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010707C: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80107080: jal         0x80106F30
    // 0x80107084: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    func_80106F30(rdram, ctx);
        goto after_0;
    // 0x80107084: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80107088: bne         $v0, $zero, L_80107098
    if (ctx->r2 != 0) {
        // 0x8010708C: sw          $v0, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r2;
            goto L_80107098;
    }
    // 0x8010708C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80107090: b           L_801071EC
    // 0x80107094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801071EC;
    // 0x80107094: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80107098:
    // 0x80107098: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8010709C: lh          $t6, 0xA($v0)
    ctx->r14 = MEM_H(ctx->r2, 0XA);
    // 0x801070A0: sltiu       $at, $a3, 0x5
    ctx->r1 = ctx->r7 < 0X5 ? 1 : 0;
    // 0x801070A4: bne         $a3, $t6, L_801070B4
    if (ctx->r7 != ctx->r14) {
        // 0x801070A8: nop
    
            goto L_801070B4;
    }
    // 0x801070A8: nop

    // 0x801070AC: b           L_801071EC
    // 0x801070B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801071EC;
    // 0x801070B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801070B4:
    // 0x801070B4: beq         $at, $zero, L_801071D0
    if (ctx->r1 == 0) {
        // 0x801070B8: sll         $t7, $a3, 2
        ctx->r15 = S32(ctx->r7 << 2);
            goto L_801071D0;
    }
    // 0x801070B8: sll         $t7, $a3, 2
    ctx->r15 = S32(ctx->r7 << 2);
    // 0x801070BC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x801070C0: addu        $at, $at, $t7
    gpr jr_addend_801070C8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x801070C4: lw          $t7, 0x6460($at)
    ctx->r15 = ADD32(ctx->r1, 0X6460);
    // 0x801070C8: jr          $t7
    // 0x801070CC: nop

    switch (jr_addend_801070C8 >> 2) {
        case 0: goto L_801070D0; break;
        case 1: goto L_801070E4; break;
        case 2: goto L_8010712C; break;
        case 3: goto L_80107160; break;
        case 4: goto L_80107194; break;
        default: switch_error(__func__, 0x801070C8, 0x80126460);
    }
    // 0x801070CC: nop

L_801070D0:
    // 0x801070D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801070D4: jal         0x80103110
    // 0x801070D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80103110(rdram, ctx);
        goto after_1;
    // 0x801070D8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x801070DC: b           L_801071D0
    // 0x801070E0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
        goto L_801071D0;
    // 0x801070E0: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_801070E4:
    // 0x801070E4: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x801070E8: addiu       $a2, $a2, 0x44F0
    ctx->r6 = ADD32(ctx->r6, 0X44F0);
    // 0x801070EC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801070F0: jal         0x80089D18
    // 0x801070F4: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    _subaddieaudioquick_entrypoint_2(rdram, ctx);
        goto after_2;
    // 0x801070F4: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_2:
    // 0x801070F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801070FC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80107100: jal         0x801073F8
    // 0x80107104: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801073F8(rdram, ctx);
        goto after_3;
    // 0x80107104: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80107108: bne         $v0, $zero, L_80107118
    if (ctx->r2 != 0) {
        // 0x8010710C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80107118;
    }
    // 0x8010710C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107110: jal         0x80103110
    // 0x80107114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80103110(rdram, ctx);
        goto after_4;
    // 0x80107114: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_80107118:
    // 0x80107118: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010711C: jal         0x80107750
    // 0x80107120: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80107750(rdram, ctx);
        goto after_5;
    // 0x80107120: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_5:
    // 0x80107124: b           L_801071D0
    // 0x80107128: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
        goto L_801071D0;
    // 0x80107128: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_8010712C:
    // 0x8010712C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107130: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80107134: jal         0x801073F8
    // 0x80107138: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801073F8(rdram, ctx);
        goto after_6;
    // 0x80107138: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8010713C: bne         $v0, $zero, L_8010714C
    if (ctx->r2 != 0) {
        // 0x80107140: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010714C;
    }
    // 0x80107140: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107144: jal         0x80103110
    // 0x80107148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80103110(rdram, ctx);
        goto after_7;
    // 0x80107148: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_8010714C:
    // 0x8010714C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107150: jal         0x80107750
    // 0x80107154: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80107750(rdram, ctx);
        goto after_8;
    // 0x80107154: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_8:
    // 0x80107158: b           L_801071D0
    // 0x8010715C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
        goto L_801071D0;
    // 0x8010715C: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_80107160:
    // 0x80107160: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107164: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80107168: jal         0x801073F8
    // 0x8010716C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801073F8(rdram, ctx);
        goto after_9;
    // 0x8010716C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_9:
    // 0x80107170: bne         $v0, $zero, L_80107180
    if (ctx->r2 != 0) {
        // 0x80107174: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80107180;
    }
    // 0x80107174: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107178: jal         0x80103110
    // 0x8010717C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80103110(rdram, ctx);
        goto after_10;
    // 0x8010717C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
L_80107180:
    // 0x80107180: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107184: jal         0x80107448
    // 0x80107188: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_80107448(rdram, ctx);
        goto after_11;
    // 0x80107188: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_11:
    // 0x8010718C: b           L_801071D0
    // 0x80107190: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
        goto L_801071D0;
    // 0x80107190: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_80107194:
    // 0x80107194: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107198: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8010719C: jal         0x801073F8
    // 0x801071A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_801073F8(rdram, ctx);
        goto after_12;
    // 0x801071A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_12:
    // 0x801071A4: bne         $v0, $zero, L_801071B4
    if (ctx->r2 != 0) {
        // 0x801071A8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801071B4;
    }
    // 0x801071A8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801071AC: jal         0x80103110
    // 0x801071B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80103110(rdram, ctx);
        goto after_13;
    // 0x801071B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
L_801071B4:
    // 0x801071B4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801071B8: jal         0x8010754C
    // 0x801071BC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8010754C(rdram, ctx);
        goto after_14;
    // 0x801071BC: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_14:
    // 0x801071C0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801071C4: jal         0x801075E4
    // 0x801071C8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_801075E4(rdram, ctx);
        goto after_15;
    // 0x801071C8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_15:
    // 0x801071CC: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
L_801071D0:
    // 0x801071D0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801071D4: jal         0x801073AC
    // 0x801071D8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    func_801073AC(rdram, ctx);
        goto after_16;
    // 0x801071D8: or          $a1, $a3, $zero
    ctx->r5 = ctx->r7 | 0;
    after_16:
    // 0x801071DC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x801071E0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x801071E4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x801071E8: sh          $t8, 0xA($t9)
    MEM_H(0XA, ctx->r25) = ctx->r24;
L_801071EC:
    // 0x801071EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801071F0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x801071F4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801071F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80107200(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107200: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80107204: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80107208: jal         0x80106F30
    // 0x8010720C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    func_80106F30(rdram, ctx);
        goto after_0;
    // 0x8010720C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    after_0:
    // 0x80107210: beq         $v0, $zero, L_80107298
    if (ctx->r2 == 0) {
        // 0x80107214: lw          $a2, 0x20($sp)
        ctx->r6 = MEM_W(ctx->r29, 0X20);
            goto L_80107298;
    }
    // 0x80107214: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80107218: addiu       $a0, $v0, 0x4
    ctx->r4 = ADD32(ctx->r2, 0X4);
    // 0x8010721C: addiu       $a1, $a2, 0x4
    ctx->r5 = ADD32(ctx->r6, 0X4);
    // 0x80107220: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80107224: jal         0x800EE940
    // 0x80107228: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_800EE940(rdram, ctx);
        goto after_1;
    // 0x80107228: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_1:
    // 0x8010722C: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x80107230: lw          $v1, 0x1C($sp)
    ctx->r3 = MEM_W(ctx->r29, 0X1C);
    // 0x80107234: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80107238: lw          $t6, 0x70($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X70);
    // 0x8010723C: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x80107240: sll         $t7, $t6, 22
    ctx->r15 = S32(ctx->r14 << 22);
    // 0x80107244: srl         $t8, $t7, 26
    ctx->r24 = S32(U32(ctx->r15) >> 26);
    // 0x80107248: srl         $t9, $v0, 8
    ctx->r25 = S32(U32(ctx->r2) >> 8);
    // 0x8010724C: xor         $t0, $t8, $t9
    ctx->r8 = ctx->r24 ^ ctx->r25;
    // 0x80107250: sll         $t1, $t0, 20
    ctx->r9 = S32(ctx->r8 << 20);
    // 0x80107254: srl         $t2, $t1, 12
    ctx->r10 = S32(U32(ctx->r9) >> 12);
    // 0x80107258: xor         $t3, $t2, $v0
    ctx->r11 = ctx->r10 ^ ctx->r2;
    // 0x8010725C: sw          $t3, 0xC($v1)
    MEM_W(0XC, ctx->r3) = ctx->r11;
    // 0x80107260: lw          $t4, 0x70($a2)
    ctx->r12 = MEM_W(ctx->r6, 0X70);
    // 0x80107264: lhu         $t8, 0xC($v1)
    ctx->r24 = MEM_HU(ctx->r3, 0XC);
    // 0x80107268: srl         $t5, $t4, 25
    ctx->r13 = S32(U32(ctx->r12) >> 25);
    // 0x8010726C: sll         $t7, $t5, 4
    ctx->r15 = S32(ctx->r13 << 4);
    // 0x80107270: andi        $t9, $t8, 0xF
    ctx->r25 = ctx->r24 & 0XF;
    // 0x80107274: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x80107278: sh          $t0, 0xC($v1)
    MEM_H(0XC, ctx->r3) = ctx->r8;
    // 0x8010727C: lwc1        $f4, 0x48($a2)
    ctx->f4.u32l = MEM_W(ctx->r6, 0X48);
    // 0x80107280: sh          $zero, 0xA($v1)
    MEM_H(0XA, ctx->r3) = 0;
    // 0x80107284: swc1        $f8, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->f8.u32l;
    // 0x80107288: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x8010728C: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80107290: nop

    // 0x80107294: sh          $t2, 0x12($v1)
    MEM_H(0X12, ctx->r3) = ctx->r10;
L_80107298:
    // 0x80107298: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010729C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x801072A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801072A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801072A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801072AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801072B0: jal         0x80106F30
    // 0x801072B4: nop

    func_80106F30(rdram, ctx);
        goto after_0;
    // 0x801072B4: nop

    after_0:
    // 0x801072B8: bne         $v0, $zero, L_801072C8
    if (ctx->r2 != 0) {
        // 0x801072BC: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_801072C8;
    }
    // 0x801072BC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801072C0: b           L_801072D4
    // 0x801072C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801072D4;
    // 0x801072C4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801072C8:
    // 0x801072C8: lh          $v0, 0xA($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XA);
    // 0x801072CC: sltu        $t6, $zero, $v0
    ctx->r14 = 0 < ctx->r2 ? 1 : 0;
    // 0x801072D0: or          $v0, $t6, $zero
    ctx->r2 = ctx->r14 | 0;
L_801072D4:
    // 0x801072D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801072D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801072DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801072E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801072E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801072E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801072EC: jal         0x80106F30
    // 0x801072F0: nop

    func_80106F30(rdram, ctx);
        goto after_0;
    // 0x801072F0: nop

    after_0:
    // 0x801072F4: bne         $v0, $zero, L_80107304
    if (ctx->r2 != 0) {
        // 0x801072F8: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80107304;
    }
    // 0x801072F8: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x801072FC: b           L_80107310
    // 0x80107300: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80107310;
    // 0x80107300: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80107304:
    // 0x80107304: lh          $v0, 0xA($v1)
    ctx->r2 = MEM_H(ctx->r3, 0XA);
    // 0x80107308: xori        $t6, $v0, 0x4
    ctx->r14 = ctx->r2 ^ 0X4;
    // 0x8010730C: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
L_80107310:
    // 0x80107310: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80107314: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80107318: jr          $ra
    return;
;}
RECOMP_FUNC void func_80107320(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107320: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80107324: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80107328: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010732C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80107330: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80107334: addiu       $a0, $a0, 0x6F00
    ctx->r4 = ADD32(ctx->r4, 0X6F00);
    // 0x80107338: jal         0x800B3044
    // 0x8010733C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_800B3044(rdram, ctx);
        goto after_0;
    // 0x8010733C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80107340: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80107344: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80107348: jal         0x8002D6E0
    // 0x8010734C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    bzero_recomp(rdram, ctx);
        goto after_1;
    // 0x8010734C: addiu       $a1, $zero, 0x18
    ctx->r5 = ADD32(0, 0X18);
    after_1:
    // 0x80107350: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80107354: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80107358: lhu         $t0, 0x94($a0)
    ctx->r8 = MEM_HU(ctx->r4, 0X94);
    // 0x8010735C: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x80107360: andi        $t9, $t8, 0x3FF0
    ctx->r25 = ctx->r24 & 0X3FF0;
    // 0x80107364: andi        $t1, $t0, 0xC00F
    ctx->r9 = ctx->r8 & 0XC00F;
    // 0x80107368: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x8010736C: jal         0x80107200
    // 0x80107370: sh          $t2, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r10;
    func_80107200(rdram, ctx);
        goto after_2;
    // 0x80107370: sh          $t2, 0x94($a0)
    MEM_H(0X94, ctx->r4) = ctx->r10;
    after_2:
    // 0x80107374: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80107378: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x8010737C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80107380: jr          $ra
    return;
;}
RECOMP_FUNC void func_80107388(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107388: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010738C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80107390: jal         0x80100368
    // 0x80107394: nop

    func_80100368(rdram, ctx);
        goto after_0;
    // 0x80107394: nop

    after_0:
    // 0x80107398: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010739C: lw          $v0, 0x44($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X44);
    // 0x801073A0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801073A4: jr          $ra
    return;
;}
RECOMP_FUNC void func_801073AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801073AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801073B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801073B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801073B8: jal         0x80107388
    // 0x801073BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80107388(rdram, ctx);
        goto after_0;
    // 0x801073BC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x801073C0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x801073C4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801073C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x801073CC: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x801073D0: jal         0x80102424
    // 0x801073D4: lh          $a1, 0x0($t8)
    ctx->r5 = MEM_H(ctx->r24, 0X0);
    func_80102424(rdram, ctx);
        goto after_1;
    // 0x801073D4: lh          $a1, 0x0($t8)
    ctx->r5 = MEM_H(ctx->r24, 0X0);
    after_1:
    // 0x801073D8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x801073DC: addiu       $a1, $zero, 0x8F
    ctx->r5 = ADD32(0, 0X8F);
    // 0x801073E0: jal         0x8010108C
    // 0x801073E4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_8010108C(rdram, ctx);
        goto after_2;
    // 0x801073E4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_2:
    // 0x801073E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801073EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801073F0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801073F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801073F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801073FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80107400: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80107404: jal         0x80107388
    // 0x80107408: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    func_80107388(rdram, ctx);
        goto after_0;
    // 0x80107408: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    after_0:
    // 0x8010740C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80107410: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80107414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80107418: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8010741C: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x80107420: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x80107424: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80107428: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8010742C: and         $t1, $t9, $t0
    ctx->r9 = ctx->r25 & ctx->r8;
    // 0x80107430: beq         $t1, $zero, L_80107440
    if (ctx->r9 == 0) {
        // 0x80107434: nop
    
            goto L_80107440;
    }
    // 0x80107434: nop

    // 0x80107438: b           L_80107440
    // 0x8010743C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_80107440;
    // 0x8010743C: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_80107440:
    // 0x80107440: jr          $ra
    // 0x80107444: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80107444: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80107448(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107448: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010744C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80107450: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80107454: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80107458: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010745C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80107460: jal         0x801073F8
    // 0x80107464: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_801073F8(rdram, ctx);
        goto after_0;
    // 0x80107464: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x80107468: bne         $v0, $zero, L_801074A8
    if (ctx->r2 != 0) {
        // 0x8010746C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801074A8;
    }
    // 0x8010746C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107470: lbu         $t6, 0x75($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X75);
    // 0x80107474: lbu         $t2, 0x65($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X65);
    // 0x80107478: lbu         $t5, 0x7E($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X7E);
    // 0x8010747C: andi        $t7, $t6, 0xFFEF
    ctx->r15 = ctx->r14 & 0XFFEF;
    // 0x80107480: sb          $t7, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r15;
    // 0x80107484: lw          $t8, 0x74($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X74);
    // 0x80107488: andi        $t3, $t2, 0xFFFE
    ctx->r11 = ctx->r10 & 0XFFFE;
    // 0x8010748C: andi        $t6, $t5, 0xFFEF
    ctx->r14 = ctx->r13 & 0XFFEF;
    // 0x80107490: sll         $t9, $t8, 11
    ctx->r25 = S32(ctx->r24 << 11);
    // 0x80107494: srl         $t0, $t9, 31
    ctx->r8 = S32(U32(ctx->r25) >> 31);
    // 0x80107498: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8010749C: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x801074A0: sb          $t4, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r12;
    // 0x801074A4: sb          $t6, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = ctx->r14;
L_801074A8:
    // 0x801074A8: lbu         $t7, 0x74($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X74);
    // 0x801074AC: lbu         $t9, 0x64($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X64);
    // 0x801074B0: lbu         $t2, 0x79($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X79);
    // 0x801074B4: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x801074B8: lbu         $t7, 0x71($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X71);
    // 0x801074BC: andi        $t3, $t9, 0xFFFE
    ctx->r11 = ctx->r25 & 0XFFFE;
    // 0x801074C0: andi        $t5, $t3, 0x7F
    ctx->r13 = ctx->r11 & 0X7F;
    // 0x801074C4: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x801074C8: sb          $t3, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r11;
    // 0x801074CC: sb          $t5, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r13;
    // 0x801074D0: andi        $t6, $t5, 0xBF
    ctx->r14 = ctx->r13 & 0XBF;
    // 0x801074D4: andi        $t1, $t2, 0xFFFC
    ctx->r9 = ctx->r10 & 0XFFFC;
    // 0x801074D8: andi        $t8, $t7, 0xFFFE
    ctx->r24 = ctx->r15 & 0XFFFE;
    // 0x801074DC: sb          $t1, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r9;
    // 0x801074E0: sb          $t6, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r14;
    // 0x801074E4: jal         0x8010A570
    // 0x801074E8: sb          $t8, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r24;
    func_8010A570(rdram, ctx);
        goto after_1;
    // 0x801074E8: sb          $t8, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r24;
    after_1:
    // 0x801074EC: jal         0x8010A624
    // 0x801074F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010A624(rdram, ctx);
        goto after_2;
    // 0x801074F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801074F4: jal         0x80104580
    // 0x801074F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80104580(rdram, ctx);
        goto after_3;
    // 0x801074F8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x801074FC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107500: jal         0x8010754C
    // 0x80107504: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8010754C(rdram, ctx);
        goto after_4;
    // 0x80107504: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_4:
    // 0x80107508: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010750C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80107510: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80107514: addiu       $a0, $zero, 0x63
    ctx->r4 = ADD32(0, 0X63);
L_80107518:
    // 0x80107518: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8010751C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80107520: bne         $v0, $a1, L_80107518
    if (ctx->r2 != ctx->r5) {
        // 0x80107524: sb          $a0, 0x5B($v1)
        MEM_B(0X5B, ctx->r3) = ctx->r4;
            goto L_80107518;
    }
    // 0x80107524: sb          $a0, 0x5B($v1)
    MEM_B(0X5B, ctx->r3) = ctx->r4;
    // 0x80107528: jal         0x80107A80
    // 0x8010752C: nop

    func_80107A80(rdram, ctx);
        goto after_5;
    // 0x8010752C: nop

    after_5:
    // 0x80107530: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80107534: swc1        $f0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f0.u32l;
    // 0x80107538: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010753C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80107540: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80107544: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010754C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010754C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80107550: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80107554: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80107558: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x8010755C: sw          $a3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r7;
    // 0x80107560: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    // 0x80107564: sw          $a2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r6;
    // 0x80107568: jal         0x800EE88C
    // 0x8010756C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    func_800EE88C(rdram, ctx);
        goto after_0;
    // 0x8010756C: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    after_0:
    // 0x80107570: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x80107574: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80107578: lwl         $t6, 0xD($a3)
    ctx->r14 = do_lwl(rdram, ctx->r14, ctx->r7, 0XD);
    // 0x8010757C: lwr         $t6, 0x10($a3)
    ctx->r14 = do_lwr(rdram, ctx->r14, ctx->r7, 0X10);
    // 0x80107580: lhu         $t2, 0x72($a0)
    ctx->r10 = MEM_HU(ctx->r4, 0X72);
    // 0x80107584: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x80107588: srl         $t9, $t7, 20
    ctx->r25 = S32(U32(ctx->r15) >> 20);
    // 0x8010758C: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x80107590: andi        $t1, $t0, 0x3F0
    ctx->r9 = ctx->r8 & 0X3F0;
    // 0x80107594: andi        $t3, $t2, 0xFC0F
    ctx->r11 = ctx->r10 & 0XFC0F;
    // 0x80107598: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x8010759C: sh          $t4, 0x72($a0)
    MEM_H(0X72, ctx->r4) = ctx->r12;
    // 0x801075A0: lw          $t5, 0xC($a3)
    ctx->r13 = MEM_W(ctx->r7, 0XC);
    // 0x801075A4: lbu         $t0, 0x70($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X70);
    // 0x801075A8: srl         $t7, $t5, 20
    ctx->r15 = S32(U32(ctx->r13) >> 20);
    // 0x801075AC: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x801075B0: andi        $t2, $t0, 0xFF01
    ctx->r10 = ctx->r8 & 0XFF01;
    // 0x801075B4: or          $t1, $t9, $t2
    ctx->r9 = ctx->r25 | ctx->r10;
    // 0x801075B8: sb          $t1, 0x70($a0)
    MEM_B(0X70, ctx->r4) = ctx->r9;
    // 0x801075BC: lh          $t3, 0x12($a3)
    ctx->r11 = MEM_H(ctx->r7, 0X12);
    // 0x801075C0: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x801075C4: nop

    // 0x801075C8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x801075CC: jal         0x80103014
    // 0x801075D0: swc1        $f6, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f6.u32l;
    func_80103014(rdram, ctx);
        goto after_1;
    // 0x801075D0: swc1        $f6, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->f6.u32l;
    after_1:
    // 0x801075D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801075D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801075DC: jr          $ra
    return;
;}
RECOMP_FUNC void func_801075E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801075E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801075E8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801075EC: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x801075F0: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x801075F4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x801075F8: jal         0x80100368
    // 0x801075FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    func_80100368(rdram, ctx);
        goto after_0;
    // 0x801075FC: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    after_0:
    // 0x80107600: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80107604: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107608: jal         0x8010754C
    // 0x8010760C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    func_8010754C(rdram, ctx);
        goto after_1;
    // 0x8010760C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    after_1:
    // 0x80107610: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107614: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80107618: jal         0x801073F8
    // 0x8010761C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    func_801073F8(rdram, ctx);
        goto after_2;
    // 0x8010761C: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_2:
    // 0x80107620: bne         $v0, $zero, L_80107680
    if (ctx->r2 != 0) {
        // 0x80107624: lui         $at, 0x8012
        ctx->r1 = S32(0X8012 << 16);
            goto L_80107680;
    }
    // 0x80107624: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80107628: jal         0x80089CA0
    // 0x8010762C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _subaddiefade_entrypoint_2(rdram, ctx);
        goto after_3;
    // 0x8010762C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80107630: lbu         $t7, 0x65($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X65);
    // 0x80107634: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80107638: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8010763C: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x80107640: sb          $t8, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r24;
    // 0x80107644: lwc1        $f6, 0x1C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80107648: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8010764C: nop

    // 0x80107650: bc1tl       L_8010766C
    if (c1cs) {
        // 0x80107654: lbu         $t2, 0x75($s0)
        ctx->r10 = MEM_BU(ctx->r16, 0X75);
            goto L_8010766C;
    }
    goto skip_0;
    // 0x80107654: lbu         $t2, 0x75($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X75);
    skip_0:
    // 0x80107658: lbu         $t0, 0x75($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X75);
    // 0x8010765C: ori         $t1, $t0, 0x10
    ctx->r9 = ctx->r8 | 0X10;
    // 0x80107660: b           L_80107674
    // 0x80107664: sb          $t1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r9;
        goto L_80107674;
    // 0x80107664: sb          $t1, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r9;
    // 0x80107668: lbu         $t2, 0x75($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X75);
L_8010766C:
    // 0x8010766C: andi        $t3, $t2, 0xFFEF
    ctx->r11 = ctx->r10 & 0XFFEF;
    // 0x80107670: sb          $t3, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r11;
L_80107674:
    // 0x80107674: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80107678: b           L_8010768C
    // 0x8010767C: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
        goto L_8010768C;
    // 0x8010767C: swc1        $f8, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f8.u32l;
L_80107680:
    // 0x80107680: lwc1        $f10, 0x6474($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6474);
    // 0x80107684: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80107688: swc1        $f10, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f10.u32l;
L_8010768C:
    // 0x8010768C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80107690: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    // 0x80107694: jal         0x80102FA0
    // 0x80107698: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80102FA0(rdram, ctx);
        goto after_4;
    // 0x80107698: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_4:
    // 0x8010769C: lbu         $t9, 0x64($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X64);
    // 0x801076A0: sll         $t8, $v0, 7
    ctx->r24 = S32(ctx->r2 << 7);
    // 0x801076A4: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x801076A8: andi        $t0, $t9, 0xFF7F
    ctx->r8 = ctx->r25 & 0XFF7F;
    // 0x801076AC: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x801076B0: sb          $t1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r9;
    // 0x801076B4: ori         $a1, $a1, 0x8
    ctx->r5 = ctx->r5 | 0X8;
    // 0x801076B8: jal         0x80102FA0
    // 0x801076BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80102FA0(rdram, ctx);
        goto after_5;
    // 0x801076BC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x801076C0: lbu         $t5, 0x64($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X64);
    // 0x801076C4: lw          $t9, 0x14($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X14);
    // 0x801076C8: sll         $t3, $v0, 6
    ctx->r11 = S32(ctx->r2 << 6);
    // 0x801076CC: andi        $t4, $t3, 0x40
    ctx->r12 = ctx->r11 & 0X40;
    // 0x801076D0: lui         $at, 0x8
    ctx->r1 = S32(0X8 << 16);
    // 0x801076D4: andi        $t6, $t5, 0xFFBF
    ctx->r14 = ctx->r13 & 0XFFBF;
    // 0x801076D8: or          $t7, $t4, $t6
    ctx->r15 = ctx->r12 | ctx->r14;
    // 0x801076DC: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x801076E0: or          $t8, $t9, $at
    ctx->r24 = ctx->r25 | ctx->r1;
    // 0x801076E4: sb          $t7, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r15;
    // 0x801076E8: sw          $t8, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r24;
    // 0x801076EC: ori         $a1, $a1, 0x1000
    ctx->r5 = ctx->r5 | 0X1000;
    // 0x801076F0: jal         0x80102FA0
    // 0x801076F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80102FA0(rdram, ctx);
        goto after_6;
    // 0x801076F4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_6:
    // 0x801076F8: lbu         $t2, 0x71($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X71);
    // 0x801076FC: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x80107700: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107704: andi        $t3, $t2, 0xFFFE
    ctx->r11 = ctx->r10 & 0XFFFE;
    // 0x80107708: or          $t5, $t1, $t3
    ctx->r13 = ctx->r9 | ctx->r11;
    // 0x8010770C: sb          $t5, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r13;
    // 0x80107710: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80107714: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80107718: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x8010771C: jal         0x801073F8
    // 0x80107720: sh          $zero, 0x14($t4)
    MEM_H(0X14, ctx->r12) = 0;
    func_801073F8(rdram, ctx);
        goto after_7;
    // 0x80107720: sh          $zero, 0x14($t4)
    MEM_H(0X14, ctx->r12) = 0;
    after_7:
    // 0x80107724: bne         $v0, $zero, L_8010773C
    if (ctx->r2 != 0) {
        // 0x80107728: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010773C;
    }
    // 0x80107728: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010772C: lui         $a2, 0x8012
    ctx->r6 = S32(0X8012 << 16);
    // 0x80107730: addiu       $a2, $a2, 0x44FC
    ctx->r6 = ADD32(ctx->r6, 0X44FC);
    // 0x80107734: jal         0x80089D18
    // 0x80107738: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    _subaddieaudioquick_entrypoint_2(rdram, ctx);
        goto after_8;
    // 0x80107738: addiu       $a1, $s0, 0x4
    ctx->r5 = ADD32(ctx->r16, 0X4);
    after_8:
L_8010773C:
    // 0x8010773C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80107740: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80107744: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80107748: jr          $ra
    // 0x8010774C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8010774C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_80107750(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107750: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80107754: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80107758: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010775C: jal         0x80089CB8
    // 0x80107760: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    _subaddiefade_entrypoint_5(rdram, ctx);
        goto after_0;
    // 0x80107760: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80107764: jal         0x8010A570
    // 0x80107768: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8010A570(rdram, ctx);
        goto after_1;
    // 0x80107768: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8010776C: jal         0x8010A624
    // 0x80107770: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_8010A624(rdram, ctx);
        goto after_2;
    // 0x80107770: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80107774: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80107778: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010777C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80107784(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107784: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80107788: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010778C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80107790: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80107794: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x80107798: lh          $a1, 0xA($a1)
    ctx->r5 = MEM_H(ctx->r5, 0XA);
    // 0x8010779C: jal         0x801073F8
    // 0x801077A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801073F8(rdram, ctx);
        goto after_0;
    // 0x801077A0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x801077A4: bne         $v0, $zero, L_801077B8
    if (ctx->r2 != 0) {
        // 0x801077A8: lw          $a1, 0x24($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X24);
            goto L_801077B8;
    }
    // 0x801077A8: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x801077AC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801077B0: jal         0x801078DC
    // 0x801077B4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_801078DC(rdram, ctx);
        goto after_1;
    // 0x801077B4: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
L_801077B8:
    // 0x801077B8: jal         0x80089C90
    // 0x801077BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _subaddiefade_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x801077BC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_2:
    // 0x801077C0: addiu       $at, $zero, 0xFF
    ctx->r1 = ADD32(0, 0XFF);
    // 0x801077C4: bnel        $v0, $at, L_80107844
    if (ctx->r2 != ctx->r1) {
        // 0x801077C8: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80107844;
    }
    goto skip_0;
    // 0x801077C8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x801077CC: jal         0x800D90A4
    // 0x801077D0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    func_800D90A4(rdram, ctx);
        goto after_3;
    // 0x801077D0: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    after_3:
    // 0x801077D4: beq         $v0, $zero, L_80107840
    if (ctx->r2 == 0) {
        // 0x801077D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80107840;
    }
    // 0x801077D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801077DC: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x801077E0: jal         0x80102F74
    // 0x801077E4: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    func_80102F74(rdram, ctx);
        goto after_4;
    // 0x801077E4: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    after_4:
    // 0x801077E8: lbu         $t9, 0x64($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X64);
    // 0x801077EC: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x801077F0: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x801077F4: andi        $t0, $t9, 0xFFFE
    ctx->r8 = ctx->r25 & 0XFFFE;
    // 0x801077F8: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x801077FC: sb          $t1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r9;
    // 0x80107800: ori         $a1, $a1, 0x2
    ctx->r5 = ctx->r5 | 0X2;
    // 0x80107804: jal         0x80102F74
    // 0x80107808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80102F74(rdram, ctx);
        goto after_5;
    // 0x80107808: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x8010780C: bnel        $v0, $zero, L_80107820
    if (ctx->r2 != 0) {
        // 0x80107810: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80107820;
    }
    goto skip_1;
    // 0x80107810: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80107814: jal         0x8010A590
    // 0x80107818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010A590(rdram, ctx);
        goto after_6;
    // 0x80107818: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_6:
    // 0x8010781C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80107820:
    // 0x80107820: jal         0x80102F74
    // 0x80107824: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_80102F74(rdram, ctx);
        goto after_7;
    // 0x80107824: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_7:
    // 0x80107828: beq         $v0, $zero, L_80107838
    if (ctx->r2 == 0) {
        // 0x8010782C: nop
    
            goto L_80107838;
    }
    // 0x8010782C: nop

    // 0x80107830: jal         0x8010A63C
    // 0x80107834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010A63C(rdram, ctx);
        goto after_8;
    // 0x80107834: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
L_80107838:
    // 0x80107838: b           L_80107844
    // 0x8010783C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80107844;
    // 0x8010783C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80107840:
    // 0x80107840: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80107844:
    // 0x80107844: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80107848: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010784C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80107850: jr          $ra
    return;
;}
RECOMP_FUNC void func_80107858(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107858: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010785C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80107860: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80107864: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80107868: lh          $a1, 0xA($a1)
    ctx->r5 = MEM_H(ctx->r5, 0XA);
    // 0x8010786C: jal         0x801073F8
    // 0x80107870: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_801073F8(rdram, ctx);
        goto after_0;
    // 0x80107870: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_0:
    // 0x80107874: bne         $v0, $zero, L_80107888
    if (ctx->r2 != 0) {
        // 0x80107878: lw          $a1, 0x1C($sp)
        ctx->r5 = MEM_W(ctx->r29, 0X1C);
            goto L_80107888;
    }
    // 0x80107878: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8010787C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80107880: jal         0x801078DC
    // 0x80107884: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    func_801078DC(rdram, ctx);
        goto after_1;
    // 0x80107884: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    after_1:
L_80107888:
    // 0x80107888: jal         0x80089C90
    // 0x8010788C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    _subaddiefade_entrypoint_0(rdram, ctx);
        goto after_2;
    // 0x8010788C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_2:
    // 0x80107890: bne         $v0, $zero, L_801078A0
    if (ctx->r2 != 0) {
        // 0x80107894: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801078A0;
    }
    // 0x80107894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80107898: b           L_801078A4
    // 0x8010789C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801078A4;
    // 0x8010789C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801078A0:
    // 0x801078A0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801078A4:
    // 0x801078A4: jr          $ra
    // 0x801078A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x801078A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801078AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801078AC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801078B0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801078B4: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x801078B8: jal         0x800D90A4
    // 0x801078BC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800D90A4(rdram, ctx);
        goto after_0;
    // 0x801078BC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x801078C0: beq         $v0, $zero, L_801078D0
    if (ctx->r2 == 0) {
        // 0x801078C4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_801078D0;
    }
    // 0x801078C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801078C8: b           L_801078D4
    // 0x801078CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801078D4;
    // 0x801078CC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_801078D0:
    // 0x801078D0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_801078D4:
    // 0x801078D4: jr          $ra
    // 0x801078D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x801078D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_801078DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801078DC: addiu       $sp, $sp, -0x180
    ctx->r29 = ADD32(ctx->r29, -0X180);
    // 0x801078E0: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x801078E4: sw          $s7, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r23;
    // 0x801078E8: sw          $s6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r22;
    // 0x801078EC: sw          $s5, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r21;
    // 0x801078F0: sw          $s4, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r20;
    // 0x801078F4: sw          $s3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r19;
    // 0x801078F8: sw          $s2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r18;
    // 0x801078FC: sw          $s1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r17;
    // 0x80107900: sw          $s0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r16;
    // 0x80107904: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x80107908: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8010790C: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80107910: lh          $t6, 0x0($a1)
    ctx->r14 = MEM_H(ctx->r5, 0X0);
    // 0x80107914: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80107918: addiu       $t7, $sp, 0x74
    ctx->r15 = ADD32(ctx->r29, 0X74);
    // 0x8010791C: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80107920: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80107924: addiu       $a1, $sp, 0x90
    ctx->r5 = ADD32(ctx->r29, 0X90);
    // 0x80107928: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x8010792C: addiu       $a3, $zero, 0x14
    ctx->r7 = ADD32(0, 0X14);
    // 0x80107930: jal         0x80089FA8
    // 0x80107934: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    _subaddievolume_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80107934: sw          $t6, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r14;
    after_0:
    // 0x80107938: lw          $t8, 0x74($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X74);
    // 0x8010793C: or          $s6, $v0, $zero
    ctx->r22 = ctx->r2 | 0;
    // 0x80107940: blez        $v0, L_8010798C
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80107944: sh          $t8, 0x0($s0)
        MEM_H(0X0, ctx->r16) = ctx->r24;
            goto L_8010798C;
    }
    // 0x80107944: sh          $t8, 0x0($s0)
    MEM_H(0X0, ctx->r16) = ctx->r24;
    // 0x80107948: addiu       $a1, $sp, 0x84
    ctx->r5 = ADD32(ctx->r29, 0X84);
    // 0x8010794C: jal         0x80103F38
    // 0x80107950: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80103F38(rdram, ctx);
        goto after_1;
    // 0x80107950: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_1:
    // 0x80107954: jal         0x800B5BE4
    // 0x80107958: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    func_800B5BE4(rdram, ctx);
        goto after_2;
    // 0x80107958: addiu       $a0, $zero, 0x11
    ctx->r4 = ADD32(0, 0X11);
    after_2:
    // 0x8010795C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80107960: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80107964: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x80107968: addiu       $t9, $t9, 0x4508
    ctx->r25 = ADD32(ctx->r25, 0X4508);
    // 0x8010796C: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80107970: or          $s7, $v0, $zero
    ctx->r23 = ctx->r2 | 0;
    // 0x80107974: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80107978: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8010797C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80107980: jal         0x800BABB8
    // 0x80107984: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800BABB8(rdram, ctx);
        goto after_3;
    // 0x80107984: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x80107988: sw          $s7, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r23;
L_8010798C:
    // 0x8010798C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80107990: mtc1        $at, $f24
    ctx->f24.u32l = ctx->r1;
    // 0x80107994: addiu       $s4, $sp, 0x84
    ctx->r20 = ADD32(ctx->r29, 0X84);
    // 0x80107998: lw          $s7, 0x78($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X78);
    // 0x8010799C: blez        $s6, L_80107A40
    if (SIGNED(ctx->r22) <= 0) {
        // 0x801079A0: or          $s2, $zero, $zero
        ctx->r18 = 0 | 0;
            goto L_80107A40;
    }
    // 0x801079A0: or          $s2, $zero, $zero
    ctx->r18 = 0 | 0;
    // 0x801079A4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x801079A8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801079AC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x801079B0: lui         $s5, 0x8012
    ctx->r21 = S32(0X8012 << 16);
    // 0x801079B4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801079B8: addiu       $s5, $s5, 0x4538
    ctx->r21 = ADD32(ctx->r21, 0X4538);
    // 0x801079BC: addiu       $s0, $sp, 0x90
    ctx->r16 = ADD32(ctx->r29, 0X90);
    // 0x801079C0: addiu       $s3, $sp, 0x5C
    ctx->r19 = ADD32(ctx->r29, 0X5C);
    // 0x801079C4: addiu       $s1, $sp, 0x68
    ctx->r17 = ADD32(ctx->r29, 0X68);
L_801079C8:
    // 0x801079C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801079CC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x801079D0: jal         0x800EFB24
    // 0x801079D4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    func_800EFB24(rdram, ctx);
        goto after_4;
    // 0x801079D4: or          $a2, $s4, $zero
    ctx->r6 = ctx->r20 | 0;
    after_4:
    // 0x801079D8: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x801079DC: jal         0x800EF368
    // 0x801079E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EF368(rdram, ctx);
        goto after_5;
    // 0x801079E0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x801079E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801079E8: jal         0x800EF04C
    // 0x801079EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EF04C(rdram, ctx);
        goto after_6;
    // 0x801079EC: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_6:
    // 0x801079F0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801079F4: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x801079F8: jal         0x800EFB24
    // 0x801079FC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_800EFB24(rdram, ctx);
        goto after_7;
    // 0x801079FC: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x80107A00: mfc1        $a1, $f22
    ctx->r5 = (int32_t)ctx->f22.u32l;
    // 0x80107A04: jal         0x800EF334
    // 0x80107A08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_800EF334(rdram, ctx);
        goto after_8;
    // 0x80107A08: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_8:
    // 0x80107A0C: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80107A10: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80107A14: jal         0x800EE780
    // 0x80107A18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    func_800EE780(rdram, ctx);
        goto after_9;
    // 0x80107A18: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_9:
    // 0x80107A1C: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x80107A20: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80107A24: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80107A28: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    // 0x80107A2C: jal         0x800BABB8
    // 0x80107A30: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    func_800BABB8(rdram, ctx);
        goto after_10;
    // 0x80107A30: sw          $s5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r21;
    after_10:
    // 0x80107A34: addiu       $s2, $s2, 0x1
    ctx->r18 = ADD32(ctx->r18, 0X1);
    // 0x80107A38: bne         $s2, $s6, L_801079C8
    if (ctx->r18 != ctx->r22) {
        // 0x80107A3C: addiu       $s0, $s0, 0xC
        ctx->r16 = ADD32(ctx->r16, 0XC);
            goto L_801079C8;
    }
    // 0x80107A3C: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
L_80107A40:
    // 0x80107A40: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    // 0x80107A44: slti        $v0, $s6, 0x0
    ctx->r2 = SIGNED(ctx->r22) < 0X0 ? 1 : 0;
    // 0x80107A48: lw          $s6, 0x4C($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X4C);
    // 0x80107A4C: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80107A50: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x80107A54: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x80107A58: lw          $s0, 0x34($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X34);
    // 0x80107A5C: lw          $s1, 0x38($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X38);
    // 0x80107A60: lw          $s2, 0x3C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X3C);
    // 0x80107A64: lw          $s3, 0x40($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X40);
    // 0x80107A68: lw          $s4, 0x44($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X44);
    // 0x80107A6C: lw          $s5, 0x48($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X48);
    // 0x80107A70: lw          $s7, 0x50($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X50);
    // 0x80107A74: addiu       $sp, $sp, 0x180
    ctx->r29 = ADD32(ctx->r29, 0X180);
    // 0x80107A78: jr          $ra
    // 0x80107A7C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
    return;
    // 0x80107A7C: xori        $v0, $v0, 0x1
    ctx->r2 = ctx->r2 ^ 0X1;
;}
RECOMP_FUNC void func_80107A80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107A80: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x80107A84: lbu         $t6, 0x762C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X762C);
    // 0x80107A88: addiu       $t7, $t6, -0xF
    ctx->r15 = ADD32(ctx->r14, -0XF);
    // 0x80107A8C: sltiu       $at, $t7, 0xC
    ctx->r1 = ctx->r15 < 0XC ? 1 : 0;
    // 0x80107A90: beq         $at, $zero, L_80107B5C
    if (ctx->r1 == 0) {
        // 0x80107A94: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_80107B5C;
    }
    // 0x80107A94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80107A98: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x80107A9C: addu        $at, $at, $t7
    gpr jr_addend_80107AA4 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80107AA0: lw          $t7, 0x6478($at)
    ctx->r15 = ADD32(ctx->r1, 0X6478);
    // 0x80107AA4: jr          $t7
    // 0x80107AA8: nop

    switch (jr_addend_80107AA4 >> 2) {
        case 0: goto L_80107ACC; break;
        case 1: goto L_80107ABC; break;
        case 2: goto L_80107B5C; break;
        case 3: goto L_80107ADC; break;
        case 4: goto L_80107AAC; break;
        case 5: goto L_80107AEC; break;
        case 6: goto L_80107AFC; break;
        case 7: goto L_80107B0C; break;
        case 8: goto L_80107B1C; break;
        case 9: goto L_80107B2C; break;
        case 10: goto L_80107B3C; break;
        case 11: goto L_80107B4C; break;
        default: switch_error(__func__, 0x80107AA4, 0x80126478);
    }
    // 0x80107AA8: nop

L_80107AAC:
    // 0x80107AAC: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80107AB0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80107AB4: jr          $ra
    // 0x80107AB8: nop

    return;
    // 0x80107AB8: nop

L_80107ABC:
    // 0x80107ABC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80107AC0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80107AC4: jr          $ra
    // 0x80107AC8: nop

    return;
    // 0x80107AC8: nop

L_80107ACC:
    // 0x80107ACC: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x80107AD0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80107AD4: jr          $ra
    // 0x80107AD8: nop

    return;
    // 0x80107AD8: nop

L_80107ADC:
    // 0x80107ADC: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80107AE0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80107AE4: jr          $ra
    // 0x80107AE8: nop

    return;
    // 0x80107AE8: nop

L_80107AEC:
    // 0x80107AEC: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80107AF0: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80107AF4: jr          $ra
    // 0x80107AF8: nop

    return;
    // 0x80107AF8: nop

L_80107AFC:
    // 0x80107AFC: lui         $at, 0x41B0
    ctx->r1 = S32(0X41B0 << 16);
    // 0x80107B00: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80107B04: jr          $ra
    // 0x80107B08: nop

    return;
    // 0x80107B08: nop

L_80107B0C:
    // 0x80107B0C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80107B10: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80107B14: jr          $ra
    // 0x80107B18: nop

    return;
    // 0x80107B18: nop

L_80107B1C:
    // 0x80107B1C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80107B20: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80107B24: jr          $ra
    // 0x80107B28: nop

    return;
    // 0x80107B28: nop

L_80107B2C:
    // 0x80107B2C: lui         $at, 0x4184
    ctx->r1 = S32(0X4184 << 16);
    // 0x80107B30: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80107B34: jr          $ra
    // 0x80107B38: nop

    return;
    // 0x80107B38: nop

L_80107B3C:
    // 0x80107B3C: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80107B40: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80107B44: jr          $ra
    // 0x80107B48: nop

    return;
    // 0x80107B48: nop

L_80107B4C:
    // 0x80107B4C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80107B50: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80107B54: jr          $ra
    // 0x80107B58: nop

    return;
    // 0x80107B58: nop

L_80107B5C:
    // 0x80107B5C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80107B60: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80107B64: nop

    // 0x80107B68: jr          $ra
    // 0x80107B6C: nop

    return;
    // 0x80107B6C: nop

;}
RECOMP_FUNC void func_80107B70(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107B70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80107B74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80107B78: jal         0x80106F30
    // 0x80107B7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80106F30(rdram, ctx);
        goto after_0;
    // 0x80107B7C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x80107B80: bne         $v0, $zero, L_80107B90
    if (ctx->r2 != 0) {
        // 0x80107B84: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80107B90;
    }
    // 0x80107B84: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80107B88: b           L_80107BA0
    // 0x80107B8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80107BA0;
    // 0x80107B8C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80107B90:
    // 0x80107B90: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80107B94: jal         0x800EE88C
    // 0x80107B98: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    func_800EE88C(rdram, ctx);
        goto after_1;
    // 0x80107B98: addiu       $a1, $v1, 0x4
    ctx->r5 = ADD32(ctx->r3, 0X4);
    after_1:
    // 0x80107B9C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80107BA0:
    // 0x80107BA0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80107BA4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80107BA8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80107BB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107BB0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80107BB4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80107BB8: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80107BBC: addiu       $a0, $zero, 0x4F0
    ctx->r4 = ADD32(0, 0X4F0);
    // 0x80107BC0: jal         0x800882C0
    // 0x80107BC4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    _gccubesearch_entrypoint_9(rdram, ctx);
        goto after_0;
    // 0x80107BC4: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    after_0:
    // 0x80107BC8: blez        $v0, L_80107BE4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x80107BCC: lui         $at, 0x3F80
        ctx->r1 = S32(0X3F80 << 16);
            goto L_80107BE4;
    }
    // 0x80107BCC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80107BD0: jal         0x80088C50
    // 0x80107BD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    _gspropmarker_entrypoint_3(rdram, ctx);
        goto after_1;
    // 0x80107BD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    after_1:
    // 0x80107BD8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80107BDC: b           L_80107BF0
    // 0x80107BE0: swc1        $f0, 0x6F10($at)
    MEM_W(0X6F10, ctx->r1) = ctx->f0.u32l;
        goto L_80107BF0;
    // 0x80107BE0: swc1        $f0, 0x6F10($at)
    MEM_W(0X6F10, ctx->r1) = ctx->f0.u32l;
L_80107BE4:
    // 0x80107BE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80107BE8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80107BEC: swc1        $f4, 0x6F10($at)
    MEM_W(0X6F10, ctx->r1) = ctx->f4.u32l;
L_80107BF0:
    // 0x80107BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80107BF4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80107BF8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80107C00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107C00: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80107C04: jr          $ra
    // 0x80107C08: lwc1        $f0, 0x6F10($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F10);
    return;
    // 0x80107C08: lwc1        $f0, 0x6F10($at)
    ctx->f0.u32l = MEM_W(ctx->r1, 0X6F10);
;}
RECOMP_FUNC void func_80107C10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107C10: jr          $ra
    return;
;}
RECOMP_FUNC void func_80107C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107C20: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80107C24: jr          $ra
    // 0x80107C28: addiu       $v0, $v0, 0x4580
    ctx->r2 = ADD32(ctx->r2, 0X4580);
    return;
    // 0x80107C28: addiu       $v0, $v0, 0x4580
    ctx->r2 = ADD32(ctx->r2, 0X4580);
;}
RECOMP_FUNC void func_80107C2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80107C2C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80107C30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80107C34: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80107C38: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80107C3C: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80107C40: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80107C44: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80107C48: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80107C4C: jal         0x80106668
    // 0x80107C50: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    func_80106668(rdram, ctx);
        goto after_0;
    // 0x80107C50: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    after_0:
    // 0x80107C54: lw          $t6, 0x4C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4C);
    // 0x80107C58: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80107C5C: lbu         $t1, 0x72($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X72);
    // 0x80107C60: sw          $t6, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r14;
    // 0x80107C64: lh          $t8, 0x6($s1)
    ctx->r24 = MEM_H(ctx->r17, 0X6);
    // 0x80107C68: andi        $t2, $t1, 0xFF03
    ctx->r10 = ctx->r9 & 0XFF03;
    // 0x80107C6C: lbu         $t9, 0x65($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X65);
    // 0x80107C70: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80107C74: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x80107C78: sb          $t3, 0x72($v0)
    MEM_B(0X72, ctx->r2) = ctx->r11;
    // 0x80107C7C: lw          $t4, 0x0($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X0);
    // 0x80107C80: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80107C84: ori         $t1, $t9, 0x1
    ctx->r9 = ctx->r25 | 0X1;
    // 0x80107C88: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x80107C8C: lw          $v1, 0x6C($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X6C);
    // 0x80107C90: lbu         $t8, 0x77($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X77);
    // 0x80107C94: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80107C98: srl         $t3, $v1, 9
    ctx->r11 = S32(U32(ctx->r3) >> 9);
    // 0x80107C9C: andi        $t9, $t8, 0xFFF0
    ctx->r25 = ctx->r24 & 0XFFF0;
    // 0x80107CA0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80107CA4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107CA8: swc1        $f6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->f6.u32l;
    // 0x80107CAC: lw          $t5, 0x4($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X4);
    // 0x80107CB0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80107CB4: mtc1        $t5, $f8
    ctx->f8.u32l = ctx->r13;
    // 0x80107CB8: nop

    // 0x80107CBC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80107CC0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80107CC4: swc1        $f10, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->f10.u32l;
    // 0x80107CC8: lw          $t6, 0x8($a3)
    ctx->r14 = MEM_W(ctx->r7, 0X8);
    // 0x80107CCC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80107CD0: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80107CD4: nop

    // 0x80107CD8: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80107CDC: swc1        $f18, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->f18.u32l;
    // 0x80107CE0: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80107CE4: sb          $t1, 0x65($v0)
    MEM_B(0X65, ctx->r2) = ctx->r9;
    // 0x80107CE8: swc1        $f6, 0x38($v0)
    MEM_W(0X38, ctx->r2) = ctx->f6.u32l;
    // 0x80107CEC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80107CF0: lbu         $t1, 0x7A($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X7A);
    // 0x80107CF4: cvt.s.w     $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    ctx->f0.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80107CF8: andi        $t0, $t1, 0xFF3F
    ctx->r8 = ctx->r9 & 0XFF3F;
    // 0x80107CFC: swc1        $f0, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f0.u32l;
    // 0x80107D00: swc1        $f0, 0x54($v0)
    MEM_W(0X54, ctx->r2) = ctx->f0.u32l;
    // 0x80107D04: lh          $t2, 0x2($s1)
    ctx->r10 = MEM_H(ctx->r17, 0X2);
    // 0x80107D08: sb          $t9, 0x77($v0)
    MEM_B(0X77, ctx->r2) = ctx->r25;
    // 0x80107D0C: swc1        $f8, 0x34($v0)
    MEM_W(0X34, ctx->r2) = ctx->f8.u32l;
    // 0x80107D10: xor         $t4, $t2, $t3
    ctx->r12 = ctx->r10 ^ ctx->r11;
    // 0x80107D14: sll         $t5, $t4, 20
    ctx->r13 = S32(ctx->r12 << 20);
    // 0x80107D18: lbu         $t4, 0x65($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X65);
    // 0x80107D1C: srl         $t6, $t5, 11
    ctx->r14 = S32(U32(ctx->r13) >> 11);
    // 0x80107D20: ori         $t2, $t0, 0x40
    ctx->r10 = ctx->r8 | 0X40;
    // 0x80107D24: xor         $t7, $t6, $v1
    ctx->r15 = ctx->r14 ^ ctx->r3;
    // 0x80107D28: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x80107D2C: sw          $t7, 0x6C($v0)
    MEM_W(0X6C, ctx->r2) = ctx->r15;
    // 0x80107D30: sb          $t2, 0x7A($v0)
    MEM_B(0X7A, ctx->r2) = ctx->r10;
    // 0x80107D34: sb          $t5, 0x65($v0)
    MEM_B(0X65, ctx->r2) = ctx->r13;
    // 0x80107D38: lhu         $t6, 0x18($s1)
    ctx->r14 = MEM_HU(ctx->r17, 0X18);
    // 0x80107D3C: sh          $t6, 0x7C($v0)
    MEM_H(0X7C, ctx->r2) = ctx->r14;
    // 0x80107D40: lwc1        $f16, 0x1C($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X1C);
    // 0x80107D44: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80107D48: nop

    // 0x80107D4C: bc1tl       L_80107D68
    if (c1cs) {
        // 0x80107D50: lbu         $t1, 0x75($v0)
        ctx->r9 = MEM_BU(ctx->r2, 0X75);
            goto L_80107D68;
    }
    goto skip_0;
    // 0x80107D50: lbu         $t1, 0x75($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X75);
    skip_0:
    // 0x80107D54: lbu         $t8, 0x75($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X75);
    // 0x80107D58: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x80107D5C: b           L_80107D70
    // 0x80107D60: sb          $t9, 0x75($v0)
    MEM_B(0X75, ctx->r2) = ctx->r25;
        goto L_80107D70;
    // 0x80107D60: sb          $t9, 0x75($v0)
    MEM_B(0X75, ctx->r2) = ctx->r25;
    // 0x80107D64: lbu         $t1, 0x75($v0)
    ctx->r9 = MEM_BU(ctx->r2, 0X75);
L_80107D68:
    // 0x80107D68: andi        $t0, $t1, 0xFFEF
    ctx->r8 = ctx->r9 & 0XFFEF;
    // 0x80107D6C: sb          $t0, 0x75($v0)
    MEM_B(0X75, ctx->r2) = ctx->r8;
L_80107D70:
    // 0x80107D70: lw          $t2, 0x74($s0)
    ctx->r10 = MEM_W(ctx->r16, 0X74);
    // 0x80107D74: lbu         $t6, 0x95($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X95);
    // 0x80107D78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80107D7C: sll         $t3, $t2, 11
    ctx->r11 = S32(ctx->r10 << 11);
    // 0x80107D80: srl         $t4, $t3, 31
    ctx->r12 = S32(U32(ctx->r11) >> 31);
    // 0x80107D84: andi        $t5, $t4, 0x1
    ctx->r13 = ctx->r12 & 0X1;
    // 0x80107D88: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x80107D8C: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x80107D90: sb          $t8, 0x95($s0)
    MEM_B(0X95, ctx->r16) = ctx->r24;
    // 0x80107D94: jal         0x80100074
    // 0x80107D98: lhu         $a2, 0x30($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X30);
    func_80100074(rdram, ctx);
        goto after_1;
    // 0x80107D98: lhu         $a2, 0x30($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X30);
    after_1:
    // 0x80107D9C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80107DA0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80107DA4: jal         0x80100074
    // 0x80107DA8: lhu         $a2, 0x32($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X32);
    func_80100074(rdram, ctx);
        goto after_2;
    // 0x80107DA8: lhu         $a2, 0x32($s1)
    ctx->r6 = MEM_HU(ctx->r17, 0X32);
    after_2:
    // 0x80107DAC: lhu         $a0, 0x4($s1)
    ctx->r4 = MEM_HU(ctx->r17, 0X4);
    // 0x80107DB0: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x80107DB4: bne         $a0, $at, L_80107DEC
    if (ctx->r4 != ctx->r1) {
        // 0x80107DB8: nop
    
            goto L_80107DEC;
    }
    // 0x80107DB8: nop

    // 0x80107DBC: lw          $t9, 0x24($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X24);
    // 0x80107DC0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80107DC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80107DC8: andi        $t1, $t9, 0x400
    ctx->r9 = ctx->r25 & 0X400;
    // 0x80107DCC: beq         $t1, $zero, L_80107DDC
    if (ctx->r9 == 0) {
        // 0x80107DD0: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_80107DDC;
    }
    // 0x80107DD0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80107DD4: b           L_80107DDC
    // 0x80107DD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_80107DDC;
    // 0x80107DD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80107DDC:
    // 0x80107DDC: jal         0x800EBED4
    // 0x80107DE0: lh          $a2, 0x0($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X0);
    func_800EBED4(rdram, ctx);
        goto after_3;
    // 0x80107DE0: lh          $a2, 0x0($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X0);
    after_3:
    // 0x80107DE4: b           L_80107E34
    // 0x80107DE8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
        goto L_80107E34;
    // 0x80107DE8: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_80107DEC:
    // 0x80107DEC: jal         0x800D738C
    // 0x80107DF0: nop

    func_800D738C(rdram, ctx);
        goto after_4;
    // 0x80107DF0: nop

    after_4:
    // 0x80107DF4: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80107DF8: bne         $v0, $at, L_80107E08
    if (ctx->r2 != ctx->r1) {
        // 0x80107DFC: lw          $a0, 0x40($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X40);
            goto L_80107E08;
    }
    // 0x80107DFC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x80107E00: b           L_80107E0C
    // 0x80107E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_80107E0C;
    // 0x80107E04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80107E08:
    // 0x80107E08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_80107E0C:
    // 0x80107E0C: lw          $t0, 0x24($s1)
    ctx->r8 = MEM_W(ctx->r17, 0X24);
    // 0x80107E10: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80107E14: andi        $t2, $t0, 0x400
    ctx->r10 = ctx->r8 & 0X400;
    // 0x80107E18: beq         $t2, $zero, L_80107E28
    if (ctx->r10 == 0) {
        // 0x80107E1C: nop
    
            goto L_80107E28;
    }
    // 0x80107E1C: nop

    // 0x80107E20: b           L_80107E28
    // 0x80107E24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
        goto L_80107E28;
    // 0x80107E24: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
L_80107E28:
    // 0x80107E28: jal         0x800EBED4
    // 0x80107E2C: lh          $a2, 0x0($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X0);
    func_800EBED4(rdram, ctx);
        goto after_5;
    // 0x80107E2C: lh          $a2, 0x0($s1)
    ctx->r6 = MEM_H(ctx->r17, 0X0);
    after_5:
    // 0x80107E30: sw          $v0, 0x0($s0)
    MEM_W(0X0, ctx->r16) = ctx->r2;
L_80107E34:
    // 0x80107E34: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80107E38: lbu         $t4, 0x19($v0)
    ctx->r12 = MEM_BU(ctx->r2, 0X19);
    // 0x80107E3C: ori         $t6, $t4, 0x1
    ctx->r14 = ctx->r12 | 0X1;
    // 0x80107E40: sb          $t6, 0x19($v0)
    MEM_B(0X19, ctx->r2) = ctx->r14;
    // 0x80107E44: lw          $v1, 0x2C($s1)
    ctx->r3 = MEM_W(ctx->r17, 0X2C);
    // 0x80107E48: beql        $v1, $zero, L_80107E60
    if (ctx->r3 == 0) {
        // 0x80107E4C: lw          $t8, 0x0($s0)
        ctx->r24 = MEM_W(ctx->r16, 0X0);
            goto L_80107E60;
    }
    goto skip_1;
    // 0x80107E4C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
    skip_1:
    // 0x80107E50: lw          $t5, 0x0($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X0);
    // 0x80107E54: b           L_80107E6C
    // 0x80107E58: sw          $v1, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r3;
        goto L_80107E6C;
    // 0x80107E58: sw          $v1, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->r3;
    // 0x80107E5C: lw          $t8, 0x0($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X0);
L_80107E60:
    // 0x80107E60: lui         $t7, 0x8010
    ctx->r15 = S32(0X8010 << 16);
    // 0x80107E64: addiu       $t7, $t7, 0x7C20
    ctx->r15 = ADD32(ctx->r15, 0X7C20);
    // 0x80107E68: sw          $t7, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r15;
L_80107E6C:
    // 0x80107E6C: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80107E70: jal         0x800EC340
    // 0x80107E74: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    func_800EC340(rdram, ctx);
        goto after_6;
    // 0x80107E74: lw          $a1, 0x38($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X38);
    after_6:
    // 0x80107E78: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80107E7C: jal         0x800EC360
    // 0x80107E80: lhu         $a1, 0x4($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4);
    func_800EC360(rdram, ctx);
        goto after_7;
    // 0x80107E80: lhu         $a1, 0x4($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X4);
    after_7:
    // 0x80107E84: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x80107E88: jal         0x800EC368
    // 0x80107E8C: lhu         $a1, 0x22($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X22);
    func_800EC368(rdram, ctx);
        goto after_8;
    // 0x80107E8C: lhu         $a1, 0x22($s1)
    ctx->r5 = MEM_HU(ctx->r17, 0X22);
    after_8:
    // 0x80107E90: lbu         $t1, 0x75($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X75);
    // 0x80107E94: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80107E98: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80107E9C: ori         $t5, $t1, 0x1
    ctx->r13 = ctx->r9 | 0X1;
    // 0x80107EA0: sb          $t5, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r13;
    // 0x80107EA4: lhu         $t3, 0x74($s0)
    ctx->r11 = MEM_HU(ctx->r16, 0X74);
    // 0x80107EA8: andi        $t7, $t5, 0xF7
    ctx->r15 = ctx->r13 & 0XF7;
    // 0x80107EAC: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x80107EB0: andi        $t6, $t4, 0x8
    ctx->r14 = ctx->r12 & 0X8;
    // 0x80107EB4: or          $t8, $t6, $t7
    ctx->r24 = ctx->r14 | ctx->r15;
    // 0x80107EB8: jal         0x80102FA0
    // 0x80107EBC: sb          $t8, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r24;
    func_80102FA0(rdram, ctx);
        goto after_9;
    // 0x80107EBC: sb          $t8, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r24;
    after_9:
    // 0x80107EC0: beql        $v0, $zero, L_80107ED4
    if (ctx->r2 == 0) {
        // 0x80107EC4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80107ED4;
    }
    goto skip_2;
    // 0x80107EC4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_2:
    // 0x80107EC8: jal         0x8008A498
    // 0x80107ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _subaddieDll_entrypoint_1(rdram, ctx);
        goto after_10;
    // 0x80107ECC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_10:
    // 0x80107ED0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80107ED4:
    // 0x80107ED4: jal         0x80102FA0
    // 0x80107ED8: lui         $a1, 0x80
    ctx->r5 = S32(0X80 << 16);
    func_80102FA0(rdram, ctx);
        goto after_11;
    // 0x80107ED8: lui         $a1, 0x80
    ctx->r5 = S32(0X80 << 16);
    after_11:
    // 0x80107EDC: beq         $v0, $zero, L_80107EF0
    if (ctx->r2 == 0) {
        // 0x80107EE0: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80107EF0;
    }
    // 0x80107EE0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80107EE4: lbu         $t1, 0x71($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X71);
    // 0x80107EE8: ori         $t0, $t1, 0x20
    ctx->r8 = ctx->r9 | 0X20;
    // 0x80107EEC: sb          $t0, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r8;
L_80107EF0:
    // 0x80107EF0: jal         0x80102FA0
    // 0x80107EF4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    func_80102FA0(rdram, ctx);
        goto after_12;
    // 0x80107EF4: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    after_12:
    // 0x80107EF8: beq         $v0, $zero, L_80107F0C
    if (ctx->r2 == 0) {
        // 0x80107EFC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80107F0C;
    }
    // 0x80107EFC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80107F00: lbu         $t3, 0x70($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X70);
    // 0x80107F04: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x80107F08: sb          $t4, 0x70($s0)
    MEM_B(0X70, ctx->r16) = ctx->r12;
L_80107F0C:
    // 0x80107F0C: jal         0x80102FA0
    // 0x80107F10: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    func_80102FA0(rdram, ctx);
        goto after_13;
    // 0x80107F10: addiu       $a1, $zero, 0x100
    ctx->r5 = ADD32(0, 0X100);
    after_13:
    // 0x80107F14: beq         $v0, $zero, L_80107F2C
    if (ctx->r2 == 0) {
        // 0x80107F18: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80107F2C;
    }
    // 0x80107F18: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80107F1C: lbu         $t5, 0x77($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X77);
    // 0x80107F20: andi        $t6, $t5, 0xFFF0
    ctx->r14 = ctx->r13 & 0XFFF0;
    // 0x80107F24: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x80107F28: sb          $t7, 0x77($s0)
    MEM_B(0X77, ctx->r16) = ctx->r15;
L_80107F2C:
    // 0x80107F2C: jal         0x80102FA0
    // 0x80107F30: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    func_80102FA0(rdram, ctx);
        goto after_14;
    // 0x80107F30: lui         $a1, 0x20
    ctx->r5 = S32(0X20 << 16);
    after_14:
    // 0x80107F34: beq         $v0, $zero, L_80107F48
    if (ctx->r2 == 0) {
        // 0x80107F38: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80107F48;
    }
    // 0x80107F38: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80107F3C: lbu         $t9, 0x64($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X64);
    // 0x80107F40: ori         $t1, $t9, 0x2
    ctx->r9 = ctx->r25 | 0X2;
    // 0x80107F44: sb          $t1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r9;
L_80107F48:
    // 0x80107F48: jal         0x80102FA0
    // 0x80107F4C: lui         $a1, 0x400
    ctx->r5 = S32(0X400 << 16);
    func_80102FA0(rdram, ctx);
        goto after_15;
    // 0x80107F4C: lui         $a1, 0x400
    ctx->r5 = S32(0X400 << 16);
    after_15:
    // 0x80107F50: beq         $v0, $zero, L_80107F64
    if (ctx->r2 == 0) {
        // 0x80107F54: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80107F64;
    }
    // 0x80107F54: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80107F58: lbu         $t2, 0x71($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X71);
    // 0x80107F5C: ori         $t3, $t2, 0x40
    ctx->r11 = ctx->r10 | 0X40;
    // 0x80107F60: sb          $t3, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r11;
L_80107F64:
    // 0x80107F64: jal         0x80102FA0
    // 0x80107F68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_80102FA0(rdram, ctx);
        goto after_16;
    // 0x80107F68: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_16:
    // 0x80107F6C: bne         $v0, $zero, L_80107F80
    if (ctx->r2 != 0) {
        // 0x80107F70: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80107F80;
    }
    // 0x80107F70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80107F74: lbu         $t5, 0x75($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X75);
    // 0x80107F78: ori         $t6, $t5, 0x2
    ctx->r14 = ctx->r13 | 0X2;
    // 0x80107F7C: sb          $t6, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r14;
L_80107F80:
    // 0x80107F80: jal         0x80102FA0
    // 0x80107F84: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    func_80102FA0(rdram, ctx);
        goto after_17;
    // 0x80107F84: lui         $a1, 0x10
    ctx->r5 = S32(0X10 << 16);
    after_17:
    // 0x80107F88: bne         $v0, $zero, L_80107F9C
    if (ctx->r2 != 0) {
        // 0x80107F8C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80107F9C;
    }
    // 0x80107F8C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80107F90: lbu         $t8, 0x71($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X71);
    // 0x80107F94: ori         $t9, $t8, 0x10
    ctx->r25 = ctx->r24 | 0X10;
    // 0x80107F98: sb          $t9, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r25;
L_80107F9C:
    // 0x80107F9C: jal         0x80102FA0
    // 0x80107FA0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    func_80102FA0(rdram, ctx);
        goto after_18;
    // 0x80107FA0: lui         $a1, 0x800
    ctx->r5 = S32(0X800 << 16);
    after_18:
    // 0x80107FA4: beq         $v0, $zero, L_80107FB8
    if (ctx->r2 == 0) {
        // 0x80107FA8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80107FB8;
    }
    // 0x80107FA8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80107FAC: lbu         $t0, 0x71($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X71);
    // 0x80107FB0: ori         $t2, $t0, 0x4
    ctx->r10 = ctx->r8 | 0X4;
    // 0x80107FB4: sb          $t2, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r10;
L_80107FB8:
    // 0x80107FB8: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80107FBC: jal         0x80102FA0
    // 0x80107FC0: ori         $a1, $a1, 0x2
    ctx->r5 = ctx->r5 | 0X2;
    func_80102FA0(rdram, ctx);
        goto after_19;
    // 0x80107FC0: ori         $a1, $a1, 0x2
    ctx->r5 = ctx->r5 | 0X2;
    after_19:
    // 0x80107FC4: beq         $v0, $zero, L_80107FDC
    if (ctx->r2 == 0) {
        // 0x80107FC8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80107FDC;
    }
    // 0x80107FC8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80107FCC: lw          $v0, 0x0($s0)
    ctx->r2 = MEM_W(ctx->r16, 0X0);
    // 0x80107FD0: lbu         $t3, 0x2A($v0)
    ctx->r11 = MEM_BU(ctx->r2, 0X2A);
    // 0x80107FD4: andi        $t4, $t3, 0xFFFD
    ctx->r12 = ctx->r11 & 0XFFFD;
    // 0x80107FD8: sb          $t4, 0x2A($v0)
    MEM_B(0X2A, ctx->r2) = ctx->r12;
L_80107FDC:
    // 0x80107FDC: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80107FE0: jal         0x80102FA0
    // 0x80107FE4: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    func_80102FA0(rdram, ctx);
        goto after_20;
    // 0x80107FE4: ori         $a1, $a1, 0x4
    ctx->r5 = ctx->r5 | 0X4;
    after_20:
    // 0x80107FE8: beq         $v0, $zero, L_80107FFC
    if (ctx->r2 == 0) {
        // 0x80107FEC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80107FFC;
    }
    // 0x80107FEC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80107FF0: lbu         $t6, 0x64($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X64);
    // 0x80107FF4: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x80107FF8: sb          $t7, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r15;
L_80107FFC:
    // 0x80107FFC: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80108000: jal         0x80102FA0
    // 0x80108004: ori         $a1, $a1, 0x8
    ctx->r5 = ctx->r5 | 0X8;
    func_80102FA0(rdram, ctx);
        goto after_21;
    // 0x80108004: ori         $a1, $a1, 0x8
    ctx->r5 = ctx->r5 | 0X8;
    after_21:
    // 0x80108008: beq         $v0, $zero, L_8010801C
    if (ctx->r2 == 0) {
        // 0x8010800C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8010801C;
    }
    // 0x8010800C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80108010: lbu         $t9, 0x64($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X64);
    // 0x80108014: ori         $t1, $t9, 0x40
    ctx->r9 = ctx->r25 | 0X40;
    // 0x80108018: sb          $t1, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r9;
L_8010801C:
    // 0x8010801C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80108020: jal         0x80102FA0
    // 0x80108024: ori         $a1, $a1, 0x400
    ctx->r5 = ctx->r5 | 0X400;
    func_80102FA0(rdram, ctx);
        goto after_22;
    // 0x80108024: ori         $a1, $a1, 0x400
    ctx->r5 = ctx->r5 | 0X400;
    after_22:
    // 0x80108028: beq         $v0, $zero, L_8010803C
    if (ctx->r2 == 0) {
        // 0x8010802C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8010803C;
    }
    // 0x8010802C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80108030: lbu         $t2, 0x71($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X71);
    // 0x80108034: ori         $t3, $t2, 0x2
    ctx->r11 = ctx->r10 | 0X2;
    // 0x80108038: sb          $t3, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r11;
L_8010803C:
    // 0x8010803C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80108040: jal         0x80102FA0
    // 0x80108044: ori         $a1, $a1, 0x1000
    ctx->r5 = ctx->r5 | 0X1000;
    func_80102FA0(rdram, ctx);
        goto after_23;
    // 0x80108044: ori         $a1, $a1, 0x1000
    ctx->r5 = ctx->r5 | 0X1000;
    after_23:
    // 0x80108048: beq         $v0, $zero, L_8010805C
    if (ctx->r2 == 0) {
        // 0x8010804C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8010805C;
    }
    // 0x8010804C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80108050: lbu         $t5, 0x71($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X71);
    // 0x80108054: ori         $t6, $t5, 0x1
    ctx->r14 = ctx->r13 | 0X1;
    // 0x80108058: sb          $t6, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r14;
L_8010805C:
    // 0x8010805C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80108060: jal         0x80102FA0
    // 0x80108064: ori         $a1, $a1, 0x2000
    ctx->r5 = ctx->r5 | 0X2000;
    func_80102FA0(rdram, ctx);
        goto after_24;
    // 0x80108064: ori         $a1, $a1, 0x2000
    ctx->r5 = ctx->r5 | 0X2000;
    after_24:
    // 0x80108068: beq         $v0, $zero, L_8010807C
    if (ctx->r2 == 0) {
        // 0x8010806C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8010807C;
    }
    // 0x8010806C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80108070: lbu         $t8, 0x77($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X77);
    // 0x80108074: ori         $t9, $t8, 0x20
    ctx->r25 = ctx->r24 | 0X20;
    // 0x80108078: sb          $t9, 0x77($s0)
    MEM_B(0X77, ctx->r16) = ctx->r25;
L_8010807C:
    // 0x8010807C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80108080: jal         0x80102FA0
    // 0x80108084: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    func_80102FA0(rdram, ctx);
        goto after_25;
    // 0x80108084: ori         $a1, $a1, 0x4000
    ctx->r5 = ctx->r5 | 0X4000;
    after_25:
    // 0x80108088: beq         $v0, $zero, L_8010809C
    if (ctx->r2 == 0) {
        // 0x8010808C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8010809C;
    }
    // 0x8010808C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80108090: lbu         $t0, 0x7E($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X7E);
    // 0x80108094: ori         $t2, $t0, 0x20
    ctx->r10 = ctx->r8 | 0X20;
    // 0x80108098: sb          $t2, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = ctx->r10;
L_8010809C:
    // 0x8010809C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x801080A0: jal         0x80102FA0
    // 0x801080A4: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    func_80102FA0(rdram, ctx);
        goto after_26;
    // 0x801080A4: ori         $a1, $a1, 0x100
    ctx->r5 = ctx->r5 | 0X100;
    after_26:
    // 0x801080A8: beq         $v0, $zero, L_801080BC
    if (ctx->r2 == 0) {
        // 0x801080AC: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801080BC;
    }
    // 0x801080AC: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801080B0: lbu         $t4, 0x74($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X74);
    // 0x801080B4: ori         $t5, $t4, 0x4
    ctx->r13 = ctx->r12 | 0X4;
    // 0x801080B8: sb          $t5, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r13;
L_801080BC:
    // 0x801080BC: jal         0x80102FA0
    // 0x801080C0: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    func_80102FA0(rdram, ctx);
        goto after_27;
    // 0x801080C0: lui         $a1, 0x8010
    ctx->r5 = S32(0X8010 << 16);
    after_27:
    // 0x801080C4: beq         $v0, $zero, L_801080D8
    if (ctx->r2 == 0) {
        // 0x801080C8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801080D8;
    }
    // 0x801080C8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801080CC: lbu         $t7, 0x75($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X75);
    // 0x801080D0: ori         $t8, $t7, 0x80
    ctx->r24 = ctx->r15 | 0X80;
    // 0x801080D4: sb          $t8, 0x75($s0)
    MEM_B(0X75, ctx->r16) = ctx->r24;
L_801080D8:
    // 0x801080D8: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x801080DC: jal         0x80102FA0
    // 0x801080E0: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    func_80102FA0(rdram, ctx);
        goto after_28;
    // 0x801080E0: ori         $a1, $a1, 0x1
    ctx->r5 = ctx->r5 | 0X1;
    after_28:
    // 0x801080E4: beq         $v0, $zero, L_801080F8
    if (ctx->r2 == 0) {
        // 0x801080E8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801080F8;
    }
    // 0x801080E8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801080EC: lbu         $t1, 0x64($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X64);
    // 0x801080F0: ori         $t0, $t1, 0x1
    ctx->r8 = ctx->r9 | 0X1;
    // 0x801080F4: sb          $t0, 0x64($s0)
    MEM_B(0X64, ctx->r16) = ctx->r8;
L_801080F8:
    // 0x801080F8: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x801080FC: jal         0x80102FA0
    // 0x80108100: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    func_80102FA0(rdram, ctx);
        goto after_29;
    // 0x80108100: ori         $a1, $a1, 0x10
    ctx->r5 = ctx->r5 | 0X10;
    after_29:
    // 0x80108104: beq         $v0, $zero, L_80108118
    if (ctx->r2 == 0) {
        // 0x80108108: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80108118;
    }
    // 0x80108108: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010810C: lbu         $t3, 0x7B($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X7B);
    // 0x80108110: ori         $t4, $t3, 0x2
    ctx->r12 = ctx->r11 | 0X2;
    // 0x80108114: sb          $t4, 0x7B($s0)
    MEM_B(0X7B, ctx->r16) = ctx->r12;
L_80108118:
    // 0x80108118: jal         0x80102FA0
    // 0x8010811C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    func_80102FA0(rdram, ctx);
        goto after_30;
    // 0x8010811C: lui         $a1, 0x8040
    ctx->r5 = S32(0X8040 << 16);
    after_30:
    // 0x80108120: beq         $v0, $zero, L_80108134
    if (ctx->r2 == 0) {
        // 0x80108124: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80108134;
    }
    // 0x80108124: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80108128: lbu         $t6, 0x94($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X94);
    // 0x8010812C: ori         $t7, $t6, 0x80
    ctx->r15 = ctx->r14 | 0X80;
    // 0x80108130: sb          $t7, 0x94($s0)
    MEM_B(0X94, ctx->r16) = ctx->r15;
L_80108134:
    // 0x80108134: jal         0x80102FA0
    // 0x80108138: lui         $a1, 0x8080
    ctx->r5 = S32(0X8080 << 16);
    func_80102FA0(rdram, ctx);
        goto after_31;
    // 0x80108138: lui         $a1, 0x8080
    ctx->r5 = S32(0X8080 << 16);
    after_31:
    // 0x8010813C: beq         $v0, $zero, L_80108150
    if (ctx->r2 == 0) {
        // 0x80108140: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80108150;
    }
    // 0x80108140: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80108144: lbu         $t9, 0x94($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X94);
    // 0x80108148: ori         $t1, $t9, 0x40
    ctx->r9 = ctx->r25 | 0X40;
    // 0x8010814C: sb          $t1, 0x94($s0)
    MEM_B(0X94, ctx->r16) = ctx->r9;
L_80108150:
    // 0x80108150: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80108154: jal         0x80102FA0
    // 0x80108158: ori         $a1, $a1, 0x40
    ctx->r5 = ctx->r5 | 0X40;
    func_80102FA0(rdram, ctx);
        goto after_32;
    // 0x80108158: ori         $a1, $a1, 0x40
    ctx->r5 = ctx->r5 | 0X40;
    after_32:
    // 0x8010815C: beq         $v0, $zero, L_80108170
    if (ctx->r2 == 0) {
        // 0x80108160: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80108170;
    }
    // 0x80108160: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80108164: lbu         $t2, 0x73($s0)
    ctx->r10 = MEM_BU(ctx->r16, 0X73);
    // 0x80108168: ori         $t3, $t2, 0x4
    ctx->r11 = ctx->r10 | 0X4;
    // 0x8010816C: sb          $t3, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r11;
L_80108170:
    // 0x80108170: jal         0x80102FA0
    // 0x80108174: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    func_80102FA0(rdram, ctx);
        goto after_33;
    // 0x80108174: lui         $a1, 0x8004
    ctx->r5 = S32(0X8004 << 16);
    after_33:
    // 0x80108178: beq         $v0, $zero, L_8010818C
    if (ctx->r2 == 0) {
        // 0x8010817C: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_8010818C;
    }
    // 0x8010817C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80108180: lbu         $t5, 0x79($s0)
    ctx->r13 = MEM_BU(ctx->r16, 0X79);
    // 0x80108184: ori         $t6, $t5, 0x8
    ctx->r14 = ctx->r13 | 0X8;
    // 0x80108188: sb          $t6, 0x79($s0)
    MEM_B(0X79, ctx->r16) = ctx->r14;
L_8010818C:
    // 0x8010818C: jal         0x80102FA0
    // 0x80108190: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    func_80102FA0(rdram, ctx);
        goto after_34;
    // 0x80108190: lui         $a1, 0x8020
    ctx->r5 = S32(0X8020 << 16);
    after_34:
    // 0x80108194: beq         $v0, $zero, L_801081A8
    if (ctx->r2 == 0) {
        // 0x80108198: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801081A8;
    }
    // 0x80108198: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010819C: lbu         $t8, 0x95($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X95);
    // 0x801081A0: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x801081A4: sb          $t9, 0x95($s0)
    MEM_B(0X95, ctx->r16) = ctx->r25;
L_801081A8:
    // 0x801081A8: jal         0x80102FA0
    // 0x801081AC: lui         $a1, 0x8400
    ctx->r5 = S32(0X8400 << 16);
    func_80102FA0(rdram, ctx);
        goto after_35;
    // 0x801081AC: lui         $a1, 0x8400
    ctx->r5 = S32(0X8400 << 16);
    after_35:
    // 0x801081B0: beq         $v0, $zero, L_801081C4
    if (ctx->r2 == 0) {
        // 0x801081B4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801081C4;
    }
    // 0x801081B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801081B8: lbu         $t0, 0x96($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X96);
    // 0x801081BC: ori         $t2, $t0, 0x40
    ctx->r10 = ctx->r8 | 0X40;
    // 0x801081C0: sb          $t2, 0x96($s0)
    MEM_B(0X96, ctx->r16) = ctx->r10;
L_801081C4:
    // 0x801081C4: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x801081C8: jal         0x80102FA0
    // 0x801081CC: ori         $a1, $a1, 0x80
    ctx->r5 = ctx->r5 | 0X80;
    func_80102FA0(rdram, ctx);
        goto after_36;
    // 0x801081CC: ori         $a1, $a1, 0x80
    ctx->r5 = ctx->r5 | 0X80;
    after_36:
    // 0x801081D0: beq         $v0, $zero, L_801081E4
    if (ctx->r2 == 0) {
        // 0x801081D4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801081E4;
    }
    // 0x801081D4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801081D8: lbu         $t4, 0x71($s0)
    ctx->r12 = MEM_BU(ctx->r16, 0X71);
    // 0x801081DC: ori         $t5, $t4, 0x8
    ctx->r13 = ctx->r12 | 0X8;
    // 0x801081E0: sb          $t5, 0x71($s0)
    MEM_B(0X71, ctx->r16) = ctx->r13;
L_801081E4:
    // 0x801081E4: jal         0x80102FA0
    // 0x801081E8: lui         $a1, 0x8200
    ctx->r5 = S32(0X8200 << 16);
    func_80102FA0(rdram, ctx);
        goto after_37;
    // 0x801081E8: lui         $a1, 0x8200
    ctx->r5 = S32(0X8200 << 16);
    after_37:
    // 0x801081EC: beq         $v0, $zero, L_80108200
    if (ctx->r2 == 0) {
        // 0x801081F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80108200;
    }
    // 0x801081F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801081F4: lbu         $t6, 0x95($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X95);
    // 0x801081F8: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x801081FC: sb          $t7, 0x95($s0)
    MEM_B(0X95, ctx->r16) = ctx->r15;
L_80108200:
    // 0x80108200: jal         0x8010A800
    // 0x80108204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8010A800(rdram, ctx);
        goto after_38;
    // 0x80108204: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_38:
    // 0x80108208: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010820C: jal         0x80102FA0
    // 0x80108210: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    func_80102FA0(rdram, ctx);
        goto after_39;
    // 0x80108210: addiu       $a1, $zero, 0x800
    ctx->r5 = ADD32(0, 0X800);
    after_39:
    // 0x80108214: beq         $v0, $zero, L_8010822C
    if (ctx->r2 == 0) {
        // 0x80108218: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_8010822C;
    }
    // 0x80108218: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010821C: jal         0x8010A800
    // 0x80108220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8010A800(rdram, ctx);
        goto after_40;
    // 0x80108220: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_40:
    // 0x80108224: jal         0x8010A63C
    // 0x80108228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_8010A63C(rdram, ctx);
        goto after_41;
    // 0x80108228: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_41:
L_8010822C:
    // 0x8010822C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80108230: jal         0x80102FA0
    // 0x80108234: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    func_80102FA0(rdram, ctx);
        goto after_42;
    // 0x80108234: lui         $a1, 0x2
    ctx->r5 = S32(0X2 << 16);
    after_42:
    // 0x80108238: beq         $v0, $zero, L_80108250
    if (ctx->r2 == 0) {
        // 0x8010823C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80108250;
    }
    // 0x8010823C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80108240: jal         0x8010A800
    // 0x80108244: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_8010A800(rdram, ctx);
        goto after_43;
    // 0x80108244: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_43:
    // 0x80108248: b           L_80108298
    // 0x8010824C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
        goto L_80108298;
    // 0x8010824C: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
L_80108250:
    // 0x80108250: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80108254: jal         0x80102FA0
    // 0x80108258: lui         $a1, 0x40
    ctx->r5 = S32(0X40 << 16);
    func_80102FA0(rdram, ctx);
        goto after_44;
    // 0x80108258: lui         $a1, 0x40
    ctx->r5 = S32(0X40 << 16);
    after_44:
    // 0x8010825C: beq         $v0, $zero, L_80108278
    if (ctx->r2 == 0) {
        // 0x80108260: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80108278;
    }
    // 0x80108260: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80108264: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80108268: jal         0x8010A800
    // 0x8010826C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8010A800(rdram, ctx);
        goto after_45;
    // 0x8010826C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_45:
    // 0x80108270: b           L_80108298
    // 0x80108274: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
        goto L_80108298;
    // 0x80108274: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
L_80108278:
    // 0x80108278: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x8010827C: jal         0x80102FA0
    // 0x80108280: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_80102FA0(rdram, ctx);
        goto after_46;
    // 0x80108280: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_46:
    // 0x80108284: beq         $v0, $zero, L_80108294
    if (ctx->r2 == 0) {
        // 0x80108288: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80108294;
    }
    // 0x80108288: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010828C: jal         0x8010A800
    // 0x80108290: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    func_8010A800(rdram, ctx);
        goto after_47;
    // 0x80108290: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    after_47:
L_80108294:
    // 0x80108294: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
L_80108298:
    // 0x80108298: ori         $a1, $a1, 0x800
    ctx->r5 = ctx->r5 | 0X800;
    // 0x8010829C: jal         0x80102FA0
    // 0x801082A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_80102FA0(rdram, ctx);
        goto after_48;
    // 0x801082A0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_48:
    // 0x801082A4: beq         $v0, $zero, L_801082BC
    if (ctx->r2 == 0) {
        // 0x801082A8: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_801082BC;
    }
    // 0x801082A8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801082AC: lbu         $t8, 0x7E($s0)
    ctx->r24 = MEM_BU(ctx->r16, 0X7E);
    // 0x801082B0: andi        $t9, $t8, 0xFFBF
    ctx->r25 = ctx->r24 & 0XFFBF;
    // 0x801082B4: b           L_801082C8
    // 0x801082B8: sb          $t9, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = ctx->r25;
        goto L_801082C8;
    // 0x801082B8: sb          $t9, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = ctx->r25;
L_801082BC:
    // 0x801082BC: lbu         $t0, 0x7E($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X7E);
    // 0x801082C0: ori         $t2, $t0, 0x40
    ctx->r10 = ctx->r8 | 0X40;
    // 0x801082C4: sb          $t2, 0x7E($s0)
    MEM_B(0X7E, ctx->r16) = ctx->r10;
L_801082C8:
    // 0x801082C8: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x801082CC: jal         0x80102FA0
    // 0x801082D0: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    func_80102FA0(rdram, ctx);
        goto after_49;
    // 0x801082D0: ori         $a1, $a1, 0x200
    ctx->r5 = ctx->r5 | 0X200;
    after_49:
    // 0x801082D4: beq         $v0, $zero, L_801082EC
    if (ctx->r2 == 0) {
        // 0x801082D8: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_801082EC;
    }
    // 0x801082D8: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801082DC: lbu         $t3, 0x65($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X65);
    // 0x801082E0: andi        $t4, $t3, 0xFFFE
    ctx->r12 = ctx->r11 & 0XFFFE;
    // 0x801082E4: b           L_801082F8
    // 0x801082E8: sb          $t4, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r12;
        goto L_801082F8;
    // 0x801082E8: sb          $t4, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r12;
L_801082EC:
    // 0x801082EC: lbu         $t6, 0x65($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X65);
    // 0x801082F0: ori         $t7, $t6, 0x1
    ctx->r15 = ctx->r14 | 0X1;
    // 0x801082F4: sb          $t7, 0x65($s0)
    MEM_B(0X65, ctx->r16) = ctx->r15;
L_801082F8:
    // 0x801082F8: lw          $a3, 0x50($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X50);
    // 0x801082FC: beql        $a3, $zero, L_80108344
    if (ctx->r7 == 0) {
        // 0x80108300: lw          $a1, 0x24($s1)
        ctx->r5 = MEM_W(ctx->r17, 0X24);
            goto L_80108344;
    }
    goto skip_3;
    // 0x80108300: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
    skip_3:
    // 0x80108304: lw          $t8, 0x10($a3)
    ctx->r24 = MEM_W(ctx->r7, 0X10);
    // 0x80108308: lhu         $t2, 0x6C($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X6C);
    // 0x8010830C: lbu         $t1, 0x73($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X73);
    // 0x80108310: srl         $t9, $t8, 21
    ctx->r25 = S32(U32(ctx->r24) >> 21);
    // 0x80108314: sll         $t0, $t9, 5
    ctx->r8 = S32(ctx->r25 << 5);
    // 0x80108318: andi        $t3, $t2, 0x1F
    ctx->r11 = ctx->r10 & 0X1F;
    // 0x8010831C: or          $t4, $t0, $t3
    ctx->r12 = ctx->r8 | ctx->r11;
    // 0x80108320: sh          $t4, 0x6C($s0)
    MEM_H(0X6C, ctx->r16) = ctx->r12;
    // 0x80108324: lw          $t5, 0x10($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X10);
    // 0x80108328: andi        $t2, $t1, 0xFFFE
    ctx->r10 = ctx->r9 & 0XFFFE;
    // 0x8010832C: sll         $t6, $t5, 30
    ctx->r14 = S32(ctx->r13 << 30);
    // 0x80108330: srl         $t8, $t6, 31
    ctx->r24 = S32(U32(ctx->r14) >> 31);
    // 0x80108334: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80108338: or          $t0, $t9, $t2
    ctx->r8 = ctx->r25 | ctx->r10;
    // 0x8010833C: sb          $t0, 0x73($s0)
    MEM_B(0X73, ctx->r16) = ctx->r8;
    // 0x80108340: lw          $a1, 0x24($s1)
    ctx->r5 = MEM_W(ctx->r17, 0X24);
L_80108344:
    // 0x80108344: jal         0x80108658
    // 0x80108348: lw          $a2, 0x3C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X3C);
    func_80108658(rdram, ctx);
        goto after_50;
    // 0x80108348: lw          $a2, 0x3C($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X3C);
    after_50:
    // 0x8010834C: lui         $t3, 0x4A
    ctx->r11 = S32(0X4A << 16);
    // 0x80108350: ori         $t3, $t3, 0x21
    ctx->r11 = ctx->r11 | 0X21;
    // 0x80108354: sw          $t3, 0x14($s0)
    MEM_W(0X14, ctx->r16) = ctx->r11;
    // 0x80108358: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010835C: or          $v1, $s0, $zero
    ctx->r3 = ctx->r16 | 0;
    // 0x80108360: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80108364: addiu       $a0, $zero, 0x63
    ctx->r4 = ADD32(0, 0X63);
L_80108368:
    // 0x80108368: addiu       $v0, $v0, 0x1
    ctx->r2 = ADD32(ctx->r2, 0X1);
    // 0x8010836C: addiu       $v1, $v1, 0x1
    ctx->r3 = ADD32(ctx->r3, 0X1);
    // 0x80108370: bne         $v0, $a1, L_80108368
    if (ctx->r2 != ctx->r5) {
        // 0x80108374: sb          $a0, 0x5B($v1)
        MEM_B(0X5B, ctx->r3) = ctx->r4;
            goto L_80108368;
    }
    // 0x80108374: sb          $a0, 0x5B($v1)
    MEM_B(0X5B, ctx->r3) = ctx->r4;
    // 0x80108378: addiu       $t4, $zero, 0xFF
    ctx->r12 = ADD32(0, 0XFF);
    // 0x8010837C: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80108380: addiu       $a0, $s0, 0x98
    ctx->r4 = ADD32(ctx->r16, 0X98);
    // 0x80108384: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80108388: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x8010838C: jal         0x800F31FC
    // 0x80108390: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    func_800F31FC(rdram, ctx);
        goto after_51;
    // 0x80108390: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_51:
    // 0x80108394: lw          $t5, 0x40($s1)
    ctx->r13 = MEM_W(ctx->r17, 0X40);
    // 0x80108398: beql        $t5, $zero, L_801083B4
    if (ctx->r13 == 0) {
        // 0x8010839C: lbu         $t1, 0x74($s0)
        ctx->r9 = MEM_BU(ctx->r16, 0X74);
            goto L_801083B4;
    }
    goto skip_4;
    // 0x8010839C: lbu         $t1, 0x74($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X74);
    skip_4:
    // 0x801083A0: lbu         $t7, 0x74($s0)
    ctx->r15 = MEM_BU(ctx->r16, 0X74);
    // 0x801083A4: ori         $t8, $t7, 0x10
    ctx->r24 = ctx->r15 | 0X10;
    // 0x801083A8: b           L_801083BC
    // 0x801083AC: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
        goto L_801083BC;
    // 0x801083AC: sb          $t8, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r24;
    // 0x801083B0: lbu         $t1, 0x74($s0)
    ctx->r9 = MEM_BU(ctx->r16, 0X74);
L_801083B4:
    // 0x801083B4: andi        $t9, $t1, 0xFFEF
    ctx->r25 = ctx->r9 & 0XFFEF;
    // 0x801083B8: sb          $t9, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r25;
L_801083BC:
    // 0x801083BC: lbu         $t0, 0x74($s0)
    ctx->r8 = MEM_BU(ctx->r16, 0X74);
    // 0x801083C0: lhu         $a1, 0x72($s0)
    ctx->r5 = MEM_HU(ctx->r16, 0X72);
    // 0x801083C4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801083C8: ori         $t3, $t0, 0x8
    ctx->r11 = ctx->r8 | 0X8;
    // 0x801083CC: srl         $t4, $a1, 10
    ctx->r12 = S32(U32(ctx->r5) >> 10);
    // 0x801083D0: sb          $t3, 0x74($s0)
    MEM_B(0X74, ctx->r16) = ctx->r11;
    // 0x801083D4: jal         0x80102424
    // 0x801083D8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    func_80102424(rdram, ctx);
        goto after_52;
    // 0x801083D8: or          $a1, $t4, $zero
    ctx->r5 = ctx->r12 | 0;
    after_52:
    // 0x801083DC: jal         0x80103930
    // 0x801083E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80103930(rdram, ctx);
        goto after_53;
    // 0x801083E0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_53:
    // 0x801083E4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x801083E8: jal         0x8010A3E8
    // 0x801083EC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8010A3E8(rdram, ctx);
        goto after_54;
    // 0x801083EC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_54:
    // 0x801083F0: jal         0x80106E88
    // 0x801083F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80106E88(rdram, ctx);
        goto after_55;
    // 0x801083F4: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_55:
    // 0x801083F8: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x801083FC: jal         0x80102FA0
    // 0x80108400: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_80102FA0(rdram, ctx);
        goto after_56;
    // 0x80108400: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_56:
    // 0x80108404: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80108408: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010840C: jal         0x80102FA0
    // 0x80108410: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    func_80102FA0(rdram, ctx);
        goto after_57;
    // 0x80108410: addiu       $a1, $zero, 0x10
    ctx->r5 = ADD32(0, 0X10);
    after_57:
    // 0x80108414: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80108418: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010841C: jal         0x80104F2C
    // 0x80108420: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    func_80104F2C(rdram, ctx);
        goto after_58;
    // 0x80108420: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    after_58:
    // 0x80108424: jal         0x800BEC1C
    // 0x80108428: nop

    func_800BEC1C(rdram, ctx);
        goto after_59;
    // 0x80108428: nop

    after_59:
    // 0x8010842C: beql        $v0, $zero, L_80108440
    if (ctx->r2 == 0) {
        // 0x80108430: lw          $ra, 0x24($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X24);
            goto L_80108440;
    }
    goto skip_5;
    // 0x80108430: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    skip_5:
    // 0x80108434: jal         0x8008A7A8
    // 0x80108438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _subaddiezone_entrypoint_0(rdram, ctx);
        goto after_60;
    // 0x80108438: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_60:
    // 0x8010843C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
L_80108440:
    // 0x80108440: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x80108444: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80108448: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x8010844C: jr          $ra
    // 0x80108450: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80108450: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80108454(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108454: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80108458: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010845C: jal         0x80108C90
    // 0x80108460: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80108C90(rdram, ctx);
        goto after_0;
    // 0x80108460: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80108464: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80108468: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010846C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80108474(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108474: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80108478: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010847C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80108480: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80108484: jal         0x800EE904
    // 0x80108488: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    func_800EE904(rdram, ctx);
        goto after_0;
    // 0x80108488: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x8010848C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80108490: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80108494: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x80108498: jal         0x80108C90
    // 0x8010849C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80108C90(rdram, ctx);
        goto after_1;
    // 0x8010849C: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x801084A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801084A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801084A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801084B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801084B0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801084B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801084B8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801084BC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x801084C0: lw          $v0, 0x0($a1)
    ctx->r2 = MEM_W(ctx->r5, 0X0);
    // 0x801084C4: addiu       $a0, $sp, 0x1C
    ctx->r4 = ADD32(ctx->r29, 0X1C);
    // 0x801084C8: lw          $t7, 0x0($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X0);
    // 0x801084CC: addiu       $a1, $v0, 0x4
    ctx->r5 = ADD32(ctx->r2, 0X4);
    // 0x801084D0: jal         0x800EE904
    // 0x801084D4: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    func_800EE904(rdram, ctx);
        goto after_0;
    // 0x801084D4: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    after_0:
    // 0x801084D8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x801084DC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801084E0: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x801084E4: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x801084E8: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801084EC: lwc1        $f4, 0x48($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X48);
    // 0x801084F0: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801084F4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x801084F8: jal         0x80108C90
    // 0x801084FC: nop

    func_80108C90(rdram, ctx);
        goto after_1;
    // 0x801084FC: nop

    after_1:
    // 0x80108500: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x80108504: jal         0x80106790
    // 0x80108508: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    func_80106790(rdram, ctx);
        goto after_2;
    // 0x80108508: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    after_2:
    // 0x8010850C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80108510: sw          $v0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r2;
    // 0x80108514: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80108518: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    // 0x8010851C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80108520: jr          $ra
    return;
;}
RECOMP_FUNC void func_80108528(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108528: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8010852C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80108530: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x80108534: lw          $t7, 0x0($a3)
    ctx->r15 = MEM_W(ctx->r7, 0X0);
    // 0x80108538: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x8010853C: jal         0x80108474
    // 0x80108540: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_80108474(rdram, ctx);
        goto after_0;
    // 0x80108540: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_0:
    // 0x80108544: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x80108548: jal         0x80106790
    // 0x8010854C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    func_80106790(rdram, ctx);
        goto after_1;
    // 0x8010854C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    after_1:
    // 0x80108550: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80108554: sw          $v0, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r2;
    // 0x80108558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010855C: lw          $v0, 0x18($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X18);
    // 0x80108560: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80108564: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010856C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010856C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80108570: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80108574: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80108578: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8010857C: jal         0x800EE904
    // 0x80108580: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    func_800EE904(rdram, ctx);
        goto after_0;
    // 0x80108580: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    after_0:
    // 0x80108584: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80108588: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8010858C: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x80108590: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80108594: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    // 0x80108598: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x8010859C: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x801085A0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x801085A4: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x801085A8: jal         0x80108DC0
    // 0x801085AC: nop

    func_80108DC0(rdram, ctx);
        goto after_1;
    // 0x801085AC: nop

    after_1:
    // 0x801085B0: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x801085B4: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x801085B8: swc1        $f8, 0x44($v0)
    MEM_W(0X44, ctx->r2) = ctx->f8.u32l;
    // 0x801085BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801085C0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x801085C4: jr          $ra
    return;
;}
RECOMP_FUNC void func_801085CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801085CC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x801085D0: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x801085D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801085D8: addiu       $a0, $sp, 0x30
    ctx->r4 = ADD32(ctx->r29, 0X30);
    // 0x801085DC: addiu       $v0, $sp, 0x24
    ctx->r2 = ADD32(ctx->r29, 0X24);
    // 0x801085E0: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
L_801085E4:
    // 0x801085E4: lh          $t6, 0x0($v1)
    ctx->r14 = MEM_H(ctx->r3, 0X0);
    // 0x801085E8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x801085EC: addiu       $v1, $v1, 0x2
    ctx->r3 = ADD32(ctx->r3, 0X2);
    // 0x801085F0: bne         $v0, $a0, L_801085E4
    if (ctx->r2 != ctx->r4) {
        // 0x801085F4: sw          $t6, -0x4($v0)
        MEM_W(-0X4, ctx->r2) = ctx->r14;
            goto L_801085E4;
    }
    // 0x801085F4: sw          $t6, -0x4($v0)
    MEM_W(-0X4, ctx->r2) = ctx->r14;
    // 0x801085F8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x801085FC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80108600: jal         0x80108C90
    // 0x80108604: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80108C90(rdram, ctx);
        goto after_0;
    // 0x80108604: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_0:
    // 0x80108608: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010860C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80108610: jr          $ra
    return;
;}
RECOMP_FUNC void func_80108618(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108618: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010861C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80108620: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80108624: jal         0x800DA298
    // 0x80108628: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800DA298(rdram, ctx);
        goto after_0;
    // 0x80108628: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8010862C: beql        $v0, $zero, L_80108648
    if (ctx->r2 == 0) {
        // 0x80108630: or          $v0, $zero, $zero
        ctx->r2 = 0 | 0;
            goto L_80108648;
    }
    goto skip_0;
    // 0x80108630: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    skip_0:
    // 0x80108634: jal         0x800FFAB0
    // 0x80108638: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    func_800FFAB0(rdram, ctx);
        goto after_1;
    // 0x80108638: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    after_1:
    // 0x8010863C: b           L_80108648
    // 0x80108640: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80108648;
    // 0x80108640: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80108644: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80108648:
    // 0x80108648: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010864C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80108650: jr          $ra
    // 0x80108654: nop

    return;
    // 0x80108654: nop

;}
RECOMP_FUNC void func_80108658(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108658: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010865C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80108660: lbu         $t6, 0x96($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X96);
    // 0x80108664: lbu         $t2, 0x74($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X74);
    // 0x80108668: andi        $t7, $t6, 0xFF7F
    ctx->r15 = ctx->r14 & 0XFF7F;
    // 0x8010866C: sb          $t7, 0x96($a0)
    MEM_B(0X96, ctx->r4) = ctx->r15;
    // 0x80108670: lhu         $v0, 0x96($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X96);
    // 0x80108674: lbu         $t6, 0x77($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X77);
    // 0x80108678: andi        $t3, $t2, 0xFFFD
    ctx->r11 = ctx->r10 & 0XFFFD;
    // 0x8010867C: srl         $t9, $v0, 15
    ctx->r25 = S32(U32(ctx->r2) >> 15);
    // 0x80108680: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x80108684: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x80108688: lbu         $t0, 0x7B($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X7B);
    // 0x8010868C: sll         $v1, $t9, 6
    ctx->r3 = S32(ctx->r25 << 6);
    // 0x80108690: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x80108694: andi        $t5, $v1, 0x40
    ctx->r13 = ctx->r3 & 0X40;
    // 0x80108698: andi        $t9, $v1, 0xC0
    ctx->r25 = ctx->r3 & 0XC0;
    // 0x8010869C: andi        $t7, $t6, 0xFFBF
    ctx->r15 = ctx->r14 & 0XFFBF;
    // 0x801086A0: andi        $t2, $t0, 0xFF3F
    ctx->r10 = ctx->r8 & 0XFF3F;
    // 0x801086A4: or          $t1, $t9, $t2
    ctx->r9 = ctx->r25 | ctx->r10;
    // 0x801086A8: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x801086AC: sll         $t3, $a1, 3
    ctx->r11 = S32(ctx->r5 << 3);
    // 0x801086B0: sb          $t8, 0x77($a0)
    MEM_B(0X77, ctx->r4) = ctx->r24;
    // 0x801086B4: sb          $t1, 0x7B($a0)
    MEM_B(0X7B, ctx->r4) = ctx->r9;
    // 0x801086B8: bgez        $t3, L_80108700
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801086BC: sb          $t4, 0x74($a0)
        MEM_B(0X74, ctx->r4) = ctx->r12;
            goto L_80108700;
    }
    // 0x801086BC: sb          $t4, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r12;
    // 0x801086C0: lw          $t2, 0x70($a0)
    ctx->r10 = MEM_W(ctx->r4, 0X70);
    // 0x801086C4: srl         $t4, $t1, 6
    ctx->r12 = S32(U32(ctx->r9) >> 6);
    // 0x801086C8: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x801086CC: sll         $t8, $t5, 6
    ctx->r24 = S32(ctx->r13 << 6);
    // 0x801086D0: andi        $t0, $t1, 0xFF3F
    ctx->r8 = ctx->r9 & 0XFF3F;
    // 0x801086D4: or          $t9, $t8, $t0
    ctx->r25 = ctx->r24 | ctx->r8;
    // 0x801086D8: sll         $t3, $t2, 10
    ctx->r11 = S32(ctx->r10 << 10);
    // 0x801086DC: bltz        $t3, L_80108700
    if (SIGNED(ctx->r11) < 0) {
        // 0x801086E0: sb          $t9, 0x7B($a0)
        MEM_B(0X7B, ctx->r4) = ctx->r25;
            goto L_80108700;
    }
    // 0x801086E0: sb          $t9, 0x7B($a0)
    MEM_B(0X7B, ctx->r4) = ctx->r25;
    // 0x801086E4: lbu         $t4, 0x70($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X70);
    // 0x801086E8: andi        $t6, $t4, 0x1
    ctx->r14 = ctx->r12 & 0X1;
    // 0x801086EC: bnel        $t6, $zero, L_80108704
    if (ctx->r14 != 0) {
        // 0x801086F0: sll         $t0, $a1, 2
        ctx->r8 = S32(ctx->r5 << 2);
            goto L_80108704;
    }
    goto skip_0;
    // 0x801086F0: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
    skip_0:
    // 0x801086F4: lbu         $t7, 0x71($a0)
    ctx->r15 = MEM_BU(ctx->r4, 0X71);
    // 0x801086F8: ori         $t8, $t7, 0x20
    ctx->r24 = ctx->r15 | 0X20;
    // 0x801086FC: sb          $t8, 0x71($a0)
    MEM_B(0X71, ctx->r4) = ctx->r24;
L_80108700:
    // 0x80108700: sll         $t0, $a1, 2
    ctx->r8 = S32(ctx->r5 << 2);
L_80108704:
    // 0x80108704: bgezl       $t0, L_80108754
    if (SIGNED(ctx->r8) >= 0) {
        // 0x80108708: andi        $t6, $a1, 0x2000
        ctx->r14 = ctx->r5 & 0X2000;
            goto L_80108754;
    }
    goto skip_1;
    // 0x80108708: andi        $t6, $a1, 0x2000
    ctx->r14 = ctx->r5 & 0X2000;
    skip_1:
    // 0x8010870C: lbu         $v0, 0x7B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7B);
    // 0x80108710: lw          $t7, 0x70($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X70);
    // 0x80108714: srl         $t9, $v0, 6
    ctx->r25 = S32(U32(ctx->r2) >> 6);
    // 0x80108718: addiu       $t1, $t9, 0x2
    ctx->r9 = ADD32(ctx->r25, 0X2);
    // 0x8010871C: sll         $t4, $t1, 6
    ctx->r12 = S32(ctx->r9 << 6);
    // 0x80108720: andi        $t6, $v0, 0xFF3F
    ctx->r14 = ctx->r2 & 0XFF3F;
    // 0x80108724: or          $t5, $t4, $t6
    ctx->r13 = ctx->r12 | ctx->r14;
    // 0x80108728: sll         $t0, $t7, 10
    ctx->r8 = S32(ctx->r15 << 10);
    // 0x8010872C: bltz        $t0, L_80108750
    if (SIGNED(ctx->r8) < 0) {
        // 0x80108730: sb          $t5, 0x7B($a0)
        MEM_B(0X7B, ctx->r4) = ctx->r13;
            goto L_80108750;
    }
    // 0x80108730: sb          $t5, 0x7B($a0)
    MEM_B(0X7B, ctx->r4) = ctx->r13;
    // 0x80108734: lbu         $t9, 0x70($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X70);
    // 0x80108738: andi        $t2, $t9, 0x1
    ctx->r10 = ctx->r25 & 0X1;
    // 0x8010873C: bnel        $t2, $zero, L_80108754
    if (ctx->r10 != 0) {
        // 0x80108740: andi        $t6, $a1, 0x2000
        ctx->r14 = ctx->r5 & 0X2000;
            goto L_80108754;
    }
    goto skip_2;
    // 0x80108740: andi        $t6, $a1, 0x2000
    ctx->r14 = ctx->r5 & 0X2000;
    skip_2:
    // 0x80108744: lbu         $t3, 0x71($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X71);
    // 0x80108748: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x8010874C: sb          $t4, 0x71($a0)
    MEM_B(0X71, ctx->r4) = ctx->r12;
L_80108750:
    // 0x80108750: andi        $t6, $a1, 0x2000
    ctx->r14 = ctx->r5 & 0X2000;
L_80108754:
    // 0x80108754: beq         $t6, $zero, L_80108780
    if (ctx->r14 == 0) {
        // 0x80108758: lui         $at, 0x3000
        ctx->r1 = S32(0X3000 << 16);
            goto L_80108780;
    }
    // 0x80108758: lui         $at, 0x3000
    ctx->r1 = S32(0X3000 << 16);
    // 0x8010875C: lbu         $v0, 0x7B($a0)
    ctx->r2 = MEM_BU(ctx->r4, 0X7B);
    // 0x80108760: srl         $t5, $v0, 6
    ctx->r13 = S32(U32(ctx->r2) >> 6);
    // 0x80108764: bne         $t5, $zero, L_80108774
    if (ctx->r13 != 0) {
        // 0x80108768: andi        $t7, $v0, 0xFF3F
        ctx->r15 = ctx->r2 & 0XFF3F;
            goto L_80108774;
    }
    // 0x80108768: andi        $t7, $v0, 0xFF3F
    ctx->r15 = ctx->r2 & 0XFF3F;
    // 0x8010876C: ori         $t8, $t7, 0x40
    ctx->r24 = ctx->r15 | 0X40;
    // 0x80108770: sb          $t8, 0x7B($a0)
    MEM_B(0X7B, ctx->r4) = ctx->r24;
L_80108774:
    // 0x80108774: lbu         $t9, 0x77($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X77);
    // 0x80108778: ori         $t2, $t9, 0x40
    ctx->r10 = ctx->r25 | 0X40;
    // 0x8010877C: sb          $t2, 0x77($a0)
    MEM_B(0X77, ctx->r4) = ctx->r10;
L_80108780:
    // 0x80108780: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x80108784: and         $t1, $a2, $v0
    ctx->r9 = ctx->r6 & ctx->r2;
    // 0x80108788: bne         $v0, $t1, L_8010879C
    if (ctx->r2 != ctx->r9) {
        // 0x8010878C: ori         $at, $at, 0x2000
        ctx->r1 = ctx->r1 | 0X2000;
            goto L_8010879C;
    }
    // 0x8010878C: ori         $at, $at, 0x2000
    ctx->r1 = ctx->r1 | 0X2000;
    // 0x80108790: lbu         $t4, 0x74($a0)
    ctx->r12 = MEM_BU(ctx->r4, 0X74);
    // 0x80108794: ori         $t6, $t4, 0x2
    ctx->r14 = ctx->r12 | 0X2;
    // 0x80108798: sb          $t6, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r14;
L_8010879C:
    // 0x8010879C: lui         $v0, 0x8008
    ctx->r2 = S32(0X8008 << 16);
    // 0x801087A0: and         $t5, $a2, $v0
    ctx->r13 = ctx->r6 & ctx->r2;
    // 0x801087A4: bne         $v0, $t5, L_801087B8
    if (ctx->r2 != ctx->r13) {
        // 0x801087A8: and         $t9, $a1, $at
        ctx->r25 = ctx->r5 & ctx->r1;
            goto L_801087B8;
    }
    // 0x801087A8: and         $t9, $a1, $at
    ctx->r25 = ctx->r5 & ctx->r1;
    // 0x801087AC: lbu         $t8, 0x96($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X96);
    // 0x801087B0: ori         $t0, $t8, 0x80
    ctx->r8 = ctx->r24 | 0X80;
    // 0x801087B4: sb          $t0, 0x96($a0)
    MEM_B(0X96, ctx->r4) = ctx->r8;
L_801087B8:
    // 0x801087B8: beql        $a3, $zero, L_80108874
    if (ctx->r7 == 0) {
        // 0x801087BC: lbu         $t6, 0x7B($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X7B);
            goto L_80108874;
    }
    goto skip_3;
    // 0x801087BC: lbu         $t6, 0x7B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X7B);
    skip_3:
    // 0x801087C0: beql        $t9, $zero, L_801087E8
    if (ctx->r25 == 0) {
        // 0x801087C4: lw          $t4, 0x10($a3)
        ctx->r12 = MEM_W(ctx->r7, 0X10);
            goto L_801087E8;
    }
    goto skip_4;
    // 0x801087C4: lw          $t4, 0x10($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X10);
    skip_4:
    // 0x801087C8: lw          $t2, 0x10($a3)
    ctx->r10 = MEM_W(ctx->r7, 0X10);
    // 0x801087CC: sll         $t1, $t2, 28
    ctx->r9 = S32(ctx->r10 << 28);
    // 0x801087D0: srl         $t3, $t1, 30
    ctx->r11 = S32(U32(ctx->r9) >> 30);
    // 0x801087D4: beql        $t3, $zero, L_80108874
    if (ctx->r11 == 0) {
        // 0x801087D8: lbu         $t6, 0x7B($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X7B);
            goto L_80108874;
    }
    goto skip_5;
    // 0x801087D8: lbu         $t6, 0x7B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X7B);
    skip_5:
    // 0x801087DC: b           L_80108874
    // 0x801087E0: lbu         $t6, 0x7B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X7B);
        goto L_80108874;
    // 0x801087E0: lbu         $t6, 0x7B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X7B);
    // 0x801087E4: lw          $t4, 0x10($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X10);
L_801087E8:
    // 0x801087E8: lbu         $t9, 0x7B($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X7B);
    // 0x801087EC: sll         $t6, $t4, 28
    ctx->r14 = S32(ctx->r12 << 28);
    // 0x801087F0: srl         $t7, $t6, 30
    ctx->r15 = S32(U32(ctx->r14) >> 30);
    // 0x801087F4: sll         $t0, $t7, 6
    ctx->r8 = S32(ctx->r15 << 6);
    // 0x801087F8: andi        $t2, $t9, 0xFF3F
    ctx->r10 = ctx->r25 & 0XFF3F;
    // 0x801087FC: or          $t1, $t0, $t2
    ctx->r9 = ctx->r8 | ctx->r10;
    // 0x80108800: sb          $t1, 0x7B($a0)
    MEM_B(0X7B, ctx->r4) = ctx->r9;
    // 0x80108804: lw          $t3, 0x10($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X10);
    // 0x80108808: lbu         $t9, 0x77($a0)
    ctx->r25 = MEM_BU(ctx->r4, 0X77);
    // 0x8010880C: andi        $t1, $t1, 0xFF
    ctx->r9 = ctx->r9 & 0XFF;
    // 0x80108810: sll         $t4, $t3, 27
    ctx->r12 = S32(ctx->r11 << 27);
    // 0x80108814: srl         $t5, $t4, 31
    ctx->r13 = S32(U32(ctx->r12) >> 31);
    // 0x80108818: sll         $t7, $t5, 6
    ctx->r15 = S32(ctx->r13 << 6);
    // 0x8010881C: andi        $t8, $t7, 0x40
    ctx->r24 = ctx->r15 & 0X40;
    // 0x80108820: andi        $t0, $t9, 0xFFBF
    ctx->r8 = ctx->r25 & 0XFFBF;
    // 0x80108824: or          $t2, $t8, $t0
    ctx->r10 = ctx->r24 | ctx->r8;
    // 0x80108828: srl         $t3, $t1, 6
    ctx->r11 = S32(U32(ctx->r9) >> 6);
    // 0x8010882C: bne         $t3, $zero, L_80108844
    if (ctx->r11 != 0) {
        // 0x80108830: sb          $t2, 0x77($a0)
        MEM_B(0X77, ctx->r4) = ctx->r10;
            goto L_80108844;
    }
    // 0x80108830: sb          $t2, 0x77($a0)
    MEM_B(0X77, ctx->r4) = ctx->r10;
    // 0x80108834: lw          $t4, 0x74($a0)
    ctx->r12 = MEM_W(ctx->r4, 0X74);
    // 0x80108838: sll         $t5, $t4, 25
    ctx->r13 = S32(ctx->r12 << 25);
    // 0x8010883C: bgezl       $t5, L_80108874
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80108840: lbu         $t6, 0x7B($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X7B);
            goto L_80108874;
    }
    goto skip_6;
    // 0x80108840: lbu         $t6, 0x7B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X7B);
    skip_6:
L_80108844:
    // 0x80108844: lw          $t7, 0x70($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X70);
    // 0x80108848: sll         $t8, $t7, 10
    ctx->r24 = S32(ctx->r15 << 10);
    // 0x8010884C: bltzl       $t8, L_80108874
    if (SIGNED(ctx->r24) < 0) {
        // 0x80108850: lbu         $t6, 0x7B($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X7B);
            goto L_80108874;
    }
    goto skip_7;
    // 0x80108850: lbu         $t6, 0x7B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X7B);
    skip_7:
    // 0x80108854: lbu         $t0, 0x70($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X70);
    // 0x80108858: andi        $t2, $t0, 0x1
    ctx->r10 = ctx->r8 & 0X1;
    // 0x8010885C: bnel        $t2, $zero, L_80108874
    if (ctx->r10 != 0) {
        // 0x80108860: lbu         $t6, 0x7B($a0)
        ctx->r14 = MEM_BU(ctx->r4, 0X7B);
            goto L_80108874;
    }
    goto skip_8;
    // 0x80108860: lbu         $t6, 0x7B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X7B);
    skip_8:
    // 0x80108864: lbu         $t3, 0x71($a0)
    ctx->r11 = MEM_BU(ctx->r4, 0X71);
    // 0x80108868: ori         $t4, $t3, 0x20
    ctx->r12 = ctx->r11 | 0X20;
    // 0x8010886C: sb          $t4, 0x71($a0)
    MEM_B(0X71, ctx->r4) = ctx->r12;
    // 0x80108870: lbu         $t6, 0x7B($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X7B);
L_80108874:
    // 0x80108874: srl         $t5, $t6, 6
    ctx->r13 = S32(U32(ctx->r14) >> 6);
    // 0x80108878: beql        $t5, $zero, L_8010889C
    if (ctx->r13 == 0) {
        // 0x8010887C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010889C;
    }
    goto skip_9;
    // 0x8010887C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_9:
    // 0x80108880: lw          $t7, 0x70($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X70);
    // 0x80108884: sll         $t8, $t7, 28
    ctx->r24 = S32(ctx->r15 << 28);
    // 0x80108888: bgezl       $t8, L_8010889C
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8010888C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010889C;
    }
    goto skip_10;
    // 0x8010888C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_10:
    // 0x80108890: jal         0x8010381C
    // 0x80108894: nop

    func_8010381C(rdram, ctx);
        goto after_0;
    // 0x80108894: nop

    after_0:
    // 0x80108898: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010889C:
    // 0x8010889C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x801088A0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801088A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801088A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x801088AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801088B0: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x801088B4: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x801088B8: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x801088BC: lbu         $t6, 0x96($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X96);
    // 0x801088C0: lbu         $t2, 0x74($a0)
    ctx->r10 = MEM_BU(ctx->r4, 0X74);
    // 0x801088C4: andi        $t7, $t6, 0xFF7F
    ctx->r15 = ctx->r14 & 0XFF7F;
    // 0x801088C8: sb          $t7, 0x96($a0)
    MEM_B(0X96, ctx->r4) = ctx->r15;
    // 0x801088CC: lhu         $v0, 0x96($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X96);
    // 0x801088D0: lbu         $t6, 0x77($a0)
    ctx->r14 = MEM_BU(ctx->r4, 0X77);
    // 0x801088D4: andi        $t3, $t2, 0xFFFD
    ctx->r11 = ctx->r10 & 0XFFFD;
    // 0x801088D8: srl         $t9, $v0, 15
    ctx->r25 = S32(U32(ctx->r2) >> 15);
    // 0x801088DC: sll         $t0, $t9, 1
    ctx->r8 = S32(ctx->r25 << 1);
    // 0x801088E0: andi        $t1, $t0, 0x2
    ctx->r9 = ctx->r8 & 0X2;
    // 0x801088E4: lbu         $t0, 0x7B($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X7B);
    // 0x801088E8: sll         $v1, $t9, 6
    ctx->r3 = S32(ctx->r25 << 6);
    // 0x801088EC: andi        $t5, $v1, 0x40
    ctx->r13 = ctx->r3 & 0X40;
    // 0x801088F0: andi        $t9, $v1, 0xC0
    ctx->r25 = ctx->r3 & 0XC0;
    // 0x801088F4: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x801088F8: andi        $t7, $t6, 0xFFBF
    ctx->r15 = ctx->r14 & 0XFFBF;
    // 0x801088FC: andi        $t2, $t0, 0xFF3F
    ctx->r10 = ctx->r8 & 0XFF3F;
    // 0x80108900: or          $t1, $t9, $t2
    ctx->r9 = ctx->r25 | ctx->r10;
    // 0x80108904: or          $t8, $t5, $t7
    ctx->r24 = ctx->r13 | ctx->r15;
    // 0x80108908: sb          $t8, 0x77($a0)
    MEM_B(0X77, ctx->r4) = ctx->r24;
    // 0x8010890C: sb          $t1, 0x7B($a0)
    MEM_B(0X7B, ctx->r4) = ctx->r9;
    // 0x80108910: sb          $t4, 0x74($a0)
    MEM_B(0X74, ctx->r4) = ctx->r12;
    // 0x80108914: jal         0x800BF8E4
    // 0x80108918: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_800BF8E4(rdram, ctx);
        goto after_0;
    // 0x80108918: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010891C: beq         $v0, $zero, L_80108934
    if (ctx->r2 == 0) {
        // 0x80108920: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80108934;
    }
    // 0x80108920: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80108924: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80108928: lw          $a2, 0x20($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X20);
    // 0x8010892C: jal         0x80108658
    // 0x80108930: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    func_80108658(rdram, ctx);
        goto after_1;
    // 0x80108930: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    after_1:
L_80108934:
    // 0x80108934: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80108938: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010893C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80108944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108944: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80108948: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8010894C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80108950: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80108954: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80108958: lbu         $v0, 0x7B($a1)
    ctx->r2 = MEM_BU(ctx->r5, 0X7B);
    // 0x8010895C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80108960: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80108964: srl         $t6, $v0, 6
    ctx->r14 = S32(U32(ctx->r2) >> 6);
    // 0x80108968: beq         $t6, $at, L_8010898C
    if (ctx->r14 == ctx->r1) {
        // 0x8010896C: or          $s0, $zero, $zero
        ctx->r16 = 0 | 0;
            goto L_8010898C;
    }
    // 0x8010896C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x80108970: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80108974: beq         $t6, $at, L_80108994
    if (ctx->r14 == ctx->r1) {
        // 0x80108978: addiu       $at, $zero, 0x3
        ctx->r1 = ADD32(0, 0X3);
            goto L_80108994;
    }
    // 0x80108978: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8010897C: beql        $t6, $at, L_801089A0
    if (ctx->r14 == ctx->r1) {
        // 0x80108980: lui         $s0, 0x3000
        ctx->r16 = S32(0X3000 << 16);
            goto L_801089A0;
    }
    goto skip_0;
    // 0x80108980: lui         $s0, 0x3000
    ctx->r16 = S32(0X3000 << 16);
    skip_0:
    // 0x80108984: b           L_801089A4
    // 0x80108988: lw          $t7, 0x74($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X74);
        goto L_801089A4;
    // 0x80108988: lw          $t7, 0x74($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X74);
L_8010898C:
    // 0x8010898C: b           L_801089A0
    // 0x80108990: lui         $s0, 0x1000
    ctx->r16 = S32(0X1000 << 16);
        goto L_801089A0;
    // 0x80108990: lui         $s0, 0x1000
    ctx->r16 = S32(0X1000 << 16);
L_80108994:
    // 0x80108994: b           L_801089A0
    // 0x80108998: lui         $s0, 0x2000
    ctx->r16 = S32(0X2000 << 16);
        goto L_801089A0;
    // 0x80108998: lui         $s0, 0x2000
    ctx->r16 = S32(0X2000 << 16);
    // 0x8010899C: lui         $s0, 0x3000
    ctx->r16 = S32(0X3000 << 16);
L_801089A0:
    // 0x801089A0: lw          $t7, 0x74($a2)
    ctx->r15 = MEM_W(ctx->r6, 0X74);
L_801089A4:
    // 0x801089A4: ori         $t0, $s0, 0x2000
    ctx->r8 = ctx->r16 | 0X2000;
    // 0x801089A8: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x801089AC: sll         $t9, $t7, 25
    ctx->r25 = S32(ctx->r15 << 25);
    // 0x801089B0: bgezl       $t9, L_801089C0
    if (SIGNED(ctx->r25) >= 0) {
        // 0x801089B4: lw          $t1, 0x78($a2)
        ctx->r9 = MEM_W(ctx->r6, 0X78);
            goto L_801089C0;
    }
    goto skip_1;
    // 0x801089B4: lw          $t1, 0x78($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X78);
    skip_1:
    // 0x801089B8: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x801089BC: lw          $t1, 0x78($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X78);
L_801089C0:
    // 0x801089C0: sll         $t3, $t1, 30
    ctx->r11 = S32(ctx->r9 << 30);
    // 0x801089C4: bgezl       $t3, L_801089FC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x801089C8: lh          $t9, 0x96($a2)
        ctx->r25 = MEM_H(ctx->r6, 0X96);
            goto L_801089FC;
    }
    goto skip_2;
    // 0x801089C8: lh          $t9, 0x96($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X96);
    skip_2:
    // 0x801089CC: lbu         $t6, 0x7B($t4)
    ctx->r14 = MEM_BU(ctx->r12, 0X7B);
    // 0x801089D0: or          $a0, $a2, $zero
    ctx->r4 = ctx->r6 | 0;
    // 0x801089D4: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x801089D8: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x801089DC: sb          $t7, 0x7B($t4)
    MEM_B(0X7B, ctx->r12) = ctx->r15;
    // 0x801089E0: jal         0x80089CD8
    // 0x801089E4: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    _subaddiefade_entrypoint_9(rdram, ctx);
        goto after_0;
    // 0x801089E4: sw          $a2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r6;
    after_0:
    // 0x801089E8: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x801089EC: jal         0x80089CE8
    // 0x801089F0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    _subaddiefade_entrypoint_11(rdram, ctx);
        goto after_1;
    // 0x801089F0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_1:
    // 0x801089F4: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x801089F8: lh          $t9, 0x96($a2)
    ctx->r25 = MEM_H(ctx->r6, 0X96);
L_801089FC:
    // 0x801089FC: lui         $t0, 0x8008
    ctx->r8 = S32(0X8008 << 16);
    // 0x80108A00: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80108A04: bgez        $t9, L_80108A10
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80108A08: or          $a3, $zero, $zero
        ctx->r7 = 0 | 0;
            goto L_80108A10;
    }
    // 0x80108A08: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    // 0x80108A0C: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_80108A10:
    // 0x80108A10: lw          $a0, 0x38($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X38);
    // 0x80108A14: jal         0x80108658
    // 0x80108A18: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    func_80108658(rdram, ctx);
        goto after_2;
    // 0x80108A18: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    after_2:
    // 0x80108A1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80108A20: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80108A24: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80108A28: jr          $ra
    return;
;}
RECOMP_FUNC void func_80108A30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108A30: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80108A34: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80108A38: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80108A3C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80108A40: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    // 0x80108A44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80108A48: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80108A4C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80108A50: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80108A54: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x80108A58: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80108A5C: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x80108A60: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80108A64: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80108A68: addiu       $a0, $a0, -0x7574
    ctx->r4 = ADD32(ctx->r4, -0X7574);
    // 0x80108A6C: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x80108A70: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x80108A74: jal         0x80086D58
    // 0x80108A78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    _chbaddiesetup_entrypoint_6(rdram, ctx);
        goto after_0;
    // 0x80108A78: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    after_0:
    // 0x80108A7C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80108A80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80108A84: jr          $ra
    return;
;}
RECOMP_FUNC void func_80108A8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108A8C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80108A90: lwc1        $f0, 0x40($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80108A94: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x80108A98: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80108A9C: trunc.w.s   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80108AA0: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x80108AA4: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80108AA8: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80108AAC: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80108AB0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80108AB4: mfc1        $a2, $f10
    ctx->r6 = (int32_t)ctx->f10.u32l;
    // 0x80108AB8: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80108ABC: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80108AC0: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x80108AC4: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
    // 0x80108AC8: jal         0x80108474
    // 0x80108ACC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    func_80108474(rdram, ctx);
        goto after_0;
    // 0x80108ACC: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    after_0:
    // 0x80108AD0: beq         $v0, $zero, L_80108AF4
    if (ctx->r2 == 0) {
        // 0x80108AD4: lwc1        $f0, 0x20($sp)
        ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
            goto L_80108AF4;
    }
    // 0x80108AD4: lwc1        $f0, 0x20($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80108AD8: swc1        $f0, 0x48($v0)
    MEM_W(0X48, ctx->r2) = ctx->f0.u32l;
    // 0x80108ADC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80108AE0: lhu         $t1, 0x76($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X76);
    // 0x80108AE4: sll         $t0, $t8, 7
    ctx->r8 = S32(ctx->r24 << 7);
    // 0x80108AE8: andi        $t2, $t1, 0x7F
    ctx->r10 = ctx->r9 & 0X7F;
    // 0x80108AEC: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x80108AF0: sh          $t3, 0x76($v0)
    MEM_H(0X76, ctx->r2) = ctx->r11;
L_80108AF4:
    // 0x80108AF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80108AF8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80108AFC: jr          $ra
    // 0x80108B00: nop

    return;
    // 0x80108B00: nop

;}
RECOMP_FUNC void func_80108B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108B04: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80108B08: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80108B0C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80108B10: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80108B14: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80108B18: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x80108B1C: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80108B20: addiu       $a0, $a0, -0x74BC
    ctx->r4 = ADD32(ctx->r4, -0X74BC);
    // 0x80108B24: lhu         $a3, 0x12($a1)
    ctx->r7 = MEM_HU(ctx->r5, 0X12);
    // 0x80108B28: srl         $t8, $a3, 1
    ctx->r24 = S32(U32(ctx->r7) >> 1);
    // 0x80108B2C: jal         0x80086D40
    // 0x80108B30: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    _chbaddiesetup_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80108B30: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    after_0:
    // 0x80108B34: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80108B38: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80108B3C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80108B44(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108B44: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80108B48: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80108B4C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80108B50: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x80108B54: srl         $t7, $t6, 1
    ctx->r15 = S32(U32(ctx->r14) >> 1);
    // 0x80108B58: bnel        $a2, $t7, L_80108B80
    if (ctx->r6 != ctx->r15) {
        // 0x80108B5C: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80108B80;
    }
    goto skip_0;
    // 0x80108B5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80108B60: jal         0x801069A4
    // 0x80108B64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801069A4(rdram, ctx);
        goto after_0;
    // 0x80108B64: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80108B68: beq         $v0, $zero, L_80108B7C
    if (ctx->r2 == 0) {
        // 0x80108B6C: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80108B7C;
    }
    // 0x80108B6C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80108B70: addiu       $a1, $zero, 0x3D
    ctx->r5 = ADD32(0, 0X3D);
    // 0x80108B74: jal         0x8010114C
    // 0x80108B78: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_8010114C(rdram, ctx);
        goto after_1;
    // 0x80108B78: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_80108B7C:
    // 0x80108B7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80108B80:
    // 0x80108B80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80108B84: jr          $ra
    // 0x80108B88: nop

    return;
    // 0x80108B88: nop

;}
RECOMP_FUNC void func_80108B8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108B8C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80108B90: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80108B94: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80108B98: lhu         $t6, 0x12($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X12);
    // 0x80108B9C: srl         $t7, $t6, 1
    ctx->r15 = S32(U32(ctx->r14) >> 1);
    // 0x80108BA0: bnel        $a2, $t7, L_80108BC8
    if (ctx->r6 != ctx->r15) {
        // 0x80108BA4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80108BC8;
    }
    goto skip_0;
    // 0x80108BA4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x80108BA8: jal         0x801069A4
    // 0x80108BAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_801069A4(rdram, ctx);
        goto after_0;
    // 0x80108BAC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x80108BB0: beq         $v0, $zero, L_80108BC4
    if (ctx->r2 == 0) {
        // 0x80108BB4: lw          $a0, 0x18($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X18);
            goto L_80108BC4;
    }
    // 0x80108BB4: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x80108BB8: addiu       $a1, $zero, 0x59
    ctx->r5 = ADD32(0, 0X59);
    // 0x80108BBC: jal         0x8010114C
    // 0x80108BC0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    func_8010114C(rdram, ctx);
        goto after_1;
    // 0x80108BC0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    after_1:
L_80108BC4:
    // 0x80108BC4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80108BC8:
    // 0x80108BC8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80108BCC: jr          $ra
    // 0x80108BD0: nop

    return;
    // 0x80108BD0: nop

;}
RECOMP_FUNC void func_80108BD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108BD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80108BD8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80108BDC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80108BE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80108BE4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x80108BE8: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x80108BEC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x80108BF0: addiu       $a0, $a0, -0x7474
    ctx->r4 = ADD32(ctx->r4, -0X7474);
    // 0x80108BF4: lhu         $a3, 0x12($a1)
    ctx->r7 = MEM_HU(ctx->r5, 0X12);
    // 0x80108BF8: srl         $t8, $a3, 1
    ctx->r24 = S32(U32(ctx->r7) >> 1);
    // 0x80108BFC: jal         0x80086D40
    // 0x80108C00: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    _chbaddiesetup_entrypoint_3(rdram, ctx);
        goto after_0;
    // 0x80108C00: or          $a3, $t8, $zero
    ctx->r7 = ctx->r24 | 0;
    after_0:
    // 0x80108C04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80108C08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80108C0C: jr          $ra
    return;
;}
RECOMP_FUNC void func_80108C14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108C14: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80108C18: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80108C1C: addiu       $s1, $sp, 0x2C
    ctx->r17 = ADD32(ctx->r29, 0X2C);
    // 0x80108C20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80108C24: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80108C28: jal         0x801067C4
    // 0x80108C2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_801067C4(rdram, ctx);
        goto after_0;
    // 0x80108C2C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_0:
    // 0x80108C30: beq         $v0, $zero, L_80108C7C
    if (ctx->r2 == 0) {
        // 0x80108C34: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80108C7C;
    }
    // 0x80108C34: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80108C38:
    // 0x80108C38: jal         0x80100368
    // 0x80108C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80100368(rdram, ctx);
        goto after_1;
    // 0x80108C3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x80108C40: lhu         $t6, 0x20($v0)
    ctx->r14 = MEM_HU(ctx->r2, 0X20);
    // 0x80108C44: beq         $t6, $zero, L_80108C6C
    if (ctx->r14 == 0) {
        // 0x80108C48: nop
    
            goto L_80108C6C;
    }
    // 0x80108C48: nop

    // 0x80108C4C: jal         0x800DA298
    // 0x80108C50: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    func_800DA298(rdram, ctx);
        goto after_2;
    // 0x80108C50: andi        $a0, $t6, 0xFFFF
    ctx->r4 = ctx->r14 & 0XFFFF;
    after_2:
    // 0x80108C54: beq         $v0, $zero, L_80108C6C
    if (ctx->r2 == 0) {
        // 0x80108C58: nop
    
            goto L_80108C6C;
    }
    // 0x80108C58: nop

    // 0x80108C5C: jal         0x800FFAB0
    // 0x80108C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800FFAB0(rdram, ctx);
        goto after_3;
    // 0x80108C60: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_3:
    // 0x80108C64: jal         0x800819B4
    // 0x80108C68: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    func_800819B4(rdram, ctx);
        goto after_4;
    // 0x80108C68: lw          $a0, 0x10($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X10);
    after_4:
L_80108C6C:
    // 0x80108C6C: jal         0x8010682C
    // 0x80108C70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    func_8010682C(rdram, ctx);
        goto after_5;
    // 0x80108C70: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    after_5:
    // 0x80108C74: bne         $v0, $zero, L_80108C38
    if (ctx->r2 != 0) {
        // 0x80108C78: or          $s0, $v0, $zero
        ctx->r16 = ctx->r2 | 0;
            goto L_80108C38;
    }
    // 0x80108C78: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_80108C7C:
    // 0x80108C7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80108C80: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80108C84: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80108C88: jr          $ra
    // 0x80108C8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80108C8C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80108C90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108C90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80108C94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80108C98: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x80108C9C: sw          $a2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r6;
    // 0x80108CA0: jal         0x80089750
    // 0x80108CA4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    _gemarkersDll_entrypoint_0(rdram, ctx);
        goto after_0;
    // 0x80108CA4: sw          $a3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r7;
    after_0:
    // 0x80108CA8: bne         $v0, $zero, L_80108CB8
    if (ctx->r2 != 0) {
        // 0x80108CAC: or          $a3, $v0, $zero
        ctx->r7 = ctx->r2 | 0;
            goto L_80108CB8;
    }
    // 0x80108CAC: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    // 0x80108CB0: b           L_80108CE4
    // 0x80108CB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80108CE4;
    // 0x80108CB4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80108CB8:
    // 0x80108CB8: jalr        $a3
    // 0x80108CBC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    LOOKUP_FUNC(ctx->r7)(rdram, ctx);
        goto after_1;
    // 0x80108CBC: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    after_1:
    // 0x80108CC0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80108CC4: lw          $a3, 0x24($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X24);
    // 0x80108CC8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80108CCC: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80108CD0: lw          $t9, 0x38($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X38);
    // 0x80108CD4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80108CD8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x80108CDC: jalr        $t9
    // 0x80108CE0: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80108CE0: nop

    after_2:
L_80108CE4:
    // 0x80108CE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80108CE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80108CEC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80108CF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108CF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80108CF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80108CFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80108D00: jal         0x80088300
    // 0x80108D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _gccubesearch_entrypoint_17(rdram, ctx);
        goto after_0;
    // 0x80108D04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80108D08: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80108D0C: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80108D10: beq         $v0, $zero, L_80108D78
    if (ctx->r2 == 0) {
        // 0x80108D14: sw          $t6, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r14;
            goto L_80108D78;
    }
    // 0x80108D14: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80108D18: lw          $t7, 0x10($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X10);
    // 0x80108D1C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80108D20: sll         $t8, $t7, 11
    ctx->r24 = S32(ctx->r15 << 11);
    // 0x80108D24: srl         $t9, $t8, 21
    ctx->r25 = S32(U32(ctx->r24) >> 21);
    // 0x80108D28: beql        $t9, $zero, L_80108D7C
    if (ctx->r25 == 0) {
        // 0x80108D2C: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_80108D7C;
    }
    goto skip_0;
    // 0x80108D2C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    skip_0:
    // 0x80108D30: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80108D34: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80108D38: sll         $t0, $v1, 11
    ctx->r8 = S32(ctx->r3 << 11);
    // 0x80108D3C: srl         $v1, $t0, 21
    ctx->r3 = S32(U32(ctx->r8) >> 21);
    // 0x80108D40: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
L_80108D44:
    // 0x80108D44: jal         0x80088300
    // 0x80108D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    _gccubesearch_entrypoint_17(rdram, ctx);
        goto after_1;
    // 0x80108D48: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80108D4C: beq         $v0, $zero, L_80108D78
    if (ctx->r2 == 0) {
        // 0x80108D50: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80108D78;
    }
    // 0x80108D50: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80108D54: lw          $t2, 0x4($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X4);
    // 0x80108D58: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80108D5C: bnel        $s0, $t3, L_80108D7C
    if (ctx->r16 != ctx->r11) {
        // 0x80108D60: lw          $t6, 0x20($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X20);
            goto L_80108D7C;
    }
    goto skip_1;
    // 0x80108D60: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    skip_1:
    // 0x80108D64: lw          $v1, 0x10($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X10);
    // 0x80108D68: sll         $t4, $v1, 11
    ctx->r12 = S32(ctx->r3 << 11);
    // 0x80108D6C: srl         $v1, $t4, 21
    ctx->r3 = S32(U32(ctx->r12) >> 21);
    // 0x80108D70: bnel        $v1, $zero, L_80108D44
    if (ctx->r3 != 0) {
        // 0x80108D74: or          $a0, $v1, $zero
        ctx->r4 = ctx->r3 | 0;
            goto L_80108D44;
    }
    goto skip_2;
    // 0x80108D74: or          $a0, $v1, $zero
    ctx->r4 = ctx->r3 | 0;
    skip_2:
L_80108D78:
    // 0x80108D78: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
L_80108D7C:
    // 0x80108D7C: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
    // 0x80108D80: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80108D84: beq         $t6, $s0, L_80108DA8
    if (ctx->r14 == ctx->r16) {
        // 0x80108D88: nop
    
            goto L_80108DA8;
    }
    // 0x80108D88: nop

    // 0x80108D8C: beq         $v0, $zero, L_80108DA8
    if (ctx->r2 == 0) {
        // 0x80108D90: nop
    
            goto L_80108DA8;
    }
    // 0x80108D90: nop

    // 0x80108D94: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x80108D98: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80108D9C: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80108DA0: bne         $s0, $t8, L_80108DB0
    if (ctx->r16 != ctx->r24) {
        // 0x80108DA4: nop
    
            goto L_80108DB0;
    }
    // 0x80108DA4: nop

L_80108DA8:
    // 0x80108DA8: b           L_80108DB0
    // 0x80108DAC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
        goto L_80108DB0;
    // 0x80108DAC: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_80108DB0:
    // 0x80108DB0: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80108DB4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80108DB8: jr          $ra
    // 0x80108DBC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x80108DBC: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_80108DC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108DC0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80108DC4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80108DC8: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80108DCC: sw          $a3, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r7;
    // 0x80108DD0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x80108DD4: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x80108DD8: jal         0x80108C90
    // 0x80108DDC: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    func_80108C90(rdram, ctx);
        goto after_0;
    // 0x80108DDC: lw          $a3, 0x64($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X64);
    after_0:
    // 0x80108DE0: beq         $v0, $zero, L_80108EB0
    if (ctx->r2 == 0) {
        // 0x80108DE4: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_80108EB0;
    }
    // 0x80108DE4: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80108DE8: jal         0x80108CF4
    // 0x80108DEC: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    func_80108CF4(rdram, ctx);
        goto after_1;
    // 0x80108DEC: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    after_1:
    // 0x80108DF0: beq         $v0, $zero, L_80108E14
    if (ctx->r2 == 0) {
        // 0x80108DF4: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_80108E14;
    }
    // 0x80108DF4: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80108DF8: jal         0x80088BF0
    // 0x80108DFC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    _gspropctrl_entrypoint_9(rdram, ctx);
        goto after_2;
    // 0x80108DFC: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_2:
    // 0x80108E00: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80108E04: jal         0x800884A0
    // 0x80108E08: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    _glsplinefind_entrypoint_4(rdram, ctx);
        goto after_3;
    // 0x80108E08: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_3:
    // 0x80108E0C: b           L_80108E20
    // 0x80108E10: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
        goto L_80108E20;
    // 0x80108E10: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80108E14:
    // 0x80108E14: jal         0x80088490
    // 0x80108E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    _glsplinefind_entrypoint_2(rdram, ctx);
        goto after_4;
    // 0x80108E18: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80108E1C: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_80108E20:
    // 0x80108E20: bltz        $v0, L_80108EB0
    if (SIGNED(ctx->r2) < 0) {
        // 0x80108E24: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80108EB0;
    }
    // 0x80108E24: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80108E28: jal         0x8010556C
    // 0x80108E2C: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    func_8010556C(rdram, ctx);
        goto after_5;
    // 0x80108E2C: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
    after_5:
    // 0x80108E30: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x80108E34: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80108E38: lh          $t0, 0x2($v0)
    ctx->r8 = MEM_H(ctx->r2, 0X2);
    // 0x80108E3C: sll         $t8, $a0, 1
    ctx->r24 = S32(ctx->r4 << 1);
    // 0x80108E40: andi        $t9, $t8, 0x7FE
    ctx->r25 = ctx->r24 & 0X7FE;
    // 0x80108E44: andi        $t1, $t0, 0xF801
    ctx->r9 = ctx->r8 & 0XF801;
    // 0x80108E48: or          $t2, $t9, $t1
    ctx->r10 = ctx->r25 | ctx->r9;
    // 0x80108E4C: sh          $t2, 0x2($v0)
    MEM_H(0X2, ctx->r2) = ctx->r10;
    // 0x80108E50: lw          $t3, 0x0($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X0);
    // 0x80108E54: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80108E58: nop

    // 0x80108E5C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80108E60: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
    // 0x80108E64: lw          $t4, 0x4($s0)
    ctx->r12 = MEM_W(ctx->r16, 0X4);
    // 0x80108E68: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80108E6C: nop

    // 0x80108E70: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80108E74: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80108E78: lw          $t5, 0x8($s0)
    ctx->r13 = MEM_W(ctx->r16, 0X8);
    // 0x80108E7C: mtc1        $t5, $f16
    ctx->f16.u32l = ctx->r13;
    // 0x80108E80: nop

    // 0x80108E84: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80108E88: jal         0x800D7520
    // 0x80108E8C: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    func_800D7520(rdram, ctx);
        goto after_6;
    // 0x80108E8C: swc1        $f18, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x80108E90: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80108E94: jal         0x800C82CC
    // 0x80108E98: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    func_800C82CC(rdram, ctx);
        goto after_7;
    // 0x80108E98: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_7:
    // 0x80108E9C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80108EA0: swc1        $f0, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f0.u32l;
    // 0x80108EA4: lbu         $t8, 0x77($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X77);
    // 0x80108EA8: ori         $t0, $t8, 0x10
    ctx->r8 = ctx->r24 | 0X10;
    // 0x80108EAC: sb          $t0, 0x77($s1)
    MEM_B(0X77, ctx->r17) = ctx->r8;
L_80108EB0:
    // 0x80108EB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80108EB4: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x80108EB8: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x80108EBC: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x80108EC0: jr          $ra
    // 0x80108EC4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80108EC4: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80108ED0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108ED0: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80108ED4: jr          $ra
    // 0x80108ED8: addiu       $v0, $v0, 0x45D0
    ctx->r2 = ADD32(ctx->r2, 0X45D0);
    return;
    // 0x80108ED8: addiu       $v0, $v0, 0x45D0
    ctx->r2 = ADD32(ctx->r2, 0X45D0);
;}
RECOMP_FUNC void func_80108EDC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108EDC: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80108EE0: jr          $ra
    // 0x80108EE4: addiu       $v0, $v0, 0x45E4
    ctx->r2 = ADD32(ctx->r2, 0X45E4);
    return;
    // 0x80108EE4: addiu       $v0, $v0, 0x45E4
    ctx->r2 = ADD32(ctx->r2, 0X45E4);
;}
RECOMP_FUNC void func_80108EE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108EE8: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x80108EEC: jr          $ra
    // 0x80108EF0: addiu       $v0, $v0, 0x45F8
    ctx->r2 = ADD32(ctx->r2, 0X45F8);
    return;
    // 0x80108EF0: addiu       $v0, $v0, 0x45F8
    ctx->r2 = ADD32(ctx->r2, 0X45F8);
;}
RECOMP_FUNC void func_80108EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108EF4: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80108EF8: lhu         $v0, 0x8($a0)
    ctx->r2 = MEM_HU(ctx->r4, 0X8);
    // 0x80108EFC: xori        $t6, $v0, 0x23A
    ctx->r14 = ctx->r2 ^ 0X23A;
    // 0x80108F00: jr          $ra
    // 0x80108F04: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
    return;
    // 0x80108F04: sltiu       $v0, $t6, 0x1
    ctx->r2 = ctx->r14 < 0X1 ? 1 : 0;
;}
RECOMP_FUNC void func_80108F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80108F08: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80108F0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80108F10: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x80108F14: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x80108F18: jal         0x80106790
    // 0x80108F1C: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x80108F1C: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    after_0:
    // 0x80108F20: sw          $v0, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r2;
    // 0x80108F24: jal         0x80088658
    // 0x80108F28: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    _glhittableDll_entrypoint_10(rdram, ctx);
        goto after_1;
    // 0x80108F28: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_1:
    // 0x80108F2C: sw          $v0, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r2;
    // 0x80108F30: jal         0x80088640
    // 0x80108F34: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    _glhittableDll_entrypoint_7(rdram, ctx);
        goto after_2;
    // 0x80108F34: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_2:
    // 0x80108F38: sw          $v0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r2;
    // 0x80108F3C: jal         0x80088650
    // 0x80108F40: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    _glhittableDll_entrypoint_9(rdram, ctx);
        goto after_3;
    // 0x80108F40: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_3:
    // 0x80108F44: sw          $v0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r2;
    // 0x80108F48: jal         0x80088638
    // 0x80108F4C: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    _glhittableDll_entrypoint_6(rdram, ctx);
        goto after_4;
    // 0x80108F4C: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_4:
    // 0x80108F50: sw          $v0, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r2;
    // 0x80108F54: jal         0x80100368
    // 0x80108F58: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    func_80100368(rdram, ctx);
        goto after_5;
    // 0x80108F58: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    after_5:
    // 0x80108F5C: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x80108F60: sw          $v0, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r2;
    // 0x80108F64: lw          $v1, 0x24($t6)
    ctx->r3 = MEM_W(ctx->r14, 0X24);
    // 0x80108F68: srl         $t7, $v1, 22
    ctx->r15 = S32(U32(ctx->r3) >> 22);
    // 0x80108F6C: sltiu       $t8, $t7, 0x1
    ctx->r24 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x80108F70: beql        $t8, $zero, L_80108FB8
    if (ctx->r24 == 0) {
        // 0x80108F74: lw          $t0, 0x8C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X8C);
            goto L_80108FB8;
    }
    goto skip_0;
    // 0x80108F74: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    skip_0:
    // 0x80108F78: lhu         $a0, 0x1A($t6)
    ctx->r4 = MEM_HU(ctx->r14, 0X1A);
    // 0x80108F7C: srl         $t9, $a0, 5
    ctx->r25 = S32(U32(ctx->r4) >> 5);
    // 0x80108F80: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x80108F84: jal         0x800F70EC
    // 0x80108F88: sw          $t9, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r25;
    func_800F70EC(rdram, ctx);
        goto after_6;
    // 0x80108F88: sw          $t9, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r25;
    after_6:
    // 0x80108F8C: beq         $v0, $zero, L_80108FA4
    if (ctx->r2 == 0) {
        // 0x80108F90: lw          $a0, 0x80($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X80);
            goto L_80108FA4;
    }
    // 0x80108F90: lw          $a0, 0x80($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X80);
    // 0x80108F94: jal         0x800F6C1C
    // 0x80108F98: nop

    func_800F6C1C(rdram, ctx);
        goto after_7;
    // 0x80108F98: nop

    after_7:
    // 0x80108F9C: bnel        $v0, $zero, L_80108FB8
    if (ctx->r2 != 0) {
        // 0x80108FA0: lw          $t0, 0x8C($sp)
        ctx->r8 = MEM_W(ctx->r29, 0X8C);
            goto L_80108FB8;
    }
    goto skip_1;
    // 0x80108FA0: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    skip_1:
L_80108FA4:
    // 0x80108FA4: jal         0x80088648
    // 0x80108FA8: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    _glhittableDll_entrypoint_8(rdram, ctx);
        goto after_8;
    // 0x80108FA8: lw          $a0, 0xA8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA8);
    after_8:
    // 0x80108FAC: bnel        $v0, $zero, L_801094D4
    if (ctx->r2 != 0) {
        // 0x80108FB0: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801094D4;
    }
    goto skip_2;
    // 0x80108FB0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_2:
    // 0x80108FB4: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
L_80108FB8:
    // 0x80108FB8: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
    // 0x80108FBC: bnel        $t0, $zero, L_80108FEC
    if (ctx->r8 != 0) {
        // 0x80108FC0: lw          $t5, 0x90($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X90);
            goto L_80108FEC;
    }
    goto skip_3;
    // 0x80108FC0: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
    skip_3:
    // 0x80108FC4: bne         $v0, $zero, L_80108FDC
    if (ctx->r2 != 0) {
        // 0x80108FC8: lw          $t1, 0xA4($sp)
        ctx->r9 = MEM_W(ctx->r29, 0XA4);
            goto L_80108FDC;
    }
    // 0x80108FC8: lw          $t1, 0xA4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA4);
    // 0x80108FCC: lw          $t2, 0x24($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X24);
    // 0x80108FD0: srl         $t3, $t2, 22
    ctx->r11 = S32(U32(ctx->r10) >> 22);
    // 0x80108FD4: bnel        $t3, $zero, L_801094D4
    if (ctx->r11 != 0) {
        // 0x80108FD8: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801094D4;
    }
    goto skip_4;
    // 0x80108FD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_4:
L_80108FDC:
    // 0x80108FDC: bgtz        $v0, L_80108FE8
    if (SIGNED(ctx->r2) > 0) {
        // 0x80108FE0: addiu       $t4, $zero, 0x1
        ctx->r12 = ADD32(0, 0X1);
            goto L_80108FE8;
    }
    // 0x80108FE0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80108FE4: sw          $t4, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r12;
L_80108FE8:
    // 0x80108FE8: lw          $t5, 0x90($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X90);
L_80108FEC:
    // 0x80108FEC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80108FF0: lui         $a1, 0x8000
    ctx->r5 = S32(0X8000 << 16);
    // 0x80108FF4: beql        $t5, $zero, L_801090A0
    if (ctx->r13 == 0) {
        // 0x80108FF8: lw          $t5, 0x94($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X94);
            goto L_801090A0;
    }
    goto skip_5;
    // 0x80108FF8: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    skip_5:
    // 0x80108FFC: jal         0x80102FA0
    // 0x80109000: ori         $a1, $a1, 0x20
    ctx->r5 = ctx->r5 | 0X20;
    func_80102FA0(rdram, ctx);
        goto after_9;
    // 0x80109000: ori         $a1, $a1, 0x20
    ctx->r5 = ctx->r5 | 0X20;
    after_9:
    // 0x80109004: beq         $v0, $zero, L_80109014
    if (ctx->r2 == 0) {
        // 0x80109008: lw          $t6, 0x9C($sp)
        ctx->r14 = MEM_W(ctx->r29, 0X9C);
            goto L_80109014;
    }
    // 0x80109008: lw          $t6, 0x9C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X9C);
    // 0x8010900C: b           L_80109048
    // 0x80109010: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
        goto L_80109048;
    // 0x80109010: lw          $v0, 0x90($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X90);
L_80109014:
    // 0x80109014: lw          $t7, 0x90($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X90);
    // 0x80109018: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x8010901C: div         $zero, $t8, $t7
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r15))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r15)));
    // 0x80109020: mflo        $v0
    ctx->r2 = lo;
    // 0x80109024: bne         $t7, $zero, L_80109030
    if (ctx->r15 != 0) {
        // 0x80109028: nop
    
            goto L_80109030;
    }
    // 0x80109028: nop

    // 0x8010902C: break       7
    do_break(2148569132);
L_80109030:
    // 0x80109030: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80109034: bne         $t7, $at, L_80109048
    if (ctx->r15 != ctx->r1) {
        // 0x80109038: lui         $at, 0x8000
        ctx->r1 = S32(0X8000 << 16);
            goto L_80109048;
    }
    // 0x80109038: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8010903C: bne         $t8, $at, L_80109048
    if (ctx->r24 != ctx->r1) {
        // 0x80109040: nop
    
            goto L_80109048;
    }
    // 0x80109040: nop

    // 0x80109044: break       6
    do_break(2148569156);
L_80109048:
    // 0x80109048: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x8010904C: addu        $a0, $t6, $t9
    ctx->r4 = ADD32(ctx->r14, ctx->r25);
    // 0x80109050: lbu         $t0, 0x5C($a0)
    ctx->r8 = MEM_BU(ctx->r4, 0X5C);
    // 0x80109054: subu        $v1, $t0, $v0
    ctx->r3 = SUB32(ctx->r8, ctx->r2);
    // 0x80109058: bgez        $v1, L_80109068
    if (SIGNED(ctx->r3) >= 0) {
        // 0x8010905C: or          $v0, $v1, $zero
        ctx->r2 = ctx->r3 | 0;
            goto L_80109068;
    }
    // 0x8010905C: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x80109060: b           L_80109068
    // 0x80109064: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80109068;
    // 0x80109064: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80109068:
    // 0x80109068: andi        $t1, $v0, 0xFF
    ctx->r9 = ctx->r2 & 0XFF;
    // 0x8010906C: beq         $t1, $zero, L_8010909C
    if (ctx->r9 == 0) {
        // 0x80109070: sb          $v0, 0x5C($a0)
        MEM_B(0X5C, ctx->r4) = ctx->r2;
            goto L_8010909C;
    }
    // 0x80109070: sb          $v0, 0x5C($a0)
    MEM_B(0X5C, ctx->r4) = ctx->r2;
    // 0x80109074: lw          $t2, 0x90($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X90);
    // 0x80109078: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x8010907C: slti        $at, $t2, 0x2
    ctx->r1 = SIGNED(ctx->r10) < 0X2 ? 1 : 0;
    // 0x80109080: bnel        $at, $zero, L_801090A0
    if (ctx->r1 != 0) {
        // 0x80109084: lw          $t5, 0x94($sp)
        ctx->r13 = MEM_W(ctx->r29, 0X94);
            goto L_801090A0;
    }
    goto skip_6;
    // 0x80109084: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    skip_6:
    // 0x80109088: bgez        $t3, L_80109098
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8010908C: sra         $t4, $t3, 1
        ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
            goto L_80109098;
    }
    // 0x8010908C: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x80109090: addiu       $at, $t3, 0x1
    ctx->r1 = ADD32(ctx->r11, 0X1);
    // 0x80109094: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_80109098:
    // 0x80109098: sw          $t4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r12;
L_8010909C:
    // 0x8010909C: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
L_801090A0:
    // 0x801090A0: lw          $a0, 0xA4($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA4);
    // 0x801090A4: beql        $t5, $zero, L_80109110
    if (ctx->r13 == 0) {
        // 0x801090A8: lw          $t9, 0x90($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X90);
            goto L_80109110;
    }
    goto skip_7;
    // 0x801090A8: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    skip_7:
    // 0x801090AC: jal         0x800EC398
    // 0x801090B0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    func_800EC398(rdram, ctx);
        goto after_10;
    // 0x801090B0: addiu       $a1, $sp, 0x6C
    ctx->r5 = ADD32(ctx->r29, 0X6C);
    after_10:
    // 0x801090B4: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    // 0x801090B8: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x801090BC: jal         0x800F1DF4
    // 0x801090C0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    func_800F1DF4(rdram, ctx);
        goto after_11;
    // 0x801090C0: addiu       $a1, $a1, 0x4
    ctx->r5 = ADD32(ctx->r5, 0X4);
    after_11:
    // 0x801090C4: swc1        $f0, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->f0.u32l;
    // 0x801090C8: jal         0x800858E0
    // 0x801090CC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    _chbounce_entrypoint_3(rdram, ctx);
        goto after_12;
    // 0x801090CC: mov.s       $f12, $f0
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 0);
    ctx->f12.fl = ctx->f0.fl;
    after_12:
    // 0x801090D0: jal         0x800858D8
    // 0x801090D4: lwc1        $f12, 0x78($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X78);
    _chbounce_entrypoint_2(rdram, ctx);
        goto after_13;
    // 0x801090D4: lwc1        $f12, 0x78($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X78);
    after_13:
    // 0x801090D8: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    // 0x801090DC: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x801090E0: lw          $t8, 0x64($a1)
    ctx->r24 = MEM_W(ctx->r5, 0X64);
    // 0x801090E4: sll         $t6, $t8, 6
    ctx->r14 = S32(ctx->r24 << 6);
    // 0x801090E8: bgez        $t6, L_80109104
    if (SIGNED(ctx->r14) >= 0) {
        // 0x801090EC: nop
    
            goto L_80109104;
    }
    // 0x801090EC: nop

    // 0x801090F0: lw          $a0, 0x94($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X94);
    // 0x801090F4: jal         0x800858F0
    // 0x801090F8: addiu       $a0, $a0, 0xA
    ctx->r4 = ADD32(ctx->r4, 0XA);
    _chbounce_entrypoint_5(rdram, ctx);
        goto after_14;
    // 0x801090F8: addiu       $a0, $a0, 0xA
    ctx->r4 = ADD32(ctx->r4, 0XA);
    after_14:
    // 0x801090FC: b           L_80109110
    // 0x80109100: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
        goto L_80109110;
    // 0x80109100: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
L_80109104:
    // 0x80109104: jal         0x800858F0
    // 0x80109108: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    _chbounce_entrypoint_5(rdram, ctx);
        goto after_15;
    // 0x80109108: addiu       $a0, $a0, 0x5
    ctx->r4 = ADD32(ctx->r4, 0X5);
    after_15:
    // 0x8010910C: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
L_80109110:
    // 0x80109110: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x80109114: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x80109118: beq         $t9, $zero, L_801094D0
    if (ctx->r25 == 0) {
        // 0x8010911C: addiu       $at, $zero, 0x1
        ctx->r1 = ADD32(0, 0X1);
            goto L_801094D0;
    }
    // 0x8010911C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80109120: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80109124: beq         $t1, $at, L_80109158
    if (ctx->r9 == ctx->r1) {
        // 0x80109128: sw          $t2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r10;
            goto L_80109158;
    }
    // 0x80109128: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
    // 0x8010912C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80109130: bne         $t1, $at, L_80109174
    if (ctx->r9 != ctx->r1) {
        // 0x80109134: lw          $a0, 0x88($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X88);
            goto L_80109174;
    }
    // 0x80109134: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80109138: jal         0x80102FA0
    // 0x8010913C: lui         $a1, 0x200
    ctx->r5 = S32(0X200 << 16);
    func_80102FA0(rdram, ctx);
        goto after_16;
    // 0x8010913C: lui         $a1, 0x200
    ctx->r5 = S32(0X200 << 16);
    after_16:
    // 0x80109140: beq         $v0, $zero, L_80109174
    if (ctx->r2 == 0) {
        // 0x80109144: lw          $a0, 0x9C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X9C);
            goto L_80109174;
    }
    // 0x80109144: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x80109148: jal         0x80109600
    // 0x8010914C: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    func_80109600(rdram, ctx);
        goto after_17;
    // 0x8010914C: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    after_17:
    // 0x80109150: b           L_80109178
    // 0x80109154: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
        goto L_80109178;
    // 0x80109154: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
L_80109158:
    // 0x80109158: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x8010915C: jal         0x80102FA0
    // 0x80109160: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
    func_80102FA0(rdram, ctx);
        goto after_18;
    // 0x80109160: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
    after_18:
    // 0x80109164: beq         $v0, $zero, L_80109174
    if (ctx->r2 == 0) {
        // 0x80109168: lw          $a0, 0x9C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X9C);
            goto L_80109174;
    }
    // 0x80109168: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x8010916C: jal         0x80109600
    // 0x80109170: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    func_80109600(rdram, ctx);
        goto after_19;
    // 0x80109170: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    after_19:
L_80109174:
    // 0x80109174: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
L_80109178:
    // 0x80109178: jal         0x80102FA0
    // 0x8010917C: lui         $a1, 0x8002
    ctx->r5 = S32(0X8002 << 16);
    func_80102FA0(rdram, ctx);
        goto after_20;
    // 0x8010917C: lui         $a1, 0x8002
    ctx->r5 = S32(0X8002 << 16);
    after_20:
    // 0x80109180: beq         $v0, $zero, L_801091A8
    if (ctx->r2 == 0) {
        // 0x80109184: lw          $t3, 0xA4($sp)
        ctx->r11 = MEM_W(ctx->r29, 0XA4);
            goto L_801091A8;
    }
    // 0x80109184: lw          $t3, 0xA4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XA4);
    // 0x80109188: lw          $t4, 0x24($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X24);
    // 0x8010918C: addiu       $at, $zero, 0x26D
    ctx->r1 = ADD32(0, 0X26D);
    // 0x80109190: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x80109194: srl         $t5, $t4, 22
    ctx->r13 = S32(U32(ctx->r12) >> 22);
    // 0x80109198: bnel        $t5, $at, L_801091AC
    if (ctx->r13 != ctx->r1) {
        // 0x8010919C: lw          $a0, 0x88($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X88);
            goto L_801091AC;
    }
    goto skip_8;
    // 0x8010919C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    skip_8:
    // 0x801091A0: jal         0x800860D0
    // 0x801091A4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    _chflamer_entrypoint_1(rdram, ctx);
        goto after_21;
    // 0x801091A4: or          $a1, $t3, $zero
    ctx->r5 = ctx->r11 | 0;
    after_21:
L_801091A8:
    // 0x801091A8: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
L_801091AC:
    // 0x801091AC: jal         0x80102FA0
    // 0x801091B0: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    func_80102FA0(rdram, ctx);
        goto after_22;
    // 0x801091B0: addiu       $a1, $zero, 0x200
    ctx->r5 = ADD32(0, 0X200);
    after_22:
    // 0x801091B4: beq         $v0, $zero, L_801091E8
    if (ctx->r2 == 0) {
        // 0x801091B8: lw          $t8, 0xA4($sp)
        ctx->r24 = MEM_W(ctx->r29, 0XA4);
            goto L_801091E8;
    }
    // 0x801091B8: lw          $t8, 0xA4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA4);
    // 0x801091BC: lw          $t7, 0x24($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X24);
    // 0x801091C0: addiu       $at, $zero, 0x26E
    ctx->r1 = ADD32(0, 0X26E);
    // 0x801091C4: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x801091C8: srl         $t6, $t7, 22
    ctx->r14 = S32(U32(ctx->r15) >> 22);
    // 0x801091CC: bnel        $t6, $at, L_801091EC
    if (ctx->r14 != ctx->r1) {
        // 0x801091D0: lw          $t9, 0x28($sp)
        ctx->r25 = MEM_W(ctx->r29, 0X28);
            goto L_801091EC;
    }
    goto skip_9;
    // 0x801091D0: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    skip_9:
    // 0x801091D4: jal         0x800EC370
    // 0x801091D8: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    func_800EC370(rdram, ctx);
        goto after_23;
    // 0x801091D8: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_23:
    // 0x801091DC: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x801091E0: jal         0x80085F80
    // 0x801091E4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    _chfreezy_entrypoint_1(rdram, ctx);
        goto after_24;
    // 0x801091E4: addiu       $a1, $sp, 0x64
    ctx->r5 = ADD32(ctx->r29, 0X64);
    after_24:
L_801091E8:
    // 0x801091E8: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
L_801091EC:
    // 0x801091EC: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x801091F0: lbu         $v0, 0x5C($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0X5C);
    // 0x801091F4: beq         $v0, $zero, L_80109218
    if (ctx->r2 == 0) {
        // 0x801091F8: nop
    
            goto L_80109218;
    }
    // 0x801091F8: nop

    // 0x801091FC: beq         $t0, $zero, L_80109434
    if (ctx->r8 == 0) {
        // 0x80109200: lw          $a0, 0x88($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X88);
            goto L_80109434;
    }
    // 0x80109200: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x80109204: jal         0x80102FA0
    // 0x80109208: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    func_80102FA0(rdram, ctx);
        goto after_25;
    // 0x80109208: lui         $a1, 0x1
    ctx->r5 = S32(0X1 << 16);
    after_25:
    // 0x8010920C: beq         $v0, $zero, L_80109434
    if (ctx->r2 == 0) {
        // 0x80109210: lw          $t2, 0x28($sp)
        ctx->r10 = MEM_W(ctx->r29, 0X28);
            goto L_80109434;
    }
    // 0x80109210: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80109214: lbu         $v0, 0x5C($t2)
    ctx->r2 = MEM_BU(ctx->r10, 0X5C);
L_80109218:
    // 0x80109218: beq         $v0, $zero, L_80109234
    if (ctx->r2 == 0) {
        // 0x8010921C: lw          $t1, 0x8C($sp)
        ctx->r9 = MEM_W(ctx->r29, 0X8C);
            goto L_80109234;
    }
    // 0x8010921C: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x80109220: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80109224: addiu       $t4, $t1, -0x1
    ctx->r12 = ADD32(ctx->r9, -0X1);
    // 0x80109228: sw          $t4, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r12;
    // 0x8010922C: addiu       $t3, $t5, -0x1
    ctx->r11 = ADD32(ctx->r13, -0X1);
    // 0x80109230: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
L_80109234:
    // 0x80109234: lw          $t7, 0x8C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8C);
    // 0x80109238: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8010923C: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80109240: beq         $t7, $at, L_8010924C
    if (ctx->r15 == ctx->r1) {
        // 0x80109244: addiu       $t6, $zero, 0x63
        ctx->r14 = ADD32(0, 0X63);
            goto L_8010924C;
    }
    // 0x80109244: addiu       $t6, $zero, 0x63
    ctx->r14 = ADD32(0, 0X63);
    // 0x80109248: sb          $t6, 0x5C($t8)
    MEM_B(0X5C, ctx->r24) = ctx->r14;
L_8010924C:
    // 0x8010924C: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x80109250: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80109254: lw          $t0, 0x98($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X98);
    // 0x80109258: bnel        $t9, $at, L_80109428
    if (ctx->r25 != ctx->r1) {
        // 0x8010925C: lw          $a0, 0xA0($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XA0);
            goto L_80109428;
    }
    goto skip_10;
    // 0x8010925C: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    skip_10:
    // 0x80109260: beql        $t0, $zero, L_80109428
    if (ctx->r8 == 0) {
        // 0x80109264: lw          $a0, 0xA0($sp)
        ctx->r4 = MEM_W(ctx->r29, 0XA0);
            goto L_80109428;
    }
    goto skip_11;
    // 0x80109264: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    skip_11:
    // 0x80109268: jal         0x8010A430
    // 0x8010926C: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    func_8010A430(rdram, ctx);
        goto after_26;
    // 0x8010926C: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    after_26:
    // 0x80109270: beq         $v0, $zero, L_80109424
    if (ctx->r2 == 0) {
        // 0x80109274: lw          $a0, 0x9C($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X9C);
            goto L_80109424;
    }
    // 0x80109274: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x80109278: addiu       $a2, $a0, 0x4
    ctx->r6 = ADD32(ctx->r4, 0X4);
    // 0x8010927C: jal         0x8010CD28
    // 0x80109280: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_8010CD28(rdram, ctx);
        goto after_27;
    // 0x80109280: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_27:
    // 0x80109284: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80109288: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8010928C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x80109290: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80109294: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80109298: jal         0x800EE904
    // 0x8010929C: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    func_800EE904(rdram, ctx);
        goto after_28;
    // 0x8010929C: swc1        $f6, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f6.u32l;
    after_28:
    // 0x801092A0: lw          $t2, 0xA0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA0);
    // 0x801092A4: addiu       $a1, $zero, 0xE
    ctx->r5 = ADD32(0, 0XE);
    // 0x801092A8: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x801092AC: beq         $a0, $zero, L_801092BC
    if (ctx->r4 == 0) {
        // 0x801092B0: nop
    
            goto L_801092BC;
    }
    // 0x801092B0: nop

    // 0x801092B4: jal         0x800DBEFC
    // 0x801092B8: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    func_800DBEFC(rdram, ctx);
        goto after_29;
    // 0x801092B8: addiu       $a2, $sp, 0x54
    ctx->r6 = ADD32(ctx->r29, 0X54);
    after_29:
L_801092BC:
    // 0x801092BC: lui         $a0, 0x8011
    ctx->r4 = S32(0X8011 << 16);
    // 0x801092C0: addiu       $a0, $a0, -0x710C
    ctx->r4 = ADD32(ctx->r4, -0X710C);
    // 0x801092C4: jal         0x800EB860
    // 0x801092C8: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    func_800EB860(rdram, ctx);
        goto after_30;
    // 0x801092C8: lw          $a1, 0x9C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X9C);
    after_30:
    // 0x801092CC: lw          $t1, 0xA0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA0);
    // 0x801092D0: lwc1        $f8, 0x54($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X54);
    // 0x801092D4: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x801092D8: lw          $t4, 0x4($t1)
    ctx->r12 = MEM_W(ctx->r9, 0X4);
    // 0x801092DC: beq         $t4, $zero, L_80109350
    if (ctx->r12 == 0) {
        // 0x801092E0: nop
    
            goto L_80109350;
    }
    // 0x801092E0: nop

    // 0x801092E4: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x801092E8: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x801092EC: lwc1        $f10, 0x58($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X58);
    // 0x801092F0: c.eq.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl == ctx->f8.fl;
    // 0x801092F4: addiu       $v0, $sp, 0x54
    ctx->r2 = ADD32(ctx->r29, 0X54);
    // 0x801092F8: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x801092FC: bc1fl       L_80109328
    if (!c1cs) {
        // 0x80109300: lw          $t5, 0x8($v0)
        ctx->r13 = MEM_W(ctx->r2, 0X8);
            goto L_80109328;
    }
    goto skip_12;
    // 0x80109300: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    skip_12:
    // 0x80109304: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x80109308: lwc1        $f16, 0x5C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x8010930C: bc1fl       L_80109328
    if (!c1cs) {
        // 0x80109310: lw          $t5, 0x8($v0)
        ctx->r13 = MEM_W(ctx->r2, 0X8);
            goto L_80109328;
    }
    goto skip_13;
    // 0x80109310: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
    skip_13:
    // 0x80109314: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x80109318: nop

    // 0x8010931C: bc1t        L_80109350
    if (c1cs) {
        // 0x80109320: nop
    
            goto L_80109350;
    }
    // 0x80109320: nop

    // 0x80109324: lw          $t5, 0x8($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X8);
L_80109328:
    // 0x80109328: lw          $t3, 0x60($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X60);
    // 0x8010932C: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x80109330: lw          $a2, 0x0($v0)
    ctx->r6 = MEM_W(ctx->r2, 0X0);
    // 0x80109334: lw          $a3, 0x4($v0)
    ctx->r7 = MEM_W(ctx->r2, 0X4);
    // 0x80109338: addiu       $a0, $a0, 0x6D78
    ctx->r4 = ADD32(ctx->r4, 0X6D78);
    // 0x8010933C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80109340: jal         0x80086D50
    // 0x80109344: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    _chbaddiesetup_entrypoint_5(rdram, ctx);
        goto after_31;
    // 0x80109344: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    after_31:
    // 0x80109348: b           L_8010941C
    // 0x8010934C: nop

        goto L_8010941C;
    // 0x8010934C: nop

L_80109350:
    // 0x80109350: jal         0x80102FA0
    // 0x80109354: lui         $a1, 0x8100
    ctx->r5 = S32(0X8100 << 16);
    func_80102FA0(rdram, ctx);
        goto after_32;
    // 0x80109354: lui         $a1, 0x8100
    ctx->r5 = S32(0X8100 << 16);
    after_32:
    // 0x80109358: beq         $v0, $zero, L_801093D8
    if (ctx->r2 == 0) {
        // 0x8010935C: nop
    
            goto L_801093D8;
    }
    // 0x8010935C: nop

    // 0x80109360: jal         0x800EC708
    // 0x80109364: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    func_800EC708(rdram, ctx);
        goto after_33;
    // 0x80109364: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    after_33:
    // 0x80109368: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x8010936C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80109370: addiu       $a0, $sp, 0x40
    ctx->r4 = ADD32(ctx->r29, 0X40);
    // 0x80109374: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x80109378: mul.s       $f4, $f0, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f0.fl, ctx->f18.fl);
    // 0x8010937C: addiu       $a2, $sp, 0x4C
    ctx->r6 = ADD32(ctx->r29, 0X4C);
    // 0x80109380: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    // 0x80109384: trunc.w.s   $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = TRUNC_W_S(ctx->f4.fl);
    // 0x80109388: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8010938C: jal         0x800882F8
    // 0x80109390: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    _gccubesearch_entrypoint_16(rdram, ctx);
        goto after_34;
    // 0x80109390: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    after_34:
    // 0x80109394: beq         $v0, $zero, L_801093D8
    if (ctx->r2 == 0) {
        // 0x80109398: addiu       $a0, $sp, 0x54
        ctx->r4 = ADD32(ctx->r29, 0X54);
            goto L_801093D8;
    }
    // 0x80109398: addiu       $a0, $sp, 0x54
    ctx->r4 = ADD32(ctx->r29, 0X54);
    // 0x8010939C: jal         0x800EE88C
    // 0x801093A0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    func_800EE88C(rdram, ctx);
        goto after_35;
    // 0x801093A0: lw          $a1, 0x4C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X4C);
    after_35:
    // 0x801093A4: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x801093A8: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x801093AC: lw          $t9, 0x60($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X60);
    // 0x801093B0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x801093B4: addiu       $a0, $a0, 0x6D78
    ctx->r4 = ADD32(ctx->r4, 0X6D78);
    // 0x801093B8: lw          $a2, 0x54($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X54);
    // 0x801093BC: lw          $a3, 0x58($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X58);
    // 0x801093C0: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x801093C4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x801093C8: jal         0x80086D50
    // 0x801093CC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    _chbaddiesetup_entrypoint_5(rdram, ctx);
        goto after_36;
    // 0x801093CC: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    after_36:
    // 0x801093D0: b           L_8010941C
    // 0x801093D4: nop

        goto L_8010941C;
    // 0x801093D4: nop

L_801093D8:
    // 0x801093D8: jal         0x800EC708
    // 0x801093DC: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    func_800EC708(rdram, ctx);
        goto after_37;
    // 0x801093DC: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
    after_37:
    // 0x801093E0: lw          $t0, 0x9C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X9C);
    // 0x801093E4: lw          $a1, 0x98($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X98);
    // 0x801093E8: lw          $t1, 0x60($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X60);
    // 0x801093EC: lwc1        $f8, 0x8($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X8);
    // 0x801093F0: lui         $a0, 0x8008
    ctx->r4 = S32(0X8008 << 16);
    // 0x801093F4: addiu       $a0, $a0, 0x6D78
    ctx->r4 = ADD32(ctx->r4, 0X6D78);
    // 0x801093F8: add.s       $f10, $f0, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f0.fl + ctx->f8.fl;
    // 0x801093FC: addiu       $a1, $a1, 0x2
    ctx->r5 = ADD32(ctx->r5, 0X2);
    // 0x80109400: swc1        $f10, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f10.u32l;
    // 0x80109404: lw          $t2, 0xC($t0)
    ctx->r10 = MEM_W(ctx->r8, 0XC);
    // 0x80109408: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x8010940C: lw          $a3, 0x3C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X3C);
    // 0x80109410: sw          $t1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r9;
    // 0x80109414: jal         0x80086D50
    // 0x80109418: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    _chbaddiesetup_entrypoint_5(rdram, ctx);
        goto after_38;
    // 0x80109418: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    after_38:
L_8010941C:
    // 0x8010941C: jal         0x800EB874
    // 0x80109420: nop

    func_800EB874(rdram, ctx);
        goto after_39;
    // 0x80109420: nop

    after_39:
L_80109424:
    // 0x80109424: lw          $a0, 0xA0($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XA0);
L_80109428:
    // 0x80109428: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x8010942C: jal         0x800EB210
    // 0x80109430: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    func_800EB210(rdram, ctx);
        goto after_40;
    // 0x80109430: lw          $a2, 0x8C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X8C);
    after_40:
L_80109434:
    // 0x80109434: lw          $t4, 0x8C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8C);
    // 0x80109438: lw          $t5, 0x94($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X94);
    // 0x8010943C: beql        $t4, $zero, L_801094D4
    if (ctx->r12 == 0) {
        // 0x80109440: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801094D4;
    }
    goto skip_14;
    // 0x80109440: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_14:
    // 0x80109444: beq         $t5, $zero, L_801094D0
    if (ctx->r13 == 0) {
        // 0x80109448: lw          $t3, 0x9C($sp)
        ctx->r11 = MEM_W(ctx->r29, 0X9C);
            goto L_801094D0;
    }
    // 0x80109448: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x8010944C: lw          $t7, 0x6C($t3)
    ctx->r15 = MEM_W(ctx->r11, 0X6C);
    // 0x80109450: addiu       $at, $zero, 0x31E
    ctx->r1 = ADD32(0, 0X31E);
    // 0x80109454: addiu       $a2, $t3, 0x4
    ctx->r6 = ADD32(ctx->r11, 0X4);
    // 0x80109458: sll         $t6, $t7, 11
    ctx->r14 = S32(ctx->r15 << 11);
    // 0x8010945C: srl         $t8, $t6, 20
    ctx->r24 = S32(U32(ctx->r14) >> 20);
    // 0x80109460: bne         $t8, $at, L_80109470
    if (ctx->r24 != ctx->r1) {
        // 0x80109464: addiu       $a0, $zero, 0x415
        ctx->r4 = ADD32(0, 0X415);
            goto L_80109470;
    }
    // 0x80109464: addiu       $a0, $zero, 0x415
    ctx->r4 = ADD32(0, 0X415);
    // 0x80109468: b           L_80109470
    // 0x8010946C: addiu       $a0, $zero, 0x41F
    ctx->r4 = ADD32(0, 0X41F);
        goto L_80109470;
    // 0x8010946C: addiu       $a0, $zero, 0x41F
    ctx->r4 = ADD32(0, 0X41F);
L_80109470:
    // 0x80109470: jal         0x800C4B7C
    // 0x80109474: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    func_800C4B7C(rdram, ctx);
        goto after_41;
    // 0x80109474: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    after_41:
    // 0x80109478: lw          $t9, 0x9C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X9C);
    // 0x8010947C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80109480: lw          $a2, 0x28($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X28);
    // 0x80109484: lw          $a1, 0x70($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X70);
    // 0x80109488: addiu       $a3, $a3, 0x460C
    ctx->r7 = ADD32(ctx->r7, 0X460C);
    // 0x8010948C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80109490: andi        $t0, $a1, 0x1
    ctx->r8 = ctx->r5 & 0X1;
    // 0x80109494: jal         0x8010D930
    // 0x80109498: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_8010D930(rdram, ctx);
        goto after_42;
    // 0x80109498: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_42:
    // 0x8010949C: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x801094A0: jal         0x80102FA0
    // 0x801094A4: lui         $a1, 0x200
    ctx->r5 = S32(0X200 << 16);
    func_80102FA0(rdram, ctx);
        goto after_43;
    // 0x801094A4: lui         $a1, 0x200
    ctx->r5 = S32(0X200 << 16);
    after_43:
    // 0x801094A8: bne         $v0, $zero, L_801094C0
    if (ctx->r2 != 0) {
        // 0x801094AC: lw          $a0, 0x88($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X88);
            goto L_801094C0;
    }
    // 0x801094AC: lw          $a0, 0x88($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X88);
    // 0x801094B0: jal         0x80102FA0
    // 0x801094B4: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
    func_80102FA0(rdram, ctx);
        goto after_44;
    // 0x801094B4: lui         $a1, 0x100
    ctx->r5 = S32(0X100 << 16);
    after_44:
    // 0x801094B8: beql        $v0, $zero, L_801094D4
    if (ctx->r2 == 0) {
        // 0x801094BC: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801094D4;
    }
    goto skip_15;
    // 0x801094BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_15:
L_801094C0:
    // 0x801094C0: lw          $a0, 0x9C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X9C);
    // 0x801094C4: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    // 0x801094C8: jal         0x80089BF8
    // 0x801094CC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    _subaddiejoy_entrypoint_10(rdram, ctx);
        goto after_45;
    // 0x801094CC: lui         $a2, 0x3E80
    ctx->r6 = S32(0X3E80 << 16);
    after_45:
L_801094D0:
    // 0x801094D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801094D4:
    // 0x801094D4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    // 0x801094D8: jr          $ra
    // 0x801094DC: nop

    return;
    // 0x801094DC: nop

;}
RECOMP_FUNC void func_801094E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801094E0: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x801094E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x801094E8: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x801094EC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x801094F0: addiu       $t6, $t6, 0x461C
    ctx->r14 = ADD32(ctx->r14, 0X461C);
    // 0x801094F4: mfc1        $a2, $f12
    ctx->r6 = (int32_t)ctx->f12.u32l;
    // 0x801094F8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x801094FC: or          $a1, $a0, $zero
    ctx->r5 = ctx->r4 | 0;
    // 0x80109500: jal         0x800BBCB8
    // 0x80109504: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    func_800BBCB8(rdram, ctx);
        goto after_0;
    // 0x80109504: addiu       $a3, $zero, 0x3
    ctx->r7 = ADD32(0, 0X3);
    after_0:
    // 0x80109508: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8010950C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80109510: jr          $ra
    return;
;}
RECOMP_FUNC void func_80109518(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109518: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8010951C: jr          $ra
    // 0x80109520: addiu       $v0, $v0, 0x464C
    ctx->r2 = ADD32(ctx->r2, 0X464C);
    return;
    // 0x80109520: addiu       $v0, $v0, 0x464C
    ctx->r2 = ADD32(ctx->r2, 0X464C);
;}
RECOMP_FUNC void func_80109524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109524: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80109528: lui         $v0, 0x8012
    ctx->r2 = S32(0X8012 << 16);
    // 0x8010952C: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x80109530: jr          $ra
    // 0x80109534: lh          $v0, 0x45A0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X45A0);
    return;
    // 0x80109534: lh          $v0, 0x45A0($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X45A0);
;}
RECOMP_FUNC void func_80109538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109538: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8010953C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80109540: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80109544: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80109548: sw          $a3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r7;
    // 0x8010954C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80109550: jal         0x8008A010
    // 0x80109554: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    _subaddiecustomhits_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x80109554: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x80109558: bne         $v0, $zero, L_80109568
    if (ctx->r2 != 0) {
        // 0x8010955C: addiu       $a0, $sp, 0x2C
        ctx->r4 = ADD32(ctx->r29, 0X2C);
            goto L_80109568;
    }
    // 0x8010955C: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x80109560: jal         0x800EE7F8
    // 0x80109564: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    func_800EE7F8(rdram, ctx);
        goto after_1;
    // 0x80109564: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    after_1:
L_80109568:
    // 0x80109568: lw          $v0, 0x40($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X40);
    // 0x8010956C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80109570: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80109574: beq         $v0, $zero, L_8010959C
    if (ctx->r2 == 0) {
        // 0x80109578: addiu       $a0, $zero, 0xA
        ctx->r4 = ADD32(0, 0XA);
            goto L_8010959C;
    }
    // 0x80109578: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x8010957C: lw          $t6, 0x24($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X24);
    // 0x80109580: srl         $t7, $t6, 22
    ctx->r15 = S32(U32(ctx->r14) >> 22);
    // 0x80109584: bne         $t7, $zero, L_80109594
    if (ctx->r15 != 0) {
        // 0x80109588: nop
    
            goto L_80109594;
    }
    // 0x80109588: nop

    // 0x8010958C: b           L_8010959C
    // 0x80109590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
        goto L_8010959C;
    // 0x80109590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
L_80109594:
    // 0x80109594: b           L_8010959C
    // 0x80109598: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
        goto L_8010959C;
    // 0x80109598: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
L_8010959C:
    // 0x8010959C: beql        $t8, $zero, L_801095E8
    if (ctx->r24 == 0) {
        // 0x801095A0: addiu       $a0, $sp, 0x2C
        ctx->r4 = ADD32(ctx->r29, 0X2C);
            goto L_801095E8;
    }
    goto skip_0;
    // 0x801095A0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    skip_0:
    // 0x801095A4: jal         0x800B53A4
    // 0x801095A8: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    func_800B53A4(rdram, ctx);
        goto after_2;
    // 0x801095A8: sw          $a1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r5;
    after_2:
    // 0x801095AC: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801095B0: jal         0x80109524
    // 0x801095B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    func_80109524(rdram, ctx);
        goto after_3;
    // 0x801095B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    after_3:
    // 0x801095B8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801095BC: jal         0x800BA3FC
    // 0x801095C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800BA3FC(rdram, ctx);
        goto after_4;
    // 0x801095C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_4:
    // 0x801095C4: jal         0x80109518
    // 0x801095C8: nop

    func_80109518(rdram, ctx);
        goto after_5;
    // 0x801095C8: nop

    after_5:
    // 0x801095CC: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x801095D0: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801095D4: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x801095D8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x801095DC: jal         0x800BABB8
    // 0x801095E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_800BABB8(rdram, ctx);
        goto after_6;
    // 0x801095E0: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_6:
    // 0x801095E4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
L_801095E8:
    // 0x801095E8: jal         0x801094E0
    // 0x801095EC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_801094E0(rdram, ctx);
        goto after_7;
    // 0x801095EC: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_7:
    // 0x801095F0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x801095F4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801095F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_80109600(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109600: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80109604: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80109608: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8010960C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80109610: jal         0x80103DFC
    // 0x80109614: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_80103DFC(rdram, ctx);
        goto after_0;
    // 0x80109614: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x80109618: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8010961C: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80109620: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x80109624: jal         0x80109538
    // 0x80109628: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80109538(rdram, ctx);
        goto after_1;
    // 0x80109628: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x8010962C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80109630: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80109634: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010963C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010963C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80109640: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80109644: jal         0x80109538
    // 0x80109648: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80109538(rdram, ctx);
        goto after_0;
    // 0x80109648: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x8010964C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80109650: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80109654: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010965C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010965C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80109660: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80109664: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80109668: jal         0x8008A010
    // 0x8010966C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    _subaddiecustomhits_entrypoint_4(rdram, ctx);
        goto after_0;
    // 0x8010966C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80109670: beql        $v0, $zero, L_801096BC
    if (ctx->r2 == 0) {
        // 0x80109674: lw          $ra, 0x1C($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X1C);
            goto L_801096BC;
    }
    goto skip_0;
    // 0x80109674: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    skip_0:
    // 0x80109678: jal         0x800B53A4
    // 0x8010967C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    func_800B53A4(rdram, ctx);
        goto after_1;
    // 0x8010967C: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_1:
    // 0x80109680: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x80109684: jal         0x80109524
    // 0x80109688: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80109524(rdram, ctx);
        goto after_2;
    // 0x80109688: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x8010968C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x80109690: jal         0x800BA3FC
    // 0x80109694: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    func_800BA3FC(rdram, ctx);
        goto after_3;
    // 0x80109694: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    after_3:
    // 0x80109698: jal         0x80109518
    // 0x8010969C: nop

    func_80109518(rdram, ctx);
        goto after_4;
    // 0x8010969C: nop

    after_4:
    // 0x801096A0: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x801096A4: or          $a2, $a1, $zero
    ctx->r6 = ctx->r5 | 0;
    // 0x801096A8: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801096AC: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x801096B0: jal         0x800BABB8
    // 0x801096B4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    func_800BABB8(rdram, ctx);
        goto after_5;
    // 0x801096B4: sw          $v0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r2;
    after_5:
    // 0x801096B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
L_801096BC:
    // 0x801096BC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x801096C0: jr          $ra
    return;
;}
RECOMP_FUNC void func_801096C8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801096C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x801096CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x801096D0: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x801096D4: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x801096D8: jal         0x80103DFC
    // 0x801096DC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    func_80103DFC(rdram, ctx);
        goto after_0;
    // 0x801096DC: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    after_0:
    // 0x801096E0: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x801096E4: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x801096E8: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x801096EC: jal         0x80109538
    // 0x801096F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    func_80109538(rdram, ctx);
        goto after_1;
    // 0x801096F0: or          $a3, $zero, $zero
    ctx->r7 = 0 | 0;
    after_1:
    // 0x801096F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x801096F8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x801096FC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80109704(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109704: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80109708: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8010970C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80109710: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x80109714: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80109718: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8010971C: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80109720: addiu       $a0, $a0, 0x4
    ctx->r4 = ADD32(ctx->r4, 0X4);
    // 0x80109724: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80109728: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8010972C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80109730: jal         0x80109748
    // 0x80109734: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    func_80109748(rdram, ctx);
        goto after_0;
    // 0x80109734: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    after_0:
    // 0x80109738: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8010973C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80109740: jr          $ra
    return;
;}
RECOMP_FUNC void func_80109748(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109748: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x8010974C: sw          $ra, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r31;
    // 0x80109750: sw          $fp, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r30;
    // 0x80109754: sw          $s7, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r23;
    // 0x80109758: sw          $s6, 0x78($sp)
    MEM_W(0X78, ctx->r29) = ctx->r22;
    // 0x8010975C: sw          $s5, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->r21;
    // 0x80109760: sw          $s4, 0x70($sp)
    MEM_W(0X70, ctx->r29) = ctx->r20;
    // 0x80109764: sw          $s3, 0x6C($sp)
    MEM_W(0X6C, ctx->r29) = ctx->r19;
    // 0x80109768: sw          $s2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r18;
    // 0x8010976C: sw          $s1, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r17;
    // 0x80109770: sw          $s0, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r16;
    // 0x80109774: sdc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    SD(ctx->f30.u64, 0X58, ctx->r29);
    // 0x80109778: sdc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    SD(ctx->f28.u64, 0X50, ctx->r29);
    // 0x8010977C: sdc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X48, ctx->r29);
    // 0x80109780: sdc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X40, ctx->r29);
    // 0x80109784: sdc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X38, ctx->r29);
    // 0x80109788: sdc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X30, ctx->r29);
    // 0x8010978C: lwc1        $f4, 0x0($a0)
    ctx->f4.u32l = MEM_W(ctx->r4, 0X0);
    // 0x80109790: or          $s1, $a0, $zero
    ctx->r17 = ctx->r4 | 0;
    // 0x80109794: or          $s2, $a1, $zero
    ctx->r18 = ctx->r5 | 0;
    // 0x80109798: swc1        $f4, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->f4.u32l;
    // 0x8010979C: lwc1        $f6, 0x8($a0)
    ctx->f6.u32l = MEM_W(ctx->r4, 0X8);
    // 0x801097A0: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x801097A4: blez        $a1, L_80109888
    if (SIGNED(ctx->r5) <= 0) {
        // 0x801097A8: swc1        $f6, 0xA0($sp)
        MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
            goto L_80109888;
    }
    // 0x801097A8: swc1        $f6, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->f6.u32l;
    // 0x801097AC: mtc1        $a2, $f18
    ctx->f18.u32l = ctx->r6;
    // 0x801097B0: mtc1        $a3, $f16
    ctx->f16.u32l = ctx->r7;
    // 0x801097B4: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x801097B8: cvt.s.w     $f24, $f18
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 18);
    ctx->f24.fl = CVT_S_W(ctx->f18.u32l);
    // 0x801097BC: mtc1        $at, $f30
    ctx->f30.u32l = ctx->r1;
    // 0x801097C0: lwc1        $f28, 0xC0($sp)
    ctx->f28.u32l = MEM_W(ctx->r29, 0XC0);
    // 0x801097C4: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x801097C8: mtc1        $at, $f22
    ctx->f22.u32l = ctx->r1;
    // 0x801097CC: cvt.s.w     $f26, $f16
    CHECK_FR(ctx, 26);
    CHECK_FR(ctx, 16);
    ctx->f26.fl = CVT_S_W(ctx->f16.u32l);
    // 0x801097D0: lui         $at, 0xC100
    ctx->r1 = S32(0XC100 << 16);
    // 0x801097D4: mtc1        $at, $f20
    ctx->f20.u32l = ctx->r1;
    // 0x801097D8: lui         $fp, 0x8012
    ctx->r30 = S32(0X8012 << 16);
    // 0x801097DC: addiu       $fp, $fp, 0x4688
    ctx->r30 = ADD32(ctx->r30, 0X4688);
    // 0x801097E0: addiu       $s7, $sp, 0xA4
    ctx->r23 = ADD32(ctx->r29, 0XA4);
    // 0x801097E4: addiu       $s6, $sp, 0x98
    ctx->r22 = ADD32(ctx->r29, 0X98);
    // 0x801097E8: lw          $s5, 0xC4($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XC4);
    // 0x801097EC: lw          $s4, 0xCC($sp)
    ctx->r20 = MEM_W(ctx->r29, 0XCC);
    // 0x801097F0: lw          $s3, 0xC8($sp)
    ctx->r19 = MEM_W(ctx->r29, 0XC8);
    // 0x801097F4: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
L_801097F8:
    // 0x801097F8: jal         0x800DC178
    // 0x801097FC: mov.s       $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    ctx->f14.fl = ctx->f26.fl;
    func_800DC178(rdram, ctx);
        goto after_0;
    // 0x801097FC: mov.s       $f14, $f26
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 26);
    ctx->f14.fl = ctx->f26.fl;
    after_0:
    // 0x80109800: lwc1        $f16, 0x4($s1)
    ctx->f16.u32l = MEM_W(ctx->r17, 0X4);
    // 0x80109804: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80109808: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8010980C: add.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f0.fl + ctx->f16.fl;
    // 0x80109810: mov.s       $f12, $f30
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 30);
    ctx->f12.fl = ctx->f30.fl;
    // 0x80109814: jal         0x800DC178
    // 0x80109818: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    func_800DC178(rdram, ctx);
        goto after_1;
    // 0x80109818: swc1        $f18, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->f18.u32l;
    after_1:
    // 0x8010981C: swc1        $f0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->f0.u32l;
    // 0x80109820: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80109824: jal         0x800DC178
    // 0x80109828: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    func_800DC178(rdram, ctx);
        goto after_2;
    // 0x80109828: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_2:
    // 0x8010982C: swc1        $f0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->f0.u32l;
    // 0x80109830: mov.s       $f12, $f20
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 20);
    ctx->f12.fl = ctx->f20.fl;
    // 0x80109834: jal         0x800DC178
    // 0x80109838: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    func_800DC178(rdram, ctx);
        goto after_3;
    // 0x80109838: mov.s       $f14, $f22
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 22);
    ctx->f14.fl = ctx->f22.fl;
    after_3:
    // 0x8010983C: swc1        $f0, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->f0.u32l;
    // 0x80109840: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80109844: jal         0x800DC128
    // 0x80109848: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800DC128(rdram, ctx);
        goto after_4;
    // 0x80109848: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_4:
    // 0x8010984C: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80109850: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80109854: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80109858: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x8010985C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80109860: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80109864: swc1        $f28, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f28.u32l;
    // 0x80109868: sw          $s5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r21;
    // 0x8010986C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80109870: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80109874: jal         0x800B4470
    // 0x80109878: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800B4470(rdram, ctx);
        goto after_5;
    // 0x80109878: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_5:
    // 0x8010987C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80109880: bnel        $s0, $s2, L_801097F8
    if (ctx->r16 != ctx->r18) {
        // 0x80109884: mov.s       $f12, $f24
        CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
            goto L_801097F8;
    }
    goto skip_0;
    // 0x80109884: mov.s       $f12, $f24
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 24);
    ctx->f12.fl = ctx->f24.fl;
    skip_0:
L_80109888:
    // 0x80109888: lw          $ra, 0x84($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X84);
    // 0x8010988C: ldc1        $f20, 0x30($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X30);
    // 0x80109890: ldc1        $f22, 0x38($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X38);
    // 0x80109894: ldc1        $f24, 0x40($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X40);
    // 0x80109898: ldc1        $f26, 0x48($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X48);
    // 0x8010989C: ldc1        $f28, 0x50($sp)
    CHECK_FR(ctx, 28);
    ctx->f28.u64 = LD(ctx->r29, 0X50);
    // 0x801098A0: ldc1        $f30, 0x58($sp)
    CHECK_FR(ctx, 30);
    ctx->f30.u64 = LD(ctx->r29, 0X58);
    // 0x801098A4: lw          $s0, 0x60($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X60);
    // 0x801098A8: lw          $s1, 0x64($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X64);
    // 0x801098AC: lw          $s2, 0x68($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X68);
    // 0x801098B0: lw          $s3, 0x6C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X6C);
    // 0x801098B4: lw          $s4, 0x70($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X70);
    // 0x801098B8: lw          $s5, 0x74($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X74);
    // 0x801098BC: lw          $s6, 0x78($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X78);
    // 0x801098C0: lw          $s7, 0x7C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X7C);
    // 0x801098C4: lw          $fp, 0x80($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X80);
    // 0x801098C8: jr          $ra
    // 0x801098CC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x801098CC: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_801098D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801098D0: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x801098D4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x801098D8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x801098DC: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x801098E0: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x801098E4: lw          $v0, 0xC($a2)
    ctx->r2 = MEM_W(ctx->r6, 0XC);
    // 0x801098E8: or          $s0, $a2, $zero
    ctx->r16 = ctx->r6 | 0;
    // 0x801098EC: beql        $v0, $zero, L_80109968
    if (ctx->r2 == 0) {
        // 0x801098F0: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80109968;
    }
    goto skip_0;
    // 0x801098F0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_0:
    // 0x801098F4: jalr        $v0
    // 0x801098F8: nop

    LOOKUP_FUNC(ctx->r2)(rdram, ctx);
        goto after_0;
    // 0x801098F8: nop

    after_0:
    // 0x801098FC: lw          $t6, 0xC($v0)
    ctx->r14 = MEM_W(ctx->r2, 0XC);
    // 0x80109900: beql        $t6, $zero, L_80109968
    if (ctx->r14 == 0) {
        // 0x80109904: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80109968;
    }
    goto skip_1;
    // 0x80109904: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    skip_1:
    // 0x80109908: lw          $t7, 0x18($s0)
    ctx->r15 = MEM_W(ctx->r16, 0X18);
    // 0x8010990C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80109910: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80109914: sll         $t8, $t7, 27
    ctx->r24 = S32(ctx->r15 << 27);
    // 0x80109918: srl         $t9, $t8, 28
    ctx->r25 = S32(U32(ctx->r24) >> 28);
    // 0x8010991C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80109920: lw          $t9, 0xC($v0)
    ctx->r25 = MEM_W(ctx->r2, 0XC);
    // 0x80109924: lw          $a2, 0x5C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X5C);
    // 0x80109928: addiu       $a3, $sp, 0x38
    ctx->r7 = ADD32(ctx->r29, 0X38);
    // 0x8010992C: jalr        $t9
    // 0x80109930: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80109930: nop

    after_1:
    // 0x80109934: beq         $v0, $zero, L_8010995C
    if (ctx->r2 == 0) {
        // 0x80109938: or          $t0, $v0, $zero
        ctx->r8 = ctx->r2 | 0;
            goto L_8010995C;
    }
    // 0x80109938: or          $t0, $v0, $zero
    ctx->r8 = ctx->r2 | 0;
    // 0x8010993C: lbu         $t3, 0x19($s0)
    ctx->r11 = MEM_BU(ctx->r16, 0X19);
    // 0x80109940: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x80109944: andi        $t2, $t1, 0x1E
    ctx->r10 = ctx->r9 & 0X1E;
    // 0x80109948: andi        $t4, $t3, 0xFFE1
    ctx->r12 = ctx->r11 & 0XFFE1;
    // 0x8010994C: or          $t5, $t2, $t4
    ctx->r13 = ctx->r10 | ctx->r12;
    // 0x80109950: sb          $t5, 0x19($s0)
    MEM_B(0X19, ctx->r16) = ctx->r13;
    // 0x80109954: b           L_801099BC
    // 0x80109958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_801099BC;
    // 0x80109958: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010995C:
    // 0x8010995C: b           L_801099BC
    // 0x80109960: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_801099BC;
    // 0x80109960: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80109964: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
L_80109968:
    // 0x80109968: jal         0x800EC75C
    // 0x8010996C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    func_800EC75C(rdram, ctx);
        goto after_2;
    // 0x8010996C: addiu       $a1, $sp, 0x4C
    ctx->r5 = ADD32(ctx->r29, 0X4C);
    after_2:
    // 0x80109970: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80109974: addiu       $s0, $sp, 0x4C
    ctx->r16 = ADD32(ctx->r29, 0X4C);
    // 0x80109978: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8010997C: add.s       $f6, $f0, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f0.fl + ctx->f4.fl;
    // 0x80109980: lw          $a1, 0x58($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X58);
    // 0x80109984: jal         0x800EF3DC
    // 0x80109988: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    func_800EF3DC(rdram, ctx);
        goto after_3;
    // 0x80109988: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x8010998C: jal         0x800EEFD4
    // 0x80109990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EEFD4(rdram, ctx);
        goto after_4;
    // 0x80109990: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_4:
    // 0x80109994: lwc1        $f2, 0x48($sp)
    ctx->f2.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80109998: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x8010999C: mul.s       $f8, $f2, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f2.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = MUL_S(ctx->f2.fl, ctx->f2.fl);
    // 0x801099A0: c.lt.s      $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f0.fl < ctx->f8.fl;
    // 0x801099A4: nop

    // 0x801099A8: bc1f        L_801099B8
    if (!c1cs) {
        // 0x801099AC: nop
    
            goto L_801099B8;
    }
    // 0x801099AC: nop

    // 0x801099B0: b           L_801099B8
    // 0x801099B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
        goto L_801099B8;
    // 0x801099B4: addiu       $v1, $zero, 0x1
    ctx->r3 = ADD32(0, 0X1);
L_801099B8:
    // 0x801099B8: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_801099BC:
    // 0x801099BC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x801099C0: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x801099C4: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x801099C8: jr          $ra
    return;
;}
RECOMP_FUNC void func_801099D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x801099D0: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x801099D4: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x801099D8: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x801099DC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x801099E0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x801099E4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x801099E8: or          $s3, $a3, $zero
    ctx->r19 = ctx->r7 | 0;
    // 0x801099EC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x801099F0: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x801099F4: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x801099F8: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x801099FC: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80109A00: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80109A04: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80109A08: sw          $a0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r4;
    // 0x80109A0C: sw          $a2, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r6;
    // 0x80109A10: jal         0x800BE444
    // 0x80109A14: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    func_800BE444(rdram, ctx);
        goto after_0;
    // 0x80109A14: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    after_0:
    // 0x80109A18: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80109A1C: jal         0x800CB854
    // 0x80109A20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_1;
    // 0x80109A20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80109A24: beq         $v0, $zero, L_80109A44
    if (ctx->r2 == 0) {
        // 0x80109A28: or          $s7, $zero, $zero
        ctx->r23 = 0 | 0;
            goto L_80109A44;
    }
    // 0x80109A28: or          $s7, $zero, $zero
    ctx->r23 = 0 | 0;
    // 0x80109A2C: jal         0x800CB854
    // 0x80109A30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_2;
    // 0x80109A30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80109A34: addiu       $t6, $v0, 0x1F
    ctx->r14 = ADD32(ctx->r2, 0X1F);
    // 0x80109A38: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80109A3C: b           L_80109A44
    // 0x80109A40: sllv        $s7, $t7, $t6
    ctx->r23 = S32(ctx->r15 << (ctx->r14 & 31));
        goto L_80109A44;
    // 0x80109A40: sllv        $s7, $t7, $t6
    ctx->r23 = S32(ctx->r15 << (ctx->r14 & 31));
L_80109A44:
    // 0x80109A44: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80109A48: ori         $s6, $zero, 0xFFFF
    ctx->r22 = 0 | 0XFFFF;
    // 0x80109A4C: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80109A50: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80109A54: lw          $s2, 0x64($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X64);
    // 0x80109A58: beql        $a0, $zero, L_80109BB8
    if (ctx->r4 == 0) {
        // 0x80109A5C: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80109BB8;
    }
    goto skip_0;
    // 0x80109A5C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_0:
L_80109A60:
    // 0x80109A60: jal         0x800E9E88
    // 0x80109A64: nop

    func_800E9E88(rdram, ctx);
        goto after_3;
    // 0x80109A64: nop

    after_3:
    // 0x80109A68: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80109A6C: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80109A70: jal         0x800E9EB4
    // 0x80109A74: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_800E9EB4(rdram, ctx);
        goto after_4;
    // 0x80109A74: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_4:
    // 0x80109A78: sltu        $at, $s1, $v0
    ctx->r1 = ctx->r17 < ctx->r2 ? 1 : 0;
    // 0x80109A7C: beq         $at, $zero, L_80109B9C
    if (ctx->r1 == 0) {
        // 0x80109A80: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_80109B9C;
    }
    // 0x80109A80: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80109A84: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
L_80109A88:
    // 0x80109A88: sll         $t1, $v0, 27
    ctx->r9 = S32(ctx->r2 << 27);
    // 0x80109A8C: bgez        $t1, L_80109B8C
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80109A90: andi        $t2, $v0, 0x1
        ctx->r10 = ctx->r2 & 0X1;
            goto L_80109B8C;
    }
    // 0x80109A90: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x80109A94: beql        $t2, $zero, L_80109B90
    if (ctx->r10 == 0) {
        // 0x80109A98: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_80109B90;
    }
    goto skip_1;
    // 0x80109A98: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_1:
    // 0x80109A9C: lw          $s0, 0x0($s1)
    ctx->r16 = MEM_W(ctx->r17, 0X0);
    // 0x80109AA0: beql        $s0, $s2, L_80109B90
    if (ctx->r16 == ctx->r18) {
        // 0x80109AA4: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_80109B90;
    }
    goto skip_2;
    // 0x80109AA4: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_2:
    // 0x80109AA8: lw          $t3, 0x28($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X28);
    // 0x80109AAC: sll         $t5, $t3, 22
    ctx->r13 = S32(ctx->r11 << 22);
    // 0x80109AB0: bgezl       $t5, L_80109B90
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80109AB4: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_80109B90;
    }
    goto skip_3;
    // 0x80109AB4: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_3:
    // 0x80109AB8: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
    // 0x80109ABC: andi        $t6, $t7, 0x1
    ctx->r14 = ctx->r15 & 0X1;
    // 0x80109AC0: beql        $t6, $zero, L_80109B90
    if (ctx->r14 == 0) {
        // 0x80109AC4: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_80109B90;
    }
    goto skip_4;
    // 0x80109AC4: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_4:
    // 0x80109AC8: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80109ACC: beql        $v0, $zero, L_80109B90
    if (ctx->r2 == 0) {
        // 0x80109AD0: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_80109B90;
    }
    goto skip_5;
    // 0x80109AD0: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_5:
    // 0x80109AD4: beql        $s6, $v0, L_80109B90
    if (ctx->r22 == ctx->r2) {
        // 0x80109AD8: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_80109B90;
    }
    goto skip_6;
    // 0x80109AD8: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_6:
    // 0x80109ADC: jal         0x80106790
    // 0x80109AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80106790(rdram, ctx);
        goto after_5;
    // 0x80109AE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80109AE4: lw          $t8, 0x64($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X64);
    // 0x80109AE8: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x80109AEC: sll         $t0, $t8, 14
    ctx->r8 = S32(ctx->r24 << 14);
    // 0x80109AF0: bltzl       $t0, L_80109B90
    if (SIGNED(ctx->r8) < 0) {
        // 0x80109AF4: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_80109B90;
    }
    goto skip_7;
    // 0x80109AF4: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_7:
    // 0x80109AF8: lhu         $t1, 0x66($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X66);
    // 0x80109AFC: and         $t2, $t1, $s7
    ctx->r10 = ctx->r9 & ctx->r23;
    // 0x80109B00: bnel        $t2, $zero, L_80109B90
    if (ctx->r10 != 0) {
        // 0x80109B04: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_80109B90;
    }
    goto skip_8;
    // 0x80109B04: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_8:
    // 0x80109B08: beql        $s3, $zero, L_80109B24
    if (ctx->r19 == 0) {
        // 0x80109B0C: mfc1        $a1, $f20
        ctx->r5 = (int32_t)ctx->f20.u32l;
            goto L_80109B24;
    }
    goto skip_9;
    // 0x80109B0C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    skip_9:
    // 0x80109B10: jalr        $s3
    // 0x80109B14: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    LOOKUP_FUNC(ctx->r19)(rdram, ctx);
        goto after_6;
    // 0x80109B14: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_6:
    // 0x80109B18: beql        $v0, $zero, L_80109B90
    if (ctx->r2 == 0) {
        // 0x80109B1C: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_80109B90;
    }
    goto skip_10;
    // 0x80109B1C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_10:
    // 0x80109B20: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
L_80109B24:
    // 0x80109B24: lw          $a0, 0x50($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X50);
    // 0x80109B28: jal         0x801098D0
    // 0x80109B2C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_801098D0(rdram, ctx);
        goto after_7;
    // 0x80109B2C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_7:
    // 0x80109B30: beql        $v0, $zero, L_80109B90
    if (ctx->r2 == 0) {
        // 0x80109B34: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_80109B90;
    }
    goto skip_11;
    // 0x80109B34: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_11:
    // 0x80109B38: jal         0x800EC3C4
    // 0x80109B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EC3C4(rdram, ctx);
        goto after_8;
    // 0x80109B3C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_8:
    // 0x80109B40: lw          $t3, 0x10($v0)
    ctx->r11 = MEM_W(ctx->r2, 0X10);
    // 0x80109B44: beql        $t3, $zero, L_80109B6C
    if (ctx->r11 == 0) {
        // 0x80109B48: addiu       $fp, $zero, 0x1
        ctx->r30 = ADD32(0, 0X1);
            goto L_80109B6C;
    }
    goto skip_12;
    // 0x80109B48: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    skip_12:
    // 0x80109B4C: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x80109B50: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80109B54: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80109B58: jalr        $t9
    // 0x80109B5C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x80109B5C: nop

    after_9:
    // 0x80109B60: beql        $v0, $zero, L_80109B90
    if (ctx->r2 == 0) {
        // 0x80109B64: addiu       $s1, $s1, 0xC
        ctx->r17 = ADD32(ctx->r17, 0XC);
            goto L_80109B90;
    }
    goto skip_13;
    // 0x80109B64: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
    skip_13:
    // 0x80109B68: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
L_80109B6C:
    // 0x80109B6C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80109B70: jal         0x80088610
    // 0x80109B74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    _glhittableDll_entrypoint_1(rdram, ctx);
        goto after_10;
    // 0x80109B74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x80109B78: bne         $v0, $zero, L_80109B8C
    if (ctx->r2 != 0) {
        // 0x80109B7C: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80109B8C;
    }
    // 0x80109B7C: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80109B80: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80109B84: jal         0x800EB210
    // 0x80109B88: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    func_800EB210(rdram, ctx);
        goto after_11;
    // 0x80109B88: lw          $a2, 0x58($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X58);
    after_11:
L_80109B8C:
    // 0x80109B8C: addiu       $s1, $s1, 0xC
    ctx->r17 = ADD32(ctx->r17, 0XC);
L_80109B90:
    // 0x80109B90: sltu        $at, $s1, $s4
    ctx->r1 = ctx->r17 < ctx->r20 ? 1 : 0;
    // 0x80109B94: bnel        $at, $zero, L_80109A88
    if (ctx->r1 != 0) {
        // 0x80109B98: lw          $v0, 0x8($s1)
        ctx->r2 = MEM_W(ctx->r17, 0X8);
            goto L_80109A88;
    }
    goto skip_14;
    // 0x80109B98: lw          $v0, 0x8($s1)
    ctx->r2 = MEM_W(ctx->r17, 0X8);
    skip_14:
L_80109B9C:
    // 0x80109B9C: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x80109BA0: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x80109BA4: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80109BA8: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80109BAC: bne         $a0, $zero, L_80109A60
    if (ctx->r4 != 0) {
        // 0x80109BB0: nop
    
            goto L_80109A60;
    }
    // 0x80109BB0: nop

    // 0x80109BB4: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80109BB8:
    // 0x80109BB8: or          $v0, $fp, $zero
    ctx->r2 = ctx->r30 | 0;
    // 0x80109BBC: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80109BC0: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80109BC4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80109BC8: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80109BCC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80109BD0: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80109BD4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80109BD8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80109BDC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80109BE0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80109BE4: jr          $ra
    // 0x80109BE8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80109BE8: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80109BEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109BEC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80109BF0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80109BF4: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80109BF8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80109BFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80109C00: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80109C04: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80109C08: jal         0x801099D0
    // 0x80109C0C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    func_801099D0(rdram, ctx);
        goto after_0;
    // 0x80109C0C: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_0:
    // 0x80109C10: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80109C14: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80109C18: jr          $ra
    return;
;}
RECOMP_FUNC void func_80109C20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109C20: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80109C24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80109C28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80109C2C: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80109C30: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    // 0x80109C34: jal         0x801099D0
    // 0x80109C38: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    func_801099D0(rdram, ctx);
        goto after_0;
    // 0x80109C38: sw          $zero, 0x14($sp)
    MEM_W(0X14, ctx->r29) = 0;
    after_0:
    // 0x80109C3C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80109C40: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80109C44: jr          $ra
    // 0x80109C48: nop

    return;
    // 0x80109C48: nop

;}
RECOMP_FUNC void func_80109C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109C4C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80109C50: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80109C54: lw          $s0, 0x44($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X44);
    // 0x80109C58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80109C5C: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80109C60: lw          $t6, 0x24($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X24);
    // 0x80109C64: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x80109C68: sll         $t1, $t9, 6
    ctx->r9 = S32(ctx->r25 << 6);
    // 0x80109C6C: srl         $t7, $t6, 22
    ctx->r15 = S32(U32(ctx->r14) >> 22);
    // 0x80109C70: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x80109C74: lhu         $t2, 0x24($s0)
    ctx->r10 = MEM_HU(ctx->r16, 0X24);
    // 0x80109C78: mfc1        $a1, $f12
    ctx->r5 = (int32_t)ctx->f12.u32l;
    // 0x80109C7C: andi        $t3, $t2, 0x3F
    ctx->r11 = ctx->r10 & 0X3F;
    // 0x80109C80: or          $t4, $t1, $t3
    ctx->r12 = ctx->r9 | ctx->r11;
    // 0x80109C84: sh          $t4, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r12;
    // 0x80109C88: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x80109C8C: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x80109C90: jal         0x801099D0
    // 0x80109C94: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_801099D0(rdram, ctx);
        goto after_0;
    // 0x80109C94: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_0:
    // 0x80109C98: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80109C9C: lhu         $t0, 0x24($s0)
    ctx->r8 = MEM_HU(ctx->r16, 0X24);
    // 0x80109CA0: sll         $t9, $t7, 6
    ctx->r25 = S32(ctx->r15 << 6);
    // 0x80109CA4: andi        $t2, $t0, 0x3F
    ctx->r10 = ctx->r8 & 0X3F;
    // 0x80109CA8: or          $t1, $t9, $t2
    ctx->r9 = ctx->r25 | ctx->r10;
    // 0x80109CAC: sh          $t1, 0x24($s0)
    MEM_H(0X24, ctx->r16) = ctx->r9;
    // 0x80109CB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80109CB4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80109CB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80109CBC: jr          $ra
    return;
;}
RECOMP_FUNC void func_80109CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109CC4: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80109CC8: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80109CCC: mtc1        $a1, $f20
    ctx->f20.u32l = ctx->r5;
    // 0x80109CD0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80109CD4: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80109CD8: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80109CDC: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80109CE0: or          $s3, $a2, $zero
    ctx->r19 = ctx->r6 | 0;
    // 0x80109CE4: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x80109CE8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80109CEC: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80109CF0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80109CF4: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80109CF8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80109CFC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80109D00: jal         0x800BE444
    // 0x80109D04: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    func_800BE444(rdram, ctx);
        goto after_0;
    // 0x80109D04: or          $fp, $zero, $zero
    ctx->r30 = 0 | 0;
    after_0:
    // 0x80109D08: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80109D0C: jal         0x800CB854
    // 0x80109D10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_1;
    // 0x80109D10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x80109D14: beq         $v0, $zero, L_80109D34
    if (ctx->r2 == 0) {
        // 0x80109D18: or          $s6, $zero, $zero
        ctx->r22 = 0 | 0;
            goto L_80109D34;
    }
    // 0x80109D18: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x80109D1C: jal         0x800CB854
    // 0x80109D20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_2;
    // 0x80109D20: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80109D24: addiu       $t6, $v0, 0x1F
    ctx->r14 = ADD32(ctx->r2, 0X1F);
    // 0x80109D28: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80109D2C: b           L_80109D34
    // 0x80109D30: sllv        $s6, $t7, $t6
    ctx->r22 = S32(ctx->r15 << (ctx->r14 & 31));
        goto L_80109D34;
    // 0x80109D30: sllv        $s6, $t7, $t6
    ctx->r22 = S32(ctx->r15 << (ctx->r14 & 31));
L_80109D34:
    // 0x80109D34: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80109D38: ori         $s5, $zero, 0xFFFF
    ctx->r21 = 0 | 0XFFFF;
    // 0x80109D3C: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80109D40: beql        $a0, $zero, L_80109EAC
    if (ctx->r4 == 0) {
        // 0x80109D44: lw          $ra, 0x44($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X44);
            goto L_80109EAC;
    }
    goto skip_0;
    // 0x80109D44: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    skip_0:
L_80109D48:
    // 0x80109D48: jal         0x800E9E88
    // 0x80109D4C: nop

    func_800E9E88(rdram, ctx);
        goto after_3;
    // 0x80109D4C: nop

    after_3:
    // 0x80109D50: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80109D54: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x80109D58: jal         0x800E9EB4
    // 0x80109D5C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    func_800E9EB4(rdram, ctx);
        goto after_4;
    // 0x80109D5C: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    after_4:
    // 0x80109D60: sltu        $at, $s2, $v0
    ctx->r1 = ctx->r18 < ctx->r2 ? 1 : 0;
    // 0x80109D64: beq         $at, $zero, L_80109E90
    if (ctx->r1 == 0) {
        // 0x80109D68: or          $s4, $v0, $zero
        ctx->r20 = ctx->r2 | 0;
            goto L_80109E90;
    }
    // 0x80109D68: or          $s4, $v0, $zero
    ctx->r20 = ctx->r2 | 0;
    // 0x80109D6C: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
L_80109D70:
    // 0x80109D70: sll         $t1, $v0, 27
    ctx->r9 = S32(ctx->r2 << 27);
    // 0x80109D74: bgez        $t1, L_80109E80
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80109D78: andi        $t2, $v0, 0x1
        ctx->r10 = ctx->r2 & 0X1;
            goto L_80109E80;
    }
    // 0x80109D78: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x80109D7C: beql        $t2, $zero, L_80109E84
    if (ctx->r10 == 0) {
        // 0x80109D80: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80109E84;
    }
    goto skip_1;
    // 0x80109D80: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    skip_1:
    // 0x80109D84: lw          $s0, 0x0($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X0);
    // 0x80109D88: beql        $s0, $s3, L_80109E84
    if (ctx->r16 == ctx->r19) {
        // 0x80109D8C: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80109E84;
    }
    goto skip_2;
    // 0x80109D8C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    skip_2:
    // 0x80109D90: lw          $t3, 0x28($s0)
    ctx->r11 = MEM_W(ctx->r16, 0X28);
    // 0x80109D94: sll         $t5, $t3, 22
    ctx->r13 = S32(ctx->r11 << 22);
    // 0x80109D98: bgezl       $t5, L_80109E84
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80109D9C: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80109E84;
    }
    goto skip_3;
    // 0x80109D9C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    skip_3:
    // 0x80109DA0: lhu         $t7, 0x18($s0)
    ctx->r15 = MEM_HU(ctx->r16, 0X18);
    // 0x80109DA4: andi        $t6, $t7, 0x1
    ctx->r14 = ctx->r15 & 0X1;
    // 0x80109DA8: beql        $t6, $zero, L_80109E84
    if (ctx->r14 == 0) {
        // 0x80109DAC: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80109E84;
    }
    goto skip_4;
    // 0x80109DAC: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    skip_4:
    // 0x80109DB0: lhu         $v0, 0x14($s0)
    ctx->r2 = MEM_HU(ctx->r16, 0X14);
    // 0x80109DB4: beql        $v0, $zero, L_80109E84
    if (ctx->r2 == 0) {
        // 0x80109DB8: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80109E84;
    }
    goto skip_5;
    // 0x80109DB8: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    skip_5:
    // 0x80109DBC: beql        $s5, $v0, L_80109E84
    if (ctx->r21 == ctx->r2) {
        // 0x80109DC0: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80109E84;
    }
    goto skip_6;
    // 0x80109DC0: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    skip_6:
    // 0x80109DC4: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
    // 0x80109DC8: lw          $t0, 0x24($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X24);
    // 0x80109DCC: srl         $t9, $t8, 22
    ctx->r25 = S32(U32(ctx->r24) >> 22);
    // 0x80109DD0: srl         $t1, $t0, 22
    ctx->r9 = S32(U32(ctx->r8) >> 22);
    // 0x80109DD4: beql        $t9, $t1, L_80109E84
    if (ctx->r25 == ctx->r9) {
        // 0x80109DD8: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80109E84;
    }
    goto skip_7;
    // 0x80109DD8: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    skip_7:
    // 0x80109DDC: jal         0x80106790
    // 0x80109DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_80106790(rdram, ctx);
        goto after_5;
    // 0x80109DE0: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_5:
    // 0x80109DE4: lw          $t2, 0x64($v0)
    ctx->r10 = MEM_W(ctx->r2, 0X64);
    // 0x80109DE8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80109DEC: sll         $t4, $t2, 14
    ctx->r12 = S32(ctx->r10 << 14);
    // 0x80109DF0: bltzl       $t4, L_80109E84
    if (SIGNED(ctx->r12) < 0) {
        // 0x80109DF4: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80109E84;
    }
    goto skip_8;
    // 0x80109DF4: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    skip_8:
    // 0x80109DF8: lhu         $t5, 0x66($v0)
    ctx->r13 = MEM_HU(ctx->r2, 0X66);
    // 0x80109DFC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80109E00: and         $t7, $t5, $s6
    ctx->r15 = ctx->r13 & ctx->r22;
    // 0x80109E04: bnel        $t7, $zero, L_80109E84
    if (ctx->r15 != 0) {
        // 0x80109E08: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80109E84;
    }
    goto skip_9;
    // 0x80109E08: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    skip_9:
    // 0x80109E0C: mfc1        $a1, $f20
    ctx->r5 = (int32_t)ctx->f20.u32l;
    // 0x80109E10: jal         0x801098D0
    // 0x80109E14: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    func_801098D0(rdram, ctx);
        goto after_6;
    // 0x80109E14: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_6:
    // 0x80109E18: beql        $v0, $zero, L_80109E84
    if (ctx->r2 == 0) {
        // 0x80109E1C: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80109E84;
    }
    goto skip_10;
    // 0x80109E1C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    skip_10:
    // 0x80109E20: jal         0x800EC3C4
    // 0x80109E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    func_800EC3C4(rdram, ctx);
        goto after_7;
    // 0x80109E24: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_7:
    // 0x80109E28: lw          $t6, 0x10($v0)
    ctx->r14 = MEM_W(ctx->r2, 0X10);
    // 0x80109E2C: beql        $t6, $zero, L_80109E54
    if (ctx->r14 == 0) {
        // 0x80109E30: lbu         $t0, 0x73($s1)
        ctx->r8 = MEM_BU(ctx->r17, 0X73);
            goto L_80109E54;
    }
    goto skip_11;
    // 0x80109E30: lbu         $t0, 0x73($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X73);
    skip_11:
    // 0x80109E34: lw          $t9, 0x10($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X10);
    // 0x80109E38: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80109E3C: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80109E40: jalr        $t9
    // 0x80109E44: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x80109E44: nop

    after_8:
    // 0x80109E48: beql        $v0, $zero, L_80109E84
    if (ctx->r2 == 0) {
        // 0x80109E4C: addiu       $s2, $s2, 0xC
        ctx->r18 = ADD32(ctx->r18, 0XC);
            goto L_80109E84;
    }
    goto skip_12;
    // 0x80109E4C: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
    skip_12:
    // 0x80109E50: lbu         $t0, 0x73($s1)
    ctx->r8 = MEM_BU(ctx->r17, 0X73);
L_80109E54:
    // 0x80109E54: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
    // 0x80109E58: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80109E5C: ori         $t1, $t0, 0x2
    ctx->r9 = ctx->r8 | 0X2;
    // 0x80109E60: sb          $t1, 0x73($s1)
    MEM_B(0X73, ctx->r17) = ctx->r9;
    // 0x80109E64: jal         0x80088610
    // 0x80109E68: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    _glhittableDll_entrypoint_1(rdram, ctx);
        goto after_9;
    // 0x80109E68: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x80109E6C: bne         $v0, $zero, L_80109E80
    if (ctx->r2 != 0) {
        // 0x80109E70: or          $a0, $s0, $zero
        ctx->r4 = ctx->r16 | 0;
            goto L_80109E80;
    }
    // 0x80109E70: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x80109E74: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    // 0x80109E78: jal         0x800EB210
    // 0x80109E7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800EB210(rdram, ctx);
        goto after_10;
    // 0x80109E7C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_10:
L_80109E80:
    // 0x80109E80: addiu       $s2, $s2, 0xC
    ctx->r18 = ADD32(ctx->r18, 0XC);
L_80109E84:
    // 0x80109E84: sltu        $at, $s2, $s4
    ctx->r1 = ctx->r18 < ctx->r20 ? 1 : 0;
    // 0x80109E88: bnel        $at, $zero, L_80109D70
    if (ctx->r1 != 0) {
        // 0x80109E8C: lw          $v0, 0x8($s2)
        ctx->r2 = MEM_W(ctx->r18, 0X8);
            goto L_80109D70;
    }
    goto skip_13;
    // 0x80109E8C: lw          $v0, 0x8($s2)
    ctx->r2 = MEM_W(ctx->r18, 0X8);
    skip_13:
L_80109E90:
    // 0x80109E90: lw          $v0, 0x48($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X48);
    // 0x80109E94: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x80109E98: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x80109E9C: sw          $v0, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r2;
    // 0x80109EA0: bne         $a0, $zero, L_80109D48
    if (ctx->r4 != 0) {
        // 0x80109EA4: nop
    
            goto L_80109D48;
    }
    // 0x80109EA4: nop

    // 0x80109EA8: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
L_80109EAC:
    // 0x80109EAC: or          $v0, $fp, $zero
    ctx->r2 = ctx->r30 | 0;
    // 0x80109EB0: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80109EB4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80109EB8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80109EBC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80109EC0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x80109EC4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80109EC8: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80109ECC: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80109ED0: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x80109ED4: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80109ED8: jr          $ra
    // 0x80109EDC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    return;
    // 0x80109EDC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
;}
RECOMP_FUNC void func_80109EE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109EE0: lhu         $t6, 0x66($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X66);
    // 0x80109EE4: jr          $ra
    // 0x80109EE8: and         $v0, $t6, $a1
    ctx->r2 = ctx->r14 & ctx->r5;
    return;
    // 0x80109EE8: and         $v0, $t6, $a1
    ctx->r2 = ctx->r14 & ctx->r5;
;}
RECOMP_FUNC void func_80109EEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109EEC: jr          $ra
    // 0x80109EF0: sh          $a1, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r5;
    return;
    // 0x80109EF0: sh          $a1, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r5;
;}
RECOMP_FUNC void func_80109EF4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109EF4: lhu         $t6, 0x66($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X66);
    // 0x80109EF8: nor         $t7, $a1, $zero
    ctx->r15 = ~(ctx->r5 | 0);
    // 0x80109EFC: and         $t8, $t6, $t7
    ctx->r24 = ctx->r14 & ctx->r15;
    // 0x80109F00: jr          $ra
    // 0x80109F04: sh          $t8, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r24;
    return;
    // 0x80109F04: sh          $t8, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r24;
;}
RECOMP_FUNC void func_80109F08(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109F08: lhu         $t6, 0x66($a0)
    ctx->r14 = MEM_HU(ctx->r4, 0X66);
    // 0x80109F0C: or          $t7, $t6, $a1
    ctx->r15 = ctx->r14 | ctx->r5;
    // 0x80109F10: jr          $ra
    // 0x80109F14: sh          $t7, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r15;
    return;
    // 0x80109F14: sh          $t7, 0x66($a0)
    MEM_H(0X66, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_80109F18(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109F18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80109F1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80109F20: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80109F24: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80109F28: jal         0x8010114C
    // 0x80109F2C: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    func_8010114C(rdram, ctx);
        goto after_0;
    // 0x80109F2C: addiu       $a1, $zero, 0x3E
    ctx->r5 = ADD32(0, 0X3E);
    after_0:
    // 0x80109F30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80109F34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80109F38: jr          $ra
    // 0x80109F3C: nop

    return;
    // 0x80109F3C: nop

;}
RECOMP_FUNC void func_80109F40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109F40: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80109F44: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80109F48: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80109F4C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80109F50: jal         0x8010114C
    // 0x80109F54: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    func_8010114C(rdram, ctx);
        goto after_0;
    // 0x80109F54: addiu       $a1, $zero, 0x3F
    ctx->r5 = ADD32(0, 0X3F);
    after_0:
    // 0x80109F58: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80109F5C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80109F60: jr          $ra
    // 0x80109F64: nop

    return;
    // 0x80109F64: nop

;}
RECOMP_FUNC void func_80109F68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109F68: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80109F6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80109F70: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80109F74: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80109F78: jal         0x8010114C
    // 0x80109F7C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    func_8010114C(rdram, ctx);
        goto after_0;
    // 0x80109F7C: addiu       $a1, $zero, 0x40
    ctx->r5 = ADD32(0, 0X40);
    after_0:
    // 0x80109F80: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80109F84: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80109F88: jr          $ra
    // 0x80109F8C: nop

    return;
    // 0x80109F8C: nop

;}
RECOMP_FUNC void func_80109F90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109F90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80109F94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80109F98: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80109F9C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x80109FA0: jal         0x8010114C
    // 0x80109FA4: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    func_8010114C(rdram, ctx);
        goto after_0;
    // 0x80109FA4: addiu       $a1, $zero, 0x41
    ctx->r5 = ADD32(0, 0X41);
    after_0:
    // 0x80109FA8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80109FAC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80109FB0: jr          $ra
    // 0x80109FB4: nop

    return;
    // 0x80109FB4: nop

;}
RECOMP_FUNC void func_80109FB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109FB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80109FBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80109FC0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x80109FC4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x80109FC8: jal         0x80106790
    // 0x80109FCC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_80106790(rdram, ctx);
        goto after_0;
    // 0x80109FCC: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x80109FD0: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80109FD4: sw          $t6, 0x3C($v0)
    MEM_W(0X3C, ctx->r2) = ctx->r14;
    // 0x80109FD8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80109FDC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80109FE0: jr          $ra
    // 0x80109FE4: nop

    return;
    // 0x80109FE4: nop

;}
RECOMP_FUNC void func_80109FE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80109FE8: beql        $a1, $zero, L_8010A008
    if (ctx->r5 == 0) {
            // 0x80109FEC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    static_3_8010A008(rdram, ctx);
    return;
    }
    goto skip_0;
    // 0x80109FEC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x80109FF0: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x80109FF4: lbu         $t6, 0x1B($v0)
    ctx->r14 = MEM_BU(ctx->r2, 0X1B);
    // 0x80109FF8: andi        $t7, $t6, 0xFFFE
    ctx->r15 = ctx->r14 & 0XFFFE;
    // 0x80109FFC: jr          $ra
    // 0x8010A000: sb          $t7, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r15;
    return;
    // 0x8010A000: sb          $t7, 0x1B($v0)
    MEM_B(0X1B, ctx->r2) = ctx->r15;
;}
RECOMP_FUNC void func_8010A004(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A004: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
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
RECOMP_FUNC void func_8010A01C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A01C: addiu       $sp, $sp, -0xD0
    ctx->r29 = ADD32(ctx->r29, -0XD0);
    // 0x8010A020: sdc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    SD(ctx->f26.u64, 0X30, ctx->r29);
    // 0x8010A024: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8010A028: mtc1        $a3, $f20
    ctx->f20.u32l = ctx->r7;
    // 0x8010A02C: mtc1        $a2, $f26
    ctx->f26.u32l = ctx->r6;
    // 0x8010A030: sw          $ra, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r31;
    // 0x8010A034: sw          $fp, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r30;
    // 0x8010A038: sw          $s0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r16;
    // 0x8010A03C: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8010A040: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x8010A044: sw          $s7, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r23;
    // 0x8010A048: sw          $s6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r22;
    // 0x8010A04C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    // 0x8010A050: sw          $s4, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r20;
    // 0x8010A054: sw          $s3, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r19;
    // 0x8010A058: sw          $s2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r18;
    // 0x8010A05C: sw          $s1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r17;
    // 0x8010A060: sdc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    SD(ctx->f24.u64, 0X28, ctx->r29);
    // 0x8010A064: jal         0x800BE444
    // 0x8010A068: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    func_800BE444(rdram, ctx);
        goto after_0;
    // 0x8010A068: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    after_0:
    // 0x8010A06C: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x8010A070: jal         0x800CB854
    // 0x8010A074: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_1;
    // 0x8010A074: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x8010A078: beql        $v0, $zero, L_8010A0A0
    if (ctx->r2 == 0) {
        // 0x8010A07C: sw          $zero, 0xC8($sp)
        MEM_W(0XC8, ctx->r29) = 0;
            goto L_8010A0A0;
    }
    goto skip_0;
    // 0x8010A07C: sw          $zero, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = 0;
    skip_0:
    // 0x8010A080: jal         0x800CB854
    // 0x8010A084: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800CB854(rdram, ctx);
        goto after_2;
    // 0x8010A084: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8010A088: addiu       $t6, $v0, 0x1F
    ctx->r14 = ADD32(ctx->r2, 0X1F);
    // 0x8010A08C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8010A090: sllv        $t8, $t7, $t6
    ctx->r24 = S32(ctx->r15 << (ctx->r14 & 31));
    // 0x8010A094: b           L_8010A0A0
    // 0x8010A098: sw          $t8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r24;
        goto L_8010A0A0;
    // 0x8010A098: sw          $t8, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r24;
    // 0x8010A09C: sw          $zero, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = 0;
L_8010A0A0:
    // 0x8010A0A0: addiu       $s7, $sp, 0xB4
    ctx->r23 = ADD32(ctx->r29, 0XB4);
    // 0x8010A0A4: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8010A0A8: jal         0x800EE7F8
    // 0x8010A0AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_3;
    // 0x8010A0AC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x8010A0B0: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x8010A0B4: mfc1        $a3, $f20
    ctx->r7 = (int32_t)ctx->f20.u32l;
    // 0x8010A0B8: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8010A0BC: jal         0x800F0C68
    // 0x8010A0C0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_800F0C68(rdram, ctx);
        goto after_4;
    // 0x8010A0C0: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_4:
    // 0x8010A0C4: lw          $t9, 0xCC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XCC);
    // 0x8010A0C8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010A0CC: mov.s       $f24, $f0
    CHECK_FR(ctx, 24);
    CHECK_FR(ctx, 0);
    ctx->f24.fl = ctx->f0.fl;
    // 0x8010A0D0: lw          $a0, 0x0($t9)
    ctx->r4 = MEM_W(ctx->r25, 0X0);
    // 0x8010A0D4: lwc1        $f22, 0x64B0($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X64B0);
    // 0x8010A0D8: or          $s6, $zero, $zero
    ctx->r22 = 0 | 0;
    // 0x8010A0DC: beq         $a0, $zero, L_8010A2B8
    if (ctx->r4 == 0) {
        // 0x8010A0E0: addiu       $s4, $sp, 0x7C
        ctx->r20 = ADD32(ctx->r29, 0X7C);
            goto L_8010A2B8;
    }
    // 0x8010A0E0: addiu       $s4, $sp, 0x7C
    ctx->r20 = ADD32(ctx->r29, 0X7C);
    // 0x8010A0E4: addiu       $s2, $sp, 0x70
    ctx->r18 = ADD32(ctx->r29, 0X70);
L_8010A0E8:
    // 0x8010A0E8: jal         0x800E9E88
    // 0x8010A0EC: nop

    func_800E9E88(rdram, ctx);
        goto after_5;
    // 0x8010A0EC: nop

    after_5:
    // 0x8010A0F0: lw          $t0, 0xCC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XCC);
    // 0x8010A0F4: sw          $v0, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r2;
    // 0x8010A0F8: jal         0x800E9EB4
    // 0x8010A0FC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    func_800E9EB4(rdram, ctx);
        goto after_6;
    // 0x8010A0FC: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    after_6:
    // 0x8010A100: lw          $t1, 0xA8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XA8);
    // 0x8010A104: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x8010A108: lw          $v1, 0xE0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE0);
    // 0x8010A10C: sltu        $at, $t1, $v0
    ctx->r1 = ctx->r9 < ctx->r2 ? 1 : 0;
    // 0x8010A110: beql        $at, $zero, L_8010A2A4
    if (ctx->r1 == 0) {
        // 0x8010A114: lw          $v0, 0xCC($sp)
        ctx->r2 = MEM_W(ctx->r29, 0XCC);
            goto L_8010A2A4;
    }
    goto skip_1;
    // 0x8010A114: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
    skip_1:
L_8010A118:
    // 0x8010A118: lw          $t2, 0xA8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XA8);
    // 0x8010A11C: lw          $v0, 0x8($t2)
    ctx->r2 = MEM_W(ctx->r10, 0X8);
    // 0x8010A120: sll         $t4, $v0, 27
    ctx->r12 = S32(ctx->r2 << 27);
    // 0x8010A124: bgez        $t4, L_8010A288
    if (SIGNED(ctx->r12) >= 0) {
        // 0x8010A128: andi        $t5, $v0, 0x1
        ctx->r13 = ctx->r2 & 0X1;
            goto L_8010A288;
    }
    // 0x8010A128: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x8010A12C: beq         $t5, $zero, L_8010A288
    if (ctx->r13 == 0) {
        // 0x8010A130: addiu       $t6, $v1, 0x1
        ctx->r14 = ADD32(ctx->r3, 0X1);
            goto L_8010A288;
    }
    // 0x8010A130: addiu       $t6, $v1, 0x1
    ctx->r14 = ADD32(ctx->r3, 0X1);
    // 0x8010A134: beq         $t6, $zero, L_8010A14C
    if (ctx->r14 == 0) {
        // 0x8010A138: lw          $s3, 0x0($t2)
        ctx->r19 = MEM_W(ctx->r10, 0X0);
            goto L_8010A14C;
    }
    // 0x8010A138: lw          $s3, 0x0($t2)
    ctx->r19 = MEM_W(ctx->r10, 0X0);
    // 0x8010A13C: lw          $t8, 0x24($s3)
    ctx->r24 = MEM_W(ctx->r19, 0X24);
    // 0x8010A140: srl         $t9, $t8, 22
    ctx->r25 = S32(U32(ctx->r24) >> 22);
    // 0x8010A144: bnel        $v1, $t9, L_8010A28C
    if (ctx->r3 != ctx->r25) {
        // 0x8010A148: lw          $t5, 0xA8($sp)
        ctx->r13 = MEM_W(ctx->r29, 0XA8);
            goto L_8010A28C;
    }
    goto skip_2;
    // 0x8010A148: lw          $t5, 0xA8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA8);
    skip_2:
L_8010A14C:
    // 0x8010A14C: lw          $t0, 0x28($s3)
    ctx->r8 = MEM_W(ctx->r19, 0X28);
    // 0x8010A150: sll         $t2, $t0, 22
    ctx->r10 = S32(ctx->r8 << 22);
    // 0x8010A154: bgezl       $t2, L_8010A28C
    if (SIGNED(ctx->r10) >= 0) {
        // 0x8010A158: lw          $t5, 0xA8($sp)
        ctx->r13 = MEM_W(ctx->r29, 0XA8);
            goto L_8010A28C;
    }
    goto skip_3;
    // 0x8010A158: lw          $t5, 0xA8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA8);
    skip_3:
    // 0x8010A15C: lhu         $v0, 0x14($s3)
    ctx->r2 = MEM_HU(ctx->r19, 0X14);
    // 0x8010A160: ori         $at, $zero, 0xFFFF
    ctx->r1 = 0 | 0XFFFF;
    // 0x8010A164: beql        $v0, $zero, L_8010A28C
    if (ctx->r2 == 0) {
        // 0x8010A168: lw          $t5, 0xA8($sp)
        ctx->r13 = MEM_W(ctx->r29, 0XA8);
            goto L_8010A28C;
    }
    goto skip_4;
    // 0x8010A168: lw          $t5, 0xA8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA8);
    skip_4:
    // 0x8010A16C: beql        $v0, $at, L_8010A28C
    if (ctx->r2 == ctx->r1) {
        // 0x8010A170: lw          $t5, 0xA8($sp)
        ctx->r13 = MEM_W(ctx->r29, 0XA8);
            goto L_8010A28C;
    }
    goto skip_5;
    // 0x8010A170: lw          $t5, 0xA8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA8);
    skip_5:
    // 0x8010A174: lhu         $t3, 0x18($s3)
    ctx->r11 = MEM_HU(ctx->r19, 0X18);
    // 0x8010A178: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x8010A17C: beql        $t4, $zero, L_8010A28C
    if (ctx->r12 == 0) {
        // 0x8010A180: lw          $t5, 0xA8($sp)
        ctx->r13 = MEM_W(ctx->r29, 0XA8);
            goto L_8010A28C;
    }
    goto skip_6;
    // 0x8010A180: lw          $t5, 0xA8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA8);
    skip_6:
    // 0x8010A184: jal         0x80106790
    // 0x8010A188: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    func_80106790(rdram, ctx);
        goto after_7;
    // 0x8010A188: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    after_7:
    // 0x8010A18C: lw          $t5, 0x94($v0)
    ctx->r13 = MEM_W(ctx->r2, 0X94);
    // 0x8010A190: or          $s5, $v0, $zero
    ctx->r21 = ctx->r2 | 0;
    // 0x8010A194: sll         $t6, $t5, 14
    ctx->r14 = S32(ctx->r13 << 14);
    // 0x8010A198: bltzl       $t6, L_8010A1AC
    if (SIGNED(ctx->r14) < 0) {
        // 0x8010A19C: lw          $t8, 0x64($v0)
        ctx->r24 = MEM_W(ctx->r2, 0X64);
            goto L_8010A1AC;
    }
    goto skip_7;
    // 0x8010A19C: lw          $t8, 0x64($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X64);
    skip_7:
    // 0x8010A1A0: b           L_8010A288
    // 0x8010A1A4: lw          $v1, 0xE0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE0);
        goto L_8010A288;
    // 0x8010A1A4: lw          $v1, 0xE0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE0);
    // 0x8010A1A8: lw          $t8, 0x64($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X64);
L_8010A1AC:
    // 0x8010A1AC: lw          $t2, 0xC8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC8);
    // 0x8010A1B0: sll         $t0, $t8, 14
    ctx->r8 = S32(ctx->r24 << 14);
    // 0x8010A1B4: bltz        $t0, L_8010A1D4
    if (SIGNED(ctx->r8) < 0) {
        // 0x8010A1B8: nop
    
            goto L_8010A1D4;
    }
    // 0x8010A1B8: nop

    // 0x8010A1BC: lhu         $t1, 0x66($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X66);
    // 0x8010A1C0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8010A1C4: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    // 0x8010A1C8: and         $t3, $t1, $t2
    ctx->r11 = ctx->r9 & ctx->r10;
    // 0x8010A1CC: beq         $t3, $zero, L_8010A1DC
    if (ctx->r11 == 0) {
        // 0x8010A1D0: nop
    
            goto L_8010A1DC;
    }
    // 0x8010A1D0: nop

L_8010A1D4:
    // 0x8010A1D4: b           L_8010A288
    // 0x8010A1D8: lw          $v1, 0xE0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE0);
        goto L_8010A288;
    // 0x8010A1D8: lw          $v1, 0xE0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE0);
L_8010A1DC:
    // 0x8010A1DC: jal         0x8010108C
    // 0x8010A1E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8010108C(rdram, ctx);
        goto after_8;
    // 0x8010A1E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_8:
    // 0x8010A1E4: blez        $v0, L_8010A1FC
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8010A1E8: or          $s1, $v0, $zero
        ctx->r17 = ctx->r2 | 0;
            goto L_8010A1FC;
    }
    // 0x8010A1E8: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x8010A1EC: jal         0x80101080
    // 0x8010A1F0: nop

    func_80101080(rdram, ctx);
        goto after_9;
    // 0x8010A1F0: nop

    after_9:
    // 0x8010A1F4: b           L_8010A210
    // 0x8010A1F8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
        goto L_8010A210;
    // 0x8010A1F8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
L_8010A1FC:
    // 0x8010A1FC: addiu       $s0, $sp, 0x88
    ctx->r16 = ADD32(ctx->r29, 0X88);
    // 0x8010A200: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8010A204: jal         0x80103DFC
    // 0x8010A208: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_80103DFC(rdram, ctx);
        goto after_10;
    // 0x8010A208: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_10:
    // 0x8010A20C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
L_8010A210:
    // 0x8010A210: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    // 0x8010A214: beq         $s1, $zero, L_8010A284
    if (ctx->r17 == 0) {
        // 0x8010A218: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_8010A284;
    }
    // 0x8010A218: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_8010A21C:
    // 0x8010A21C: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    // 0x8010A220: jal         0x800EE7F8
    // 0x8010A224: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_11;
    // 0x8010A224: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x8010A228: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8010A22C: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    // 0x8010A230: jal         0x800EFB24
    // 0x8010A234: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    func_800EFB24(rdram, ctx);
        goto after_12;
    // 0x8010A234: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    after_12:
    // 0x8010A238: jal         0x800EEFD4
    // 0x8010A23C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    func_800EEFD4(rdram, ctx);
        goto after_13;
    // 0x8010A23C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_13:
    // 0x8010A240: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x8010A244: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8010A248: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8010A24C: bc1fl       L_8010A278
    if (!c1cs) {
        // 0x8010A250: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_8010A278;
    }
    goto skip_8;
    // 0x8010A250: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    skip_8:
    // 0x8010A254: mfc1        $a2, $f26
    ctx->r6 = (int32_t)ctx->f26.u32l;
    // 0x8010A258: mfc1        $a3, $f24
    ctx->r7 = (int32_t)ctx->f24.u32l;
    // 0x8010A25C: jal         0x800F0BD0
    // 0x8010A260: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    func_800F0BD0(rdram, ctx);
        goto after_14;
    // 0x8010A260: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_14:
    // 0x8010A264: beql        $v0, $zero, L_8010A278
    if (ctx->r2 == 0) {
        // 0x8010A268: or          $v0, $s1, $zero
        ctx->r2 = ctx->r17 | 0;
            goto L_8010A278;
    }
    goto skip_9;
    // 0x8010A268: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
    skip_9:
    // 0x8010A26C: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
    // 0x8010A270: or          $s6, $s3, $zero
    ctx->r22 = ctx->r19 | 0;
    // 0x8010A274: or          $v0, $s1, $zero
    ctx->r2 = ctx->r17 | 0;
L_8010A278:
    // 0x8010A278: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8010A27C: bne         $s1, $zero, L_8010A21C
    if (ctx->r17 != 0) {
        // 0x8010A280: addiu       $s1, $s1, -0x1
        ctx->r17 = ADD32(ctx->r17, -0X1);
            goto L_8010A21C;
    }
    // 0x8010A280: addiu       $s1, $s1, -0x1
    ctx->r17 = ADD32(ctx->r17, -0X1);
L_8010A284:
    // 0x8010A284: lw          $v1, 0xE0($sp)
    ctx->r3 = MEM_W(ctx->r29, 0XE0);
L_8010A288:
    // 0x8010A288: lw          $t5, 0xA8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XA8);
L_8010A28C:
    // 0x8010A28C: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x8010A290: addiu       $t7, $t5, 0xC
    ctx->r15 = ADD32(ctx->r13, 0XC);
    // 0x8010A294: sltu        $at, $t7, $t6
    ctx->r1 = ctx->r15 < ctx->r14 ? 1 : 0;
    // 0x8010A298: bne         $at, $zero, L_8010A118
    if (ctx->r1 != 0) {
        // 0x8010A29C: sw          $t7, 0xA8($sp)
        MEM_W(0XA8, ctx->r29) = ctx->r15;
            goto L_8010A118;
    }
    // 0x8010A29C: sw          $t7, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r15;
    // 0x8010A2A0: lw          $v0, 0xCC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XCC);
L_8010A2A4:
    // 0x8010A2A4: lw          $a0, 0x4($v0)
    ctx->r4 = MEM_W(ctx->r2, 0X4);
    // 0x8010A2A8: addiu       $v0, $v0, 0x4
    ctx->r2 = ADD32(ctx->r2, 0X4);
    // 0x8010A2AC: sw          $v0, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r2;
    // 0x8010A2B0: bne         $a0, $zero, L_8010A0E8
    if (ctx->r4 != 0) {
        // 0x8010A2B4: nop
    
            goto L_8010A0E8;
    }
    // 0x8010A2B4: nop

L_8010A2B8:
    // 0x8010A2B8: lw          $ra, 0x5C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X5C);
    // 0x8010A2BC: or          $v0, $s6, $zero
    ctx->r2 = ctx->r22 | 0;
    // 0x8010A2C0: lw          $s6, 0x50($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X50);
    // 0x8010A2C4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8010A2C8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8010A2CC: ldc1        $f24, 0x28($sp)
    CHECK_FR(ctx, 24);
    ctx->f24.u64 = LD(ctx->r29, 0X28);
    // 0x8010A2D0: ldc1        $f26, 0x30($sp)
    CHECK_FR(ctx, 26);
    ctx->f26.u64 = LD(ctx->r29, 0X30);
    // 0x8010A2D4: lw          $s0, 0x38($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X38);
    // 0x8010A2D8: lw          $s1, 0x3C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X3C);
    // 0x8010A2DC: lw          $s2, 0x40($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X40);
    // 0x8010A2E0: lw          $s3, 0x44($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X44);
    // 0x8010A2E4: lw          $s4, 0x48($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X48);
    // 0x8010A2E8: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x8010A2EC: lw          $s7, 0x54($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X54);
    // 0x8010A2F0: lw          $fp, 0x58($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X58);
    // 0x8010A2F4: jr          $ra
    // 0x8010A2F8: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
    return;
    // 0x8010A2F8: addiu       $sp, $sp, 0xD0
    ctx->r29 = ADD32(ctx->r29, 0XD0);
;}
RECOMP_FUNC void func_8010A2FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A2FC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8010A300: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x8010A304: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x8010A308: or          $s3, $a1, $zero
    ctx->r19 = ctx->r5 | 0;
    // 0x8010A30C: or          $s4, $a2, $zero
    ctx->r20 = ctx->r6 | 0;
    // 0x8010A310: sw          $ra, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r31;
    // 0x8010A314: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8010A318: or          $s0, $a0, $zero
    ctx->r16 = ctx->r4 | 0;
    // 0x8010A31C: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x8010A320: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x8010A324: sdc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X20, ctx->r29);
    // 0x8010A328: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x8010A32C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8010A330: jal         0x8010108C
    // 0x8010A334: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    func_8010108C(rdram, ctx);
        goto after_0;
    // 0x8010A334: addiu       $a1, $zero, 0xA2
    ctx->r5 = ADD32(0, 0XA2);
    after_0:
    // 0x8010A338: blez        $v0, L_8010A3B4
    if (SIGNED(ctx->r2) <= 0) {
        // 0x8010A33C: or          $s2, $v0, $zero
        ctx->r18 = ctx->r2 | 0;
            goto L_8010A3B4;
    }
    // 0x8010A33C: or          $s2, $v0, $zero
    ctx->r18 = ctx->r2 | 0;
    // 0x8010A340: jal         0x80101080
    // 0x8010A344: nop

    func_80101080(rdram, ctx);
        goto after_1;
    // 0x8010A344: nop

    after_1:
    // 0x8010A348: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    // 0x8010A34C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010A350: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8010A354: lwc1        $f22, 0x64B4($at)
    ctx->f22.u32l = MEM_W(ctx->r1, 0X64B4);
    // 0x8010A358: beq         $s2, $zero, L_8010A3C0
    if (ctx->r18 == 0) {
        // 0x8010A35C: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_8010A3C0;
    }
    // 0x8010A35C: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x8010A360: addiu       $s1, $sp, 0x48
    ctx->r17 = ADD32(ctx->r29, 0X48);
L_8010A364:
    // 0x8010A364: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010A368: jal         0x800EE7F8
    // 0x8010A36C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_2;
    // 0x8010A36C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x8010A370: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8010A374: jal         0x800EEB40
    // 0x8010A378: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    func_800EEB40(rdram, ctx);
        goto after_3;
    // 0x8010A378: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_3:
    // 0x8010A37C: c.lt.s      $f0, $f22
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 22);
    c1cs = ctx->f0.fl < ctx->f22.fl;
    // 0x8010A380: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x8010A384: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x8010A388: bc1fl       L_8010A3A0
    if (!c1cs) {
        // 0x8010A38C: or          $v1, $s2, $zero
        ctx->r3 = ctx->r18 | 0;
            goto L_8010A3A0;
    }
    goto skip_0;
    // 0x8010A38C: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
    skip_0:
    // 0x8010A390: jal         0x800EE7F8
    // 0x8010A394: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    func_800EE7F8(rdram, ctx);
        goto after_4;
    // 0x8010A394: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_4:
    // 0x8010A398: mov.s       $f22, $f20
    CHECK_FR(ctx, 22);
    CHECK_FR(ctx, 20);
    ctx->f22.fl = ctx->f20.fl;
    // 0x8010A39C: or          $v1, $s2, $zero
    ctx->r3 = ctx->r18 | 0;
L_8010A3A0:
    // 0x8010A3A0: addiu       $s0, $s0, 0xC
    ctx->r16 = ADD32(ctx->r16, 0XC);
    // 0x8010A3A4: bne         $s2, $zero, L_8010A364
    if (ctx->r18 != 0) {
        // 0x8010A3A8: addiu       $s2, $s2, -0x1
        ctx->r18 = ADD32(ctx->r18, -0X1);
            goto L_8010A364;
    }
    // 0x8010A3A8: addiu       $s2, $s2, -0x1
    ctx->r18 = ADD32(ctx->r18, -0X1);
    // 0x8010A3AC: b           L_8010A3C4
    // 0x8010A3B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
        goto L_8010A3C4;
    // 0x8010A3B0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8010A3B4:
    // 0x8010A3B4: lw          $a0, 0x0($s0)
    ctx->r4 = MEM_W(ctx->r16, 0X0);
    // 0x8010A3B8: jal         0x800EC75C
    // 0x8010A3BC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    func_800EC75C(rdram, ctx);
        goto after_5;
    // 0x8010A3BC: or          $a1, $s3, $zero
    ctx->r5 = ctx->r19 | 0;
    after_5:
L_8010A3C0:
    // 0x8010A3C0: lw          $ra, 0x3C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X3C);
L_8010A3C4:
    // 0x8010A3C4: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x8010A3C8: ldc1        $f22, 0x20($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X20);
    // 0x8010A3CC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8010A3D0: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x8010A3D4: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8010A3D8: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x8010A3DC: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x8010A3E0: jr          $ra
    // 0x8010A3E4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8010A3E4: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8010A3E8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A3E8: lui         $at, 0x4380
    ctx->r1 = S32(0X4380 << 16);
    // 0x8010A3EC: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8010A3F0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8010A3F4: nop

    // 0x8010A3F8: mul.s       $f6, $f4, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x8010A3FC: trunc.w.s   $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = TRUNC_W_S(ctx->f6.fl);
    // 0x8010A400: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x8010A404: jr          $ra
    // 0x8010A408: sh          $t7, 0x92($a0)
    MEM_H(0X92, ctx->r4) = ctx->r15;
    return;
    // 0x8010A408: sh          $t7, 0x92($a0)
    MEM_H(0X92, ctx->r4) = ctx->r15;
;}
RECOMP_FUNC void func_8010A40C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A40C: lh          $t6, 0x92($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X92);
    // 0x8010A410: lui         $at, 0x3B80
    ctx->r1 = S32(0X3B80 << 16);
    // 0x8010A414: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8010A418: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8010A41C: nop

    // 0x8010A420: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8010A424: mul.s       $f0, $f6, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f0.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8010A428: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010A430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A430: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010A434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010A438: jal         0x80102F74
    // 0x8010A43C: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    func_80102F74(rdram, ctx);
        goto after_0;
    // 0x8010A43C: ori         $a1, $zero, 0x8000
    ctx->r5 = 0 | 0X8000;
    after_0:
    // 0x8010A440: beq         $v0, $zero, L_8010A450
    if (ctx->r2 == 0) {
        // 0x8010A444: lui         $t6, 0x8012
        ctx->r14 = S32(0X8012 << 16);
            goto L_8010A450;
    }
    // 0x8010A444: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x8010A448: b           L_8010A560
    // 0x8010A44C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8010A560;
    // 0x8010A44C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010A450:
    // 0x8010A450: lbu         $t6, 0x762C($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X762C);
    // 0x8010A454: addiu       $t7, $t6, -0xF
    ctx->r15 = ADD32(ctx->r14, -0XF);
    // 0x8010A458: sltiu       $at, $t7, 0xC
    ctx->r1 = ctx->r15 < 0XC ? 1 : 0;
    // 0x8010A45C: beq         $at, $zero, L_8010A55C
    if (ctx->r1 == 0) {
        // 0x8010A460: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8010A55C;
    }
    // 0x8010A460: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8010A464: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010A468: addu        $at, $at, $t7
    gpr jr_addend_8010A470 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8010A46C: lw          $t7, 0x64B8($at)
    ctx->r15 = ADD32(ctx->r1, 0X64B8);
    // 0x8010A470: jr          $t7
    // 0x8010A474: nop

    switch (jr_addend_8010A470 >> 2) {
        case 0: goto L_8010A4A4; break;
        case 1: goto L_8010A490; break;
        case 2: goto L_8010A55C; break;
        case 3: goto L_8010A4B8; break;
        case 4: goto L_8010A478; break;
        case 5: goto L_8010A4CC; break;
        case 6: goto L_8010A4E0; break;
        case 7: goto L_8010A4F8; break;
        case 8: goto L_8010A50C; break;
        case 9: goto L_8010A520; break;
        case 10: goto L_8010A534; break;
        case 11: goto L_8010A548; break;
        default: switch_error(__func__, 0x8010A470, 0x801264B8);
    }
    // 0x8010A474: nop

L_8010A478:
    // 0x8010A478: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8010A47C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8010A480: jal         0x800DC298
    // 0x8010A484: nop

    func_800DC298(rdram, ctx);
        goto after_1;
    // 0x8010A484: nop

    after_1:
    // 0x8010A488: b           L_8010A564
    // 0x8010A48C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010A564;
    // 0x8010A48C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010A490:
    // 0x8010A490: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010A494: jal         0x800DC298
    // 0x8010A498: lwc1        $f12, 0x64E8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64E8);
    func_800DC298(rdram, ctx);
        goto after_2;
    // 0x8010A498: lwc1        $f12, 0x64E8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64E8);
    after_2:
    // 0x8010A49C: b           L_8010A564
    // 0x8010A4A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010A564;
    // 0x8010A4A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010A4A4:
    // 0x8010A4A4: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010A4A8: jal         0x800DC298
    // 0x8010A4AC: lwc1        $f12, 0x64EC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64EC);
    func_800DC298(rdram, ctx);
        goto after_3;
    // 0x8010A4AC: lwc1        $f12, 0x64EC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64EC);
    after_3:
    // 0x8010A4B0: b           L_8010A564
    // 0x8010A4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010A564;
    // 0x8010A4B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010A4B8:
    // 0x8010A4B8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010A4BC: jal         0x800DC298
    // 0x8010A4C0: lwc1        $f12, 0x64F0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64F0);
    func_800DC298(rdram, ctx);
        goto after_4;
    // 0x8010A4C0: lwc1        $f12, 0x64F0($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64F0);
    after_4:
    // 0x8010A4C4: b           L_8010A564
    // 0x8010A4C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010A564;
    // 0x8010A4C8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010A4CC:
    // 0x8010A4CC: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010A4D0: jal         0x800DC298
    // 0x8010A4D4: lwc1        $f12, 0x64F4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64F4);
    func_800DC298(rdram, ctx);
        goto after_5;
    // 0x8010A4D4: lwc1        $f12, 0x64F4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64F4);
    after_5:
    // 0x8010A4D8: b           L_8010A564
    // 0x8010A4DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010A564;
    // 0x8010A4DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010A4E0:
    // 0x8010A4E0: lui         $at, 0x3F00
    ctx->r1 = S32(0X3F00 << 16);
    // 0x8010A4E4: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8010A4E8: jal         0x800DC298
    // 0x8010A4EC: nop

    func_800DC298(rdram, ctx);
        goto after_6;
    // 0x8010A4EC: nop

    after_6:
    // 0x8010A4F0: b           L_8010A564
    // 0x8010A4F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010A564;
    // 0x8010A4F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010A4F8:
    // 0x8010A4F8: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010A4FC: jal         0x800DC298
    // 0x8010A500: lwc1        $f12, 0x64F8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64F8);
    func_800DC298(rdram, ctx);
        goto after_7;
    // 0x8010A500: lwc1        $f12, 0x64F8($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64F8);
    after_7:
    // 0x8010A504: b           L_8010A564
    // 0x8010A508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010A564;
    // 0x8010A508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010A50C:
    // 0x8010A50C: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010A510: jal         0x800DC298
    // 0x8010A514: lwc1        $f12, 0x64FC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64FC);
    func_800DC298(rdram, ctx);
        goto after_8;
    // 0x8010A514: lwc1        $f12, 0x64FC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X64FC);
    after_8:
    // 0x8010A518: b           L_8010A564
    // 0x8010A51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010A564;
    // 0x8010A51C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010A520:
    // 0x8010A520: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010A524: jal         0x800DC298
    // 0x8010A528: lwc1        $f12, 0x6500($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6500);
    func_800DC298(rdram, ctx);
        goto after_9;
    // 0x8010A528: lwc1        $f12, 0x6500($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6500);
    after_9:
    // 0x8010A52C: b           L_8010A564
    // 0x8010A530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010A564;
    // 0x8010A530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010A534:
    // 0x8010A534: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010A538: jal         0x800DC298
    // 0x8010A53C: lwc1        $f12, 0x6504($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6504);
    func_800DC298(rdram, ctx);
        goto after_10;
    // 0x8010A53C: lwc1        $f12, 0x6504($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6504);
    after_10:
    // 0x8010A540: b           L_8010A564
    // 0x8010A544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010A564;
    // 0x8010A544: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010A548:
    // 0x8010A548: lui         $at, 0x8012
    ctx->r1 = S32(0X8012 << 16);
    // 0x8010A54C: jal         0x800DC298
    // 0x8010A550: lwc1        $f12, 0x6508($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6508);
    func_800DC298(rdram, ctx);
        goto after_11;
    // 0x8010A550: lwc1        $f12, 0x6508($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X6508);
    after_11:
    // 0x8010A554: b           L_8010A564
    // 0x8010A558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8010A564;
    // 0x8010A558: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010A55C:
    // 0x8010A55C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010A560:
    // 0x8010A560: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010A564:
    // 0x8010A564: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010A568: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010A570(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A570: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010A574: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010A578: jal         0x8010A5B0
    // 0x8010A57C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8010A5B0(rdram, ctx);
        goto after_0;
    // 0x8010A57C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8010A580: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010A584: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010A588: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010A590(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A590: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010A594: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010A598: jal         0x8010A5B0
    // 0x8010A59C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8010A5B0(rdram, ctx);
        goto after_0;
    // 0x8010A59C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x8010A5A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010A5A4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010A5A8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010A5B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A5B0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010A5B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010A5B8: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010A5BC: jal         0x8010A610
    // 0x8010A5C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_8010A610(rdram, ctx);
        goto after_0;
    // 0x8010A5C0: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010A5C4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8010A5C8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8010A5CC: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x8010A5D0: beql        $t6, $zero, L_8010A5F0
    if (ctx->r14 == 0) {
        // 0x8010A5D4: lw          $v0, 0x0($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X0);
            goto L_8010A5F0;
    }
    goto skip_0;
    // 0x8010A5D4: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    skip_0:
    // 0x8010A5D8: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8010A5DC: lbu         $t8, 0x2A($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0X2A);
    // 0x8010A5E0: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x8010A5E4: b           L_8010A5FC
    // 0x8010A5E8: sb          $t9, 0x2A($v0)
    MEM_B(0X2A, ctx->r2) = ctx->r25;
        goto L_8010A5FC;
    // 0x8010A5E8: sb          $t9, 0x2A($v0)
    MEM_B(0X2A, ctx->r2) = ctx->r25;
    // 0x8010A5EC: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
L_8010A5F0:
    // 0x8010A5F0: lbu         $t0, 0x2A($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0X2A);
    // 0x8010A5F4: andi        $t1, $t0, 0xFFFD
    ctx->r9 = ctx->r8 & 0XFFFD;
    // 0x8010A5F8: sb          $t1, 0x2A($v0)
    MEM_B(0X2A, ctx->r2) = ctx->r9;
L_8010A5FC:
    // 0x8010A5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010A600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010A604: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    // 0x8010A608: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010A610(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A610: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8010A614: lw          $v0, 0x28($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X28);
    // 0x8010A618: sll         $t7, $v0, 22
    ctx->r15 = S32(ctx->r2 << 22);
    // 0x8010A61C: jr          $ra
    // 0x8010A620: srl         $v0, $t7, 31
    ctx->r2 = S32(U32(ctx->r15) >> 31);
    return;
    // 0x8010A620: srl         $v0, $t7, 31
    ctx->r2 = S32(U32(ctx->r15) >> 31);
;}
RECOMP_FUNC void func_8010A624(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A624: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8010A628: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x8010A62C: lbu         $t7, 0xB($v0)
    ctx->r15 = MEM_BU(ctx->r2, 0XB);
    // 0x8010A630: andi        $t8, $t7, 0xFFF7
    ctx->r24 = ctx->r15 & 0XFFF7;
    // 0x8010A634: jr          $ra
    // 0x8010A638: sb          $t8, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r24;
    return;
    // 0x8010A638: sb          $t8, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r24;
;}
RECOMP_FUNC void func_8010A63C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A63C: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8010A640: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x8010A644: lbu         $t8, 0xB($v0)
    ctx->r24 = MEM_BU(ctx->r2, 0XB);
    // 0x8010A648: ori         $t9, $t8, 0x8
    ctx->r25 = ctx->r24 | 0X8;
    // 0x8010A64C: jr          $ra
    // 0x8010A650: sb          $t9, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r25;
    return;
    // 0x8010A650: sb          $t9, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r25;
;}
RECOMP_FUNC void func_8010A654(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A654: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8010A658: lw          $v0, 0x0($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X0);
    // 0x8010A65C: lw          $v1, 0x8($v0)
    ctx->r3 = MEM_W(ctx->r2, 0X8);
    // 0x8010A660: sll         $t7, $v1, 28
    ctx->r15 = S32(ctx->r3 << 28);
    // 0x8010A664: srl         $t8, $t7, 31
    ctx->r24 = S32(U32(ctx->r15) >> 31);
    // 0x8010A668: beq         $a1, $zero, L_8010A684
    if (ctx->r5 == 0) {
            // 0x8010A66C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    func_8010A684(rdram, ctx);
    return;
    }
    // 0x8010A66C: or          $v1, $t8, $zero
    ctx->r3 = ctx->r24 | 0;
    // 0x8010A670: lbu         $t0, 0xB($v0)
    ctx->r8 = MEM_BU(ctx->r2, 0XB);
    // 0x8010A674: ori         $t1, $t0, 0x8
    ctx->r9 = ctx->r8 | 0X8;
    // 0x8010A678: sb          $t1, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r9;
    // 0x8010A67C: jr          $ra
    // 0x8010A680: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
    return;
    // 0x8010A680: or          $v0, $t8, $zero
    ctx->r2 = ctx->r24 | 0;
;}
RECOMP_FUNC void func_8010A684(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A684: lbu         $t2, 0xB($v0)
    ctx->r10 = MEM_BU(ctx->r2, 0XB);
    // 0x8010A688: andi        $t3, $t2, 0xFFF7
    ctx->r11 = ctx->r10 & 0XFFF7;
    // 0x8010A68C: sb          $t3, 0xB($v0)
    MEM_B(0XB, ctx->r2) = ctx->r11;
    // 0x8010A690: jr          $ra
    // 0x8010A694: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
    return;
    // 0x8010A694: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
;}
RECOMP_FUNC void func_8010A698(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A698: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8010A69C: lw          $t7, 0x0($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X0);
    // 0x8010A6A0: lw          $v0, 0x8($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X8);
    // 0x8010A6A4: sll         $t8, $v0, 28
    ctx->r24 = S32(ctx->r2 << 28);
    // 0x8010A6A8: jr          $ra
    // 0x8010A6AC: srl         $v0, $t8, 31
    ctx->r2 = S32(U32(ctx->r24) >> 31);
    return;
    // 0x8010A6AC: srl         $v0, $t8, 31
    ctx->r2 = S32(U32(ctx->r24) >> 31);
;}
RECOMP_FUNC void func_8010A6B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A6B0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8010A6B4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010A6B8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8010A6BC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8010A6C0: jal         0x800F4B4C
    // 0x8010A6C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    func_800F4B4C(rdram, ctx);
        goto after_0;
    // 0x8010A6C4: or          $a0, $a1, $zero
    ctx->r4 = ctx->r5 | 0;
    after_0:
    // 0x8010A6C8: bne         $v0, $zero, L_8010A6D8
    if (ctx->r2 != 0) {
        // 0x8010A6CC: lw          $a0, 0x44($sp)
        ctx->r4 = MEM_W(ctx->r29, 0X44);
            goto L_8010A6D8;
    }
    // 0x8010A6CC: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x8010A6D0: b           L_8010A718
    // 0x8010A6D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010A718;
    // 0x8010A6D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8010A6D8:
    // 0x8010A6D8: jal         0x800F57F0
    // 0x8010A6DC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800F57F0(rdram, ctx);
        goto after_1;
    // 0x8010A6DC: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_1:
    // 0x8010A6E0: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8010A6E4: jal         0x80103DFC
    // 0x8010A6E8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    func_80103DFC(rdram, ctx);
        goto after_2;
    // 0x8010A6E8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_2:
    // 0x8010A6EC: lui         $a3, 0x4A
    ctx->r7 = S32(0X4A << 16);
    // 0x8010A6F0: ori         $a3, $a3, 0x21
    ctx->r7 = ctx->r7 | 0X21;
    // 0x8010A6F4: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x8010A6F8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x8010A6FC: jal         0x800C6A7C
    // 0x8010A700: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    func_800C6A7C(rdram, ctx);
        goto after_3;
    // 0x8010A700: addiu       $a2, $sp, 0x1C
    ctx->r6 = ADD32(ctx->r29, 0X1C);
    after_3:
    // 0x8010A704: beql        $v0, $zero, L_8010A718
    if (ctx->r2 == 0) {
        // 0x8010A708: addiu       $v0, $zero, 0x1
        ctx->r2 = ADD32(0, 0X1);
            goto L_8010A718;
    }
    goto skip_0;
    // 0x8010A708: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    skip_0:
    // 0x8010A70C: b           L_8010A718
    // 0x8010A710: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8010A718;
    // 0x8010A710: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8010A714: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8010A718:
    // 0x8010A718: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010A71C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8010A720: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010A730(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A730: sw          $a0, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r4;
    // 0x8010A734: jr          $ra
    // 0x8010A738: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    return;
    // 0x8010A738: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
;}
RECOMP_FUNC void func_8010A73C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A73C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010A740: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010A744: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010A748: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010A74C: jal         0x801039E4
    // 0x8010A750: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    func_801039E4(rdram, ctx);
        goto after_0;
    // 0x8010A750: lw          $a0, 0x0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X0);
    after_0:
    // 0x8010A754: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010A758: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010A75C: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010A764(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A764: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010A768: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010A76C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8010A770: jal         0x80100368
    // 0x8010A774: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    func_80100368(rdram, ctx);
        goto after_0;
    // 0x8010A774: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8010A778: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x8010A77C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8010A780: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8010A784: jalr        $t9
    // 0x8010A788: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8010A788: nop

    after_1:
    // 0x8010A78C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8010A790: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010A794: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010A79C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A79C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8010A7A0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8010A7A4: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8010A7A8: lh          $t7, 0x7E($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X7E);
    // 0x8010A7AC: bgezl       $t7, L_8010A7F4
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8010A7B0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010A7F4;
    }
    goto skip_0;
    // 0x8010A7B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8010A7B4: lw          $t8, 0x64($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X64);
    // 0x8010A7B8: sll         $t0, $t8, 14
    ctx->r8 = S32(ctx->r24 << 14);
    // 0x8010A7BC: bltzl       $t0, L_8010A7F4
    if (SIGNED(ctx->r8) < 0) {
        // 0x8010A7C0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010A7F4;
    }
    goto skip_1;
    // 0x8010A7C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8010A7C4: lhu         $t1, 0x64($a0)
    ctx->r9 = MEM_HU(ctx->r4, 0X64);
    // 0x8010A7C8: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x8010A7CC: beql        $t2, $zero, L_8010A7F4
    if (ctx->r10 == 0) {
        // 0x8010A7D0: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8010A7F4;
    }
    goto skip_2;
    // 0x8010A7D0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_2:
    // 0x8010A7D4: jal         0x80100368
    // 0x8010A7D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    func_80100368(rdram, ctx);
        goto after_0;
    // 0x8010A7D8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010A7DC: lw          $t9, 0x14($v0)
    ctx->r25 = MEM_W(ctx->r2, 0X14);
    // 0x8010A7E0: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8010A7E4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8010A7E8: jalr        $t9
    // 0x8010A7EC: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8010A7EC: nop

    after_1:
    // 0x8010A7F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8010A7F4:
    // 0x8010A7F4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8010A7F8: jr          $ra
    return;
;}
RECOMP_FUNC void func_8010A800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A800: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8010A804: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8010A808: sllv        $t8, $t6, $a1
    ctx->r24 = S32(ctx->r14 << (ctx->r5 & 31));
    // 0x8010A80C: lhu         $t1, 0x2A($v0)
    ctx->r9 = MEM_HU(ctx->r2, 0X2A);
    // 0x8010A810: sll         $t9, $t8, 1
    ctx->r25 = S32(ctx->r24 << 1);
    // 0x8010A814: andi        $t0, $t9, 0x1FE
    ctx->r8 = ctx->r25 & 0X1FE;
    // 0x8010A818: andi        $t2, $t1, 0xFE01
    ctx->r10 = ctx->r9 & 0XFE01;
    // 0x8010A81C: or          $t3, $t0, $t2
    ctx->r11 = ctx->r8 | ctx->r10;
    // 0x8010A820: jr          $ra
    // 0x8010A824: sh          $t3, 0x2A($v0)
    MEM_H(0X2A, ctx->r2) = ctx->r11;
    return;
    // 0x8010A824: sh          $t3, 0x2A($v0)
    MEM_H(0X2A, ctx->r2) = ctx->r11;
;}
RECOMP_FUNC void func_8010A828(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A828: lw          $v0, 0x0($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X0);
    // 0x8010A82C: sll         $t7, $a1, 1
    ctx->r15 = S32(ctx->r5 << 1);
    // 0x8010A830: andi        $t8, $t7, 0x1FE
    ctx->r24 = ctx->r15 & 0X1FE;
    // 0x8010A834: lhu         $t9, 0x2A($v0)
    ctx->r25 = MEM_HU(ctx->r2, 0X2A);
    // 0x8010A838: andi        $t0, $t9, 0xFE01
    ctx->r8 = ctx->r25 & 0XFE01;
    // 0x8010A83C: or          $t1, $t8, $t0
    ctx->r9 = ctx->r24 | ctx->r8;
    // 0x8010A840: jr          $ra
    // 0x8010A844: sh          $t1, 0x2A($v0)
    MEM_H(0X2A, ctx->r2) = ctx->r9;
    return;
    // 0x8010A844: sh          $t1, 0x2A($v0)
    MEM_H(0X2A, ctx->r2) = ctx->r9;
;}
RECOMP_FUNC void func_8010A848(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A848: lw          $t6, 0x0($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X0);
    // 0x8010A84C: lw          $v0, 0x28($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X28);
    // 0x8010A850: sll         $t7, $v0, 23
    ctx->r15 = S32(ctx->r2 << 23);
    // 0x8010A854: jr          $ra
    // 0x8010A858: srl         $v0, $t7, 24
    ctx->r2 = S32(U32(ctx->r15) >> 24);
    return;
    // 0x8010A858: srl         $v0, $t7, 24
    ctx->r2 = S32(U32(ctx->r15) >> 24);
;}
RECOMP_FUNC void func_8010A85C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A85C: lbu         $t8, 0x77($a0)
    ctx->r24 = MEM_BU(ctx->r4, 0X77);
    // 0x8010A860: andi        $t7, $a1, 0xF
    ctx->r15 = ctx->r5 & 0XF;
    // 0x8010A864: andi        $t9, $t8, 0xFFF0
    ctx->r25 = ctx->r24 & 0XFFF0;
    // 0x8010A868: or          $t0, $t7, $t9
    ctx->r8 = ctx->r15 | ctx->r25;
    // 0x8010A86C: jr          $ra
    // 0x8010A870: sb          $t0, 0x77($a0)
    MEM_B(0X77, ctx->r4) = ctx->r8;
    return;
    // 0x8010A870: sb          $t0, 0x77($a0)
    MEM_B(0X77, ctx->r4) = ctx->r8;
;}
RECOMP_FUNC void func_8010A874(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8010A874: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x8010A878: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8010A87C: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8010A880: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8010A884: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8010A888: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8010A88C: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8010A890: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8010A894: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8010A898: jal         0x800EB800
    // 0x8010A89C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    func_800EB800(rdram, ctx);
        goto after_0;
    // 0x8010A89C: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    after_0:
    // 0x8010A8A0: addiu       $s5, $sp, 0x40
    ctx->r21 = ADD32(ctx->r29, 0X40);
    // 0x8010A8A4: jal         0x800E3A30
    // 0x8010A8A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    func_800E3A30(rdram, ctx);
        goto after_1;
    // 0x8010A8A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    after_1:
    // 0x8010A8AC: addiu       $s6, $sp, 0x50
    ctx->r22 = ADD32(ctx->r29, 0X50);
    // 0x8010A8B0: jal         0x801067C4
    // 0x8010A8B4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_801067C4(rdram, ctx);
        goto after_2;
    // 0x8010A8B4: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_2:
    // 0x8010A8B8: beq         $v0, $zero, L_8010A94C
    if (ctx->r2 == 0) {
        // 0x8010A8BC: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8010A94C;
    }
    // 0x8010A8BC: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    // 0x8010A8C0: addiu       $s4, $zero, 0x7
    ctx->r20 = ADD32(0, 0X7);
L_8010A8C4:
    // 0x8010A8C4: lw          $s3, 0x0($v0)
    ctx->r19 = MEM_W(ctx->r2, 0X0);
    // 0x8010A8C8: lhu         $t6, 0x14($s3)
    ctx->r14 = MEM_HU(ctx->r19, 0X14);
    // 0x8010A8CC: beq         $t6, $zero, L_8010A93C
    if (ctx->r14 == 0) {
        // 0x8010A8D0: nop
    
            goto L_8010A93C;
    }
    // 0x8010A8D0: nop

    // 0x8010A8D4: lhu         $t7, 0x64($v0)
    ctx->r15 = MEM_HU(ctx->r2, 0X64);
    // 0x8010A8D8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x8010A8DC: beq         $t8, $zero, L_8010A93C
    if (ctx->r24 == 0) {
        // 0x8010A8E0: nop
    
            goto L_8010A93C;
    }
    // 0x8010A8E0: nop

    // 0x8010A8E4: lbu         $t9, 0x78($v0)
    ctx->r25 = MEM_BU(ctx->r2, 0X78);
    // 0x8010A8E8: beql        $t9, $zero, L_8010A904
    if (ctx->r25 == 0) {
        // 0x8010A8EC: lw          $s2, 0x28($s3)
        ctx->r18 = MEM_W(ctx->r19, 0X28);
            goto L_8010A904;
    }
    goto skip_0;
    // 0x8010A8EC: lw          $s2, 0x28($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X28);
    skip_0:
    // 0x8010A8F0: jal         0x8008A7B0
    // 0x8010A8F4: nop

    _subaddiezone_entrypoint_1(rdram, ctx);
        goto after_3;
    // 0x8010A8F4: nop

    after_3:
    // 0x8010A8F8: beq         $v0, $zero, L_8010A93C
    if (ctx->r2 == 0) {
        // 0x8010A8FC: nop
    
            goto L_8010A93C;
    }
    // 0x8010A8FC: nop

    // 0x8010A900: lw          $s2, 0x28($s3)
    ctx->r18 = MEM_W(ctx->r19, 0X28);
L_8010A904:
    // 0x8010A904: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8010A908: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8010A90C: sll         $t0, $s2, 23
    ctx->r8 = S32(ctx->r18 << 23);
    // 0x8010A910: srl         $s2, $t0, 24
    ctx->r18 = S32(U32(ctx->r8) >> 24);
L_8010A914:
    // 0x8010A914: and         $t2, $s2, $s1
    ctx->r10 = ctx->r18 & ctx->r17;
    // 0x8010A918: beq         $t2, $zero, L_8010A92C
    if (ctx->r10 == 0) {
        // 0x8010A91C: or          $a1, $s0, $zero
        ctx->r5 = ctx->r16 | 0;
            goto L_8010A92C;
    }
    // 0x8010A91C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8010A920: lw          $a0, 0x0($s3)
    ctx->r4 = MEM_W(ctx->r19, 0X0);
    // 0x8010A924: jal         0x800EB3D0
    // 0x8010A928: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    func_800EB3D0(rdram, ctx);
        goto after_4;
    // 0x8010A928: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    after_4:
L_8010A92C:
    // 0x8010A92C: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8010A930: sll         $t3, $s1, 1
    ctx->r11 = S32(ctx->r17 << 1);
    // 0x8010A934: bne         $s0, $s4, L_8010A914
    if (ctx->r16 != ctx->r20) {
        // 0x8010A938: or          $s1, $t3, $zero
        ctx->r17 = ctx->r11 | 0;
            goto L_8010A914;
    }
    // 0x8010A938: or          $s1, $t3, $zero
    ctx->r17 = ctx->r11 | 0;
L_8010A93C:
    // 0x8010A93C: jal         0x8010682C
    // 0x8010A940: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    func_8010682C(rdram, ctx);
        goto after_5;
    // 0x8010A940: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    after_5:
    // 0x8010A944: bne         $v0, $zero, L_8010A8C4
    if (ctx->r2 != 0) {
        // 0x8010A948: or          $a0, $v0, $zero
        ctx->r4 = ctx->r2 | 0;
            goto L_8010A8C4;
    }
    // 0x8010A948: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
L_8010A94C:
    // 0x8010A94C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8010A950: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8010A954: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8010A958: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8010A95C: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8010A960: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8010A964: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8010A968: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8010A96C: jr          $ra
    // 0x8010A970: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    return;
    // 0x8010A970: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
;}
